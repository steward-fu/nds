/*
 * Ghidra decompilation
 *
 * Function : FUN_08091110
 * Address  : 08091110
 * Program  : drastic16
 */


void FUN_08091110(int *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  piVar2 = param_1 + 0xfc;
  piVar5 = param_1 + 0x1c;
  do {
    uVar10 = FixedToFP((ulonglong)CONCAT24(*(ushort *)piVar2,*param_1 + *piVar5),0x20,0x20,0,0,0);
    uVar6 = FixedToFP(CONCAT44(-*piVar5,*param_1),0x20,0x20,0,0,0);
    uVar9 = VectorShiftLeft(uVar10,0x20,0x40,0);
    uVar7 = FloatVectorAdd(uVar6,uVar6,2);
    uVar9 = FloatVectorMult(uVar9,uVar10,2,0x20);
    uVar10 = FloatVectorAdd(uVar6,uVar7,2);
    uVar8 = FloatVectorAdd(uVar7,uVar7,2);
    uVar6 = FloatVectorAdd(uVar9,uVar6,2);
    uVar7 = FloatVectorAdd(uVar9,uVar7,2);
    uVar10 = FloatVectorAdd(uVar9,uVar10,2);
    uVar14 = FloatVectorAdd(uVar8,uVar8,2);
    uVar11 = FloatVectorAdd(uVar9,uVar8,2);
    uVar12 = FloatVectorAdd(uVar6,uVar8,2);
    uVar13 = FloatVectorAdd(uVar7,uVar8,2);
    uVar8 = FloatVectorAdd(uVar10,uVar8,2);
    uVar3 = (uint)*(ushort *)piVar2;
    do {
      *param_2 = uVar9;
      param_2[1] = uVar6;
      param_2[2] = uVar7;
      param_2[3] = uVar10;
      uVar9 = FloatVectorAdd(uVar9,uVar14,2);
      uVar6 = FloatVectorAdd(uVar6,uVar14,2);
      uVar7 = FloatVectorAdd(uVar7,uVar14,2);
      param_2[4] = uVar11;
      param_2[5] = uVar12;
      param_2[6] = uVar13;
      param_2[7] = uVar8;
      param_2 = param_2 + 8;
      uVar10 = FloatVectorAdd(uVar10,uVar14,2);
      uVar11 = FloatVectorAdd(uVar11,uVar14,2);
      uVar12 = FloatVectorAdd(uVar12,uVar14,2);
      uVar13 = FloatVectorAdd(uVar13,uVar14,2);
      uVar8 = FloatVectorAdd(uVar8,uVar14,2);
      uVar4 = uVar3 - 8;
      bVar1 = 7 < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_2 = param_2 + uVar4;
    param_3 = param_3 + -1;
    piVar2 = piVar2 + 1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  } while (param_3 != 0);
  return;
}


