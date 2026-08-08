/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0f8c
 * Address  : 080e0f8c
 * Program  : drastic16
 */


void FUN_080e0f8c(undefined4 param_1,undefined *param_2,undefined4 param_3)

{
  *param_2 = (char)param_3;
  param_2[1] = (char)((uint)param_3 >> 8);
  param_2[2] = (char)((uint)param_3 >> 0x10);
  param_2[3] = (char)((uint)param_3 >> 0x18);
  return;
}


