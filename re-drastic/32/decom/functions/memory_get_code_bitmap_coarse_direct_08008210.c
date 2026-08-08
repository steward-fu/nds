/*
 * Ghidra decompilation
 *
 * Function : memory_get_code_bitmap_coarse_direct
 * Address  : 08008210
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 * memory_get_code_bitmap_coarse_direct
                (memory_struct *memory,memory_region_struct *memory_region,u32 address)

{
  return memory_region->code_bitmap_coarse + ((address & memory_region->mask) >> 0x10);
}


