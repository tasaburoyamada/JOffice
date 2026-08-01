import Lbir
import Nomos

namespace JOffice.Symbol32

/-- Symbol32 値オブジェクト (32bit 固定長不変識別子) -/
def Symbol := UInt32

/-- 5層 FeatureMask 構造体 (64bit ビットフィールド) -/
structure FeatureMask where
  mask : UInt64
  deriving Inhabited, BEq, Repr

/-- 制御シンボルの判定 (改行: 0x10, タブ: 0x08, スペース: 0x04) -/
def isControlSymbol (mask : FeatureMask) : Bool :=
  (mask.mask &&& 0x000000000000001C) != 0

end JOffice.Symbol32
