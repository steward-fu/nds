/*
 * Ghidra decompilation
 *
 * Function : save_config_file
 * Address  : 00177190
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_config_file(long param_1,undefined8 param_2,int param_3)

{
  FILE *__stream;
  undefined8 uVar1;
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_428,1,0x420,"%s%cconfig%c%s",param_1 + 0x8ab80,0x2f,0x2f,param_2);
  __stream = fopen(acStack_428,"wt");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"ERROR: Couldn\'t save config file %s.\n",acStack_428);
    uVar1 = 0xffffffff;
  }
  else {
    __printf_chk(1,"Saving config to %s\n",acStack_428);
    __fprintf_chk(__stream,1,"%s = %d\n","frameskip_type",*(undefined4 *)(param_1 + 0x859e8));
    __fprintf_chk(__stream,1,"%s = %d\n","frameskip_value",*(undefined4 *)(param_1 + 0x859ec));
    __fprintf_chk(__stream,1,"%s = %d\n","safe_frameskip",*(undefined4 *)(param_1 + 0x85a54));
    __fprintf_chk(__stream,1,"%s = %d\n","show_frame_counter",*(undefined4 *)(param_1 + 0x859f0));
    __fprintf_chk(__stream,1,"%s = %d\n","screen_orientation",*(undefined4 *)(param_1 + 0x859f4));
    __fprintf_chk(__stream,1,"%s = %d\n","screen_swap",*(undefined4 *)(param_1 + 0x859fc));
    __fprintf_chk(__stream,1,"%s = %d\n","savestate_number",*(undefined4 *)(param_1 + 0x85a00));
    __fprintf_chk(__stream,1,"%s = %d\n","fast_forward",*(undefined4 *)(param_1 + 0x85a04));
    __fprintf_chk(__stream,1,"%s = %d\n","enable_sound",*(undefined4 *)(param_1 + 0x85a08));
    __fprintf_chk(__stream,1,"%s = %d\n","clock_speed",*(undefined4 *)(param_1 + 0x85a0c));
    __fprintf_chk(__stream,1,"%s = %d\n","threaded_3d",*(undefined4 *)(param_1 + 0x85a10));
    __fprintf_chk(__stream,1,"%s = %d\n","mirror_touch",*(undefined4 *)(param_1 + 0x85a14));
    __fprintf_chk(__stream,1,"%s = %d\n","compress_savestates",*(undefined4 *)(param_1 + 0x85a18));
    __fprintf_chk(__stream,1,"%s = %d\n","savestate_snapshot",*(undefined4 *)(param_1 + 0x85a1c));
    __fprintf_chk(__stream,1,"%s = %d\n","unzip_roms",*(undefined4 *)(param_1 + 0x85a24));
    __fprintf_chk(__stream,1,"%s = %d\n","preload_roms",*(undefined4 *)(param_1 + 0x85a28));
    __fprintf_chk(__stream,1,"%s = %d\n","backup_in_savestates",*(undefined4 *)(param_1 + 0x85a2c));
    __fprintf_chk(__stream,1,"%s = %d\n","ignore_gamecard_limit",*(undefined4 *)(param_1 + 0x85a30))
    ;
    __fprintf_chk(__stream,1,"%s = %d\n","frame_interval",*(undefined4 *)(param_1 + 0x85a34));
    __fprintf_chk(__stream,1,"%s = %d\n","trim_roms",*(undefined4 *)(param_1 + 0x85a3c));
    __fprintf_chk(__stream,1,"%s = %d\n","fix_main_2d_screen",*(undefined4 *)(param_1 + 0x85a40));
    __fprintf_chk(__stream,1,"%s = %d\n","disable_edge_marking",*(undefined4 *)(param_1 + 0x85a44));
    __fprintf_chk(__stream,1,"%s = %d\n","interframe_blend",*(undefined4 *)(param_1 + 0x85a58));
    __fprintf_chk(__stream,1,"%s = %d\n","hires_3d",*(undefined4 *)(param_1 + 0x85a48));
    __fprintf_chk(__stream,1,"%s = %d\n","use_rtc_custom_time",*(undefined4 *)(param_1 + 0x85a64));
    __fprintf_chk(__stream,1,"%s = %d\n","rtc_custom_time",*(undefined4 *)(param_1 + 0x85a68));
    __fprintf_chk(__stream,1,"%s = %d\n","rtc_system_time",*(undefined4 *)(param_1 + 0x85a70));
    __fprintf_chk(__stream,1,"%s = %d\n","slot2_device_type",*(undefined4 *)(param_1 + 0x85a5c));
    __fprintf_chk(__stream,1,"%s = %d\n","rumble_frames",*(undefined4 *)(param_1 + 0x85a60));
    __fprintf_chk(__stream,1,"%s = %ls\n","firmware.username",param_1 + 0x855a8);
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.language",*(undefined4 *)(param_1 + 0x855d4));
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.favorite_color",
                  *(undefined4 *)(param_1 + 0x855d8));
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.birthday_month",
                  *(undefined4 *)(param_1 + 0x855dc));
    __fprintf_chk(__stream,1,"%s = %d\n","firmware.birthday_day",*(undefined4 *)(param_1 + 0x855e0))
    ;
    if (param_3 == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","enable_cheats",*(undefined4 *)(param_1 + 0x85a20));
    }
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UP]",
                  *(undefined2 *)(param_1 + 0x86274));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_DOWN]",
                  *(undefined2 *)(param_1 + 0x86276));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LEFT]",
                  *(undefined2 *)(param_1 + 0x86278));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_RIGHT]",
                  *(undefined2 *)(param_1 + 0x8627a));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_A]",
                  *(undefined2 *)(param_1 + 0x8627c));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_B]",
                  *(undefined2 *)(param_1 + 0x8627e));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_X]",
                  *(undefined2 *)(param_1 + 0x86280));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_Y]",
                  *(undefined2 *)(param_1 + 0x86282));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_L]",
                  *(undefined2 *)(param_1 + 0x86284));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_R]",
                  *(undefined2 *)(param_1 + 0x86286));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_START]",
                  *(undefined2 *)(param_1 + 0x86288));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SELECT]",
                  *(undefined2 *)(param_1 + 0x8628a));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_HINGE]",
                  *(undefined2 *)(param_1 + 0x8628c));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_UP]",
                  *(undefined2 *)(param_1 + 0x8628e));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_DOWN]",
                  *(undefined2 *)(param_1 + 0x86290));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_LEFT]",
                  *(undefined2 *)(param_1 + 0x86292));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]",
                  *(undefined2 *)(param_1 + 0x86294));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_TOUCH_CURSOR_PRESS]",
                  *(undefined2 *)(param_1 + 0x86296));
    if (param_3 == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_MENU]",
                    *(undefined2 *)(param_1 + 0x86298));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SAVE_STATE]",
                    *(undefined2 *)(param_1 + 0x8629a));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LOAD_STATE]",
                    *(undefined2 *)(param_1 + 0x8629c));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_FAST_FORWARD]",
                    *(undefined2 *)(param_1 + 0x8629e));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_SCREENS]",
                    *(undefined2 *)(param_1 + 0x862a0));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_ORIENTATION_A]",
                    *(undefined2 *)(param_1 + 0x862a2));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_SWAP_ORIENTATION_B]",
                    *(undefined2 *)(param_1 + 0x862a4));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_LOAD_GAME]",
                    *(undefined2 *)(param_1 + 0x862a6));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_QUIT]",
                    *(undefined2 *)(param_1 + 0x862a8));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_FAKE_MICROPHONE]",
                    *(undefined2 *)(param_1 + 0x862aa));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_UP]",
                    *(undefined2 *)(param_1 + 0x862b2));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_DOWN]",
                    *(undefined2 *)(param_1 + 0x862b4));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_LEFT]",
                    *(undefined2 *)(param_1 + 0x862b6));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_RIGHT]",
                    *(undefined2 *)(param_1 + 0x862b8));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_SELECT]",
                    *(undefined2 *)(param_1 + 0x862ba));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_BACK]",
                    *(undefined2 *)(param_1 + 0x862be));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_EXIT]",
                    *(undefined2 *)(param_1 + 0x862bc));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_PAGE_UP]",
                    *(undefined2 *)(param_1 + 0x862c0));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_PAGE_DOWN]",
                    *(undefined2 *)(param_1 + 0x862c2));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_a[CONTROL_INDEX_UI_SWITCH]",
                    *(undefined2 *)(param_1 + 0x862c4));
    }
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UP]",
                  *(undefined2 *)(param_1 + 0x862c6));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_DOWN]",
                  *(undefined2 *)(param_1 + 0x862c8));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LEFT]",
                  *(undefined2 *)(param_1 + 0x862ca));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_RIGHT]",
                  *(undefined2 *)(param_1 + 0x862cc));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_A]",
                  *(undefined2 *)(param_1 + 0x862ce));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_B]",
                  *(undefined2 *)(param_1 + 0x862d0));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_X]",
                  *(undefined2 *)(param_1 + 0x862d2));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_Y]",
                  *(undefined2 *)(param_1 + 0x862d4));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_L]",
                  *(undefined2 *)(param_1 + 0x862d6));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_R]",
                  *(undefined2 *)(param_1 + 0x862d8));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_START]",
                  *(undefined2 *)(param_1 + 0x862da));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SELECT]",
                  *(undefined2 *)(param_1 + 0x862dc));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_HINGE]",
                  *(undefined2 *)(param_1 + 0x862de));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_UP]",
                  *(undefined2 *)(param_1 + 0x862e0));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_DOWN]",
                  *(undefined2 *)(param_1 + 0x862e2));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_LEFT]",
                  *(undefined2 *)(param_1 + 0x862e4));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]",
                  *(undefined2 *)(param_1 + 0x862e6));
    __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_TOUCH_CURSOR_PRESS]",
                  *(undefined2 *)(param_1 + 0x862e8));
    if (param_3 == 0) {
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_MENU]",
                    *(undefined2 *)(param_1 + 0x862ea));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SAVE_STATE]",
                    *(undefined2 *)(param_1 + 0x862ec));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LOAD_STATE]",
                    *(undefined2 *)(param_1 + 0x862ee));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_FAST_FORWARD]",
                    *(undefined2 *)(param_1 + 0x862f0));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_SCREENS]",
                    *(undefined2 *)(param_1 + 0x862f2));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_ORIENTATION_A]",
                    *(undefined2 *)(param_1 + 0x862f4));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_SWAP_ORIENTATION_B]",
                    *(undefined2 *)(param_1 + 0x862f6));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_LOAD_GAME]",
                    *(undefined2 *)(param_1 + 0x862f8));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_QUIT]",
                    *(undefined2 *)(param_1 + 0x862fa));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_FAKE_MICROPHONE]",
                    *(undefined2 *)(param_1 + 0x862fc));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_UP]",
                    *(undefined2 *)(param_1 + 0x86304));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_DOWN]",
                    *(undefined2 *)(param_1 + 0x86306));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_LEFT]",
                    *(undefined2 *)(param_1 + 0x86308));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_RIGHT]",
                    *(undefined2 *)(param_1 + 0x8630a));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_SELECT]",
                    *(undefined2 *)(param_1 + 0x8630c));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_BACK]",
                    *(undefined2 *)(param_1 + 0x86310));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_EXIT]",
                    *(undefined2 *)(param_1 + 0x8630e));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_PAGE_UP]",
                    *(undefined2 *)(param_1 + 0x86312));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_PAGE_DOWN]",
                    *(undefined2 *)(param_1 + 0x86314));
      __fprintf_chk(__stream,1,"%s = %d\n","controls_b[CONTROL_INDEX_UI_SWITCH]",
                    *(undefined2 *)(param_1 + 0x86316));
    }
    fclose(__stream);
    uVar1 = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


