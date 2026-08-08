/*
 * Ghidra decompilation
 *
 * Function : select_delete_config_local
 * Address  : 0809b720
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_delete_config_local(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  int iVar1;
  system_struct *psVar2;
  _menu_struct *p_Var3;
  menu_struct *current_menu;
  char config_file_path [1024];
  
  iVar1 = __stack_chk_guard;
  psVar2 = menu_state->system;
  if (psVar2->gamecard_name[0] != '\0') {
    __sprintf_chk(config_file_path,1,0x400,"%s%cconfig%c%s.cfg",psVar2->user_root_path,0x2f,0x2f,
                  psVar2->gamecard_name);
    unlink(config_file_path);
  }
  p_Var3 = menu_state->current_menu;
  if (p_Var3->focus_function != (focus_menu_function_type)0x0) {
    (*p_Var3->focus_function)(menu_state,p_Var3,1);
  }
  p_Var3 = p_Var3->parent_menu;
  if (p_Var3 == (_menu_struct *)0x0) {
    if (menu_state->system->gamecard_name[0] != '\0') {
      menu_state->exit_menu = 1;
    }
  }
  else {
    if (p_Var3->focus_function != (focus_menu_function_type)0x0) {
      (*p_Var3->focus_function)(menu_state,p_Var3,0);
    }
    menu_state->current_menu = p_Var3;
  }
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


