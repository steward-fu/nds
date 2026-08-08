/*
 * Ghidra decompilation
 *
 * Function : geometry_backface_test
 * Address  : 080c1358
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
geometry_backface_test(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined auVar15 [16];
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined auVar20 [16];
  undefined8 uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  undefined8 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined auVar29 [16];
  undefined8 uVar30;
  ulonglong uVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  
  puVar7 = (undefined8 *)(param_1 + param_3);
  pauVar4 = (undefined (*) [16])((int)puVar7 + param_3 * 2);
  iVar6 = (param_3 * 4 + -0x10) - param_4;
  uVar2 = SIMDExpandImmediate(0,6,0x80);
  do {
    uVar10 = *puVar7;
    uVar11 = puVar7[1];
    uVar16 = puVar7[2];
    uVar17 = puVar7[3];
    puVar7 = (undefined8 *)((int)(puVar7 + 2) + param_4);
    uVar25 = *puVar7;
    uVar26 = puVar7[1];
    puVar7 = (undefined8 *)((int)puVar7 + iVar6);
    auVar9 = *pauVar4;
    uVar21 = *(undefined8 *)pauVar4[1];
    uVar22 = *(ulonglong *)(pauVar4[1] + 8);
    puVar5 = (undefined8 *)(pauVar4[1] + param_4);
    uVar30 = *puVar5;
    uVar31 = puVar5[1];
    pauVar4 = (undefined (*) [16])((int)puVar5 + iVar6);
    uVar8 = VectorTranspose(uVar10,4);
    uVar19 = auVar9._0_8_;
    uVar12 = VectorTranspose(uVar19,4);
    uVar14 = VectorTranspose(uVar16,4);
    uVar18 = VectorTranspose(uVar21,4);
    uVar23 = VectorTranspose(uVar25,4);
    uVar27 = VectorTranspose(uVar30,4);
    VectorTranspose(uVar11,4);
    uVar28 = auVar9._8_8_;
    VectorTranspose(uVar28,4);
    VectorTranspose(uVar17,4);
    VectorTranspose(uVar22,4);
    VectorTranspose(uVar26,4);
    VectorTranspose(uVar31,4);
    VectorMultiply(uVar8,uVar16,4,0);
    auVar32 = VectorMultiplySubtractLong(uVar10,uVar14,4,0);
    VectorMultiply(uVar12,uVar21,4,0);
    auVar33 = VectorMultiplySubtractLong(uVar19,uVar18,4,0);
    VectorMultiply(uVar14,uVar25,4,0);
    auVar15 = VectorMultiplySubtractLong(uVar16,uVar23,4,0);
    VectorMultiply(uVar18,uVar30,4,0);
    auVar20 = VectorMultiplySubtractLong(uVar21,uVar27,4,0);
    VectorMultiply(uVar8,uVar25,4,0);
    auVar9 = VectorMultiplySubtractLong(uVar10,uVar23,4,0);
    VectorMultiply(uVar12,uVar30,4,0);
    auVar13 = VectorMultiplySubtractLong(uVar19,uVar27,4,0);
    uVar14 = VectorTranspose(auVar32._8_8_,4);
    uVar12 = VectorTranspose(auVar15._8_8_,4);
    uVar8 = VectorTranspose(auVar9._8_8_,4);
    uVar16 = VectorTranspose(auVar33._8_8_,4);
    uVar19 = VectorTranspose(auVar20._8_8_,4);
    uVar10 = VectorTranspose(auVar13._8_8_,4);
    VectorMultiply(uVar14,uVar26,4,1);
    VectorMultiplySubtractLong(uVar14,uVar26 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar14,uVar26 & uVar2,4,1);
    VectorMultiplyAccumulate(uVar12,uVar11,4,1);
    VectorMultiplySubtractLong(uVar12,uVar11 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar12,uVar11 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar8,uVar17,4,1);
    VectorMultiplyAccumulate(uVar8,uVar17 & uVar2,4,1);
    auVar24 = VectorMultiplyAccumulate(uVar8,uVar17 & uVar2,4,1);
    VectorMultiply(uVar16,uVar31,4,1);
    VectorMultiplySubtractLong(uVar16,uVar31 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar16,uVar31 & uVar2,4,1);
    VectorMultiplyAccumulate(uVar19,uVar28,4,1);
    VectorMultiplySubtractLong(uVar19,uVar28 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar19,uVar28 & uVar2,4,1);
    VectorMultiplySubtractLong(uVar10,uVar22,4,1);
    VectorMultiplyAccumulate(uVar10,uVar22 & uVar2,4,1);
    auVar29 = VectorMultiplyAccumulate(uVar10,uVar22 & uVar2,4,1);
    VectorMultiply(auVar32._8_8_,uVar26,4,0);
    VectorMultiplyAccumulate(auVar15._8_8_,uVar11,4,0);
    auVar15 = VectorMultiplySubtractLong(auVar9._8_8_,uVar17,4,0);
    VectorMultiply(auVar33._8_8_,uVar31,4,0);
    VectorMultiplyAccumulate(auVar20._8_8_,uVar28,4,0);
    auVar20 = VectorMultiplySubtractLong(auVar13._8_8_,uVar22,4,0);
    auVar9 = SIMDExpandImmediate(0,0,2);
    uVar11 = VectorTranspose(auVar24._8_8_,4);
    uVar28 = VectorTranspose(auVar29._8_8_,4);
    auVar13 = VectorAdd(auVar15,auVar24._8_8_,4,0);
    auVar15 = VectorAdd(auVar20,auVar29._8_8_,4,0);
    uVar22 = auVar13._8_8_;
    uVar17 = VectorTranspose(uVar22,4);
    uVar31 = auVar15._8_8_;
    uVar26 = VectorTranspose(uVar31,4);
    auVar13._0_8_ = VectorCompareGreaterThan(0,uVar22,4);
    auVar13._8_8_ = VectorCompareGreaterThan(0,uVar31,4);
    auVar13 = VectorAdd(auVar9,auVar13,4);
    auVar9._8_8_ = uVar28 | uVar26 | uVar31;
    auVar9._0_8_ = uVar11 | uVar17 | uVar22;
    auVar9 = VectorCompareEqual(auVar9,0,4);
    auVar15._8_8_ = SUB168(auVar13 | auVar9,8);
    auVar15._0_8_ = VectorCopyNarrow(auVar13 | auVar9,4);
    uVar8 = VectorCopyNarrow(auVar15,2);
    *param_5 = (int)uVar8;
    param_5 = param_5 + 1;
    iVar3 = param_2 + -4;
    bVar1 = 3 < param_2;
    param_2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return uVar8;
}


