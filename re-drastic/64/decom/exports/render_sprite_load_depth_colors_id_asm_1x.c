/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_colors_id_asm_1x
 * Address  : 0019b7f0
 * Program  : drastic64
 */


void render_sprite_load_depth_colors_id_asm_1x
               (undefined4 *param_1,undefined4 *param_2,undefined *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined *param_6,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  
  iVar2 = 0x100 - (param_7 + 7U & 0xfffffff8);
  iVar4 = param_7;
  do {
    do {
      uVar13 = *param_5;
      uVar14 = param_5[1];
      uVar15 = param_5[2];
      uVar16 = param_5[3];
      uVar17 = param_5[4];
      uVar18 = param_5[5];
      uVar19 = param_5[6];
      uVar20 = param_5[7];
      param_5 = param_5 + 8;
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      uVar9 = param_4[4];
      uVar10 = param_4[5];
      uVar11 = param_4[6];
      uVar12 = param_4[7];
      param_4 = param_4 + 8;
      uVar21 = *param_6;
      uVar22 = param_6[1];
      uVar23 = param_6[2];
      uVar24 = param_6[3];
      uVar25 = param_6[4];
      uVar26 = param_6[5];
      uVar27 = param_6[6];
      uVar28 = param_6[7];
      param_6 = param_6 + 8;
      *param_2 = uVar13;
      param_2[1] = uVar14;
      param_2[2] = uVar15;
      param_2[3] = uVar16;
      param_2[4] = uVar17;
      param_2[5] = uVar18;
      param_2[6] = uVar19;
      param_2[7] = uVar20;
      param_2 = param_2 + 8;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      param_1[6] = uVar11;
      param_1[7] = uVar12;
      param_1 = param_1 + 8;
      *param_3 = uVar21;
      param_3[1] = uVar22;
      param_3[2] = uVar23;
      param_3[3] = uVar24;
      param_3[4] = uVar25;
      param_3[5] = uVar26;
      param_3[6] = uVar27;
      param_3[7] = uVar28;
      param_3 = param_3 + 8;
      iVar3 = iVar4 + -8;
      bVar1 = 7 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar1);
    param_1 = param_1 + iVar3;
    param_2 = param_2 + iVar3;
    param_3 = param_3 + iVar3;
    param_5 = param_5 + iVar2;
    param_4 = param_4 + iVar2;
    param_6 = param_6 + iVar2;
    param_8 = param_8 + -1;
    iVar4 = param_7;
  } while (param_8 != 0);
  return;
}


