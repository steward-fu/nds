/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2234
 * Address  : 080d2234
 * Program  : drastic16
 */


void FUN_080d2234(int *param_1,int param_2)

{
  *param_1 = *param_1 + ((uint)(param_2 + param_1[1]) >> 3);
  param_1[1] = param_2 + param_1[1] & 7;
  return;
}


