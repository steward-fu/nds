/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_texels_paletted
 * Address  : 080c2890
 * Program  : drastic
 */


void render_polygon_load_texels_paletted
               (undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  
  do {
    iVar2 = *param_2;
    piVar11 = param_2 + 1;
    piVar12 = param_2 + 2;
    piVar13 = param_2 + 3;
    piVar14 = param_2 + 4;
    piVar15 = param_2 + 5;
    piVar16 = param_2 + 6;
    piVar17 = param_2 + 7;
    param_2 = param_2 + 8;
    iVar9 = param_5 + -8;
    uVar3 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar11) * 4);
    uVar4 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar12) * 4);
    uVar5 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar13) * 4);
    uVar6 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar14) * 4);
    uVar7 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar15) * 4);
    uVar8 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar16) * 4);
    uVar10 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + *piVar17) * 4);
    *param_1 = *(undefined4 *)(param_4 + (uint)*(byte *)(param_3 + iVar2) * 4);
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar10;
    param_1 = param_1 + 8;
    bVar1 = 7 < param_5;
    param_5 = iVar9;
  } while (iVar9 != 0 && bVar1);
  return;
}


