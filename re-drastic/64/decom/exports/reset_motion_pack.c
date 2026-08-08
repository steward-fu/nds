/*
 * Ghidra decompilation
 *
 * Function : reset_motion_pack
 * Address  : 0016f170
 * Program  : drastic64
 */


void reset_motion_pack(undefined *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0x8080;
  param_1[4] = 0x80;
  return;
}


