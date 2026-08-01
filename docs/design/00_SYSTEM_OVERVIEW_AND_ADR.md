# JOffice: 00_SYSTEM_OVERVIEW_AND_ADR.md

## 1. システムコンテキスト (C4 Model - Level 1: System Context)

`JOffice` は、Pure Lean 4 を基盤とし、Microsoft Office XP (2002) との完全機能・完全UI互換を達成するオフィススイート（Word XP, Excel XP, PowerPoint XP, Access XP）である。

```mermaid
graph TD
    User[ユーザー / Office XP 操作者] -->|GUI 操作 / マウス / キーボード| JOffice[JOffice Suite (Pure Lean 4)]
    JOffice -->|Zero-Copy O(1) Access| Symbol32[Symbol32 Character Registry]
    JOffice -->|AST / Evaluation| Lbir[Lbir VM Runtime]
    JOffice -->|Invariant Verification| Nomos[Nomos State Invariant Engine]
    JOffice -->|Binary I/O| Filesystem[OLE2 / CFBF & OpenXML Files]
    JOffice -->|Native Rendering| GPU[SDL2 / OpenGL Graphics Buffer]
```

---

## 2. コンテナデシジョン & ADR (Architecture Decision Records)

### [ADR-001] Pure Lean 4 によるコアエンジンと描画レイヤーの構築
* **コンテキスト**: 既存のC++基盤やブラウザ/Wasmフレームワークは、依存関係やセキュリティホール、環境依存性が大きく、形式証明の適用を著しく困難にする。
* **決定**: システムの全ロジック（UIウィジェット、レイアウト計算、スプレッドシート再計算、ファイルI/O）を Pure Lean 4 上に構築し、最下層の描画バッファ出力のみを C11 (SDL2/OpenGL) バインディング経由で実行する。
* **結果**: 完全な型安全性、決定論的挙動、および Nomos による数理的証明可能性を達成。

### [ADR-002] Symbol32 による全文字列・メタデータ表現の標準化
* **コンテキスト**: UTF-8/UTF-16 文字列の可変長処理は可変アロケーションを誘発し、レイアウト計算および文字境界探索で $O(N)$ のオーバーヘッドを生む。
* **決定**: JOffice 内の全文字、スタイルID、コマンドID、制御コードを Symbol32 (`uint32_t` 不変シンボル) として管理し、`.sreg` からのゼロコピーダイレクトアクセスを強制する。
* **结果**: メモリ割り当てフリーなテキスト解析・レイアウト計算と $O(1)$ プロパティ検索を実現。

### [ADR-003] LBIR VM による数式評価・レイアウト演算の統一
* **コンテキスト**: Excelの関数評価や Word のレイアウト評価ルールをアドホックに実装すると、循環評価による無限ループやデッドロックのリスクが生じる。
* **決定**: 動的な命令評価・式展開をすべて LBIR (Lean Bytecode Intermediate Representation) VM のスタックマシン表現に昇華し、型安全なバイナリ AST として評価する。
* **結果**: 式評価の決定論的実行と、評価状態の形式的隔離を保証。

### [ADR-004] Nomos による状態遷移とファイル非破壊性の形式証明
* **コンテキスト**: ドキュメントの編集、Undo/Redo、ファイル保存においてデータ欠損やファイル破損が起こるリスクを排除する必要がある。
* **決定**: Nomos フレームワークの契約（`Contract`）を定義し、編集状態の不変条件（`Invariant`）およびファイル保存時の非破壊性を Lean 4 定理として証明する。
* **結果**: 誤動作や状態汚染が構造的に不可能なシステム構造を担保。

---

## 3. モジュール構成 (C4 Model - Level 2: Containers)

JOffice は、明確に疎結合された5つのモジュール群で構成される。

1. `JOffice.Symbol32`: C11 `libsymbol32` との Lean 4 FFI バインディングおよび Symbol32 配列操作。
2. `JOffice.Lbir`: LBIR バイナリデコーダおよび数式/動的評価 VM インターフェース。
3. `JOffice.Nomos`: 状態不変条件、データモデル保証定理群。
4. `JOffice.Core`: Office XP (Word/Excel/PowerPoint/Access) の DOM、データ構造、ファイルフォーマット解釈部。
5. `JOffice.UI`: Office XP CommandBars、メタリックグラデーション、フラットツールバー、ドッキングウィンドウを描画する UI ウィジェットエンジン。
