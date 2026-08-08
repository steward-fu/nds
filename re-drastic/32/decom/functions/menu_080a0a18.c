/*
 * Ghidra decompilation
 *
 * Function : menu
 * Address  : 080a0a18
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x080a0b10) */
/* WARNING: Removing unreachable block (ram,0x080a0fbc) */
/* WARNING: Unknown calling convention */

void menu(system_struct *system,u32 start_file_dialog)

{
  int iVar1;
  system_struct *psVar2;
  _menu_struct *p_Var3;
  menu_struct *__ptr;
  menu_struct *main_menu;
  s32 sVar4;
  u16 *dest;
  uint uVar5;
  menu_option_struct *current_option;
  config_struct *config_00;
  u32 uVar6;
  code *pcVar7;
  uint uVar8;
  input_struct *input;
  menu_struct *current_menu_1;
  _menu_struct *p_Var9;
  int iVar10;
  menu_struct *current_menu;
  menu_option_struct *current_menu_option_1;
  system_struct *system_1;
  menu_option_struct *pmVar11;
  menu_option_struct *current_menu_option;
  undefined auVar12 [16];
  undefined auVar13 [16];
  config_struct *config;
  audio_struct *audio;
  gui_input_struct gui_input;
  menu_state_struct menu_state;
  char file_loaded [1024];
  
  iVar1 = __stack_chk_guard;
  config_00 = &system->config;
  menu_state.screen_orientation = (system->config).screen_orientation;
  auVar12._0_8_ = VectorCopyNarrow(*(undefined (*) [16])(system->config).firmware.username,4);
  menu_state.game_reset = 0;
  auVar12._8_8_ = VectorCopyNarrow(*(undefined (*) [16])((system->config).firmware.username + 4),4);
  if (2 < menu_state.screen_orientation) {
    menu_state.screen_orientation = menu_state.screen_orientation - 1;
  }
  menu_state.capturing_input = 0;
  menu_state.config_username[9] = (char)(system->config).firmware.username[9];
  menu_state.config_username._0_8_ = VectorCopyNarrow(auVar12,2);
  menu_state.config_username[10] = (char)(system->config).firmware.username[10];
  menu_state.speed_override = 0;
  menu_state.config_username[8] = (char)(system->config).firmware.username[8];
  uVar6 = (system->config).frame_interval;
  if (uVar6 == 100000) {
    uVar5 = 1;
LAB_080a0f9c:
    uVar8 = uVar5;
    if (uVar6 == 20000) {
      uVar5 = 4;
      uVar8 = 1;
      goto LAB_080a0d60;
    }
LAB_080a0d30:
    if (uVar6 == 0x411a) {
      uVar5 = 5;
    }
    else {
      if (uVar6 != 0x37cd) goto LAB_080a0d50;
      uVar5 = 6;
    }
  }
  else {
    if (uVar6 == 0x8235) {
      uVar8 = 1;
      uVar5 = 2;
      goto LAB_080a0d30;
    }
    uVar8 = (uint)(uVar6 == 25000);
    uVar5 = uVar8;
    if (uVar6 != 25000) goto LAB_080a0f9c;
    uVar5 = 3;
LAB_080a0d50:
    if (uVar6 == 0x30d4) {
      uVar5 = 7;
    }
    else {
LAB_080a0d60:
      if (uVar8 == 0) goto LAB_080a0b1c;
    }
  }
  menu_state.speed_override = uVar5;
LAB_080a0b1c:
  menu_state.system = system;
  menu_state.config = config_00;
  if (system->gamecard_name[0] == '\0') {
    menu_state.game_loaded_on_entry = 0;
  }
  else {
    menu_state.game_loaded_on_entry = 1;
    dest = (u16 *)malloc(0x18000);
    menu_state.ds_screen_top = dest;
    menu_state.ds_screen_bottom = (u16 *)malloc(0x18000);
    screen_copy16(dest,0);
    screen_copy16(menu_state.ds_screen_bottom,1);
  }
  load_logo(&menu_state);
  __ptr = create_menu_main(&menu_state);
  menu_state.screen_bg_top = (void *)0x0;
  menu_state.screen_bg_bottom = (void *)0x0;
  menu_state.exit_menu = 0;
  menu_state.restore_screen = 1;
  menu_state.bg_info_string[0] = '\0';
  menu_state.current_menu = __ptr;
  set_screen_menu_on();
  if (((start_file_dialog != 0) &&
      (sVar4 = load_file(&menu_state,nds_ext,file_loaded), psVar2 = menu_state.system, sVar4 != -1))
     && (sVar4 = load_nds(&(menu_state.system)->gamecard,file_loaded), -1 < sVar4)) {
    menu_state.game_reset = 1;
    menu_state.screen_orientation = (psVar2->config).screen_orientation;
    menu_state.exit_menu = 1;
    menu_state.restore_screen = 0;
  }
  p_Var9 = menu_state.current_menu;
LAB_080a0b80:
  do {
    menu_state.current_menu = p_Var9;
    if (menu_state.exit_menu == 0) goto LAB_080a0b94;
    while( true ) {
      if (system->gamecard_name[0] != '\0') {
        audio_revert_pause_state(&(system->spu).audio,0);
        do {
          get_gui_input(&(menu_state.system)->input,&gui_input);
        } while (gui_input.action_type != 0xb);
        clear_gui_actions();
        if (__ptr->num_options != 0) {
          uVar5 = 0;
          do {
            pmVar11 = __ptr->options[uVar5];
            if (pmVar11->destruct_function != (destruct_function_type)0x0) {
              (*pmVar11->destruct_function)(&menu_state,pmVar11);
            }
            uVar5 = uVar5 + 1;
            free(pmVar11);
          } while (uVar5 < __ptr->num_options);
        }
        free(__ptr->options);
        free(__ptr);
        uVar6 = menu_state.screen_orientation;
        if (1 < menu_state.screen_orientation) {
          uVar6 = (system->config).screen_orientation | 2;
        }
        (system->config).screen_orientation = uVar6;
        uVar6 = menu_state.speed_override;
        if (menu_state.speed_override != 0) {
          uVar6 = __aeabi_uidiv(5000000,menu::speed_override_values[menu_state.speed_override]);
        }
        (system->config).frame_interval = uVar6;
        if (menu_state.config < menu_state.bg_info_string &&
            menu_state.config_username < &((menu_state.config)->firmware).language) {
          ((menu_state.config)->firmware).username[0] = (uint)(byte)menu_state.config_username[0];
          ((menu_state.config)->firmware).username[1] = (uint)(byte)menu_state.config_username[1];
          ((menu_state.config)->firmware).username[2] = (uint)(byte)menu_state.config_username[2];
          ((menu_state.config)->firmware).username[3] = (uint)(byte)menu_state.config_username[3];
          ((menu_state.config)->firmware).username[4] = (uint)(byte)menu_state.config_username[4];
          ((menu_state.config)->firmware).username[5] = (uint)(byte)menu_state.config_username[5];
          ((menu_state.config)->firmware).username[6] = (uint)(byte)menu_state.config_username[6];
          ((menu_state.config)->firmware).username[7] = (uint)(byte)menu_state.config_username[7];
        }
        else {
          auVar12 = VectorCopyLong(menu_state.config_username._0_8_,1,1);
          auVar13 = VectorCopyLong(auVar12._0_8_,2,1);
          auVar12 = VectorCopyLong(auVar12._8_8_,2,1);
          *(longlong *)((menu_state.config)->firmware).username = auVar13._0_8_;
          *(longlong *)(((menu_state.config)->firmware).username + 2) = auVar13._8_8_;
          *(longlong *)(((menu_state.config)->firmware).username + 4) = auVar12._0_8_;
          *(longlong *)(((menu_state.config)->firmware).username + 6) = auVar12._8_8_;
        }
        ((menu_state.config)->firmware).username[8] = (uint)(byte)menu_state.config_username[8];
        ((menu_state.config)->firmware).username[9] = (uint)(byte)menu_state.config_username[9];
        ((menu_state.config)->firmware).username[10] = (uint)(byte)menu_state.config_username[10];
        config_update_settings(config_00);
        set_screen_menu_off();
        if (menu_state.drastic_logo != (u16 *)0x0) {
          free(menu_state.drastic_logo);
        }
        if (menu_state.game_reset != 0) {
          reset_system(system);
        }
        if (menu_state.game_loaded_on_entry != 0) {
          free(menu_state.ds_screen_top);
          free(menu_state.ds_screen_bottom);
          if (menu_state.game_reset != 0) {
            puts("Performing long jmp to reset.");
                    /* WARNING: Subroutine does not return */
            __longjmp_chk(system->reset_jmp,0);
          }
        }
        if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
LAB_080a0b94:
      p_Var3 = menu_state.current_menu;
      delay_us(10000);
      if ((menu_state.system)->microphone_status == '\x02') {
        audio_capture_flush(&((menu_state.system)->spu).audio);
      }
      draw_menu_bg(&menu_state);
      set_font_narrow();
      print_string(menu_state.bg_info_string,0xa676,0,0x10,0x10);
      set_font_wide();
      if (p_Var3->num_options != 0) {
        uVar5 = 0;
        do {
          uVar8 = uVar5 + 1;
          (*p_Var3->options[uVar5]->draw_function)
                    (&menu_state,p_Var3->options[uVar5],SUB14(p_Var3->current_option == uVar5,0));
          uVar5 = uVar8;
        } while (uVar8 < p_Var3->num_options);
      }
      if (p_Var3->draw_function != (draw_menu_function_type)0x0) {
        (*p_Var3->draw_function)(&menu_state,p_Var3);
      }
      pmVar11 = p_Var3->options[p_Var3->current_option];
      update_screen_menu();
      if (menu_state.capturing_input == 0) {
        input = &(menu_state.system)->input;
        do {
          get_gui_input(input,&gui_input);
        } while (gui_input.action_type == 0xb);
      }
      p_Var9 = menu_state.current_menu;
      if (pmVar11->action_function == (action_function_type)0x0) goto LAB_080a0b80;
      uVar6 = (*pmVar11->action_function)(&menu_state,pmVar11,&gui_input);
      p_Var9 = menu_state.current_menu;
      if (uVar6 == 1) break;
      if (uVar6 == 0) {
        iVar10 = -1;
        goto LAB_080a0d94;
      }
      if (uVar6 != 5) goto LAB_080a0b80;
      if (pmVar11->focus_function != (focus_function_type)0x0) {
        (*pmVar11->focus_function)(&menu_state,pmVar11,1);
      }
      if (p_Var9->focus_function != (focus_menu_function_type)0x0) {
        (*p_Var9->focus_function)(&menu_state,p_Var9,1);
      }
      p_Var9 = p_Var9->parent_menu;
      if (p_Var9 != (menu_struct *)0x0) {
        if (p_Var9->focus_function != (focus_menu_function_type)0x0) {
          (*p_Var9->focus_function)(&menu_state,p_Var9,0);
        }
        goto LAB_080a0b80;
      }
      p_Var9 = menu_state.current_menu;
      if ((menu_state.system)->gamecard_name[0] == '\0') goto LAB_080a0b80;
      menu_state.exit_menu = 1;
    }
    iVar10 = 1;
LAB_080a0d94:
    uVar6 = p_Var3->current_option;
    if (pmVar11->focus_function != (focus_function_type)0x0) {
      (*pmVar11->focus_function)(&menu_state,pmVar11,1);
    }
    uVar5 = uVar6 + iVar10;
    if ((int)uVar5 < 0) {
      uVar5 = p_Var3->num_options - 1;
    }
    if (uVar5 < p_Var3->num_options) {
      uVar8 = uVar5 << 2;
    }
    else {
      uVar5 = 0;
      uVar8 = uVar5;
    }
    iVar10 = *(int *)((int)p_Var3->options + uVar8);
    pcVar7 = *(code **)(iVar10 + 0x10);
    p_Var3->current_option = uVar5;
    p_Var9 = menu_state.current_menu;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(&menu_state,iVar10,0);
      p_Var9 = menu_state.current_menu;
    }
  } while( true );
}


