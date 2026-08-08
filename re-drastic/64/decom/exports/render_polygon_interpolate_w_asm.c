/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_w_asm
 * Address  : 00199f04
 * Program  : drastic64
 */


void render_polygon_interpolate_w_asm(int *param_1,int *param_2,undefined6 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  int *piVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  
  piVar7 = param_2 + 0x18c;
  do {
    iVar2 = param_2[0x2c];
    iVar3 = *param_2;
    uVar8 = (uint)*(ushort *)piVar7;
    do {
      uVar5 = *param_3;
      sVar9 = *(short *)((long)param_3 + 6);
      uVar6 = param_3[1];
      sVar10 = *(short *)((long)param_3 + 0xe);
      param_3 = param_3 + 2;
      *param_1 = (int)((ulong)((long)iVar2 * (long)(int)(short)uVar5) >> 0xf) + iVar3;
      param_1[1] = (int)((ulong)((long)iVar2 * (long)(int)(short)((uint6)uVar5 >> 0x10)) >> 0xf) +
                   iVar3;
      param_1[2] = (int)((ulong)((long)iVar2 * (long)(int)(short)((uint6)uVar5 >> 0x20)) >> 0xf) +
                   iVar3;
      param_1[3] = (int)((ulong)((long)iVar2 * (long)(int)sVar9) >> 0xf) + iVar3;
      param_1[4] = (int)((ulong)((long)iVar2 * (long)(int)(short)uVar6) >> 0xf) + iVar3;
      param_1[5] = (int)((ulong)((long)iVar2 * (long)(int)(short)((uint6)uVar6 >> 0x10)) >> 0xf) +
                   iVar3;
      param_1[6] = (int)((ulong)((long)iVar2 * (long)(int)(short)((uint6)uVar6 >> 0x20)) >> 0xf) +
                   iVar3;
      param_1[7] = (int)((ulong)((long)iVar2 * (long)(int)sVar10) >> 0xf) + iVar3;
      param_1 = param_1 + 8;
      uVar4 = uVar8 - 8;
      bVar1 = 7 < (int)uVar8;
      uVar8 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_3 = (undefined6 *)((long)param_3 + (long)(int)uVar4 * 2);
    param_1 = param_1 + (int)uVar4;
    param_4 = param_4 + -1;
    param_2 = param_2 + 1;
    piVar7 = piVar7 + 1;
  } while (param_4 != 0);
  return;
}


