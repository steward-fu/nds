/*
 * Ghidra decompilation
 *
 * Function : reset_touchscreen
 * Address  : 00171340
 * Program  : drastic64
 */


void reset_touchscreen(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}


