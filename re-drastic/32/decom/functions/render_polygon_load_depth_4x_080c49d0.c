/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_4x
 * Address  : 080c49d0
 * Program  : drastic
 */


void render_polygon_load_depth_4x(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = (ushort *)(param_3 + 0x630);
  puVar5 = (ushort *)(param_3 + 0x580);
  do {
    puVar6 = (undefined8 *)(param_2 + (uint)*puVar5 * 4);
    uVar3 = (uint)*puVar2;
    do {
      uVar7 = *puVar6;
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      uVar11 = puVar6[4];
      uVar12 = puVar6[5];
      uVar13 = puVar6[6];
      uVar14 = puVar6[7];
      puVar6 = puVar6 + 8;
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      param_1[7] = uVar14;
      param_1 = param_1 + 8;
      uVar4 = uVar3 - 0x10;
      bVar1 = 0xf < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + uVar4 * 4);
    param_2 = param_2 + 0x800;
    param_4 = param_4 + -1;
    puVar2 = puVar2 + 2;
    puVar5 = puVar5 + 2;
  } while (param_4 != 0);
  return;
}


