/*
 * Ghidra decompilation
 *
 * Function : load_config_file
 * Address  : 08098e48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_config_file(system_struct *system,char *file_name,u32 game_specific)

{
  int iVar1;
  FILE *__stream;
  FILE *config_file;
  int iVar2;
  char *equals_ptr;
  char *pcVar3;
  uint uVar4;
  char *str;
  char *field_ptr;
  char *value_ptr;
  u32 uVar5;
  long lVar6;
  u16 *puVar7;
  u64 *puVar8;
  u64 *__s;
  u64 *map;
  s32 sVar9;
  ushort *puVar10;
  undefined8 uVar11;
  ulonglong in_d18;
  config_header_struct config_header;
  char path [1024];
  char line_buffer [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x400,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  __printf_chk(1,"Loading config file %s\n",path);
  __stream = fopen(path,"rb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Config file %s does not exist.\n",path);
    sVar9 = -1;
  }
  else {
    fread(&config_header,4,1,__stream);
    fread(&config_header.version,4,1,__stream);
    fread(config_header.reserved,8,1,__stream);
    iVar2 = strncmp(config_header.magic_string,"DSCF",4);
    if (iVar2 == 0) {
      fclose(__stream);
      sVar9 = load_config_file_binary(system,file_name,game_specific);
      if (sVar9 == -1) {
        sVar9 = -1;
      }
      else {
        __printf_chk(1," Saving converted config file %s.\n",path);
        save_config_file(system,file_name,game_specific);
        sVar9 = 0;
      }
    }
    else {
      fseek(__stream,0,0);
      while (pcVar3 = fgets(line_buffer,0x400,__stream), pcVar3 != (char *)0x0) {
        pcVar3 = strchr(line_buffer,0x3d);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
          str = skip_whitespace(line_buffer);
          chomp_whitespace(str);
          pcVar3 = skip_whitespace(pcVar3 + 1);
          chomp_whitespace(pcVar3);
          iVar2 = strcasecmp(str,"frameskip_type");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).frameskip_type = uVar5;
          }
          iVar2 = strcasecmp(str,"frameskip_value");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).frameskip_value = uVar5;
          }
          iVar2 = strcasecmp(str,"show_frame_counter");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).show_frame_counter = uVar5;
          }
          iVar2 = strcasecmp(str,"screen_orientation");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).screen_orientation = uVar5;
          }
          iVar2 = strcasecmp(str,"screen_scaling");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).screen_scaling = uVar5;
          }
          iVar2 = strcasecmp(str,"screen_swap");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).screen_swap = uVar5;
          }
          iVar2 = strcasecmp(str,"savestate_number");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).savestate_number = uVar5;
          }
          iVar2 = strcasecmp(str,"fast_forward");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).fast_forward = uVar5;
          }
          iVar2 = strcasecmp(str,"enable_sound");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).enable_sound = uVar5;
          }
          iVar2 = strcasecmp(str,"clock_speed");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).clock_speed = uVar5;
          }
          iVar2 = strcasecmp(str,"threaded_3d");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).threaded_3d = uVar5;
          }
          iVar2 = strcasecmp(str,"mirror_touch");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).mirror_touch = uVar5;
          }
          iVar2 = strcasecmp(str,"compress_savestates");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).compress_savestates = uVar5;
          }
          iVar2 = strcasecmp(str,"savestate_snapshot");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).savestate_snapshot = uVar5;
          }
          iVar2 = strcasecmp(str,"unzip_roms");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).unzip_roms = uVar5;
          }
          iVar2 = strcasecmp(str,"backup_in_savestates");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).backup_in_savestates = uVar5;
          }
          iVar2 = strcasecmp(str,"ignore_gamecard_limit");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).ignore_gamecard_limit = uVar5;
          }
          iVar2 = strcasecmp(str,"frame_interval");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).frame_interval = uVar5;
          }
          iVar2 = strcasecmp(str,"trim_roms");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).trim_roms = uVar5;
          }
          iVar2 = strcasecmp(str,"fix_main_2d_screen");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).fix_main_2d_screen = uVar5;
          }
          iVar2 = strcasecmp(str,"disable_edge_marking");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).disable_edge_marking = uVar5;
          }
          iVar2 = strcasecmp(str,"hires_3d");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).hires_3d = uVar5;
          }
          iVar2 = strcasecmp(str,"use_rtc_custom_time");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).use_rtc_custom_time = uVar5;
          }
          iVar2 = strcasecmp(str,"rtc_custom_time");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).rtc_custom_time = lVar6;
          }
          iVar2 = strcasecmp(str,"rtc_system_time");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).rtc_system_time = uVar5;
          }
          iVar2 = strcasecmp(str,"firmware.username");
          if (iVar2 == 0) {
            mbstowcs((wchar_t *)&system->config,pcVar3,10);
            (system->config).firmware.username[10] = L'\0';
          }
          iVar2 = strcasecmp(str,"firmware.language");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).firmware.language = uVar5;
          }
          iVar2 = strcasecmp(str,"firmware.favorite_color");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).firmware.favorite_color = uVar5;
          }
          iVar2 = strcasecmp(str,"firmware.birthday_month");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).firmware.birthday_month = uVar5;
          }
          iVar2 = strcasecmp(str,"firmware.birthday_day");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).firmware.birthday_day = uVar5;
          }
          iVar2 = strcasecmp(str,"enable_cheats");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).enable_cheats = uVar5;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[1] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[2] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[3] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_A]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[4] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_B]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[5] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_X]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[6] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_Y]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[7] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_L]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[8] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_R]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[9] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_START]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[10] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_SELECT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0xb] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_HINGE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0xc] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0xd] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0xe] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0xf] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x10] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_TOUCH_CURSOR_PRESS]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x11] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_MENU]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x12] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_SAVE_STATE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x13] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_LOAD_STATE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x14] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_FAST_FORWARD]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x15] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_SWAP_SCREENS]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x16] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_SWAP_ORIENTATION_A]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x17] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_SWAP_ORIENTATION_B]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x18] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_LOAD_GAME]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x19] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_QUIT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x1a] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x1e] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x1f] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x20] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x21] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_SELECT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x22] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_BACK]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x24] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_EXIT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x23] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_PAGE_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x25] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_PAGE_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x26] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_a[CONTROL_INDEX_UI_SWITCH]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_a[0x27] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[1] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[2] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[3] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_A]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[4] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_B]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[5] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_X]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[6] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_Y]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[7] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_L]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[8] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_R]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[9] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_START]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[10] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_SELECT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0xb] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_HINGE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0xc] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0xd] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0xe] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0xf] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x10] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_TOUCH_CURSOR_PRESS]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x11] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_MENU]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x12] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_SAVE_STATE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x13] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_LOAD_STATE]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x14] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_FAST_FORWARD]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x15] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_SWAP_SCREENS]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x16] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_SWAP_ORIENTATION_A]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x17] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_SWAP_ORIENTATION_B]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x18] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_LOAD_GAME]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x19] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_QUIT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x1a] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x1e] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x1f] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_LEFT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x20] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_RIGHT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x21] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_SELECT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x22] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_BACK]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x24] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_EXIT]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x23] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_PAGE_UP]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x25] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_PAGE_DOWN]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x26] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"controls_b[CONTROL_INDEX_UI_SWITCH]");
          if (iVar2 == 0) {
            lVar6 = strtol(pcVar3,(char **)0x0,10);
            (system->config).controls_b[0x27] = (u16)lVar6;
          }
          iVar2 = strcasecmp(str,"batch_threads_3d_count");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).batch_threads_3d_count = uVar5;
          }
          iVar2 = strcasecmp(str,"bypass_3d");
          if (iVar2 == 0) {
            uVar5 = strtol(pcVar3,(char **)0x0,10);
            (system->config).bypass_3d = uVar5;
          }
        }
      }
      __s = (system->config).controls_code_to_config_map;
      set_screen_orientation((system->config).screen_orientation);
      set_screen_scale_factor((system->config).screen_scaling);
      set_screen_swap((system->config).screen_swap);
      memset(__s,0,0x4000);
      puVar10 = (ushort *)((int)&(system->config).rtc_system_time + 2);
      puVar7 = (system->config).controls_a + 0x27;
      uVar4 = 0;
      do {
        puVar10 = puVar10 + 1;
        if (*puVar10 != 0xffff) {
          in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar4 & 0xffff;
          puVar8 = __s + *puVar10;
          uVar11 = VectorShiftLeft(1,in_d18,8,1);
          *(uint *)puVar8 = *(uint *)puVar8 | (uint)uVar11;
          *(uint *)((int)puVar8 + 4) =
               *(uint *)((int)puVar8 + 4) | (uint)((ulonglong)uVar11 >> 0x20);
        }
        puVar7 = puVar7 + 1;
        if (*puVar7 != 0xffff) {
          in_d18 = in_d18 & 0xffffffffffff0000 | (ulonglong)uVar4 & 0xffff;
          puVar8 = __s + *puVar7;
          uVar11 = VectorShiftLeft(1,in_d18,8,1);
          *(uint *)puVar8 = (uint)uVar11 | *(uint *)puVar8;
          *(uint *)((int)puVar8 + 4) =
               (uint)((ulonglong)uVar11 >> 0x20) | *(uint *)((int)puVar8 + 4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x28);
      sVar9 = 0;
    }
  }
  if (iVar1 == __stack_chk_guard) {
    return sVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


