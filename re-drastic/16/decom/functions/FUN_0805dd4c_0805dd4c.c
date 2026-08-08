/*
 * Ghidra decompilation
 *
 * Function : FUN_0805dd4c
 * Address  : 0805dd4c
 * Program  : drastic16
 */


void FUN_0805dd4c(int param_1,int param_2)

{
  void *__dest;
  void *__src;
  int iVar1;
  
  **(undefined4 **)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x400);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x408);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x410);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1 + 4;
  *(undefined *)(iVar1 + 4) = *(undefined *)(param_1 + 0x41c);
  iVar1 = *(int *)(param_1 + 0x408);
  __dest = (void *)(*(int *)(param_2 + 0x10) + 1);
  __src = *(void **)(param_1 + 0x40c);
  *(void **)(param_2 + 0x10) = __dest;
  memcpy(__dest,__src,iVar1 + 1);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x408) + 1;
  return;
}


