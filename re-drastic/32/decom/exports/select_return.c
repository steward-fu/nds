/*
 * Ghidra decompilation
 *
 * Function : select_return
 * Address  : 0809a6dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_return(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  if (menu_state->system->gamecard_name[0] != '\0') {
    menu_state->exit_menu = 1;
  }
  return;
}


