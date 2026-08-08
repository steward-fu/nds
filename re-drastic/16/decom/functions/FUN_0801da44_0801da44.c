/*
 * Ghidra decompilation
 *
 * Function : FUN_0801da44
 * Address  : 0801da44
 * Program  : drastic16
 */


void FUN_0801da44(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x2080);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = iVar1;
  return;
}


