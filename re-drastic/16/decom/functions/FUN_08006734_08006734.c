/*
 * Ghidra decompilation
 *
 * Function : FUN_08006734
 * Address  : 08006734
 * Program  : drastic16
 */


int FUN_08006734(int param_1,uint param_2)

{
  return *(int *)(*(int *)(param_1 + 0xfba20) + ((param_2 & 0xffffff) >> 0xe) * 4 + 0xb8) +
         (param_2 & 0xffffff);
}


