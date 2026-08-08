/*
 * Ghidra decompilation
 *
 * Function : luaE_extendCI
 * Address  : 001ffcd0
 * Program  : drastic64
 */


void luaE_extendCI(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = luaM_realloc_(param_1,0,0,0x48);
  lVar2 = *(long *)(param_1 + 0x20);
  *(long *)(lVar2 + 0x18) = lVar1;
  *(long *)(lVar1 + 0x10) = lVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}


