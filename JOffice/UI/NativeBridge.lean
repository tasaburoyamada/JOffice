import JOffice.UI.Events

namespace JOffice.UI.NativeBridge

open JOffice.UI

/-- 画面描画用クワッドバッチ構造体 -/
structure RenderQuad where
  x : Int
  y : Int
  width : Nat
  height : Nat
  rgbColor : UInt32
  deriving Inhabited

/-- UI ウィジェットから画面描画クワッド配列への変換関数 -/
def renderButtonToQuad (btn : CommandButton) (x : Int) (y : Int) (w : Nat) (h : Nat) : RenderQuad :=
  { x := x, y := y, width := w, height := h, rgbColor := getButtonBackgroundRGB btn }

end JOffice.UI.NativeBridge
