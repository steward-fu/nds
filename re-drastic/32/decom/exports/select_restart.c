/*
 * Ghidra decompilation
 *
 * Function : select_restart
 * Address  : 0809a6b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable system:system_struct * *[r0:4] conflicts with parameter, skipped. */

void select_restart(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  if (menu_state->system->gamecard_name[0] != '\0') {
    menu_state->game_reset = 1;
    menu_state->exit_menu = 1;
    menu_state->restore_screen = 0;
  }
  return;
}


