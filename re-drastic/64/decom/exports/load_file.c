/*
 * Ghidra decompilation
 *
 * Function : load_file
 * Address  : 0017b3d0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int load_file(long *param_1,char **param_2,char *param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  char *pcVar10;
  FILE *__stream;
  FILE *__stream_00;
  DIR *__dirp;
  dirent *pdVar11;
  size_t sVar12;
  char **ppcVar13;
  char *pcVar14;
  char **ppcVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  char *pcVar19;
  void *pvVar20;
  ushort *puVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong __size;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  size_t __size_00;
  size_t __size_01;
  int *piVar36;
  uint local_d25c;
  void *local_d258;
  FILE *local_d250;
  ulong local_d220;
  long local_d210;
  uint local_d148;
  long local_d140;
  long lStack_d138;
  uint local_d130;
  undefined4 local_d12c;
  long local_d128;
  void *local_d120;
  void *local_d118;
  uint local_d110;
  void *local_d108;
  void *local_d100;
  uint local_d0f0;
  undefined *local_d0e8 [3];
  undefined auStack_d0d0 [128];
  undefined auStack_d050 [128];
  ushort local_cfd0 [24336];
  undefined auStack_11b0 [2528];
  ushort local_7d0;
  char acStack_7ce [6];
  undefined auStack_7c8 [32];
  undefined auStack_7a8 [32];
  undefined auStack_788 [32];
  undefined auStack_768 [32];
  undefined8 local_748;
  undefined8 uStack_740;
  undefined uStack_737;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined local_708;
  char acStack_700 [88];
  undefined auStack_6a8 [128];
  undefined auStack_628 [128];
  undefined auStack_5a8 [128];
  undefined auStack_528 [128];
  char acStack_4a8 [51];
  char acStack_475 [77];
  char acStack_428 [1056];
  long local_8;
  
  lVar22 = *param_1;
  local_8 = ___stack_chk_guard;
  local_d0e8[0] = PTR_s_filename_002603d8;
  local_d0e8[1] = PTR_s_title_002603e0;
  local_d0e8[2] = PTR_s_rom_title_002603e8;
  platform_print_code(auStack_7c8,*(undefined2 *)(lVar22 + 0x862ba));
  platform_print_code(auStack_7a8,*(undefined2 *)(lVar22 + 0x862bc));
  platform_print_code(auStack_788,*(undefined2 *)(lVar22 + 0x862be));
  platform_print_code(auStack_768,*(undefined2 *)(lVar22 + 0x862c4));
  clear_screen_menu(0);
  set_font_narrow();
  strcpy(param_3,(char *)(*param_1 + 0x8af80));
  uVar6 = 0;
  local_d210 = 0;
  local_d148 = 0;
LAB_0017b584:
  if (2 < *(uint *)(param_1[1] + 0x43c)) {
    *(undefined4 *)(param_1[1] + 0x43c) = 0;
  }
  __sprintf_chk(auStack_6a8,1,0x80,"%s: select",auStack_7c8);
  __sprintf_chk(auStack_628,1,0x80,"%s: return to main menu",auStack_7a8);
  __sprintf_chk(auStack_5a8,1,0x80,"%s: go up directory",auStack_788);
  __sprintf_chk(auStack_528,1,0x80,"%s: switch display (%s)",auStack_768,
                local_d0e8[*(uint *)(param_1[1] + 0x43c)]);
  get_ticks_us(&local_d140);
  clear_gui_actions();
  local_d258 = malloc(0x300);
  pvVar9 = malloc(0x100);
  pcVar10 = getcwd(acStack_428,0x400);
  if (pcVar10 == (char *)0x0) {
    puts("ERROR: Couldn\'t get current path.");
  }
  iVar5 = __xstat(0,"drastic_file_info.txt",(stat *)auStack_d050);
  if (iVar5 == 0) {
    puts("Renaming drastic_file_info.txt to .drastic_file_info.txt.");
    rename("drastic_file_info.txt",".drastic_file_info.txt");
  }
  iVar5 = __xstat(0,".drastic_file_info.txt",(stat *)auStack_d050);
  if ((iVar5 == 0) && ((long)auStack_d050._88_8_ < *(long *)(*param_1 + 0x338))) {
    puts("Found file info cache older than game database file. Deleting.");
    unlink(".drastic_file_info.txt");
  }
  file_info_cache_load(&local_d120);
  icon_cache_load(&local_d108);
  __stream = fopen(".drastic_file_info.txt","ab");
  __stream_00 = fopen(".drastic_icon_cache.bin","ab");
  __dirp = opendir(acStack_428);
  uVar7 = local_d110;
  if (__dirp == (DIR *)0x0) {
    __size_01 = 0;
    bVar4 = true;
    uVar30 = 0;
    __size_00 = 0;
    sVar12 = 0;
    uVar24 = 0;
    local_d25c = 0;
    local_d220._0_4_ = 0;
  }
  else {
    uVar30 = 0x20;
    uVar24 = 0;
    local_d25c = 0;
    uVar27 = 0x20;
    local_d220 = 0;
LAB_0017b718:
    __size_01 = local_d220 << 3;
    pdVar11 = readdir(__dirp);
    if (pdVar11 != (dirent *)0x0) {
      do {
        pcVar10 = pdVar11->d_name;
        sVar12 = strlen(pcVar10);
        iVar5 = __xstat(0,pcVar10,(stat *)auStack_d0d0);
        if ((-1 < iVar5) && ((pdVar11->d_name[0] != '.' || (pdVar11->d_name[1] == '.')))) {
          uVar26 = (uint)sVar12;
          if ((auStack_d0d0._16_4_ & 0xf000) == 0x4000) {
            pcVar14 = (char *)malloc((ulong)(uVar26 + 1));
            *(char **)((long)pvVar9 + __size_01) = pcVar14;
            local_d25c = local_d25c + 1;
            local_d220 = (ulong)local_d25c;
            strcpy(pcVar14,pcVar10);
          }
          else if (3 < uVar26) {
            pcVar14 = pcVar10 + (uVar26 - 4);
            if ((pcVar10[uVar26 - 4] != '.') &&
               (pcVar14 = pcVar10 + (uVar26 - 3), pcVar10[uVar26 - 3] != '.')) {
              pcVar14 = pcVar10;
            }
            pcVar19 = *param_2;
            if (pcVar19 != (char *)0x0) {
              uVar32 = 0;
LAB_0017c4f8:
              iVar5 = strcasecmp(pcVar14,pcVar19);
              pvVar20 = local_d118;
              if (iVar5 != 0) goto LAB_0017c4e8;
              __size = (ulong)(uVar26 + 1);
              ppcVar13 = (char **)((long)local_d258 + (ulong)uVar24 * 0x18);
              if (*(int *)(param_1[1] + 0x43c) == 0) goto LAB_0017c520;
              if (local_d120 != (void *)0x0) {
                uVar28 = 0;
                uVar23 = (ulong)local_d110;
                while (uVar25 = uVar23, uVar28 < uVar25) {
                  while( true ) {
                    uVar23 = uVar25 + uVar28 >> 1;
                    piVar36 = *(int **)((long)pvVar20 + uVar23 * 8);
                    iVar5 = strcmp(pcVar10,*(char **)(piVar36 + 6));
                    if (iVar5 < 0) break;
                    if (iVar5 == 0) {
                      if (*piVar36 == -1) goto LAB_0017c520;
                      ppcVar15 = (char **)game_database_lookup_by_game_code
                                                    (*param_1 + 800,*piVar36,piVar36 + 1);
                      goto joined_r0x0017c7cc;
                    }
                    uVar28 = uVar23 + 1;
                    if (uVar25 <= uVar28) goto LAB_0017c6d4;
                  }
                }
              }
LAB_0017c6d4:
              ppcVar15 = (char **)gamecard_database_entry_for_file(*param_1 + 800,pcVar10);
              if (__stream == (FILE *)0x0) {
joined_r0x0017c7cc:
                if (ppcVar15 == (char **)0x0) goto LAB_0017c520;
                if (*(int *)(param_1[1] + 0x43c) == 1) {
                  pcVar14 = *ppcVar15;
                  pcVar19 = (char *)malloc(__size);
                  *ppcVar13 = pcVar19;
                  strcpy(pcVar19,pcVar10);
                  if (pcVar14 != (char *)0x0) goto LAB_0017c770;
                  ppcVar13[1] = (char *)0x0;
                }
                else {
                  __sprintf_chk(acStack_4a8,1,0x80,
                                "%-12s                                        %08x",ppcVar15 + 1,
                                *(undefined4 *)((long)ppcVar15 + 0x24));
                  pcVar14 = (char *)malloc(__size);
                  *ppcVar13 = pcVar14;
                  strcpy(pcVar14,pcVar10);
                  pcVar14 = acStack_4a8;
LAB_0017c770:
                  sVar12 = strlen(pcVar14);
                  pcVar10 = (char *)malloc((ulong)((int)sVar12 + 1));
                  ppcVar13[1] = pcVar10;
                  strcpy(pcVar10,pcVar14);
                }
              }
              else {
                uVar7 = uVar7 + 1;
                if (ppcVar15 != (char **)0x0) {
                  escape_str(acStack_4a8,ppcVar15 + 1);
                  __fprintf_chk(__stream,1,"%08x \'%s\' %s\n",*(undefined4 *)((long)ppcVar15 + 0x24)
                                ,acStack_4a8,pcVar10);
                  goto joined_r0x0017c7cc;
                }
                __fprintf_chk(__stream,1,"%08x \'\' %s\n",0xffffffff,pcVar10);
LAB_0017c520:
                pcVar14 = (char *)malloc(__size);
                *ppcVar13 = pcVar14;
                strcpy(pcVar14,pcVar10);
                ppcVar13[1] = (char *)0x0;
              }
              uVar24 = uVar24 + 1;
            }
          }
        }
joined_r0x0017c544:
        if (uVar24 == uVar27) {
          uVar27 = uVar24 * 2;
          local_d258 = realloc(local_d258,(ulong)uVar24 * 0x30);
        }
        if ((uint)uVar30 != local_d25c) goto LAB_0017b718;
        pvVar9 = realloc(pvVar9,uVar30 << 4);
        uVar30 = (ulong)((uint)uVar30 * 2);
        __size_01 = local_d220 << 3;
        pdVar11 = readdir(__dirp);
        if (pdVar11 == (dirent *)0x0) break;
      } while( true );
    }
    uVar30 = local_d220;
    bVar4 = uVar24 == 0;
    __size_00 = (ulong)uVar24 * 0x18;
    sVar12 = (size_t)uVar24;
    local_d220._0_4_ = (uint)!bVar4;
  }
  if ((__stream != (FILE *)0x0) && (fclose(__stream), uVar7 == 0)) {
    puts("Removing empty file info file.");
    unlink(".drastic_file_info.txt");
  }
  local_d250 = __stream_00;
  if (__stream_00 != (FILE *)0x0 && bVar4) {
    puts("Removing empty icon cache file.");
    local_d250 = (FILE *)0x0;
    fclose(__stream_00);
    unlink(".drastic_icon_cache.bin");
  }
  ppcVar13 = (char **)realloc(local_d258,__size_00);
  pvVar9 = realloc(pvVar9,__size_01);
  qsort(ppcVar13,sVar12,0x18,compare_file_names);
  qsort(pvVar9,uVar30,8,compare_directory_names);
  closedir(__dirp);
  sVar12 = strlen(acStack_428);
  if (sVar12 < 0x51) {
    snprintf(acStack_700,0x50,"%s",acStack_428);
  }
  else {
    iVar5 = __snprintf_chk(acStack_700,0x50,1,0x51,"...%s",acStack_428 + (sVar12 - 0x4d));
    if (iVar5 < 0) {
      puts("sprintf error warrning to make GCC shut up");
    }
  }
  if (uVar24 == 0) {
    get_ticks_us(&lStack_d138);
    uVar27 = 0;
    uVar26 = 0;
    uVar6 = 1;
    uVar7 = 0;
    __printf_chk((double)(unkuint9)(ulong)(lStack_d138 - local_d140) / 1000000.0,1,
                 "Directory load took %lf seconds.\n");
  }
  else {
    get_ticks_us(&lStack_d138);
    __printf_chk((double)(unkuint9)(ulong)(lStack_d138 - local_d140) / 1000000.0,1,
                 "Directory load took %lf seconds.\n");
    if (*param_3 != '\0') {
      uVar7 = 0;
      ppcVar15 = ppcVar13;
      do {
        iVar5 = strcmp(*ppcVar15,param_3);
        if (iVar5 == 0) {
          uVar26 = uVar7 - 0xe;
          uVar27 = 0xe;
          if ((int)uVar26 < 0) {
            uVar26 = 0;
            uVar27 = uVar7;
          }
          goto LAB_0017b9b8;
        }
        uVar7 = uVar7 + 1;
        ppcVar15 = ppcVar15 + 3;
      } while (uVar24 != uVar7);
    }
    uVar27 = 0;
    uVar26 = 0;
    uVar7 = 0;
  }
LAB_0017b9b8:
  uVar34 = uVar6 ^ 1;
  uVar31 = 0;
  uVar35 = 0;
  uVar32 = 0;
  *param_3 = '\0';
LAB_0017b9d4:
  print_string(acStack_700,0xffff,0,6,4);
  print_string(auStack_6a8,0xffff,0,6,0x1c2);
  print_string(auStack_628,0xffff,0,0x16e,0x1c2);
  print_string(auStack_5a8,0xffff,0,6,0x1d1);
  print_string(auStack_528,0xffff,0,0x16e,0x1d1);
  iVar5 = 0x14;
  uVar29 = uVar26;
  do {
    if (uVar29 < uVar24) {
      puVar17 = (undefined8 *)ppcVar13[(ulong)uVar29 * 3 + 1];
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)ppcVar13[(ulong)uVar29 * 3];
      }
      sVar12 = strlen((char *)puVar17);
      if (0x3f < sVar12) {
        local_748 = *puVar17;
        uStack_740 = puVar17[1];
        uStack_730 = puVar17[3];
        uStack_737 = (undefined)((ulong)puVar17[2] >> 8);
        local_728 = puVar17[4];
        uStack_720 = puVar17[5];
        local_718 = puVar17[6];
        uStack_710 = puVar17[7];
        local_708 = 0;
        puVar17 = &local_748;
      }
      uVar16 = 0x17;
      if ((uVar34 & 1) == 0 || uVar7 != uVar29) {
        uVar16 = 0;
      }
      print_string(puVar17,0xffff,uVar16,10,iVar5);
    }
    uVar1 = local_d0f0;
    pvVar20 = local_d100;
    iVar5 = iVar5 + 0xf;
    uVar29 = uVar29 + 1;
  } while (iVar5 != 0x1b8);
  uVar30 = (ulong)uVar7;
  if ((uint)local_d220 == 0 || (uVar34 & 1) == 0) {
LAB_0017bc90:
    fill_screen_menu(0,0x244,0x118,0xa0);
  }
  else {
    pcVar10 = ppcVar13[uVar30 * 3];
    if (uVar7 < local_d0f0) {
      iVar5 = strcmp(pcVar10,*(char **)((long)local_d100 + uVar30 * 8));
      if (iVar5 != 0) {
LAB_0017bb88:
        lVar22 = 0;
        do {
          iVar5 = strcmp(pcVar10,*(char **)((long)pvVar20 + lVar22 * 8));
          if (iVar5 == 0) {
            pvVar20 = (void *)((long)local_d108 + lVar22 * 800);
            goto LAB_0017bbf8;
          }
          lVar22 = lVar22 + 1;
        } while ((uint)lVar22 < uVar1);
        goto LAB_0017bc5c;
      }
      pvVar20 = (void *)((long)local_d108 + uVar30 * 800);
LAB_0017bbf8:
      if (pvVar20 == (void *)0x0) goto LAB_0017bc5c;
    }
    else {
      if (local_d0f0 != 0) goto LAB_0017bb88;
LAB_0017bc5c:
      __printf_chk(1,"Loading NDS icon for %s (%p)\n",pcVar10,local_d250);
      iVar5 = nds_file_get_icon_data(pcVar10,auStack_d050 + 0x80);
      if (iVar5 != 0) goto LAB_0017bc90;
      pvVar20 = (void *)icon_cache_add(&local_d108,local_d250,auStack_d050 + 0x80,pcVar10);
    }
    iVar5 = 0;
    *(undefined2 *)((long)pvVar20 + 0x200) = 0xffff;
    puVar21 = (ushort *)(auStack_d050 + 0x80);
    do {
      uVar29 = 0;
      puVar18 = puVar21;
      do {
        uVar1 = uVar29 >> 1;
        uVar3 = uVar29 & 1;
        uVar29 = uVar29 + 1;
        uVar2 = *(ushort *)
                 ((long)pvVar20 +
                 (((ulong)(uint)((int)(uint)*(byte *)((long)pvVar20 + (ulong)(iVar5 + uVar1)) >>
                                (uVar3 << 2)) & 0xf) + 0x100) * 2);
        uVar2 = (ushort)((uVar2 >> 5 & 0x1f) << 6) |
                uVar2 >> 10 & 0x1f | (ushort)((uVar2 & 0x1f) << 0xb);
        *puVar18 = uVar2;
        puVar18[1] = uVar2;
        puVar18[2] = uVar2;
        puVar18[3] = uVar2;
        puVar18[4] = uVar2;
        puVar18[0xa0] = uVar2;
        puVar18[0xa1] = uVar2;
        puVar18[0xa2] = uVar2;
        puVar18[0xa3] = uVar2;
        puVar18[0xa4] = uVar2;
        puVar18[0x140] = uVar2;
        puVar18[0x141] = uVar2;
        puVar18[0x142] = uVar2;
        puVar18[0x143] = uVar2;
        puVar18[0x144] = uVar2;
        puVar18[0x1e0] = uVar2;
        puVar18[0x1e1] = uVar2;
        puVar18[0x1e2] = uVar2;
        puVar18[0x1e3] = uVar2;
        puVar18[0x1e4] = uVar2;
        puVar18[0x280] = uVar2;
        puVar18[0x281] = uVar2;
        puVar18[0x282] = uVar2;
        puVar18[0x283] = uVar2;
        puVar18[0x284] = uVar2;
        puVar18 = puVar18 + 5;
      } while (uVar29 != 0x20);
      puVar21 = puVar21 + 800;
      iVar5 = iVar5 + 0x10;
    } while (puVar21 != &local_7d0);
    blit_screen_menu(auStack_d050 + 0x80,0x244,0x118,0xa0);
  }
  iVar5 = 0x14;
  uVar29 = uVar35;
  do {
    if (uVar29 < local_d25c) {
      puVar17 = *(undefined8 **)((long)pvVar9 + (ulong)uVar29 * 8);
      sVar12 = strlen((char *)puVar17);
      if (0x10 < sVar12) {
        local_748 = *puVar17;
        uStack_740 = puVar17[1];
        uStack_737 = 0;
        puVar17 = &local_748;
      }
      uVar1 = uVar6 & 1;
      if (uVar32 != uVar29) {
        uVar1 = 0;
      }
      uVar16 = 0x17;
      if (uVar1 == 0) {
        uVar16 = 0;
      }
      print_string(puVar17,0xffff,uVar16,0x24b,iVar5);
    }
    iVar5 = iVar5 + 0xf;
    uVar29 = uVar29 + 1;
  } while (iVar5 != 0x113);
  update_screen_menu();
  update_screen_menu();
  update_screen_menu();
  delay_us(5000);
  lVar22 = *param_1;
  do {
    get_gui_input(lVar22 + 0x5550,&local_d130);
  } while (local_d130 == 0xb);
  if (local_d130 == 5) {
    iVar5 = -1;
LAB_0017bfe0:
    clear_screen_menu(0);
    if (uVar24 == 0) goto LAB_0017c024;
    goto LAB_0017bfec;
  }
  if (local_d130 < 6) {
    if (local_d130 == 2) {
      uVar34 = (uint)local_d220 | uVar34 & 1;
      uVar6 = uVar34 ^ 1;
      clear_screen_menu(0);
      goto LAB_0017b9d4;
    }
    if (2 < local_d130) {
      if (local_d130 != 3) {
        if (uVar6 == 1) {
          iVar8 = chdir(*(char **)((long)pvVar9 + (ulong)uVar32 * 8));
          iVar5 = 1;
          if (iVar8 < 0) {
            puts("Couldn\'t change directory.");
          }
          goto LAB_0017bfe0;
        }
        if (uVar24 == 0) {
LAB_0017bdc4:
          uVar6 = 0;
          goto LAB_0017bdc8;
        }
        iVar5 = 0;
        strcpy(param_3,ppcVar13[(ulong)uVar7 * 3]);
        goto LAB_0017c19c;
      }
      bVar4 = (local_d25c | uVar6) == 0;
      uVar34 = (uint)bVar4;
      clear_screen_menu(0);
      uVar6 = (uint)!bVar4;
      goto LAB_0017b9d4;
    }
    if (local_d130 == 0) {
      if (uVar6 == 0) {
        if (uVar7 == 0) goto LAB_0017bdc4;
        uVar7 = uVar7 - 1;
        if (uVar27 == 0) {
          uVar26 = uVar26 - 1;
          uVar34 = 1;
          clear_screen_menu(0);
          uVar6 = uVar27;
        }
        else {
          uVar27 = uVar27 - 1;
          clear_screen_menu(0);
        }
        goto LAB_0017b9d4;
      }
      if (uVar32 != 0) {
        uVar32 = uVar32 - 1;
        if (uVar31 == 0) {
          uVar35 = uVar35 - 1;
          clear_screen_menu(0);
        }
        else {
          uVar31 = uVar31 - 1;
          clear_screen_menu(0);
        }
        goto LAB_0017b9d4;
      }
    }
    else {
      if (local_d130 != 1) goto LAB_0017bdcc;
      if (uVar6 == 0) {
        if (uVar7 < uVar24 - 1) {
          uVar7 = uVar7 + 1;
          if (uVar27 == 0x1b) {
            uVar26 = uVar26 + 1;
            clear_screen_menu(0);
          }
          else {
            uVar27 = uVar27 + 1;
            clear_screen_menu(0);
          }
          goto LAB_0017b9d4;
        }
      }
      else if (uVar32 < local_d25c - 1) {
        uVar32 = uVar32 + 1;
        if (uVar31 == 0x10) {
          uVar35 = uVar35 + 1;
          clear_screen_menu(0);
        }
        else {
          uVar31 = uVar31 + 1;
          clear_screen_menu(0);
        }
        goto LAB_0017b9d4;
      }
    }
  }
  else if (local_d130 == 8) {
    if (uVar6 == 0) {
      uVar6 = 0x1c;
      do {
        if (uVar7 < uVar24 - 1) {
          uVar7 = uVar7 + 1;
          if (uVar27 == 0x1b) {
            uVar26 = uVar26 + 1;
          }
          else {
            uVar27 = uVar27 + 1;
          }
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
LAB_0017bdc8:
      uVar34 = 1;
    }
    else {
      iVar5 = 0x1c;
      do {
        if (uVar32 < local_d25c - 1) {
          uVar32 = uVar32 + 1;
          if (uVar31 == 0x10) {
            uVar35 = uVar35 + 1;
          }
          else {
            uVar31 = uVar31 + 1;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (local_d130 < 9) {
    if (local_d130 == 6) {
      iVar5 = 1;
      iVar8 = chdir("..");
      if (iVar8 < 0) {
        puts("Couldn\'t move up directory.");
      }
      goto LAB_0017bfe0;
    }
    if (local_d130 == 7) {
      if (uVar6 != 0) {
        iVar5 = 0x1c;
        do {
          if (uVar32 != 0) {
            uVar32 = uVar32 - 1;
            if (uVar31 == 0) {
              uVar35 = uVar35 - 1;
            }
            else {
              uVar31 = uVar31 - 1;
            }
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        clear_screen_menu(0);
        goto LAB_0017b9d4;
      }
      iVar5 = 0x1c;
      do {
        if (uVar7 != 0) {
          uVar7 = uVar7 - 1;
          if (uVar27 == 0) {
            uVar26 = uVar26 - 1;
          }
          else {
            uVar27 = uVar27 - 1;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar34 = 1;
      uVar6 = 0;
    }
  }
  else if (local_d130 == 9) {
    if (uVar24 != 0) goto code_r0x0017c164;
  }
  else if (local_d130 == 10) {
    get_ticks_us(&local_d128);
    lVar22 = local_d128;
    if ((ulong)(local_d128 - local_d210) < 0x7a121) {
      if (local_d148 < 6) {
        uVar29 = local_d148 + 2;
        uVar30 = (ulong)local_d148;
        local_d148 = local_d148 + 1;
        goto LAB_0017be38;
      }
    }
    else {
      uVar30 = 0;
      local_d148 = 1;
      uVar29 = 2;
LAB_0017be38:
      *(char *)((long)&local_7d0 + uVar30) = (char)local_d12c;
      *(char *)((long)&local_7d0 + (ulong)uVar29) = '\0';
      if (uVar6 == 1) {
        if (local_d25c != 0) {
          lVar33 = 0;
          do {
            iVar5 = strncasecmp(*(char **)((long)pvVar9 + lVar33 * 8),(char *)&local_7d0,
                                (ulong)local_d148);
            if (iVar5 == 0) {
              uVar32 = (uint)lVar33;
              uVar35 = uVar32 - 0xe;
              uVar31 = 0xe;
              if ((int)uVar35 < 0) {
                uVar35 = 0;
                uVar31 = uVar32;
              }
              break;
            }
            lVar33 = lVar33 + 1;
          } while ((uint)lVar33 < local_d25c);
        }
      }
      else {
        ppcVar15 = ppcVar13;
        uVar29 = uVar6;
        if (uVar24 != 0) {
          do {
            if (((ppcVar15[1] != (char *)0x0) &&
                (iVar5 = strncasecmp(ppcVar15[1],(char *)&local_7d0,(ulong)local_d148), iVar5 == 0))
               || (iVar5 = strncasecmp(*ppcVar15,(char *)&local_7d0,(ulong)local_d148), iVar5 == 0))
            {
              uVar7 = uVar29;
              uVar26 = uVar29 - 0xe;
              uVar27 = 0xe;
              if ((int)(uVar29 - 0xe) < 0) {
                uVar26 = uVar6;
                uVar27 = uVar29;
              }
              break;
            }
            uVar29 = uVar29 + 1;
            ppcVar15 = ppcVar15 + 3;
          } while (uVar24 != uVar29);
        }
      }
    }
    local_d210 = lVar22;
    clear_screen_menu(0);
    goto LAB_0017b9d4;
  }
LAB_0017bdcc:
  clear_screen_menu(0);
  goto LAB_0017b9d4;
LAB_0017c4e8:
  uVar32 = uVar32 + 1;
  pcVar19 = param_2[uVar32];
  if (pcVar19 == (char *)0x0) goto joined_r0x0017c544;
  goto LAB_0017c4f8;
code_r0x0017c164:
  iVar5 = 1;
  pcVar10 = ppcVar13[(ulong)uVar7 * 3];
  uVar7 = *(int *)(param_1[1] + 0x43c) + 1;
  if (2 < uVar7) {
    uVar7 = 0;
  }
  *(uint *)(param_1[1] + 0x43c) = uVar7;
  strcpy(param_3,pcVar10);
LAB_0017c19c:
  clear_screen_menu(0);
LAB_0017bfec:
  ppcVar15 = ppcVar13;
  do {
    free(*ppcVar15);
    if (ppcVar15[1] != (char *)0x0) {
      free(ppcVar15[1]);
    }
    ppcVar15 = ppcVar15 + 3;
  } while (ppcVar15 != ppcVar13 + (ulong)(uVar24 - 1) * 3 + 3);
LAB_0017c024:
  lVar22 = 0;
  free(ppcVar13);
  if (local_d25c != 0) {
    do {
      lVar33 = lVar22 * 8;
      lVar22 = lVar22 + 1;
      free(*(void **)((long)pvVar9 + lVar33));
    } while ((uint)lVar22 < local_d25c);
  }
  free(pvVar9);
  if (local_d120 != (void *)0x0) {
    if (local_d110 != 0) {
      uVar30 = 0;
      do {
        lVar22 = uVar30 * 0x20;
        uVar7 = (int)uVar30 + 1;
        uVar30 = (ulong)uVar7;
        free(*(void **)((long)local_d120 + lVar22 + 0x18));
      } while (uVar7 < local_d110);
    }
    free(local_d120);
    free(local_d118);
    local_d120 = (void *)0x0;
    local_d118 = (void *)0x0;
    local_d110 = 0;
  }
  if (local_d108 != (void *)0x0) {
    free(local_d108);
  }
  uVar30 = 0;
  if (local_d0f0 != 0) {
    do {
      lVar22 = uVar30 * 8;
      uVar7 = (int)uVar30 + 1;
      uVar30 = (ulong)uVar7;
      free(*(void **)((long)local_d100 + lVar22));
    } while (uVar7 < local_d0f0);
  }
  free(local_d100);
  if (local_d250 != (FILE *)0x0) {
    uVar7 = fclose(local_d250);
    local_d250 = (FILE *)(ulong)uVar7;
  }
  if (iVar5 != 1) {
    set_font_wide(local_d250);
    clear_gui_actions();
    if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,auStack_11b0,local_8 - ___stack_chk_guard,0);
    }
    return iVar5;
  }
  goto LAB_0017b584;
}


