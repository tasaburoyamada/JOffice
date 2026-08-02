import JOffice.Binary.OLE2

namespace JOffice.Binary.OLE2Writer

open JOffice.Binary.OLE2

/-- UInt32 を Little-Endian 4バイト列へ変換 -/
def pushUInt32LE (acc : ByteArray) (val : UInt32) : ByteArray :=
  let b0 := (val &&& 0xFF).toUInt8
  let b1 := ((val >>> 8) &&& 0xFF).toUInt8
  let b2 := ((val >>> 16) &&& 0xFF).toUInt8
  let b3 := ((val >>> 24) &&& 0xFF).toUInt8
  (((acc.push b0).push b1).push b2).push b3

/-- OLE2 バイナリヘッダエンコーダ (512バイト生成) -/
def encodeHeader (h : Header) : ByteArray :=
  let h0 := ByteArray.empty
  let h1 := ((((((((h0.push 0xD0).push 0xCF).push 0x11).push 0xE0).push 0xA1).push 0xB1).push 0x1A).push 0xE1)
  -- 16 bytes UID padding
  let mutAcc := h1
  let h2 := (List.range 16).foldl (fun (acc : ByteArray) _ => acc.push 0x00) mutAcc
  -- Revision & Version
  let h3 := (((((h2.push 0x3E).push 0x00).push 0x03).push 0x00).push 0xFE).push 0xFF
  -- Sector Shifts (512 sector, 64 miniSector)
  let h4 := (((((h3.push 0x09).push 0x00).push 0x06).push 0x00).push 0x00).push 0x00
  let h5 := (List.range 4).foldl (fun (acc : ByteArray) _ => acc.push 0x00) h4
  -- Directory Sectors count (0)
  let h6 := (((((h5.push 0x00).push 0x00).push 0x00).push 0x00))
  -- FAT Sector Count & Directory First Sector
  let h7 := pushUInt32LE h6 h.fatSectorCount
  let h8 := pushUInt32LE h7 h.directoryFirstSector
  -- Transaction signature zero
  let h9 := (List.range 4).foldl (fun (acc : ByteArray) _ => acc.push 0x00) h8
  -- Mini Stream Cutoff (0x00001000)
  let h10 := (((((h9.push 0x00).push 0x10).push 0x00).push 0x00))
  -- Mini FAT First Sector & Count
  let h11 := pushUInt32LE h10 h.miniFatFirstSector
  let h12 := pushUInt32LE h11 h.miniFatSectorCount
  -- DIFAT First Sector (0xFFFFFFFE) & Count (0)
  let h13 := (((((((((h12.push 0xFE).push 0xFF).push 0xFF).push 0xFF).push 0x00).push 0x00).push 0x00).push 0x00))
  -- DIFAT Array padding to 512 bytes
  (List.range (512 - h13.size)).foldl (fun (acc : ByteArray) _ => acc.push 0xFF) h13

end JOffice.Binary.OLE2Writer
