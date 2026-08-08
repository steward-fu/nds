/*
 * Ghidra decompilation
 *
 * Function : FUN_0808f540
 * Address  : 0808f540
 * Program  : drastic16
 */


undefined8
FUN_0808f540(undefined8 *param_1,undefined (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  undefined auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  auVar1 = SIMDExpandImmediate(0,0xe,0x3f);
  puVar12 = param_1 + 0x20;
  puVar13 = param_1 + 0x40;
  pauVar6 = param_2 + 0x10;
  pauVar7 = param_2 + 0x20;
  pauVar8 = param_2 + 0x30;
  pauVar9 = param_2 + 0x40;
  pauVar10 = param_2 + 0x50;
  iVar11 = 0x100;
  do {
    uVar14 = *param_3;
    uVar15 = param_3[1];
    param_3 = param_3 + 2;
    uVar16 = *param_4;
    uVar17 = param_4[1];
    param_4 = param_4 + 2;
    auVar18 = *param_2;
    param_2 = param_2 + 1;
    auVar19 = *pauVar6;
    pauVar6 = pauVar6 + 1;
    puVar2 = *pauVar7;
    puVar3 = *pauVar7;
    pauVar7 = pauVar7 + 1;
    auVar20 = *pauVar8;
    pauVar8 = pauVar8 + 1;
    auVar21 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    puVar4 = *pauVar10;
    puVar5 = *pauVar10;
    pauVar10 = pauVar10 + 1;
    VectorMultiply(auVar18._0_8_,uVar14,1,1);
    auVar22 = VectorMultiplyAccumulate(auVar20._0_8_,uVar16,1,1);
    VectorMultiply(auVar18._8_8_,uVar15,1,1);
    auVar23 = VectorMultiplyAccumulate(auVar20._8_8_,uVar17,1,1);
    VectorMultiply(auVar19._0_8_,uVar14,1,1);
    auVar18 = VectorMultiplyAccumulate(auVar21._0_8_,uVar16,1,1);
    VectorMultiply(auVar19._8_8_,uVar15,1,1);
    auVar20 = VectorMultiplyAccumulate(auVar21._8_8_,uVar17,1,1);
    VectorMultiply(*(undefined8 *)puVar2,uVar14,1,1);
    auVar19 = VectorMultiplyAccumulate(*(undefined8 *)puVar4,uVar16,1,1);
    VectorMultiply(*(undefined8 *)(puVar3 + 8),uVar15,1,1);
    auVar21 = VectorMultiplyAccumulate(*(undefined8 *)(puVar5 + 8),uVar17,1,1);
    auVar22._0_8_ = VectorRoundShiftRightNarrow(auVar22,5);
    auVar22._8_8_ = VectorRoundShiftRightNarrow(auVar23,5);
    auVar18._0_8_ = VectorRoundShiftRightNarrow(auVar18,5);
    auVar18._8_8_ = VectorRoundShiftRightNarrow(auVar20,5);
    auVar19._0_8_ = VectorRoundShiftRightNarrow(auVar19,5);
    auVar19._8_8_ = VectorRoundShiftRightNarrow(auVar21,5);
    auVar20 = VectorMin(auVar22,auVar1,1,1);
    auVar18 = VectorMin(auVar18,auVar1,1,1);
    auVar19 = VectorMin(auVar19,auVar1,1,1);
    *param_1 = auVar20._0_8_;
    param_1[1] = auVar20._8_8_;
    param_1 = param_1 + 2;
    *puVar12 = auVar18._0_8_;
    puVar12[1] = auVar18._8_8_;
    puVar12 = puVar12 + 2;
    *puVar13 = auVar19._0_8_;
    puVar13[1] = auVar19._8_8_;
    puVar13 = puVar13 + 2;
    iVar11 = iVar11 + -0x10;
  } while (iVar11 != 0);
  return uVar14;
}


