/*
 * Ghidra decompilation
 *
 * Function : select_save_state
 * Address  : 0809b108
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_save_state(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  system_struct *system;
  
  if (menu_state->system->gamecard_name[0] == '\0') {
    return;
  }
  save_state_index(menu_state->system,menu_state->config->savestate_number,menu_state->ds_screen_top
                   ,menu_state->ds_screen_bottom);
  return;
}


