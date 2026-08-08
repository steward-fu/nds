/*
 * Ghidra decompilation
 *
 * Function : FUN_0809fab8
 * Address  : 0809fab8
 * Program  : drastic16
 */


void FUN_0809fab8(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
    *param_1 = (void *)0x0;
  }
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  return;
}


