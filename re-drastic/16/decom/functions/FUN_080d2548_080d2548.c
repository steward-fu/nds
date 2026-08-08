/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2548
 * Address  : 080d2548
 * Program  : drastic16
 */


void FUN_080d2548(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(iVar1 + 8) = param_1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 8);
  return;
}


