import JOffice.Binary.OLE2

namespace JOffice.Binary.Word

/-- FIB (File Information Block) 構造体 -/
structure FIB where
  wIdent : UInt16    -- 0xA5EC
  nFib : UInt16      -- バージョン番号
  lid : UInt16       -- 言語ID
  pnNext : UInt16
  fDot : Bool
  fGlsry : Bool
  fComplex : Bool
  fHasPic : Bool
  cQuickSaves : UInt16
  deriving Inhabited, BEq, Repr

/-- Pure Lean 4 Word FIB パース関数 -/
def parseFIB (bytes : ByteArray) : Option FIB :=
  if bytes.size < 32 then none
  else
    let wIdentVal := bytes[0]!.toUInt16 ||| (bytes[1]!.toUInt16 <<< 8)
    let nFibVal := bytes[2]!.toUInt16 ||| (bytes[3]!.toUInt16 <<< 8)
    let lidVal := bytes[4]!.toUInt16 ||| (bytes[5]!.toUInt16 <<< 8)
    if wIdentVal != 0xA5EC then none
    else
      let flags := bytes[10]!
      some {
        wIdent := wIdentVal,
        nFib := nFibVal,
        lid := lidVal,
        pnNext := 0,
        fDot := (flags &&& 0x01) != 0,
        fGlsry := (flags &&& 0x02) != 0,
        fComplex := (flags &&& 0x04) != 0,
        fHasPic := (flags &&& 0x08) != 0,
        cQuickSaves := 0
      }

end JOffice.Binary.Word
