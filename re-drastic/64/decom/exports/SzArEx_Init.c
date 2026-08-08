/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Init
 * Address  : 001ad320
 * Program  : drastic64
 */


void SzArEx_Init(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xd] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  Buf_Init(param_1 + 0xe);
  return;
}


