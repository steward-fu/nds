/*
 * Ghidra decompilation
 *
 * Function : memory_get_code_bitmap_fine_direct
 * Address  : 08008228
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 * memory_get_code_bitmap_fine_direct
                (memory_struct *memory,memory_region_struct *memory_region,u32 address)

{
  return memory_region->code_bitmap_fine + ((address & memory_region->mask) >> 6);
}


