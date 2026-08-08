/*
 * Ghidra decompilation
 *
 * Function : geometry_matrix_multiply_4x4_by_4x4
 * Address  : 080c0f60
 * Program  : drastic
 */


undefined8
geometry_matrix_multiply_4x4_by_4x4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar14 = param_2[4];
  uVar15 = param_2[5];
  uVar16 = param_2[6];
  uVar17 = param_2[7];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar1 = VectorGetElement(uVar2,0,4,0);
  VectorMultiply(uVar10,uVar1,4);
  uVar1 = VectorGetElement(uVar2,1,4,0);
  VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,0,4,0);
  VectorMultiplyAccumulate(uVar14,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,1,4,0);
  auVar19 = VectorMultiplyAccumulate(uVar16,uVar1,4,0);
  uVar1 = VectorGetElement(uVar2,0,4,0);
  VectorMultiply(uVar11,uVar1,4);
  uVar1 = VectorGetElement(uVar2,1,4,0);
  VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,0,4,0);
  VectorMultiplyAccumulate(uVar15,uVar1,4,0);
  uVar1 = VectorGetElement(uVar3,1,4,0);
  auVar20 = VectorMultiplyAccumulate(uVar17,uVar1,4,0);
  uVar1 = VectorGetElement(uVar4,0,4,0);
  VectorMultiply(uVar10,uVar1,4);
  uVar1 = VectorGetElement(uVar4,1,4,0);
  VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar5,0,4,0);
  VectorMultiplyAccumulate(uVar14,uVar1,4,0);
  uVar1 = VectorGetElement(uVar5,1,4,0);
  auVar21 = VectorMultiplyAccumulate(uVar16,uVar1,4,0);
  uVar1 = VectorGetElement(uVar4,0,4,0);
  VectorMultiply(uVar11,uVar1,4);
  uVar1 = VectorGetElement(uVar4,1,4,0);
  VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar5,0,4,0);
  VectorMultiplyAccumulate(uVar15,uVar1,4,0);
  uVar1 = VectorGetElement(uVar5,1,4,0);
  auVar22 = VectorMultiplyAccumulate(uVar17,uVar1,4,0);
  uVar3 = VectorShiftNarrowRight(auVar19,0xc);
  uVar4 = VectorShiftNarrowRight(auVar20,0xc);
  uVar5 = VectorShiftNarrowRight(auVar21,0xc);
  uVar18 = VectorShiftNarrowRight(auVar22,0xc);
  uVar1 = VectorGetElement(uVar6,0,4,0);
  VectorMultiply(uVar10,uVar1,4);
  uVar1 = VectorGetElement(uVar6,1,4,0);
  VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,0,4,0);
  VectorMultiplyAccumulate(uVar14,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,1,4,0);
  auVar19 = VectorMultiplyAccumulate(uVar16,uVar1,4,0);
  uVar1 = VectorGetElement(uVar6,0,4,0);
  VectorMultiply(uVar11,uVar1,4);
  uVar1 = VectorGetElement(uVar6,1,4,0);
  VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,0,4,0);
  VectorMultiplyAccumulate(uVar15,uVar1,4,0);
  uVar1 = VectorGetElement(uVar7,1,4,0);
  auVar20 = VectorMultiplyAccumulate(uVar17,uVar1,4,0);
  uVar1 = VectorGetElement(uVar8,0,4,0);
  VectorMultiply(uVar10,uVar1,4);
  uVar1 = VectorGetElement(uVar8,1,4,0);
  VectorMultiplyAccumulate(uVar12,uVar1,4,0);
  uVar1 = VectorGetElement(uVar9,0,4,0);
  VectorMultiplyAccumulate(uVar14,uVar1,4,0);
  uVar1 = VectorGetElement(uVar9,1,4,0);
  auVar21 = VectorMultiplyAccumulate(uVar16,uVar1,4,0);
  uVar1 = VectorGetElement(uVar8,0,4,0);
  VectorMultiply(uVar11,uVar1,4);
  uVar1 = VectorGetElement(uVar8,1,4,0);
  VectorMultiplyAccumulate(uVar13,uVar1,4,0);
  uVar1 = VectorGetElement(uVar9,0,4,0);
  VectorMultiplyAccumulate(uVar15,uVar1,4,0);
  uVar1 = VectorGetElement(uVar9,1,4,0);
  auVar22 = VectorMultiplyAccumulate(uVar17,uVar1,4,0);
  uVar6 = VectorShiftNarrowRight(auVar19,0xc);
  uVar7 = VectorShiftNarrowRight(auVar20,0xc);
  uVar8 = VectorShiftNarrowRight(auVar21,0xc);
  uVar9 = VectorShiftNarrowRight(auVar22,0xc);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar18;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  return uVar2;
}


