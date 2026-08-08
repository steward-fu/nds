/*
 * Ghidra decompilation
 *
 * Function : FUN_0802a93c
 * Address  : 0802a93c
 * Program  : drastic16
 */


void FUN_0802a93c(int param_1,int param_2,undefined4 param_3)

{
  undefined2 local_12;
  
  FUN_08034500(param_1 + 0x1d98);
  FUN_08034500(param_1 + 0x82cd8,param_2,param_3);
  FUN_08054ab4(param_1 + 0x184830,param_2,param_3);
  **(undefined2 **)(param_2 + 0x10) = local_12;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 2;
  return;
}


