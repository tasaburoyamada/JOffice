namespace JOffice.Binary.OLE2

/-- OLE2 ヘッダ構造体 (512 バイト固定) -/
structure Header where
  magic : UInt64           -- 0xD0CF11E0A1B11AE1
  sectorShift : UInt16     -- 通常 9 (512 bytes) または 12 (4096 bytes)
  miniSectorShift : UInt16 -- 通常 6 (64 bytes)
  fatSectorCount : UInt32
  directoryFirstSector : UInt32
  miniFatFirstSector : UInt32
  miniFatSectorCount : UInt32
  deriving Inhabited, BEq, Repr

/-- OLE2 ディレクトリエントリ構造体 (128 バイト固定) -/
structure DirectoryEntry where
  nameBytes : ByteArray     -- UTF-16LE 表現のストリーム名 (最大 64 bytes)
  entryType : UInt8         -- 1: User Storage, 2: User Stream, 5: Root Storage
  startSector : UInt32
  streamSize : UInt64
  deriving Inhabited

/-- Pure Lean 4 OLE2 ヘッダ解釈関数 (全フィールド完全パース実装) -/
def parseHeader (bytes : ByteArray) : Option Header :=
  if bytes.size < 512 then none
  else
    let m0 := bytes[0]!.toUInt64
    let m1 := bytes[1]!.toUInt64
    let m2 := bytes[2]!.toUInt64
    let m3 := bytes[3]!.toUInt64
    let m4 := bytes[4]!.toUInt64
    let m5 := bytes[5]!.toUInt64
    let m6 := bytes[6]!.toUInt64
    let m7 := bytes[7]!.toUInt64
    let magicVal := m0 ||| (m1 <<< 8) ||| (m2 <<< 16) ||| (m3 <<< 24) |||
                    (m4 <<< 32) ||| (m5 <<< 40) ||| (m6 <<< 48) ||| (m7 <<< 56)
    if magicVal != 0xE11AB1A1E011CFD0 then none
    else
      let sShift := bytes[30]!.toUInt16 ||| (bytes[31]!.toUInt16 <<< 8)
      let msShift := bytes[32]!.toUInt16 ||| (bytes[33]!.toUInt16 <<< 8)
      
      -- fatSectorCount: Offset 44 (4 bytes)
      let fatCnt := bytes[44]!.toUInt32 ||| (bytes[45]!.toUInt32 <<< 8) |||
                    (bytes[46]!.toUInt32 <<< 16) ||| (bytes[47]!.toUInt32 <<< 24)
      -- directoryFirstSector: Offset 48 (4 bytes)
      let dirFirst := bytes[48]!.toUInt32 ||| (bytes[49]!.toUInt32 <<< 8) |||
                      (bytes[50]!.toUInt32 <<< 16) ||| (bytes[51]!.toUInt32 <<< 24)
      -- miniFatFirstSector: Offset 60 (4 bytes)
      let miniFatFirst := bytes[60]!.toUInt32 ||| (bytes[61]!.toUInt32 <<< 8) |||
                          (bytes[62]!.toUInt32 <<< 16) ||| (bytes[63]!.toUInt32 <<< 24)
      -- miniFatSectorCount: Offset 64 (4 bytes)
      let miniFatCnt := bytes[64]!.toUInt32 ||| (bytes[65]!.toUInt32 <<< 8) |||
                        (bytes[66]!.toUInt32 <<< 16) ||| (bytes[67]!.toUInt32 <<< 24)
                        
      some {
        magic := magicVal,
        sectorShift := sShift,
        miniSectorShift := msShift,
        fatSectorCount := fatCnt,
        directoryFirstSector := dirFirst,
        miniFatFirstSector := miniFatFirst,
        miniFatSectorCount := miniFatCnt
      }

end JOffice.Binary.OLE2
