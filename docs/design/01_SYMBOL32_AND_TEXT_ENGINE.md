# JOffice: 01_SYMBOL32_AND_TEXT_ENGINE.md

## 1. 概要
`01_SYMBOL32_AND_TEXT_ENGINE` は、JOffice におけるテキスト処理、文字エンコーディング、および文字属性・レイアウトメトリクス取得の統合仕様を定義する。
本システムでは、すべての文字データ、制御コード、およびUIコマンド表現を `Symbol32` (`uint32_t`) として保持し、動的アロケーションを伴わない高速な走査とレイアウト計算を実現する。

---

## 2. Lean 4 データ構造定義

```lean
namespace JOffice.Symbol32

/-- Symbol32 の基本型（32bit 固定長不変識別子） -/
def Symbol := UInt32

/-- Symbol32 配列構造体（Zero-Copy バッファラップ） -/
structure SymbolBuffer where
  data : ByteArray
  length : Nat
  h_valid : data.size = length * 4

/-- Symbol32 の属性マスク（5層 FeatureMask: 64-bit ビットフィールド） -/
structure FeatureMask where
  mask : UInt64
  deriving Inhabited, BEq

/-- テキストメトリクス（Glyph 描画幅・高さ・アセンダ・ディセンダ） -/
structure GlyphMetrics where
  width : UInt16
  height : UInt16
  bearingX : Int16
  bearingY : Int16
  advanceX : UInt16
  deriving Inhabited, BEq

end JOffice.Symbol32
```

---

## 3. C11 FFI インターフェース設計

JOffice は C11 の `libsymbol32` コアライブラリと直接バインドし、$O(1)$ レジストリ検索を実行する。

### C11 FFI 宣言 (`src/symbol32_ffi.c`)
```c
#include <stdint.h>
#include <symbol32.h>

// Lean 4 用 Symbol32 検索ラッパー
uint64_t lean_symbol32_get_feature_mask(uint32_t sym) {
    return Symbol32_GetFeatureMask(sym);
}

void lean_symbol32_get_glyph_metrics(uint32_t sym, uint16_t* out_metrics) {
    Symbol32_GlyphMetrics metrics = Symbol32_GetGlyphMetrics(sym);
    out_metrics[0] = metrics.width;
    out_metrics[1] = metrics.height;
    out_metrics[2] = (uint16_t)metrics.bearingX;
    out_metrics[3] = (uint16_t)metrics.bearingY;
    out_metrics[4] = metrics.advanceX;
}
```

---

## 4. Word / Excel 向けレイアウト計算パイプライン

1. **Symbol32 トークナイズ**: 入力文字列（または OLE2 / OpenXML からパースされたコード）を `Array Symbol` に変換。
2. **FeatureMask スキャン**: 制御シンボル（改行、タブ、セルの区切り）およびテキスト属性（太字、斜体、下線）を 64-bit ビットフィールド走査により判定。
3. **Glyph Metrics 取得**: レジストリ `.sreg` からアロケーションフリーで幅・幅進量（`advanceX`）を取得。
4. **カーソル・行分割計算**: 行幅リミットに基づく改行ルール（禁則処理・Word wrap）を決定論的に適用。
