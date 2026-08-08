/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm9_get_page_pointer
 * Address  : 001105d0
 * Program  : drastic64
 */


long memory_vram_arm9_get_page_pointer(long param_1,ulong param_2)

{
  return *(long *)(*(long *)(param_1 + 0xfba70) + ((param_2 >> 0xe & 0x3ff) + 0x14) * 8) +
         (param_2 & 0xffffff);
}


