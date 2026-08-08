/*
 * Ghidra decompilation
 *
 * Function : cpu_block_check_allocation_block8
 * Address  : 08023c24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_block_check_allocation_block8(cpu_struct *cpu,u32 address)

{
  memory_struct *pmVar1;
  memory_struct *memory;
  u32 *code_bitmap_value;
  u32 *code_bitmap_value_1;
  memory_struct *memory_1;
  u32 *code_bitmap_value_2;
  u32 *puVar2;
  memory_region_struct *memory_region;
  memory_region_struct *memory_region_1;
  memory_region_struct *memory_region_2;
  u32 mask_left;
  u32 *puVar3;
  u32 end_address;
  uint uVar4;
  u32 mask_right;
  memory_region_struct *pmVar5;
  
  uVar4 = address + 0x1f;
  if (uVar4 >> 6 == address >> 6) {
    pmVar1 = (cpu->memory_interface).memory;
    if (address < 0x2000000) {
      puVar3 = pmVar1->itcm_code_bitmap_fine + ((address << 0x11) >> 0x17);
    }
    else {
      pmVar5 = (cpu->memory_interface).memory_regions + (address >> 0x17);
      puVar3 = (*pmVar5->get_code_bitmap_fine)(pmVar1,pmVar5,address);
    }
    if (puVar3 != (u32 *)0x0) {
      puVar3 = (u32 *)(uint)((-1 << ((address << 0x1a) >> 0x1b) &
                              ~(-2 << (uVar4 * 0x4000000 >> 0x1b)) & *puVar3) != 0);
    }
  }
  else {
    pmVar5 = (cpu->memory_interface).memory_regions;
    pmVar1 = (cpu->memory_interface).memory;
    if (address < 0x2000000) {
      puVar3 = pmVar1->itcm_code_bitmap_fine + ((address << 0x11) >> 0x17);
    }
    else {
      puVar3 = (*pmVar5[address >> 0x17].get_code_bitmap_fine)
                         (pmVar1,pmVar5 + (address >> 0x17),address);
      pmVar5 = (cpu->memory_interface).memory_regions;
      pmVar1 = (cpu->memory_interface).memory;
    }
    if (puVar3 == (u32 *)0x0) {
      puVar3 = (u32 *)0x0;
    }
    else if ((-1 << ((address << 0x1a) >> 0x1b) & *puVar3) == 0) {
      puVar3 = (u32 *)0x0;
    }
    else {
      puVar3 = (u32 *)0x1;
    }
    if (uVar4 < 0x2000000) {
      puVar2 = pmVar1->itcm_code_bitmap_fine + (uVar4 * 0x20000 >> 0x17);
    }
    else {
      puVar2 = (*pmVar5[uVar4 >> 0x17].get_code_bitmap_fine)(pmVar1,pmVar5 + (uVar4 >> 0x17),uVar4);
    }
    if ((puVar2 != (u32 *)0x0) && ((~(-2 << (uVar4 * 0x4000000 >> 0x1b)) & *puVar2) != 0)) {
      puVar3 = (u32 *)0x1;
    }
  }
  return (u32)puVar3;
}


