/*
 * Ghidra decompilation
 *
 * Function : load_memory16
 * Address  : 080139cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u16 load_memory16(memory_interface_struct *memory_interface,u32 address)

{
  int iVar1;
  u8 uVar2;
  u16 uVar3;
  u16 *puVar4;
  u8 *region_pointer_1;
  u32 page_table_value;
  uint uVar5;
  uint uVar6;
  u8 *puVar7;
  u8 *region_pointer;
  memory_region_struct *pmVar8;
  u32 page_offset;
  memory_region_struct *memory_region;
  uint uVar9;
  
  iVar1 = memory_interface->page_table[address >> 0xb] * 4;
  if (iVar1 != 0) {
    return *(u16 *)(address + iVar1);
  }
  if (0xfffffff < address) {
    return 0xffff;
  }
  uVar6 = address >> 0x17;
  pmVar8 = memory_interface->memory_regions;
  uVar2 = pmVar8[uVar6].load_access;
  if (uVar2 == '\x01') {
    puVar4 = (u16 *)(*pmVar8[uVar6].load_handler.get_pointer)(memory_interface->memory,address);
    uVar6 = address - (address & 0x7ff);
    memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] |
         1 << (uVar6 * 0x800 >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] |
         1 << (uVar6 * 0x10000 >> 0x1b);
    memory_interface->page_table[uVar6 >> 0xb] = (int)puVar4 - address >> 2 | 0x40000000;
    uVar3 = *puVar4;
  }
  else if (uVar2 == '\0') {
    puVar7 = pmVar8[uVar6].load_handler.direct_memory;
    uVar9 = address & pmVar8[uVar6].mask;
    uVar5 = (uint)(puVar7 + ((uVar9 & 0xfffff800) - (address & 0xfffff800))) >> 2;
    if (pmVar8[uVar6].store_access != '\0') {
      uVar5 = uVar5 | 0x40000000;
    }
    memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
         memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
         1 << ((address << 0xb) >> 0x1b);
    memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
         memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
         1 << ((address << 0x10) >> 0x1b);
    *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) = uVar5;
    uVar3 = *(u16 *)(puVar7 + uVar9);
  }
  else {
    if (uVar2 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x08013a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pmVar8[uVar6].load_handler.extended_function.load16)
                        (memory_interface->memory,pmVar8[uVar6].mask & address);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


