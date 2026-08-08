/*
 * Ghidra decompilation
 *
 * Function : render_sprite_load_depth_4x
 * Address  : 080c4e00
 * Program  : drastic
 */


void render_sprite_load_depth_4x(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar2 = param_3;
  do {
    do {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uVar10 = param_2[6];
      uVar11 = param_2[7];
      param_2 = param_2 + 8;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      param_1[6] = uVar10;
      param_1[7] = uVar11;
      param_1 = param_1 + 8;
      iVar3 = iVar2 + -0x10;
      bVar1 = 0xf < iVar2;
      iVar2 = iVar3;
    } while (iVar3 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + iVar3 * 4);
    param_4 = param_4 + -1;
    param_2 = (undefined8 *)((int)param_2 + iVar3 * 4 + param_3 * -4 + 0x800);
    iVar2 = param_3;
  } while (param_4 != 0);
  return;
}


