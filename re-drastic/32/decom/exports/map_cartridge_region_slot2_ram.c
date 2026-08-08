/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_slot2_ram
 * Address  : 08014380
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_cartridge_region_slot2_ram(memory_struct *memory,memory_region_struct *memory_regions)

{
  u8 *puVar1;
  u32 *puVar2;
  u32 *puVar3;
  
  memory_regions[0x10].load_access = '\0';
  memory_regions[0x10].load_handler.direct_memory = memory->slot2_ram;
  memory_regions[0x10].store_access = '\0';
  puVar1 = memory->slot2_ram;
  memory_regions[0x10].mask = 0x7fffff;
  memory_regions[0x10].store_handler.direct_memory = puVar1;
  puVar3 = memory->slot2_ram_code_bitmap_coarse;
  puVar2 = memory->slot2_ram_code_bitmap_fine;
  memory_regions[0x11].load_access = '\0';
  puVar1 = memory->slot2_ram;
  memory_regions[0x11].store_access = '\0';
  memory_regions[0x10].code_bitmap_coarse = puVar3;
  memory_regions[0x10].code_bitmap_fine = puVar2;
  memory_regions[0x10].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory_regions[0x10].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory_regions[0x11].mask = 0x7fffff;
  memory_regions[0x11].load_handler.direct_memory = puVar1 + 0x800000;
  memory_regions[0x11].store_handler.direct_memory = memory->slot2_ram + 0x800000;
  puVar3 = memory->slot2_ram_code_bitmap_coarse;
  puVar2 = memory->slot2_ram_code_bitmap_fine;
  memory_regions[0x12].load_access = '\0';
  puVar1 = memory->slot2_ram;
  memory_regions[0x11].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory_regions[0x11].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory_regions[0x12].mask = 0x7fffff;
  memory_regions[0x12].store_access = '\0';
  memory_regions[0x11].code_bitmap_coarse = puVar3 + 0x80;
  memory_regions[0x11].code_bitmap_fine = puVar2 + 0x20000;
  memory_regions[0x12].load_handler.direct_memory = puVar1 + 0x1000000;
  memory_regions[0x12].store_handler.direct_memory = memory->slot2_ram + 0x1000000;
  puVar3 = memory->slot2_ram_code_bitmap_coarse;
  puVar2 = memory->slot2_ram_code_bitmap_fine;
  memory_regions[0x13].load_access = '\0';
  puVar1 = memory->slot2_ram;
  memory_regions[0x12].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory_regions[0x13].store_access = '\0';
  memory_regions[0x13].mask = 0x7fffff;
  memory_regions[0x12].code_bitmap_coarse = puVar3 + 0x100;
  memory_regions[0x12].code_bitmap_fine = puVar2 + 0x40000;
  memory_regions[0x12].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory_regions[0x13].load_handler.direct_memory = puVar1 + 0x1800000;
  memory_regions[0x13].store_handler.direct_memory = memory->slot2_ram + 0x1800000;
  puVar2 = memory->slot2_ram_code_bitmap_coarse;
  puVar3 = memory->slot2_ram_code_bitmap_fine;
  memory_regions[0x13].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory_regions[0x13].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory_regions[0x13].code_bitmap_coarse = puVar2 + 0x180;
  memory_regions[0x13].code_bitmap_fine = puVar3 + 0x60000;
  return;
}


