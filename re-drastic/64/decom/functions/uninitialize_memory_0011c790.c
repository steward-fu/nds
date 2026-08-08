/*
 * Ghidra decompilation
 *
 * Function : uninitialize_memory
 * Address  : 0011c790
 * Program  : drastic64
 */


int uninitialize_memory(long param_1)

{
  int iVar1;
  
  munmap(*(void **)(param_1 + 0xfd4f0),0x4000000);
  close(*(int *)(param_1 + 0xfd4e8));
  munmap(*(void **)(param_1 + 0xfd4f8),0xa8000);
  munmap(*(void **)(param_1 + 0xfd500),0x800000);
  iVar1 = close(*(int *)(param_1 + 0xfd508));
  return iVar1;
}


