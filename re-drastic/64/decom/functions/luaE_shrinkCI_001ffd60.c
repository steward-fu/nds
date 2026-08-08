/*
 * Ghidra decompilation
 *
 * Function : luaE_shrinkCI
 * Address  : 001ffd60
 * Program  : drastic64
 */


void luaE_shrinkCI(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  while ((lVar2 != 0 && (lVar3 = *(long *)(lVar2 + 0x18), lVar3 != 0))) {
    luaM_realloc_(param_1,lVar2,0x48,0);
    *(long *)(lVar1 + 0x18) = lVar3;
    *(long *)(lVar3 + 0x10) = lVar1;
    lVar1 = lVar3;
    lVar2 = *(long *)(lVar3 + 0x18);
  }
  return;
}


