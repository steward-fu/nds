/*
 * Ghidra decompilation
 *
 * Function : FUN_0808fef0
 * Address  : 0808fef0
 * Program  : drastic16
 */


void FUN_0808fef0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  bool bVar1;
  undefined2 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  int unaff_s31;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined8 uVar18;
  
  uVar5 = CONCAT44(CONCAT22(param_5,param_5),CONCAT22(param_5,param_5));
  uVar6 = CONCAT22((short)param_4,(short)param_4);
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3 = auVar3 & auVar3 << 0x40;
  auVar9._8_8_ = 0x7000600050004;
  auVar9._0_8_ = 0x3000200010000;
  uVar2 = (undefined2)((uint)param_4 >> 0x10);
  uVar6 = CONCAT22(uVar2,uVar2);
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4 = auVar4 & auVar4 << 0x40;
  auVar8 = VectorMultiplyAccumulate(auVar3,auVar9,2,0);
  auVar9 = VectorMultiplyAccumulate(auVar4,auVar9,2,0);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar5;
  uVar18 = VectorShiftNarrowRight(auVar10,3);
  auVar10 = VectorShiftLeft(auVar3,3,0x10,0);
  auVar11 = VectorShiftLeft(auVar4,3,0x10,0);
  auVar3 = SIMDExpandImmediate(0,0xe,7);
  uVar5 = SIMDExpandImmediate(0,0xe,4);
  auVar4 = SIMDExpandImmediate(0,0xe,1);
  auVar12 = VectorAdd(auVar10,auVar10,2);
  auVar13 = VectorAdd(auVar11,auVar11,2);
  do {
    auVar14._0_8_ = VectorShiftNarrowRight(auVar8,8);
    auVar15._0_8_ = VectorShiftNarrowRight(auVar9,8);
    auVar14._8_8_ = VectorAddReturnHigh(auVar8,auVar10,2);
    auVar15._8_8_ = VectorAddReturnHigh(auVar9,auVar11,2);
    auVar8 = VectorAdd(auVar8,auVar12,2);
    auVar9 = VectorAdd(auVar9,auVar13,2);
    auVar16 = VectorShiftRight(auVar14,3);
    VectorShiftLongLeft(auVar16._0_8_,5);
    VectorShiftLongLeft(auVar16._8_8_,5);
    auVar16 = VectorShiftRight(auVar14 & auVar3,1);
    auVar17 = VectorShiftLeft(auVar14 & auVar4,2,8,0);
    VectorMultiplyAccumulate(SUB168(auVar15 & ~auVar3,0),uVar18,1,1);
    VectorMultiplyAccumulate(SUB168(auVar15 & auVar3,0),uVar5,1,1);
    auVar14 = VectorMultiplyAccumulate(auVar16._0_8_,auVar4._0_8_,1,1);
    auVar17 = FloatVectorNeg(auVar17,1,1);
    VectorMultiplyAccumulate(SUB168(auVar15 & ~auVar3,8),uVar18,1,1);
    VectorMultiplyAccumulate(SUB168(auVar15 & auVar3,8),uVar5,1,1);
    auVar15 = VectorMultiplyAccumulate(auVar16._8_8_,auVar4._0_8_,1,1);
    *param_2 = auVar17._0_8_;
    param_2[1] = auVar17._8_8_;
    param_2 = param_2 + 2;
    *param_1 = auVar14._0_8_;
    param_1[1] = auVar14._8_8_;
    param_1[2] = auVar15._0_8_;
    param_1[3] = auVar15._8_8_;
    param_1 = param_1 + 4;
    iVar7 = unaff_s31 + -0x10;
    bVar1 = 0xf < unaff_s31;
    unaff_s31 = iVar7;
  } while (iVar7 != 0 && bVar1);
  return;
}


