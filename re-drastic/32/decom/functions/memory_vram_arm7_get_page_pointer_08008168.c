/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm7_get_page_pointer
 * Address  : 08008168
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * memory_vram_arm7_get_page_pointer(memory_struct *memory,u32 address)

{
  return (u8 *)(*(int *)((int)memory->video + (0x44c - ((int)(address << 0xe) >> 0x1f)) * 4) +
               (address & 0x1ffff));
}


