/*
 * Ghidra decompilation
 *
 * Function : FUN_08062bc8
 * Address  : 08062bc8
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_08062bc8(int *param_1,char **param_2,char *param_3)

{
  ushort uVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  DIR *__dirp;
  dirent *pdVar5;
  size_t sVar6;
  int iVar7;
  char **ppcVar8;
  int **ppiVar9;
  uint **ppuVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  ushort *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  void *pvVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  char **ppcVar27;
  void **ppvVar28;
  size_t sVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  uint uVar32;
  bool bVar33;
  double dVar34;
  uint local_ceb0;
  void *local_ceac;
  size_t local_cea8;
  size_t local_cea4;
  uint local_cea0;
  uint local_ce9c;
  size_t local_ce98;
  size_t local_ce94;
  uint local_ce8c;
  size_t local_ce84;
  FILE *local_ce7c;
  int local_ce70;
  int local_ce6c;
  int local_ce68;
  uint local_ce64;
  uint *apuStack_ce50 [2];
  char local_ce48 [8];
  uint local_ce40;
  int iStack_ce3c;
  uint local_ce38;
  int iStack_ce34;
  uint uStack_ce30;
  undefined4 local_ce2c;
  void *pvStack_ce28;
  void *local_ce24;
  size_t local_ce20;
  char *apcStack_ce1c [3];
  void *pvStack_ce10;
  void *local_ce0c;
  uint local_ce04;
  undefined4 local_ce00 [4];
  undefined local_cdf0;
  undefined local_cdef;
  undefined local_cdc0;
  char acStack_cdbc [84];
  stat sStack_cd68;
  stat sStack_cd10;
  char acStack_ccb8 [51];
  undefined auStack_cc85 [77];
  char acStack_cc38 [1024];
  uint local_c838;
  int local_c834;
  char *local_c824;
  
  uVar20 = 0;
  iVar19 = 0;
  apcStack_ce1c[0] = "filename";
  apcStack_ce1c[1] = "title";
  apcStack_ce1c[2] = "rom-title";
  local_ce84 = 0;
  FUN_08077374(0);
  FUN_080771cc();
  strcpy(param_3,(char *)(*param_1 + 0x82430));
  uVar24 = 0;
LAB_08062c30:
  uVar16 = *(uint *)(param_1[1] + 0x43c);
  if (2 < uVar16) {
    uVar16 = 0;
    *(undefined4 *)(param_1[1] + 0x43c) = 0;
  }
  sprintf(acStack_ccb8,"X: return to main menu       Y: switch display (%s)",apcStack_ce1c[uVar16]);
  FUN_0807b7f0(&local_ce40);
  FUN_08079b48();
  pvVar2 = malloc(0x180);
  local_ceac = malloc(0x80);
  pcVar3 = getcwd(acStack_cc38,0x400);
  if (pcVar3 == (char *)0x0) {
    puts("ERROR: Couldn\'t get current path.");
  }
  iVar4 = __xstat(3,"drastic_file_info.txt",&sStack_cd10);
  if (iVar4 == 0) {
    puts("Renaming drastic_file_info.txt to .drastic_file_info.txt.");
    rename("drastic_file_info.txt",".drastic_file_info.txt");
  }
  iVar4 = __xstat(3,".drastic_file_info.txt",&sStack_cd10);
  if ((iVar4 == 0) && (sStack_cd10.st_mtim.tv_sec < *(int *)(*param_1 + 0x1ac))) {
    puts("Found file info cache older than game database file. Deleting.");
    unlink(".drastic_file_info.txt");
  }
  FUN_080624c0(&pvStack_ce28);
  FUN_080627d0(apcStack_ce1c + 3);
  __stream = fopen(".drastic_file_info.txt","ab");
  local_ce7c = fopen(".drastic_icon_cache.bin","ab");
  __dirp = opendir(acStack_cc38);
  local_cea0 = local_ce20;
  if (__dirp == (DIR *)0x0) {
    local_ce64 = 1;
    sVar6 = 0;
    sVar29 = 0;
    local_cea8 = 0;
    local_ce98 = 0;
    local_ce8c = 0;
  }
  else {
    local_cea8 = 0;
    local_cea4 = 0x20;
    sVar29 = 0;
    local_ce98 = 0;
    local_ce94 = 0x20;
LAB_08062de4:
    pdVar5 = readdir(__dirp);
    if (pdVar5 != (dirent *)0x0) {
      do {
        pcVar3 = pdVar5->d_name;
        sVar6 = strlen(pcVar3);
        iVar4 = __xstat(3,pcVar3,&sStack_cd68);
        if ((-1 < iVar4) && ((pdVar5->d_name[0] != '.' || (pdVar5->d_name[1] == '.')))) {
          if ((sStack_cd68.st_mode & 0xf000) == 0x4000) {
            pcVar11 = (char *)malloc(sVar6 + 1);
            *(char **)((int)local_ceac + local_cea8 * 4) = pcVar11;
            local_cea8 = local_cea8 + 1;
            strcpy(pcVar11,pcVar3);
          }
          else if (3 < sVar6) {
            iVar4 = sVar6 - 4;
            if ((pcVar3[iVar4] != '.') && (iVar4 = sVar6 - 3, pcVar3[iVar4] != '.')) {
              iVar4 = 0;
            }
            pcVar11 = *param_2;
            if (pcVar11 != (char *)0x0) {
              ppcVar8 = param_2;
              do {
                iVar7 = strcasecmp(pcVar3 + iVar4,pcVar11);
                if (iVar7 == 0) {
                  if (*(int *)(param_1[1] + 0x43c) == 0) {
LAB_08062ed4:
                    pcVar11 = (char *)malloc(sVar6 + 1);
                    pvVar21 = (void *)((int)pvVar2 + (sVar29 + local_ce98) * 4);
                    *(char **)((int)pvVar2 + (sVar29 + local_ce98) * 4) = pcVar11;
                    strcpy(pcVar11,pcVar3);
LAB_08062ef0:
                    *(undefined4 *)((int)pvVar21 + 4) = 0;
                  }
                  else {
                    puVar26 = &local_c838;
                    local_c824 = pcVar3;
                    apuStack_ce50[0] = puVar26;
                    if (((pvStack_ce28 == (void *)0x0) ||
                        (ppiVar9 = (int **)bsearch(apuStack_ce50,local_ce24,local_ce20,4,
                                                   FUN_08061814), ppiVar9 == (int **)0x0)) ||
                       (piVar14 = *ppiVar9, piVar14 == (int *)0x0)) {
                      ppuVar10 = (uint **)FUN_0805b6d4(*param_1 + 0x1a0,pcVar3);
                      if (__stream != (FILE *)0x0) {
                        local_cea0 = local_cea0 + 1;
                        if (ppuVar10 == (uint **)0x0) {
                          fprintf(__stream,"%08x \'\' %s\n",0xffffffff,pcVar3);
                          goto LAB_08062ed4;
                        }
                        FUN_0805df24(puVar26,ppuVar10 + 1);
                        fprintf(__stream,"%08x \'%s\' %s\n",ppuVar10[8],puVar26,pcVar3);
                      }
                    }
                    else {
                      if (*piVar14 == -1) goto LAB_08062ed4;
                      ppuVar10 = (uint **)FUN_0805f474(*param_1 + 0x1a0,*piVar14,piVar14 + 1);
                    }
                    if (ppuVar10 == (uint **)0x0) goto LAB_08062ed4;
                    if (*(int *)(param_1[1] + 0x43c) == 1) {
                      puVar26 = *ppuVar10;
                      pcVar11 = (char *)malloc(sVar6 + 1);
                      pvVar21 = (void *)((int)pvVar2 + (sVar29 + local_ce98) * 4);
                      *(char **)((int)pvVar2 + (sVar29 + local_ce98) * 4) = pcVar11;
                      strcpy(pcVar11,pcVar3);
                      if (puVar26 != (uint *)0x0) goto LAB_080633e4;
                      goto LAB_08062ef0;
                    }
                    sprintf((char *)puVar26,"%-12s                                        %08x",
                            ppuVar10 + 1,ppuVar10[8]);
                    pcVar11 = (char *)malloc(sVar6 + 1);
                    pvVar21 = (void *)((int)pvVar2 + (sVar29 + local_ce98) * 4);
                    *(char **)((int)pvVar2 + (sVar29 + local_ce98) * 4) = pcVar11;
                    strcpy(pcVar11,pcVar3);
LAB_080633e4:
                    sVar29 = strlen((char *)puVar26);
                    pcVar3 = (char *)malloc(sVar29 + 1);
                    *(char **)((int)pvVar21 + 4) = pcVar3;
                    strcpy(pcVar3,(char *)puVar26);
                  }
                  local_ce98 = local_ce98 + 1;
                  sVar29 = local_ce98 * 2;
                  break;
                }
                ppcVar8 = ppcVar8 + 1;
                pcVar11 = *ppcVar8;
              } while (pcVar11 != (char *)0x0);
            }
          }
        }
        if (local_ce98 == local_ce94) {
          pvVar2 = realloc(pvVar2,(sVar29 + local_ce98) * 8);
          local_ce94 = sVar29;
        }
        if (local_cea8 != local_cea4) goto LAB_08062de4;
        local_ceac = realloc(local_ceac,local_cea8 << 3);
        local_cea4 = local_cea8 << 1;
        pdVar5 = readdir(__dirp);
        if (pdVar5 == (dirent *)0x0) break;
      } while( true );
    }
    sVar29 = (sVar29 + local_ce98) * 4;
    sVar6 = local_cea8 << 2;
    local_ce64 = (uint)(local_ce98 == 0);
    local_ce8c = (uint)(local_ce98 != 0);
  }
  if ((__stream != (FILE *)0x0) && (fclose(__stream), local_cea0 == 0)) {
    puts("Removing empty file info file.");
    unlink(".drastic_file_info.txt");
  }
  uVar16 = local_ce64;
  if (local_ce7c == (FILE *)0x0) {
    uVar16 = 0;
  }
  if (uVar16 != 0) {
    puts("Removing empty icon cache file.");
    fclose(local_ce7c);
    local_ce7c = (FILE *)0x0;
    unlink(".drastic_icon_cache.bin");
  }
  ppcVar8 = (char **)realloc(pvVar2,sVar29);
  pvVar2 = realloc(local_ceac,sVar6);
  qsort(ppcVar8,local_ce98,0xc,FUN_0806179c);
  qsort(pvVar2,local_cea8,4,FUN_08061768);
  closedir(__dirp);
  sVar29 = strlen(acStack_cc38);
  if (sVar29 < 0x51) {
    snprintf(acStack_cdbc,0x50,"%s",acStack_cc38);
  }
  else {
    snprintf(acStack_cdbc,0x50,"...%s",auStack_cc85 + sVar29);
  }
  if (local_ce64 != 0) {
    uVar24 = 1;
  }
  FUN_0807b7f0(&local_ce38);
  dVar34 = (double)__aeabi_ul2d(local_ce38 - local_ce40,
                                iStack_ce34 - (iStack_ce3c + (uint)(local_ce38 < local_ce40)));
  printf("Directory load took %lf seconds.\n",(int)((ulonglong)dVar34 >> 0x20),
         SUB84(dVar34 / 1000000.0,0),(int)((ulonglong)(dVar34 / 1000000.0) >> 0x20));
  if (*param_3 == '\0') {
    uVar16 = 0;
    local_ceb0 = 0;
    local_ceac = (void *)0;
  }
  else {
    uVar16 = local_ce98;
    local_ceb0 = local_ce98;
    local_ceac = (void *)local_ce98;
    if (local_ce98 != 0) {
      iVar4 = 0;
      uVar16 = 0;
      do {
        ppcVar27 = (char **)((int)ppcVar8 + iVar4);
        iVar4 = iVar4 + 0xc;
        iVar7 = strcmp(*ppcVar27,param_3);
        if (iVar7 == 0) {
          if ((int)(uVar16 - 0xe) < 0) {
            local_ceb0 = 0;
            local_ceac = (void *)uVar16;
          }
          else {
            local_ceb0 = uVar16 - 0xe;
            local_ceac = (void *)0xe;
          }
          goto LAB_08063178;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != local_ce98);
      uVar16 = 0;
      local_ceb0 = uVar16;
      local_ceac = (void *)uVar16;
    }
  }
LAB_08063178:
  local_ce94 = uVar24 ^ 1;
  local_cea0 = 0;
  local_cea4 = 0;
  local_ce6c = local_ceb0 << 1;
  local_ce9c = 0;
  local_ce70 = 0;
  *param_3 = '\0';
LAB_080631cc:
  FUN_08076bb8(acStack_cdbc,0xffff,0,6,4);
  iVar4 = 0;
  FUN_08076bb8(acStack_ccb8,0xffff,0,6,0x1c2);
  iVar7 = 0x14;
  uVar25 = local_ceb0;
  do {
    if (uVar25 < local_ce98) {
      puVar22 = *(undefined4 **)((int)ppcVar8 + iVar4 + (local_ce6c + local_ceb0) * 4 + 4);
      if (puVar22 == (undefined4 *)0x0) {
        puVar22 = *(undefined4 **)((int)ppcVar8 + iVar4 + (local_ce6c + local_ceb0) * 4);
      }
      sVar29 = strlen((char *)puVar22);
      if (0x3f < sVar29) {
        puVar23 = local_ce00;
        puVar30 = puVar22;
        do {
          puVar31 = puVar30 + 4;
          uVar12 = puVar30[1];
          uVar13 = puVar30[2];
          uVar17 = puVar30[3];
          *puVar23 = *puVar30;
          puVar23[1] = uVar12;
          puVar23[2] = uVar13;
          puVar23[3] = uVar17;
          puVar23 = puVar23 + 4;
          puVar30 = puVar31;
        } while (puVar31 != puVar22 + 0x10);
        local_cdc0 = 0;
        puVar22 = local_ce00;
      }
      FUN_08076bb8(puVar22,0xffff);
    }
    uVar32 = local_ce04;
    iVar7 = iVar7 + 0xf;
    uVar25 = uVar25 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar7 != 0x1b8);
  if ((local_ce94 & 1 & local_ce8c) == 0) {
    FUN_08077524(0,0x244,0x118,0xa0,0xa0);
  }
  else {
    pcVar3 = ppcVar8[uVar16 * 3];
    if ((uVar16 < local_ce04) &&
       (iVar4 = strcmp(pcVar3,*(char **)((int)local_ce0c + uVar16 * 4)), iVar4 == 0)) {
      pvVar21 = (void *)(uVar16 * 800 + (int)pvStack_ce10);
LAB_0806347c:
      if (pvVar21 == (void *)0x0) goto LAB_080636d0;
    }
    else {
      if (uVar32 != 0) {
        uVar25 = 0;
        ppcVar27 = (char **)((int)local_ce0c + -4);
        do {
          ppcVar27 = ppcVar27 + 1;
          iVar4 = strcmp(pcVar3,*ppcVar27);
          if (iVar4 == 0) {
            pvVar21 = (void *)(uVar25 * 800 + (int)pvStack_ce10);
            goto LAB_0806347c;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar32);
      }
LAB_080636d0:
      printf("Loading NDS icon for %s (%p)\n",pcVar3,local_ce7c);
      iVar4 = FUN_08061250(pcVar3,&local_c838);
      if (iVar4 != 0) {
        FUN_08077524(0,0x244,0x118,0xa0,0xa0);
        goto LAB_0806371c;
      }
      pvVar21 = (void *)FUN_080629b8(apcStack_ce1c + 3,local_ce7c,&local_c838,pcVar3);
    }
    *(undefined2 *)((int)pvVar21 + 0x200) = 0xffff;
    local_ce68 = 0;
    puVar26 = &local_c838;
    do {
      iVar4 = 0;
      uVar25 = 0;
      do {
        uVar32 = uVar25 >> 1;
        uVar18 = uVar25 & 1;
        uVar25 = uVar25 + 1;
        uVar32 = (uint)*(ushort *)
                        ((int)pvVar21 +
                        (((int)(uint)*(byte *)((int)pvVar21 + uVar32 + local_ce68) >> (uVar18 << 2)
                         & 0xfU) + 0x100) * 2);
        uVar1 = (ushort)((uVar32 & 0x1f) << 0xb) | (ushort)((uVar32 << 0x11) >> 0x1b) |
                (ushort)(((uVar32 << 0x16) >> 0x1b) << 6);
        puVar15 = (ushort *)((int)puVar26 + iVar4);
        *puVar15 = uVar1;
        puVar15[1] = uVar1;
        puVar15[2] = uVar1;
        iVar4 = iVar4 + 10;
        puVar15[3] = uVar1;
        puVar15[4] = uVar1;
        puVar15[0xa0] = uVar1;
        puVar15[0xa1] = uVar1;
        puVar15[0xa2] = uVar1;
        puVar15[0xa3] = uVar1;
        puVar15[0xa4] = uVar1;
        puVar15[0x140] = uVar1;
        puVar15[0x141] = uVar1;
        puVar15[0x142] = uVar1;
        puVar15[0x143] = uVar1;
        puVar15[0x144] = uVar1;
        puVar15[0x1e0] = uVar1;
        puVar15[0x1e1] = uVar1;
        puVar15[0x1e2] = uVar1;
        puVar15[0x1e3] = uVar1;
        puVar15[0x1e4] = uVar1;
        puVar15[0x280] = uVar1;
        puVar15[0x281] = uVar1;
        puVar15[0x282] = uVar1;
        puVar15[0x283] = uVar1;
        puVar15[0x284] = uVar1;
      } while (uVar25 != 0x20);
      puVar26 = puVar26 + 400;
      local_ce68 = local_ce68 + 0x10;
    } while (local_ce68 != 0x200);
    FUN_080776fc(&local_c838,0x244,0x118,0xa0,0xa0);
  }
LAB_0806371c:
  iVar4 = 0;
  iVar7 = 0x14;
  uVar25 = local_cea4;
  do {
    if (uVar25 < local_cea8) {
      puVar22 = *(undefined4 **)((int)pvVar2 + iVar4 + local_ce70);
      sVar29 = strlen((char *)puVar22);
      if (0x10 < sVar29) {
        local_ce00[0] = *puVar22;
        local_ce00[3] = puVar22[3];
        local_ce00[1] = puVar22[1];
        local_ce00[2] = puVar22[2];
        local_cdf0 = *(undefined *)(puVar22 + 4);
        local_cdef = 0;
        puVar22 = local_ce00;
      }
      uVar32 = uVar24 & 1;
      if (uVar25 != local_ce9c) {
        uVar32 = 0;
      }
      if (uVar32 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x17;
      }
      FUN_08076bb8(puVar22,0xffff,uVar12,0x24b,iVar7);
    }
    iVar7 = iVar7 + 0xf;
    uVar25 = uVar25 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar7 != 0x113);
  FUN_0807b0dc();
  usleep(5000);
  if (*(char *)(*param_1 + 0x2916467) == '\x02') {
    FUN_08078bf4(*param_1 + 0x155e000);
  }
  FUN_08079b70(&uStack_ce30);
  switch(uStack_ce30) {
  case 0:
    if (uVar24 == 0) {
      if (uVar16 != 0) {
        uVar16 = uVar16 - 1;
        if (local_ceac == (void *)0x0) {
          local_ceb0 = local_ceb0 - 1;
          local_ce6c = local_ceb0 * 2;
        }
        else {
          local_ceac = (void *)((int)local_ceac - 1);
        }
      }
    }
    else {
      if (local_ce9c != 0) {
        local_ce9c = local_ce9c - 1;
        if (local_cea0 == 0) {
          uVar24 = 1;
          local_cea4 = local_cea4 - 1;
          local_ce94 = local_cea0;
          local_ce70 = local_cea4 * 4;
          FUN_08077374(0);
        }
        else {
          uVar24 = 1;
          local_cea0 = local_cea0 - 1;
          local_ce94 = 0;
          FUN_08077374(0);
        }
        goto LAB_080631cc;
      }
      local_ce94 = local_ce9c;
      uVar24 = 1;
    }
    break;
  case 1:
    if (uVar24 != 0) {
      if (local_cea8 - 1 <= local_ce9c) goto LAB_08063e74;
      local_ce9c = local_ce9c + 1;
      if (local_cea0 == 0x10) {
        uVar24 = 1;
        local_cea4 = local_cea4 + 1;
        local_ce94 = 0;
        local_ce70 = local_cea4 * 4;
        FUN_08077374(0);
      }
      else {
        uVar24 = 1;
        local_cea0 = local_cea0 + 1;
        local_ce94 = 0;
        FUN_08077374(0);
      }
      goto LAB_080631cc;
    }
    if (uVar16 < local_ce98 - 1) {
      uVar16 = uVar16 + 1;
      if (local_ceac == (void *)0x1b) {
        local_ceb0 = local_ceb0 + 1;
        local_ce6c = local_ceb0 * 2;
      }
      else {
        local_ceac = (void *)((int)local_ceac + 1);
      }
      FUN_08077374(0);
      goto LAB_080631cc;
    }
    break;
  case 2:
    if (uVar24 == 1) {
      local_ce94 = local_ce64 ^ 1;
      FUN_08077374(0);
      uVar24 = local_ce64;
      goto LAB_080631cc;
    }
    local_ce94 = 1;
    uVar24 = 0;
    break;
  case 3:
    if (uVar24 == 0) {
      uVar24 = local_cea8;
      if (local_cea8 != 0) {
        uVar24 = 1;
      }
      local_ce94 = uVar24 ^ 1;
      FUN_08077374(0);
    }
    else {
LAB_08063e74:
      local_ce94 = 0;
      FUN_08077374(0);
      uVar24 = 1;
    }
    goto LAB_080631cc;
  case 4:
    goto switchD_08063820_caseD_4;
  case 5:
    iVar4 = chdir("..");
    if (iVar4 < 0) {
      puts("Couldn\'t move up directory.");
    }
LAB_08063dec:
    uVar25 = 1;
    goto LAB_08063ab0;
  case 6:
    uVar25 = 0xffffffff;
    goto LAB_08063ab0;
  case 7:
    iVar4 = 0x1c;
    if (uVar24 == 0) {
      do {
        if (uVar16 != 0) {
          uVar16 = uVar16 - 1;
          if (local_ceac == (void *)0x0) {
            local_ceb0 = local_ceb0 - 1;
          }
          else {
            local_ceac = (void *)((int)local_ceac - 1);
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_ce6c = local_ceb0 << 1;
      FUN_08077374(0);
    }
    else {
      do {
        if (local_ce9c != 0) {
          local_ce9c = local_ce9c - 1;
          if (local_cea0 == 0) {
            local_cea4 = local_cea4 - 1;
          }
          else {
            local_cea0 = local_cea0 - 1;
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_ce70 = local_cea4 << 2;
      FUN_08077374(0);
    }
    goto LAB_080631cc;
  case 8:
    if (uVar24 == 0) {
      iVar4 = 0x1c;
      do {
        if (uVar16 < local_ce98 - 1) {
          uVar16 = uVar16 + 1;
          if (local_ceac == (void *)0x1b) {
            local_ceb0 = local_ceb0 + 1;
          }
          else {
            local_ceac = (void *)((int)local_ceac + 1);
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_ce6c = local_ceb0 << 1;
      FUN_08077374(0);
    }
    else {
      iVar4 = 0x1c;
      do {
        if (local_ce9c < local_cea8 - 1) {
          local_ce9c = local_ce9c + 1;
          if (local_cea0 == 0x10) {
            local_cea4 = local_cea4 + 1;
          }
          else {
            local_cea0 = local_cea0 + 1;
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_ce70 = local_cea4 << 2;
      FUN_08077374(0);
    }
    goto LAB_080631cc;
  case 9:
    uVar25 = 1;
    iVar4 = param_1[1];
    uVar32 = *(int *)(iVar4 + 0x43c) + 1;
    *(uint *)(iVar4 + 0x43c) = uVar32;
    if (2 < uVar32) {
      *(undefined4 *)(iVar4 + 0x43c) = 0;
    }
    strcpy(param_3,ppcVar8[uVar16 * 3]);
LAB_08063ab0:
    FUN_08077374(0);
    if (local_ce8c == 0) goto LAB_08063afc;
    goto LAB_08063ac4;
  case 10:
    FUN_0807b7f0(&local_c838);
    iVar4 = local_c834;
    uVar25 = local_c838;
    bVar33 = local_c834 != iVar19 + (uint)(local_c838 < uVar20);
    if ((bVar33 || 499999 < local_c838 - uVar20) && (bVar33 || local_c838 - uVar20 != 500000)) {
      iVar19 = 2;
      local_ce84 = 1;
      uVar20 = 0;
LAB_08063964:
      uVar32 = 0;
      local_ce48[uVar20] = (char)local_ce2c;
      local_ce48[iVar19] = '\0';
      if (uVar24 == 1) {
        if (local_cea8 != 0) {
          ppcVar27 = (char **)((int)pvVar2 + -4);
          do {
            ppcVar27 = ppcVar27 + 1;
            iVar19 = strncasecmp(*ppcVar27,local_ce48,local_ce84);
            if (iVar19 == 0) goto LAB_08063a44;
            uVar32 = uVar32 + 1;
          } while (uVar32 != local_cea8);
        }
      }
      else {
        ppcVar27 = ppcVar8;
        if (local_ce8c != 0) {
          do {
            if ((ppcVar27[1] != (char *)0x0) &&
               (iVar19 = strncasecmp(ppcVar27[1],local_ce48,local_ce84), iVar19 == 0))
            goto LAB_08063a44;
            iVar19 = strncasecmp(*ppcVar27,local_ce48,local_ce84);
            if (iVar19 == 0) goto LAB_08063a44;
            uVar32 = uVar32 + 1;
            ppcVar27 = ppcVar27 + 3;
          } while (uVar32 < local_ce98);
        }
      }
    }
    else if (local_ce84 < 6) {
      iVar19 = local_ce84 + 2;
      uVar20 = local_ce84;
      local_ce84 = local_ce84 + 1;
      goto LAB_08063964;
    }
    goto LAB_080639e0;
  }
  FUN_08077374(0);
  goto LAB_080631cc;
LAB_08063a44:
  uVar20 = uVar32 - 0xe;
  if ((int)uVar20 < 0) {
    uVar20 = 0;
    uVar18 = uVar32;
  }
  else {
    uVar18 = 0xe;
  }
  if (uVar24 == 0) {
    local_ce6c = uVar20 << 1;
    uVar16 = uVar32;
    local_ceb0 = uVar20;
    local_ceac = (void *)uVar18;
  }
  else {
    local_ce70 = uVar20 << 2;
    local_cea4 = uVar20;
    local_cea0 = uVar18;
    local_ce9c = uVar32;
  }
LAB_080639e0:
  FUN_08077374(0);
  uVar20 = uVar25;
  iVar19 = iVar4;
  goto LAB_080631cc;
switchD_08063820_caseD_4:
  if (uVar24 == 1) {
    iVar4 = chdir(*(char **)((int)pvVar2 + local_ce9c * 4));
    if (-1 < iVar4) goto LAB_08063dec;
    puts("Couldn\'t change directory.");
    uVar25 = 1;
    goto LAB_08063ab0;
  }
  if (local_ce8c == 0) {
    local_ce94 = 1;
    FUN_08077374(0);
    uVar24 = 0;
    goto LAB_080631cc;
  }
  uVar25 = 0;
  strcpy(param_3,ppcVar8[uVar16 * 3]);
  FUN_08077374(0);
  uVar24 = uVar25;
LAB_08063ac4:
  iVar4 = 0;
  uVar16 = 0;
  do {
    uVar16 = uVar16 + 1;
    ppvVar28 = (void **)((int)ppcVar8 + iVar4);
    iVar4 = iVar4 + 0xc;
    free(*ppvVar28);
    pvVar21 = ppvVar28[1];
    if (pvVar21 != (void *)0x0) {
      free(pvVar21);
    }
  } while (uVar16 < local_ce98);
LAB_08063afc:
  free(ppcVar8);
  if (local_cea8 != 0) {
    sVar29 = 0;
    ppvVar28 = (void **)((int)pvVar2 + -4);
    do {
      ppvVar28 = ppvVar28 + 1;
      sVar29 = sVar29 + 1;
      free(*ppvVar28);
    } while (sVar29 != local_cea8);
  }
  free(pvVar2);
  if (pvStack_ce28 != (void *)0x0) {
    if (local_ce20 != 0) {
      uVar16 = 0;
      iVar4 = 0;
      do {
        uVar16 = uVar16 + 1;
        free(*(void **)((int)pvStack_ce28 + iVar4 + 0x14));
        iVar4 = iVar4 + 0x18;
      } while (uVar16 < local_ce20);
    }
    free(pvStack_ce28);
    free(local_ce24);
    local_ce24 = (void *)0x0;
    pvStack_ce28 = (void *)0x0;
    local_ce20 = 0;
  }
  if (pvStack_ce10 != (void *)0x0) {
    free(pvStack_ce10);
  }
  if (local_ce04 != 0) {
    uVar16 = 0;
    do {
      iVar4 = uVar16 * 4;
      uVar16 = uVar16 + 1;
      free(*(void **)((int)local_ce0c + iVar4));
    } while (uVar16 < local_ce04);
  }
  free(local_ce0c);
  if (local_ce7c != (FILE *)0x0) {
    fclose(local_ce7c);
  }
  if (uVar25 != 1) {
    FUN_080771b4();
    FUN_08079b48();
    return uVar25;
  }
  goto LAB_08062c30;
}


