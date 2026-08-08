/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Free
 * Address  : 001ad350
 * Program  : drastic64
 */


void SzArEx_Free(undefined8 *param_1,long param_2)

{
  (**(code **)(param_2 + 8))(param_2,param_1[9]);
  (**(code **)(param_2 + 8))(param_2,param_1[10]);
  (**(code **)(param_2 + 8))(param_2,param_1[0xb]);
  (**(code **)(param_2 + 8))(param_2,param_1[0xc]);
  (**(code **)(param_2 + 8))(param_2,param_1[0xd]);
  Buf_Free(param_1 + 0xe,param_2);
  SzAr_Free(param_1,param_2);
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


