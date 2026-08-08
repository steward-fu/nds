/*
 * Ghidra decompilation
 *
 * Function : find_custom_cheat
 * Address  : 080a2ed4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 find_custom_cheat(cheat_directory_struct *cheat_directory,u32 *cheat_data,u32 cheat_data_length)

{
  int iVar1;
  cheat_struct *pcVar2;
  cheat_struct *cheat;
  u32 uVar3;
  u32 uVar4;
  
  uVar4 = cheat_directory->num_custom_cheats;
  if (uVar4 != 0) {
    pcVar2 = cheat_directory->custom_cheats;
    uVar3 = 0;
    do {
      if ((pcVar2->data_length == cheat_data_length) &&
         (iVar1 = memcmp(pcVar2->data,cheat_data,cheat_data_length << 2), iVar1 == 0)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar3 != uVar4);
  }
  return -1;
}


