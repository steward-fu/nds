/*
 * Ghidra decompilation
 *
 * Function : FUN_080908b4
 * Address  : 080908b4
 * Program  : drastic16
 */


undefined8 FUN_080908b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar12 = param_2[4];
  uVar13 = param_2[5];
  auVar16 = *(undefined (*) [16])(param_2 + 6);
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar1 = VectorGetElement(uVar2,0,4,0);
  VectorMultiply(uVar8,uVar1,4);
  uVar1 = VectorGetElement(uVar2,1,4,0);
  VectorMultiplyAccumulate(uVar10,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,0,4,0);
  auVar17 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar2,0,4,0);
  VectorMultiply(uVar9,uVar1,4);
  uVar1 = VectorGetElement(uVar2,1,4,0);
  VectorMultiplyAccumulate(uVar11,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,0,4,0);
  auVar18 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,1,4,0);
  VectorMultiply(uVar8,uVar1,4);
  uVar1 = VectorGetElement(uVar4,0,4,0);
  VectorMultiplyAccumulate(uVar10,uVar1,4,0);
  uVar1 = VectorGetElement(uVar4,1,4,0);
  auVar19 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,1,4,0);
  VectorMultiply(uVar9,uVar1,4);
  uVar1 = VectorGetElement(uVar4,0,4,0);
  VectorMultiplyAccumulate(uVar11,uVar1,4,0);
  uVar1 = VectorGetElement(uVar4,1,4,0);
  auVar20 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar3 = VectorShiftNarrowRight(auVar17,0xc);
  uVar4 = VectorShiftNarrowRight(auVar18,0xc);
  uVar14 = VectorShiftNarrowRight(auVar19,0xc);
  uVar15 = VectorShiftNarrowRight(auVar20,0xc);
  uVar1 = VectorGetElement(uVar5,0,4,0);
  VectorMultiply(uVar8,uVar1,4);
  uVar1 = VectorGetElement(uVar5,1,4,0);
  VectorMultiplyAccumulate(uVar10,uVar1,4,0);
  uVar1 = VectorGetElement(uVar6,0,4,0);
  auVar17 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar5,0,4,0);
  VectorMultiply(uVar9,uVar1,4);
  uVar1 = VectorGetElement(uVar5,1,4,0);
  VectorMultiplyAccumulate(uVar11,uVar1,4,0);
  uVar1 = VectorGetElement(uVar6,0,4,0);
  auVar18 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar6,1,4,0);
  VectorMultiply(uVar8,uVar1,4);
  uVar1 = VectorGetElement(uVar7,0,4,0);
  VectorMultiplyAccumulate(uVar10,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,1,4,0);
  auVar19 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar6,1,4,0);
  VectorMultiply(uVar9,uVar1,4);
  uVar1 = VectorGetElement(uVar7,0,4,0);
  VectorMultiplyAccumulate(uVar11,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,1,4,0);
  auVar20 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar5 = VectorShiftNarrowRight(auVar17,0xc);
  uVar6 = VectorShiftNarrowRight(auVar18,0xc);
  auVar17._0_8_ = VectorShiftNarrowRight(auVar19,0xc);
  auVar17._8_8_ = VectorShiftNarrowRight(auVar20,0xc);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  auVar16 = VectorAdd(auVar17,auVar16,4);
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = auVar16._0_8_;
  param_1[7] = auVar16._8_8_;
  return uVar2;
}


