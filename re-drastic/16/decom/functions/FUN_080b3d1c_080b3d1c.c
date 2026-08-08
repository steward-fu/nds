/*
 * Ghidra decompilation
 *
 * Function : FUN_080b3d1c
 * Address  : 080b3d1c
 * Program  : drastic16
 */


void FUN_080b3d1c(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return;
}


