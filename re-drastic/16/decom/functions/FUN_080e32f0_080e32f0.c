/*
 * Ghidra decompilation
 *
 * Function : FUN_080e32f0
 * Address  : 080e32f0
 * Program  : drastic16
 */


void FUN_080e32f0(int param_1,uint param_2)

{
  **(int **)(param_1 + 0xf8) = **(int **)(param_1 + 0xf8) + param_2;
  *(uint *)(*(int *)(param_1 + 0xf8) + 4) =
       *(int *)(*(int *)(param_1 + 0xf8) + 4) + (uint)(**(uint **)(param_1 + 0xf8) < param_2);
  return;
}


