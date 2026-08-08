/*
 * Ghidra decompilation
 *
 * Function : FUN_080a8888
 * Address  : 080a8888
 * Program  : drastic16
 */


void FUN_080a8888(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0809fb4c(param_1,param_2 - *(int *)(param_1 + 4));
  }
  else {
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}


