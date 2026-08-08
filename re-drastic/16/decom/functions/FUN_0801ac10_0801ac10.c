/*
 * Ghidra decompilation
 *
 * Function : FUN_0801ac10
 * Address  : 0801ac10
 * Program  : drastic16
 */


void FUN_0801ac10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  *(undefined *)((int)param_1 + 0x25) = 0;
  param_1[5] = param_4 + 0xb0;
  param_1[4] = param_5;
  if (*(char *)(param_5 + 0x2104) == '\x01') {
    FUN_08015438(*(int *)(param_5 + 0x2308) + 0x18,0xc,&LAB_0801456c,param_1 + 2);
  }
  param_1[0xc] = param_5;
  *(undefined *)((int)param_1 + 0x45) = 1;
  param_1[0xd] = param_4 + 0xbc;
  if (*(char *)(param_5 + 0x2104) == '\x01') {
    FUN_08015438(*(int *)(param_5 + 0x2308) + 0x18,0xd,&LAB_0801456c,param_1 + 10);
  }
  param_1[0x14] = param_5;
  param_1[0x15] = param_4 + 200;
  *(undefined *)((int)param_1 + 0x65) = 2;
  if (*(char *)(param_5 + 0x2104) == '\x01') {
    FUN_08015438(*(int *)(param_5 + 0x2308) + 0x18,0xe,&LAB_0801456c,param_1 + 0x12);
  }
  param_1[0x1c] = param_5;
  param_1[0x1d] = param_4 + 0xd4;
  *(undefined *)((int)param_1 + 0x85) = 3;
  if (*(char *)(param_5 + 0x2104) == '\x01') {
    FUN_08015438(*(int *)(param_5 + 0x2308) + 0x18,0xf,&LAB_0801456c,param_1 + 0x1a);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


