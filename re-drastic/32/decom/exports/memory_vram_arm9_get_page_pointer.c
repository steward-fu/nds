/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm9_get_page_pointer
 * Address  : 08008084
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable _offset:u32[r1:4] conflicts with parameter, skipped. */

u8 * memory_vram_arm9_get_page_pointer(memory_struct *memory,u32 address)

{
  return memory->video->vram_map[(address & 0xffffff) >> 0xe] + (address & 0xffffff);
}


