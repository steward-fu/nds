/*
 * Ghidra decompilation
 *
 * Function : load_config_file
 * Address  : 00177ef0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_config_file(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  char *__s1;
  long lVar3;
  undefined8 uVar4;
  int local_838;
  undefined auStack_834 [4];
  undefined auStack_830 [8];
  char acStack_828 [1024];
  char acStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __sprintf_chk(acStack_428,1,0x420,"%s%cconfig%c%s",param_1 + 0x8ab80,0x2f,0x2f,param_2);
  __printf_chk(1,"Loading config file %s\n",acStack_428);
  __stream = fopen(acStack_428,"rb");
  if (__stream == (FILE *)0x0) {
    uVar4 = 0xffffffff;
    __printf_chk(1,"Config file %s does not exist.\n",acStack_428);
  }
  else {
    fread(&local_838,4,1,__stream);
    fread(auStack_834,4,1,__stream);
    fread(auStack_830,8,1,__stream);
    if (local_838 == 0x46435344) {
      fclose(__stream);
      uVar4 = 0;
      iVar1 = load_config_file_binary(param_1,param_2,param_3);
      if (iVar1 == -1) {
        uVar4 = 0xffffffff;
      }
      else {
        __printf_chk(1," Saving converted config file %s.\n",acStack_428);
        save_config_file(param_1,param_2,param_3);
      }
    }
    else {
      fseek(__stream,0,0);
      while (pcVar2 = fgets(acStack_828,0x400,__stream), pcVar2 != (char *)0x0) {
        pcVar2 = strchr(acStack_828,0x3d);
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = '\0';
          __s1 = (char *)skip_whitespace(acStack_828);
          chomp_whitespace();
          pcVar2 = (char *)skip_whitespace(pcVar2 + 1);
          chomp_whitespace();
          iVar1 = strcasecmp(__s1,"frameskip_type");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x859e8) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"frameskip_value");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x859ec) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"safe_frameskip");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a54) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"show_frame_counter");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x859f0) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"screen_orientation");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x859f4) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"screen_swap");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x859fc) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"savestate_number");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a00) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"fast_forward");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a04) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"enable_sound");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a08) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"clock_speed");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a0c) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"threaded_3d");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a10) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"mirror_touch");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a14) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"compress_savestates");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a18) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"savestate_snapshot");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a1c) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"unzip_roms");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a24) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"preload_roms");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a28) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"backup_in_savestates");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a2c) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"ignore_gamecard_limit");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a30) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"frame_interval");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a34) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"trim_roms");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a3c) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"fix_main_2d_screen");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a40) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"disable_edge_marking");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a44) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"interframe_blend");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a58) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"hires_3d");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a48) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"use_rtc_custom_time");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a64) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"rtc_custom_time");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(long *)(param_1 + 0x85a68) = lVar3;
          }
          iVar1 = strcasecmp(__s1,"rtc_system_time");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a70) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"slot2_device_type");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a5c) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"rumble_frames");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a60) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"firmware.username");
          if (iVar1 == 0) {
            mbstowcs((wchar_t *)(param_1 + 0x855a8),pcVar2,10);
            *(undefined4 *)(param_1 + 0x855d0) = 0;
          }
          iVar1 = strcasecmp(__s1,"firmware.language");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x855d4) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"firmware.favorite_color");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x855d8) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"firmware.birthday_month");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x855dc) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"firmware.birthday_day");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x855e0) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"enable_cheats");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a20) = (int)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86274) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86276) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86278) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8627a) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_A]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8627c) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_B]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8627e) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_X]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86280) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_Y]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86282) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_L]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86284) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_R]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86286) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_START]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86288) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_SELECT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8628a) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_HINGE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8628c) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8628e) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86290) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86292) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86294) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_PRESS]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86296) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_MENU]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86298) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_SAVE_STATE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8629a) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_LOAD_STATE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8629c) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_FAST_FORWARD]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8629e) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_SWAP_SCREENS]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862a0) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_SWAP_ORIENTATION_A]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862a2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_SWAP_ORIENTATION_B]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862a4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_LOAD_GAME]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862a6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_QUIT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862a8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_FAKE_MICROPHONE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862aa) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862b2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862b4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862b6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862b8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_SELECT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ba) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_BACK]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862be) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_EXIT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862bc) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_PAGE_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862c0) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_PAGE_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862c2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_a[CONTROL_INDEX_UI_SWITCH]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862c4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862c6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862c8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ca) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862cc) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_A]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ce) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_B]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862d0) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_X]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862d2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_Y]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862d4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_L]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862d6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_R]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862d8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_START]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862da) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_SELECT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862dc) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_HINGE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862de) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862e0) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862e2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862e4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862e6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_PRESS]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862e8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_MENU]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ea) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_SAVE_STATE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ec) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_LOAD_STATE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862ee) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_FAST_FORWARD]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862f0) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_SWAP_SCREENS]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862f2) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_SWAP_ORIENTATION_A]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862f4) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_SWAP_ORIENTATION_B]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862f6) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_LOAD_GAME]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862f8) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_QUIT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862fa) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_FAKE_MICROPHONE]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x862fc) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86304) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86306) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_LEFT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86308) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_RIGHT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8630a) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_SELECT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8630c) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_BACK]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86310) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_EXIT]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x8630e) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_PAGE_UP]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86312) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_PAGE_DOWN]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86314) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"controls_b[CONTROL_INDEX_UI_SWITCH]");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(short *)(param_1 + 0x86316) = (short)lVar3;
          }
          iVar1 = strcasecmp(__s1,"batch_threads_3d_count");
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a38) = (int)lVar3;
            iVar1 = strcasecmp(__s1,"bypass_3d");
          }
          else {
            iVar1 = strcasecmp(__s1,"bypass_3d");
          }
          if (iVar1 == 0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(int *)(param_1 + 0x85a4c) = (int)lVar3;
          }
        }
      }
      uVar4 = 0;
      config_update_settings((wchar_t *)(param_1 + 0x855a8));
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


