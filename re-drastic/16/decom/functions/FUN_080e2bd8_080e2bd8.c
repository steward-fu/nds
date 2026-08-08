/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2bd8
 * Address  : 080e2bd8
 * Program  : drastic16
 */


int FUN_080e2bd8(int param_1)

{
  if ((*(char *)(param_1 + 8) != '\x01') && (*(int *)(param_1 + 0xc) != 0)) {
    operator_delete__(*(void **)(param_1 + 0xc));
  }
  return param_1;
}


