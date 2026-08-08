/*
 * Ghidra decompilation
 *
 * Function : luaD_shrinkstack
 * Address  : 001f6110
 * Program  : drastic64
 */


void luaD_shrinkstack(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x10);
  while (lVar4 != 0) {
    puVar1 = (ulong *)(lVar4 + 8);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (uVar3 < *puVar1) {
      uVar3 = *puVar1;
    }
  }
  iVar5 = (int)((long)(uVar3 - *(long *)(param_1 + 0x38)) >> 4);
  iVar2 = iVar5 + 1;
  if (*(int *)(param_1 + 0xb8) < 0xf4241) {
    luaE_shrinkCI(param_1);
  }
  else {
    luaE_freeCI();
  }
  if (iVar2 < 0xf4241) {
    iVar5 = iVar5 + 8;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = iVar2 + (iVar5 >> 3) + 10;
    if (1000000 < iVar2) {
      iVar2 = 1000000;
    }
    if (iVar2 < *(int *)(param_1 + 0xb8)) {
      luaD_reallocstack(param_1);
      return;
    }
  }
  return;
}


