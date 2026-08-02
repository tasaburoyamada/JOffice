import JOffice.Binary.Excel

namespace JOffice.Binary.ExcelCompiler

open JOffice.Binary.Excel

/-- BIFF8 Ptg (Parsing Token) オペコード -/
inductive PtgOpcode where
  | ptgAdd : PtgOpcode   -- 0x03
  | ptgSub : PtgOpcode   -- 0x04
  | ptgMul : PtgOpcode   -- 0x05
  | ptgDiv : PtgOpcode   -- 0x06
  | ptgInt (val : UInt16) : PtgOpcode  -- 0x1E
  | ptgNum (val : Float) : PtgOpcode   -- 0x1F
  | ptgUnknown (code : UInt8) : PtgOpcode
  deriving Inhabited, BEq, Repr

/-- Ptg トークン解析関数 -/
def parsePtg (bytes : ByteArray) (offset : Nat) : Option (PtgOpcode × Nat) :=
  if offset < bytes.size then
    let code := bytes[offset]!
    match code with
    | 0x03 => some (PtgOpcode.ptgAdd, offset + 1)
    | 0x04 => some (PtgOpcode.ptgSub, offset + 1)
    | 0x05 => some (PtgOpcode.ptgMul, offset + 1)
    | 0x06 => some (PtgOpcode.ptgDiv, offset + 1)
    | 0x1E =>
      if offset + 3 <= bytes.size then
        let v := bytes[offset + 1]!.toUInt16 ||| (bytes[offset + 2]!.toUInt16 <<< 8)
        some (PtgOpcode.ptgInt v, offset + 3)
      else none
    | c => some (PtgOpcode.ptgUnknown c, offset + 1)
  else none

end JOffice.Binary.ExcelCompiler
