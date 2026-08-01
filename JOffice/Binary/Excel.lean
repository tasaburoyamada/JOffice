import JOffice.Binary.OLE2

namespace JOffice.Binary.Excel

/-- BIFF8 レコードタイプ定義 -/
inductive BIFF8RecordType where
  | bof : BIFF8RecordType        -- 0x0809
  | eof : BIFF8RecordType        -- 0x000A
  | biff8Dimension : BIFF8RecordType  -- 0x0200
  | labelSST : BIFF8RecordType   -- 0x00FD
  | rk : BIFF8RecordType         -- 0x027E
  | mulrk : BIFF8RecordType      -- 0x00BD
  | formula : BIFF8RecordType    -- 0x0006
  | unknown (code : UInt16) : BIFF8RecordType
  deriving Inhabited, BEq, Repr

/-- BIFF8 レコード構造体 -/
structure BIFF8Record where
  recType : BIFF8RecordType
  dataSize : UInt16
  dataPayload : ByteArray
  deriving Inhabited

/-- Pure Lean 4 BIFF8 レコードパース関数 -/
def parseBIFF8Record (bytes : ByteArray) (offset : Nat) : Option (BIFF8Record × Nat) :=
  if offset + 4 <= bytes.size then
    let code := bytes[offset]!.toUInt16 ||| (bytes[offset + 1]!.toUInt16 <<< 8)
    let size := bytes[offset + 2]!.toUInt16 ||| (bytes[offset + 3]!.toUInt16 <<< 8)
    let payloadEnd := offset + 4 + size.toNat
    if payloadEnd <= bytes.size then
      let payload := bytes.extract (offset + 4) payloadEnd
      let rType := match code with
        | 0x0809 => BIFF8RecordType.bof
        | 0x000A => BIFF8RecordType.eof
        | 0x0200 => BIFF8RecordType.biff8Dimension
        | 0x00FD => BIFF8RecordType.labelSST
        | 0x027E => BIFF8RecordType.rk
        | 0x00BD => BIFF8RecordType.mulrk
        | 0x0006 => BIFF8RecordType.formula
        | c => BIFF8RecordType.unknown c
      some ({ recType := rType, dataSize := size, dataPayload := payload }, payloadEnd)
    else none
  else none

end JOffice.Binary.Excel
