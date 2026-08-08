/*
 * Ghidra decompilation
 *
 * Function : map_memory_page
 * Address  : 0800cbac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_memory_page(memory_interface_struct *memory_interface,u8 *region_buffer,u32 region_offset,
                    u32 write_protect)

{
  u32 page_table_value;
  uint uVar1;
  memory_struct *pmVar2;
  memory_struct *memory;
  
  pmVar2 = memory_interface->memory;
  if ((pmVar2->itcm_end <= region_offset + 0x800) &&
     ((region_offset < pmVar2->dtcm_base || (pmVar2->dtcm_end <= region_offset + 0x800)))) {
    uVar1 = (int)region_buffer - region_offset >> 2;
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
  }
  return;
}


