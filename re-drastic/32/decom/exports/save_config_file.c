/*
 * Ghidra decompilation
 *
 * Function : save_config_file
 * Address  : 08097d48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 save_config_file(system_struct *system,char *file_name,u32 game_specific)

{
  int iVar1;
  FILE *__stream;
  FILE *config_file;
  s32 sVar2;
  char path [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  __stream = fopen(path,"wt");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"ERROR: Couldn\'t save config file %s.\n",path);
    sVar2 = -1;
  }
  else {
    __printf_chk(1,"Saving config to %s\n",path);
    __fprintf_chk(__stream,1,"%s = %d\n","frameskip_type",(system->config).frameskip_type);
    __fprintf_chk(__stream,1,"%s = %d\n","frameskip_value",(system->config).frameskip_value);
    __fprintf_chk(__stream,1,"%s = %d\n","show_frame_counter",(system->config).show_frame_counter);
    __fprintf_chk(__stream,1,"%s = %d\n","screen_orientation",(system->config).screen_orientation);
    __fprintf_chk(__stream,1,"%s = %d\n","screen_scaling",(system->config).screen_scaling);
    __fprintf_chk(__stream,1,"%s = %d\n","screen_swap",(system->config).screen_swap);
    __fprintf_chk(__stream,1,"%s = %d\n","savestate_number",(system->config).savestate_number);
    __fprintf_chk(__stream,1,"%s = %d\n","fast_forward",(system->config).fast_forward);
    __fprintf_chk(__stream,1,"%s = %d\n","enable_sound",(system->config).enable_sound);
    __fprintf_chk(__stream,1,"%s = %d\n","clock_speed",(system->config).clock_speed);
    __fprintf_chk(__stream,1,"%s = %d\n","threaded_3d",(system->config).threaded_3d);
    __fprintf_chk(__stream,1,"%s = %d\n","mirror_touch",(system->config).mirror_touch);
    __fprintf_chk(__stream,1,"%s = %d\n","compress_savestates",(system->config).compress_savestates)
    ;
    __fprintf_chk(__stream,1,"%s = %d\n","savestate_snapshot",(system->config).savestate_snapshot);
    __fprintf_chk(__stream,1,"%s = %d\n","unzip_roms",(system->config).unzip_roms);
    __fprintf_chk(__stream,1,"%s = %d\n","backup_in_savestates",
                  (system->config).backup_in_savestates);
    __fprintf_chk(__stream,1,"%s = %d\n","ignore_gamecard_limit",
                  (system->config).ignore_gamecard_limit);
    __fprintf_chk(__stream,1,"%s = %d\n","frame_interval",(system->config).frame_interval);
    __fprintf_chk(__stream,1,"%s = %d\n","trim_roms",(system->config).trim_roms);
    __fprintf_chk(__stream,1,"%s = %d\n","fix_main_2d_screen",(system->config).fix_main_2d_screen);
    __fprintf_chk(__stream,1,"%s = %d\n","disable_edge_marking",
                  (system->config).disable_edge_marking);
    __fprintf_chk(__stream,1,"%s = %d\n","hires_3d",(system->config).hires_3d);
    __fprintf_chk(__stream,1,"%s = %d\n","use_rtc_custom_time",(system->config).use_rtc_custom_time)
    ;
    __fprintf_chk(__stream,1,"%s = %d\n","rtc_custom_time",(system->config).rtc_custom_time);
    __fprintf_chk(__stream,1,"%s = %d\n","rtc_system_time",(system->config).rtc_system_time);
    __fprintf_chk(__stream,1,"%s = %ls\n","firmware.username",&system->config);
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.language",(system->config).firmware.language);
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.favorite_color",
                  (system->config).firmware.favorite_color);
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.birthday_month",
                  (system->config).firmware.birthday_month);
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.birthday_day",
                  (system->config).firmware.birthday_day);
    if (game_specific == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","enable_cheats",(system->config).enable_cheats);
    }
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UP]",
                  (system->config).controls_a[0]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_DOWN]",
                  (system->config).controls_a[1]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LEFT]",
                  (system->config).controls_a[2]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_RIGHT]",
                  (system->config).controls_a[3]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_A]",
                  (system->config).controls_a[4]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_B]",
                  (system->config).controls_a[5]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_X]",
                  (system->config).controls_a[6]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_Y]",
                  (system->config).controls_a[7]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_L]",
                  (system->config).controls_a[8]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_R]",
                  (system->config).controls_a[9]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_START]",
                  (system->config).controls_a[10]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SELECT]",
                  (system->config).controls_a[0xb]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_HINGE]",
                  (system->config).controls_a[0xc]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_UP]",
                  (system->config).controls_a[0xd]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_DOWN]",
                  (system->config).controls_a[0xe]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_LEFT]",
                  (system->config).controls_a[0xf]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]",
                  (system->config).controls_a[0x10]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_PRESS]",
                  (system->config).controls_a[0x11]);
    if (game_specific == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_MENU]",
                    (system->config).controls_a[0x12]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SAVE_STATE]",
                    (system->config).controls_a[0x13]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LOAD_STATE]",
                    (system->config).controls_a[0x14]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_FAST_FORWARD]",
                    (system->config).controls_a[0x15]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_SCREENS]",
                    (system->config).controls_a[0x16]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_ORIENTATION_A]",
                    (system->config).controls_a[0x17]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_ORIENTATION_B]",
                    (system->config).controls_a[0x18]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LOAD_GAME]",
                    (system->config).controls_a[0x19]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_QUIT]",
                    (system->config).controls_a[0x1a]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_UP]",
                    (system->config).controls_a[0x1e]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_DOWN]",
                    (system->config).controls_a[0x1f]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_LEFT]",
                    (system->config).controls_a[0x20]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_RIGHT]",
                    (system->config).controls_a[0x21]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_SELECT]",
                    (system->config).controls_a[0x22]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_BACK]",
                    (system->config).controls_a[0x24]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_EXIT]",
                    (system->config).controls_a[0x23]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_PAGE_UP]",
                    (system->config).controls_a[0x25]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_PAGE_DOWN]",
                    (system->config).controls_a[0x26]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_SWITCH]",
                    (system->config).controls_a[0x27]);
    }
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UP]",
                  (system->config).controls_b[0]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_DOWN]",
                  (system->config).controls_b[1]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LEFT]",
                  (system->config).controls_b[2]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_RIGHT]",
                  (system->config).controls_b[3]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_A]",
                  (system->config).controls_b[4]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_B]",
                  (system->config).controls_b[5]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_X]",
                  (system->config).controls_b[6]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_Y]",
                  (system->config).controls_b[7]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_L]",
                  (system->config).controls_b[8]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_R]",
                  (system->config).controls_b[9]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_START]",
                  (system->config).controls_b[10]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SELECT]",
                  (system->config).controls_b[0xb]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_HINGE]",
                  (system->config).controls_b[0xc]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_UP]",
                  (system->config).controls_b[0xd]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_DOWN]",
                  (system->config).controls_b[0xe]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_LEFT]",
                  (system->config).controls_b[0xf]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]",
                  (system->config).controls_b[0x10]);
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_PRESS]",
                  (system->config).controls_b[0x11]);
    if (game_specific == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_MENU]",
                    (system->config).controls_b[0x12]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SAVE_STATE]",
                    (system->config).controls_b[0x13]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LOAD_STATE]",
                    (system->config).controls_b[0x14]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_FAST_FORWARD]",
                    (system->config).controls_b[0x15]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_SCREENS]",
                    (system->config).controls_b[0x16]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_ORIENTATION_A]",
                    (system->config).controls_b[0x17]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_ORIENTATION_B]",
                    (system->config).controls_b[0x18]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LOAD_GAME]",
                    (system->config).controls_b[0x19]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_QUIT]",
                    (system->config).controls_b[0x1a]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_UP]",
                    (system->config).controls_b[0x1e]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_DOWN]",
                    (system->config).controls_b[0x1f]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_LEFT]",
                    (system->config).controls_b[0x20]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_RIGHT]",
                    (system->config).controls_b[0x21]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_SELECT]",
                    (system->config).controls_b[0x22]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_BACK]",
                    (system->config).controls_b[0x24]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_EXIT]",
                    (system->config).controls_b[0x23]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_PAGE_UP]",
                    (system->config).controls_b[0x25]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_PAGE_DOWN]",
                    (system->config).controls_b[0x26]);
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_SWITCH]",
                    (system->config).controls_b[0x27]);
    }
    fclose(__stream);
    sVar2 = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


