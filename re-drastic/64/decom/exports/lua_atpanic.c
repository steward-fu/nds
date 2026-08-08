/*
 * Ghidra decompilation
 *
 * Function : lua_atpanic
 * Address  : 001f0bb0
 * Program  : drastic64
 */


undefined8 lua_atpanic(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd8);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd8) = param_2;
  return uVar1;
}


