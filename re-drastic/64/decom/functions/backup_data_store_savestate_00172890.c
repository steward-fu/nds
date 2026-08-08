/*
 * Ghidra decompilation
 *
 * Function : backup_data_store_savestate
 * Address  : 00172890
 * Program  : drastic64
 */


void backup_data_store_savestate(long param_1,long param_2)

{
  void *__dest;
  int iVar1;
  long lVar2;
  void *__src;
  
  **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x2400);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x2408);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_1 + 0x2418);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar2 + 4;
  *(undefined *)(lVar2 + 4) = *(undefined *)(param_1 + 0x2424);
  __src = *(void **)(param_1 + 0x2410);
  __dest = (void *)(*(long *)(param_2 + 0x20) + 1);
  iVar1 = *(int *)(param_1 + 0x2408);
  *(void **)(param_2 + 0x20) = __dest;
  memcpy(__dest,__src,(ulong)(iVar1 + 1));
  *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + (ulong)(*(int *)(param_1 + 0x2408) + 1);
  return;
}


