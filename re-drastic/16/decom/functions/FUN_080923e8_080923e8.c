/*
 * Ghidra decompilation
 *
 * Function : FUN_080923e8
 * Address  : 080923e8
 * Program  : drastic16
 */


void FUN_080923e8(undefined8 *param_1,int **param_2,byte *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int **ppiVar2;
  byte *pbVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  iVar5 = **param_2;
  ppiVar4 = param_2 + 2;
  iVar6 = *param_2[1];
  uVar13 = FixedToFP(CONCAT44((uint)*(ushort *)((int)param_2[1] + 6) -
                              (uint)*(ushort *)((int)*param_2 + 6),iVar6),0x20,0x20,0,0,0);
  uVar10 = FixedToFP(CONCAT44(iVar5 - iVar6,iVar5),0x20,0x20,0,0,0);
  uVar14 = FixedToFP(CONCAT44(param_5,param_5),0x20,0x20,0,0,0);
  uVar12 = VectorShiftLeft(uVar13,0x20,0x40,0);
  uVar11 = FloatVectorAdd(uVar10,uVar10,2);
  uVar15 = FloatVectorMult(uVar14,uVar10,2,0x20);
  uVar12 = FloatVectorMult(uVar12,uVar13,2,0x20);
  uVar13 = FloatVectorAdd(uVar10,uVar11,2);
  uVar14 = FloatVectorAdd(uVar11,uVar11,2);
  uVar12 = FloatVectorAdd(uVar12,uVar15,2);
  uVar10 = FloatVectorAdd(uVar12,uVar10,2);
  uVar11 = FloatVectorAdd(uVar12,uVar11,2);
  uVar13 = FloatVectorAdd(uVar12,uVar13,2);
  uVar8 = (uint)*param_3;
  do {
    *param_1 = uVar12;
    param_1[1] = uVar10;
    param_1[2] = uVar11;
    param_1[3] = uVar13;
    param_1 = param_1 + 4;
    uVar12 = FloatVectorAdd(uVar12,uVar14,2);
    uVar10 = FloatVectorAdd(uVar10,uVar14,2);
    uVar11 = FloatVectorAdd(uVar11,uVar14,2);
    uVar13 = FloatVectorAdd(uVar13,uVar14,2);
    uVar7 = uVar8 - 4;
    bVar1 = 3 < (int)uVar8;
    uVar8 = uVar7;
  } while (uVar7 != 0 && bVar1);
  param_1 = param_1 + uVar7;
  pbVar3 = param_3 + 1;
  for (param_4 = param_4 + -1; param_4 != 0; param_4 = param_4 + -1) {
    piVar9 = *ppiVar4;
    ppiVar2 = ppiVar4 + 1;
    iVar5 = *piVar9;
    ppiVar4 = ppiVar4 + 2;
    iVar6 = **ppiVar2;
    uVar13 = FixedToFP(CONCAT44((uint)*(ushort *)((int)*ppiVar2 + 6) -
                                (uint)*(ushort *)((int)piVar9 + 6),iVar6),0x20,0x20,0,0,0);
    uVar10 = FixedToFP(CONCAT44(iVar5 - iVar6,iVar5),0x20,0x20,0,0,0);
    uVar12 = VectorShiftLeft(uVar13,0x20,0x40,0);
    uVar11 = FloatVectorAdd(uVar10,uVar10,2);
    uVar12 = FloatVectorMult(uVar12,uVar13,2,0x20);
    uVar13 = FloatVectorAdd(uVar10,uVar11,2);
    uVar14 = FloatVectorAdd(uVar11,uVar11,2);
    uVar10 = FloatVectorAdd(uVar12,uVar10,2);
    uVar11 = FloatVectorAdd(uVar12,uVar11,2);
    uVar13 = FloatVectorAdd(uVar12,uVar13,2);
    uVar8 = (uint)*pbVar3;
    do {
      *param_1 = uVar12;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar13;
      param_1 = param_1 + 4;
      uVar12 = FloatVectorAdd(uVar12,uVar14,2);
      uVar10 = FloatVectorAdd(uVar10,uVar14,2);
      uVar11 = FloatVectorAdd(uVar11,uVar14,2);
      uVar13 = FloatVectorAdd(uVar13,uVar14,2);
      uVar7 = uVar8 - 4;
      bVar1 = 3 < (int)uVar8;
      uVar8 = uVar7;
    } while (uVar7 != 0 && bVar1);
    param_1 = param_1 + uVar7;
    pbVar3 = pbVar3 + 1;
  }
  return;
}


