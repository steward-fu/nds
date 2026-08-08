/*
 * Ghidra decompilation
 *
 * Function : extended_memory_get_page_ptr
 * Address  : 08012724
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * extended_memory_get_page_ptr(memory_interface_struct *memory_interface,u32 address)

{
  u8 *region_pointer;
  u8 *puVar1;
  uint uVar2;
  memory_region_struct *pmVar3;
  u32 page_offset;
  memory_region_struct *memory_region;
  
  uVar2 = address >> 0x17;
  pmVar3 = memory_interface->memory_regions;
  if (pmVar3[uVar2].load_access == '\0') {
    puVar1 = pmVar3[uVar2].load_handler.direct_memory;
    uVar2 = address & pmVar3[uVar2].mask;
    region_pointer = puVar1 + uVar2;
    memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
         1 << ((address << 0xb) >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
         1 << ((address << 0x10) >> 0x1b);
    *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) =
         (uint)(puVar1 + ((uVar2 & 0xfffff800) - (address & 0xfffff800))) >> 2 | 0x40000000;
  }
  else if (pmVar3[uVar2].load_access == '\x01') {
    region_pointer = (*pmVar3[uVar2].load_handler.get_pointer)(memory_interface->memory,address);
    uVar2 = address - (address & 0x7ff);
    memory_interface->page_allocation_bitmap_coarse[uVar2 >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[uVar2 >> 0x15] |
         1 << (uVar2 * 0x800 >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[uVar2 >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[uVar2 >> 0x10] |
         1 << (uVar2 * 0x10000 >> 0x1b);
    memory_interface->page_table[uVar2 >> 0xb] = (int)region_pointer - address >> 2 | 0x40000000;
  }
  else {
    region_pointer = (u8 *)0x0;
  }
  return region_pointer;
}


