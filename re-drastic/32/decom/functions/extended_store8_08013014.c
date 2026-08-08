/*
 * Ghidra decompilation
 *
 * Function : extended_store8
 * Address  : 08013014
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void extended_store8(memory_interface_struct *memory_interface,u32 address,u8 value)

{
  u8 uVar1;
  u8 *region_pointer_1;
  uint uVar2;
  memory_region_struct *memory_region;
  u8 *puVar3;
  u8 *region_pointer;
  memory_region_struct *pmVar4;
  
  if (0xfffffff < address) {
    return;
  }
  uVar2 = address >> 0x17;
  pmVar4 = memory_interface->memory_regions;
  uVar1 = pmVar4[uVar2].store_access;
  if (uVar1 == '\x01') {
    puVar3 = (*pmVar4[uVar2].store_handler.get_pointer)(memory_interface->memory,address);
    if (pmVar4[uVar2].load_access == pmVar4[uVar2].store_access) {
      uVar2 = address - (address & 0x7ff);
      memory_interface->page_allocation_bitmap_coarse[uVar2 >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[uVar2 >> 0x15] |
           1 << (uVar2 * 0x800 >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[uVar2 >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[uVar2 >> 0x10] |
           1 << (uVar2 * 0x10000 >> 0x1b);
      memory_interface->page_table[uVar2 >> 0xb] =
           (uint)(puVar3 + (-uVar2 - (address & 0x7ff))) >> 2;
    }
    *puVar3 = value;
  }
  else if (uVar1 == '\0') {
    puVar3 = pmVar4[uVar2].store_handler.direct_memory;
    if (pmVar4[uVar2].load_access == '\0') {
      uVar2 = pmVar4[uVar2].mask;
      memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
           1 << ((address << 0xb) >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
           1 << ((address << 0x10) >> 0x1b);
      *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) =
           (uint)(puVar3 + ((uVar2 & 0xfffff800 & address) - (address & 0xfffff800))) >> 2;
    }
    else {
      uVar2 = pmVar4[uVar2].mask;
    }
    puVar3[address & uVar2] = value;
  }
  else if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x08013090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pmVar4[uVar2].store_handler.get_pointer)
              (memory_interface->memory,pmVar4[uVar2].mask & address);
    return;
  }
  return;
}


