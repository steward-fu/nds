/*
 * Ghidra decompilation
 *
 * Function : FUN_0808ffb4
 * Address  : 0808ffb4
 * Program  : drastic16
 */


void FUN_0808ffb4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  int unaff_s30;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined8 uVar18;
  
  auVar4._4_4_ = CONCAT22(param_4,param_4);
  auVar4._0_4_ = CONCAT22(param_4,param_4);
  auVar4._8_8_ = 0;
  uVar6 = CONCAT22((short)param_3,(short)param_3);
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = uVar6;
  auVar5._8_8_ = 0;
  auVar5 = auVar5 & auVar5 << 0x40;
  auVar9._8_8_ = 0x7000600050004;
  auVar9._0_8_ = 0x3000200010000;
  uVar3 = (undefined2)((uint)param_3 >> 0x10);
  uVar6 = CONCAT22(uVar3,uVar3);
  auVar11._4_4_ = uVar6;
  auVar11._0_4_ = uVar6;
  auVar11._8_8_ = 0;
  auVar11 = auVar11 & auVar11 << 0x40;
  auVar8 = VectorMultiplyAccumulate(auVar5,auVar9,2,0);
  auVar9 = VectorMultiplyAccumulate(auVar11,auVar9,2,0);
  uVar18 = VectorShiftNarrowRight(auVar4 & auVar4 << 0x40,4);
  auVar10 = VectorShiftLeft(auVar5,3,0x10,0);
  auVar11 = VectorShiftLeft(auVar11,3,0x10,0);
  auVar4 = SIMDExpandImmediate(0,0xe,7);
  uVar2 = SIMDExpandImmediate(0,0xe,8);
  auVar5 = SIMDExpandImmediate(0,0xe,1);
  auVar12 = VectorAdd(auVar10,auVar10,2);
  auVar13 = VectorAdd(auVar11,auVar11,2);
  do {
    auVar15._0_8_ = VectorShiftNarrowRight(auVar8,8);
    auVar14._0_8_ = VectorShiftNarrowRight(auVar9,8);
    auVar15._8_8_ = VectorAddReturnHigh(auVar8,auVar10,2);
    auVar14._8_8_ = VectorAddReturnHigh(auVar9,auVar11,2);
    auVar8 = VectorAdd(auVar8,auVar12,2);
    auVar9 = VectorAdd(auVar9,auVar13,2);
    auVar16 = VectorShiftRight(auVar15,3);
    VectorShiftLongLeft(auVar16._0_8_,6);
    VectorShiftLongLeft(auVar16._8_8_,6);
    auVar17 = VectorShiftLeft(auVar14 & ~auVar4,1,8,0);
    VectorMultiplyAccumulate(auVar17._0_8_,uVar18,1,1);
    VectorMultiplyAccumulate(SUB168(auVar14 & auVar4,0),uVar2,1,1);
    auVar16 = VectorMultiplyAccumulate(SUB168(auVar15 & auVar4,0),auVar5._0_8_,1,1);
    VectorMultiplyAccumulate(auVar17._8_8_,uVar18,1,1);
    VectorMultiplyAccumulate(SUB168(auVar14 & auVar4,8),uVar2,1,1);
    auVar15 = VectorMultiplyAccumulate(SUB168(auVar15 & auVar4,8),auVar5._0_8_,1,1);
    *param_1 = auVar16._0_8_;
    param_1[1] = auVar16._8_8_;
    param_1[2] = auVar15._0_8_;
    param_1[3] = auVar15._8_8_;
    param_1 = param_1 + 4;
    iVar7 = unaff_s30 + -0x10;
    bVar1 = 0xf < unaff_s30;
    unaff_s30 = iVar7;
  } while (iVar7 != 0 && bVar1);
  return;
}


