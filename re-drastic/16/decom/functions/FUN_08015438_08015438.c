/*
 * Ghidra decompilation
 *
 * Function : FUN_08015438
 * Address  : 08015438
 * Program  : drastic16
 */


void FUN_08015438(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1 = param_1 + param_2 * 0x18;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(char *)(param_1 + 0x14) = (char)param_2;
  return;
}


