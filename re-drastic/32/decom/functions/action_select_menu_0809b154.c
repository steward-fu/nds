/*
 * Ghidra decompilation
 *
 * Function : action_select_menu
 * Address  : 0809b154
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 action_select_menu(menu_state_struct *menu_state,menu_option_struct *menu_option,
                      gui_input_struct *gui_input)

{
  menu_option_select_menu_struct *select_menu;
  u32 uVar1;
  menu_struct *current_menu;
  menu_struct *target_menu;
  _menu_struct *p_Var2;
  
  uVar1 = gui_input->action_type;
  if (uVar1 != 4) {
    if (uVar1 == 6) {
      uVar1 = 0xb;
      menu_state->exit_menu = 1;
    }
    return uVar1;
  }
  p_Var2 = (_menu_struct *)menu_option[1].name;
  current_menu = (menu_struct *)menu_state->current_menu->focus_function;
  menu_state->current_menu = p_Var2;
  if (current_menu != (menu_struct *)0x0) {
    (*(code *)current_menu)(menu_state,p_Var2,1);
  }
  if (p_Var2->focus_function != (focus_menu_function_type)0x0) {
    (*p_Var2->focus_function)(menu_state,p_Var2,0);
  }
  return 0xb;
}


