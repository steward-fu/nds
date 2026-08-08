/*
 * Ghidra decompilation
 *
 * Function : FUN_080725a8
 * Address  : 080725a8
 * Program  : drastic16
 */


void FUN_080725a8(int *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  ushort **ppuVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  char *__s1;
  ushort *puVar23;
  char cVar24;
  char *__s;
  uint uVar25;
  int iVar26;
  char **ppcVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  ushort *puVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  short *psVar36;
  uint uVar37;
  bool bVar38;
  undefined8 uVar39;
  uint local_29c;
  uint local_28c;
  char *apcStack_278 [4];
  char *local_268;
  char *local_264 [15];
  char local_228 [256];
  undefined *local_128 [65];
  
  iVar5 = param_1[0x48];
  param_1[0x48] = param_2;
  param_1[0x49] = iVar5;
  iVar5 = *param_1;
  switch(*(undefined *)((int)param_1 + 0x131)) {
  case 0:
switchD_080725d0_caseD_0:
    iVar20 = iVar5 + 0x2380;
    FUN_08071f34(param_1,param_3);
    memset(apcStack_278 + 4,0,0x40);
    iVar16 = param_1[0x4a];
    bVar4 = true;
    if (iVar16 == 0) goto LAB_08072fd4;
LAB_080726d8:
    param_1[0x4a] = iVar16 + -1;
    pcVar6 = strcpy(local_228,(char *)(param_1 + 1));
    do {
      if (pcVar6 == (char *)0x0) goto LAB_08072fbc;
      local_268 = local_228;
      pcVar6 = strchr(local_268,0x20);
      if (pcVar6 == (char *)0x0) {
        __s = local_228;
        uVar15 = 1;
        __s1 = __s;
      }
      else {
        ppcVar27 = apcStack_278 + 4;
        uVar15 = 1;
        do {
          __s = pcVar6 + 1;
          *pcVar6 = '\0';
          ppcVar27 = ppcVar27 + 1;
          *ppcVar27 = __s;
          uVar15 = uVar15 + 1;
          pcVar6 = strchr(__s,0x20);
          pcVar17 = pcVar6;
          if (pcVar6 != (char *)0x0) {
            pcVar17 = (char *)0x1;
          }
          if (0xf < uVar15) {
            pcVar17 = (char *)0x0;
          }
          __s1 = local_268;
        } while (pcVar17 != (char *)0x0);
      }
      sVar7 = strlen(__s);
      __s[sVar7 - 1] = '\0';
      iVar16 = strcmp(__s1,"break");
      if ((iVar16 == 0) && (uVar15 - 1 < 2)) {
        if (uVar15 == 2) {
          param_1[0x46] = param_1[0x44];
          param_1[0x47] = param_1[0x45];
          if (((*local_264[0] == 'l') && (local_264[0][1] == 'r')) && (local_264[0][2] == '\0')) {
            uVar37 = *(uint *)(*param_1 + 0x2364);
            param_1[0x45] = 0;
            param_1[0x44] = uVar37 & 0xfffffffe;
          }
          else {
            uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
            param_1[0x45] = 0;
            param_1[0x44] = uVar9;
          }
        }
        *(undefined *)((int)param_1 + 0x131) = 3;
        bVar4 = false;
        cVar24 = *__s1;
      }
      else {
        iVar16 = strcmp(__s1,"skip");
        if ((iVar16 == 0) && (uVar15 == 2)) {
          param_1[0x46] = param_1[0x44];
          param_1[0x47] = param_1[0x45];
          uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
          param_1[0x45] = 0;
          *(undefined *)((int)param_1 + 0x131) = 4;
          param_1[0x44] = uVar9;
          cVar24 = *__s1;
          bVar4 = false;
        }
        else {
          iVar16 = strcmp(__s1,"resume");
          if ((iVar16 == 0) && (uVar15 == 1)) {
            *(undefined *)((int)param_1 + 0x131) = *(undefined *)((int)param_1 + 0x132);
            cVar24 = *__s1;
            bVar4 = false;
          }
          else {
            cVar24 = *__s1;
            if (cVar24 == 'r') {
              if (__s1[1] == '\0') {
                if (uVar15 == 1) {
LAB_080730c0:
                  *(undefined *)((int)param_1 + 0x131) = 1;
                  bVar4 = false;
                  cVar24 = *__s1;
                  goto LAB_080730d4;
                }
                goto LAB_080727e8;
              }
              if (((__s1[1] != 'u') || (__s1[2] != 'n')) || (__s1[3] != '\0')) goto LAB_080727e8;
              if (uVar15 == 1) goto LAB_080730c0;
            }
            else {
LAB_080727e8:
              iVar16 = strcmp(__s1,"step_run");
              if ((iVar16 == 0) && (uVar15 == 1)) {
                *(undefined *)((int)param_1 + 0x131) = 2;
                cVar24 = *__s1;
                bVar4 = false;
                goto LAB_080730d4;
              }
            }
            iVar16 = strcmp(__s1,"next_frame");
            if ((iVar16 == 0) && (uVar15 - 1 < 2)) {
              if (uVar15 == 2) {
                uVar9 = strtoul(local_264[0],(char **)0x0,10);
                uVar39 = VectorShiftRight(CONCAT44(uVar9,uVar9),0x20);
              }
              else {
                uVar39 = 1;
              }
              *(undefined *)((int)param_1 + 0x131) = 6;
              bVar4 = false;
              uVar39 = VectorAdd(uVar39,**(undefined8 **)(*param_1 + 0x2308),8);
              *(undefined8 *)(param_1 + 0x44) = uVar39;
              cVar24 = *__s1;
            }
            else {
              iVar16 = strcmp(__s1,"write_break");
              if ((iVar16 == 0) && (uVar15 == 2)) {
                uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                param_1[0x45] = 0;
                *(undefined *)((int)param_1 + 0x131) = 5;
                param_1[0x44] = uVar9;
                cVar24 = *__s1;
                bVar4 = false;
              }
              else {
                iVar16 = strcmp(__s1,"disasm_arm_block");
                if ((iVar16 == 0) && (uVar15 - 2 < 2)) {
                  if (uVar15 == 3) {
                    uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                    uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                  }
                  else {
                    uVar9 = param_1[0x48];
                    uVar30 = strtoul(local_264[0],(char **)0x0,0x10);
                  }
                  if (uVar30 != 0) {
                    do {
                      uVar11 = FUN_080101a4(iVar20,uVar9);
                      FUN_08075790(uVar11,local_128,uVar9,0,0);
                      printf("%08x: %08x  %s\n",uVar9,uVar11,local_128);
                      uVar30 = uVar30 - 1;
                      uVar9 = uVar9 + 4;
                    } while (uVar30 != 0);
                  }
                }
                else {
                  iVar16 = strcmp(__s1,"disasm_thumb_block");
                  if ((iVar16 != 0) || (1 < uVar15 - 2)) {
                    iVar16 = strcmp(__s1,"byte_at");
                    if (iVar16 == 0) {
                      if (uVar15 != 2) goto LAB_080728b4;
                      uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                      uVar11 = FUN_0800fe98(iVar20,uVar9);
                      printf("%02x\n",uVar11);
                      cVar24 = *__s1;
                    }
                    else {
                      iVar16 = strcmp(__s1,"halfword_at");
                      if (iVar16 == 0) {
                        if (uVar15 == 2) {
                          uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                          uVar11 = FUN_0801001c(iVar20,uVar9);
                          printf("%04x\n",uVar11);
                          cVar24 = *__s1;
                        }
                        else {
LAB_080728b4:
                          iVar16 = strcmp(__s1,"watch_address");
                          if ((iVar16 == 0) && (uVar15 - 2 < 2)) {
                            if (((*local_264[0] == 'o') && (local_264[0][1] == 'f')) &&
                               ((local_264[0][2] == 'f' && (local_264[0][3] == '\0')))) {
                              puts("No longer watching anything.");
                              *(undefined *)((int)param_1 + 0x133) = 0;
                              cVar24 = *__s1;
                            }
                            else {
                              uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                              param_1[0x4b] = uVar9;
                              if (uVar15 == 3) {
                                uVar30 = strtoul(local_264[1],(char **)0x0,10);
                                uVar9 = uVar30 + uVar9;
                                param_1[0x4b] = uVar9;
                              }
                              *(undefined *)((int)param_1 + 0x133) = 1;
                              printf("Watching %08x.\n",uVar9);
                              cVar24 = *__s1;
                            }
                          }
                          else {
                            iVar16 = strcmp(__s1,"store_byte");
                            if (iVar16 == 0) {
                              if (uVar15 != 3) goto LAB_080728f8;
                              uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                              uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                              FUN_080103b0(iVar20,uVar9,uVar30 & 0xff);
                              cVar24 = *__s1;
                            }
                            else {
                              iVar16 = strcmp(__s1,"store_halfword");
                              if (iVar16 == 0) {
                                if (uVar15 != 3) {
LAB_080728f8:
                                  iVar16 = strcmp(__s1,"memset_bytes");
                                  if (iVar16 == 0) {
                                    if (uVar15 != 4) goto LAB_08072918;
                                    uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                    uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                    uVar12 = strtoul(local_264[2],(char **)0x0,0x10);
                                    if (uVar12 != 0) {
                                      uVar33 = uVar30;
                                      do {
                                        uVar34 = uVar33 + 1;
                                        FUN_080103b0(iVar20,uVar33,uVar9 & 0xff);
                                        uVar33 = uVar34;
                                      } while (uVar34 != uVar12 + uVar30);
                                    }
                                  }
                                  else {
                                    iVar16 = strcmp(__s1,"memset_halfwords");
                                    if (iVar16 == 0) {
                                      if (uVar15 == 4) {
                                        uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                        uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                        uVar12 = strtoul(local_264[2],(char **)0x0,0x10);
                                        if (uVar12 != 0) {
                                          uVar37 = 0;
                                          do {
                                            iVar16 = uVar37 + uVar30;
                                            uVar37 = uVar37 + 2;
                                            FUN_08010560(iVar20,iVar16,uVar9 & 0xffff);
                                          } while (uVar37 < uVar12);
                                        }
                                      }
                                      else {
LAB_08072918:
                                        iVar16 = strcmp(__s1,"memory_block");
                                        if (iVar16 == 0) {
                                          if (uVar15 == 3) {
                                            uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                            uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                            uVar37 = uVar30 + 0x1f >> 5;
                                            if (uVar37 != 0) {
                                              uVar21 = 0;
                                              do {
                                                uVar30 = uVar9 + 0x20;
                                                printf("%08x: ",uVar9);
                                                do {
                                                  uVar11 = FUN_080101a4(iVar20,uVar9);
                                                  uVar9 = uVar9 + 4;
                                                  printf("%08x ",uVar11);
                                                } while (uVar9 != uVar30);
                                                uVar21 = uVar21 + 1;
                                                putchar(10);
                                              } while (uVar21 != uVar37);
                                            }
                                          }
                                          else {
LAB_08072938:
                                            iVar16 = strcmp(__s1,"palette");
                                            if ((iVar16 == 0) && (uVar15 == 1)) {
                                              iVar16 = *(int *)(iVar5 + 0x802384);
                                              puts("Main:");
                                              puVar32 = (ushort *)(iVar16 + 0x1603e);
                                              do {
                                                puVar23 = puVar32 + 0x10;
                                                printf("%08x: ",(0x4fe9fe2 - iVar16) + (int)puVar32)
                                                ;
                                                do {
                                                  puVar32 = puVar32 + 1;
                                                  printf("%04x ",(uint)*puVar32);
                                                } while (puVar32 != puVar23);
                                                putchar(10);
                                              } while (puVar32 != (ushort *)(iVar16 + 0x1683e));
                                              puts("\nShadow:");
                                              puVar32 = (ushort *)(iVar16 + 0x1683e);
                                              do {
                                                puVar23 = puVar32 + 0x10;
                                                printf("%08x: ",(0x4fe97e2 - iVar16) + (int)puVar32)
                                                ;
                                                do {
                                                  puVar32 = puVar32 + 1;
                                                  printf("%04x ",(uint)*puVar32);
                                                } while (puVar32 != puVar23);
                                                putchar(10);
                                              } while ((ushort *)(iVar16 + 0x1703e) != puVar32);
                                            }
                                            else {
                                              iVar16 = strcmp(__s1,"gamecard_block");
                                              if ((iVar16 == 0) && (uVar15 == 3)) {
                                                uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                                uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                                iVar16 = *(int *)(*(int *)(*(int *)(*param_1 +
                                                                                   0x2308) + 0xa24)
                                                                 + 4);
                                                uVar37 = uVar30 + 0x1f >> 5;
                                                uVar21 = 0;
                                                if (uVar37 != 0) {
                                                  do {
                                                    uVar12 = uVar9 + 0x20;
                                                    printf("%08x: ",uVar9);
                                                    uVar30 = uVar9;
                                                    do {
                                                      uVar9 = uVar30 + 4;
                                                      printf("%08x ",*(undefined4 *)
                                                                      (iVar16 + (uVar30 & 0xfffffffc
                                                                                )));
                                                      uVar30 = uVar9;
                                                    } while (uVar9 != uVar12);
                                                    uVar21 = uVar21 + 1;
                                                    putchar(10);
                                                  } while (uVar21 != uVar37);
                                                }
                                              }
                                              else {
                                                iVar16 = strcmp(__s1,"memory_scan_byte");
                                                if (iVar16 == 0) {
                                                  if (uVar15 != 4) goto LAB_08072998;
                                                  uVar37 = strtoul(local_264[0],(char **)0x0,0x10);
                                                  uVar9 = strtoul(local_264[1],(char **)0x0,0x10);
                                                  uVar30 = strtoul(local_264[2],(char **)0x0,0x10);
                                                  printf("Scanning %08x to %08x for %02x...\n",
                                                         uVar37,uVar9,uVar30);
                                                  for (; uVar37 < uVar9; uVar37 = uVar37 + 1) {
                                                    uVar12 = FUN_0800fe98(iVar20,uVar37);
                                                    if (uVar12 == uVar30) {
                                                      printf(" Found @ %08x\n",uVar37);
                                                    }
                                                  }
                                                }
                                                else {
                                                  iVar16 = strcmp(__s1,"memory_scan_hword");
                                                  if (iVar16 == 0) {
                                                    if (uVar15 != 4) {
LAB_08072998:
                                                      iVar16 = strcmp(__s1,"state");
                                                      if (iVar16 == 0) {
                                                        if (uVar15 == 1) {
                                                          FUN_08071f34(param_1,param_3);
                                                          cVar24 = *__s1;
                                                        }
                                                        else {
                                                          iVar16 = strcmp(__s1,"scheduler_state");
                                                          if (iVar16 != 0) {
LAB_08072f40:
                                                            iVar16 = strcmp(__s1,"div_status");
                                                            if (iVar16 == 0) {
                                                              if (uVar15 != 1) goto LAB_080729f0;
                                                              iVar16 = *(int *)(*param_1 + 0x2080);
                                                              printf(
                                                  "DIV: %016llx / %016llx =\n  %016llx,  %016llx\n",
                                                  iVar16,*(undefined4 *)(iVar16 + 0x290),
                                                  *(undefined4 *)(iVar16 + 0x294),
                                                  *(undefined4 *)(iVar16 + 0x298),
                                                  *(undefined4 *)(iVar16 + 0x29c),
                                                  *(undefined4 *)(iVar16 + 0x2a0),
                                                  *(undefined4 *)(iVar16 + 0x2a4),
                                                  *(undefined4 *)(iVar16 + 0x2a8),
                                                  *(undefined4 *)(iVar16 + 0x2ac));
                                                  cVar24 = *__s1;
                                                  goto LAB_080730d4;
                                                  }
                                                  }
LAB_080729d0:
                                                  iVar16 = strcmp(__s1,"coprocessor_status");
                                                  if ((iVar16 == 0) && (uVar15 == 1)) {
                                                    iVar16 = *(int *)(*param_1 + 0x2304);
                                                    if (iVar16 != 0) {
                                                      printf("control:          %08x\n",
                                                             *(undefined4 *)(iVar16 + 0xc));
                                                      printf("DTCM control:     %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x10));
                                                      printf("ITCM control:     %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x14));
                                                      printf("DTCM offset:      %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x18));
                                                      printf("DTCM size:        %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x24));
                                                      printf("ITCM size:        %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x30));
                                                      printf("Exception offset: %08x\n",
                                                             *(undefined4 *)(iVar16 + 8));
                                                      cVar24 = *__s1;
                                                    }
                                                  }
                                                  else {
LAB_080729f0:
                                                    iVar16 = strcmp(__s1,"stack");
                                                    if ((iVar16 == 0) && (uVar15 == 2)) {
                                                      uVar9 = strtoul(local_264[0],(char **)0x0,0x10
                                                                     );
                                                      iVar28 = *param_1;
                                                      iVar16 = *(int *)(iVar28 + 0x2360);
                                                      puts("Stack:");
                                                      if (uVar9 != 0) {
                                                        uVar30 = 0;
                                                        do {
                                                          iVar26 = iVar16 + 0x14;
                                                          do {
                                                            uVar11 = FUN_080101a4(iVar28 + 0x2380,
                                                                                  iVar16);
                                                            iVar16 = iVar16 + 4;
                                                            printf(" %08x",uVar11);
                                                          } while (iVar16 != iVar26);
                                                          if (uVar9 != uVar30) {
                                                            putchar(10);
                                                          }
                                                          uVar30 = uVar30 + 1;
                                                          iVar16 = iVar26;
                                                        } while (uVar30 != uVar9);
                                                      }
                                                      putchar(10);
                                                      cVar24 = *__s1;
                                                    }
                                                    else {
                                                      iVar16 = strcmp(__s1,"user_reg");
                                                      if (iVar16 == 0) {
                                                        if (uVar15 != 1) goto LAB_08072a48;
                                                        FUN_08071770(param_1);
                                                        cVar24 = *__s1;
                                                      }
                                                      else {
                                                        iVar16 = strcmp(__s1,"step_alternate_cpu");
                                                        if (iVar16 == 0) {
                                                          if (uVar15 == 1) {
                                                            puts("Stepping alternate CPU.");
                                                            *(undefined *)
                                                             (*(int *)(*param_1 + 0x2378) + 0x2239)
                                                                 = 0;
                                                            cVar24 = *__s1;
                                                          }
                                                          else {
LAB_08072a48:
                                                            iVar16 = strcmp(__s1,"block_lookup");
                                                            if (iVar16 == 0) {
                                                              if (uVar15 != 2) goto LAB_08072a68;
                                                              iVar16 = *param_1;
                                                              uVar9 = strtoul(local_264[0],
                                                                              (char **)0x0,0x10);
                                                              uVar37 = uVar9 >> 2;
                                                              if (*(ulong *)(iVar16 + 0x80 +
                                                                            (uVar37 & 0x3ff) * 4) ==
                                                                  uVar9) {
                                                                printf("mini hash: %08x -> %p\n",
                                                                       uVar9);
                                                              }
                                                              if ((*(char *)(iVar16 + 0x2104) ==
                                                                   '\x01') && (uVar9 < 0x2000000)) {
                                                                if ((uVar9 & 1) == 0) {
                                                                  iVar16 = *(int *)(*(int *)(iVar16 
                                                  + 0x2314) + (uVar37 & 0x1fff) * 4);
                                                  }
                                                  else {
                                                    iVar16 = *(int *)(*(int *)(iVar16 + 0x2318) +
                                                                     ((uVar9 << 0x11) >> 0x12) * 4);
                                                  }
                                                  if (iVar16 == 0) {
                                                    printf("ITCM block: %08x unallocated\n",uVar9);
                                                    cVar24 = *__s1;
                                                  }
                                                  else {
                                                    printf("ITCM block: %08x -> %p\n",uVar9);
                                                    cVar24 = *__s1;
                                                  }
                                                  }
                                                  else {
                                                    bVar38 = uVar9 >> 0x18 == 2;
                                                    if (bVar38) {
                                                      uVar37 = uVar37 & 0x7fff;
                                                    }
                                                    else {
                                                      uVar37 = uVar37 & 0x1fff;
                                                    }
                                                    iVar16 = *(int *)(iVar16 + 0x2084) + 0x1300000;
                                                    if (bVar38) {
                                                      puVar13 = &UNK_080ea2b0;
                                                    }
                                                    else {
                                                      puVar13 = (undefined *)0xa2b8;
                                                    }
                                                    if (!bVar38) {
                                                      puVar13 = (undefined *)
                                                                ((uint)puVar13 & 0xffff | 0x80e0000)
                                                      ;
                                                    }
                                                    iVar28 = iVar16 + uVar37 * 0x10;
                                                    if (*(ulong *)(iVar16 + uVar37 * 0x10) == uVar9)
                                                    {
                                                      printf("%s block: %08x -> %p (hash A)\n",
                                                             puVar13,uVar9,
                                                             *(undefined4 *)(iVar28 + 4));
                                                      cVar24 = *__s1;
                                                    }
                                                    else if (*(ulong *)(iVar28 + 8) == uVar9) {
                                                      printf("%s block: %08x -> %p (hash B)\n",
                                                             puVar13,uVar9,
                                                             *(undefined4 *)(iVar28 + 0xc));
                                                      cVar24 = *__s1;
                                                    }
                                                    else if (*(int *)(iVar28 + 0xc) == 0) {
                                                      printf("%s block: %08x unallocated\n",puVar13,
                                                             uVar9);
                                                      cVar24 = *__s1;
                                                    }
                                                    else {
                                                      piVar19 = **(int ***)(*(int *)(iVar28 + 0xc) +
                                                                           -4);
                                                      if (piVar19 == (int *)0x0) {
                                                        iVar16 = 0;
                                                      }
                                                      else {
                                                        if (piVar19[1] == uVar9) {
                                                          iVar16 = 0;
                                                        }
                                                        else {
                                                          iVar16 = 0;
                                                          do {
                                                            piVar19 = (int *)*piVar19;
                                                            iVar16 = iVar16 + 1;
                                                            if (piVar19 == (int *)0x0)
                                                            goto LAB_08074b78;
                                                          } while (piVar19[1] != uVar9);
                                                        }
                                                        printf("%s block: %08x -> %p (LL %d)\n",
                                                               puVar13,uVar9,piVar19[2],iVar16);
                                                      }
LAB_08074b78:
                                                      printf("%s block: %08x unallocated (LL %d)\n",
                                                             puVar13,uVar9,iVar16);
                                                      cVar24 = *__s1;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"raw_read");
                                                    if (iVar16 == 0) {
                                                      if (uVar15 != 2) {
LAB_08072a68:
                                                        iVar16 = strcmp(__s1,"cpu_map");
                                                        if ((iVar16 == 0) && (uVar15 - 2 < 2)) {
                                                          uVar9 = strtoul(local_264[0],(char **)0x0,
                                                                          0x10);
                                                          uVar30 = uVar9 + 1;
                                                          if (uVar15 == 3) {
                                                            uVar30 = strtoul(local_264[1],
                                                                             (char **)0x0,0x10);
                                                          }
                                                          for (; uVar9 < uVar30;
                                                              uVar9 = uVar9 + 0x800) {
                                                            iVar16 = *(int *)(*param_1 +
                                                                             ((uVar9 >> 0xb) + 0x8e0
                                                                             ) * 4);
                                                            iVar28 = iVar16 * 4 + uVar9;
                                                            if (iVar16 * 4 == 0) {
                                                              printf("  %x: page is unallocated.\n",
                                                                     uVar9,iVar16,iVar28);
                                                            }
                                                            else {
                                                              printf(
                                                  "  %x: page %x (points to %p)\n",uVar9,iVar16,
                                                  iVar28);
                                                  }
                                                  }
                                                  goto LAB_080737dc;
                                                  }
                                                  iVar16 = strcmp(__s1,"geometry_log");
                                                  if ((iVar16 == 0) && (uVar15 - 1 < 2)) {
                                                    if (uVar15 == 2) {
                                                      iVar16 = *(int *)(*param_1 + 0x2308);
                                                      lVar14 = strtol(local_264[0],(char **)0x0,10);
                                                      *(char *)(iVar16 + 0x2916279) = (char)lVar14;
                                                    }
                                                    else {
                                                      *(undefined *)
                                                       (*(int *)(*param_1 + 0x2308) + 0x2916279) = 1
                                                      ;
                                                    }
                                                    printf("Logging geometry next %d frames.\n",
                                                           (uint)*(byte *)(*(int *)(*param_1 +
                                                                                   0x2308) +
                                                                          0x2916279));
                                                    *(undefined *)
                                                     (*(int *)(*param_1 + 0x2308) + 0x2916278) = 1;
                                                    cVar24 = *__s1;
                                                    goto LAB_080730d4;
                                                  }
                                                  iVar16 = strcmp(__s1,"vram_cpu_map");
                                                  if ((iVar16 == 0) && (uVar15 - 2 < 2)) {
                                                    uVar37 = strtoul(local_264[0],(char **)0x0,0x10)
                                                    ;
                                                    uVar9 = uVar37 + 1;
                                                    if (uVar15 == 3) {
                                                      uVar9 = strtoul(local_264[1],(char **)0x0,0x10
                                                                     );
                                                    }
                                                    for (; uVar37 < uVar9; uVar37 = uVar37 + 0x4000)
                                                    {
                                                      uVar11 = FUN_08006734(*(undefined4 *)
                                                                             (*param_1 + 0x802384),
                                                                            uVar37);
                                                      printf(" %x: VRAM map points to %p\n",uVar37,
                                                             uVar11);
                                                    }
                                                    goto LAB_080737dc;
                                                  }
                                                  iVar16 = strcmp(__s1,"vram_force_dirty");
                                                  if ((iVar16 == 0) && (uVar15 == 2)) {
                                                    iVar16 = *(int *)(*param_1 + 0x2308);
                                                    uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                                    *(ulong *)(iVar16 + 0x2916294) = uVar9;
                                                    cVar24 = *__s1;
                                                    goto LAB_080730d4;
                                                  }
                                                  iVar16 = strcmp(__s1,"texture_slot_map");
                                                  if (iVar16 == 0) {
                                                    if (uVar15 == 1) {
                                                      iVar16 = 0;
                                                      do {
                                                        iVar28 = iVar16 + 1;
                                                        printf("Texture slot %d points to %p\n",
                                                               iVar16,*(undefined4 *)
                                                                       (*(int *)(*param_1 + 0x2308)
                                                                        + (iVar16 + 0x9aa428) * 4 +
                                                                       8));
                                                        iVar16 = iVar28;
                                                      } while (iVar28 != 4);
                                                      goto LAB_080737dc;
                                                    }
                                                    iVar16 = strcmp(__s1,"vram_map");
                                                    if (iVar16 != 0) {
LAB_08073cac:
                                                      iVar16 = strcmp(__s1,"vram_ptrs");
                                                      if ((iVar16 == 0) && (uVar15 == 1)) {
                                                        iVar16 = 0;
                                                        do {
                                                          iVar28 = iVar16 + 0x41;
                                                          iVar26 = iVar16 + 0x9aa40c;
                                                          iVar16 = iVar16 + 1;
                                                          printf("VRAM bank %c: %p\n",iVar28,
                                                                 *(undefined4 *)
                                                                  (*(int *)(*param_1 + 0x2308) +
                                                                   iVar26 * 4 + 8));
                                                        } while (iVar16 != 9);
                                                        printf("NULL video load: %p\n",
                                                               *(undefined4 *)
                                                                (*(int *)(*param_1 + 0x2308) +
                                                                0x25c0754));
                                                        printf("NULL video store: %p\n",
                                                               *(int *)(*param_1 + 0x2308) +
                                                               0x2656760);
                                                        cVar24 = *__s1;
                                                        goto LAB_080730d4;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"textures");
                                                    if (iVar16 == 0) {
                                                      if (uVar15 == 1) {
                                                        puVar32 = *(ushort **)
                                                                   (*(int *)(*param_1 + 0x2308) +
                                                                   0x282c784);
                                                        if (puVar32 != (ushort *)0x0) {
                                                          iVar16 = 0;
                                                          do {
                                                            iVar28 = (uint)puVar32[0x13] *
                                                                     (uint)puVar32[0x12];
                                                            if ((*(byte *)((int)puVar32 + 0x2d) &
                                                                0xfd) == 5) {
                                                              iVar28 = iVar28 * 4;
                                                            }
                                                            uVar11 = FUN_0805f7a8(*(undefined4 *)
                                                                                   (puVar32 + 6),
                                                                                  iVar28);
                                                            printf(
                                                  "Texture %04d: %d by %d, format %d, allocated @ %08x:%x (crc32 %x)\n"
                                                  ,iVar16,(uint)puVar32[0x12],(uint)puVar32[0x13],
                                                  (uint)*(byte *)((int)puVar32 + 0x2d),
                                                  (uint)*puVar32 << 3,*(undefined4 *)(puVar32 + 2),
                                                  uVar11);
                                                  puVar32 = *(ushort **)(puVar32 + 0xe);
                                                  iVar16 = iVar16 + 1;
                                                  } while (puVar32 != (ushort *)0x0);
                                                  goto LAB_080737dc;
                                                  }
                                                  goto LAB_080730d4;
                                                  }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"vram_map");
                                                    if (iVar16 != 0) goto LAB_08073cac;
                                                    if (uVar15 == 1) {
                                                      iVar16 = 0x41;
                                                      do {
                                                        iVar28 = *(int *)(*param_1 + 0x2308) +
                                                                 (iVar16 + -0x41) * 0x14 + 0x26a7f80
                                                        ;
                                                        iVar26 = *(int *)(iVar28 + 4);
                                                        switch(iVar26) {
                                                        case 0:
                                                        case 1:
                                                          printf(
                                                  "bank %c (%02x) extended palette BG %c slot %d\n",
                                                  iVar16,*(undefined4 *)(iVar28 + 8),iVar26 + 0x41,
                                                  *(undefined4 *)(iVar28 + 0xc));
                                                  break;
                                                  case 2:
                                                  case 3:
                                                    printf(
                                                  "bank %c (%02x) extended palette OBJ %c slot %d\n"
                                                  ,iVar16,*(undefined4 *)(iVar28 + 8),iVar26 + 0x3f,
                                                  *(undefined4 *)(iVar28 + 0xc));
                                                  break;
                                                  case 4:
                                                    printf("bank %c (%02x) texture slot %d\n",iVar16
                                                           ,*(undefined4 *)(iVar28 + 8),
                                                           *(undefined4 *)(iVar28 + 0xc));
                                                    break;
                                                  case 5:
                                                    printf(
                                                  "bank %c (%02x) texture palette slot %d\n",iVar16,
                                                  *(undefined4 *)(iVar28 + 8),
                                                  *(undefined4 *)(iVar28 + 0xc));
                                                  break;
                                                  case 6:
                                                    iVar26 = *(int *)(iVar28 + 0xc);
                                                    iVar29 = *(int *)(iVar28 + 0x10);
                                                    pcVar6 = "bank %c (%02x) ARM9 memory %x to %x\n"
                                                    ;
                                                    goto LAB_0807451c;
                                                  case 7:
                                                    iVar26 = *(int *)(iVar28 + 0xc);
                                                    iVar29 = *(int *)(iVar28 + 0x10);
                                                    pcVar6 = "bank %c (%02x) ARM7 memory %x to %x\n"
                                                    ;
LAB_0807451c:
                                                    printf(pcVar6,iVar16,*(undefined4 *)(iVar28 + 8)
                                                           ,(iVar26 + 0x1800) * 0x4000,
                                                           (iVar29 + (iVar26 + 0x1800) * 0x10) *
                                                           0x400 + -1);
                                                    break;
                                                  case 8:
                                                    iVar29 = *(int *)(iVar28 + 0xc) + 0x1800;
                                                    iVar26 = *(int *)(iVar28 + 0xc) +
                                                             *(int *)(iVar28 + 0x14) + 0x1800;
                                                    printf(
                                                  "bank %c (%02x) ARM9 memory mirrored %x to %x and %x to %x\n"
                                                  ,iVar16,*(undefined4 *)(iVar28 + 8),
                                                  iVar29 * 0x4000,
                                                  (*(int *)(iVar28 + 0x10) + iVar29 * 0x10) * 0x400
                                                  + -1,iVar26 * 0x4000,
                                                  (*(int *)(iVar28 + 0x10) + iVar26 * 0x10) * 0x400
                                                  + -1);
                                                  break;
                                                  case 9:
                                                    printf("bank %c (%02x) unmapped\n",iVar16,
                                                           *(undefined4 *)(iVar28 + 8));
                                                    break;
                                                  case 10:
                                                    printf("bank %c (%02x) invalid\n",iVar16,
                                                           *(undefined4 *)(iVar28 + 8));
                                                  }
                                                  iVar16 = iVar16 + 1;
                                                  } while (iVar16 != 0x4a);
                                                  goto LAB_080737dc;
                                                  }
                                                  }
                                                  }
                                                  iVar16 = strcmp(__s1,"video_2d_state");
                                                  pcVar6 = local_264[0];
                                                  if ((iVar16 == 0) && (uVar15 - 1 < 2)) {
                                                    iVar16 = *(int *)(*param_1 + 0x2308);
                                                    apcStack_278[0] = "bottom";
                                                    apcStack_278[1] = &DAT_080eaa84;
                                                    uVar1 = *(ushort *)(iVar16 + 0x25c6a64);
                                                    if (uVar15 != 2) {
                                                      local_29c = 1;
                                                      uVar37 = 0;
                                                      local_28c = (uint)(uVar1 >> 0xf);
LAB_08072b94:
                                                      iVar16 = uVar37 * 0x80f40 + iVar16 + 0x26a9d18
                                                      ;
LAB_08072bbc:
                                                      uVar25 = *(uint *)(iVar16 + 0x70);
                                                      uVar31 = uVar25 & 7;
                                                      uVar35 = (uVar25 << 0x14) >> 0x1c;
                                                      apcStack_278[2] = &DAT_080eb16c;
                                                      apcStack_278[3] = &DAT_080eb170;
                                                      printf("Engine %c (%s):\n",uVar37 + 0x41,
                                                             apcStack_278[uVar37 ^ local_28c]);
                                                      printf("  display control:       %08x\n",
                                                             uVar25);
                                                      uVar21 = uVar25 >> 0xd;
                                                      printf("   bg_mode:              %01d\n",
                                                             uVar31);
                                                      printf("   windows_enabled:      %01x\n",
                                                             uVar21 & 7);
                                                      printf("   display_mode:         %01d\n",
                                                             (uVar25 << 0xe) >> 0x1e);
                                                      printf("   bg ext palette:       %s\n",
                                                             apcStack_278
                                                             [2 - ((int)(uVar25 << 1) >> 0x1f)]);
                                                      printf("   obj ext palette:      %s\n",
                                                             apcStack_278[2 - ((int)uVar25 >> 0x1f)]
                                                            );
                                                      printf("  window enables:        %08x\n",
                                                             *(undefined4 *)(iVar16 + 0x7c));
                                                      printf("  blend control:         %04x\n",
                                                             (uint)*(ushort *)(iVar16 + 0x80));
                                                      printf("  blend alpha:           %04x\n",
                                                             (uint)*(ushort *)(iVar16 + 0x84));
                                                      printf("  blend y:               %04x\n",
                                                             (uint)*(ushort *)(iVar16 + 0x82));
                                                      printf("  mosaic:                %04x\n",
                                                             (uint)*(ushort *)(iVar16 + 0x88));
                                                      printf("  master brightness:     %04x\n",
                                                             (uint)*(ushort *)(iVar16 + 0x86));
                                                      if ((uVar21 & 1) != 0) {
                                                        printf(
                                                  "  window 0 horizontal:   %02x to %02x\n",
                                                  (uint)(*(ushort *)(iVar16 + 0x8a) >> 8),
                                                  *(ushort *)(iVar16 + 0x8a) & 0xff);
                                                  printf("  window 0 vertical:     %02x to %02x\n",
                                                         (uint)(*(ushort *)(iVar16 + 0x8e) >> 8),
                                                         *(ushort *)(iVar16 + 0x8e) & 0xff);
                                                  }
                                                  if ((uVar21 & 2) != 0) {
                                                    printf("  window 1 horizontal:   %02x to %02x\n"
                                                           ,(uint)(*(ushort *)(iVar16 + 0x8c) >> 8),
                                                           *(ushort *)(iVar16 + 0x8c) & 0xff);
                                                    printf("  window 1 vertical:     %02x to %02x\n"
                                                           ,(uint)(*(ushort *)(iVar16 + 0x90) >> 8),
                                                           *(ushort *)(iVar16 + 0x90) & 0xff);
                                                  }
                                                  printf("  layers active: ");
                                                  if (*(char *)(iVar16 + 0x93) != '\0') {
                                                    uVar21 = 0;
                                                    iVar28 = iVar16;
                                                    do {
                                                      pbVar22 = (byte *)(iVar28 + 100);
                                                      uVar18 = (uint)*pbVar22;
                                                      pcVar6 = "bg%d ";
                                                      uVar21 = uVar21 + 1;
                                                      iVar28 = iVar28 + 1;
                                                      if ((*pbVar22 & 4) != 0) {
                                                        pcVar6 = "obj%d ";
                                                        uVar18 = uVar18 & 3;
                                                      }
                                                      printf(pcVar6,uVar18);
                                                    } while (uVar21 < *(byte *)(iVar16 + 0x93));
                                                  }
                                                  uVar21 = 0;
                                                  puts("\n");
                                                  uVar18 = uVar35 & 1;
                                                  pbVar22 = (byte *)(iVar16 + 0x11b);
                                                  iVar28 = 1;
                                                  do {
                                                    if (uVar18 == 0) {
LAB_08072ea8:
                                                      if (iVar28 == 4) goto LAB_0807467c;
                                                    }
                                                    else {
                                                      if (((uVar25 & 8) == 0) || (uVar21 != 0)) {
                                                        uVar1 = *(ushort *)(pbVar22 + -0x13);
                                                        uVar18 = (uint)uVar1;
                                                        local_128[0] = &DAT_080eb15c;
                                                        local_128[1] = &DAT_080eb164;
                                                        printf("  layer %d:\n",uVar21);
                                                        printf("    bg_control:        %04x\n",
                                                               uVar18);
                                                        printf("    map_base:          %08x\n",
                                                               *(int *)(pbVar22 + -0x6f) + 0x6000000
                                                              );
                                                        printf("    tile_base:         %08x\n",
                                                               *(int *)(pbVar22 + -0x6b) + 0x6000000
                                                              );
                                                        printf("    offset:            %04x, %04x\n"
                                                               ,(uint)*(ushort *)(pbVar22 + -0x11),
                                                               (uint)*(ushort *)(pbVar22 + -0xf));
                                                        printf("    mosaic:            %s\n",
                                                               apcStack_278
                                                               [2 - ((int)(uVar18 << 0x19) >> 0x1f)]
                                                              );
                                                        if ((uVar31 == 1 && uVar21 == 3) ||
                                                           (uVar31 == 2 && 1 < uVar21)) {
                                                          bVar38 = true;
                                                        }
                                                        else {
                                                          bVar38 = uVar21 == 3;
                                                          if (uVar31 != 4) {
                                                            bVar38 = false;
                                                          }
                                                        }
                                                        if (((uVar31 - 3 < 3) && (uVar21 == 3)) ||
                                                           (uVar21 == 2 && uVar31 == 5)) {
LAB_080745d8:
                                                          if ((uVar1 & 0x80) == 0) {
                                                            puts("    mode:              extended");
                                                          }
                                                          else {
                                                            printf(
                                                  "    mode:              extended bmp %s\n",
                                                  *(undefined4 *)((int)local_128 + (uVar18 & 4)));
                                                  }
                                                  }
                                                  else {
                                                    if (!bVar38) {
                                                      puts("    mode:              text");
                                                      printf("    color mode:        %s\n",
                                                             local_128[-((int)(uVar18 << 0x18) >>
                                                                        0x1f)]);
                                                      goto LAB_08072ea8;
                                                    }
                                                    if (!bVar38) goto LAB_080745d8;
                                                    puts("    mode:              affine");
                                                  }
                                                  printf("    wraps:             %s\n",
                                                         apcStack_278
                                                         [2 - ((int)(uVar18 << 0x12) >> 0x1f)]);
                                                  printf("    affine reference:  %08x, %08x\n",
                                                         *(undefined4 *)(pbVar22 + -0x23),
                                                         *(undefined4 *)(pbVar22 + -0x1f));
                                                  printf("    affine current:    %08x, %08x\n",
                                                         *(undefined4 *)(pbVar22 + -0x1b),
                                                         *(undefined4 *)(pbVar22 + -0x17));
                                                  printf("    affine dxy:        %04x, %04x\n",
                                                         (int)*(short *)(pbVar22 + -0xd),
                                                         (int)*(short *)(pbVar22 + -0xb));
                                                  printf("    affine dmxy:       %04x, %04x\n",
                                                         (int)*(short *)(pbVar22 + -9),
                                                         (int)*(short *)(pbVar22 + -7));
                                                  printf("    affine wrap mask:  %02x\n",
                                                         (uint)*pbVar22);
                                                  goto LAB_08072ea8;
                                                  }
                                                  printf("  layer %d:               3D\n",0);
                                                  printf("    horizontal offset:  %04x\n",
                                                         (uint)*(ushort *)(pbVar22 + -0x11));
                                                  }
                                                  uVar21 = uVar21 + 1;
                                                  iVar28 = iVar28 + 1;
                                                  pbVar22 = pbVar22 + 0x88;
                                                  uVar18 = uVar35 & 1 << (uVar21 & 0xff);
                                                  } while( true );
                                                  }
                                                  iVar28 = strcasecmp(local_264[0],"a");
                                                  if (iVar28 == 0) {
                                                    uVar37 = 0;
                                                    local_29c = 0;
                                                  }
                                                  else {
                                                    local_29c = 1;
                                                    uVar21 = strcasecmp(pcVar6,"b");
                                                    uVar37 = 1 - uVar21;
                                                    if (1 < uVar21) {
                                                      uVar37 = 0;
                                                    }
                                                  }
                                                  iVar28 = strcasecmp(pcVar6,"top");
                                                  if (iVar28 == 0) {
                                                    uVar37 = (uint)~(int)(short)uVar1 >> 0x1f;
                                                    local_29c = uVar37;
                                                    local_28c = (uint)(uVar1 >> 0xf);
                                                    goto LAB_08072b94;
                                                  }
                                                  iVar28 = strcasecmp(pcVar6,"bottom");
                                                  if (iVar28 == 0) {
                                                    uVar37 = (uint)(uVar1 >> 0xf);
                                                    local_29c = uVar37;
                                                    local_28c = uVar37;
                                                    goto LAB_08072b94;
                                                  }
                                                  printf("Unknown layer %s.\n",pcVar6);
                                                  if (uVar37 <= local_29c) {
                                                    uVar1 = uVar1 >> 0xf;
                                                  }
                                                  local_28c = (uint)uVar1;
                                                  if (uVar37 <= local_29c) goto LAB_08072b94;
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"sprite_info");
                                                    if ((iVar16 == 0) && (uVar15 - 2 < 3)) {
                                                      uVar37 = strcasecmp(local_264[0],"b");
                                                      iVar16 = 1 - uVar37;
                                                      if (1 < uVar37) {
                                                        iVar16 = 0;
                                                      }
                                                      if (uVar15 == 3) {
                                                        uVar9 = strtoul(local_264[1],(char **)0x0,10
                                                                       );
                                                        local_29c = uVar9;
LAB_08073db0:
                                                        iVar28 = iVar16 * 0x80f40 +
                                                                 *(int *)(*param_1 + 0x2308);
                                                        iVar26 = *(int *)(iVar28 + 0x26a9d30);
                                                        printf("Engine %c OBJ:\n",iVar16 + 0x41);
                                                      }
                                                      else {
                                                        if (uVar15 != 4) {
                                                          local_29c = 0x7f;
                                                          uVar9 = 0;
                                                          goto LAB_08073db0;
                                                        }
                                                        uVar9 = strtoul(local_264[1],(char **)0x0,10
                                                                       );
                                                        local_29c = strtoul(local_264[2],
                                                                            (char **)0x0,10);
                                                        iVar28 = iVar16 * 0x80f40 +
                                                                 *(int *)(*param_1 + 0x2308);
                                                        iVar26 = *(int *)(iVar28 + 0x26a9d30);
                                                        printf("Engine %c OBJ:\n",iVar16 + 0x41);
                                                        if (local_29c < uVar9) goto LAB_080737dc;
                                                      }
                                                      puVar32 = (ushort *)(iVar26 + uVar9 * 8);
                                                      psVar36 = (short *)(iVar28 + uVar9 * 0x50 +
                                                                         0x26aa00e);
                                                      do {
                                                        uVar1 = *puVar32;
                                                        uVar2 = puVar32[1];
                                                        uVar21 = uVar1 & 0xff;
                                                        uVar3 = puVar32[2];
                                                        iVar16 = ((uint)(uVar2 >> 0xe) |
                                                                 (uint)(uVar1 >> 0xe) << 2) * 2;
                                                        uVar37 = (uint)(byte)(&DAT_080ea061)[iVar16]
                                                        ;
                                                        if ((uVar1 & 0x200) != 0) {
                                                          uVar37 = uVar37 << 1;
                                                        }
                                                        if ((uVar21 < 0xc0) ||
                                                           (0xff < uVar37 + uVar21)) {
                                                          uVar25 = uVar2 & 0x1ff;
                                                          uVar21 = (uint)(byte)(&DAT_080ea060)
                                                                               [iVar16];
                                                          if ((uVar1 & 0x200) != 0) {
                                                            uVar21 = uVar21 << 1;
                                                          }
                                                          if ((uVar25 < 0x100) ||
                                                             (0x1ff < uVar21 + uVar25)) {
                                                            uVar25 = *(uint *)(iVar28 + 0x26a9d88);
                                                            iVar16 = 4 << (*(byte *)(psVar36 + 6) &
                                                                          3);
                                                            printf(" Obj %d (%04x %04x %04x):\n",
                                                                   uVar9,(uint)uVar1,(uint)uVar2,
                                                                   (uint)uVar3);
                                                            printf("  Location:    %d, %d\n",
                                                                   (int)*psVar36,(int)psVar36[1]);
                                                            printf("  Size:        %d (%d) by %d\n",
                                                                   uVar21,(uint)*(byte *)(psVar36 +
                                                                                         8),uVar37);
                                                            printf("  Color depth: %dbpp\n",iVar16);
                                                            if (iVar16 == 4) {
LAB_08073f70:
                                                              printf("  Palette:     %x\n",
                                                                     (uint)(uVar3 >> 0xc));
                                                            }
                                                            else {
                                                              uVar25 = uVar25 >> 0x1f;
                                                              if (iVar16 != 8) {
                                                                uVar25 = 0;
                                                              }
                                                              if (uVar25 != 0) goto LAB_08073f70;
                                                            }
                                                            printf("  Hflip:       %d\n",
                                                                   ((uint)*(byte *)(psVar36 + 6) <<
                                                                   0x1d) >> 0x1f);
                                                            printf("  Vflip:       %d\n",
                                                                   (uint)*(byte *)((int)psVar36 +
                                                                                  0xf));
                                                            printf("  Affine:      %d\n",
                                                                   ((uint)*(byte *)(psVar36 + 6) <<
                                                                   0x1c) >> 0x1f);
                                                            if ((*(byte *)(psVar36 + 6) & 8) != 0) {
                                                              printf("   Affine dx:  %04x\n",
                                                                     (int)psVar36[2]);
                                                              printf("   Affine dy:  %04x\n",
                                                                     (int)psVar36[3]);
                                                              printf("   Affine dmx: %04x\n",
                                                                     (int)psVar36[4]);
                                                              printf("   Affine dmy: %04x\n",
                                                                     (int)psVar36[5]);
                                                            }
                                                            printf("  Force blend: %d\n",
                                                                   (uint)(int)*(char *)(psVar36 + 7)
                                                                   >> 0x1f);
                                                            printf("  Alpha:       %d\n",
                                                                   *(byte *)(psVar36 + 7) & 0x3f);
                                                            printf("  Base:        %04x\n",
                                                                   uVar3 & 0x3ff);
                                                          }
                                                        }
                                                        uVar9 = uVar9 + 1;
                                                        puVar32 = puVar32 + 4;
                                                        psVar36 = psVar36 + 0x28;
                                                      } while (uVar9 <= local_29c);
                                                      cVar24 = *__s1;
                                                      goto LAB_080730d4;
                                                    }
                                                    puVar13 = (undefined *)
                                                              strcmp(__s1,"sprite_sizes");
                                                    if ((puVar13 != (undefined *)0x0) ||
                                                       (uVar15 != 2)) goto LAB_080730d4;
                                                    local_128[0] = puVar13;
                                                    local_128[1] = puVar13;
                                                    local_128[2] = puVar13;
                                                    local_128[3] = puVar13;
                                                    uVar37 = strcasecmp(local_264[0],"b");
                                                    iVar16 = 1 - uVar37;
                                                    if (1 < uVar37) {
                                                      iVar16 = 0;
                                                    }
                                                    iVar29 = *(int *)(iVar16 * 0x80f40 +
                                                                      *(int *)(*param_1 + 0x2308) +
                                                                     0x26a9d30);
                                                    iVar28 = 0;
                                                    iVar26 = 0;
                                                    do {
                                                      puVar32 = (ushort *)(iVar29 + iVar26);
                                                      uVar1 = *puVar32;
                                                      iVar26 = iVar26 + 8;
                                                      uVar37 = (uint)(uVar1 >> 0xe);
                                                      if ((uVar37 != 3) &&
                                                         (uVar37 = (uint)(puVar32[1] >> 0xe) |
                                                                   uVar37 << 2,
                                                         (uVar1 & 0x300) != 0x200)) {
                                                        iVar28 = iVar28 + 1;
                                                        *(char *)((int)local_128 + uVar37) =
                                                             *(char *)((int)local_128 + uVar37) +
                                                             '\x01';
                                                      }
                                                    } while (iVar26 != 0x400);
                                                    printf("Engine %c OBJ sizes (%d total):\n",
                                                           iVar16 + 0x41,iVar28);
                                                    uVar21 = (uint)local_128[0] & 0xff;
                                                    uVar37 = uVar21;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar21 << 6;
                                                      printf(" %-2d by %-2d:   %d\n",8,8,uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[0] >> 8 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x100;
                                                      printf(" %-2d by %-2d:   %d\n",0x10,0x10,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[0] >> 0x10 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x400;
                                                      printf(" %-2d by %-2d:   %d\n",0x20,0x20,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[0] >> 0x18;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x1000;
                                                      printf(" %-2d by %-2d:   %d\n",0x40,0x40,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[1] & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x80;
                                                      printf(" %-2d by %-2d:   %d\n",0x10,8,uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[1] >> 8 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x100;
                                                      printf(" %-2d by %-2d:   %d\n",0x20,8,uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[1] >> 0x10 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x200;
                                                      printf(" %-2d by %-2d:   %d\n",0x20,0x10,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[1] >> 0x18;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x800;
                                                      printf(" %-2d by %-2d:   %d\n",0x40,0x20,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[2] & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x80;
                                                      printf(" %-2d by %-2d:   %d\n",8,0x10,uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[2] >> 8 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x100;
                                                      printf(" %-2d by %-2d:   %d\n",8,0x20,uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[2] >> 0x10 & 0xff;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x200;
                                                      printf(" %-2d by %-2d:   %d\n",0x10,0x20,
                                                             uVar21);
                                                    }
                                                    uVar21 = (uint)local_128[2] >> 0x18;
                                                    if (uVar21 != 0) {
                                                      uVar37 = uVar37 + uVar21 * 0x800;
                                                      printf(" %-2d by %-2d:   %d\n",0x20,0x40,
                                                             uVar21);
                                                    }
                                                    printf("%d total pixels.\n",uVar37);
                                                  }
                                                  goto LAB_080737dc;
                                                  }
                                                  puVar10 = (undefined4 *)
                                                            strtoul(local_264[0],(char **)0x0,0x10);
                                                  printf("Raw 32bit value at %08x: %08x\n",puVar10,
                                                         *puVar10);
                                                  cVar24 = *__s1;
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"log_translation");
                                                    pcVar6 = local_264[0];
                                                    if ((iVar16 != 0) || (uVar15 != 2))
                                                    goto LAB_08072a68;
                                                    printf(
                                                  "Logging recompiled block information to %s.\n",
                                                  local_264[0]);
                                                  FUN_080711e8(*(undefined4 *)(*param_1 + 0x2308),
                                                               pcVar6);
                                                  cVar24 = *__s1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"special_block_pointers");
                                                    if ((iVar16 != 0) || (uVar15 != 1))
                                                    goto LAB_08072a48;
                                                    printf("IRQ block ptr: %p\n",
                                                           *(undefined4 *)(*param_1 + 0x231c));
                                                    printf("SWI block ptr: %p\n",
                                                           *(undefined4 *)(*param_1 + 0x2320));
                                                    cVar24 = *__s1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"alternate_cpu_state");
                                                    if (iVar16 == 0) {
                                                      if (uVar15 != 1) {
                                                        iVar16 = strcmp(__s1,"div_status");
                                                        if (iVar16 != 0) goto LAB_080729d0;
                                                        goto LAB_080729f0;
                                                      }
                                                      FUN_08071f34(*(int *)(*param_1 + 0x2378) +
                                                                   0x2108,param_3);
                                                      cVar24 = *__s1;
                                                    }
                                                    else {
                                                      iVar16 = strcmp(__s1,"scheduler_state");
                                                      if (iVar16 != 0) goto LAB_08072f40;
                                                      if (uVar15 != 1) goto LAB_080729f0;
                                                      FUN_08015824(*(undefined4 *)
                                                                    (*param_1 + 0x2308));
                                                      cVar24 = *__s1;
                                                    }
                                                  }
                                                  goto LAB_080730d4;
                                                  }
                                                  uVar37 = strtoul(local_264[0],(char **)0x0,0x10);
                                                  uVar9 = strtoul(local_264[1],(char **)0x0,0x10);
                                                  uVar30 = strtoul(local_264[2],(char **)0x0,0x10);
                                                  printf("Scanning %08x to %08x for %04x...\n",
                                                         uVar37,uVar9,uVar30);
                                                  for (; uVar37 < uVar9; uVar37 = uVar37 + 2) {
                                                    uVar12 = FUN_0801001c(iVar20,uVar37);
                                                    if (uVar12 == uVar30) {
                                                      printf(" Found @ %08x\n",uVar37);
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar16 = strcmp(__s1,"memory_scan_word");
                                                    if ((iVar16 != 0) || (uVar15 != 4))
                                                    goto LAB_08072998;
                                                    uVar37 = strtoul(local_264[0],(char **)0x0,0x10)
                                                    ;
                                                    uVar9 = strtoul(local_264[1],(char **)0x0,0x10);
                                                    uVar30 = strtoul(local_264[2],(char **)0x0,0x10)
                                                    ;
                                                    printf("Scanning %08x to %08x for %08x...\n",
                                                           uVar37,uVar9,uVar30);
                                                    for (; uVar37 < uVar9; uVar37 = uVar37 + 4) {
                                                      uVar12 = FUN_080101a4(iVar20,uVar37);
                                                      if (uVar12 == uVar30) {
                                                        printf(" Found @ %08x\n",uVar37);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          iVar16 = strcmp(__s1,"texture_block");
                                          if ((iVar16 != 0) || (uVar15 != 3)) goto LAB_08072938;
                                          iVar16 = *(int *)(*(int *)(iVar5 + 0x802384) + 0xfba20);
                                          uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                          uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                          uVar37 = uVar30 + 0x1f >> 5;
                                          uVar21 = 0;
                                          if (uVar37 != 0) {
                                            do {
                                              printf("%08x: ",uVar9);
                                              uVar30 = uVar9;
                                              do {
                                                while( true ) {
                                                  uVar25 = uVar30;
                                                  iVar28 = *(int *)(iVar16 + ((uVar25 >> 0x11) +
                                                                             0x448) * 4 + 8);
                                                  if (iVar28 != 0) break;
                                                  printf("(null) ");
                                                  uVar30 = uVar25 + 4;
                                                  if (uVar25 + 4 == uVar9 + 0x20) goto LAB_080734bc;
                                                }
                                                printf("%08x ",(uint)*(byte *)(iVar28 + (uVar25 & 
                                                  0x1ffff)));
                                                uVar30 = uVar25 + 4;
                                              } while (uVar25 + 4 != uVar9 + 0x20);
LAB_080734bc:
                                              uVar9 = uVar25 + 4;
                                              uVar21 = uVar21 + 1;
                                              putchar(10);
                                            } while (uVar21 != uVar37);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar16 = strcmp(__s1,"memset_words");
                                      if ((iVar16 != 0) || (uVar15 != 4)) goto LAB_08072918;
                                      uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                      uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                      uVar12 = strtoul(local_264[2],(char **)0x0,0x10);
                                      if (uVar12 != 0) {
                                        uVar37 = 0;
                                        do {
                                          iVar16 = uVar37 + uVar30;
                                          uVar37 = uVar37 + 4;
                                          FUN_08010714(iVar20,iVar16,uVar9);
                                        } while (uVar37 < uVar12);
                                      }
                                    }
                                  }
                                  goto LAB_080737dc;
                                }
                                uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                FUN_08010560(iVar20,uVar9,uVar30 & 0xffff);
                                cVar24 = *__s1;
                              }
                              else {
                                iVar16 = strcmp(__s1,"store_word");
                                if ((iVar16 != 0) || (uVar15 != 3)) goto LAB_080728f8;
                                uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                                uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                                FUN_08010714(iVar20,uVar9,uVar30);
                                cVar24 = *__s1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        iVar16 = strcmp(__s1,"word_at");
                        if ((iVar16 != 0) || (uVar15 != 2)) goto LAB_080728b4;
                        uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                        uVar11 = FUN_080101a4(iVar20,uVar9);
                        printf("%08x\n",uVar11);
                        cVar24 = *__s1;
                      }
                    }
                    goto LAB_080730d4;
                  }
                  if (uVar15 == 3) {
                    uVar9 = strtoul(local_264[0],(char **)0x0,0x10);
                    uVar30 = strtoul(local_264[1],(char **)0x0,0x10);
                  }
                  else {
                    uVar9 = param_1[0x48];
                    uVar30 = strtoul(local_264[0],(char **)0x0,0x10);
                  }
                  if (uVar30 != 0) {
                    do {
                      uVar11 = FUN_0801001c(iVar20,uVar9);
                      FUN_080761f0(uVar11,local_128,uVar9,0,0);
                      printf("%08x: %08x  %s\n",uVar9,uVar11,local_128);
                      uVar30 = uVar30 - 1;
                      uVar9 = uVar9 + 2;
                    } while (uVar30 != 0);
                  }
                }
LAB_080737dc:
                cVar24 = *__s1;
              }
            }
          }
        }
      }
LAB_080730d4:
      if (cVar24 != 'q') {
        iVar16 = strcmp(__s1,"quit");
        if (iVar16 == 0) {
LAB_08073150:
          if (uVar15 == 1) {
LAB_08072fac:
                    /* WARNING: Subroutine does not return */
            FUN_08004cd4(*(undefined4 *)(*param_1 + 0x2308));
          }
          iVar16 = strcmp(__s1,"break_load_state");
          if (iVar16 != 0) goto LAB_08073170;
LAB_08073144:
          if (cVar24 == 's') {
LAB_08073180:
            if ((uVar15 == 2) &&
               (ppuVar8 = __ctype_b_loc(), ((*ppuVar8)[(byte)__s1[1]] & 0x1000) != 0)) {
              sscanf(__s1,"s%llx",local_128);
              sprintf((char *)(param_1 + 1),"s%llx\n",local_128[0],local_128[1]);
              uVar9 = strtoul(local_264[0],(char **)0x0,10);
              param_1[0x4a] = uVar9 - 1;
              if ((int)((int)local_128[1] - (uint)(local_128[0] == (undefined *)0x0)) < 0 ==
                  (SBORROW4((int)local_128[1],(uint)(local_128[0] == (undefined *)0x0)) != false)) {
LAB_08073738:
                param_1[0x44] = (int)local_128[0];
                param_1[0x45] = (int)local_128[1];
                param_1[0x46] = (int)local_128[0];
                param_1[0x47] = (int)local_128[1];
                *(undefined *)((int)param_1 + 0x131) = 4;
                goto LAB_08072620;
              }
            }
          }
          goto LAB_08072fbc;
        }
        if (cVar24 != '\0') goto LAB_08073124;
        if (uVar15 != 1) goto LAB_08072fbc;
LAB_08072620:
        putchar(10);
        break;
      }
      if (__s1[1] == '\0') {
        if (uVar15 == 1) goto LAB_08072fac;
        iVar16 = strcmp(__s1,"break_load_state");
        if (iVar16 != 0) goto LAB_08072fbc;
LAB_0807313c:
        if (uVar15 != 1) goto LAB_08073144;
        *(undefined *)((int)param_1 + 0x131) = 7;
        goto LAB_08072620;
      }
      iVar16 = strcmp(__s1,"quit");
      if (iVar16 == 0) goto LAB_08073150;
LAB_08073124:
      iVar16 = strcmp(__s1,"break_load_state");
      if (iVar16 == 0) goto LAB_0807313c;
LAB_08073170:
      if (cVar24 == 's') {
        if (uVar15 != 1) goto LAB_08073180;
        ppuVar8 = __ctype_b_loc();
        if ((((*ppuVar8)[(byte)__s1[1]] & 0x1000) == 0) ||
           (sscanf(__s1,"s%llx",local_128),
           (int)((int)local_128[1] - (uint)(local_128[0] == (undefined *)0x0)) < 0 !=
           (SBORROW4((int)local_128[1],(uint)(local_128[0] == (undefined *)0x0)) != false)))
        goto LAB_08072fbc;
        goto LAB_08073738;
      }
LAB_08072fbc:
      if (!bVar4) goto LAB_08072620;
      iVar16 = param_1[0x4a];
      if (iVar16 != 0) goto LAB_080726d8;
LAB_08072fd4:
      printf(": ");
      pcVar6 = fgets(local_228,0xff,stdin);
    } while( true );
  case 2:
    FUN_08071f34(param_1,param_3);
    break;
  case 3:
    if (param_1[0x45] == 0 && (param_2 & 0xfffffffe) == param_1[0x44]) {
      printf("breaking at %llx\n");
      *(undefined *)((int)param_1 + 0x132) = 3;
      *(undefined *)((int)param_1 + 0x131) = 0;
      goto switchD_080725d0_caseD_0;
    }
    break;
  case 4:
    uVar15 = param_1[0x44] - 1;
    uVar37 = param_1[0x45] - (uint)(param_1[0x44] == 0);
    param_1[0x44] = uVar15;
    param_1[0x45] = uVar37;
    if ((uVar15 | uVar37) == 0) {
      puts("countdown breakpoint");
      *(undefined *)((int)param_1 + 0x132) = 4;
      *(undefined *)((int)param_1 + 0x131) = 0;
      goto switchD_080725d0_caseD_0;
    }
    break;
  case 6:
    if ((*(int **)(iVar5 + 0x2308))[1] == param_1[0x45] &&
        **(int **)(iVar5 + 0x2308) == param_1[0x44]) {
      *(undefined *)((int)param_1 + 0x132) = 6;
      *(undefined *)((int)param_1 + 0x131) = 0;
      goto switchD_080725d0_caseD_0;
    }
  }
  uVar15 = param_1[0x42];
  param_1[0x42] = uVar15 + 1;
  param_1[0x43] = param_1[0x43] + (uint)(0xfffffffe < uVar15);
  return;
LAB_0807467c:
  uVar37 = uVar37 + 1;
  putchar(10);
  iVar16 = iVar16 + 0x80f40;
  __s1 = local_268;
  if (local_29c < uVar37) goto LAB_080737dc;
  goto LAB_08072bbc;
}


