/*
 * Ghidra decompilation
 *
 * Function : growstack
 * Address  : 001f0a60
 * Program  : drastic64
 */


void growstack(undefined8 param_1,undefined4 *param_2)

{
  luaD_growstack(param_1,*param_2);
  return;
}


