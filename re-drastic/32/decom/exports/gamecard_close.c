/*
 * Ghidra decompilation
 *
 * Function : gamecard_close
 * Address  : 0809127c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gamecard_close(gamecard_struct *gamecard)

{
  FILE *__s;
  FILE *backup_file;
  size_t sVar1;
  
  if ((gamecard->backup).write_frame_counter != 0) {
    backup_save(&gamecard->backup);
  }
  if ((((gamecard->gba_gamepak).write_frame_counter != 0) &&
      ((gamecard->gba_gamepak).loaded != '\0')) && ((gamecard->gba_gamepak).backup != (u8 *)0x0)) {
    __s = fopen((gamecard->gba_gamepak).backup_path,"wb");
    if (__s == (FILE *)0x0) {
      __printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",&gamecard->gba_gamepak);
    }
    else {
      puts("Saving GBA backup file.");
      sVar1 = fwrite((gamecard->gba_gamepak).backup,(gamecard->gba_gamepak).backup_size,1,__s);
      if (sVar1 != 1) {
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
    return;
  }
  return;
}


