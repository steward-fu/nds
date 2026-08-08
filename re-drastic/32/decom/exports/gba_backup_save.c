/*
 * Ghidra decompilation
 *
 * Function : gba_backup_save
 * Address  : 0808f82c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gba_backup_save(gba_gamepak_struct *gba)

{
  FILE *__s;
  FILE *backup_file;
  size_t sVar1;
  
  if (gba->loaded == '\0') {
    return;
  }
  if (gba->backup == (u8 *)0x0) {
    return;
  }
  __s = fopen(gba->backup_path,"wb");
  if (__s != (FILE *)0x0) {
    puts("Saving GBA backup file.");
    sVar1 = fwrite(gba->backup,gba->backup_size,1,__s);
    if (sVar1 != 1) {
      puts("ERROR: Couldn\'t write all of GBA backup.");
    }
    fclose(__s);
    return;
  }
  __printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",gba);
  return;
}


