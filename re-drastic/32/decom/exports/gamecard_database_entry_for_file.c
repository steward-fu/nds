/*
 * Ghidra decompilation
 *
 * Function : gamecard_database_entry_for_file
 * Address  : 0809057c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

game_database_entry_struct *
gamecard_database_entry_for_file(gamecard_struct *gamecard,char *file_name)

{
  int iVar1;
  s32 sVar2;
  s32 header_loaded;
  game_database_entry_struct *pgVar3;
  u32 gamecard_size;
  char gamecard_title [13];
  u8 gamecard_header [512];
  
  iVar1 = __stack_chk_guard;
  pgVar3 = (game_database_entry_struct *)0x0;
  sVar2 = nds_file_read_to_memory_partial(file_name,&gamecard_size,gamecard_header,0x20,0);
  if (-1 < sVar2) {
    strncpy(gamecard_title,(char *)gamecard_header,0xc);
    gamecard_title[12] = '\0';
    pgVar3 = game_database_lookup_by_game_code
                       (&gamecard->game_database,gamecard_header._12_4_,gamecard_title);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pgVar3;
}


