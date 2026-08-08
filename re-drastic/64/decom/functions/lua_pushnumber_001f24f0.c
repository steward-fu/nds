/*
 * Ghidra decompilation
 *
 * Function : lua_pushnumber
 * Address  : 001f24f0
 * Program  : drastic64
 */


void lua_pushnumber(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x10);
  *puVar1 = param_1;
  puVar1[2] = 3;
  *(undefined4 **)(param_2 + 0x10) = puVar1 + 4;
  return;
}


