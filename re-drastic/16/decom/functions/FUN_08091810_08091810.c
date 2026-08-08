/*
 * Ghidra decompilation
 *
 * Function : FUN_08091810
 * Address  : 08091810
 * Program  : drastic16
 */


void FUN_08091810(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  ulonglong uVar15;
  
  uVar2 = SIMDExpandImmediate(0,10,4);
  puVar9 = (undefined4 *)(param_1 + 0x1c0);
  puVar10 = (undefined4 *)(param_1 + 0x230);
  puVar8 = (undefined8 *)((int)param_2 + param_4 * 4);
  puVar5 = (ushort *)(param_1 + 0x3f0);
  do {
    uVar3 = CONCAT44(*puVar10,*puVar10);
    puVar10 = (undefined4 *)((int)puVar10 + 2);
    uVar4 = *puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    uVar15 = VectorCompareGreaterThan(uVar3,0,2);
    auVar11 = VectorShiftLongLeft(CONCAT44(uVar4,uVar4),0xf);
    uVar15 = uVar15 & uVar2;
    auVar12 = VectorAdd(auVar11,uVar15,2,0);
    auVar13 = VectorAdd(auVar11,uVar15,2,0);
    auVar14 = VectorAdd(auVar11,uVar15,2,0);
    auVar11 = VectorAdd(auVar11,uVar15,2,0);
    uVar6 = (uint)*puVar5;
    do {
      *param_2 = auVar11._0_8_;
      param_2[1] = auVar11._8_8_;
      param_2[2] = auVar12._0_8_;
      param_2[3] = auVar12._8_8_;
      *puVar8 = uVar3;
      puVar8[1] = uVar3;
      puVar8[2] = uVar3;
      puVar8[3] = uVar3;
      puVar8 = puVar8 + 4;
      param_2[4] = auVar13._0_8_;
      param_2[5] = auVar13._8_8_;
      param_2[6] = auVar14._0_8_;
      param_2[7] = auVar14._8_8_;
      param_2 = param_2 + 8;
      uVar7 = uVar6 - 8;
      bVar1 = 7 < (int)uVar6;
      uVar6 = uVar7;
    } while (uVar7 != 0 && bVar1);
    param_2 = param_2 + uVar7;
    puVar8 = (undefined8 *)((int)puVar8 + uVar7 * 4);
    param_3 = param_3 + -1;
    puVar5 = puVar5 + 2;
  } while (param_3 != 0);
  return;
}


