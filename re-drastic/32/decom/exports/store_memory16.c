/*
 * Ghidra decompilation
 *
 * Function : store_memory16
 * Address  : 08013f70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void store_memory16(memory_interface_struct *memory_interface,u32 address,u16 value)

{
  u8 uVar1;
  u16 *puVar2;
  u8 *region_pointer_1;
  uint uVar3;
  u32 page_table_entry;
  memory_region_struct *memory_region;
  u8 *puVar4;
  u8 *region_pointer;
  memory_region_struct *pmVar5;
  
  if ((memory_interface->page_table[address >> 0xb] & 0x40000000) == 0) {
    *(u16 *)(memory_interface->page_table[address >> 0xb] * 4 + address) = value;
  }
  else if (address < 0x10000000) {
    uVar3 = address >> 0x17;
    pmVar5 = memory_interface->memory_regions;
    uVar1 = pmVar5[uVar3].store_access;
    if (uVar1 == '\x01') {
      puVar2 = (u16 *)(*pmVar5[uVar3].store_handler.get_pointer)(memory_interface->memory,address);
      if (pmVar5[uVar3].load_access == pmVar5[uVar3].store_access) {
        uVar3 = address - (address & 0x7ff);
        memory_interface->page_allocation_bitmap_coarse[uVar3 >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[uVar3 >> 0x15] |
             1 << (uVar3 * 0x800 >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[uVar3 >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[uVar3 >> 0x10] |
             1 << (uVar3 * 0x10000 >> 0x1b);
        memory_interface->page_table[uVar3 >> 0xb] =
             (uint)((int)puVar2 + (-uVar3 - (address & 0x7ff))) >> 2;
      }
      *puVar2 = value;
    }
    else if (uVar1 == '\0') {
      puVar4 = pmVar5[uVar3].store_handler.direct_memory;
      if (pmVar5[uVar3].load_access == '\0') {
        uVar3 = pmVar5[uVar3].mask;
        memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
             memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
             1 << ((address << 0xb) >> 0x1b);
        memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
             memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
             1 << ((address << 0x10) >> 0x1b);
        *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) =
             (uint)(puVar4 + ((uVar3 & 0xfffff800 & address) - (address & 0xfffff800))) >> 2;
      }
      else {
        uVar3 = pmVar5[uVar3].mask;
      }
      *(u16 *)(puVar4 + (address & uVar3)) = value;
    }
    else if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x08014020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pmVar5[uVar3].store_handler.extended_function.store16)
                (memory_interface->memory,pmVar5[uVar3].mask & address,value);
      return;
    }
  }
  return;
}


