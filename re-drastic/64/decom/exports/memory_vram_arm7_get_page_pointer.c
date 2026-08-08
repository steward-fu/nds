/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm7_get_page_pointer
 * Address  : 001106b0
 * Program  : drastic64
 */


long memory_vram_arm7_get_page_pointer(long param_1,ulong param_2)

{
  return *(long *)(*(long *)(param_1 + 0xfba70) + ((param_2 >> 0x11 & 1) + 0x43a) * 8) +
         (param_2 & 0x1ffff);
}


