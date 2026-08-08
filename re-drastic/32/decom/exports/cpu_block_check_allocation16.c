/*
 * Ghidra decompilation
 *
 * Function : cpu_block_check_allocation16
 * Address  : 08027140
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_block_check_allocation16(cpu_struct *cpu,u32 address)

{
  uint uVar1;
  u32 uVar2;
  u32 *puVar3;
  u32 *code_bitmap_value;
  memory_region_struct *pmVar4;
  memory_region_struct *memory_region;
  
  if (0x1ffffff < address) {
    pmVar4 = (cpu->memory_interface).memory_regions + (address >> 0x17);
    puVar3 = (*pmVar4->get_code_bitmap_fine)((cpu->memory_interface).memory,pmVar4,address);
    if ((puVar3 == (u32 *)0x0) || ((*puVar3 >> ((address << 0x1a) >> 0x1b) & 1) == 0)) {
      uVar2 = 0;
    }
    else if (address < 0x3000000) {
      uVar1 = (address << 10) >> 0x11;
      uVar2 = 1;
      cpu->translation_cache->main_ram_modified_regions[uVar1] =
           cpu->translation_cache->main_ram_modified_regions[uVar1] |
           1 << ((address << 0x19) >> 0x1b);
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((((cpu->memory_interface).memory)->itcm_code_bitmap_fine[(address << 0x11) >> 0x17] >>
       ((address << 0x1a) >> 0x1b) & 1) == 0) {
    return 0;
  }
  uVar2 = cpu_block_modify_itcm(cpu,address & 0xfffffffc);
  return uVar2;
}


