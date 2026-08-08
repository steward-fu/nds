/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6dd8
 * Address  : 080b6dd8
 * Program  : drastic16
 */


void ** FUN_080b6dd8(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  return param_1;
}


