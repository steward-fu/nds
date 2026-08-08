/*
 * Ghidra decompilation
 *
 * Function : cheat_menu
 * Address  : 0809d9a4
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

s32 cheat_menu(menu_state_struct *menu_state)

{
  u8 **ppuVar1;
  bool bVar2;
  int iVar3;
  u64 uVar4;
  cheat_struct **__ptr;
  size_t sVar5;
  system_struct *psVar6;
  char *entry_name;
  cheat_struct *pcVar7;
  u32 uVar8;
  cheat_menu_entry_struct *current_menu_entry;
  cheat_struct **ppcVar9;
  cheat_menu_entry_struct *current_entry_1;
  cheat_folder_struct *folder_1;
  system_struct *psVar10;
  u32 uVar11;
  cheat_struct *pcVar12;
  cheat_struct *current_cheat;
  cheat_folder_struct *folder;
  s32 scroll_offset;
  int iVar13;
  char cVar14;
  u32 uVar15;
  u32 num_cheats_folders;
  cheat_struct **ppcVar16;
  u32 current_cheat_index;
  uint uVar17;
  cheat_menu_entry_struct *current_entry;
  uint uVar18;
  cheat_struct *pcVar19;
  cheat_struct *cheat;
  u32 *__s;
  char *name_buffer_ptr;
  u32 *str;
  uint uVar20;
  uint uVar21;
  cheat_struct *pcVar22;
  bool bVar23;
  u64 uVar24;
  undefined8 uVar25;
  cheat_menu_entry_struct *menu_entries;
  uint local_93c;
  int local_934;
  size_t local_92c;
  u64 current_ticks;
  gui_input_struct gui_input;
  char seek_string [7];
  char label_select [32];
  char label_exit [32];
  char help_str [128];
  char name_buffer [2048];
  
  iVar3 = __stack_chk_guard;
  psVar10 = menu_state->system;
  uVar15 = (psVar10->gamecard).cheat_directory.current_listing.num_folders;
  uVar24 = 0;
  uVar21 = 0;
  local_93c = 0;
  uVar20 = 0;
  local_934 = 0;
  local_92c = 0;
  bVar2 = false;
  uVar11 = (psVar10->gamecard).cheat_directory.current_listing.num_cheats;
  platform_print_code(label_select,(uint)(psVar10->config).controls_a[0x22]);
  platform_print_code(label_exit,(uint)(psVar10->config).controls_a[0x23]);
  clear_screen_menu(0);
  set_font_narrow();
  __ptr = (cheat_struct **)malloc((uVar11 + uVar15) * 0xc);
LAB_0809da74:
  __sprintf_chk(help_str,1,0x80,"%s: toggle cheat/folder    %s: return to main menu",label_select,
                label_exit);
  clear_gui_actions();
  uVar11 = (psVar10->gamecard).cheat_directory.current_listing.num_cheats;
  if (uVar11 == 0) {
    uVar18 = 0;
  }
  else {
    pcVar12 = (psVar10->gamecard).cheat_directory.current_listing.cheats;
    ppcVar16 = (cheat_struct **)0x0;
    pcVar7 = (cheat_struct *)0x0;
    uVar18 = 0;
    bVar23 = false;
    pcVar22 = pcVar12 + uVar11;
    ppcVar9 = __ptr;
    uVar11 = 0xffffffff;
    do {
      while (uVar15 = pcVar12->folder_id, uVar15 != uVar11) {
        if (uVar15 != 0xffffffff) {
          uVar18 = uVar18 + 1;
          pcVar7 = (cheat_struct *)
                   ((psVar10->gamecard).cheat_directory.current_listing.folders + uVar15);
          cVar14 = *(char *)pcVar7->data_length;
          if (cVar14 == '\0') {
            pcVar19 = (cheat_struct *)0x2;
          }
          else {
            pcVar19 = (cheat_struct *)0x1;
          }
          *ppcVar9 = pcVar7;
          ppcVar9[1] = pcVar19;
          ppcVar9[2] = (cheat_struct *)0x0;
          ppcVar16 = ppcVar9;
          ppcVar9 = ppcVar9 + 3;
          goto LAB_0809db14;
        }
LAB_0809db68:
        *ppcVar9 = pcVar12;
        pcVar12 = pcVar12 + 1;
        bVar23 = false;
        uVar18 = uVar18 + 1;
        ppcVar9[1] = (cheat_struct *)0x0;
        ppcVar9 = ppcVar9 + 3;
        uVar11 = uVar15;
        if (pcVar12 == pcVar22) goto LAB_0809db9c;
      }
      if (!bVar23) goto LAB_0809db68;
      cVar14 = *(char *)pcVar7->data_length;
LAB_0809db14:
      if (cVar14 != '\0') {
        uVar18 = uVar18 + 1;
        *ppcVar9 = pcVar12;
        ppcVar9[1] = (cheat_struct *)0x0;
        ppcVar9 = ppcVar9 + 3;
      }
      ppuVar1 = &pcVar12->enable_ptr;
      pcVar12 = pcVar12 + 1;
      bVar23 = true;
      if (**ppuVar1 != '\0') {
        ppcVar16[2] = (cheat_struct *)0x1;
      }
      uVar11 = uVar15;
    } while (pcVar12 != pcVar22);
  }
LAB_0809db9c:
  print_string(help_str,0xffff,0,6,0x1c2);
  uVar11 = 0x14;
  ppcVar9 = __ptr + local_934 + local_93c;
  menu_entries = (cheat_menu_entry_struct *)0x0;
  uVar17 = local_93c;
  do {
    if (uVar17 < uVar18) {
      if (uVar20 == uVar17) {
        if (ppcVar9[1] == (cheat_struct *)0x0) {
          cheat = *ppcVar9;
          uVar15 = 0x17;
          menu_entries = (cheat_menu_entry_struct *)cheat->note;
          goto LAB_0809dbe4;
        }
        pcVar7 = *ppcVar9;
        uVar15 = 0x17;
        menu_entries = (cheat_menu_entry_struct *)pcVar7->name;
      }
      else {
        if (ppcVar9[1] == (cheat_struct *)0x0) {
          cheat = *ppcVar9;
          uVar15 = 0;
LAB_0809dbe4:
          if (cheat->folder_id == 0xffffffff) {
            __sprintf_chk(name_buffer,1,0x800,"%s",cheat->name);
          }
          else {
            __sprintf_chk(name_buffer,1,0x800," %s",cheat->name);
          }
          sVar5 = strlen(name_buffer);
          if (0x46 < sVar5) {
            name_buffer[71] = '\0';
          }
          if (*cheat->enable_ptr == '\0') {
            print_string("disabled",0x80a1,uVar15,0x28a,uVar11);
            uVar8 = 0x7bef;
          }
          else {
            print_string("enabled",0x17e4,uVar15,0x28a,uVar11);
            uVar8 = 0xffff;
          }
          print_string(name_buffer,uVar8,uVar15,10,uVar11);
          goto LAB_0809dc68;
        }
        pcVar7 = *ppcVar9;
        uVar15 = 0;
      }
      __s = pcVar7->data;
      sVar5 = strlen((char *)__s);
      str = __s;
      if (0x46 < sVar5) {
        str = (u32 *)name_buffer;
        memcpy(str,__s,0x47);
        name_buffer[64] = '\0';
      }
      uVar8 = 0x9603;
      if (ppcVar9[2] == (cheat_struct *)0x0) {
        uVar8 = 0x4c42;
      }
      print_string((char *)str,uVar8,uVar15,10,uVar11);
    }
LAB_0809dc68:
    uVar11 = uVar11 + 0xf;
    uVar17 = uVar17 + 1;
    ppcVar9 = ppcVar9 + 3;
  } while (uVar11 != 0x19a);
  if (menu_entries != (cheat_menu_entry_struct *)0x0) {
    print_string((char *)menu_entries,0xffff,0,6,0x1a4);
  }
  update_screen_menu();
  delay_us(5000);
  psVar6 = menu_state->system;
  if (psVar6->microphone_status == '\x02') {
    audio_capture_flush(&(psVar6->spu).audio);
    psVar6 = menu_state->system;
  }
  get_gui_input(&psVar6->input,&gui_input);
  switch(gui_input.action_type) {
  case 0:
    if (uVar20 != 0) {
      uVar20 = uVar20 - 1;
      if (uVar21 == 0) {
        local_93c = local_93c - 1;
        local_934 = local_93c * 2;
      }
      else {
        uVar21 = uVar21 - 1;
      }
    }
    break;
  case 1:
    if (uVar20 < uVar18 - 1) {
      uVar20 = uVar20 + 1;
      if (uVar21 == 0x19) {
        local_93c = local_93c + 1;
        local_934 = local_93c * 2;
        clear_screen_menu(0);
        goto LAB_0809db9c;
      }
      uVar21 = uVar21 + 1;
    }
    break;
  case 4:
    goto switchD_0809ddb8_caseD_4;
  case 5:
    clear_screen_menu(0);
    free(__ptr);
    set_font_wide();
    clear_gui_actions();
    if (bVar2) {
      update_cheat_listing(&(menu_state->system->gamecard).cheat_directory);
      set_active_cheats(&(menu_state->system->gamecard).cheat_directory);
    }
    if (iVar3 == __stack_chk_guard) {
      return -1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 7:
    iVar13 = 0x1c;
    do {
      if (uVar20 != 0) {
        uVar20 = uVar20 - 1;
        if (uVar21 == 0) {
          local_93c = local_93c - 1;
        }
        else {
          uVar21 = uVar21 - 1;
        }
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    local_934 = local_93c << 1;
    clear_screen_menu(0);
    goto LAB_0809db9c;
  case 8:
    iVar13 = 0x1c;
    do {
      if (uVar20 < uVar18 - 1) {
        uVar20 = uVar20 + 1;
        if (uVar21 == 0x19) {
          local_93c = local_93c + 1;
        }
        else {
          uVar21 = uVar21 + 1;
        }
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    local_934 = local_93c << 1;
    clear_screen_menu(0);
    goto LAB_0809db9c;
  case 10:
    get_ticks_us(&current_ticks);
    uVar4 = current_ticks;
    uVar25 = VectorSub(current_ticks,uVar24,8);
    bVar23 = (int)((ulonglong)uVar25 >> 0x20) != 0;
    if ((bVar23 || 499999 < (uint)uVar25) && (bVar23 || (uint)uVar25 != 500000)) {
      iVar13 = 2;
      local_92c = 1;
      uVar17 = 0;
LAB_0809e064:
      seek_string[uVar17] = (char)gui_input.key_letter;
      seek_string[iVar13] = '\0';
      if (uVar18 != 0) {
        uVar17 = 0;
        ppcVar9 = __ptr + 1;
        do {
          if (*ppcVar9 == (cheat_struct *)0x0) {
            entry_name = ppcVar9[-1]->name;
          }
          else {
            entry_name = (char *)ppcVar9[-1]->data;
          }
          iVar13 = strncasecmp(entry_name,seek_string,local_92c);
          if (iVar13 == 0) {
            local_93c = uVar17 - 0xd;
            if ((int)local_93c < 0) {
              local_93c = 0;
              uVar21 = uVar17;
            }
            else {
              uVar21 = 0xd;
            }
            local_934 = local_93c << 1;
            uVar20 = uVar17;
            break;
          }
          uVar17 = uVar17 + 1;
          ppcVar9 = ppcVar9 + 3;
        } while (uVar17 != uVar18);
      }
    }
    else if (local_92c < 6) {
      iVar13 = local_92c + 2;
      uVar17 = local_92c;
      local_92c = local_92c + 1;
      goto LAB_0809e064;
    }
    clear_screen_menu(0);
    uVar24 = uVar4;
    goto LAB_0809db9c;
  }
  clear_screen_menu(0);
  goto LAB_0809db9c;
switchD_0809ddb8_caseD_4:
  current_entry_1 = (cheat_menu_entry_struct *)__ptr[uVar20 * 3 + 1];
  if (current_entry_1 == (cheat_menu_entry_struct *)0x0) {
    *__ptr[uVar20 * 3]->enable_ptr = *__ptr[uVar20 * 3]->enable_ptr ^ 1;
  }
  else {
    pcVar7 = __ptr[uVar20 * 3];
    *(byte *)pcVar7->data_length = *(byte *)pcVar7->data_length ^ 1;
    if (((*(char *)pcVar7->data_length != '\0') && ((char *)0x19 < pcVar7->note + uVar21)) &&
       (uVar21 != 0)) {
      do {
        uVar21 = uVar21 - 1;
        local_93c = local_93c + 1;
        if (pcVar7->note + uVar21 < (char *)0x1a) break;
      } while (uVar21 != 0);
      local_934 = local_93c * 2;
    }
  }
  bVar2 = true;
  clear_screen_menu(0);
  goto LAB_0809da74;
}


