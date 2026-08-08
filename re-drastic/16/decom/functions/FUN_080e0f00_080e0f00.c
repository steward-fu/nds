/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0f00
 * Address  : 080e0f00
 * Program  : drastic16
 */


int FUN_080e0f00(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  FUN_080e2bd8(param_1);
  return param_1;
}


