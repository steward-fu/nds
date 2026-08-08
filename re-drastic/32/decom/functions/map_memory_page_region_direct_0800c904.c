/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_region_direct
 * Address  : 0800c904
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_memory_page_region_direct
               (memory_interface_struct *memory_interface,u8 *region_pointer,u32 region_offset,
               u32 region_size,u32 write_protect)

{
  int iVar1;
  uint uVar2;
  u8 *puVar3;
  
  iVar1 = region_offset - (int)region_pointer;
  if (write_protect == 0) {
    do {
      puVar3 = region_pointer + iVar1;
      region_size = region_size - 0x800;
      uVar2 = (int)region_pointer - (int)puVar3;
      region_pointer = region_pointer + 0x800;
      memory_interface->page_allocation_bitmap_coarse[(uint)puVar3 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[(uint)puVar3 >> 0x15] |
           1 << ((uint)((int)puVar3 * 0x800) >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[(uint)puVar3 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[(uint)puVar3 >> 0x10] |
           1 << ((uint)((int)puVar3 * 0x10000) >> 0x1b);
      memory_interface->page_table[(uint)puVar3 >> 0xb] = uVar2 >> 2;
    } while (region_size != 0);
  }
  else {
    do {
      puVar3 = region_pointer + iVar1;
      region_size = region_size - 0x800;
      uVar2 = (int)region_pointer - (int)puVar3;
      region_pointer = region_pointer + 0x800;
      memory_interface->page_allocation_bitmap_coarse[(uint)puVar3 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[(uint)puVar3 >> 0x15] |
           1 << ((uint)((int)puVar3 * 0x800) >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[(uint)puVar3 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[(uint)puVar3 >> 0x10] |
           1 << ((uint)((int)puVar3 * 0x10000) >> 0x1b);
      memory_interface->page_table[(uint)puVar3 >> 0xb] = uVar2 >> 2 | 0x40000000;
    } while (region_size != 0);
  }
  return;
}


