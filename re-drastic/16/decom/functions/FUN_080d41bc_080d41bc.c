/*
 * Ghidra decompilation
 *
 * Function : FUN_080d41bc
 * Address  : 080d41bc
 * Program  : drastic16
 */


void FUN_080d41bc(int param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x650) = param_3;
  *(char *)(*(int *)(param_2 + 0x650) + 1) = *(char *)(*(int *)(param_2 + 0x650) + 1) + '\x04';
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 4;
  if (*(byte *)(param_3 + -5) < *(byte *)(param_3 + 1)) {
    FUN_080d5428(param_3,param_3 + -6);
    *(int *)(param_2 + 0x650) = param_3 + -6;
    if (0x7c < *(byte *)(param_3 + -5)) {
      FUN_080c4f4c(param_1,param_2);
    }
  }
  return;
}


