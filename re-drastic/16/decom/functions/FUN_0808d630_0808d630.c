/*
 * Ghidra decompilation
 *
 * Function : FUN_0808d630
 * Address  : 0808d630
 * Program  : drastic16
 */


void FUN_0808d630(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,int param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined2 unaff_s31;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  auVar8._4_4_ = CONCAT22(param_4,param_4);
  auVar8._0_4_ = CONCAT22(param_4,param_4);
  auVar8._8_8_ = 0;
  auVar8 = auVar8 & auVar8 << 0x40;
  auVar9._4_4_ = CONCAT22(unaff_s31,unaff_s31);
  auVar9._0_4_ = CONCAT22(unaff_s31,unaff_s31);
  auVar9._8_8_ = 0;
  auVar9 = auVar9 & auVar9 << 0x40;
  auVar1 = SIMDExpandImmediate(0,0xe,0x3f);
  auVar2._8_8_ = 0x7000600050004;
  auVar2._0_8_ = 0x3000200010000;
  auVar2 = VectorMultiplyAccumulate(auVar8,auVar2,2,0);
  auVar3._8_8_ = 0x7000600050004;
  auVar3._0_8_ = 0x3000200010000;
  auVar3 = VectorMultiplyAccumulate(auVar9,auVar3,2,0);
  auVar4 = VectorShiftLeft(auVar8,3,0x10,0);
  auVar5 = VectorShiftLeft(auVar9,3,0x10,0);
  auVar6 = VectorShiftLeft(auVar8,4,0x10,0);
  auVar7 = VectorShiftLeft(auVar9,4,0x10,0);
  auVar10 = VectorShiftLeft(auVar8,5,0x10,0);
  auVar11 = VectorShiftLeft(auVar9,5,0x10,0);
  auVar8 = VectorAdd(auVar4,auVar6,2);
  auVar9 = VectorAdd(auVar5,auVar7,2);
  do {
    auVar12._0_8_ = VectorShiftNarrowRight(auVar2,8);
    uVar16 = VectorShiftNarrowRight(auVar3,8);
    auVar12._8_8_ = VectorAddReturnHigh(auVar2,auVar4,2);
    uVar17 = VectorAddReturnHigh(auVar3,auVar5,2);
    auVar14._0_8_ = VectorAddReturnHigh(auVar2,auVar6,2);
    uVar18 = VectorAddReturnHigh(auVar3,auVar7,2);
    auVar14._8_8_ = VectorAddReturnHigh(auVar2,auVar8,2);
    uVar19 = VectorAddReturnHigh(auVar3,auVar9,2);
    auVar2 = VectorAdd(auVar2,auVar10,2);
    auVar3 = VectorAdd(auVar3,auVar11,2);
    auVar13._8_8_ = uVar17;
    auVar13._0_8_ = uVar16;
    auVar13 = VectorShiftLeftInsert(auVar12,auVar13,3);
    auVar15._8_8_ = uVar19;
    auVar15._0_8_ = uVar18;
    auVar15 = VectorShiftLeftInsert(auVar14,auVar15,3);
    *param_1 = SUB168(auVar13 & auVar1,0);
    param_1[1] = SUB168(auVar13 & auVar1,8);
    param_1[2] = SUB168(auVar15 & auVar1,0);
    param_1[3] = SUB168(auVar15 & auVar1,8);
    param_1 = param_1 + 4;
    param_6 = param_6 + -0x20;
  } while (-1 < param_6);
  return;
}


