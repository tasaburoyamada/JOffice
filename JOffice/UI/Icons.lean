import JOffice.Symbol32

namespace JOffice.UI.Icons

open JOffice.Symbol32

/-- Office XP ツールバーアイコン識別子 -/
inductive IconId where
  | fileNew : IconId       -- 0x01
  | fileOpen : IconId      -- 0x02
  | fileSave : IconId      -- 0x03
  | editCut : IconId       -- 0x04
  | editCopy : IconId      -- 0x05
  | editPaste : IconId     -- 0x06
  | undo : IconId          -- 0x07
  | redo : IconId          -- 0x08
  | unknown (id : UInt16) : IconId
  deriving Inhabited, BEq, Repr

/-- 16x16 アイコンのスプライトテクスチャ座標 (UV 座標) 計算関数 -/
structure SpriteUV where
  uMin : Float
  vMin : Float
  uMax : Float
  vMax : Float
  deriving Inhabited, Repr

def getIconSpriteUV (icon : IconId) : SpriteUV :=
  let idx : Float := match icon with
    | IconId.fileNew => 0.0
    | IconId.fileOpen => 1.0
    | IconId.fileSave => 2.0
    | IconId.editCut => 3.0
    | IconId.editCopy => 4.0
    | IconId.editPaste => 5.0
    | IconId.undo => 6.0
    | IconId.redo => 7.0
    | IconId.unknown _ => 15.0
  let step : Float := 1.0 / 16.0
  { uMin := idx * step, vMin := 0.0, uMax := (idx + 1.0) * step, vMax := 1.0 }

end JOffice.UI.Icons
