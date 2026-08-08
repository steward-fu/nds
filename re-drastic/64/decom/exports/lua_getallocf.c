/*
 * Ghidra decompilation
 *
 * Function : lua_getallocf
 * Address  : 001f4430
 * Program  : drastic64
 */


undefined8 lua_getallocf(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = puVar1[1];
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  return *puVar1;
}


