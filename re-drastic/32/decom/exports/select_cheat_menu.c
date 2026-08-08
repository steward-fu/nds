/*
 * Ghidra decompilation
 *
 * Function : select_cheat_menu
 * Address  : 0809e188
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_cheat_menu(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  system_struct *psVar1;
  system_struct *system;
  
  psVar1 = menu_state->system;
  if (((psVar1->gamecard_name[0] != '\0') &&
      ((psVar1->gamecard).cheat_directory.directory_loaded != 0)) &&
     ((psVar1->gamecard).cheat_directory.listing_loaded != 0)) {
    cheat_menu(menu_state);
    return;
  }
  return;
}


