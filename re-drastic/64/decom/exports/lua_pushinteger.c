/*
 * Ghidra decompilation
 *
 * Function : lua_pushinteger
 * Address  : 001f2510
 * Program  : drastic64
 */


void lua_pushinteger(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *puVar1 = param_2;
  puVar1[2] = 0x13;
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 4;
  return;
}


