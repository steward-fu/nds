/*
 * Ghidra decompilation
 *
 * Function : action_select
 * Address  : 0809b1e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 action_select(menu_state_struct *menu_state,menu_option_struct *menu_option,
                 gui_input_struct *gui_input)

{
  menu_option_select_struct *select;
  
  if (gui_input->action_type != 4) {
    return gui_input->action_type;
  }
  clear_gui_actions();
  (*(code *)menu_option[1].name)(menu_state,menu_option);
  return 0xb;
}


