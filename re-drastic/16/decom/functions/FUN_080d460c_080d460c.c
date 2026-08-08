/*
 * Ghidra decompilation
 *
 * Function : FUN_080d460c
 * Address  : 080d460c
 * Program  : drastic16
 */


void FUN_080d460c(int param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x650) = param_3;
  *(char *)(*(int *)(param_2 + 0x650) + 1) = *(char *)(*(int *)(param_2 + 0x650) + 1) + '\x04';
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 4;
  if (0x7c < *(byte *)(param_3 + 1)) {
    FUN_080c4f4c(param_1,param_2);
  }
  *(char *)(param_2 + 0xa6c) = *(char *)(param_2 + 0xa6c) + '\x01';
  *(undefined4 *)(param_2 + 0x664) = *(undefined4 *)(param_2 + 0x668);
  return;
}


