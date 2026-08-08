/*
 * Ghidra decompilation
 *
 * Function : select_restore_default_controls
 * Address  : 0809b13c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_restore_default_controls(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  config_struct *config;
  
  platform_set_default_controls(menu_state->config->controls_a,menu_state->config->controls_b);
  return;
}


