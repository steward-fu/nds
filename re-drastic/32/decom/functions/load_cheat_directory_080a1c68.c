/*
 * Ghidra decompilation
 *
 * Function : load_cheat_directory
 * Address  : 080a1c68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_cheat_directory(cheat_directory_struct *cheat_directory,char *cheat_database_path)

{
  int iVar1;
  FILE *__stream;
  FILE *cheat_database_file;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  cheat_directory_entry_struct *pcVar5;
  size_t sVar6;
  long lVar7;
  u32 database_size;
  s32 sVar8;
  u32 cheat_database_index [4];
  u32 next_cheat_database_index [4];
  char cheat_database_header [12];
  
  iVar1 = __stack_chk_guard;
  __stream = fopen(cheat_database_path,"rb");
  __strcpy_chk(cheat_directory,cheat_database_path,0x400);
  cheat_directory->active_cheats = (cheat_struct **)0x0;
  cheat_directory->num_active_cheats = 0;
  cheat_directory->directory_loaded = 0;
  cheat_directory->listing_loaded = 0;
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Couldn\'t load cheat database file at %s.\n",cheat_database_path);
    sVar8 = -1;
  }
  else {
    sVar2 = fread(cheat_database_header,0xc,1,__stream);
    if (sVar2 == 1) {
      iVar3 = memcmp("R4 CheatCode",cheat_database_header,0xc);
      if (iVar3 == 0) {
        fseek(__stream,0x100,0);
        sVar2 = 0;
        while (sVar4 = fread(cheat_database_index,4,4,__stream), sVar4 == 4) {
          if (cheat_database_index[2] == 0) {
            cheat_directory->num_games = sVar2;
            pcVar5 = (cheat_directory_entry_struct *)malloc(sVar2 * 0x10);
            cheat_directory->games = pcVar5;
            fseek(__stream,0,0);
            sVar4 = fread(cheat_database_index,4,4,__stream);
            if (sVar4 != 4) {
              puts("ERROR: Couldn\'t read complete cheat database index.");
            }
            if (sVar2 != 0) {
              sVar4 = 0;
              do {
                sVar6 = fread(next_cheat_database_index,4,4,__stream);
                if (sVar6 != 4) {
                  puts("ERROR: Couldn\'t read complete cheat database index.");
                }
                pcVar5 = cheat_directory->games;
                pcVar5[sVar4].game_code = cheat_database_index[0];
                sVar6 = sVar4 + 1;
                pcVar5[sVar4].header_crc = cheat_database_index[1];
                pcVar5[sVar4].database_offset = cheat_database_index[2];
                pcVar5[sVar4].database_size = next_cheat_database_index[2] - cheat_database_index[2]
                ;
                cheat_database_index[0] = next_cheat_database_index[0];
                cheat_database_index[1] = next_cheat_database_index[1];
                cheat_database_index[2] = next_cheat_database_index[2];
                cheat_database_index[3] = next_cheat_database_index[3];
                sVar4 = sVar6;
              } while (sVar2 != sVar6);
              fseek(__stream,0,2);
              lVar7 = ftell(__stream);
              pcVar5 = cheat_directory->games;
              pcVar5[sVar2 - 1].database_size = lVar7 - pcVar5[sVar2 - 1].database_offset;
              qsort(pcVar5,sVar2,0x10,compare_cheat_entry_game_code);
            }
            __printf_chk(1,"Loaded cheat directory from database file %s. Loaded %d games.\n",
                         cheat_database_path,sVar2);
            cheat_directory->directory_loaded = 1;
            fclose(__stream);
            sVar8 = 0;
            goto LAB_080a1d6c;
          }
          sVar2 = sVar2 + 1;
        }
        sVar8 = -1;
        puts("ERROR: Couldn\'t read complete cheat database index.");
        fclose(__stream);
      }
      else {
        sVar8 = -1;
        puts("ERROR: Invalid cheat database header.");
        fclose(__stream);
      }
    }
    else {
      sVar8 = -1;
      puts("ERROR: Couldn\'t read cheat database header.");
      fclose(__stream);
    }
  }
LAB_080a1d6c:
  if (iVar1 == __stack_chk_guard) {
    return sVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


