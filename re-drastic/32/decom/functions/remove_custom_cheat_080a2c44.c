/*
 * Ghidra decompilation
 *
 * Function : remove_custom_cheat
 * Address  : 080a2c44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 remove_custom_cheat(cheat_directory_struct *cheat_directory,u32 cheat_index)

{
  cheat_struct *pcVar1;
  u8 *puVar2;
  s32 sVar3;
  u32 num_custom_cheats;
  uint __size;
  
  if (cheat_index < cheat_directory->num_custom_cheats) {
    __size = cheat_directory->num_custom_cheats - 1;
    if (cheat_index < __size) {
      memmove(cheat_directory->custom_cheats + cheat_index,
              cheat_directory->custom_cheats + cheat_index + 1,(__size - cheat_index) * 0x18);
      memmove(cheat_directory->custom_cheat_enables + cheat_index,
              cheat_directory->custom_cheat_enables + cheat_index + 1,__size - cheat_index);
    }
    pcVar1 = (cheat_struct *)realloc(cheat_directory->custom_cheats,__size * 0x18);
    cheat_directory->custom_cheats = pcVar1;
    puVar2 = (u8 *)realloc(cheat_directory->custom_cheat_enables,__size);
    cheat_directory->custom_cheat_enables = puVar2;
    sVar3 = 0;
    cheat_directory->num_custom_cheats = __size;
  }
  else {
    __printf_chk(1,"Can\'t remove custom cheat: invalid index %d\n",cheat_index);
    sVar3 = -1;
  }
  return sVar3;
}


