/*
 * Ghidra decompilation
 *
 * Function : FUN_080dede0
 * Address  : 080dede0
 * Program  : drastic16
 */


int FUN_080dede0(int param_1)

{
  FUN_080deef4(param_1);
  if (*(int *)(param_1 + 0x10) != 0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  FUN_080a60d0(param_1 + 0x1050);
  FUN_080b3764(param_1 + 0x18);
  return param_1;
}


