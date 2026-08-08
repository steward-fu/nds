/*
 * Ghidra decompilation
 *
 * Function : FUN_080d5314
 * Address  : 080d5314
 * Program  : drastic16
 */


void FUN_080d5314(undefined *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return;
}


