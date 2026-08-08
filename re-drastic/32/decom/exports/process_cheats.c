/*
 * Ghidra decompilation
 *
 * Function : process_cheats
 * Address  : 080a1b9c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void process_cheats(system_struct *system,cheat_directory_struct *cheat_directory,u32 frame_count)

{
  cheat_struct **ppcVar1;
  bool bVar2;
  cheat_struct *current_cheat;
  u32 uVar3;
  uint uVar4;
  u32 uVar5;
  uint uVar6;
  
  uVar6 = cheat_directory->num_active_cheats;
  if (uVar6 == 0) {
    return;
  }
  uVar4 = 0;
  uVar5 = 0xffffffff;
  bVar2 = false;
  do {
    while( true ) {
      ppcVar1 = cheat_directory->active_cheats + uVar4;
      uVar3 = (*ppcVar1)->folder_id;
      if (uVar3 != 0xffffffff) break;
      bVar2 = false;
LAB_080a1bfc:
      uVar4 = uVar4 + 1;
      process_cheat(system,*ppcVar1,frame_count);
      uVar6 = cheat_directory->num_active_cheats;
      if (uVar6 <= uVar4) {
        return;
      }
    }
    if (uVar3 != uVar5) {
      bVar2 = (cheat_directory->current_listing).folders[uVar3].type == '\x11';
      uVar5 = uVar3;
      goto LAB_080a1bfc;
    }
    if (!bVar2) goto LAB_080a1bfc;
    uVar4 = uVar4 + 1;
    bVar2 = true;
    if (uVar6 <= uVar4) {
      return;
    }
  } while( true );
}


