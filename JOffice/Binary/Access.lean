namespace JOffice.Binary.Access

/-- Access Jet MDB ページヘッダ構造体 -/
structure JetPageHeader where
  pageType : UInt8   -- 0x01: Database Header Page, 0x02: Data Page, 0x03: Table Definition Page
  freeSpace : UInt16
  tdefPg : UInt32
  deriving Inhabited, BEq, Repr

/-- Pure Lean 4 Jet Page Header パース関数 -/
def parseJetPageHeader (bytes : ByteArray) (offset : Nat) : Option JetPageHeader :=
  if offset + 8 <= bytes.size then
    let pType := bytes[offset]!
    let fSpace := bytes[offset + 2]!.toUInt16 ||| (bytes[offset + 3]!.toUInt16 <<< 8)
    let tPg := bytes[offset + 4]!.toUInt32 ||| (bytes[offset + 5]!.toUInt32 <<< 8) |||
               (bytes[offset + 6]!.toUInt32 <<< 16) ||| (bytes[offset + 7]!.toUInt32 <<< 24)
    some { pageType := pType, freeSpace := fSpace, tdefPg := tPg }
  else
    none

end JOffice.Binary.Access
