import JOffice.Symbol32

namespace JOffice.UI

open JOffice.Symbol32

/-- Office XP CommandButton ウィジェット型 -/
structure CommandButton where
  commandId : Symbol
  labelMask : FeatureMask
  isHovered : Bool
  isPressed : Bool
  isEnabled : Bool
  deriving BEq, Repr

instance : Inhabited CommandButton where
  default := { commandId := 0, labelMask := { mask := 0 }, isHovered := false, isPressed := false, isEnabled := true }

/-- Office XP メタリックカラー描画設定 -/
def metallicBackgroundRGB : UInt32 := 0xEFEDDE
def hoverBorderHighlightRGB : UInt32 := 0x316AC5
def hoverBackgroundRGB : UInt32 := 0xC1D2EE
def selectedBackgroundRGB : UInt32 := 0x98B5E2

/-- ボタンの背景色決定評価 (決定論的状態判定) -/
def getButtonBackgroundRGB (btn : CommandButton) : UInt32 :=
  if !btn.isEnabled then metallicBackgroundRGB
  else if btn.isPressed then selectedBackgroundRGB
  else if btn.isHovered then hoverBackgroundRGB
  else metallicBackgroundRGB

end JOffice.UI
