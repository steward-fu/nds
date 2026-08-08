/*
 * Ghidra decompilation
 *
 * Function : FUN_08058940
 * Address  : 08058940
 * Program  : drastic16
 */


void FUN_08058940(undefined4 *param_1,undefined4 param_2)

{
  memset(param_1 + 1,0,0x4000);
  *param_1 = param_2;
  param_1[0x1002] = 0;
  param_1[0x1003] = 0;
  param_1[0x1001] = 0;
  return;
}


