/*
 * Ghidra decompilation
 *
 * Function : memory_wram_arm7_get_page_pointer
 * Address  : 00110730
 * Program  : drastic64
 */


long memory_wram_arm7_get_page_pointer(long param_1,ulong param_2)

{
  return *(long *)(param_1 + ((param_2 >> 0xe & 1) + 0x1f74a) * 8) + (param_2 & 0x3fff);
}


