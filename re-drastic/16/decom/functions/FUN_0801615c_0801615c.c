/*
 * Ghidra decompilation
 *
 * Function : FUN_0801615c
 * Address  : 0801615c
 * Program  : drastic16
 */


int FUN_0801615c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  iVar10 = *(int *)(param_3 + 0x880);
  uVar7 = *(uint *)(param_2 + 0x14);
  iVar11 = *(int *)(param_2 + 8);
  uVar12 = *(uint *)(iVar10 + 0x10);
  uVar2 = *(uint *)(iVar10 + 8);
  iVar5 = *(int *)(iVar10 + 0xc);
  if (0xfffffff < uVar7) {
    uVar7 = 0;
  }
  iVar6 = *(int *)(param_3 + 0x8b0);
  uVar3 = uVar2 + uVar12;
  iVar9 = iVar6 * 4;
  uVar13 = *(uint *)(iVar11 + 0x236c);
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3 - uVar13;
  iVar1 = FUN_08009c5c(param_1[1],*param_1,uVar7,
                       *(int *)(*(int *)(param_3 + 0x884) + 4) + *(int *)(param_3 + 0x8ac),iVar9);
  bVar14 = (uVar8 & 0x2000000) == 0;
  if (bVar14) {
    uVar8 = uVar8 & 0x7fffffff;
  }
  *(int *)(param_3 + 0x8ac) = *(int *)(param_3 + 0x8ac) + iVar9;
  if (bVar14) {
    *(uint *)(param_2 + 0x18) = uVar8;
    *(uint *)(*(int *)(param_2 + 0xc) + 8) = uVar8;
  }
  if ((uVar8 << 9) >> 0x1e != 3) {
    *(uint *)(param_2 + 0x14) = uVar7 + iVar9;
  }
  uVar7 = iVar6 * 0x28;
  *(undefined4 *)(param_3 + 0x8b0) = 0;
  iVar9 = *(int *)(iVar10 + 8);
  *(uint *)(param_3 + 0x878) = uVar4 + uVar7;
  *(uint *)(param_3 + 0x87c) =
       ((iVar5 + (uint)CARRY4(uVar2,uVar12)) - (((int)uVar13 >> 0x1f) + (uint)(uVar3 < uVar13))) +
       (uint)CARRY4(uVar4,uVar7);
  *(uint *)(*(int *)(param_3 + 0x888) + 0x1a4) =
       *(uint *)(*(int *)(param_3 + 0x888) + 0x1a4) & 0x7f7fffff;
  if ((*(uint *)(*(int *)(param_3 + 0x888) + 0x1a0) & 0x4000) != 0) {
    if (*(char *)(iVar10 + 0x2916464) == '\0') {
      iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x2080);
      uVar2 = *(uint *)(iVar5 + 0x214) | 0x80000;
      *(uint *)(iVar5 + 0x214) = uVar2;
      iVar10 = *(int *)(param_2 + 8);
      if ((*(byte *)(iVar10 + 0x2105) & 6) == 0) {
        uVar2 = uVar2 & -*(int *)(iVar5 + 0x208) & *(uint *)(iVar5 + 0x210);
        *(uint *)(iVar10 + 0x2100) = uVar2;
      }
      else {
        uVar2 = *(uint *)(iVar10 + 0x2100);
      }
      if (uVar2 != 0) {
        *(uint *)(iVar10 + 0x237c) = *(uint *)(iVar10 + 0x237c) | 2;
      }
    }
    else {
      if (*(char *)(param_3 + 0xce5) != '\0') {
        FUN_080153f4(iVar10 + 0x18,0xb);
      }
      uVar4 = (uVar7 - iVar9) + uVar4;
      *(undefined *)(param_3 + 0xce5) = 1;
      FUN_08015360(iVar10 + 0x18,uVar4,0xb);
      if (uVar4 < *(uint *)(iVar10 + 0x10)) {
        *(uint *)(iVar11 + 0x237c) = *(uint *)(iVar11 + 0x237c) | 4;
      }
    }
  }
  if (iVar1 != 0) {
    *(uint *)(*(int *)(param_2 + 8) + 0x237c) = *(uint *)(*(int *)(param_2 + 8) + 0x237c) | 1;
    puts("DMA from gamecard modified code.");
  }
  return iVar1;
}


