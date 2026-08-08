/*
 * Ghidra decompilation
 *
 * Function : lua_pushnil
 * Address  : 001f24d0
 * Program  : drastic64
 */


void lua_pushnil(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 8) = 0;
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  return;
}


