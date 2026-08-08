/*
 * Ghidra decompilation
 *
 * Function : lua_pushboolean
 * Address  : 001f2850
 * Program  : drastic64
 */


void lua_pushboolean(long param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  *puVar1 = (uint)(param_2 != 0);
  puVar1[2] = 1;
  *(uint **)(param_1 + 0x10) = puVar1 + 4;
  return;
}


