/*
 * Ghidra decompilation
 *
 * Function : select_exit_current_menu
 * Address  : 0809b4e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_exit_current_menu(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  _menu_struct *p_Var1;
  menu_struct *current_menu;
  
  p_Var1 = menu_state->current_menu;
  if ((menu_option != (menu_option_struct *)0x0) &&
     (menu_option->focus_function != (focus_function_type)0x0)) {
    (*menu_option->focus_function)(menu_state,menu_option,1);
  }
  if (p_Var1->focus_function != (focus_menu_function_type)0x0) {
    (*p_Var1->focus_function)(menu_state,p_Var1,1);
  }
  p_Var1 = p_Var1->parent_menu;
  if (p_Var1 == (_menu_struct *)0x0) {
    if (menu_state->system->gamecard_name[0] != '\0') {
      menu_state->exit_menu = 1;
    }
  }
  else {
    if (p_Var1->focus_function != (focus_menu_function_type)0x0) {
      (*p_Var1->focus_function)(menu_state,p_Var1,0);
    }
    menu_state->current_menu = p_Var1;
  }
  return;
}


