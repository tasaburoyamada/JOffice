import JOffice.UI

namespace JOffice.UI.Events

open JOffice.UI

/-- 仮想UIイベント型 -/
inductive UIEvent where
  | mouseMove (x : Int) (y : Int)
  | mouseDown (x : Int) (y : Int) (button : UInt8)
  | mouseUp (x : Int) (y : Int) (button : UInt8)
  | keyDown (keyCode : UInt32)
  | keyUp (keyCode : UInt32)
  deriving Inhabited

/-- 矩形内判定 -/
def isPointInRect (x : Int) (y : Int) (rx : Int) (ry : Int) (rw : Nat) (rh : Nat) : Bool :=
  let rwInt : Int := Int.ofNat rw
  let rhInt : Int := Int.ofNat rh
  x >= rx && x < rx + rwInt && y >= ry && y < ry + rhInt

/-- イベント処理ディスパッチャ: CommandButton の Hover / Pressed 状態純粋更新 -/
def dispatchButtonEvent (btn : CommandButton) (btnX : Int) (btnY : Int) (btnW : Nat) (btnH : Nat) (evt : UIEvent) : CommandButton :=
  match evt with
  | UIEvent.mouseMove x y =>
    let inside := isPointInRect x y btnX btnY btnW btnH
    { btn with isHovered := inside, isPressed := if inside then btn.isPressed else false }
  | UIEvent.mouseDown x y _ =>
    let inside := isPointInRect x y btnX btnY btnW btnH
    { btn with isPressed := inside }
  | UIEvent.mouseUp _ _ _ =>
    { btn with isPressed := false }
  | _ => btn

end JOffice.UI.Events
