/*
 * Ghidra decompilation
 *
 * Function : FUN_080afb6c
 * Address  : 080afb6c
 * Program  : drastic16
 */


void FUN_080afb6c(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
    *param_1 = (void *)0x0;
  }
  param_1[1] = (void *)0x0;
  param_1[2] = (void *)0x0;
  return;
}


