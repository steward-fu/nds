/*
 * Ghidra decompilation
 *
 * Function : FUN_080d59f8
 * Address  : 080d59f8
 * Program  : drastic16
 */


void ** FUN_080d59f8(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  return param_1;
}


