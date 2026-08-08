/*
 * Ghidra decompilation
 *
 * Function : unmap_memory_page_region
 * Address  : 0800d10c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void unmap_memory_page_region
               (memory_interface_struct *memory_interface,u32 region_offset,u32 region_size)

{
  u32 dtcm_base;
  uint uVar1;
  uint uVar2;
  
  uVar1 = memory_interface->memory->dtcm_base;
  if ((uVar1 <= region_offset) &&
     (uVar2 = memory_interface->memory->dtcm_end, region_offset + region_size < uVar2)) {
    region_size = region_offset + (region_size - uVar2);
    unmap_memory_page_region_direct(memory_interface,region_offset,uVar1 - region_offset);
    region_offset = uVar1;
  }
  unmap_memory_page_region_direct(memory_interface,region_offset,region_size);
  return;
}


