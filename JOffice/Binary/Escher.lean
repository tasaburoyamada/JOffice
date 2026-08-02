namespace JOffice.Binary.Escher

/-- Escher Record Header (8バイト固定) -/
structure EscherRecordHeader where
  recVer : UInt8       -- バージョン (4 bits)
  recInstance : UInt16 -- インスタンス (12 bits)
  recType : UInt16     -- レコードタイプ (例: 0xF000 DgContainer, 0xF004 Dg, 0xF00B Sp)
  recLen : UInt32      -- ペイロード長
  deriving Inhabited, BEq, Repr

/-- Pure Lean 4 Escher レコードヘッダ解釈関数 -/
def parseEscherRecordHeader (bytes : ByteArray) (offset : Nat) : Option EscherRecordHeader :=
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

end JOffice.Binary.Escher
