/*
 * Ghidra decompilation
 *
 * Function : select_load_state
 * Address  : 0809b0ac
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_load_state(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  system_struct *system;
  
  if (menu_state->system->gamecard_name[0] == '\0') {
    return;
  }
  load_state_index(menu_state->system,menu_state->config->savestate_number,(u16 *)0x0,(u16 *)0x0,0);
  menu_state->exit_menu = 1;
  return;
}


