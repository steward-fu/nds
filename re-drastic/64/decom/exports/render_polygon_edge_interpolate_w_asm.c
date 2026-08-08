/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_w_asm
 * Address  : 0019ad40
 * Program  : drastic64
 */


void render_polygon_edge_interpolate_w_asm
               (int **param_1,int *param_2,undefined6 *param_3,byte *param_4,int param_5)

{
  bool bVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined6 uVar6;
  undefined6 uVar7;
  int *piVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  
  do {
    piVar8 = *param_1;
    ppiVar2 = param_1 + 1;
    param_1 = param_1 + 2;
    iVar3 = *piVar8;
    iVar4 = **ppiVar2 - iVar3;
    uVar9 = (uint)*param_4;
    do {
      uVar6 = *param_3;
      sVar10 = *(short *)((long)param_3 + 6);
      uVar7 = param_3[1];
      sVar11 = *(short *)((long)param_3 + 0xe);
      param_3 = param_3 + 2;
      *param_2 = (int)((ulong)((long)iVar4 * (long)(int)(short)uVar6) >> 0xf) + iVar3;
      param_2[1] = (int)((ulong)((long)iVar4 * (long)(int)(short)((uint6)uVar6 >> 0x10)) >> 0xf) +
                   iVar3;
      param_2[2] = (int)((ulong)((long)iVar4 * (long)(int)(short)((uint6)uVar6 >> 0x20)) >> 0xf) +
                   iVar3;
      param_2[3] = (int)((ulong)((long)iVar4 * (long)(int)sVar10) >> 0xf) + iVar3;
      param_2[4] = (int)((ulong)((long)iVar4 * (long)(int)(short)uVar7) >> 0xf) + iVar3;
      param_2[5] = (int)((ulong)((long)iVar4 * (long)(int)(short)((uint6)uVar7 >> 0x10)) >> 0xf) +
                   iVar3;
      param_2[6] = (int)((ulong)((long)iVar4 * (long)(int)(short)((uint6)uVar7 >> 0x20)) >> 0xf) +
                   iVar3;
      param_2[7] = (int)((ulong)((long)iVar4 * (long)(int)sVar11) >> 0xf) + iVar3;
      param_2 = param_2 + 8;
      uVar5 = uVar9 - 8;
      bVar1 = 7 < (int)uVar9;
      uVar9 = uVar5;
    } while (uVar5 != 0 && bVar1);
    param_3 = (undefined6 *)((long)param_3 + (long)(int)uVar5 * 2);
    param_2 = param_2 + (int)uVar5;
    param_5 = param_5 + -1;
    param_4 = param_4 + 1;
  } while (param_5 != 0);
  return;
}


