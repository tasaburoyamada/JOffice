namespace JOffice.Symbol32

/-- Symbol32 値オブジェクト (32bit 固定長不変識別子) -/
abbrev Symbol := UInt32

/-- 5層 FeatureMask 構造体 (64bit ビットフィールド) -/
structure FeatureMask where
  mask : UInt64
  deriving Inhabited, BEq, Repr

/-- 制御シンボルの判定 (改行: 0x10, タブ: 0x08, スペース: 0x04) -/
def isControlSymbol (mask : FeatureMask) : Bool :=
  (mask.mask &&& 0x000000000000001C) != 0

/-- Standard Registry (.sreg) 読み込み & FeatureMask デコーダ (Pure Lean 4 実装) -/
def decodeFeatureMask (bytes : ByteArray) (offset : Nat) : Option FeatureMask :=
  if offset + 8 <= bytes.size then
    let b0 := bytes[offset]!.toUInt64
    let b1 := bytes[offset + 1]!.toUInt64
    let b2 := bytes[offset + 2]!.toUInt64
    let b3 := bytes[offset + 3]!.toUInt64
    let b4 := bytes[offset + 4]!.toUInt64
    let b5 := bytes[offset + 5]!.toUInt64
    let b6 := bytes[offset + 6]!.toUInt64
    let b7 := bytes[offset + 7]!.toUInt64
    let maskVal := b0 ||| (b1 <<< 8) ||| (b2 <<< 16) ||| (b3 <<< 24) |||
                   (b4 <<< 32) ||| (b5 <<< 40) ||| (b6 <<< 48) ||| (b7 <<< 56)
    some { mask := maskVal }
  else
    none

end JOffice.Symbol32
