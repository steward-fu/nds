/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2808
 * Address  : 080d2808
 * Program  : drastic16
 */


int FUN_080d2808(int param_1)

{
  if (*(int *)(param_1 + 0x4ad4) != 0) {
    free(*(void **)(param_1 + 0x4ad4));
  }
  FUN_080e2bd8(param_1 + 4);
  return param_1;
}


