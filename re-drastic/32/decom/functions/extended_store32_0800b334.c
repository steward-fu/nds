/*
 * Ghidra decompilation
 *
 * Function : extended_store32
 * Address  : 0800b334
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void extended_store32(memory_interface_struct *memory_interface,u32 address,u32 value)

{
  u8 uVar1;
  u32 *puVar2;
  u8 *region_pointer_1;
  uint uVar3;
  memory_region_struct *memory_region;
  memory_region_struct *pmVar4;
  u8 *puVar5;
  u8 *region_pointer;
  
  uVar3 = address >> 0x17;
  pmVar4 = memory_interface->memory_regions;
  uVar1 = pmVar4[uVar3].store_access;
  if (uVar1 == '\x01') {
    puVar2 = (u32 *)(*pmVar4[uVar3].store_handler.get_pointer)(memory_interface->memory,address);
    if (pmVar4[uVar3].load_access == pmVar4[uVar3].store_access) {
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
    puVar5 = pmVar4[uVar3].store_handler.direct_memory;
    if (pmVar4[uVar3].load_access == '\0') {
      uVar3 = pmVar4[uVar3].mask;
      memory_interface->page_allocation_bitmap_coarse[address >> 0x15] =
           memory_interface->page_allocation_bitmap_coarse[address >> 0x15] |
           1 << ((address << 0xb) >> 0x1b);
      memory_interface->page_allocation_bitmap_fine[address >> 0x10] =
           memory_interface->page_allocation_bitmap_fine[address >> 0x10] |
           1 << ((address << 0x10) >> 0x1b);
      *(uint *)((int)memory_interface->page_table + ((address & 0xfffff800) >> 9)) =
           (uint)(puVar5 + ((uVar3 & 0xfffff800 & address) - (address & 0xfffff800))) >> 2;
    }
    else {
      uVar3 = pmVar4[uVar3].mask;
    }
    *(u32 *)(puVar5 + (address & uVar3)) = value;
  }
  else if (uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0800b3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pmVar4[uVar3].store_handler.extended_function.store32)
              (memory_interface->memory,pmVar4[uVar3].mask & address,value);
    return;
  }
  return;
}


