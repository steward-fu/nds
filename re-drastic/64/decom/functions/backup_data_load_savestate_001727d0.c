/*
 * Ghidra decompilation
 *
 * Function : backup_data_load_savestate
 * Address  : 001727d0
 * Program  : drastic64
 */


void backup_data_load_savestate(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__ptr;
  void *__src;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2408);
  *(undefined4 *)(param_1 + 0x2400) = **(undefined4 **)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  iVar3 = *(int *)(lVar2 + 4);
  *(int *)(param_1 + 0x2408) = iVar3;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(param_1 + 0x2418) = *(undefined4 *)(lVar2 + 4);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined *)(param_1 + 0x2424) = *(undefined *)(lVar2 + 4);
  __ptr = *(void **)(param_1 + 0x2410);
  __src = (void *)(*(long *)(param_2 + 0x20) + 1);
  *(void **)(param_2 + 0x20) = __src;
  if (iVar1 != iVar3) {
    __ptr = realloc(__ptr,(ulong)(iVar3 + 1));
    iVar3 = *(int *)(param_1 + 0x2408);
    __src = *(void **)(param_2 + 0x20);
    *(void **)(param_1 + 0x2410) = __ptr;
  }
  memcpy(__ptr,__src,(ulong)(iVar3 + 1));
  *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + (ulong)(*(int *)(param_1 + 0x2408) + 1);
  return;
}


