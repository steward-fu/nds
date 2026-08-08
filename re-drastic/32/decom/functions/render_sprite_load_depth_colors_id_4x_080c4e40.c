/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_colors_id_4x
 * Address  : 080c4e40
 * Program  : drastic
 */


void render_sprite_load_depth_colors_id_4x
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar2 = 0x200 - (param_7 + 7U & 0xfffffff8);
  iVar3 = param_7;
  do {
    do {
      uVar9 = *param_5;
      uVar10 = param_5[1];
      uVar11 = param_5[2];
      uVar12 = param_5[3];
      param_5 = param_5 + 4;
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      param_4 = param_4 + 4;
      uVar13 = *param_6;
      param_6 = param_6 + 1;
      *param_2 = uVar9;
      param_2[1] = uVar10;
      param_2[2] = uVar11;
      param_2[3] = uVar12;
      param_2 = param_2 + 4;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      param_1 = param_1 + 4;
      *param_3 = uVar13;
      param_3 = param_3 + 1;
      iVar4 = iVar3 + -8;
      bVar1 = 7 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + iVar4 * 4);
    param_2 = (undefined8 *)((int)param_2 + iVar4 * 4);
    param_3 = (undefined8 *)((int)param_3 + iVar4);
    param_5 = (undefined8 *)((int)param_5 + iVar2 * 4);
    param_4 = (undefined8 *)((int)param_4 + iVar2 * 4);
    param_6 = (undefined8 *)((int)param_6 + iVar2);
    param_8 = param_8 + -1;
    iVar3 = param_7;
  } while (param_8 != 0);
  return;
}


