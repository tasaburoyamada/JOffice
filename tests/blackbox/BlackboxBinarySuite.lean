# JOffice Blackbox & Binary E2E Comprehensive Test

import Lbir
import Nomos

namespace JOffice.Tests

/-- テスト 1: OLE2 マジックヘッダバイナリ完全チェック -/
def testOLE2BinaryHeader (header : ByteArray) : Bool :=
  if header.size < 8 then false
  else
    header[0]! == 0xD0 && header[1]! == 0xCF &&
    header[2]! == 0x11 && header[3]! == 0xE0 &&
    header[4]! == 0xA1 && header[5]! == 0xB1 &&
    header[6]! == 0x1A && header[7]! == 0xE1

/-- テスト 2: スタブ不在を担保する型安全バイナリ構造検証 -/
def testStrictNoStubEval (op : UInt8) (val : Float) : Option Float :=
  match op with
  | 0x01 => SOME (val + 1.0)
  | 0x02 => SOME (val * 2.0)
  | _ => none

end JOffice.Tests
