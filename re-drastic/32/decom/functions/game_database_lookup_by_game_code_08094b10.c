/*
 * Ghidra decompilation
 *
 * Function : game_database_lookup_by_game_code
 * Address  : 08094b10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

game_database_entry_struct *
game_database_lookup_by_game_code
          (game_database_struct *game_database,u32 game_code,char *header_title)

{
  game_database_entry_struct *pgVar1;
  game_database_entry_struct *b;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  size_t __idx;
  uint uVar6;
  u32 uVar7;
  uint uVar8;
  game_database_entry_struct *game_lookup_entry;
  uint uVar9;
  size_t __u;
  void *__p;
  game_database_entry_struct **ppgVar10;
  game_database_entry_struct **game_lookup_entry_1;
  game_database_entry_struct **ppgVar11;
  game_database_entry_struct **ppgVar12;
  
  uVar9 = game_database->num_games;
  ppgVar11 = game_database->games_sorted_game_code;
  uVar5 = 0;
  uVar8 = uVar9;
  while (uVar5 < uVar8) {
    while( true ) {
      uVar6 = uVar8 + uVar5 >> 1;
      pgVar1 = ppgVar11[uVar6];
      ppgVar10 = ppgVar11 + uVar6;
      uVar4 = pgVar1->game_code;
      if (game_code == uVar4) {
        iVar2 = (int)ppgVar10 - (int)ppgVar11 >> 2;
        ppgVar12 = ppgVar10;
        if (-1 < iVar2) goto LAB_08094c88;
        goto LAB_08094bf0;
      }
      if (uVar4 <= game_code && game_code != uVar4) break;
      uVar8 = uVar6;
      if (uVar6 <= uVar5) goto LAB_08094b88;
    }
    uVar5 = uVar6 + 1;
  }
  goto LAB_08094b88;
  while( true ) {
    pgVar1 = ppgVar12[-1];
    ppgVar12 = ppgVar12 + -1;
    if (game_code != pgVar1->game_code) break;
LAB_08094c88:
    iVar3 = strcmp(pgVar1->header_title,header_title);
    if (iVar3 == 0) {
      return pgVar1;
    }
    if (ppgVar12 == ppgVar11) break;
  }
LAB_08094bf0:
  uVar8 = iVar2 + 1;
  if (uVar8 < uVar9) {
    pgVar1 = ppgVar11[uVar8];
    ppgVar11 = ppgVar11 + uVar8;
    uVar7 = pgVar1->game_code;
    while( true ) {
      if (game_code != uVar7) {
        __printf_chk(1,
                     " Couldn\'t find gamecode + ID for %08x:%s, returning first gamecode match.\n",
                     game_code,header_title);
        return *ppgVar10;
      }
      iVar2 = strcmp(pgVar1->header_title,header_title);
      uVar8 = uVar8 + 1;
      if (iVar2 == 0) {
        return pgVar1;
      }
      if (uVar9 <= uVar8) break;
      ppgVar11 = ppgVar11 + 1;
      pgVar1 = *ppgVar11;
      uVar7 = pgVar1->game_code;
    }
  }
LAB_08094b88:
  if (uVar9 == 0) {
    pgVar1 = (game_database_entry_struct *)0x0;
  }
  else {
    uVar8 = (game_code ^ game_database->games->game_code) & 0xffffff;
    if (uVar8 != 0) {
      uVar4 = 0;
      uVar5 = 0x30;
      do {
        uVar8 = uVar5;
        uVar4 = uVar4 + 1;
        if (uVar9 == uVar4) {
          return (game_database_entry_struct *)0x0;
        }
        uVar5 = uVar8 + 0x30;
      } while (((game_code ^ *(uint *)(game_database->games->header_title + uVar8 + 0x1c)) &
               0xffffff) != 0);
    }
    __printf_chk(1,
                 " Couldn\'t find full gamecode (%08x), going with first alt-region match (%08x)\n",
                 game_code);
    pgVar1 = (game_database_entry_struct *)(game_database->games->header_title + (uVar8 - 4));
  }
  return pgVar1;
}


