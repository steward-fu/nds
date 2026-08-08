/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_colors_id_c_4x
 * Address  : 00153c30
 * Program  : drastic64
 */


void render_sprite_load_depth_colors_id_c_4x
               (undefined4 *param_1,undefined4 *param_2,undefined *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined *param_6,int param_7,int param_8)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  ulong uVar12;
  
  uVar12 = (ulong)(0x200 - (param_7 + 7U & 0xfffffff8));
  if ((param_8 != 0) && (0 < param_7)) {
    uVar3 = param_7 - 1U >> 3;
    iVar4 = param_7 + -8 + uVar3 * -8;
    lVar1 = (ulong)uVar3 + 1;
    iVar11 = 0;
    do {
      puVar5 = param_6;
      puVar6 = param_1;
      puVar7 = param_2;
      puVar8 = param_3;
      puVar9 = param_4;
      puVar10 = param_5;
      do {
        *puVar6 = *puVar9;
        puVar2 = puVar5 + 8;
        *puVar7 = *puVar10;
        *puVar8 = *puVar5;
        puVar6[1] = puVar9[1];
        puVar7[1] = puVar10[1];
        puVar8[1] = puVar5[1];
        puVar6[2] = puVar9[2];
        puVar7[2] = puVar10[2];
        puVar8[2] = puVar5[2];
        puVar6[3] = puVar9[3];
        puVar7[3] = puVar10[3];
        puVar8[3] = puVar5[3];
        puVar6[4] = puVar9[4];
        puVar7[4] = puVar10[4];
        puVar8[4] = puVar5[4];
        puVar6[5] = puVar9[5];
        puVar7[5] = puVar10[5];
        puVar8[5] = puVar5[5];
        puVar6[6] = puVar9[6];
        puVar7[6] = puVar10[6];
        puVar8[6] = puVar5[6];
        puVar6[7] = puVar9[7];
        puVar7[7] = puVar10[7];
        puVar8[7] = puVar5[7];
        puVar5 = puVar2;
        puVar6 = puVar6 + 8;
        puVar7 = puVar7 + 8;
        puVar8 = puVar8 + 8;
        puVar9 = puVar9 + 8;
        puVar10 = puVar10 + 8;
      } while (param_6 + lVar1 * 8 != puVar2);
      iVar11 = iVar11 + 1;
      param_1 = param_1 + (long)iVar4 + lVar1 * 8;
      param_2 = param_2 + (long)iVar4 + lVar1 * 8;
      param_3 = param_3 + lVar1 * 8 + (long)iVar4;
      param_4 = param_4 + lVar1 * 8 + uVar12;
      param_5 = param_5 + lVar1 * 8 + uVar12;
      param_6 = puVar2 + uVar12;
    } while (param_8 != iVar11);
    return;
  }
  return;
}


