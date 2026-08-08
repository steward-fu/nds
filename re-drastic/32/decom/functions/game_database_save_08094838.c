/*
 * Ghidra decompilation
 *
 * Function : game_database_save
 * Address  : 08094838
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 game_database_save(game_database_struct *game_database,char *game_database_file_name)

{
  int iVar1;
  FILE *__s;
  FILE *game_database_file;
  game_database_entry_struct *pgVar2;
  uint uVar3;
  game_database_entry_struct *game;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char escaped_title [1024];
  char escaped_title_header [1024];
  
  iVar1 = __stack_chk_guard;
  __s = fopen(game_database_file_name,"wb");
  fwrite("<?xml version=\'1.0\' encoding=\'UTF-8\'?>\n",1,0x27,__s);
  fwrite("<database>\n",1,0xb,__s);
  if (game_database->num_games != 0) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      pgVar2 = game_database->games;
      escape_str(escaped_title,*(char **)(pgVar2->header_title + iVar4 + -4));
      escape_str(escaped_title_header,pgVar2->header_title + iVar4);
      __fprintf_chk(__s,1,"  <cartridge title=\'%s\'>\n",escaped_title);
      fwrite("    <slot1>\n",1,0xc,__s);
      pcVar6 = *(char **)(pgVar2->header_title + iVar4 + 0x14);
      __fprintf_chk(__s,1,"      <rom name=\'rom\' size=\'0x%08x\' crc32=\'%08x\' ",
                    *(undefined4 *)(pgVar2->header_title + iVar4 + 0x10),pcVar6);
      if (*(int *)(pgVar2->header_title + iVar4 + 0x1c) == -1) {
        fwrite("/>\n",1,3,__s);
      }
      else {
        pcVar6 = escaped_title_header;
        __fprintf_chk(__s,1,"id=\'%08x\' title=\'%s\' />\n",
                      *(int *)(pgVar2->header_title + iVar4 + 0x1c),escaped_title_header);
      }
      if (pgVar2->header_title[iVar4 + 0x28] == '\0') {
LAB_080948e4:
        uVar3 = *(uint *)(pgVar2->header_title + iVar4 + 0x24);
      }
      else {
        __fprintf_chk(__s,1,"      <save name=\'save\' size=\'0x%x\'",
                      *(undefined4 *)(pgVar2->header_title + iVar4 + 0x18),pcVar6);
        if (pgVar2->header_title[iVar4 + 0x28] == '\x01') {
          __fprintf_chk(__s,1," type=\'Flash\' id=\'0x%x\' />\n",
                        *(undefined4 *)(pgVar2->header_title + iVar4 + 0x20),pcVar6);
          goto LAB_080948e4;
        }
        if (pgVar2->header_title[iVar4 + 0x28] == '\x03') {
          fwrite(" type=\'NAND\' />\n",1,0x10,__s);
          goto LAB_080948e4;
        }
        fwrite(" type=\'EEPROM\' />\n",1,0x12,__s);
        uVar3 = *(uint *)(pgVar2->header_title + iVar4 + 0x24);
      }
      if ((uVar3 & 1) != 0) {
        fwrite("      <irport/>\n",1,0x10,__s);
        uVar3 = *(uint *)(pgVar2->header_title + iVar4 + 0x24);
      }
      if ((uVar3 & 2) != 0) {
        fwrite("      <bluetooth/>\n",1,0x13,__s);
      }
      uVar5 = uVar5 + 1;
      fwrite("    </slot1>\n",1,0xd,__s);
      iVar4 = iVar4 + 0x30;
      fwrite("  </cartridge>\n",1,0xf,__s);
    } while (uVar5 < game_database->num_games);
  }
  fwrite("</database>\n",1,0xc,__s);
  fclose(__s);
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


