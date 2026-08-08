/*
 * Ghidra decompilation
 *
 * Function : FUN_0017404c
 * Address  : 0017404c
 * Program  : drastic64
 */


long FUN_0017404c(long *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar5 = (ulong)uVar2;
  lVar8 = param_1[2];
  uVar6 = 0;
  while (uVar6 < uVar5) {
    while( true ) {
      uVar7 = uVar5 + uVar6 >> 1;
      uVar3 = *(uint *)(*(long *)(lVar8 + uVar7 * 8) + 0x24);
      if (param_2 == uVar3) {
        lVar10 = (long)(int)uVar7;
        iVar9 = (int)((long)(uVar7 * 8) >> 3);
        iVar4 = iVar9;
        goto joined_r0x0017414c;
      }
      if (uVar3 <= param_2 && param_2 != uVar3) break;
      uVar5 = uVar7;
      if (uVar7 <= uVar6) goto LAB_001740c8;
    }
    uVar6 = uVar7 + 1;
  }
LAB_001740c8:
  if (uVar2 == 0) {
    return 0;
  }
LAB_001740cc:
  lVar8 = 0;
  uVar3 = 0;
  do {
    uVar3 = uVar3 + 1;
    if (((*(uint *)(*param_1 + 0x24 + lVar8) ^ param_2) & 0xffffff) == 0) {
      __printf_chk(1,
                   " Couldn\'t find full gamecode (%08x), going with first alt-region match (%08x)\n"
                   ,param_2);
      return *param_1 + lVar8;
    }
    lVar8 = lVar8 + 0x38;
  } while (uVar3 < uVar2);
  return 0;
joined_r0x0017414c:
  if (iVar4 < 0) goto LAB_0017417c;
  lVar11 = *(long *)(lVar8 + lVar10 * 8);
  lVar10 = lVar10 + -1;
  if (*(uint *)(lVar11 + 0x24) != uVar3) goto LAB_0017417c;
  iVar4 = strcmp((char *)(lVar11 + 8),param_3);
  if (iVar4 == 0) {
    return lVar11;
  }
  iVar4 = (int)lVar10;
  goto joined_r0x0017414c;
LAB_0017417c:
  uVar1 = iVar9 + 1;
  if (uVar1 < uVar2) {
    lVar10 = (long)(int)uVar1;
    do {
      lVar11 = *(long *)(lVar8 + lVar10 * 8);
      lVar10 = lVar10 + 1;
      if (*(uint *)(lVar11 + 0x24) != uVar3) {
        __printf_chk(1,
                     " Couldn\'t find gamecode + ID for %08x:%s, returning first gamecode match.\n",
                     uVar3,param_3);
        return *(long *)(lVar8 + uVar7 * 8);
      }
      iVar4 = strcmp((char *)(lVar11 + 8),param_3);
      if (iVar4 == 0) {
        return lVar11;
      }
    } while ((uint)lVar10 < uVar2);
    goto LAB_001740cc;
  }
  goto LAB_001740c8;
}


