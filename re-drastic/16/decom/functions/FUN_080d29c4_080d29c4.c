/*
 * Ghidra decompilation
 *
 * Function : FUN_080d29c4
 * Address  : 080d29c4
 * Program  : drastic16
 */


void FUN_080d29c4(int *param_1)

{
  *param_1 = *param_1 + param_1[3] * param_1[2];
  param_1[2] = (param_1[4] - param_1[3]) * param_1[2];
  return;
}


