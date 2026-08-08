/*
 * Ghidra decompilation
 *
 * Function : FUN_080d5a60
 * Address  : 080d5a60
 * Program  : drastic16
 */


void ** FUN_080d5a60(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  return param_1;
}


