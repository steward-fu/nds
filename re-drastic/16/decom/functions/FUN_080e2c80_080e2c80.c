/*
 * Ghidra decompilation
 *
 * Function : FUN_080e2c80
 * Address  : 080e2c80
 * Program  : drastic16
 */


void FUN_080e2c80(int param_1,undefined4 param_2)

{
  if (((*(int *)(param_1 + 0xc) != 0) && (*(char *)(param_1 + 8) != '\x01')) &&
     (*(int *)(param_1 + 0xc) != 0)) {
    operator_delete__(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined *)(param_1 + 8) = 1;
  return;
}


