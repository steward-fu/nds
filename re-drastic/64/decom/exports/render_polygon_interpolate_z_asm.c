/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_z_asm
 * Address  : 00199f78
 * Program  : drastic64
 */


void render_polygon_interpolate_z_asm(undefined4 *param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  ushort *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar4 = (uint *)(param_2 + 0x160);
  puVar2 = (ushort *)(param_2 + 0x630);
  piVar3 = (int *)(param_2 + 0x210);
  do {
    uVar6 = (ulong)*puVar2;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    lVar7 = 0x3fffffff;
    if (-1 < *piVar3) {
      lVar7 = 0;
    }
    lVar7 = lVar7 + (long)*piVar3 * (long)*(int *)(param_4 + uVar6 * 4);
    uVar12 = (ulong)uVar1 * 0x40000000;
    uVar13 = lVar7 + (ulong)uVar1 * 0x40000000;
    uVar14 = uVar12 + lVar7 * 2;
    uVar15 = uVar13 + lVar7 * 2;
    do {
      uVar8 = uVar12 >> 0x1e;
      uVar10 = uVar13 >> 0x1e;
      uVar9 = uVar14 >> 0x1e;
      uVar11 = uVar15 >> 0x1e;
      uVar12 = uVar12 + lVar7 * 4;
      uVar13 = uVar13 + lVar7 * 4;
      uVar14 = uVar14 + lVar7 * 4;
      uVar15 = uVar15 + lVar7 * 4;
      *param_1 = (int)uVar8;
      param_1[1] = (int)uVar10;
      param_1[2] = (int)uVar9;
      param_1[3] = (int)uVar11;
      param_1 = param_1 + 4;
      iVar5 = (int)uVar6;
      uVar1 = iVar5 - 4;
      uVar6 = (ulong)uVar1;
    } while (uVar1 != 0 && 3 < iVar5);
    param_1 = param_1 + (int)uVar1;
    param_3 = param_3 + -1;
    puVar2 = puVar2 + 2;
    piVar3 = piVar3 + 1;
  } while (param_3 != 0);
  return;
}


