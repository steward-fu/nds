/*
 * Ghidra decompilation
 *
 * Function : load_memory32
 * Address  : 08013b6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 load_memory32(memory_interface_struct *memory_interface,u32 address)

{
  u8 uVar1;
  u32 uVar2;
  u32 *puVar3;
  u8 *region_pointer_1;
  u32 page_table_value;
  uint uVar4;
  uint uVar5;
  u8 *puVar6;
  u8 *region_pointer;
  memory_region_struct *pmVar7;
  u32 page_offset;
  memory_region_struct *memory_region;
  uint uVar8;
  
  if ((memory_interface->page_table[address >> 0xb] & 0x3fffffff) != 0) {
    return *(u32 *)(address + memory_interface->page_table[address >> 0xb] * 4);
  }
  if (0xfffffff < address) {
    return 0xffffffff;
  }
  uVar5 = address >> 0x17;
  pmVar7 = memory_interface->memory_regions;
  uVar1 = pmVar7[uVar5].load_access;
  if (uVar1 == '\x01') {
    puVar3 = (u32 *)(*pmVar7[uVar5].load_handler.get_pointer)(memory_interface->memory,address);
    uVar5 = address - (address & 0x7ff);
    memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] |
         1 << (uVar5 * 0x800 >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] |
         1 << (uVar5 * 0x10000 >> 0x1b);
    memory_interface->page_table[uVar5 >> 0xb] = (int)puVar3 - address >> 2 | 0x40000000;
    uVar2 = *puVar3;
  }
  else if (uVar1 == '\0') {
    puVar6 = pmVar7[uVar5].load_handler.direct_memory;
    uVar8 = address & pmVar7[uVar5].mask;
    uVar4 = (uint)(puVar6 + ((uVar8 & 0xfffff800) - (address & 0xfffff800))) >> 2;
    if (pmVar7[uVar5].store_access != '\0') {
      uVar4 = uVar4 | 0x40000000;
    }
    memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
         1 << ((address << 0xb) >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
         1 << ((address << 0x10) >> 0x1b);
    *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) = uVar4;
    uVar2 = *(u32 *)(puVar6 + uVar8);
  }
  else {
    if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x08013c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pmVar7[uVar5].load_handler.extended_function.load32)
                        (memory_interface->memory,pmVar7[uVar5].mask & address);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


