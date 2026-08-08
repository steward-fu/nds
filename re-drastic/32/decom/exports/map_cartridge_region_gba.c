/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_gba
 * Address  : 0801479c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void map_cartridge_region_gba
               (memory_struct *memory,memory_region_struct *memory_regions,u8 *rom_data,u32 rom_size
               )

{
  uint uVar1;
  memory_region_struct *memory_region;
  uint uVar2;
  int iVar3;
  
  if (rom_size >> 0x17 != 0) {
    uVar2 = 0x8000000;
    do {
      uVar1 = uVar2 >> 0x17;
      iVar3 = uVar2 + 0xf8000000;
      uVar2 = uVar2 + 0x800000;
      memory_regions[uVar1].mask = 0x7fffff;
      memory_regions[uVar1].load_handler.direct_memory = rom_data + iVar3;
      memory_regions[uVar1].code_bitmap_coarse = (u32 *)0x0;
      memory_regions[uVar1].code_bitmap_fine = (u32 *)0x0;
      memory_regions[uVar1].get_code_bitmap_coarse = memory_get_code_bitmap_null;
      memory_regions[uVar1].get_code_bitmap_fine = memory_get_code_bitmap_null;
      memory_regions[uVar1].load_access = '\0';
      memory_regions[uVar1].store_access = '\x03';
    } while (((rom_size >> 0x17) + 0x10) * 0x800000 - uVar2 != 0);
  }
  memory_regions[0x14].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory_regions[0x14].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory_regions[0x14].mask = 0x7fffff;
  memory_regions[0x14].load_handler.extended_function.load8 = load_gba_backup_8;
  memory_regions[0x14].load_handler.extended_function.load16 = load_gba_backup_16;
  memory_regions[0x14].load_handler.extended_function.load32 = load_gba_backup_32;
  memory_regions[0x14].store_handler.extended_function.store8 = store_gba_backup_8;
  memory_regions[0x14].store_handler.extended_function.store16 = store_gba_backup_16;
  memory_regions[0x14].store_handler.extended_function.store32 = store_gba_backup_32;
  memory_regions[0x14].code_bitmap_coarse = (u32 *)0x0;
  memory_regions[0x14].code_bitmap_fine = (u32 *)0x0;
  memory_regions[0x14].load_access = '\x02';
  memory_regions[0x14].store_access = '\x02';
  memory_regions[0x15].mask = 0x7fffff;
  memory_regions[0x15].load_handler.extended_function.load8 = load_gba_backup_8;
  memory_regions[0x15].load_handler.extended_function.load16 = load_gba_backup_16;
  memory_regions[0x15].load_handler.extended_function.load32 = load_gba_backup_32;
  memory_regions[0x15].load_access = '\x02';
  memory_regions[0x15].store_access = '\x02';
  memory_regions[0x15].store_handler.extended_function.store8 = store_gba_backup_8;
  memory_regions[0x15].store_handler.extended_function.store16 = store_gba_backup_16;
  memory_regions[0x15].store_handler.extended_function.store32 = store_gba_backup_32;
  memory_regions[0x15].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory_regions[0x15].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory_regions[0x15].code_bitmap_coarse = (u32 *)0x0;
  memory_regions[0x15].code_bitmap_fine = (u32 *)0x0;
  return;
}


