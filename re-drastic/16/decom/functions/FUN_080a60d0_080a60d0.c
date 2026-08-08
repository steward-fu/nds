/*
 * Ghidra decompilation
 *
 * Function : FUN_080a60d0
 * Address  : 080a60d0
 * Program  : drastic16
 */


void ** FUN_080a60d0(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  return param_1;
}


