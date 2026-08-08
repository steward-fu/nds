/*
 * Ghidra decompilation
 *
 * Function : luaE_freeCI
 * Address  : 001ffd10
 * Program  : drastic64
 */


void luaE_freeCI(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    luaM_realloc_(param_1,lVar1,0x48,0);
    lVar1 = lVar2;
  }
  return;
}


