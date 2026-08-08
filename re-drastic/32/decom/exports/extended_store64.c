/*
 * Ghidra decompilation
 *
 * Function : extended_store64
 * Address  : 0801350c
 * Program  : drastic
 */


void extended_store64(memory_interface_struct *memory_interface,u32 address,u64 value)

{
  u8 uVar1;
  u8 *puVar2;
  u8 *region_pointer_2;
  u32 *puVar3;
  u8 *region_pointer_3;
  u8 *region_pointer_1;
  memory_region_struct *pmVar4;
  u8 *region_pointer;
  u32 in_r2;
  uint uVar5;
  u32 in_r3;
  uint uVar6;
  memory_region_struct *memory_region_1;
  memory_region_struct *memory_region;
  
  if (address < 0x10000000) {
    uVar6 = address >> 0x17;
    pmVar4 = memory_interface->memory_regions;
    uVar1 = pmVar4[uVar6].store_access;
    if (uVar1 == '\x01') {
      puVar3 = (u32 *)(*pmVar4[uVar6].store_handler.get_pointer)(memory_interface->memory,address);
      if (pmVar4[uVar6].load_access == pmVar4[uVar6].store_access) {
        uVar6 = address - (address & 0x7ff);
        memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] |
             1 << (uVar6 * 0x800 >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] |
             1 << (uVar6 * 0x10000 >> 0x1b);
        memory_interface->page_table[uVar6 >> 0xb] =
             (uint)((int)puVar3 + (-uVar6 - (address & 0x7ff))) >> 2;
      }
      *puVar3 = in_r2;
    }
    else if (uVar1 == '\0') {
      puVar2 = pmVar4[uVar6].store_handler.direct_memory;
      if (pmVar4[uVar6].load_access == '\0') {
        uVar6 = pmVar4[uVar6].mask;
        memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
             1 << ((address << 0xb) >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
             1 << ((address << 0x10) >> 0x1b);
        *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) =
             (uint)(puVar2 + ((uVar6 & 0xfffff800 & address) - (address & 0xfffff800))) >> 2;
      }
      else {
        uVar6 = pmVar4[uVar6].mask;
      }
      *(u32 *)(puVar2 + (uVar6 & address)) = in_r2;
    }
    else if (uVar1 == '\x02') {
      (*pmVar4[uVar6].store_handler.extended_function.store32)
                (memory_interface->memory,pmVar4[uVar6].mask & address,in_r2);
    }
  }
  uVar6 = address + 4;
  if (uVar6 < 0xfffffff || address == 0xffffffb) {
    uVar5 = uVar6 >> 0x17;
    pmVar4 = memory_interface->memory_regions;
    uVar1 = pmVar4[uVar5].store_access;
    if (uVar1 == '\x01') {
      puVar3 = (u32 *)(*pmVar4[uVar5].store_handler.get_pointer)(memory_interface->memory,uVar6);
      if (pmVar4[uVar5].load_access == pmVar4[uVar5].store_access) {
        uVar5 = uVar6 - (uVar6 & 0x7ff);
        memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[uVar5 >> 0x15] |
             1 << (uVar5 * 0x800 >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[uVar5 >> 0x10] |
             1 << (uVar5 * 0x10000 >> 0x1b);
        memory_interface->page_table[uVar5 >> 0xb] =
             (uint)((int)puVar3 + (-uVar5 - (uVar6 & 0x7ff))) >> 2;
      }
      *puVar3 = in_r3;
    }
    else if (uVar1 == '\0') {
      puVar2 = pmVar4[uVar5].store_handler.direct_memory;
      if (pmVar4[uVar5].load_access == '\0') {
        uVar5 = pmVar4[uVar5].mask;
        memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[uVar6 >> 0x15] |
             1 << (uVar6 * 0x800 >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[uVar6 >> 0x10] |
             1 << (uVar6 * 0x10000 >> 0x1b);
        *(uint *)((int)memory_interface->page_table + ((uVar6 & 0xfffff800) >> 9)) =
             (uint)(puVar2 + ((uVar5 & 0xfffff800 & uVar6) - (uVar6 & 0xfffff800))) >> 2;
      }
      else {
        uVar5 = pmVar4[uVar5].mask;
      }
      *(u32 *)(puVar2 + (uVar6 & uVar5)) = in_r3;
    }
    else if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x080135c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pmVar4[uVar5].store_handler.extended_function.store32)
                (memory_interface->memory,pmVar4[uVar5].mask & uVar6,in_r3);
      return;
    }
  }
  return;
}


