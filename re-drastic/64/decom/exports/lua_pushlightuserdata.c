/*
 * Ghidra decompilation
 *
 * Function : lua_pushlightuserdata
 * Address  : 001f2880
 * Program  : drastic64
 */


void lua_pushlightuserdata(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 2;
  *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  return;
}


