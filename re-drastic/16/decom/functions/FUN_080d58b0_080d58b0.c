/*
 * Ghidra decompilation
 *
 * Function : FUN_080d58b0
 * Address  : 080d58b0
 * Program  : drastic16
 */


void FUN_080d58b0(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_080d5c24(param_1,param_2 - *(int *)(param_1 + 4));
  }
  else {
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}


