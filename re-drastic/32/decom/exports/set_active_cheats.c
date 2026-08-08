/*
 * Ghidra decompilation
 *
 * Function : set_active_cheats
 * Address  : 080a2120
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_active_cheats(cheat_directory_struct *cheat_directory)

{
  void *__ptr;
  cheat_struct **active_cheats;
  cheat_struct **ppcVar1;
  cheat_struct *pcVar2;
  cheat_struct *current_cheat;
  cheat_struct *current_cheat_1;
  u32 uVar3;
  u32 uVar4;
  uint uVar5;
  uint uVar6;
  u32 uVar7;
  size_t __size;
  
  __ptr = malloc(0x80);
  active_cheats = cheat_directory->active_cheats;
  if (active_cheats != (cheat_struct **)0x0) {
    free(active_cheats);
  }
  uVar3 = cheat_directory->listing_loaded;
  if ((cheat_directory->listing_loaded == 0) ||
     (uVar7 = (cheat_directory->current_listing).num_cheats, uVar3 = uVar7, uVar7 == 0)) {
    uVar5 = 0x20;
    __size = uVar3;
  }
  else {
    uVar4 = 0;
    pcVar2 = (cheat_directory->current_listing).cheats;
    uVar3 = 0;
    uVar6 = 0x20;
    do {
      uVar4 = uVar4 + 1;
      uVar5 = uVar6;
      if (*pcVar2->enable_ptr != '\0') {
        if (uVar6 <= uVar3) {
          uVar5 = uVar6 << 1;
          __ptr = realloc(__ptr,uVar6 << 3);
        }
        *(cheat_struct **)((int)__ptr + uVar3 * 4) = pcVar2;
        uVar3 = uVar3 + 1;
      }
      pcVar2 = pcVar2 + 1;
      uVar6 = uVar5;
    } while (uVar4 != uVar7);
    __size = uVar3 << 2;
  }
  uVar7 = cheat_directory->num_custom_cheats;
  if (uVar7 != 0) {
    uVar4 = 0;
    pcVar2 = cheat_directory->custom_cheats;
    do {
      uVar4 = uVar4 + 1;
      uVar6 = uVar5;
      if (*pcVar2->enable_ptr != '\0') {
        if (uVar5 <= uVar3) {
          uVar6 = uVar5 << 1;
          __ptr = realloc(__ptr,uVar5 << 3);
        }
        *(cheat_struct **)((int)__ptr + uVar3 * 4) = pcVar2;
        uVar3 = uVar3 + 1;
      }
      pcVar2 = pcVar2 + 1;
      uVar5 = uVar6;
    } while (uVar4 != uVar7);
    __size = uVar3 << 2;
  }
  ppcVar1 = (cheat_struct **)realloc(__ptr,__size);
  cheat_directory->active_cheats = ppcVar1;
  cheat_directory->num_active_cheats = uVar3;
  return;
}


