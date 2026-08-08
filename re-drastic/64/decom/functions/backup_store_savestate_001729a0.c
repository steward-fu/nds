/*
 * Ghidra decompilation
 *
 * Function : backup_store_savestate
 * Address  : 001729a0
 * Program  : drastic64
 */


void backup_store_savestate(long param_1,long param_2)

{
  long lVar1;
  
  **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x2404);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined2 *)(lVar1 + 4) = *(undefined2 *)(param_1 + 0x2420);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 2;
  *(undefined *)(lVar1 + 2) = *(undefined *)(param_1 + 0x2422);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x2423);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(lVar1 + 1) = *(undefined *)(param_1 + 0x2425);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  return;
}


