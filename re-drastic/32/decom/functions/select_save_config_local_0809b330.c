/*
 * Ghidra decompilation
 *
 * Function : select_save_config_local
 * Address  : 0809b330
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void select_save_config_local(menu_state_struct *menu_state,menu_option_struct *menu_option)

{
  int iVar1;
  system_struct *psVar2;
  u32 uVar3;
  config_struct *pcVar4;
  config_struct *config;
  menu_struct *pmVar5;
  menu_struct *current_menu;
  undefined auVar6 [16];
  undefined auVar7 [16];
  char config_file_name [1024];
  
  iVar1 = __stack_chk_guard;
  psVar2 = menu_state->system;
  if (psVar2->gamecard_name[0] != '\0') {
    pcVar4 = menu_state->config;
    if (pcVar4 < menu_state->bg_info_string &&
        menu_state->config_username < &(pcVar4->firmware).language) {
      (pcVar4->firmware).username[0] = (uint)(byte)menu_state->config_username[0];
      (pcVar4->firmware).username[1] = (uint)(byte)menu_state->config_username[1];
      (pcVar4->firmware).username[2] = (uint)(byte)menu_state->config_username[2];
      (pcVar4->firmware).username[3] = (uint)(byte)menu_state->config_username[3];
      (pcVar4->firmware).username[4] = (uint)(byte)menu_state->config_username[4];
      (pcVar4->firmware).username[5] = (uint)(byte)menu_state->config_username[5];
      (pcVar4->firmware).username[6] = (uint)(byte)menu_state->config_username[6];
      (pcVar4->firmware).username[7] = (uint)(byte)menu_state->config_username[7];
    }
    else {
      auVar6 = VectorCopyLong(*(undefined8 *)menu_state->config_username,1,1);
      auVar7 = VectorCopyLong(auVar6._0_8_,2,1);
      auVar6 = VectorCopyLong(auVar6._8_8_,2,1);
      *(longlong *)(pcVar4->firmware).username = auVar7._0_8_;
      *(longlong *)((pcVar4->firmware).username + 2) = auVar7._8_8_;
      *(longlong *)((pcVar4->firmware).username + 4) = auVar6._0_8_;
      *(longlong *)((pcVar4->firmware).username + 6) = auVar6._8_8_;
    }
    (pcVar4->firmware).username[8] = (uint)(byte)menu_state->config_username[8];
    (pcVar4->firmware).username[9] = (uint)(byte)menu_state->config_username[9];
    (pcVar4->firmware).username[10] = (uint)(byte)menu_state->config_username[10];
    uVar3 = menu_state->screen_orientation;
    if (1 < uVar3) {
      uVar3 = pcVar4->screen_orientation | 2;
    }
    pcVar4->screen_orientation = uVar3;
    __sprintf_chk(config_file_name,1,0x400,"%s.cfg",psVar2->gamecard_name);
    save_config_file(menu_state->system,config_file_name,1);
  }
  pmVar5 = menu_state->current_menu;
  if (pmVar5->focus_function != (focus_menu_function_type)0x0) {
    (*pmVar5->focus_function)(menu_state,pmVar5,1);
  }
  pmVar5 = pmVar5->parent_menu;
  if (pmVar5 == (menu_struct *)0x0) {
    if (menu_state->system->gamecard_name[0] != '\0') {
      menu_state->exit_menu = 1;
    }
  }
  else {
    if (pmVar5->focus_function != (focus_menu_function_type)0x0) {
      (*pmVar5->focus_function)(menu_state,pmVar5,0);
    }
    menu_state->current_menu = pmVar5;
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


