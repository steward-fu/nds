/*
 * Ghidra decompilation
 *
 * Function : lookup_cheat_entry
 * Address  : 080a1f44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

cheat_directory_entry_struct *
lookup_cheat_entry(cheat_directory_struct *cheat_directory,u32 game_code,u32 header_crc)

{
  int iVar1;
  void *__p;
  cheat_directory_entry_struct *pcVar2;
  cheat_directory_entry_struct *cheat_lookup_entry;
  cheat_directory_entry_struct *cheat_lookup_entry_1;
  size_t __idx;
  uint uVar3;
  uint uVar4;
  u32 uVar5;
  uint uVar6;
  size_t __u;
  uint uVar7;
  cheat_directory_entry_struct *pcVar8;
  uint uVar9;
  cheat_directory_entry_struct *pcVar10;
  
  pcVar8 = cheat_directory->games;
  uVar6 = cheat_directory->num_games;
  uVar9 = 0;
  uVar4 = uVar6;
  do {
    if (uVar4 <= uVar9) {
      return (cheat_directory_entry_struct *)0x0;
    }
    while( true ) {
      uVar3 = uVar4 + uVar9 >> 1;
      uVar7 = pcVar8[uVar3].game_code;
      pcVar2 = pcVar8 + uVar3;
      if (game_code == uVar7) {
        iVar1 = (int)pcVar2 - (int)pcVar8 >> 4;
        if (-1 < iVar1) {
          uVar5 = pcVar2->header_crc;
          while( true ) {
            if (header_crc == uVar5) {
              return pcVar2;
            }
            if ((pcVar2 == pcVar8) || (game_code != pcVar2[-1].game_code)) break;
            uVar5 = pcVar2[-1].header_crc;
            pcVar2 = pcVar2 + -1;
          }
        }
        uVar4 = iVar1 + 1;
        if (uVar6 <= uVar4) {
          return (cheat_directory_entry_struct *)0x0;
        }
        if (game_code != pcVar8[uVar4].game_code) {
          return (cheat_directory_entry_struct *)0x0;
        }
        if (header_crc != pcVar8[uVar4].header_crc) {
          pcVar2 = pcVar8 + iVar1 + 2;
          while( true ) {
            pcVar10 = pcVar2;
            uVar4 = uVar4 + 1;
            if (uVar6 <= uVar4) {
              return (cheat_directory_entry_struct *)0x0;
            }
            if (game_code != pcVar8[uVar4].game_code) break;
            pcVar2 = pcVar10 + 1;
            if (header_crc == pcVar10->header_crc) {
              return pcVar10;
            }
          }
          return (cheat_directory_entry_struct *)0x0;
        }
        return pcVar8 + uVar4;
      }
      if (uVar7 <= game_code && game_code != uVar7) break;
      uVar4 = uVar3;
      if (uVar3 <= uVar9) {
        return (cheat_directory_entry_struct *)0x0;
      }
    }
    uVar9 = uVar3 + 1;
  } while( true );
}


