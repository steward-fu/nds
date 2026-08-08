/*
 * Ghidra decompilation
 *
 * Function : backup_load_savestate
 * Address  : 00172930
 * Program  : drastic64
 */


void backup_load_savestate(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x2404) = **(undefined4 **)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined2 *)(param_1 + 0x2420) = *(undefined2 *)(lVar1 + 4);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 2;
  *(undefined *)(param_1 + 0x2422) = *(undefined *)(lVar1 + 2);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(param_1 + 0x2423) = *(undefined *)(lVar1 + 1);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 1;
  *(undefined *)(param_1 + 0x2425) = *(undefined *)(lVar1 + 1);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  return;
}


