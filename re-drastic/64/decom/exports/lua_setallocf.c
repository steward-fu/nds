/*
 * Ghidra decompilation
 *
 * Function : lua_setallocf
 * Address  : 001f4450
 * Program  : drastic64
 */


void lua_setallocf(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}


