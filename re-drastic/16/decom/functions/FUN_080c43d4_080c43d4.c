/*
 * Ghidra decompilation
 *
 * Function : FUN_080c43d4
 * Address  : 080c43d4
 * Program  : drastic16
 */


void FUN_080c43d4(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
    free((void *)param_1[0x2b]);
  }
  return;
}


