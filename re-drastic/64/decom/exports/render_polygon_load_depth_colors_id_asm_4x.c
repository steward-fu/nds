/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_depth_colors_id_asm_4x
 * Address  : 0019c7f0
 * Program  : drastic64
 */


void render_polygon_load_depth_colors_id_asm_4x
               (undefined4 *param_1,undefined4 *param_2,undefined *param_3,long param_4,long param_5
               ,long param_6,long param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  
  puVar4 = (ushort *)(param_7 + 0x580);
  puVar5 = (ushort *)(param_7 + 0x630);
  do {
    uVar6 = (ulong)*puVar4;
    puVar3 = (undefined *)(param_6 + uVar6);
    puVar8 = (undefined4 *)(param_5 + uVar6 * 4);
    puVar9 = (undefined4 *)(param_4 + uVar6 * 4);
    uVar7 = (uint)*puVar5;
    do {
      uVar18 = *puVar8;
      uVar19 = puVar8[1];
      uVar20 = puVar8[2];
      uVar21 = puVar8[3];
      uVar22 = puVar8[4];
      uVar23 = puVar8[5];
      uVar24 = puVar8[6];
      uVar25 = puVar8[7];
      puVar8 = puVar8 + 8;
      uVar10 = *puVar9;
      uVar11 = puVar9[1];
      uVar12 = puVar9[2];
      uVar13 = puVar9[3];
      uVar14 = puVar9[4];
      uVar15 = puVar9[5];
      uVar16 = puVar9[6];
      uVar17 = puVar9[7];
      puVar9 = puVar9 + 8;
      uVar26 = *puVar3;
      uVar27 = puVar3[1];
      uVar28 = puVar3[2];
      uVar29 = puVar3[3];
      uVar30 = puVar3[4];
      uVar31 = puVar3[5];
      uVar32 = puVar3[6];
      uVar33 = puVar3[7];
      puVar3 = puVar3 + 8;
      *param_2 = uVar18;
      param_2[1] = uVar19;
      param_2[2] = uVar20;
      param_2[3] = uVar21;
      param_2[4] = uVar22;
      param_2[5] = uVar23;
      param_2[6] = uVar24;
      param_2[7] = uVar25;
      param_2 = param_2 + 8;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      param_1[4] = uVar14;
      param_1[5] = uVar15;
      param_1[6] = uVar16;
      param_1[7] = uVar17;
      param_1 = param_1 + 8;
      *param_3 = uVar26;
      param_3[1] = uVar27;
      param_3[2] = uVar28;
      param_3[3] = uVar29;
      param_3[4] = uVar30;
      param_3[5] = uVar31;
      param_3[6] = uVar32;
      param_3[7] = uVar33;
      param_3 = param_3 + 8;
      uVar2 = uVar7 - 8;
      bVar1 = 7 < (int)uVar7;
      uVar7 = uVar2;
    } while (uVar2 != 0 && bVar1);
    param_1 = param_1 + (int)uVar2;
    param_2 = param_2 + (int)uVar2;
    param_3 = param_3 + (int)uVar2;
    param_5 = param_5 + 0x800;
    param_4 = param_4 + 0x800;
    param_6 = param_6 + 0x200;
    param_8 = param_8 + -1;
    puVar4 = puVar4 + 2;
    puVar5 = puVar5 + 2;
  } while (param_8 != 0);
  return;
}


