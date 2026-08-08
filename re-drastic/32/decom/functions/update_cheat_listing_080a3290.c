/*
 * Ghidra decompilation
 *
 * Function : update_cheat_listing
 * Address  : 080a3290
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 update_cheat_listing(cheat_directory_struct *cheat_directory)

{
  FILE *__stream;
  FILE *cheat_database_file;
  int iVar1;
  u32 uVar2;
  size_t sVar3;
  char *pcVar4;
  cheat_directory_entry_struct *pcVar5;
  cheat_directory_entry_struct *cheat_directory_entry;
  
  pcVar5 = (cheat_directory->current_listing).cheat_directory_entry;
  __stream = fopen(cheat_directory->cheat_database_path,"rb+");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"ERROR: Couldn\'t open cheat database file (%s) for update.\n",cheat_directory);
  }
  else {
    iVar1 = fseek(__stream,pcVar5->database_offset,0);
    if (iVar1 == 0) {
      uVar2 = ftell(__stream);
      if (uVar2 == pcVar5->database_offset) {
        sVar3 = fwrite((cheat_directory->current_listing).cheat_database_data,pcVar5->database_size,
                       1,__stream);
        if (sVar3 == 1) {
          fclose(__stream);
          set_active_cheats(cheat_directory);
          return 0;
        }
        puts("ERROR: Couldn\'t update cheat database file.");
        fclose(__stream);
        return -1;
      }
      pcVar4 = "ERROR: Sek cheat database file (%s) went to wrong location.\n";
    }
    else {
      pcVar4 = "ERROR: Couldn\'t seek cheat database file (%s) for update.\n";
    }
    __printf_chk(1,pcVar4);
    fclose(__stream);
  }
  return -1;
}


