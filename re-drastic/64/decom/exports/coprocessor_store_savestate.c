/*
 * Ghidra decompilation
 *
 * Function : coprocessor_store_savestate
 * Address  : 00129bf0
 * Program  : drastic64
 */


void coprocessor_store_savestate(long param_1,long param_2)

{
  long lVar1;
  
  **(undefined4 **)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(param_1 + 0x1c);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 4;
  return;
}


