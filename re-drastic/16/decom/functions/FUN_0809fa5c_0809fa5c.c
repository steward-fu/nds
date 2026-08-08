/*
 * Ghidra decompilation
 *
 * Function : FUN_0809fa5c
 * Address  : 0809fa5c
 * Program  : drastic16
 */


void FUN_0809fa5c(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x58) + 6) * 4);
  }
  return;
}


