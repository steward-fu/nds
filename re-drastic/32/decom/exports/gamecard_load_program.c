/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_program
 * Address  : 0808fcf0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 gamecard_load_program(gamecard_struct *gamecard)

{
  int iVar1;
  undefined4 game_code_00;
  u32 game_code;
  game_database_entry_struct *pgVar2;
  game_database_entry_struct *game_database_entry;
  u32 uVar3;
  u32 game_crc32;
  s32 sVar4;
  int iVar5;
  u8 *gamecard_memory;
  u8 *puVar6;
  u32 uVar7;
  size_t __size;
  uint uVar8;
  u32 gamecard_size;
  uint __n;
  u8 *main_ram_secure_ptr;
  u32 flash_id;
  u32 arm9_rom_offset;
  backup_struct *backup_00;
  backup_struct *backup;
  system_struct *system;
  memory_struct *memory_00;
  memory_struct *memory;
  u8 *src;
  bool bVar9;
  u32 save_size;
  u32 arm9_entry_pc;
  u32 arm9_size;
  u32 arm7_rom_offset;
  u32 arm7_entry_pc;
  u32 arm7_ram_offset;
  u32 arm7_size;
  u8 *main_ram;
  char gamecard_title [13];
  u8 gamecard_header [512];
  char backup_file_name [1024];
  
  iVar1 = __stack_chk_guard;
  src = gamecard->nds_file->data;
  __n = gamecard->nds_file->size;
  system = gamecard->system;
  puVar6 = (system->memory).main_ram;
  memory_00 = &system->memory;
  memcpy(gamecard_header,src,0x200);
  strncpy(gamecard_title,(char *)gamecard_header,0xc);
  game_code_00 = gamecard_header._12_4_;
  gamecard->game_code = gamecard_header._12_4_;
  uVar7 = (0x20000 << gamecard_header[20]) - 1;
  gamecard_title[12] = '\0';
  gamecard->rom_read_mask = uVar7;
  if ((uint)(0x20000 << gamecard_header[20]) < __n) {
    do {
      iVar5 = uVar7 * 2;
      uVar7 = iVar5 + 1;
    } while (iVar5 + 2U < __n);
    gamecard->rom_read_mask = uVar7;
  }
  if ((system->config).ignore_gamecard_limit != 0) {
    uVar7 = (1 << (0x20U - LZCOUNT(__n + 1) & 0xff)) - 1;
    gamecard->rom_read_mask = uVar7;
    __printf_chk(1,"Ignoring gamecard header mask: using game card mask of %x\n",uVar7);
  }
  __printf_chk(1,"Gamecard title:  \'%s\'\n",gamecard_title);
  __printf_chk(1,"Game code:       %04x\n",game_code_00);
  __printf_chk(1,"Maker code:      %02x\n",gamecard_header._16_2_);
  __printf_chk(1,"Unit code:       %01x\n",gamecard_header[18]);
  __printf_chk(1,"Chip size:       %dKB\n",0x80 << (uint)gamecard_header[20]);
  __printf_chk(1,"ROM version:     %d\n",gamecard_header[30]);
  __printf_chk(1,"Autostart:       %d\n",gamecard_header[31]);
  __printf_chk(1,"ROMCTRL          %08x\n",gamecard_header._96_4_);
  if (game_code_00 == 0x23232323) {
    gamecard_initialize_homebrew(gamecard);
  }
  else {
    gamecard->dldi_file_fd = -1;
  }
  gamecard->dldi_write_count = 0;
  uVar7 = game_database_generate_crc32_from_memory(gamecard_header,0x200);
  __printf_chk(1,"ARM9 ROM offset: %04x\n",gamecard_header._32_4_);
  __printf_chk(1,"ARM9 entry PC:   %04x\n",gamecard_header._36_4_);
  __printf_chk(1,"ARM9 RAM offset: %04x\n",gamecard_header._40_4_);
  __printf_chk(1,"ARM9 size:       %04x\n",gamecard_header._44_4_);
  __printf_chk(1,"ARM7 ROM offset: %04x\n",gamecard_header._48_4_);
  __printf_chk(1,"ARM7 entry PC:   %04x\n",gamecard_header._52_4_);
  __printf_chk(1,"ARM7 RAM offset: %04x\n",gamecard_header._56_4_);
  __printf_chk(1,"ARM7 size:       %04x\n",gamecard_header._60_4_);
  memory_region_block_memory_load
            (((system->memory).memory_interface_arm9)->memory_regions,memory_00,
             gamecard_header._40_4_,src + gamecard_header._32_4_,gamecard_header._44_4_);
  memory_region_block_memory_load
            (((system->memory).memory_interface_arm7)->memory_regions,memory_00,
             gamecard_header._56_4_,src + gamecard_header._48_4_,gamecard_header._60_4_);
  *(undefined2 *)(puVar6 + 0x3ff808) = gamecard_header._350_2_;
  memcpy(puVar6 + 0x3ffe00,gamecard_header,0x170);
  (system->cpu_arm9).pc = gamecard_header._36_4_;
  (system->cpu_arm7).pc = gamecard_header._52_4_;
  gamecard->decryption_error = '\0';
  if (((gamecard_header._32_4_ == 0x4000) && (gamecard_header._40_4_ + 0xfe000000 < 0x1000000)) &&
     ((*(int *)(puVar6 + (gamecard_header._40_4_ & 0x3fffff)) != -0x18002101 ||
      (*(u32 *)((int)(puVar6 + (gamecard_header._40_4_ & 0x3fffff)) + 4) != 0xe7ffdeff)))) {
    puts("Decrypting secure region.");
    if (((system->memory).custom_bios_loaded & 1) == 0) {
      gamecard_decrypt_secure_region
                ((u32 *)(puVar6 + (gamecard_header._40_4_ & 0x3fffff)),gamecard_header._12_4_,
                 (u32 *)((system->memory).arm7_bios + 0x30));
    }
    else {
      puts("Can\'t decrypt game, need original BIOS for this.");
      gamecard->decryption_error = '\x01';
    }
  }
  __snprintf_chk(backup_file_name,0x400,1,0x400,"%s/backup/%s.dsv",system->user_root_path,
                 system->gamecard_name);
  pgVar2 = game_database_lookup_by_game_code(&gamecard->game_database,game_code_00,gamecard_title);
  if (pgVar2 == (game_database_entry_struct *)0x0) {
    puts("Couldn\'t find game entry by code + title, trying CRC32.");
    uVar3 = game_database_generate_crc32_from_memory(src,gamecard->nds_file->size);
    __printf_chk(1,"Got game CRC32 %x\n",uVar3);
    pgVar2 = game_database_lookup_by_crc32(&gamecard->game_database,uVar3);
    if (pgVar2 != (game_database_entry_struct *)0x0) goto LAB_08090098;
    puts("Couldn\'t find game in database. Using 512KB flash just to be safe.");
    puVar6 = (u8 *)malloc(0x80000);
    gamecard->backup_data = puVar6;
    initialize_backup(&gamecard->backup,BACKUP_TYPE_FLASH,puVar6,0x80000,backup_file_name);
    (gamecard->backup).jedec_id[0] = '\x13';
    (gamecard->backup).jedec_id[1] = '@';
    (gamecard->backup).jedec_id[2] = ' ';
    (gamecard->backup).jedec_id[3] = '\0';
  }
  else {
LAB_08090098:
    __size = pgVar2->save_size;
    backup_00 = &gamecard->backup;
    __printf_chk(1,"Found game in database: titled %s. ",pgVar2->title);
    switch(pgVar2->save_type) {
    case '\0':
      puts("No save backup. Using 512KB flash just to be safe.");
      puVar6 = (u8 *)malloc(0x80000);
      gamecard->backup_data = puVar6;
      initialize_backup(backup_00,BACKUP_TYPE_FLASH,puVar6,0x80000,backup_file_name);
      (gamecard->backup).jedec_id[0] = '\x13';
      (gamecard->backup).jedec_id[1] = '@';
      (gamecard->backup).jedec_id[2] = ' ';
      (gamecard->backup).jedec_id[3] = '\0';
      break;
    case '\x01':
      uVar3 = pgVar2->flash_id;
      __printf_chk(1,"Flash backup: %x bytes, ID %08x\n",__size,uVar3);
      puVar6 = (u8 *)malloc(__size);
      gamecard->backup_data = puVar6;
      initialize_backup(backup_00,BACKUP_TYPE_FLASH,puVar6,__size,backup_file_name);
      (gamecard->backup).jedec_id[0] = (u8)uVar3;
      (gamecard->backup).jedec_id[1] = (u8)(uVar3 >> 8);
      (gamecard->backup).jedec_id[2] = (u8)(uVar3 >> 0x10);
      (gamecard->backup).jedec_id[3] = (u8)(uVar3 >> 0x18);
      break;
    case '\x02':
      __printf_chk(1,"EEPROM backup: %x bytes\n",__size);
      puVar6 = (u8 *)malloc(__size);
      gamecard->backup_data = puVar6;
      initialize_backup(backup_00,BACKUP_TYPE_EEPROM,puVar6,__size,backup_file_name);
      break;
    case '\x03':
      __printf_chk(1,"NAND backup: %x bytes\n",__size);
      gamecard->nand_mode = '\0';
      gamecard->nand_base_address = (uint)(ushort)gamecard_header._150_2_ << 0x11;
      gamecard->nand_write_enable = '\0';
      puVar6 = (u8 *)malloc(__size);
      gamecard->backup_data = puVar6;
      initialize_backup(backup_00,BACKUP_TYPE_NAND,puVar6,__size,backup_file_name);
    }
  }
  load_custom_cheats(&gamecard->cheat_directory,system);
  if ((gamecard->cheat_directory).directory_loaded != 0) {
    load_cheat_listing(&gamecard->cheat_directory,game_code_00,~uVar7);
  }
  puVar6 = (system->memory).main_ram;
  uVar8 = ((gamecard->rom_read_mask + 1 >> 0x14) - 1) * 0x100 | 0xc2;
  gamecard->chip_id = uVar8;
  *(uint *)(puVar6 + 0x3ff800) = uVar8;
  *(u32 *)((system->memory).main_ram + 0x3ff804) = gamecard->chip_id;
  *(u32 *)((system->memory).main_ram + 0x3ffc00) = gamecard->chip_id;
  *(undefined2 *)((system->memory).main_ram + 0x3ff808) = gamecard_header._510_2_;
  sVar4 = gamecard_load_gba(gamecard,system->gamecard_name);
  if (sVar4 == -1) {
    gamecard_load_gba(gamecard,"slot2_gamepak");
  }
  if (((gamecard->gba_gamepak).loaded == '\0') &&
     (iVar5 = strncmp((char *)(gamecard_header + 0xa0),"SRAM_V110",9), iVar5 == 0)) {
    iVar5 = strncmp((char *)(gamecard_header + 0xac),"PASS",4);
    bVar9 = __n == 0x2000000;
    if (__n < 0x2000001) {
      bVar9 = iVar5 == 0;
    }
    if (bVar9) {
      sVar4 = memory_setup_slot2_ram(memory_00);
      if (sVar4 == -1) {
        puts("Couldn\'t setup slot 2 RAM.");
        sVar4 = -1;
        goto LAB_08090258;
      }
      puts("Auto-loading game to slot 2 RAM.");
      memcpy((system->memory).slot2_ram,src,__n);
    }
  }
  sVar4 = 0;
  memory_copy_nintendo_logo(memory_00,src);
LAB_08090258:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar4;
}


