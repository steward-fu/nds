/*
 * Ghidra decompilation
 *
 * Function : select_save_config_global
 * Address  : 0809b830
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_save_config_global(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  system_struct *system;
  u32 uVar1;
  config_struct *pcVar2;
  config_struct *config;
  _menu_struct *p_Var3;
  menu_struct *current_menu;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  pcVar2 = menu_state->config;
  if (pcVar2 < menu_state->bg_info_string &&
      menu_state->config_username < &(pcVar2->firmware).language) {
    (pcVar2->firmware).username[0] = (uint)(byte)menu_state->config_username[0];
    (pcVar2->firmware).username[1] = (uint)(byte)menu_state->config_username[1];
    (pcVar2->firmware).username[2] = (uint)(byte)menu_state->config_username[2];
    (pcVar2->firmware).username[3] = (uint)(byte)menu_state->config_username[3];
    (pcVar2->firmware).username[4] = (uint)(byte)menu_state->config_username[4];
    (pcVar2->firmware).username[5] = (uint)(byte)menu_state->config_username[5];
    (pcVar2->firmware).username[6] = (uint)(byte)menu_state->config_username[6];
    (pcVar2->firmware).username[7] = (uint)(byte)menu_state->config_username[7];
  }
  else {
    auVar4 = VectorCopyLong(*(undefined8 *)menu_state->config_username,1,1);
    auVar5 = VectorCopyLong(auVar4._0_8_,2,1);
    auVar4 = VectorCopyLong(auVar4._8_8_,2,1);
    *(longlong *)(pcVar2->firmware).username = auVar5._0_8_;
    *(longlong *)((pcVar2->firmware).username + 2) = auVar5._8_8_;
    *(longlong *)((pcVar2->firmware).username + 4) = auVar4._0_8_;
    *(longlong *)((pcVar2->firmware).username + 6) = auVar4._8_8_;
  }
  (pcVar2->firmware).username[8] = (uint)(byte)menu_state->config_username[8];
  (pcVar2->firmware).username[9] = (uint)(byte)menu_state->config_username[9];
  (pcVar2->firmware).username[10] = (uint)(byte)menu_state->config_username[10];
  system = menu_state->system;
  uVar1 = menu_state->screen_orientation;
  if (1 < uVar1) {
    uVar1 = pcVar2->screen_orientation | 2;
  }
  pcVar2->screen_orientation = uVar1;
  save_config_file(system,"drastic.cfg",0);
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
  return;
}


