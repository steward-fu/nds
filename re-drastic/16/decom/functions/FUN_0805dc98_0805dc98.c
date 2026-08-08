/*
 * Ghidra decompilation
 *
 * Function : FUN_0805dc98
 * Address  : 0805dc98
 * Program  : drastic16
 */


void FUN_0805dc98(int param_1,int param_2)

{
  void *__dest;
  int iVar1;
  void *__src;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x408);
  *(undefined4 *)(param_1 + 0x400) = **(undefined4 **)(param_2 + 0x10);
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar3;
  *(undefined4 *)(param_1 + 0x408) = *puVar3;
  iVar2 = *(int *)(param_1 + 0x408);
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
  *(undefined4 **)(param_2 + 0x10) = puVar3;
  *(undefined4 *)(param_1 + 0x410) = *puVar3;
  iVar4 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar4 + 4;
  *(undefined *)(param_1 + 0x41c) = *(undefined *)(iVar4 + 4);
  __src = (void *)(*(int *)(param_2 + 0x10) + 1);
  *(void **)(param_2 + 0x10) = __src;
  if (iVar2 == iVar1) {
    __dest = *(void **)(param_1 + 0x40c);
  }
  else {
    __dest = realloc(*(void **)(param_1 + 0x40c),iVar2 + 1);
    iVar2 = *(int *)(param_1 + 0x408);
    __src = *(void **)(param_2 + 0x10);
    *(void **)(param_1 + 0x40c) = __dest;
  }
  memcpy(__dest,__src,iVar2 + 1);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x408) + 1;
  return;
}


