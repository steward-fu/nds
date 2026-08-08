/*
 * Ghidra decompilation
 *
 * Function : FUN_0805ddd8
 * Address  : 0805ddd8
 * Program  : drastic16
 */


void FUN_0805ddd8(int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x404) = **(undefined4 **)(param_2 + 0x10);
  puVar1 = (undefined2 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined2 **)(param_2 + 0x10) = puVar1;
  *(undefined2 *)(param_1 + 0x418) = *puVar1;
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 2;
  *(undefined *)(param_1 + 0x41a) = *(undefined *)(iVar2 + 2);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 1;
  *(undefined *)(param_1 + 0x41b) = *(undefined *)(iVar2 + 1);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 1;
  *(undefined *)(param_1 + 0x41d) = *(undefined *)(iVar2 + 1);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


