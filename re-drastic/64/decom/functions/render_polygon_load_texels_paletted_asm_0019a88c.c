/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_texels_paletted_asm
 * Address  : 0019a88c
 * Program  : drastic64
 */


void render_polygon_load_texels_paletted_asm
               (undefined4 *param_1,uint *param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  
  do {
    lVar9 = param_5 + -8;
    uVar2 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[1]) * 4);
    uVar3 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[2]) * 4);
    uVar4 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[3]) * 4);
    uVar5 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[4]) * 4);
    uVar6 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[5]) * 4);
    uVar7 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[6]) * 4);
    uVar8 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)param_2[7]) * 4);
    *param_1 = *(undefined4 *)(param_4 + (ulong)*(byte *)(param_3 + (ulong)*param_2) * 4);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    bVar1 = 7 < param_5;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    param_5 = lVar9;
  } while (lVar9 != 0 && bVar1);
  return;
}


