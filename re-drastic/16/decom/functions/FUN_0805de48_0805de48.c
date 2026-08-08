/*
 * Ghidra decompilation
 *
 * Function : FUN_0805de48
 * Address  : 0805de48
 * Program  : drastic16
 */


void FUN_0805de48(int param_1,int param_2)

{
  int iVar1;
  
  **(undefined4 **)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x404);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 4;
  *(undefined2 *)(iVar1 + 4) = *(undefined2 *)(param_1 + 0x418);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 2;
  *(undefined *)(iVar1 + 2) = *(undefined *)(param_1 + 0x41a);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 1;
  *(undefined *)(iVar1 + 1) = *(undefined *)(param_1 + 0x41b);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 1;
  *(undefined *)(iVar1 + 1) = *(undefined *)(param_1 + 0x41d);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


