/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_gba
 * Address  : 080148cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 memory_setup_slot2_gba(memory_struct *memory,u8 *rom_data,u32 rom_size)

{
  map_cartridge_region_gba(memory,memory->memory_regions_arm9,rom_data,rom_size);
  map_cartridge_region_gba(memory,memory->memory_regions_arm7,rom_data,rom_size);
  return 0;
}


