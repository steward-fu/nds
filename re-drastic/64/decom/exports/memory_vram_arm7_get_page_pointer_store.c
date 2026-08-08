/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm7_get_page_pointer_store
 * Address  : 001106d0
 * Program  : drastic64
 */


long memory_vram_arm7_get_page_pointer_store(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xfba70) + ((param_2 >> 0x11 & 1) + 0x43a) * 8);
  lVar1 = param_1 + 0x8b070;
  if (lVar2 != param_1 + 0x6b070) {
    lVar1 = lVar2;
  }
  return lVar1 + (param_2 & 0x1ffff);
}


