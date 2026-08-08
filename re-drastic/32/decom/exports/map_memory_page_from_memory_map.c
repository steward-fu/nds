/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_from_memory_map
 * Address  : 0800c9fc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_memory_page_from_memory_map(memory_interface_struct *memory_interface,u32 region_offset)

{
  u32 page_table_value;
  uint uVar1;
  memory_region_struct *pmVar2;
  u8 *puVar3;
  u32 region_page;
  memory_region_struct *memory_region;
  u8 *puVar4;
  
  if (region_offset < 0x10000000) {
    uVar1 = region_offset >> 0x17;
    pmVar2 = memory_interface->memory_regions;
    if (pmVar2[uVar1].load_access == '\0') {
      puVar3 = pmVar2[uVar1].load_handler.direct_memory + (pmVar2[uVar1].mask & region_offset);
      puVar4 = puVar3;
      if (pmVar2[uVar1].store_access != '\0') {
        puVar4 = (u8 *)0x0;
      }
LAB_0800ca54:
      if (puVar3 != (u8 *)0x0) {
        uVar1 = (int)puVar3 - region_offset >> 2;
        if (puVar3 != puVar4) {
          memory_interface->page_table[region_offset >> 0xb] = uVar1 | 0x40000000;
          return;
        }
        goto LAB_0800caa4;
      }
    }
  }
  else if ((0xfffeffff < region_offset) && (memory_interface->cpu->type == '\x01')) {
    puVar3 = memory_interface->memory->arm9_bios + (region_offset & 0xfff);
    puVar4 = (u8 *)0x0;
    goto LAB_0800ca54;
  }
  uVar1 = 0x40000000;
LAB_0800caa4:
  memory_interface->page_table[region_offset >> 0xb] = uVar1;
  return;
}


