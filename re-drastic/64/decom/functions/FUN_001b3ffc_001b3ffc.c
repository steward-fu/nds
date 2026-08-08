/*
 * Ghidra decompilation
 *
 * Function : FUN_001b3ffc
 * Address  : 001b3ffc
 * Program  : drastic64
 */


void FUN_001b3ffc(void **param_1)

{
  param_1[4] = (void *)0x0;
  if (*param_1 != (void *)0x0) {
    free(*param_1);
    *param_1 = (void *)0x0;
  }
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x16] = (void *)0x0;
  return;
}


