/*
 * Ghidra decompilation
 *
 * Function : load_cheat_listing
 * Address  : 080a2270
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_cheat_listing(cheat_directory_struct *cheat_directory,u32 game_code,u32 header_crc)

{
  int iVar1;
  cheat_directory_entry_struct *pcVar2;
  cheat_directory_entry_struct *pcVar3;
  FILE *__stream;
  FILE *cheat_database_file;
  u8 *__s;
  u8 *cheat_database_data;
  size_t sVar4;
  u32 *cheat_database_ptr;
  cheat_struct *pcVar5;
  cheat_folder_struct *pcVar6;
  cheat_folder_struct *current_folder;
  u32 name_length;
  u8 *puVar7;
  size_t sVar8;
  uint uVar9;
  cheat_directory_entry_struct *pcVar10;
  u32 uVar11;
  size_t __idx;
  uint uVar12;
  uint uVar13;
  u32 num_cheats_folders;
  void *__p;
  cheat_directory_entry_struct *cheat_lookup_entry;
  cheat_directory_entry_struct *cheat_lookup_entry_1;
  cheat_directory_entry_struct *pcVar14;
  uint *puVar15;
  u32 cheat_tag;
  u32 *cheat_data_ptr;
  cheat_struct *current_cheat;
  uint *__s_00;
  uint uVar16;
  uint uVar17;
  size_t __u;
  u32 local_40;
  u32 local_3c;
  
  uVar17 = cheat_directory->num_games;
  pcVar3 = cheat_directory->games;
  uVar16 = 0;
  uVar13 = uVar17;
  while (uVar16 < uVar13) {
    while( true ) {
      uVar12 = uVar16 + uVar13 >> 1;
      uVar9 = pcVar3[uVar12].game_code;
      pcVar10 = pcVar3 + uVar12;
      if (game_code == uVar9) {
        iVar1 = (int)pcVar10 - (int)pcVar3 >> 4;
        if (iVar1 < 0) goto LAB_080a235c;
        if (header_crc == pcVar10->header_crc) goto LAB_080a26a0;
        goto LAB_080a23d4;
      }
      if (uVar9 <= game_code && game_code != uVar9) break;
      uVar13 = uVar12;
      if (uVar12 <= uVar16) goto LAB_080a22e4;
    }
    uVar16 = uVar12 + 1;
  }
LAB_080a22e4:
  if (cheat_directory->listing_loaded != 0) {
    free((cheat_directory->current_listing).cheat_database_data);
    free((cheat_directory->current_listing).cheats);
    free((cheat_directory->current_listing).folders);
    cheat_directory->listing_loaded = 0;
  }
LAB_080a2310:
  __printf_chk(1,"Couldn\'t find cheat listing for %08x:%08x\n",game_code,header_crc);
  set_active_cheats(cheat_directory);
  return -1;
  while (pcVar2 = pcVar10 + -1, pcVar10 = pcVar14, header_crc != pcVar2->header_crc) {
LAB_080a23d4:
    pcVar14 = pcVar10 + -1;
    if ((pcVar10 == pcVar3) || (game_code != pcVar10[-1].game_code)) goto LAB_080a235c;
  }
LAB_080a23fc:
  if (cheat_directory->listing_loaded == 0) {
LAB_080a2408:
    __stream = fopen(cheat_directory->cheat_database_path,"rb");
    if (__stream == (FILE *)0x0) {
      __printf_chk(1,"ERROR: Couldn\'t load cheat database file at %s.\n",cheat_directory);
      return -1;
    }
    __s = (u8 *)malloc(pcVar14->database_size);
    if (__s == (u8 *)0x0) {
      puts("ERROR: Couldn\'t allocate cheat data.");
      fclose(__stream);
      return -1;
    }
    fseek(__stream,pcVar14->database_offset,0);
    sVar4 = fread(__s,pcVar14->database_size,1,__stream);
    if (sVar4 != 1) {
      puts("ERROR: Couldn\'t load cheat database data.");
      free(__s);
      fclose(__stream);
      return -1;
    }
    fclose(__stream);
    (cheat_directory->current_listing).cheat_directory_entry = pcVar14;
    (cheat_directory->current_listing).game_title = (char *)__s;
    sVar4 = strlen((char *)__s);
    uVar13 = sVar4 + 4 & 0xfffffffc;
    puVar15 = (uint *)(__s + uVar13 + 0x24);
    uVar13 = *(uint *)(__s + uVar13) & 0xfffffff;
    pcVar5 = (cheat_struct *)malloc(uVar13 * 0x18);
    (cheat_directory->current_listing).cheats = pcVar5;
    pcVar6 = (cheat_folder_struct *)malloc(uVar13 * 0x14);
    (cheat_directory->current_listing).folders = pcVar6;
    if (uVar13 == 0) {
      sVar4 = 0;
      local_40 = 0;
      sVar8 = 0;
      local_3c = 0;
    }
    else {
      uVar17 = 0;
      uVar16 = 0;
      local_40 = 0;
      local_3c = 0;
      do {
        while( true ) {
          uVar9 = *puVar15;
          __s_00 = puVar15 + 1;
          if ((uVar9 & 0x10000000) != 0) break;
          pcVar5->name = (char *)__s_00;
          pcVar5->enable_ptr = (u8 *)((int)puVar15 + 3);
          sVar4 = strlen((char *)__s_00);
          puVar7 = (u8 *)((int)__s_00 + sVar4 + 1);
          uVar11 = 0xffffffff;
          pcVar5->note = (char *)puVar7;
          if (uVar16 != 0) {
            uVar16 = uVar16 - 1;
            uVar11 = local_40 - 1;
          }
          uVar17 = uVar17 + 1;
          pcVar5->folder_id = uVar11;
          puVar15 = puVar15 + (uVar9 & 0xffffff) + 1;
          local_3c = local_3c + 1;
          sVar8 = strlen((char *)puVar7);
          uVar9 = sVar4 + 5 + sVar8 & 0xfffffffc;
          uVar11 = *(u32 *)((int)__s_00 + uVar9);
          cheat_data_ptr = (u32 *)((int)__s_00 + uVar9 + 4);
          pcVar5->data = cheat_data_ptr;
          pcVar5->data_length = uVar11;
          pcVar5 = pcVar5 + 1;
          if (uVar13 == uVar17) goto LAB_080a25fc;
        }
        uVar16 = uVar9 & 0xffffff;
        pcVar6->name = (char *)__s_00;
        uVar17 = uVar17 + 1;
        pcVar6->entries = uVar16;
        pcVar6->expand_ptr = (u8 *)((int)puVar15 + 2);
        local_40 = local_40 + 1;
        pcVar6->type = (u8)(uVar9 >> 0x18);
        sVar4 = strlen((char *)__s_00);
        puVar7 = (u8 *)((int)__s_00 + sVar4 + 1);
        pcVar6->note = (char *)puVar7;
        sVar8 = strlen((char *)puVar7);
        puVar15 = (uint *)((int)__s_00 + (sVar4 + sVar8 + 5 & 0xfffffffc));
        pcVar6 = pcVar6 + 1;
      } while (uVar13 != uVar17);
LAB_080a25fc:
      pcVar5 = (cheat_directory->current_listing).cheats;
      sVar4 = local_3c * 0x18;
      sVar8 = local_40 * 0x14;
    }
    (cheat_directory->current_listing).num_folders = local_40;
    (cheat_directory->current_listing).num_cheats = local_3c;
    pcVar5 = (cheat_struct *)realloc(pcVar5,sVar4);
    (cheat_directory->current_listing).cheats = pcVar5;
    pcVar6 = (cheat_folder_struct *)realloc((cheat_directory->current_listing).folders,sVar8);
    cheat_directory->listing_loaded = 1;
    (cheat_directory->current_listing).cheat_database_data = __s;
    (cheat_directory->current_listing).folders = pcVar6;
    set_active_cheats(cheat_directory);
    return 0;
  }
  free((cheat_directory->current_listing).cheat_database_data);
  free((cheat_directory->current_listing).cheats);
  free((cheat_directory->current_listing).folders);
  cheat_directory->listing_loaded = 0;
  if (pcVar14 != (cheat_directory_entry_struct *)0x0) goto LAB_080a2408;
  goto LAB_080a2310;
LAB_080a235c:
  uVar13 = iVar1 + 1;
  if ((uVar13 < uVar17) && (pcVar10 = pcVar3 + uVar13, game_code == pcVar3[uVar13].game_code)) {
    if (header_crc == pcVar10->header_crc) {
LAB_080a26a0:
      pcVar14 = pcVar10;
      if (cheat_directory->listing_loaded != 0) {
        free((cheat_directory->current_listing).cheat_database_data);
        free((cheat_directory->current_listing).cheats);
        free((cheat_directory->current_listing).folders);
        cheat_directory->listing_loaded = 0;
      }
      goto LAB_080a2408;
    }
    pcVar10 = pcVar3 + iVar1 + 2;
    do {
      pcVar14 = pcVar10;
      uVar13 = uVar13 + 1;
      if ((uVar17 <= uVar13) || (game_code != pcVar3[uVar13].game_code)) goto LAB_080a22e4;
      pcVar10 = pcVar14 + 1;
    } while (header_crc != pcVar14->header_crc);
    goto LAB_080a23fc;
  }
  goto LAB_080a22e4;
}


