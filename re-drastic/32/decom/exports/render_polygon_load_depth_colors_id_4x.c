/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_colors_id_4x
 * Address  : 080c4a18
 * Program  : drastic
 */


void render_polygon_load_depth_colors_id_4x
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar2 = (ushort *)(param_7 + 0x630);
  puVar3 = (ushort *)(param_7 + 0x580);
  do {
    uVar4 = (uint)*puVar3;
    puVar7 = (undefined8 *)(param_6 + uVar4);
    puVar8 = (undefined8 *)(param_5 + uVar4 * 4);
    puVar5 = (undefined8 *)(param_4 + uVar4 * 4);
    uVar4 = (uint)*puVar2;
    do {
      uVar13 = *puVar8;
      uVar14 = puVar8[1];
      uVar15 = puVar8[2];
      uVar16 = puVar8[3];
      puVar8 = puVar8 + 4;
      uVar9 = *puVar5;
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar5 = puVar5 + 4;
      uVar17 = *puVar7;
      puVar7 = puVar7 + 1;
      *param_2 = uVar13;
      param_2[1] = uVar14;
      param_2[2] = uVar15;
      param_2[3] = uVar16;
      param_2 = param_2 + 4;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      param_1 = param_1 + 4;
      *param_3 = uVar17;
      param_3 = param_3 + 1;
      uVar6 = uVar4 - 8;
      bVar1 = 7 < (int)uVar4;
      uVar4 = uVar6;
    } while (uVar6 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + uVar6 * 4);
    param_2 = (undefined8 *)((int)param_2 + uVar6 * 4);
    param_3 = (undefined8 *)((int)param_3 + uVar6);
    param_5 = param_5 + 0x800;
    param_4 = param_4 + 0x800;
    param_6 = param_6 + 0x200;
    param_8 = param_8 + -1;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
  } while (param_8 != 0);
  return;
}


