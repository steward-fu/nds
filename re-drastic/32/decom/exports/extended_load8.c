/*
 * Ghidra decompilation
 *
 * Function : extended_load8
 * Address  : 08012868
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 extended_load8(memory_interface_struct *memory_interface,u32 address)

{
  u8 uVar1;
  u8 *puVar2;
  u8 *region_pointer_1;
  u32 page_table_value;
  uint uVar3;
  uint uVar4;
  memory_region_struct *pmVar5;
  u8 *region_pointer;
  u32 page_offset;
  memory_region_struct *memory_region;
  uint uVar6;
  
  if (0xfffffff < address) {
    return 0xff;
  }
  uVar4 = address >> 0x17;
  pmVar5 = memory_interface->memory_regions;
  uVar1 = pmVar5[uVar4].load_access;
  if (uVar1 == '\x01') {
    puVar2 = (*pmVar5[uVar4].load_handler.get_pointer)(memory_interface->memory,address);
    uVar4 = address - (address & 0x7ff);
    memory_interface->page_allocation_bitmap_coarse[uVar4 >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[uVar4 >> 0x15] |
         1 << (uVar4 * 0x800 >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[uVar4 >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[uVar4 >> 0x10] |
         1 << (uVar4 * 0x10000 >> 0x1b);
    memory_interface->page_table[uVar4 >> 0xb] = (int)puVar2 - address >> 2 | 0x40000000;
    uVar1 = *puVar2;
  }
  else if (uVar1 == '\0') {
    puVar2 = pmVar5[uVar4].load_handler.direct_memory;
    uVar6 = pmVar5[uVar4].mask & address;
    uVar3 = (uint)(puVar2 + ((uVar6 & 0xfffff800) - (address & 0xfffff800))) >> 2;
    if (pmVar5[uVar4].store_access != '\0') {
      uVar3 = uVar3 | 0x40000000;
    }
    memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
         1 << ((address << 0xb) >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
         1 << ((address << 0x10) >> 0x1b);
    *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) = uVar3;
    uVar1 = puVar2[uVar6];
  }
  else {
    if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x080128e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (*pmVar5[uVar4].load_handler.get_pointer)
                         (memory_interface->memory,pmVar5[uVar4].mask & address);
      return (u8)puVar2;
    }
    uVar1 = '\0';
  }
  return uVar1;
}


