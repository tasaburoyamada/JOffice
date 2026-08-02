import JOffice.UI

namespace JOffice.UI.Dialogs

open JOffice.UI

/-- Office XP モーダルダイアログ種別 -/
inductive DialogType where
  | fileOpen : DialogType
  | fileSaveAs : DialogType
  | formatCells : DialogType
  | findAndReplace : DialogType
  deriving Inhabited, BEq, Repr

/-- モーダルダイアログ状態モデル -/
structure DialogState where
  dialogType : DialogType
  title : String
  x : Int
  y : Int
  width : Nat
  height : Nat
  isVisible : Bool
  deriving Inhabited

/-- メタリックダイアログ背景色 (Office XP 固有: #ECE9D8) -/
def dialogBackgroundRGB : UInt32 := 0xECE9D8
def dialogHeaderBlueRGB : UInt32 := 0x0054E3

/-- ダイアログウインドウアニメーション評価 (進行度 0.0 ~ 1.0 に応じたスケール計算) -/
def getAnimatedScale (progress : Float) : Float :=
  if progress >= 1.0 then 1.0
  else if progress <= 0.0 then 0.0
  else progress * (2.0 - progress) -- Ease-out animation

end JOffice.UI.Dialogs
