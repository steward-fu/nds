/*
 * Ghidra decompilation
 *
 * Function : free_custom_cheats
 * Address  : 080a2098
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void free_custom_cheats(cheat_directory_struct *cheat_directory)

{
  void **ppvVar1;
  cheat_struct *current_cheat;
  uint uVar2;
  uint uVar3;
  cheat_struct *pcVar4;
  
  if (cheat_directory->num_custom_cheats != 0) {
    uVar2 = 0;
    uVar3 = uVar2;
    do {
      pcVar4 = cheat_directory->custom_cheats;
      uVar3 = uVar3 + 1;
      free(*(void **)((int)&pcVar4->name + uVar2));
      ppvVar1 = (void **)((int)&pcVar4->data + uVar2);
      uVar2 = uVar2 + 0x18;
      free(*ppvVar1);
    } while (uVar3 < cheat_directory->num_custom_cheats);
  }
  free(cheat_directory->custom_cheats);
  free(cheat_directory->custom_cheat_enables);
  cheat_directory->custom_cheats = (cheat_struct *)0x0;
  cheat_directory->custom_cheat_enables = (u8 *)0x0;
  cheat_directory->num_custom_cheats = 0;
  return;
}


