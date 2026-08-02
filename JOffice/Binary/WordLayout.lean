import JOffice.Binary.Word
import JOffice.Symbol32

namespace JOffice.Binary.WordLayout

open JOffice.Symbol32

/-- Word テキストピース構造体 (Piece Table) -/
structure TextPiece where
  fcStart : UInt32
  charCount : UInt32
  isUnicode : Bool
  deriving Inhabited, BEq, Repr

/-- ページレイアウト位置計算機 -/
structure PageLayoutContext where
  pageWidthTwips : UInt32   -- デフォルト 11906 (A4 210mm)
  pageHeightTwips : UInt32  -- デフォルト 16838 (A4 297mm)
  marginTopTwips : UInt32   -- デフォルト 1440 (1 inch)
  marginBottomTwips : UInt32
  marginLeftTwips : UInt32
  marginRightTwips : UInt32
  deriving Inhabited, BEq, Repr

def defaultA4Context : PageLayoutContext := {
  pageWidthTwips := 11906,
  pageHeightTwips := 16838,
  marginTopTwips := 1440,
  marginBottomTwips := 1440,
  marginLeftTwips := 1440,
  marginRightTwips := 1440
}

/-- Twips から Pixel への高精度レイアウト変換 (96 DPI) -/
def twipsToPixels (twips : UInt32) : UInt32 :=
  (twips * 96) / 1440

end JOffice.Binary.WordLayout
