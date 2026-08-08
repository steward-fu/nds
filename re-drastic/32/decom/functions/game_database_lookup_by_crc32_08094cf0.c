/*
 * Ghidra decompilation
 *
 * Function : game_database_lookup_by_crc32
 * Address  : 08094cf0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

game_database_entry_struct *
game_database_lookup_by_crc32(game_database_struct *game_database,u32 rom_crc32)

{
  game_database_entry_struct *b;
  uint uVar1;
  size_t __idx;
  uint uVar2;
  uint uVar3;
  size_t __u;
  uint uVar4;
  
  uVar1 = 0;
  uVar3 = game_database->num_games;
  do {
    if (uVar3 <= uVar1) {
      return (game_database_entry_struct *)0x0;
    }
    while( true ) {
      uVar2 = uVar3 + uVar1 >> 1;
      uVar4 = game_database->games_sorted_crc32[uVar2]->rom_crc32;
      if (rom_crc32 == uVar4) {
        return game_database->games_sorted_crc32[uVar2];
      }
      if (uVar4 <= rom_crc32 && rom_crc32 != uVar4) break;
      uVar3 = uVar2;
      if (uVar2 <= uVar1) {
        return (game_database_entry_struct *)0x0;
      }
    }
    uVar1 = uVar2 + 1;
  } while( true );
}


