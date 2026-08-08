/*
 * Ghidra decompilation
 *
 * Function : initialize_memory_map_arm9
 * Address  : 08014bb0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_memory_map_arm9(memory_struct *memory)

{
  u8 *puVar1;
  u32 *puVar2;
  
  puts("  Initializing ARM9 bus-level memory map.");
  memory->memory_regions_arm9[5].code_bitmap_coarse = memory->main_ram_code_bitmap_coarse;
  memory->memory_regions_arm9[0].load_access = '\x03';
  memory->memory_regions_arm9[0].store_access = '\x03';
  memory->memory_regions_arm9[1].load_access = '\x03';
  memory->memory_regions_arm9[1].store_access = '\x03';
  memory->memory_regions_arm9[2].load_access = '\x03';
  memory->memory_regions_arm9[2].store_access = '\x03';
  memory->memory_regions_arm9[3].load_access = '\x03';
  memory->memory_regions_arm9[3].store_access = '\x03';
  memory->memory_regions_arm9[4].load_access = '\0';
  memory->memory_regions_arm9[5].code_bitmap_fine = memory->main_ram_code_bitmap_fine;
  puVar1 = memory->main_ram;
  memory->memory_regions_arm9[0].mask = 0x1ffff;
  memory->memory_regions_arm9[0].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[1].mask = 0x1ffff;
  memory->memory_regions_arm9[1].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[1].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[1].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[1].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[2].mask = 0x1ffff;
  memory->memory_regions_arm9[2].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[2].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[2].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[7].code_bitmap_coarse = memory->wram_code_bitmap_coarse;
  memory->memory_regions_arm9[2].get_code_bitmap_fine = memory_get_code_bitmap_null;
  puVar2 = memory->memory_regions_arm9[5].code_bitmap_coarse;
  memory->memory_regions_arm9[3].mask = 0x1ffff;
  memory->memory_regions_arm9[4].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[5].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[3].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[4].code_bitmap_coarse = puVar2;
  puVar2 = memory->memory_regions_arm9[5].code_bitmap_fine;
  memory->memory_regions_arm9[3].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[3].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[3].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[4].mask = 0x3fffff;
  memory->memory_regions_arm9[4].code_bitmap_fine = puVar2;
  memory->memory_regions_arm9[4].load_handler.direct_memory = puVar1;
  memory->memory_regions_arm9[4].store_handler.direct_memory = puVar1;
  memory->memory_regions_arm9[6].mask = 0x3fff;
  puVar2 = memory->memory_regions_arm9[7].code_bitmap_coarse;
  memory->memory_regions_arm9[4].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory->memory_regions_arm9[4].store_access = '\0';
  memory->memory_regions_arm9[5].mask = 0x3fffff;
  memory->memory_regions_arm9[5].load_handler.direct_memory = puVar1;
  memory->memory_regions_arm9[6].code_bitmap_coarse = puVar2;
  memory->memory_regions_arm9[5].store_handler.direct_memory = puVar1;
  memory->memory_regions_arm9[5].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory->memory_regions_arm9[5].load_access = '\0';
  memory->memory_regions_arm9[5].store_access = '\0';
  memory->memory_regions_arm9[6].load_handler.direct_memory =
       (u8 *)memory_wram_arm9_get_page_pointer;
  memory->memory_regions_arm9[6].store_handler.direct_memory =
       (u8 *)memory_wram_arm9_get_page_pointer;
  memory->memory_regions_arm9[6].code_bitmap_fine = memory->wram_code_bitmap_fine;
  memory->memory_regions_arm9[6].get_code_bitmap_coarse = memory_wram_get_code_bitmap_coarse;
  memory->memory_regions_arm9[7].code_bitmap_fine = memory->wram_code_bitmap_fine;
  memory->memory_regions_arm9[7].mask = 0x3fff;
  memory->memory_regions_arm9[6].get_code_bitmap_fine = memory_wram_get_code_bitmap_fine;
  memory->memory_regions_arm9[7].get_code_bitmap_coarse = memory_wram_get_code_bitmap_coarse;
  memory->memory_regions_arm9[6].load_access = '\x01';
  memory->memory_regions_arm9[6].store_access = '\x01';
  memory->memory_regions_arm9[7].get_code_bitmap_fine = memory_wram_get_code_bitmap_fine;
  memory->memory_regions_arm9[7].load_handler.direct_memory =
       (u8 *)memory_wram_arm9_get_page_pointer;
  memory->memory_regions_arm9[7].store_handler.direct_memory =
       (u8 *)memory_wram_arm9_get_page_pointer;
  memory->memory_regions_arm9[7].load_access = '\x01';
  memory->memory_regions_arm9[7].store_access = '\x01';
  memory->memory_regions_arm9[8].mask = 0x7fffff;
  memory->memory_regions_arm9[8].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[8].load_handler = 0x8010b8008011b7c;
  memory->memory_regions_arm9[8].load_handler.extended_function.load32 = load_io_register_arm9_32;
  memory->memory_regions_arm9[8].store_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[8].store_handler = 0x800e3c00800d6c8;
  memory->memory_regions_arm9[8].store_handler.extended_function.store32 = store_io_register_arm9_32
  ;
  memory->memory_regions_arm9[8].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[8].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[8].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[9].mask = 0x7fffff;
  memory->memory_regions_arm9[8].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[9].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[9].load_handler = 0x8010b8008011b7c;
  memory->memory_regions_arm9[9].load_handler.extended_function.load32 = load_io_register_arm9_32;
  memory->memory_regions_arm9[9].store_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[9].store_handler = 0x800e3c00800d6c8;
  memory->memory_regions_arm9[9].store_handler.extended_function.store32 = store_io_register_arm9_32
  ;
  memory->memory_regions_arm9[0xc].load_access = '\x01';
  memory->memory_regions_arm9[0xc].store_access = '\x01';
  memory->memory_regions_arm9[0xc].get_code_bitmap_fine = memory_vram_get_code_bitmap_fine;
  memory->memory_regions_arm9[0xc].mask = 0x3fff;
  memory->memory_regions_arm9[0xd].get_code_bitmap_fine = memory_vram_get_code_bitmap_fine;
  memory->memory_regions_arm9[9].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[9].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[9].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[9].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xc].load_handler.direct_memory =
       (u8 *)memory_vram_arm9_get_page_pointer;
  memory->memory_regions_arm9[0xc].store_handler.direct_memory =
       (u8 *)memory_vram_arm9_get_page_pointer_store;
  memory->memory_regions_arm9[0xc].code_bitmap_coarse = memory->vram_code_bitmap_coarse;
  memory->memory_regions_arm9[0xc].code_bitmap_fine = memory->vram_code_bitmap_fine;
  memory->memory_regions_arm9[0xc].get_code_bitmap_coarse = memory_vram_get_code_bitmap_coarse;
  memory->memory_regions_arm9[0xd].mask = 0x3fff;
  memory->memory_regions_arm9[0xd].load_handler.direct_memory =
       (u8 *)memory_vram_arm9_get_page_pointer;
  memory->memory_regions_arm9[0xd].store_handler.direct_memory =
       (u8 *)memory_vram_arm9_get_page_pointer_store;
  memory->memory_regions_arm9[0xd].code_bitmap_coarse = memory->vram_code_bitmap_coarse;
  memory->memory_regions_arm9[0xd].code_bitmap_fine = memory->vram_code_bitmap_fine;
  memory->memory_regions_arm9[0xd].get_code_bitmap_coarse = memory_vram_get_code_bitmap_coarse;
  memory->memory_regions_arm9[0xd].load_access = '\x01';
  memory->memory_regions_arm9[0xd].store_access = '\x01';
  memory->memory_regions_arm9[0x16].mask = 0x1ffff;
  memory->memory_regions_arm9[0x16].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x16].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x16].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x16].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x16].load_access = '\x03';
  memory->memory_regions_arm9[0x16].store_access = '\x03';
  memory->memory_regions_arm9[0x17].mask = 0x1ffff;
  memory->memory_regions_arm9[0x17].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x17].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x17].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x17].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x17].load_access = '\x03';
  memory->memory_regions_arm9[0x17].store_access = '\x03';
  memory->memory_regions_arm9[0x18].mask = 0x1ffff;
  memory->memory_regions_arm9[0x18].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x18].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x18].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x18].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x18].load_access = '\x03';
  memory->memory_regions_arm9[0x18].store_access = '\x03';
  memory->memory_regions_arm9[0x19].mask = 0x1ffff;
  memory->memory_regions_arm9[0x19].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x19].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x19].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x19].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x19].load_access = '\x03';
  memory->memory_regions_arm9[0x19].store_access = '\x03';
  memory->memory_regions_arm9[0x1a].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1a].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1a].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1a].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1a].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1a].load_access = '\x03';
  memory->memory_regions_arm9[0x1a].store_access = '\x03';
  memory->memory_regions_arm9[0x1b].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1b].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1b].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1b].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1b].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1b].load_access = '\x03';
  memory->memory_regions_arm9[0x1b].store_access = '\x03';
  memory->memory_regions_arm9[0x1c].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1c].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1c].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1c].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1c].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1c].load_access = '\x03';
  memory->memory_regions_arm9[0x1c].store_access = '\x03';
  memory->memory_regions_arm9[0x1d].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1d].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1d].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1d].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1d].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1d].load_access = '\x03';
  memory->memory_regions_arm9[0x1d].store_access = '\x03';
  memory->memory_regions_arm9[0x1e].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1e].load_access = '\x03';
  memory->memory_regions_arm9[0x1e].store_access = '\x03';
  memory->memory_regions_arm9[0x1e].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1e].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1e].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1e].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1f].mask = 0x1ffff;
  memory->memory_regions_arm9[0x1f].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0x1f].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0x1f].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1f].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0x1f].load_access = '\x03';
  memory->memory_regions_arm9[0x1f].store_access = '\x03';
  return;
}


