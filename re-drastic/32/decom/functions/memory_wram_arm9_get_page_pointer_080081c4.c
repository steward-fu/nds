/*
 * Ghidra decompilation
 *
 * Function : memory_wram_arm9_get_page_pointer
 * Address  : 080081c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * memory_wram_arm9_get_page_pointer(memory_struct *memory,u32 address)

{
  return (u8 *)(*(int *)((int)memory + (0x3ee80 - ((int)(address << 0x11) >> 0x1f)) * 4 + 4) +
               (address & 0x3fff));
}


