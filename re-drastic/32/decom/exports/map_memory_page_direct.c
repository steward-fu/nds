/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_direct
 * Address  : 0800c890
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable page_table_value:u32[r1:4] conflicts with parameter, skipped. */

void map_memory_page_direct
               (memory_interface_struct *memory_interface,u8 *region_pointer,u32 region_offset,
               u32 write_protect)

{
  uint uVar1;
  
  uVar1 = (int)region_pointer - region_offset >> 2;
  if (write_protect != 0) {
    uVar1 = uVar1 | 0x40000000;
  }
  memory_interface->page_allocation_bitmap_coarse[region_offset >> 0x15] =
       memory_interface->page_allocation_bitmap_coarse[region_offset >> 0x15] |
       1 << ((region_offset << 0xb) >> 0x1b);
  memory_interface->page_allocation_bitmap_fine[region_offset >> 0x10] =
       memory_interface->page_allocation_bitmap_fine[region_offset >> 0x10] |
       1 << ((region_offset << 0x10) >> 0x1b);
  memory_interface->page_table[region_offset >> 0xb] = uVar1;
  return;
}


