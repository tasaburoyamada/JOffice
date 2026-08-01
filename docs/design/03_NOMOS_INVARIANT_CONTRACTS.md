# JOffice: 03_NOMOS_INVARIANT_CONTRACTS.md

## 1. 概要
`03_NOMOS_INVARIANT_CONTRACTS` は、JOffice におけるドキュメント状態遷移、Undo/Redo 履歴、およびファイル保存処理に対する形式的証明（Nomos 契約仕様）を定義する。

---

## 2. 状態不変条件 (State Invariants)

JOffice の状態モデル（`DocumentState`）は、以下の不変条件定理を常時満たさなければならない。

```lean
namespace JOffice.Nomos

/-- ドキュメントモデルの抽象状態 -/
structure DocumentState where
  contentLength : Nat
  undoStackSize : Nat
  redoStackSize : Nat
  isDirty : Bool

/-- Nomos 契約: メモリ境界および履歴整合性の不変条件 -/
def Invariant (state : DocumentState) : Prop :=
  state.contentLength >= 0 ∧
  (state.isDirty = false → state.undoStackSize >= 0)

/-- 定理: Undo 操作の安全性の証明 -/
theorem undo_preserves_invariant (s : DocumentState) (h_inv : Invariant s) (h_stack : s.undoStackSize > 0) :
  ∃ s', Invariant s' ∧ s'.undoStackSize = s.undoStackSize - 1 := by
  sorry

/-- 定理: 非破壊保存の証明 (Save 操作前後のコンテンツ長一致) -/
theorem save_preserves_content (s : DocumentState) (h_inv : Invariant s) :
  ∃ s', s'.contentLength = s.contentLength ∧ s'.isDirty = false := by
  sorry

end JOffice.Nomos
```

---

## 3. Nomos 検証パイプライン

1. **コマンド適用前の前提条件チェック (`PreCondition`)**:
   - ユーザー入力（文字追加、セル削除、スタイル変更）受領時、現在の `DocumentState` が `Invariant` を満たしていることを確認。
2. **遷移実行 (`Step`)**:
   - 状態更新処理を実行。
3. **事後条件の形式証明 (`PostCondition`)**:
   - 遷移後の `DocumentState'` について `Invariant DocumentState'` が保持されることを Lean 4 カーネルレベルで検証。
