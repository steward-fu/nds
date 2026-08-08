/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_vertex_block
 * Address  : 080c0de0
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */

void geometry_transform_vertex_block(undefined8 *param_1)

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
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar2 = param_1[0x12fa];
    uVar3 = param_1[0x12fb];
    uVar4 = param_1[0x12fc];
    uVar5 = param_1[0x12fd];
    uVar6 = param_1[0x12fe];
    uVar7 = param_1[0x12ff];
    VectorShiftLongLeft(SUB168(*(undefined (*) [16])(param_1 + 0x1300),0),0xc);
    VectorShiftLongLeft(SUB168(*(undefined (*) [16])(param_1 + 0x1300),8),0xc);
    uVar8 = *param_1;
    uVar9 = param_1[1];
    uVar12 = param_1[0x40];
    uVar13 = param_1[0x41];
    uVar10 = param_1[0x20];
    uVar11 = param_1[0x21];
    uVar1 = VectorGetElement(uVar3,1,4,0);
    VectorMultiplyAccumulate(uVar8,uVar1,4,0);
    uVar1 = VectorGetElement(uVar5,1,4,0);
    VectorMultiplyAccumulate(uVar10,uVar1,4,0);
    uVar1 = VectorGetElement(uVar7,1,4,0);
    auVar17 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
    uVar1 = VectorGetElement(uVar2,0,4,0);
    VectorMultiplyAccumulate(uVar8,uVar1,4,0);
    uVar1 = VectorGetElement(uVar4,0,4,0);
    VectorMultiplyAccumulate(uVar10,uVar1,4,0);
    uVar1 = VectorGetElement(uVar6,0,4,0);
    auVar14 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
    uVar1 = VectorGetElement(uVar2,1,4,0);
    VectorMultiplyAccumulate(uVar8,uVar1,4,0);
    uVar1 = VectorGetElement(uVar4,1,4,0);
    VectorMultiplyAccumulate(uVar10,uVar1,4,0);
    uVar1 = VectorGetElement(uVar6,1,4,0);
    auVar15 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
    uVar1 = VectorGetElement(uVar3,0,4,0);
    VectorMultiplyAccumulate(uVar8,uVar1,4,0);
    uVar1 = VectorGetElement(uVar5,0,4,0);
    VectorMultiplyAccumulate(uVar10,uVar1,4,0);
    uVar1 = VectorGetElement(uVar7,0,4,0);
    auVar16 = VectorMultiplyAccumulate(uVar12,uVar1,4,0);
    uVar10 = VectorShiftNarrowRight(auVar17,0xc);
    uVar8 = VectorShiftNarrowRight(auVar14,0xc);
    VectorShiftNarrowRight(auVar15,0xc);
    VectorShiftNarrowRight(auVar16,0xc);
    uVar1 = VectorGetElement(uVar3,1,4,0);
    VectorMultiplyAccumulate(uVar9,uVar1,4,0);
    uVar1 = VectorGetElement(uVar5,1,4,0);
    VectorMultiplyAccumulate(uVar11,uVar1,4,0);
    uVar1 = VectorGetElement(uVar7,1,4,0);
    auVar17 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
    uVar1 = VectorGetElement(uVar2,0,4,0);
    VectorMultiplyAccumulate(uVar9,uVar1,4,0);
    uVar1 = VectorGetElement(uVar4,0,4,0);
    VectorMultiplyAccumulate(uVar11,uVar1,4,0);
    uVar1 = VectorGetElement(uVar6,0,4,0);
    auVar14 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
    uVar1 = VectorGetElement(uVar2,1,4,0);
    VectorMultiplyAccumulate(uVar9,uVar1,4,0);
    uVar1 = VectorGetElement(uVar4,1,4,0);
    VectorMultiplyAccumulate(uVar11,uVar1,4,0);
    uVar1 = VectorGetElement(uVar6,1,4,0);
    auVar15 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
    uVar1 = VectorGetElement(uVar3,0,4,0);
    VectorMultiplyAccumulate(uVar9,uVar1,4,0);
    uVar1 = VectorGetElement(uVar5,0,4,0);
    VectorMultiplyAccumulate(uVar11,uVar1,4,0);
    uVar1 = VectorGetElement(uVar7,0,4,0);
    auVar16 = VectorMultiplyAccumulate(uVar13,uVar1,4,0);
    uVar3 = VectorShiftNarrowRight(auVar17,0xc);
    uVar2 = VectorShiftNarrowRight(auVar14,0xc);
    VectorShiftNarrowRight(auVar15,0xc);
    VectorShiftNarrowRight(auVar16,0xc);
    auVar16._8_8_ = uVar3;
    auVar16._0_8_ = uVar10;
    auVar16 = FloatVectorNeg(auVar16,1,4);
    auVar14._8_8_ = uVar2;
    auVar14._0_8_ = uVar8;
    auVar17._8_8_ = uVar3;
    auVar17._0_8_ = uVar10;
    VectorCompareGreaterThan(auVar14,auVar17,4);
    auVar15._8_8_ = uVar2;
    auVar15._0_8_ = uVar8;
    VectorCompareGreaterThan(auVar16,auVar15,4);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return;
}


