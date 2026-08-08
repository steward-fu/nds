/*
 * Ghidra decompilation
 *
 * Function : extended_load64
 * Address  : 08012d00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable region_pointer_1:u8 *[r0:4] conflicts with parameter, skipped. */

u64 extended_load64(memory_interface_struct *memory_interface,u32 address)

{
  u8 uVar1;
  u32 *puVar2;
  u8 *region_pointer_3;
  memory_region_struct *pmVar3;
  memory_region_struct *memory_region_1;
  memory_region_struct *memory_region;
  u32 page_table_value_1;
  uint uVar4;
  u32 page_table_value;
  u32 page_offset_1;
  uint uVar5;
  u32 page_offset;
  u32 uVar6;
  u32 uVar7;
  u8 *puVar8;
  u8 *region_pointer_2;
  uint uVar9;
  u8 *region_pointer;
  
  if (address < 0x10000000) {
    uVar5 = address >> 0x17;
    pmVar3 = memory_interface->memory_regions;
    uVar1 = pmVar3[uVar5].load_access;
    if (uVar1 == '\x01') {
      puVar2 = (u32 *)(*pmVar3[uVar5].load_handler.get_pointer)(memory_interface->memory,address);
      uVar5 = address - (address & 0x7ff);
      memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] |
           1 << (uVar5 * 0x800 >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] |
           1 << (uVar5 * 0x10000 >> 0x1b);
      memory_interface->page_table[uVar5 >> 0xb] = (int)puVar2 - address >> 2 | 0x40000000;
      uVar7 = *puVar2;
    }
    else if (uVar1 == '\0') {
      puVar8 = pmVar3[uVar5].load_handler.direct_memory;
      uVar9 = pmVar3[uVar5].mask & address;
      uVar4 = (uint)(puVar8 + ((uVar9 & 0xfffff800) - (address & 0xfffff800))) >> 2;
      if (pmVar3[uVar5].store_access != '\0') {
        uVar4 = uVar4 | 0x40000000;
      }
      memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
           1 << ((address << 0xb) >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
           1 << ((address << 0x10) >> 0x1b);
      *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) = uVar4;
      uVar7 = *(u32 *)(puVar8 + uVar9);
    }
    else if (uVar1 == '\x02') {
      uVar7 = (*pmVar3[uVar5].load_handler.extended_function.load32)
                        (memory_interface->memory,pmVar3[uVar5].mask & address);
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  uVar5 = address + 4;
  if (uVar5 < 0xfffffff || address == 0xffffffb) {
    uVar4 = uVar5 >> 0x17;
    pmVar3 = memory_interface->memory_regions;
    uVar1 = pmVar3[uVar4].load_access;
    if (uVar1 == '\x01') {
      puVar2 = (u32 *)(*pmVar3[uVar4].load_handler.get_pointer)(memory_interface->memory,uVar5);
      uVar4 = uVar5 - (uVar5 & 0x7ff);
      memory_interface->page_allocation_bitmap_coarse[uVar4 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[uVar4 >> 0x15] |
           1 << (uVar4 * 0x800 >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[uVar4 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[uVar4 >> 0x10] |
           1 << (uVar4 * 0x10000 >> 0x1b);
      memory_interface->page_table[uVar4 >> 0xb] = (int)puVar2 - uVar5 >> 2 | 0x40000000;
      uVar6 = *puVar2;
    }
    else if (uVar1 == '\0') {
      puVar8 = pmVar3[uVar4].load_handler.direct_memory;
      uVar9 = pmVar3[uVar4].mask & uVar5;
      page_table_value_1 = (uint)(puVar8 + ((uVar9 & 0xfffff800) - (uVar5 & 0xfffff800))) >> 2;
      if (pmVar3[uVar4].store_access != '\0') {
        page_table_value_1 = page_table_value_1 | 0x40000000;
      }
      memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] |
           1 << (uVar5 * 0x800 >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] |
           1 << (uVar5 * 0x10000 >> 0x1b);
      *(u32 *)((int)memory_interface->page_table + ((uVar5 & 0xfffff800) >> 9)) = page_table_value_1
      ;
      uVar6 = *(u32 *)(puVar8 + uVar9);
    }
    else if (uVar1 == '\x02') {
      uVar6 = (*pmVar3[uVar4].load_handler.extended_function.load32)
                        (memory_interface->memory,pmVar3[uVar4].mask & uVar5);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return CONCAT44(uVar6,uVar7);
}


