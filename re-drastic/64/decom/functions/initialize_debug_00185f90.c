/*
 * Ghidra decompilation
 *
 * Function : initialize_debug
 * Address  : 00185f90
 * Program  : drastic64
 */


void initialize_debug(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x26) = 0x10102;
  return;
}


