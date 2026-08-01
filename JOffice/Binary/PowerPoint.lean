import JOffice.Binary.OLE2

namespace JOffice.Binary.PowerPoint

/-- PowerPoint Record Header 構造体 (8バイト固定) -/
structure PPTRecordHeader where
  recVer : UInt8       -- レコードバージョン
  recInstance : UInt16 -- レコードインスタンス
  recType : UInt16     -- レコードタイプ (例: 0x03E8 Document, 0x03EE Slide)
  recLen : UInt32      -- ペイロード長
  deriving Inhabited, BEq, Repr

/-- Pure Lean 4 PowerPoint PPT レコードヘッダ解釈関数 -/
def parsePPTRecordHeader (bytes : ByteArray) (offset : Nat) : Option PPTRecordHeader :=
  if offset + 8 <= bytes.size then
    let verInst := bytes[offset]!.toUInt16 ||| (bytes[offset + 1]!.toUInt16 <<< 8)
    let version := (verInst &&& 0x000F).toUInt8
    let instanceVal := (verInst >>> 4)
    let typeVal := bytes[offset + 2]!.toUInt16 ||| (bytes[offset + 3]!.toUInt16 <<< 8)
    let lenVal := bytes[offset + 4]!.toUInt32 ||| (bytes[offset + 5]!.toUInt32 <<< 8) |||
                  (bytes[offset + 6]!.toUInt32 <<< 16) ||| (bytes[offset + 7]!.toUInt32 <<< 24)
    some { recVer := version, recInstance := instanceVal, recType := typeVal, recLen := lenVal }
  else
    none

end JOffice.Binary.PowerPoint
