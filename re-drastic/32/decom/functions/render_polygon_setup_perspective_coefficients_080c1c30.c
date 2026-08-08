/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_coefficients
 * Address  : 080c1c30
 * Program  : drastic
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_polygon_setup_perspective_coefficients
               (int *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  
  auVar6 = _iota_4_7_value;
  uVar2 = SIMDExpandImmediate(0,0xf,0x20);
  piVar7 = param_1 + 0x18c;
  piVar10 = param_1 + 0x2c;
  do {
    uVar11 = FixedToFP((ulonglong)CONCAT24(*(ushort *)piVar7,*param_1 + *piVar10),0x20,0x20,0,0,0);
    uVar3 = VectorGetElement(uVar11,1,4,0);
    VectorMultiply(uVar11,uVar3,4);
    uVar11 = FixedToFP(CONCAT44(*param_1,*piVar10),0x20,0x20,0,0,0);
    uVar3 = VectorGetElement(uVar11,0,4,0);
    auVar4._8_8_ = 0x4040000040000000;
    auVar4._0_8_ = 0x3f80000000000000;
    auVar12 = FloatVectorMultiplySubtract(auVar4,uVar3,2,0x20);
    uVar3 = VectorGetElement(uVar11,0,4,0);
    auVar14 = FloatVectorMultiplySubtract(auVar6,uVar3,2,0x20);
    uVar3 = VectorGetElement(uVar11,1,4,0);
    auVar5._8_8_ = 0x4040000040000000;
    auVar5._0_8_ = 0x3f80000000000000;
    auVar16 = VectorMultiply(auVar5,uVar3,4);
    uVar3 = VectorGetElement(uVar11,1,4,0);
    auVar18 = VectorMultiply(auVar6,uVar3,4);
    uVar3 = VectorGetElement(uVar11,0,4,0);
    uVar20 = VectorMultiply(uVar2,uVar3,4);
    uVar3 = VectorGetElement(uVar11,1,4,0);
    uVar11 = VectorMultiply(uVar2,uVar3,4);
    uVar8 = (uint)*(ushort *)piVar7;
    do {
      *param_3 = auVar12._0_8_;
      uVar13 = auVar12._8_8_;
      param_3[1] = uVar13;
      param_3[2] = auVar14._0_8_;
      uVar15 = auVar14._8_8_;
      param_3[3] = uVar15;
      param_3 = param_3 + 4;
      *param_2 = auVar16._0_8_;
      uVar17 = auVar16._8_8_;
      param_2[1] = uVar17;
      param_2[2] = auVar18._0_8_;
      uVar19 = auVar18._8_8_;
      param_2[3] = uVar19;
      param_2 = param_2 + 4;
      auVar12._0_8_ = FloatVectorSub(auVar12._0_8_,uVar20,2,0x20);
      auVar12._8_8_ = FloatVectorSub(uVar13,uVar20,2,0x20);
      auVar14._0_8_ = FloatVectorSub(auVar14._0_8_,uVar20,2,0x20);
      auVar14._8_8_ = FloatVectorSub(uVar15,uVar20,2,0x20);
      auVar16._0_8_ = FloatVectorAdd(auVar16._0_8_,uVar11,2);
      auVar16._8_8_ = FloatVectorAdd(uVar17,uVar11,2);
      auVar18._0_8_ = FloatVectorAdd(auVar18._0_8_,uVar11,2);
      auVar18._8_8_ = FloatVectorAdd(uVar19,uVar11,2);
      uVar9 = uVar8 - 8;
      bVar1 = 7 < (int)uVar8;
      uVar8 = uVar9;
    } while (uVar9 != 0 && bVar1);
    param_3 = (undefined8 *)((int)param_3 + uVar9 * 4);
    param_2 = (undefined8 *)((int)param_2 + uVar9 * 4);
    param_4 = param_4 + -1;
    piVar7 = piVar7 + 1;
    param_1 = param_1 + 1;
    piVar10 = piVar10 + 1;
  } while (param_4 != 0);
  return;
}


