/*
 * Ghidra decompilation
 *
 * Function : FUN_080918d0
 * Address  : 080918d0
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_080918d0(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined auVar14 [16];
  
  puVar12 = (undefined4 *)(param_1 + 0x2a0);
  puVar13 = (undefined4 *)(param_1 + 0x380);
  puVar7 = (undefined8 *)((int)param_2 + param_4);
  puVar8 = (undefined8 *)((int)param_2 + param_4 * 2);
  puVar9 = (undefined8 *)((int)puVar8 + param_4);
  puVar10 = (undefined8 *)((int)puVar9 + param_4 * 2);
  puVar11 = (undefined8 *)((int)puVar10 + param_4 * 2);
  puVar4 = (ushort *)(param_1 + 0x3f0);
  do {
    uVar2 = *puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    uVar3 = *puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    auVar14 = VectorShiftLongLeft(CONCAT44(uVar2,uVar2),0xf);
    VectorShiftLongLeft(CONCAT44(uVar3,uVar3),0xf);
    uVar5 = (uint)*puVar4;
    do {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9 = puVar9 + 4;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 4;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11 = puVar11 + 4;
      *param_2 = 0;
      param_2[1] = 0;
      param_2 = param_2 + 2;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
      uVar6 = uVar5 - 8;
      bVar1 = 7 < (int)uVar5;
      uVar5 = uVar6;
    } while (uVar6 != 0 && bVar1);
    puVar9 = (undefined8 *)((int)puVar9 + uVar6 * 4);
    puVar10 = (undefined8 *)((int)puVar10 + uVar6 * 4);
    puVar11 = (undefined8 *)((int)puVar11 + uVar6 * 4);
    param_2 = (undefined8 *)((int)param_2 + uVar6 * 2);
    puVar7 = (undefined8 *)((int)puVar7 + uVar6 * 2);
    puVar8 = (undefined8 *)((int)puVar8 + uVar6 * 2);
    param_3 = param_3 + -1;
    puVar4 = puVar4 + 2;
  } while (param_3 != 0);
  return auVar14._0_8_;
}


