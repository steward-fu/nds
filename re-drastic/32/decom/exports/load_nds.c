/*
 * Ghidra decompilation
 *
 * Function : load_nds
 * Address  : 08090618
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_nds(gamecard_struct *gamecard,char *file_name)

{
  int iVar1;
  FILE *__s;
  FILE *backup_file;
  size_t sVar2;
  nds_file_struct *pnVar3;
  nds_file_struct *nds_file;
  char *pcVar4;
  char *last_slash_position;
  char *pcVar5;
  char *last_dot_position;
  char *gamecard_file_name;
  char *gamecard_extension;
  u32 uVar6;
  uint uVar7;
  system_struct *psVar8;
  s32 sVar9;
  char *pcVar10;
  undefined *puVar11;
  char path_buffer [1024];
  char rom_file_name [1024];
  
  iVar1 = __stack_chk_guard;
  psVar8 = gamecard->system;
  pcVar10 = psVar8->root_path;
  __sprintf_chk(path_buffer,1,0x400,"%s%cunzip_cache",pcVar10,0x2f);
  pcVar5 = path_buffer;
  if ((psVar8->config).unzip_roms == 0) {
    pcVar5 = (char *)0x0;
  }
  if (gamecard->nds_file != (nds_file_struct *)0x0) {
    if ((gamecard->backup).write_frame_counter == 0) {
      uVar6 = (gamecard->gba_gamepak).write_frame_counter;
    }
    else {
      backup_save(&gamecard->backup);
      uVar6 = (gamecard->gba_gamepak).write_frame_counter;
    }
    if (((uVar6 != 0) && ((gamecard->gba_gamepak).loaded != '\0')) &&
       ((gamecard->gba_gamepak).backup != (u8 *)0x0)) {
      __s = fopen((gamecard->gba_gamepak).backup_path,"wb");
      if (__s == (FILE *)0x0) {
        __printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",&gamecard->gba_gamepak);
      }
      else {
        puts("Saving GBA backup file.");
        sVar2 = fwrite((gamecard->gba_gamepak).backup,(gamecard->gba_gamepak).backup_size,1,__s);
        if (sVar2 != 1) {
          puts("ERROR: Couldn\'t write all of GBA backup.");
        }
        fclose(__s);
      }
    }
    free(gamecard->backup_data);
    gamecard->backup_data = (u8 *)0x0;
    nds_file_close(gamecard->nds_file);
    gamecard->nds_file = (nds_file_struct *)0x0;
    if (-1 < gamecard->dldi_file_fd) {
      close(gamecard->dldi_file_fd);
    }
  }
  pnVar3 = nds_file_open(file_name,pcVar5,(psVar8->config).trim_roms);
  if ((pnVar3 == (nds_file_struct *)0x0) &&
     (((psVar8->config).unzip_roms != 0 ||
      (pnVar3 = nds_file_open(file_name,path_buffer,(psVar8->config).trim_roms),
      pnVar3 == (nds_file_struct *)0x0)))) {
    __printf_chk(1,"ERROR: Could not open %s\n",file_name);
    sVar9 = -1;
    goto LAB_0809089c;
  }
  uVar7 = pnVar3->size;
  gamecard->nds_file = pnVar3;
  if (uVar7 < 0x200) {
    __printf_chk(1,"%s does not have a valid gamecard_header.\n",file_name);
    sVar9 = -1;
    goto LAB_0809089c;
  }
  pcVar4 = strrchr(file_name,0x2f);
  pcVar5 = file_name;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4 + 1;
  }
  strncpy(rom_file_name,pcVar5,0x400);
  pcVar5 = strrchr(rom_file_name,0x2e);
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  pcVar4 = psVar8->gamecard_name;
  strncpy(psVar8->gamecard_path,file_name,0x400);
  psVar8->gamecard_path[0x3ff] = '\0';
  pcVar5 = strrchr(file_name,0x2f);
  if (pcVar5 != (char *)0x0) {
    file_name = pcVar5 + 1;
  }
  strncpy(pcVar4,file_name,0x3ff);
  psVar8->gamecard_name[0x3ff] = '\0';
  memcpy(psVar8->gamecard_filename,pcVar4,0x400);
  pcVar5 = strrchr(pcVar4,0x2e);
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  audio_unstall_callback(&(psVar8->spu).audio);
  pcVar5 = getcwd((psVar8->config).rom_directory,0x400);
  if (pcVar5 == (char *)0x0) {
    sVar9 = -1;
    goto LAB_0809089c;
  }
  if ((psVar8->config).enable_lua == 0) {
LAB_08090898:
    sVar9 = 0;
  }
  else {
    puVar11 = &DAT_0813d130;
    __sprintf_chk(path_buffer,1,0x400,"%s%c%s%c%s.%s",pcVar10,0x2f,"scripts",0x2f,pcVar4,
                  &DAT_0813d130);
    __printf_chk(1,"Attempting to load lua script %s\n",path_buffer);
    sVar9 = lua_load_script(path_buffer);
    if (sVar9 != 0) {
      __sprintf_chk(path_buffer,1,0x400,"%s%c%s%cdefault.%s",pcVar10,0x2f,"scripts",0x2f,
                    &DAT_0813d130,puVar11);
      __printf_chk(1,"Attempting to load lua script %s\n",path_buffer);
      sVar9 = lua_load_script(path_buffer);
      if (sVar9 != 0) goto LAB_08090898;
    }
    __printf_chk(1,"Using lua script %s\n",path_buffer);
    lua_on_load_game(pcVar4);
  }
LAB_0809089c:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar9;
}


