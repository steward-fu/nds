/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_region_from_memory_map
 * Address  : 0800cacc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_memory_page_region_from_memory_map
               (memory_interface_struct *memory_interface,u32 region_offset,u32 region_size)

{
  uint uVar1;
  u8 *puVar2;
  u32 page_table_value;
  memory_struct *pmVar3;
  memory_region_struct *memory_region;
  u8 *puVar4;
  memory_region_struct *pmVar5;
  u32 region_page;
  
  pmVar3 = memory_interface->memory;
  do {
    if (region_offset < 0x10000000) {
      uVar1 = region_offset >> 0x17;
      pmVar5 = memory_interface->memory_regions;
      if (pmVar5[uVar1].load_access == '\0') {
        puVar2 = pmVar5[uVar1].load_handler.direct_memory + (region_offset & pmVar5[uVar1].mask);
        puVar4 = puVar2;
        if (pmVar5[uVar1].store_access != '\0') {
          puVar4 = (u8 *)0x0;
        }
        goto LAB_0800cb28;
      }
LAB_0800cb78:
      memory_interface->page_table[region_offset >> 0xb] = 0x40000000;
    }
    else {
      if ((region_offset < 0xffff0000) || (memory_interface->cpu->type != '\x01'))
      goto LAB_0800cb78;
      puVar2 = pmVar3->arm9_bios + (region_offset & 0xfff);
      puVar4 = (u8 *)0x0;
LAB_0800cb28:
      if (puVar2 == (u8 *)0x0) goto LAB_0800cb78;
      page_table_value = (int)puVar2 - region_offset >> 2;
      if (puVar2 != puVar4) {
        page_table_value = page_table_value | 0x40000000;
      }
      memory_interface->page_table[region_offset >> 0xb] = page_table_value;
    }
    region_offset = region_offset + 0x800;
    region_size = region_size - 0x800;
    if (region_size == 0) {
      return;
    }
  } while( true );
}


