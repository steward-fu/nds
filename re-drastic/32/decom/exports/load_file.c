/*
 * Ghidra decompilation
 *
 * Function : load_file
 * Address  : 0809c200
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_file(menu_state_struct *menu_state,char **wildcards,char *result)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  u64 uVar5;
  file_info_struct **ppfVar6;
  void *pvVar7;
  file_entry_struct *file_list;
  char **dir_list;
  char *pcVar8;
  int iVar9;
  FILE *__stream;
  FILE *cache_file;
  FILE *__stream_00;
  FILE *icon_cache_file;
  DIR *__dirp;
  DIR *current_dir;
  dirent *pdVar10;
  dirent *current_file;
  size_t sVar11;
  u32 file_name_length;
  int iVar12;
  char **ppcVar13;
  u32 current_dir_length;
  nds_icon_struct *nds_icon;
  game_database_entry_struct *pgVar14;
  u32 file_label_length;
  s32 sVar15;
  char *pcVar16;
  u32 uVar17;
  uint uVar18;
  uint uVar19;
  u32 pixel;
  file_info_struct *pfVar20;
  file_info_struct *b;
  config_struct *pcVar21;
  size_t __u;
  uint uVar22;
  s32 scroll_offset;
  system_struct *psVar23;
  void *pvVar24;
  size_t __idx;
  char *file_name;
  void **ppvVar25;
  char *file_name_1;
  ushort *puVar26;
  u32 current_dir_number;
  u32 current_file_number;
  ushort *puVar27;
  char *__s;
  char **ppcVar28;
  size_t sVar29;
  u32 uVar30;
  ushort *puVar31;
  undefined4 *__s_00;
  uint uVar32;
  uint uVar33;
  size_t __nmemb;
  char *name_buffer_ptr;
  u16 *puVar34;
  u16 *base_pixels;
  ushort *puVar35;
  bool bVar36;
  u64 uVar37;
  undefined8 uVar38;
  double dVar39;
  size_t local_d13c;
  void *local_d138;
  uint local_d134;
  uint local_d130;
  uint local_d12c;
  size_t local_d128;
  size_t local_d124;
  FILE *local_d11c;
  int local_d114;
  size_t local_d110;
  int local_d0fc;
  uint local_d0f8;
  u64 ticks_start;
  u64 ticks_end;
  u64 current_ticks;
  gui_input_struct gui_input;
  file_info_cache_struct file_info_cache;
  icon_cache_struct icon_cache;
  stat file_info;
  stat file_cache_info;
  char *file_list_display_type_names [3];
  u16 nds_icon_pixels [25600];
  char seek_string [7];
  char label_select [32];
  char label_exit [32];
  char label_back [32];
  char label_switch [32];
  char name_buffer [65];
  char current_dir_short [81];
  char control_config_help_string_a [128];
  char control_config_help_string_b [128];
  char control_config_help_string_c [128];
  char control_config_help_string_d [128];
  char _file_label [128];
  char current_dir_name [1024];
  
  iVar4 = __stack_chk_guard;
  psVar23 = menu_state->system;
  uVar37 = 0;
  file_list_display_type_names[0] = "filename";
  file_list_display_type_names[1] = "title";
  file_list_display_type_names[2] = "rom-title";
  platform_print_code(label_select,(uint)(psVar23->config).controls_a[0x22]);
  local_d110 = 0;
  platform_print_code(label_exit,(uint)(psVar23->config).controls_a[0x23]);
  local_d12c = 0;
  platform_print_code(label_back,(uint)(psVar23->config).controls_a[0x24]);
  platform_print_code(label_switch,(uint)(psVar23->config).controls_a[0x27]);
  clear_screen_menu(0);
  set_font_narrow();
  strcpy(result,menu_state->system->gamecard_filename);
LAB_0809c330:
  if (2 < menu_state->config->file_list_display_type) {
    menu_state->config->file_list_display_type = 0;
  }
  __sprintf_chk(control_config_help_string_a,1,0x80,"%s: select",label_select);
  __sprintf_chk(control_config_help_string_b,1,0x80,"%s: return to main menu",label_exit);
  __sprintf_chk(control_config_help_string_c,1,0x80,"%s: go up directory",label_back);
  __sprintf_chk(control_config_help_string_d,1,0x80,"%s: switch display (%s)",label_switch,
                file_list_display_type_names[menu_state->config->file_list_display_type]);
  get_ticks_us(&ticks_start);
  clear_gui_actions();
  pvVar7 = malloc(0x180);
  local_d138 = malloc(0x80);
  pcVar8 = getcwd(current_dir_name,0x400);
  if (pcVar8 == (char *)0x0) {
    puts("ERROR: Couldn\'t get current path.");
  }
  iVar9 = __xstat(3,"drastic_file_info.txt",(stat *)&file_cache_info);
  if (iVar9 == 0) {
    puts("Renaming drastic_file_info.txt to .drastic_file_info.txt.");
    rename("drastic_file_info.txt",".drastic_file_info.txt");
  }
  iVar9 = __xstat(3,".drastic_file_info.txt",(stat *)&file_cache_info);
  if ((iVar9 == 0) &&
     (file_cache_info.st_mtim.tv_sec < (menu_state->system->gamecard).game_database.creation_time))
  {
    puts("Found file info cache older than game database file. Deleting.");
    unlink(".drastic_file_info.txt");
  }
  file_info_cache_load(&file_info_cache);
  icon_cache_load(&icon_cache);
  __stream = fopen(".drastic_file_info.txt","ab");
  __stream_00 = fopen(".drastic_icon_cache.bin","ab");
  __dirp = opendir(current_dir_name);
  local_d130 = file_info_cache.num_cached;
  if (__dirp == (DIR *)0x0) {
    bVar36 = true;
    sVar11 = 0;
    sVar29 = 0;
    __nmemb = 0;
    local_d13c = 0;
    local_d0f8 = 0;
  }
  else {
    __nmemb = 0;
    local_d13c = 0;
    sVar29 = 0;
    local_d128 = 0x20;
    local_d124 = 0x20;
LAB_0809c550:
    pdVar10 = readdir(__dirp);
    if (pdVar10 != (dirent *)0x0) {
LAB_0809c560:
      pcVar8 = pdVar10->d_name;
      sVar11 = strlen(pcVar8);
      iVar9 = __xstat(3,pcVar8,(stat *)&file_info);
      if ((-1 < iVar9) && ((pdVar10->d_name[0] != '.' || (pdVar10->d_name[1] == '.')))) {
        if ((file_info.st_mode & 0xf000) == 0x4000) {
          pcVar16 = (char *)malloc(sVar11 + 1);
          *(char **)((int)local_d138 + local_d13c * 4) = pcVar16;
          local_d13c = local_d13c + 1;
          strcpy(pcVar16,pcVar8);
        }
        else if (3 < sVar11) {
          iVar9 = sVar11 - 4;
          if ((pcVar8[iVar9] != '.') && (iVar9 = sVar11 - 3, pcVar8[iVar9] != '.')) {
            iVar9 = 0;
          }
          pcVar16 = *wildcards;
          if (pcVar16 != (char *)0x0) {
            ppcVar13 = wildcards;
            do {
              iVar12 = strcasecmp(pcVar8 + iVar9,pcVar16);
              ppfVar6 = file_info_cache.sorted;
              if (iVar12 == 0) {
                if (menu_state->config->file_list_display_type == 0) goto LAB_0809c614;
                if (file_info_cache.cached == (file_info_struct *)0x0) goto LAB_0809cd14;
                uVar33 = 0;
                uVar22 = file_info_cache.num_cached;
                goto joined_r0x0809ccc8;
              }
              ppcVar13 = ppcVar13 + 1;
              pcVar16 = *ppcVar13;
            } while (pcVar16 != (char *)0x0);
          }
        }
      }
      goto LAB_0809c674;
    }
LAB_0809c6d0:
    bVar36 = __nmemb == 0;
    local_d0f8 = (uint)!bVar36;
    sVar29 = (sVar29 + __nmemb) * 4;
    sVar11 = local_d13c << 2;
  }
  if ((__stream != (FILE *)0x0) && (fclose(__stream), local_d130 == 0)) {
    puts("Removing empty file info file.");
    unlink(".drastic_file_info.txt");
  }
  if (__stream_00 == (FILE *)0x0) {
    bVar36 = false;
  }
  local_d11c = __stream_00;
  if (bVar36) {
    puts("Removing empty icon cache file.");
    local_d11c = (FILE *)0x0;
    fclose(__stream_00);
    unlink(".drastic_icon_cache.bin");
  }
  ppcVar13 = (char **)realloc(pvVar7,sVar29);
  pvVar7 = realloc(local_d138,sVar11);
  qsort(ppcVar13,__nmemb,0xc,compare_file_names);
  qsort(pvVar7,local_d13c,4,compare_directory_names);
  closedir(__dirp);
  sVar29 = strlen(current_dir_name);
  if (sVar29 < 0x51) {
    snprintf(current_dir_short,0x50,"%s",current_dir_name);
  }
  else {
    __snprintf_chk(current_dir_short,0x50,1,0x51,"...%s",_file_label + sVar29 + 0x33);
  }
  if (__nmemb == 0) {
    local_d12c = 1;
    get_ticks_us(&ticks_end);
    dVar39 = (double)__aeabi_ul2d((uint)ticks_end - (uint)ticks_start,
                                  ticks_end._4_4_ -
                                  (ticks_start._4_4_ + (uint)((uint)ticks_end < (uint)ticks_start)))
    ;
    __printf_chk(1,"Directory load took %lf seconds.\n",SUB84(dVar39 / 1000000.0,0),
                 (int)((ulonglong)(dVar39 / 1000000.0) >> 0x20));
    uVar22 = 0;
    uVar33 = 0;
    local_d138 = (void *)0;
  }
  else {
    get_ticks_us(&ticks_end);
    dVar39 = (double)__aeabi_ul2d((uint)ticks_end - (uint)ticks_start,
                                  ticks_end._4_4_ -
                                  (ticks_start._4_4_ + (uint)((uint)ticks_end < (uint)ticks_start)))
    ;
    __printf_chk(1,"Directory load took %lf seconds.\n",SUB84(dVar39 / 1000000.0,0),
                 (int)((ulonglong)(dVar39 / 1000000.0) >> 0x20));
    uVar22 = (uint)(byte)*result;
    uVar33 = uVar22;
    local_d138 = (void *)uVar22;
    if (uVar22 != 0) {
      iVar9 = 0;
      uVar33 = 0;
      do {
        iVar12 = strcmp(*(char **)((int)ppcVar13 + iVar9),result);
        if (iVar12 == 0) {
          uVar22 = uVar33 - 0xe;
          if ((int)uVar22 < 0) {
            uVar22 = 0;
            local_d138 = (void *)uVar33;
          }
          else {
            local_d138 = (void *)0xe;
          }
          goto LAB_0809c86c;
        }
        uVar33 = uVar33 + 1;
        iVar9 = iVar9 + 0xc;
      } while (__nmemb != uVar33);
      uVar22 = 0;
      uVar33 = uVar22;
      local_d138 = (void *)uVar22;
    }
  }
LAB_0809c86c:
  local_d114 = uVar22 << 1;
  local_d134 = 0;
  local_d130 = 0;
  local_d128 = 0;
  *result = '\0';
  local_d124 = local_d12c ^ 1;
LAB_0809c8a4:
  print_string(current_dir_short,0xffff,0,6,4);
  uVar30 = 0x14;
  print_string(control_config_help_string_a,0xffff,0,6,0x1c2);
  print_string(control_config_help_string_b,0xffff,0,0x16e,0x1c2);
  print_string(control_config_help_string_c,0xffff,0,6,0x1d1);
  print_string(control_config_help_string_d,0xffff,0,0x16e,0x1d1);
  ppcVar28 = ppcVar13 + local_d114 + uVar22;
  current_file_number = uVar22;
  do {
    if (current_file_number < __nmemb) {
      name_buffer_ptr = ppcVar28[1];
      if (name_buffer_ptr == (char *)0x0) {
        name_buffer_ptr = *ppcVar28;
      }
      sVar29 = strlen(name_buffer_ptr);
      if (0x3f < sVar29) {
        name_buffer._0_4_ = *(undefined4 *)name_buffer_ptr;
        name_buffer._4_4_ = *(undefined4 *)(name_buffer_ptr + 4);
        name_buffer._8_4_ = *(undefined4 *)(name_buffer_ptr + 8);
        name_buffer._12_4_ = *(undefined4 *)(name_buffer_ptr + 0xc);
        name_buffer._16_4_ = *(undefined4 *)(name_buffer_ptr + 0x10);
        name_buffer._20_4_ = *(undefined4 *)(name_buffer_ptr + 0x14);
        name_buffer._24_4_ = *(undefined4 *)(name_buffer_ptr + 0x18);
        name_buffer._28_4_ = *(undefined4 *)(name_buffer_ptr + 0x1c);
        name_buffer._32_4_ = *(undefined4 *)(name_buffer_ptr + 0x20);
        name_buffer._36_4_ = *(undefined4 *)(name_buffer_ptr + 0x24);
        name_buffer._40_4_ = *(undefined4 *)(name_buffer_ptr + 0x28);
        name_buffer._44_4_ = *(undefined4 *)(name_buffer_ptr + 0x2c);
        name_buffer._48_4_ = *(undefined4 *)(name_buffer_ptr + 0x30);
        name_buffer._52_4_ = *(undefined4 *)(name_buffer_ptr + 0x34);
        name_buffer._56_4_ = *(undefined4 *)(name_buffer_ptr + 0x38);
        name_buffer._60_4_ = *(undefined4 *)(name_buffer_ptr + 0x3c);
        name_buffer_ptr = name_buffer;
        name_buffer[64] = '\0';
      }
      uVar32 = local_d124 & 1;
      if (uVar33 != current_file_number) {
        uVar32 = 0;
      }
      if (uVar32 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0x17;
      }
      print_string(name_buffer_ptr,0xffff,uVar17,10,uVar30);
    }
    uVar17 = icon_cache.num_cached;
    uVar30 = uVar30 + 0xf;
    current_file_number = current_file_number + 1;
    ppcVar28 = ppcVar28 + 3;
  } while (uVar30 != 0x1b8);
  if ((local_d0f8 & local_d124 & 1) == 0) {
    fill_screen_menu(0,0x244,0x118,0xa0,0xa0);
  }
  else {
    pcVar8 = ppcVar13[uVar33 * 3];
    if ((uVar33 < icon_cache.num_cached) &&
       (iVar9 = strcmp(pcVar8,icon_cache.file_names[uVar33]), iVar9 == 0)) {
      nds_icon = icon_cache.cached + uVar33;
LAB_0809cb40:
      if (nds_icon == (nds_icon_struct *)0x0) goto LAB_0809cec8;
    }
    else {
      if (uVar17 != 0) {
        uVar30 = 0;
        ppcVar28 = icon_cache.file_names + -1;
        do {
          ppcVar28 = ppcVar28 + 1;
          iVar9 = strcmp(pcVar8,*ppcVar28);
          if (iVar9 == 0) {
            nds_icon = icon_cache.cached + uVar30;
            goto LAB_0809cb40;
          }
          uVar30 = uVar30 + 1;
        } while (uVar17 != uVar30);
      }
LAB_0809cec8:
      __printf_chk(1,"Loading NDS icon for %s (%p)\n",pcVar8,local_d11c);
      sVar15 = nds_file_get_icon_data(pcVar8,(nds_icon_struct *)nds_icon_pixels);
      if (sVar15 != 0) {
        fill_screen_menu(0,0x244,0x118,0xa0,0xa0);
        goto LAB_0809cf1c;
      }
      nds_icon = icon_cache_add(&icon_cache,(FILE *)local_d11c,(nds_icon_struct *)nds_icon_pixels,
                                pcVar8);
    }
    nds_icon->palette[0] = 0xffff;
    local_d0fc = 0;
    puVar34 = nds_icon_pixels;
    do {
      uVar32 = 0;
      puVar26 = puVar34 + 0x1e0;
      puVar27 = puVar34 + 0x140;
      puVar31 = puVar34 + 0xa0;
      base_pixels = puVar34;
      puVar35 = puVar34 + 0x280;
      do {
        uVar19 = uVar32 >> 1;
        uVar18 = uVar32 & 1;
        uVar32 = uVar32 + 1;
        uVar19 = (uint)nds_icon->palette
                       [(int)(uint)nds_icon->pixels[uVar19 + local_d0fc] >> (uVar18 << 2) & 0xf];
        uVar2 = (ushort)((uVar19 << 0x11) >> 0x1b) | (ushort)((uVar19 & 0x1f) << 0xb) |
                (ushort)(((uVar19 << 0x16) >> 0x1b) << 6);
        *base_pixels = uVar2;
        base_pixels[1] = uVar2;
        base_pixels[2] = uVar2;
        base_pixels[3] = uVar2;
        base_pixels[4] = uVar2;
        *puVar31 = uVar2;
        puVar31[1] = uVar2;
        puVar31[2] = uVar2;
        puVar31[3] = uVar2;
        puVar31[4] = uVar2;
        *puVar27 = uVar2;
        puVar27[1] = uVar2;
        puVar27[2] = uVar2;
        puVar27[3] = uVar2;
        puVar27[4] = uVar2;
        *puVar26 = uVar2;
        puVar26[1] = uVar2;
        puVar26[2] = uVar2;
        puVar26[3] = uVar2;
        puVar26[4] = uVar2;
        *puVar35 = uVar2;
        puVar35[1] = uVar2;
        puVar35[2] = uVar2;
        puVar35[3] = uVar2;
        puVar35[4] = uVar2;
        puVar26 = puVar26 + 5;
        puVar27 = puVar27 + 5;
        puVar31 = puVar31 + 5;
        base_pixels = base_pixels + 5;
        puVar35 = puVar35 + 5;
      } while (uVar32 != 0x20);
      puVar34 = puVar34 + 800;
      local_d0fc = local_d0fc + 0x10;
    } while ((u16 *)seek_string != puVar34);
    blit_screen_menu(nds_icon_pixels,0x244,0x118,0xa0,0xa0);
  }
LAB_0809cf1c:
  uVar30 = 0x14;
  current_dir_number = local_d128;
  do {
    if (current_dir_number < local_d13c) {
      __s_00 = *(undefined4 **)((int)pvVar7 + current_dir_number * 4);
      sVar29 = strlen((char *)__s_00);
      if (0x10 < sVar29) {
        name_buffer._0_4_ = *__s_00;
        name_buffer._4_4_ = __s_00[1];
        name_buffer._8_4_ = __s_00[2];
        name_buffer._12_4_ = __s_00[3];
        puVar1 = __s_00 + 4;
        __s_00 = (undefined4 *)name_buffer;
        name_buffer._16_4_ = CONCAT31(SUB43(name_buffer._16_4_,1),*(undefined *)puVar1) & 0xffff00ff
        ;
      }
      uVar32 = local_d12c;
      if (current_dir_number != local_d130) {
        uVar32 = 0;
      }
      if (uVar32 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0x17;
      }
      print_string((char *)__s_00,0xffff,uVar17,0x24b,uVar30);
    }
    uVar30 = uVar30 + 0xf;
    current_dir_number = current_dir_number + 1;
  } while (uVar30 != 0x113);
  update_screen_menu();
  delay_us(5000);
  psVar23 = menu_state->system;
  if (psVar23->microphone_status == '\x02') {
    audio_capture_flush(&(psVar23->spu).audio);
    psVar23 = menu_state->system;
  }
  get_gui_input(&psVar23->input,&gui_input);
  switch(gui_input.action_type) {
  case 0:
    if (local_d12c == 0) {
      if (uVar33 != 0) {
        uVar33 = uVar33 - 1;
        if (local_d138 == (void *)0x0) {
          uVar22 = uVar22 - 1;
          local_d114 = uVar22 * 2;
        }
        else {
          local_d138 = (void *)((int)local_d138 - 1);
        }
      }
    }
    else {
      local_d124 = local_d130;
      if (local_d130 != 0) {
        local_d130 = local_d130 - 1;
        if (local_d134 == 0) {
          local_d12c = 1;
          local_d124 = local_d134;
          local_d128 = local_d128 - 1;
          clear_screen_menu(0);
        }
        else {
          local_d134 = local_d134 - 1;
          local_d12c = 1;
          local_d124 = 0;
          clear_screen_menu(0);
        }
        goto LAB_0809c8a4;
      }
      local_d12c = 1;
    }
    break;
  case 1:
    if (local_d12c != 0) {
      if (local_d130 < local_d13c - 1) {
        local_d130 = local_d130 + 1;
        if (local_d134 == 0x10) {
          local_d12c = 1;
          local_d128 = local_d128 + 1;
          local_d124 = 0;
          clear_screen_menu(0);
        }
        else {
          local_d12c = 1;
          local_d134 = local_d134 + 1;
          local_d124 = 0;
          clear_screen_menu(0);
        }
      }
      else {
        local_d12c = 1;
        local_d124 = 0;
        clear_screen_menu(0);
      }
      goto LAB_0809c8a4;
    }
    if (uVar33 < __nmemb - 1) {
      uVar33 = uVar33 + 1;
      if (local_d138 != (void *)0x1b) {
        local_d138 = (void *)((int)local_d138 + 1);
        clear_screen_menu(0);
        goto LAB_0809c8a4;
      }
      uVar22 = uVar22 + 1;
      local_d114 = uVar22 * 2;
    }
    break;
  case 2:
    local_d124 = local_d0f8 | local_d124 & 1;
    local_d12c = local_d124 ^ 1;
    clear_screen_menu(0);
    goto LAB_0809c8a4;
  case 3:
    local_d12c = (uint)((local_d13c | local_d12c) != 0);
    local_d124 = local_d12c ^ 1;
    clear_screen_menu(0);
    goto LAB_0809c8a4;
  case 4:
    if (local_d12c == 1) {
      iVar12 = chdir(*(char **)((int)pvVar7 + local_d130 * 4));
      iVar9 = 1;
      if (iVar12 < 0) {
        puts("Couldn\'t change directory.");
      }
      goto LAB_0809d794;
    }
    if (__nmemb != 0) {
      iVar9 = 0;
      local_d12c = 0;
      strcpy(result,ppcVar13[uVar33 * 3]);
LAB_0809d280:
      clear_screen_menu(0);
      goto LAB_0809d288;
    }
    local_d124 = 1;
    clear_screen_menu(0);
    local_d12c = 0;
    goto LAB_0809c8a4;
  case 5:
    iVar9 = -1;
    goto LAB_0809d794;
  case 6:
    goto switchD_0809d040_caseD_6;
  case 7:
    iVar9 = 0x1c;
    if (local_d12c == 0) {
      do {
        if (uVar33 != 0) {
          uVar33 = uVar33 - 1;
          if (local_d138 == (void *)0x0) {
            uVar22 = uVar22 - 1;
          }
          else {
            local_d138 = (void *)((int)local_d138 - 1);
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      local_d114 = uVar22 << 1;
      clear_screen_menu(0);
    }
    else {
      do {
        if (local_d130 != 0) {
          local_d130 = local_d130 - 1;
          if (local_d134 == 0) {
            local_d128 = local_d128 - 1;
          }
          else {
            local_d134 = local_d134 - 1;
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      clear_screen_menu(0);
    }
    goto LAB_0809c8a4;
  case 8:
    iVar9 = 0x1c;
    if (local_d12c == 0) {
      do {
        if (uVar33 < __nmemb - 1) {
          uVar33 = uVar33 + 1;
          if (local_d138 == (void *)0x1b) {
            uVar22 = uVar22 + 1;
          }
          else {
            local_d138 = (void *)((int)local_d138 + 1);
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      local_d114 = uVar22 << 1;
      clear_screen_menu(0);
    }
    else {
      do {
        if (local_d130 < local_d13c - 1) {
          local_d130 = local_d130 + 1;
          if (local_d134 == 0x10) {
            local_d128 = local_d128 + 1;
          }
          else {
            local_d134 = local_d134 + 1;
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      clear_screen_menu(0);
    }
    goto LAB_0809c8a4;
  case 9:
    if (__nmemb != 0) {
      iVar9 = 1;
      pcVar21 = menu_state->config;
      uVar22 = pcVar21->file_list_display_type + 1;
      pcVar21->file_list_display_type = uVar22;
      if (2 < uVar22) {
        pcVar21->file_list_display_type = 0;
      }
      strcpy(result,ppcVar13[uVar33 * 3]);
      goto LAB_0809d280;
    }
    break;
  case 10:
    goto switchD_0809d040_caseD_a;
  }
  clear_screen_menu(0);
  goto LAB_0809c8a4;
joined_r0x0809ccc8:
  uVar32 = uVar22;
  if (uVar33 < uVar32) {
    uVar22 = uVar33 + uVar32 >> 1;
    pfVar20 = ppfVar6[uVar22];
    iVar9 = strcmp(pcVar8,pfVar20->file_name);
    if (-1 < iVar9) {
      if (iVar9 == 0) {
        if (pfVar20->game_code == 0xffffffff) goto LAB_0809c614;
        pgVar14 = game_database_lookup_by_game_code
                            (&(menu_state->system->gamecard).game_database,pfVar20->game_code,
                             pfVar20->header_title);
        goto LAB_0809cd7c;
      }
      uVar33 = uVar22 + 1;
      uVar22 = uVar32;
    }
    goto joined_r0x0809ccc8;
  }
LAB_0809cd14:
  pgVar14 = gamecard_database_entry_for_file(&menu_state->system->gamecard,pcVar8);
  if (__stream == (FILE *)0x0) {
LAB_0809cd7c:
    if (pgVar14 == (game_database_entry_struct *)0x0) goto LAB_0809c614;
    if (menu_state->config->file_list_display_type != 1) {
      __s = _file_label;
      pvVar24 = (void *)((int)pvVar7 + (sVar29 + __nmemb) * 4);
      __sprintf_chk(_file_label,1,0x80,&DAT_0813f7d4,pgVar14->header_title,pgVar14->game_code);
      pcVar16 = (char *)malloc(sVar11 + 1);
      *(char **)((int)pvVar7 + (sVar29 + __nmemb) * 4) = pcVar16;
      strcpy(pcVar16,pcVar8);
LAB_0809cdbc:
      sVar29 = strlen(__s);
      file_label_length = sVar29 + 1;
      pcVar8 = (char *)malloc(file_label_length);
      *(char **)((int)pvVar24 + 4) = pcVar8;
      strcpy(pcVar8,__s);
      goto LAB_0809c638;
    }
    __s = pgVar14->title;
    pcVar16 = (char *)malloc(sVar11 + 1);
    *(char **)((int)pvVar7 + (sVar29 + __nmemb) * 4) = pcVar16;
    pvVar24 = (void *)((int)pvVar7 + (sVar29 + __nmemb) * 4);
    strcpy(pcVar16,pcVar8);
    if (__s != (char *)0x0) goto LAB_0809cdbc;
  }
  else {
    local_d130 = local_d130 + 1;
    if (pgVar14 != (game_database_entry_struct *)0x0) {
      escape_str(_file_label,pgVar14->header_title);
      __fprintf_chk(__stream,1,"%08x \'%s\' %s\n",pgVar14->game_code,_file_label,pcVar8);
      goto LAB_0809cd7c;
    }
    __fprintf_chk(__stream,1,"%08x \'\' %s\n",0xffffffff,pcVar8);
LAB_0809c614:
    pcVar16 = (char *)malloc(sVar11 + 1);
    *(char **)((int)pvVar7 + (sVar29 + __nmemb) * 4) = pcVar16;
    pvVar24 = (void *)((int)pvVar7 + (sVar29 + __nmemb) * 4);
    strcpy(pcVar16,pcVar8);
  }
  *(undefined4 *)((int)pvVar24 + 4) = 0;
LAB_0809c638:
  __nmemb = __nmemb + 1;
  sVar29 = __nmemb * 2;
LAB_0809c674:
  if (__nmemb == local_d128) {
    pvVar7 = realloc(pvVar7,(sVar29 + __nmemb) * 8);
    local_d128 = sVar29;
  }
  if (local_d13c != local_d124) goto LAB_0809c550;
  local_d124 = local_d13c << 1;
  local_d138 = realloc(local_d138,local_d13c << 3);
  pdVar10 = readdir(__dirp);
  if (pdVar10 == (dirent *)0x0) goto LAB_0809c6d0;
  goto LAB_0809c560;
switchD_0809d040_caseD_a:
  get_ticks_us(&current_ticks);
  uVar5 = current_ticks;
  uVar38 = VectorSub(current_ticks,uVar37,8);
  bVar36 = (int)((ulonglong)uVar38 >> 0x20) != 0;
  if ((bVar36 || 499999 < (uint)uVar38) && (bVar36 || (uint)uVar38 != 500000)) {
    iVar9 = 2;
    local_d110 = 1;
    uVar32 = 0;
LAB_0809d114:
    seek_string[uVar32] = (char)gui_input.key_letter;
    seek_string[iVar9] = '\0';
    if (local_d12c == 1) {
      if (local_d13c != 0) {
        uVar32 = 0;
        ppcVar28 = (char **)((int)pvVar7 + -4);
        do {
          ppcVar28 = ppcVar28 + 1;
          iVar9 = strncasecmp(*ppcVar28,seek_string,local_d110);
          if (iVar9 == 0) {
            local_d128 = uVar32 - 0xe;
            if ((int)local_d128 < 0) goto LAB_0809d4c4;
            local_d134 = 0xe;
            local_d130 = uVar32;
            break;
          }
          uVar32 = uVar32 + 1;
        } while (local_d13c != uVar32);
      }
    }
    else if (__nmemb != 0) {
      uVar32 = 0;
      ppcVar28 = ppcVar13;
      do {
        if (((ppcVar28[1] != (char *)0x0) &&
            (iVar9 = strncasecmp(ppcVar28[1],seek_string,local_d110), iVar9 == 0)) ||
           (iVar9 = strncasecmp(*ppcVar28,seek_string,local_d110), iVar9 == 0)) {
          uVar19 = uVar32 - 0xe;
          if ((int)uVar19 < 0) {
            if (local_d12c == 0) {
              uVar22 = 0;
              local_d114 = 0;
              uVar33 = uVar32;
              local_d138 = (void *)uVar32;
            }
            else {
LAB_0809d4c4:
              local_d128 = 0;
              local_d134 = uVar32;
              local_d130 = uVar32;
            }
          }
          else {
            local_d114 = uVar19 * 2;
            local_d138 = (void *)0xe;
            uVar22 = uVar19;
            uVar33 = uVar32;
          }
          break;
        }
        uVar32 = uVar32 + 1;
        ppcVar28 = ppcVar28 + 3;
      } while (__nmemb != uVar32);
    }
  }
  else if (local_d110 < 6) {
    iVar9 = local_d110 + 2;
    uVar32 = local_d110;
    local_d110 = local_d110 + 1;
    goto LAB_0809d114;
  }
  clear_screen_menu(0);
  uVar37 = uVar5;
  goto LAB_0809c8a4;
switchD_0809d040_caseD_6:
  iVar9 = chdir("..");
  if (iVar9 < 0) {
    iVar9 = 1;
    puts("Couldn\'t move up directory.");
  }
  else {
    iVar9 = 1;
  }
LAB_0809d794:
  clear_screen_menu(0);
  if (__nmemb != 0) {
LAB_0809d288:
    sVar29 = 0;
    ppcVar28 = ppcVar13;
    do {
      free(*ppcVar28);
      if (ppcVar28[1] != (char *)0x0) {
        free(ppcVar28[1]);
      }
      sVar29 = sVar29 + 1;
      ppcVar28 = ppcVar28 + 3;
    } while (__nmemb != sVar29);
  }
  free(ppcVar13);
  if (local_d13c != 0) {
    sVar29 = 0;
    ppvVar25 = (void **)((int)pvVar7 + -4);
    do {
      ppvVar25 = ppvVar25 + 1;
      sVar29 = sVar29 + 1;
      free(*ppvVar25);
    } while (local_d13c != sVar29);
  }
  free(pvVar7);
  if (file_info_cache.cached != (file_info_struct *)0x0) {
    if (file_info_cache.num_cached != 0) {
      iVar12 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        iVar3 = iVar12 + 0x10;
        iVar12 = iVar12 + 0x18;
        free(*(void **)((file_info_cache.cached)->header_title + iVar3));
      } while (uVar22 < file_info_cache.num_cached);
    }
    free(file_info_cache.cached);
    free(file_info_cache.sorted);
    file_info_cache.cached = (file_info_struct *)0x0;
    file_info_cache.sorted = (file_info_struct **)0x0;
    file_info_cache.num_cached = 0;
  }
  if (icon_cache.cached != (nds_icon_struct *)0x0) {
    free(icon_cache.cached);
  }
  if (icon_cache.num_cached != 0) {
    uVar22 = 0;
    do {
      ppcVar13 = icon_cache.file_names + uVar22;
      uVar22 = uVar22 + 1;
      free(*ppcVar13);
    } while (uVar22 < icon_cache.num_cached);
  }
  free(icon_cache.file_names);
  if (local_d11c != (FILE *)0x0) {
    fclose(local_d11c);
  }
  if (iVar9 != 1) {
    set_font_wide();
    clear_gui_actions();
    if (iVar4 == __stack_chk_guard) {
      return iVar9;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_0809c330;
}


