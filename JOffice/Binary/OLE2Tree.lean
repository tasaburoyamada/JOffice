import JOffice.Binary.OLE2
import JOffice.Binary.OLE2Writer

namespace JOffice.Binary.OLE2Tree

open JOffice.Binary.OLE2

/-- OLE2 名前の UTF-16LE パッキング関数 -/
def encodeStreamName (name : String) : ByteArray :=
  let mutAcc := ByteArray.empty
  let bytes := name.toUTF8
  let res := bytes.foldl (fun (acc : ByteArray) (b : UInt8) =>
    (acc.push b).push 0x00
  ) mutAcc
  -- Padding to 64 bytes
  (List.range (64 - res.size)).foldl (fun (acc : ByteArray) _ => acc.push 0x00) res

/-- OLE2 単一ストリームツリー構造体 -/
structure OLE2StreamNode where
  streamName : String
  streamData : ByteArray
  startSector : UInt32
  deriving Inhabited

/-- ディレクトリツリーから 128 バイトディレクトリエントリへのエンコーダ -/
def encodeDirectoryEntry (node : OLE2StreamNode) (entryType : UInt8) : ByteArray :=
  let nameBuf := encodeStreamName node.streamName
  let e0 := nameBuf
  let nameLen : UInt16 := (node.streamName.length * 2 + 2).toUInt16
  let e1 := (e0.push (nameLen.toUInt8)).push ((nameLen >>> 8).toUInt8)
  let e2 := e1.push entryType
  let e3 := e2.push 0x01 -- Black color flag in Red-Black tree
  -- Left/Right/Child siblings (12 bytes 0xFF)
  let e4 := (List.range 12).foldl (fun (acc : ByteArray) _ => acc.push 0xFF) e3
  -- CLSID (16 bytes 0x00)
  let e5 := (List.range 16).foldl (fun (acc : ByteArray) _ => acc.push 0x00) e4
  -- User Flags (4 bytes 0x00)
  let e6 := (List.range 4).foldl (fun (acc : ByteArray) _ => acc.push 0x00) e5
  -- Create Time & Modify Time (16 bytes 0x00)
  let e7 := (List.range 16).foldl (fun (acc : ByteArray) _ => acc.push 0x00) e6
  -- Start Sector (4 bytes)
  let sSec := node.startSector
  let e8 := OLE2Writer.pushUInt32LE e7 sSec
  -- Stream Size (8 bytes)
  let sSize := node.streamData.size.toUInt64
  let e9 := OLE2Writer.pushUInt32LE e8 (sSize.toUInt32)
  OLE2Writer.pushUInt32LE e9 ((sSize >>> 32).toUInt32)

end JOffice.Binary.OLE2Tree
