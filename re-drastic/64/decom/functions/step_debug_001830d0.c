/*
 * Ghidra decompilation
 *
 * Function : step_debug
 * Address  : 001830d0
 * Program  : drastic64
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void step_debug(long *param_1,ulong param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  undefined uVar12;
  bool bVar13;
  bool bVar14;
  undefined uVar15;
  byte bVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  char *pcVar22;
  size_t sVar23;
  long lVar24;
  ushort *puVar25;
  ushort **ppuVar26;
  long lVar27;
  undefined4 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  uint uVar31;
  ulong uVar32;
  ushort uVar33;
  ushort uVar34;
  long lVar35;
  undefined1 *__s;
  char cVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  char **ppcVar40;
  ulong uVar41;
  ulong uVar42;
  uint *puVar43;
  uint uVar44;
  long lVar45;
  uint uVar46;
  long lVar47;
  char *local_228;
  uint local_220;
  long local_1d0;
  char *local_1c8 [4];
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  char *pcStack_190;
  char *local_188;
  char *local_180 [4];
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_8;
  
  uVar21 = *(undefined4 *)(param_1 + 0x24);
  local_8 = ___stack_chk_guard;
  bVar16 = *(byte *)((long)param_1 + 0x131);
  *(int *)(param_1 + 0x24) = (int)param_2;
  *(undefined4 *)((long)param_1 + 0x124) = uVar21;
  lVar35 = *param_1;
  if (bVar16 == 3) {
    if ((param_2 & 0xfffffffe) != param_1[0x22]) goto LAB_00183148;
    __printf_chk(1,"breaking at %lx\n");
    *(undefined2 *)((long)param_1 + 0x131) = 0x300;
    print_debug(param_1,param_3);
  }
  else if (bVar16 < 4) {
    if (bVar16 != 0) {
      if (bVar16 == 2) {
        print_debug(param_1,param_3);
      }
      goto LAB_00183148;
    }
    print_debug(param_1,param_3);
  }
  else if (bVar16 == 4) {
    lVar27 = param_1[0x22];
    param_1[0x22] = lVar27 + -1;
    if (lVar27 + -1 != 0) goto LAB_00183148;
    puts("countdown breakpoint");
    *(undefined2 *)((long)param_1 + 0x131) = 0x400;
    print_debug(param_1,param_3);
  }
  else {
    if ((bVar16 != 6) || (**(long **)(lVar35 + 0x2258) != param_1[0x22])) goto LAB_00183148;
    *(undefined2 *)((long)param_1 + 0x131) = 0x600;
    print_debug(param_1,param_3);
  }
  lVar27 = lVar35 + 0x23d0;
  local_228 = "bg%d ";
  local_188 = (char *)0x0;
  local_180[0] = (char *)0x0;
  local_180[1] = (char *)0x0;
  local_180[2] = (char *)0x0;
  local_180[3] = (char *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
LAB_00183208:
  do {
    __s = repeat_command_11261;
    if (repeat_command_11261 == (char *)0x0) {
      if (*(int *)(param_1 + 0x25) == 0) {
        __printf_chk(1,&DAT_002231e0);
        pcVar22 = fgets(_command_11260,0xff,_stdin);
      }
      else {
        *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
        pcVar22 = (char *)__strcpy_chk(_command_11260,param_1 + 1,0x100);
      }
      if (pcVar22 == (char *)0x0) goto LAB_00183208;
      __s = _command_11260;
    }
    repeat_command_11261 = strchr(__s,0x3b);
    if (repeat_command_11261 != (char *)0x0) {
      pcVar22 = repeat_command_11261 + 1;
      *repeat_command_11261 = '\0';
      repeat_command_11261 = (char *)skip_whitespace(pcVar22);
      if (*repeat_command_11261 == '\0') {
        repeat_command_11261 = (char *)0x0;
      }
    }
    sVar23 = strlen(__s);
    iVar18 = (int)sVar23;
    local_188 = __s;
    if ((iVar18 == 0) || ((__s[iVar18 - 1U] == '\n' && (__s[iVar18 - 1U] = '\0', iVar18 == 1)))) {
      iVar18 = strcmp(__s,"break");
      if (iVar18 == 0) {
        uVar31 = 1;
        goto LAB_00183760;
      }
      iVar18 = strcmp(__s,"resume");
      if (iVar18 == 0) {
LAB_00183ab0:
        uVar31 = 1;
        uVar12 = false;
        *(undefined *)((long)param_1 + 0x131) = *(undefined *)((long)param_1 + 0x132);
      }
      else if ((*__s == 'r') && (__s[1] == '\0')) {
LAB_001838e8:
        uVar31 = 1;
        uVar12 = false;
        *(undefined *)((long)param_1 + 0x131) = 1;
      }
      else {
        bVar13 = false;
        uVar31 = 1;
LAB_00183954:
        iVar18 = strcmp(__s,"run");
        if (iVar18 == 0) goto LAB_00183318;
        iVar18 = strcmp(__s,"step_run");
        if (iVar18 != 0 || uVar31 != 1) goto LAB_00183320;
        uVar31 = 1;
        uVar12 = false;
        *(undefined *)((long)param_1 + 0x131) = 2;
      }
      goto LAB_001838f8;
    }
    ppcVar40 = local_1c8 + 8;
    uVar31 = 1;
    pcVar22 = strchr(__s,0x20);
    if (pcVar22 == (char *)0x0) {
      iVar18 = strcmp(__s,"break");
      if (iVar18 == 0) goto LAB_00183760;
      bVar13 = false;
      iVar18 = strcmp(__s,"resume");
      if (iVar18 == 0) goto LAB_00183ab0;
LAB_00183304:
      if ((*__s != 'r') || (__s[1] != '\0')) goto LAB_00183954;
LAB_00183318:
      if (uVar31 == 1) goto LAB_001838e8;
LAB_00183320:
      iVar18 = strcmp(__s,"next_frame");
      if ((iVar18 == 0) && (uVar31 - 1 < 2)) {
        uVar32 = 1;
        if (bVar13) {
          uVar32 = strtoul(local_180[0],(char **)0x0,10);
          uVar32 = uVar32 & 0xffffffff;
        }
        *(undefined *)((long)param_1 + 0x131) = 6;
        uVar12 = false;
        param_1[0x22] = **(long **)(*param_1 + 0x2258) + uVar32;
        goto LAB_0018376c;
      }
      iVar18 = strcmp(__s,"write_break");
      if (iVar18 == 0 && bVar13) {
        uVar31 = 2;
        uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
        uVar12 = false;
        param_1[0x22] = uVar32;
        *(undefined *)((long)param_1 + 0x131) = 5;
        goto LAB_00183a40;
      }
      iVar18 = strcmp(__s,"disasm_arm_block");
      if (iVar18 == 0) {
        if (uVar31 - 2 < 2) {
          if (uVar31 == 3) {
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          }
          else {
            uVar32 = (ulong)*(uint *)(param_1 + 0x24);
            uVar29 = strtoul(local_180[0],(char **)0x0,0x10);
          }
          uVar42 = uVar29 & 0xffffffff;
          uVar37 = (uint)uVar29;
          while (uVar37 != 0) {
            uVar29 = load_memory32(lVar27,uVar32 & 0xffffffff);
            disasm_arm_instruction(uVar29,&local_108,uVar32 & 0xffffffff,0,0);
            __printf_chk(1,"%08x: %08x  %s\n",uVar32 & 0xffffffff,uVar29 & 0xffffffff,&local_108);
            uVar32 = (ulong)((int)uVar32 + 4);
            uVar37 = (int)uVar42 - 1;
            uVar42 = (ulong)uVar37;
          }
          goto LAB_00183a3c;
        }
LAB_0018337c:
        iVar18 = strcmp(__s,"byte_at");
        if (iVar18 == 0) {
          if (!bVar13) goto LAB_00183394;
          uVar31 = 2;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar15 = load_memory8(lVar27,uVar32 & 0xffffffff);
          uVar12 = true;
          __printf_chk(1,"%02x\n",uVar15);
          goto LAB_00183a40;
        }
        iVar18 = strcmp(__s,"halfword_at");
        if (iVar18 != 0) {
          iVar18 = strcmp(__s,"word_at");
          if (iVar18 != 0 || !bVar13) goto LAB_00183394;
          uVar31 = 2;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar21 = load_memory32(lVar27,uVar32 & 0xffffffff);
          uVar12 = true;
          __printf_chk(1,"%08x\n",uVar21);
          goto LAB_00183a40;
        }
        if (bVar13) {
          uVar31 = 2;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar17 = load_memory16(lVar27,uVar32 & 0xffffffff);
          uVar12 = true;
          __printf_chk(1,"%04x\n",uVar17);
          goto LAB_00183a40;
        }
LAB_00183394:
        iVar18 = strcmp(__s,"watch_address");
        pcVar22 = local_180[0];
        if ((iVar18 == 0) && (uVar31 - 2 < 2)) {
          iVar18 = strcmp(local_180[0],"off");
          if (iVar18 == 0) {
            uVar12 = true;
            puts("No longer watching anything.");
            *(undefined *)((long)param_1 + 0x133) = 0;
          }
          else {
            uVar32 = strtoul(pcVar22,(char **)0x0,0x10);
            *(int *)((long)param_1 + 300) = (int)uVar32;
            uVar32 = uVar32 & 0xffffffff;
            if (uVar31 == 3) {
              uVar32 = strtoul(local_180[1],(char **)0x0,10);
              uVar37 = *(int *)((long)param_1 + 300) + (int)uVar32;
              uVar32 = (ulong)uVar37;
              *(uint *)((long)param_1 + 300) = uVar37;
            }
            *(undefined *)((long)param_1 + 0x133) = 1;
            uVar12 = true;
            __printf_chk(1,"Watching %08x.\n",uVar32);
          }
          goto LAB_00183a40;
        }
        iVar18 = strcmp(__s,"store_byte");
        if (iVar18 == 0) {
          if (uVar31 != 3) goto LAB_001833d0;
          uVar12 = true;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          store_memory8(lVar27,uVar32 & 0xffffffff,uVar29 & 0xffffffff);
          goto LAB_00183a40;
        }
        iVar18 = strcmp(__s,"store_halfword");
        if (iVar18 != 0) {
          iVar18 = strcmp(__s,"store_word");
          if (iVar18 != 0 || uVar31 != 3) goto LAB_001833d0;
          uVar31 = 3;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar12 = true;
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          store_memory32(lVar27,uVar32 & 0xffffffff,uVar29 & 0xffffffff);
          goto LAB_00183a40;
        }
        if (uVar31 == 3) {
          uVar12 = true;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          store_memory16(lVar27,uVar32 & 0xffffffff,uVar29 & 0xffffffff);
          goto LAB_00183a40;
        }
LAB_001833d0:
        iVar18 = strcmp(__s,"memset_bytes");
        if (iVar18 != 0) {
          iVar18 = strcmp(__s,"memset_halfwords");
          if (iVar18 == 0) {
            if (uVar31 == 4) {
              uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
              uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
              uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
              if ((uint)uVar42 != 0) {
                uVar37 = 0;
                do {
                  iVar18 = (int)uVar29 + uVar37;
                  uVar37 = uVar37 + 2;
                  store_memory16(lVar27,iVar18,(uint)uVar32 & 0xffff);
                } while (uVar37 < (uint)uVar42);
              }
              goto LAB_00183a3c;
            }
            goto LAB_001833ec;
          }
          iVar18 = strcmp(__s,"memset_words");
          if (iVar18 != 0 || uVar31 != 4) goto LAB_001833ec;
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
          if ((uint)uVar42 != 0) {
            uVar31 = 0;
            do {
              iVar18 = (int)uVar29 + uVar31;
              uVar31 = uVar31 + 4;
              store_memory32(lVar27,iVar18,uVar32 & 0xffffffff);
            } while (uVar31 < (uint)uVar42);
          }
LAB_0018415c:
          uVar31 = 4;
          goto LAB_00183a3c;
        }
        if (uVar31 == 4) {
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
          if ((int)uVar42 != 0) {
            uVar41 = uVar29 & 0xffffffff;
            do {
              uVar37 = (int)uVar41 + 1;
              store_memory8(lVar27,uVar41,(uint)uVar32 & 0xff);
              uVar41 = (ulong)uVar37;
            } while (uVar37 != (int)uVar29 + (int)uVar42);
          }
          goto LAB_00183a3c;
        }
LAB_001833ec:
        iVar18 = strcmp(__s,"memory_block");
        if (iVar18 != 0) {
          iVar18 = strcmp(__s,"texture_block");
          bVar14 = uVar31 == 3;
          if (iVar18 == 0 && bVar14) {
            lVar24 = *(long *)(*(long *)(nds_system + lVar35 + 0xb063d8) + 0xfba70);
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
            iVar18 = (int)(uVar29 + 0x1f >> 5);
            if (iVar18 != 0) {
              uVar31 = (uint)uVar32;
              iVar19 = 0;
              do {
                uVar32 = (ulong)uVar31;
                __printf_chk(1,"%08x: ",uVar32);
                do {
                  while( true ) {
                    uVar37 = (uint)uVar32;
                    lVar45 = *(long *)(lVar24 + ((ulong)(uVar37 >> 0x11) + 0x430) * 8);
                    if (lVar45 != 0) break;
                    uVar32 = (ulong)(uVar37 + 4);
                    __printf_chk(1,"(null) ");
                    if (uVar37 + 4 == uVar31 + 0x20) goto LAB_001849e4;
                  }
                  uVar29 = uVar32 & 0x1ffff;
                  uVar32 = (ulong)(uVar37 + 4);
                  __printf_chk(1,"%08x ",*(undefined *)(uVar29 + lVar45));
                } while (uVar37 + 4 != uVar31 + 0x20);
LAB_001849e4:
                uVar31 = uVar37 + 4;
                iVar19 = iVar19 + 1;
                putchar(10);
              } while (iVar18 != iVar19);
            }
          }
          else {
            iVar18 = strcmp(__s,"palette");
            if (iVar18 == 0 && uVar31 == 1) goto LAB_00184b58;
            iVar18 = strcmp(__s,"gamecard_block");
            if (iVar18 != 0 || !bVar14) goto LAB_0018342c;
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
            iVar18 = (int)(uVar29 + 0x1f >> 5);
            lVar24 = *(long *)(*(long *)(*(long *)(*param_1 + 0x2258) + 0xc40) + 8);
            if (iVar18 != 0) {
              uVar31 = (uint)uVar32;
              iVar19 = 0;
              do {
                uVar37 = uVar31 + 0x20;
                __printf_chk(1,"%08x: ",uVar31);
                do {
                  uVar20 = uVar31 >> 2;
                  uVar31 = uVar31 + 4;
                  __printf_chk(1,"%08x ",*(undefined4 *)(lVar24 + (ulong)uVar20 * 4));
                } while (uVar31 != uVar37);
                iVar19 = iVar19 + 1;
                putchar(10);
              } while (iVar18 != iVar19);
            }
          }
          uVar31 = 3;
          uVar12 = true;
          goto LAB_00183a40;
        }
        if (uVar31 == 3) {
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
          iVar18 = (int)(uVar29 + 0x1f >> 5);
          if (iVar18 == 0) goto LAB_00183a3c;
          iVar39 = 0;
          iVar19 = (int)uVar32;
          do {
            iVar38 = iVar19 + 0x20;
            __printf_chk(1,"%08x: ",iVar19);
            iVar8 = iVar19;
            do {
              uVar21 = load_memory32(lVar27,iVar8);
              iVar8 = iVar8 + 4;
              __printf_chk(1,"%08x ",uVar21);
            } while (iVar38 != iVar8);
            __printf_chk(1,&DAT_00222538);
            do {
              while ((uVar32 = load_memory8(lVar27,iVar19), 0xd < ((uint)uVar32 & 0xff) ||
                     ((0x2601UL >> (uVar32 & 0x3f) & 1) == 0))) {
                iVar19 = iVar19 + 1;
                __printf_chk(1,&DAT_00223368);
                if (iVar38 == iVar19) goto LAB_00184b0c;
              }
              iVar19 = iVar19 + 1;
              putchar(0x20);
            } while (iVar38 != iVar19);
LAB_00184b0c:
            iVar39 = iVar39 + 1;
            putchar(10);
            iVar19 = iVar38;
          } while (iVar18 != iVar39);
          uVar12 = true;
          goto LAB_00183a40;
        }
        iVar18 = strcmp(__s,"palette");
        bVar14 = iVar18 == 0 && uVar31 == 1;
        if (bVar14) {
LAB_00184b58:
          iVar18 = 0x5000020;
          uVar37 = 0x10;
          lVar24 = *(long *)(nds_system + lVar35 + 0xb063d8);
          puts("Main:");
          do {
            uVar20 = uVar37 - 0x10;
            __printf_chk(1,"%08x: ",iVar18);
            do {
              uVar32 = (ulong)uVar20;
              uVar20 = uVar20 + 1;
              __printf_chk(1,"%04x ",*(undefined2 *)(lVar24 + (uVar32 + 0xb038) * 2));
            } while (uVar37 != uVar20);
            uVar37 = uVar37 + 0x10;
            putchar(10);
            iVar18 = iVar18 + 0x20;
          } while (uVar37 != 0x410);
          iVar18 = 0x5000020;
          uVar37 = 0x10;
          puts("\nShadow:");
          do {
            uVar20 = uVar37 - 0x10;
            __printf_chk(1,"%08x: ",iVar18);
            do {
              uVar32 = (ulong)uVar20;
              uVar20 = uVar20 + 1;
              __printf_chk(1,"%04x ",*(undefined2 *)(lVar24 + (uVar32 + 0xb438) * 2));
            } while (uVar37 != uVar20);
            uVar37 = uVar37 + 0x10;
            putchar(10);
            iVar18 = iVar18 + 0x20;
          } while (uVar37 != 0x410);
          uVar12 = true;
          goto LAB_001838f8;
        }
LAB_0018342c:
        bVar11 = uVar31 == 1;
        iVar18 = strcmp(__s,"memory_scan_byte");
        if (iVar18 == 0) {
          if (uVar31 == 4) {
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
            uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
            __printf_chk(1,"Scanning %08x to %08x for %02x...\n",uVar32 & 0xffffffff,
                         uVar29 & 0xffffffff,uVar42);
            if ((uint)uVar32 < (uint)uVar29) {
              do {
                bVar16 = load_memory8(lVar27,uVar32 & 0xffffffff);
                if ((uint)uVar42 == (uint)bVar16) {
                  __printf_chk(1," Found @ %08x\n",uVar32 & 0xffffffff);
                }
                uVar37 = (int)uVar32 + 1;
                uVar32 = (ulong)uVar37;
              } while ((uint)uVar29 != uVar37);
            }
            goto LAB_00183a3c;
          }
        }
        else {
          iVar18 = strcmp(__s,"memory_scan_hword");
          if (iVar18 == 0) {
            if (uVar31 == 4) {
              uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
              uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
              uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
              __printf_chk(1,"Scanning %08x to %08x for %04x...\n",uVar32 & 0xffffffff,
                           uVar29 & 0xffffffff,uVar42);
              uVar37 = (uint)uVar32;
              while (uVar37 < (uint)uVar29) {
                uVar34 = load_memory16(lVar27,uVar32 & 0xffffffff);
                if ((uint)uVar42 == (uint)uVar34) {
                  __printf_chk(1," Found @ %08x\n",uVar32 & 0xffffffff);
                }
                uVar37 = (int)uVar32 + 2;
                uVar32 = (ulong)uVar37;
              }
              goto LAB_00183a3c;
            }
          }
          else {
            iVar18 = strcmp(__s,"memory_scan_word");
            if (iVar18 == 0 && uVar31 == 4) {
              uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
              uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
              uVar42 = strtoul(local_180[2],(char **)0x0,0x10);
              __printf_chk(1,"Scanning %08x to %08x for %08x...\n",uVar32 & 0xffffffff,
                           uVar29 & 0xffffffff,uVar42);
              uVar31 = (uint)uVar32;
              while (uVar31 < (uint)uVar29) {
                iVar18 = load_memory32(lVar27,uVar32 & 0xffffffff);
                if (iVar18 == (int)uVar42) {
                  __printf_chk(1," Found @ %08x\n",uVar32 & 0xffffffff);
                }
                uVar31 = (int)uVar32 + 4;
                uVar32 = (ulong)uVar31;
              }
              goto LAB_0018415c;
            }
          }
        }
        iVar18 = strcmp(__s,"state");
        if (iVar18 != 0) {
          iVar18 = strcmp(__s,"alternate_cpu_state");
          if (iVar18 == 0) {
            if (!bVar11) goto LAB_00183fa8;
            uVar12 = true;
            print_debug(*(long *)(*param_1 + 0x22a0) + 0x2118,param_3);
            goto LAB_001838f8;
          }
          iVar18 = strcmp(__s,"scheduler_state");
          if (iVar18 == 0) {
            if (!bVar11) goto LAB_001834a4;
            uVar12 = true;
            print_scheduler_state(*(undefined8 *)(*param_1 + 0x2258));
            goto LAB_001838f8;
          }
LAB_00183488:
          iVar18 = strcmp(__s,"div_status");
LAB_0018349c:
          if (iVar18 != 0) {
LAB_00183fd8:
            iVar18 = strcmp(__s,"coprocessor_status");
            if (iVar18 != 0 || !bVar11) goto LAB_001834a4;
            if (*(long *)(*param_1 + 0x2250) != 0) {
              uVar12 = true;
              print_coprocessor_status(param_1);
              goto LAB_001838f8;
            }
            goto LAB_00184050;
          }
          if (bVar11) {
            lVar24 = *(long *)(*param_1 + 0x2080);
            uVar12 = true;
            __printf_chk(1,"DIV: %016lx / %016lx =\n  %016lx,  %016lx\n",
                         *(undefined8 *)(lVar24 + 0x290),*(undefined8 *)(lVar24 + 0x298),
                         *(undefined8 *)(lVar24 + 0x2a0),*(undefined8 *)(lVar24 + 0x2a8));
            goto LAB_001838f8;
          }
LAB_001834a4:
          iVar18 = strcmp(__s,"stack");
          if (iVar18 == 0 && bVar13) {
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            lVar24 = *param_1;
            iVar18 = *(int *)(lVar24 + 0x23a4);
            puts("Stack:");
            if ((int)uVar32 != 0) {
              iVar19 = 0;
              do {
                iVar39 = iVar18 + 0x14;
                do {
                  uVar21 = load_memory32(lVar24 + 0x23d0,iVar18);
                  iVar18 = iVar18 + 4;
                  __printf_chk(1," %08x",uVar21);
                } while (iVar18 != iVar39);
                iVar19 = iVar19 + 1;
                putchar(10);
                iVar18 = iVar39;
              } while ((int)uVar32 != iVar19);
            }
            uVar31 = 2;
            uVar12 = true;
            putchar(10);
            goto LAB_00183a40;
          }
          iVar18 = strcmp(__s,"user_reg");
          if (iVar18 == 0) {
            if (!bVar11) goto LAB_001834d8;
            lVar24 = *param_1;
            uVar12 = true;
            uVar21 = *(undefined4 *)(lVar24 + 0x2104);
            execute_arm_set_cpu_mode(lVar24,0);
            print_arm_registers(param_1,0xffff);
            execute_arm_set_cpu_mode(lVar24,uVar21);
            goto LAB_001838f8;
          }
          iVar18 = strcmp(__s,"step_alternate_cpu");
          if (iVar18 != 0) {
            iVar18 = strcmp(__s,"special_block_pointers");
            if (iVar18 != 0 || !bVar11) goto LAB_001834d8;
            uVar12 = true;
            __printf_chk(1,"IRQ block ptr: %p\n",*(undefined8 *)(*param_1 + 0x2280));
            __printf_chk(1,"SWI block ptr: %p\n",*(undefined8 *)(*param_1 + 0x2288));
            goto LAB_001838f8;
          }
          if (bVar11) {
            puts("Stepping alternate CPU.");
            uVar12 = true;
            *(undefined *)(*(long *)(*param_1 + 0x22a0) + 0x2249) = 0;
            goto LAB_001838f8;
          }
LAB_001834d8:
          iVar18 = strcmp(__s,"block_lookup");
          if (iVar18 == 0) {
            if (!bVar13) goto LAB_001834f0;
            lVar45 = *param_1;
            lVar24 = *(long *)(lVar45 + 0x2088);
            uVar29 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar32 = uVar29 >> 2;
            uVar31 = (uint)uVar32;
            uVar37 = (uint)uVar29;
            if (*(uint *)(lVar45 + 0x80 + (uVar32 & 0x3ff) * 4) == uVar37) {
              __printf_chk(1,"mini hash: %08x -> %p (%08x)\n",uVar29 & 0xffffffff,
                           lVar24 + (ulong)*(uint *)(lVar45 + 0x80 +
                                                    (ulong)((uVar31 & 0x3ff) + 0x400) * 4));
            }
            bVar13 = *(int *)(lVar45 + 0x210c) == 1;
            if (bVar13 && uVar37 < 0x1ffffff || bVar13 && uVar37 == 0x1ffffff) {
              if ((uVar29 & 1) == 0) {
                uVar37 = *(uint *)(*(long *)(lVar45 + 0x2270) + (uVar32 & 0x1fff) * 4);
              }
              else {
                uVar37 = *(uint *)(*(long *)(lVar45 + 0x2278) + (uVar29 >> 1 & 0x3fff) * 4);
              }
              if (uVar37 == 0) {
                uVar31 = 2;
                uVar12 = true;
                __printf_chk(1,"ITCM block: %08x unallocated\n",uVar29 & 0xffffffff);
              }
              else {
                uVar31 = 2;
                uVar12 = true;
                __printf_chk(1,"ITCM block: %08x -> %p\n",uVar29 & 0xffffffff,lVar24 + (ulong)uVar37
                            );
              }
            }
            else {
              lVar45 = *(long *)(lVar45 + 0x2088) + 0x1300000;
              if (uVar37 >> 0x18 == 2) {
                pcVar22 = "main";
                uVar31 = uVar31 & 0x7fff;
              }
              else {
                pcVar22 = "alternate";
                uVar31 = uVar31 & 0x1fff;
              }
              lVar47 = lVar45 + (ulong)uVar31 * 0x10;
              uVar20 = *(uint *)(lVar45 + (ulong)uVar31 * 0x10);
              if (uVar20 == uVar37) {
                uVar31 = 2;
                uVar12 = true;
                __printf_chk(1,"%s block: %08x -> %p (%x) (hash A)\n",pcVar22,uVar20,
                             lVar24 + (ulong)*(uint *)(lVar47 + 4));
              }
              else {
                uVar20 = *(uint *)(lVar47 + 0xc);
                if (*(uint *)(lVar47 + 8) == uVar37) {
                  uVar31 = 2;
                  uVar12 = true;
                  __printf_chk(1,"%s block: %08x -> %p (%x) (hash B)\n",pcVar22,
                               *(uint *)(lVar47 + 8),lVar24 + (ulong)uVar20);
                }
                else if (uVar20 == 0) {
                  uVar31 = 2;
                  uVar12 = true;
                  __printf_chk(1,"%s block: %08x unallocated\n",pcVar22,uVar29 & 0xffffffff);
                }
                else {
                  uVar31 = *(uint *)(lVar24 + (ulong)*(uint *)(lVar24 + (ulong)uVar20 + -4));
                  uVar32 = (ulong)uVar31;
                  if (uVar31 != 0) {
                    uVar31 = 0;
                    do {
                      if (*(uint *)(lVar24 + uVar32 + 4) == uVar37) {
                        __printf_chk(1,"%s block: %08x -> %p (LL %d)\n",pcVar22,uVar29 & 0xffffffff,
                                     lVar24 + (ulong)*(uint *)(lVar24 + uVar32 + 8),uVar31);
                        uVar32 = (ulong)uVar31;
                        goto LAB_00185bf4;
                      }
                      puVar43 = (uint *)(lVar24 + uVar32);
                      uVar32 = (ulong)*puVar43;
                      uVar31 = uVar31 + 1;
                    } while (*puVar43 != 0);
                    uVar32 = (ulong)uVar31;
                  }
LAB_00185bf4:
                  uVar31 = 2;
                  uVar12 = true;
                  __printf_chk(1,"%s block: %08x unallocated (LL %d)\n",pcVar22,uVar29 & 0xffffffff,
                               uVar32);
                }
              }
            }
            goto LAB_00183a40;
          }
          iVar18 = strcmp(__s,"raw_read");
          if (iVar18 != 0) {
            iVar18 = strcmp(__s,"log_translation");
            pcVar22 = local_180[0];
            if (iVar18 != 0 || !bVar13) goto LAB_001834f0;
            __printf_chk(1,"Logging recompiled block information to %s.\n",local_180[0]);
            uVar12 = true;
            uVar31 = 2;
            cpu_block_log_all(*(undefined8 *)(*param_1 + 0x2258),pcVar22);
            goto LAB_00183a40;
          }
          if (bVar13) {
            uVar31 = 2;
            puVar28 = (undefined4 *)strtoul(local_180[0],(char **)0x0,0x10);
            uVar12 = true;
            __printf_chk(1,"Raw 32bit value at %p: %08x\n",puVar28,*puVar28);
            goto LAB_00183a40;
          }
LAB_001834f0:
          iVar18 = strcmp(__s,"cpu_map");
          if ((iVar18 == 0) && (uVar31 - 2 < 2)) {
            uVar29 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar32 = uVar29 & 0xffffffff;
            uVar20 = (uint)uVar29;
            uVar37 = uVar20 + 1;
            if (bVar14) {
              uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
              uVar37 = (uint)uVar29;
            }
            while (uVar20 < uVar37) {
              uVar29 = *(ulong *)(*param_1 + ((ulong)((uint)uVar32 >> 0xb) + 0x47a) * 8);
              if ((uVar29 & 0x3fffffffffffffff) == 0) {
                __printf_chk(1,"  %x: page is unallocated.\n",uVar32,uVar29,uVar29 * 4);
              }
              else {
                __printf_chk(1,"  %x: page %p (points to %p)\n",uVar32,uVar29,uVar29 * 4 + uVar32);
              }
              uVar20 = (uint)uVar32 + 0x800;
              uVar32 = (ulong)uVar20;
            }
LAB_00184fc8:
            if (*__s != 'q') {
              uVar12 = true;
              goto LAB_00183a4c;
            }
            uVar12 = true;
            if (__s[1] != '\0') {
              uVar12 = true;
              goto LAB_00183a4c;
            }
            goto LAB_00183788;
          }
          iVar18 = strcmp(__s,"geometry_log");
          if ((iVar18 == 0) && (uVar31 - 1 < 2)) {
            if (bVar13) {
              lVar24 = strtol(local_180[0],(char **)0x0,10);
              nds_system[*(long *)(*param_1 + 0x2258) + 0x362e6d9] = (char)lVar24;
            }
            else {
              nds_system[*(long *)(*param_1 + 0x2258) + 0x362e6d9] = 1;
            }
            uVar12 = true;
            __printf_chk(1,"Logging geometry next %d frames.\n",
                         nds_system[*(long *)(*param_1 + 0x2258) + 0x362e6d9]);
            nds_system[*(long *)(*param_1 + 0x2258) + 0x362e6d8] = 1;
            goto LAB_0018376c;
          }
          iVar18 = strcmp(__s,"vram_cpu_map");
          if ((iVar18 == 0) && (uVar31 - 2 < 2)) {
            uVar29 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar32 = uVar29 & 0xffffffff;
            uVar20 = (uint)uVar29;
            uVar37 = uVar20 + 1;
            if (bVar14) {
              uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
              uVar37 = (uint)uVar29;
            }
            while (uVar20 < uVar37) {
              uVar30 = memory_vram_arm9_get_page_pointer
                                 (*(undefined8 *)(nds_system + *param_1 + 0xb063d8),uVar32);
              uVar20 = (int)uVar32 + 0x4000;
              __printf_chk(1," %x: VRAM map points to %p\n",uVar32,uVar30);
              uVar32 = (ulong)uVar20;
            }
            goto LAB_00184fc8;
          }
          iVar18 = strcmp(__s,"vram_force_dirty");
          if (iVar18 == 0 && bVar13) {
            uVar31 = 2;
            uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
            uVar12 = true;
            *(int *)(nds_system + *(long *)(*param_1 + 0x2258) + 0x362e738) = (int)uVar32;
            goto LAB_00183a40;
          }
          iVar18 = strcmp(__s,"texture_slot_map");
          if (iVar18 != 0) {
            iVar18 = strcmp(__s,"textures");
            if (iVar18 == 0) {
              if (!bVar11) {
                iVar18 = strcmp(__s,"vram_map");
                goto LAB_001846d8;
              }
              puVar43 = *(uint **)(nds_system + *(long *)(*param_1 + 0x2258) + 0x352cb88);
              if (puVar43 != (uint *)0x0) {
                iVar18 = 0;
                do {
                  iVar19 = (uint)*(ushort *)(puVar43 + 0x10) *
                           (uint)*(ushort *)((long)puVar43 + 0x42);
                  if ((*(byte *)((long)puVar43 + 0x49) & 0xfd) == 5) {
                    iVar19 = iVar19 * 4;
                  }
                  uVar21 = game_database_generate_crc32_from_memory
                                     (*(undefined8 *)(puVar43 + 4),iVar19);
                  __printf_chk(1,
                               "Texture %04d: %d by %d, format %d, allocated @ %08x:%x (crc32 %x)\n"
                               ,iVar18,*(undefined2 *)(puVar43 + 0x10),
                               *(undefined2 *)((long)puVar43 + 0x42),
                               *(undefined *)((long)puVar43 + 0x49),(*puVar43 & 0xffff) << 3,
                               puVar43[1],uVar21);
                  puVar43 = *(uint **)(puVar43 + 0xc);
                  iVar18 = iVar18 + 1;
                } while (puVar43 != (uint *)0x0);
                uVar12 = true;
                goto LAB_001838f8;
              }
            }
            else {
              iVar18 = strcmp(__s,"vram_map");
              if (iVar18 != 0) {
LAB_001846dc:
                iVar18 = strcmp(__s,"vram_ptrs");
                if (iVar18 == 0 && bVar11) {
                  uVar32 = 0;
                  do {
                    lVar24 = uVar32 + 0x6da7ec;
                    iVar18 = (int)uVar32;
                    uVar37 = iVar18 + 1;
                    uVar32 = (ulong)uVar37;
                    __printf_chk(1,"VRAM bank %c: %p\n",iVar18 + 0x41,
                                 *(undefined8 *)(*(long *)(*param_1 + 0x2258) + lVar24 * 8));
                  } while (uVar37 != 9);
                  uVar12 = true;
                  __printf_chk(1,"NULL video load: %p\n",
                               *(undefined8 *)
                                (nds_system + *(long *)(*param_1 + 0x2258) + 0x30ed998));
                  __printf_chk(1,"NULL video store: %p\n",*(long *)(*param_1 + 0x2258) + 0x367f9a0);
                  goto LAB_001838f8;
                }
                goto LAB_001835ac;
              }
              if (!bVar11) goto LAB_001835ac;
              uVar32 = 0;
              do {
                lVar24 = *(long *)(*param_1 + 0x2258) + uVar32 * 0x10;
                uVar37 = *(uint *)(nds_system + lVar24 + 0x31d5ed0);
                iVar18 = (int)uVar32;
                if (uVar37 == 7) {
                  __printf_chk(1,"bank %c (%02x) ARM7 memory %x to %x\n",iVar18 + 0x41,
                               *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                               (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x4000,
                               (*(int *)(nds_system + lVar24 + 0x31d5edc) +
                               (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x10) * 0x400
                               + -1);
                }
                else if (uVar37 < 8) {
                  if (uVar37 == 4) {
                    __printf_chk(1,"bank %c (%02x) texture slot %d\n",iVar18 + 0x41,
                                 *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                 *(undefined4 *)(nds_system + lVar24 + 0x31d5ed8));
                  }
                  else if (uVar37 < 5) {
                    if (uVar37 < 2) {
                      __printf_chk(1,"bank %c (%02x) extended palette BG %c slot %d\n",iVar18 + 0x41
                                   ,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),uVar37 + 0x41,
                                   *(undefined4 *)(nds_system + lVar24 + 0x31d5ed8));
                    }
                    else if (uVar37 != 4) {
                      __printf_chk(1,"bank %c (%02x) extended palette OBJ %c slot %d\n",
                                   iVar18 + 0x41,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                   uVar37 + 0x3f,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed8));
                    }
                  }
                  else if (uVar37 == 5) {
                    __printf_chk(1,"bank %c (%02x) texture palette slot %d\n",iVar18 + 0x41,
                                 *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                 *(undefined4 *)(nds_system + lVar24 + 0x31d5ed8));
                  }
                  else {
                    __printf_chk(1,"bank %c (%02x) ARM9 memory %x to %x\n",iVar18 + 0x41,
                                 *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                 (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x4000,
                                 (*(int *)(nds_system + lVar24 + 0x31d5edc) +
                                 (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x10) *
                                 0x400 + -1);
                  }
                }
                else if (uVar37 == 10) {
                  iVar19 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x10;
                  iVar39 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x4000;
                  __printf_chk(1,"bank %c (%02x) ARM9 memory mirrored %x to %x and %x to %x\n",
                               iVar18 + 0x41,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),iVar39
                               ,(iVar19 + *(int *)(nds_system + lVar24 + 0x31d5edc)) * 0x400 + -1,
                               iVar39 + 0x10000,
                               (iVar19 + 0x40 + *(int *)(nds_system + lVar24 + 0x31d5edc)) * 0x400 +
                               -1);
                }
                else if (uVar37 < 0xb) {
                  if (uVar37 == 8) {
                    iVar19 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x10;
                    iVar39 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x4000;
                    __printf_chk(1,"bank %c (%02x) ARM9 memory mirrored %x to %x and %x to %x\n",
                                 iVar18 + 0x41,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                 iVar39,(iVar19 + *(int *)(nds_system + lVar24 + 0x31d5edc)) * 0x400
                                        + -1,iVar39 + 0xc000,
                                 (iVar19 + 0x30 + *(int *)(nds_system + lVar24 + 0x31d5edc)) * 0x400
                                 + -1);
                  }
                  else if (uVar37 == 9) {
                    iVar19 = *(int *)(nds_system + lVar24 + 0x31d5edc);
                    iVar39 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x10;
                    iVar8 = (*(int *)(nds_system + lVar24 + 0x31d5ed8) + 0x1800) * 0x4000;
                    __printf_chk(1,
                                 "bank %c (%02x) ARM9 memory mirrored %x to %x, %x to %x, %x to %x, and %x to %x\n"
                                 ,iVar18 + 0x41,*(undefined4 *)(nds_system + lVar24 + 0x31d5ed4),
                                 iVar8,(iVar39 + iVar19) * 0x400 + -1,iVar8 + 0x4000,
                                 (iVar39 + 0x10 + iVar19) * 0x400 + -1,iVar8 + 0x10000,
                                 (iVar39 + 0x40 + iVar19) * 0x400 + -1,iVar8 + 0x14000,
                                 (iVar39 + 0x50 + iVar19) * 0x400 + -1);
                  }
                }
                else if (uVar37 == 0xb) {
                  __printf_chk(1,"bank %c (%02x) unmapped\n",iVar18 + 0x41,
                               *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4));
                }
                else if (uVar37 == 0xc) {
                  __printf_chk(1,"bank %c (%02x) invalid\n",iVar18 + 0x41,
                               *(undefined4 *)(nds_system + lVar24 + 0x31d5ed4));
                }
                uVar32 = (ulong)(iVar18 + 1U);
              } while (iVar18 + 1U != 9);
            }
LAB_00184050:
            uVar12 = true;
            goto LAB_001838f8;
          }
          if (bVar11) {
            uVar32 = 0;
            do {
              uVar37 = (int)uVar32 + 1;
              __printf_chk(1,"Texture slot %d points to %p\n",uVar32,
                           *(undefined8 *)(*(long *)(*param_1 + 0x2258) + (uVar32 + 0x6da808) * 8));
              uVar32 = (ulong)uVar37;
            } while (uVar37 != 4);
            goto LAB_00184050;
          }
          iVar19 = strcmp(__s,"textures");
          iVar18 = strcmp(__s,"vram_map");
          if (iVar19 == 0) {
LAB_001846d8:
            if (iVar18 != 0) goto LAB_001846dc;
          }
LAB_001835ac:
          iVar18 = strcmp(__s,"video_2d_state");
          pcVar22 = local_180[0];
          if ((iVar18 == 0) && (uVar31 - 1 < 2)) {
            lVar24 = *(long *)(*param_1 + 0x2258);
            local_1c8[0] = "bottom";
            local_1c8[1] = &DAT_00223aa0;
            uVar34 = *(ushort *)(nds_system + lVar24 + 0x30f3ca4);
            if (!bVar13) {
              uVar37 = 1;
              uVar32 = 0;
              local_220 = (uint)(uVar34 >> 0xf);
LAB_001854b4:
              lVar24 = lVar24 + uVar32 * 0x81420 + 0x36d4dbc;
LAB_001854ec:
              uVar46 = (uint)uVar32;
              uVar4 = *(uint *)(lVar24 + 0xc);
              local_1c8[2] = &DAT_00223ac8;
              local_1c8[3] = &DAT_00223ad0;
              __printf_chk(1,"Engine %c (%s):\n",uVar46 + 0x41,local_1c8[local_220 ^ uVar46]);
              __printf_chk(1,"  display control:       %08x\n",uVar4);
              uVar20 = uVar4 & 7;
              __printf_chk(1,"   bg_mode:              %01d\n",uVar20);
              __printf_chk(1,"   windows_enabled:      %01x\n",uVar4 >> 0xd & 7);
              __printf_chk(1,"   display_mode:         %01d\n",uVar4 >> 0x10 & 3);
              __printf_chk(1,"   bg ext palette:       %s\n",
                           local_1c8[((ulong)(uVar4 >> 0x1e) & 1) + 2]);
              __printf_chk(1,"   obj ext palette:      %s\n",local_1c8[(ulong)(uVar4 >> 0x1f) + 2]);
              __printf_chk(1,"  window enables:        %08x\n",*(undefined4 *)(lVar24 + 0x18));
              __printf_chk(1,"  blend control:         %04x\n",*(undefined2 *)(lVar24 + 0x1c));
              __printf_chk(1,"  blend alpha:           %04x\n",*(undefined2 *)(lVar24 + 0x20));
              __printf_chk(1,"  blend y:               %04x\n",*(undefined2 *)(lVar24 + 0x1e));
              __printf_chk(1,"  mosaic:                %04x\n",*(undefined2 *)(lVar24 + 0x24));
              __printf_chk(1,"  master brightness:     %04x\n",*(undefined2 *)(lVar24 + 0x22));
              if ((uVar4 >> 0xd & 1) != 0) {
                __printf_chk(1,"  window 0 horizontal:   %02x to %02x\n",
                             *(undefined *)(lVar24 + 0x27),*(undefined *)(lVar24 + 0x26));
                __printf_chk(1,"  window 0 vertical:     %02x to %02x\n",
                             *(undefined *)(lVar24 + 0x2b),*(undefined *)(lVar24 + 0x2a));
              }
              if ((uVar4 >> 0xe & 1) != 0) {
                __printf_chk(1,"  window 1 horizontal:   %02x to %02x\n",
                             *(undefined *)(lVar24 + 0x29),*(undefined *)(lVar24 + 0x28));
                __printf_chk(1,"  window 1 vertical:     %02x to %02x\n",
                             *(undefined *)(lVar24 + 0x2d),*(undefined *)(lVar24 + 0x2c));
              }
              __printf_chk(1,"  layers active: ");
              lVar45 = 0;
              if (*(char *)(lVar24 + 0x2f) != '\0') {
                do {
                  bVar16 = *(byte *)(lVar24 + lVar45);
                  pcVar22 = local_228;
                  if ((bVar16 >> 2 & 1) != 0) {
                    bVar16 = bVar16 & 3;
                    pcVar22 = "obj%d ";
                  }
                  __printf_chk(1,pcVar22,bVar16);
                  lVar45 = lVar45 + 1;
                } while ((uint)lVar45 < (uint)*(byte *)(lVar24 + 0x2f));
              }
              puts("\n");
              piVar2 = (int *)(lVar24 + 0x74);
              uVar44 = 0;
              uVar9 = uVar4 >> 8 & 1;
              do {
                if (uVar9 == 0) {
LAB_00185870:
                  if (uVar44 == 3) goto LAB_00185920;
                }
                else {
                  if ((uVar4 & 8) == 0 || uVar44 != 0) {
                    uVar34 = *(ushort *)(piVar2 + 0x18);
                    local_1a8 = &DAT_00223d78;
                    puStack_1a0 = &DAT_00223d80;
                    local_198 = &DAT_00223d80;
                    pcStack_190 = "16bpp";
                    __printf_chk(1,"  layer %d:\n",uVar44);
                    __printf_chk(1,"    bg_control:        %04x\n",uVar34);
                    __printf_chk(1,"    map_base:          %08x\n",*piVar2 + 0x6000000);
                    __printf_chk(1,"    tile_base:         %08x\n",piVar2[1] + 0x6000000);
                    __printf_chk(1,"    offset:            %04x, %04x\n",
                                 *(undefined2 *)((long)piVar2 + 0x62),*(undefined2 *)(piVar2 + 0x19)
                                );
                    __printf_chk(1,"    mosaic:            %s\n",
                                 local_1c8[((ulong)(uVar34 >> 6) & 1) + 2]);
                    bVar13 = uVar44 == 3;
                    if ((bVar13 && uVar20 == 1) ||
                       ((uVar20 == 2 && uVar44 != 0) && (uVar20 != 2 || uVar44 != 1))) {
LAB_001857dc:
                      puts("    mode:              affine");
                    }
                    else {
                      if (((!bVar13 || 1 < uVar20 - 3) && (!bVar13 || uVar20 - 3 != 2)) &&
                         (uVar20 != 5 || uVar44 != 2)) {
                        if (uVar20 != 4 || !bVar13) {
                          puts("    mode:              text");
                          __printf_chk(1,"    color mode:        %s\n",
                                       local_1c8[((ulong)(uVar34 >> 7) & 1) + 4]);
                          goto LAB_00185870;
                        }
                        goto LAB_001857dc;
                      }
                      if ((uVar34 >> 7 & 1) == 0) {
                        puts("    mode:              extended");
                      }
                      else {
                        __printf_chk(1,"    mode:              extended bmp %s\n",
                                     local_1c8[((ulong)(uVar34 >> 2) & 1) + 6]);
                      }
                    }
                    __printf_chk(1,"    wraps:             %s\n",
                                 local_1c8[((ulong)(uVar34 >> 0xd) & 1) + 2]);
                    __printf_chk(1,"    affine reference:  %08x, %08x\n",piVar2[0x14],piVar2[0x15]);
                    __printf_chk(1,"    affine current:    %08x, %08x\n",piVar2[0x16],piVar2[0x17]);
                    __printf_chk(1,"    affine dxy:        %04x, %04x\n",
                                 (long)*(short *)((long)piVar2 + 0x66),
                                 (long)*(short *)(piVar2 + 0x1a));
                    __printf_chk(1,"    affine dmxy:       %04x, %04x\n",
                                 (long)*(short *)((long)piVar2 + 0x6a),
                                 (long)*(short *)(piVar2 + 0x1b));
                    __printf_chk(1,"    affine wrap mask:  %02x\n",
                                 *(undefined *)((long)piVar2 + 0x73));
                    goto LAB_00185870;
                  }
                  __printf_chk(1,"  layer %d:               3D\n",0);
                  __printf_chk(1,"    horizontal offset:  %04x\n",*(undefined2 *)(lVar24 + 0xd6));
                }
                uVar44 = uVar44 + 1;
                piVar2 = piVar2 + 0x2c;
                uVar9 = 1 << (ulong)(uVar44 & 0x1f) & uVar4 >> 8 & 0xf;
              } while( true );
            }
            iVar18 = strcasecmp(local_180[0],"a");
            if (iVar18 == 0) {
              uVar32 = 0;
            }
            else {
              iVar19 = strcasecmp(pcVar22,"b");
              uVar32 = (ulong)(iVar19 == 0);
            }
            bVar13 = iVar18 != 0;
            uVar37 = (uint)bVar13;
            iVar18 = strcasecmp(pcVar22,"top");
            if (iVar18 == 0) {
              uVar37 = (uint)~(int)(short)uVar34 >> 0x1f;
              uVar32 = (ulong)uVar37;
              local_220 = (uint)(uVar34 >> 0xf);
              goto LAB_001854b4;
            }
            iVar18 = strcasecmp(pcVar22,"bottom");
            if (iVar18 == 0) {
              uVar32 = (ulong)(uVar34 >> 0xf);
              uVar37 = (uint)(uVar34 >> 0xf);
              local_220 = uVar37;
              goto LAB_001854b4;
            }
            __printf_chk(1,"Unknown layer %s.\n",pcVar22);
            if ((uint)uVar32 <= (uint)bVar13) {
              local_220 = (uint)(uVar34 >> 0xf);
              goto LAB_001854b4;
            }
LAB_0018594c:
            uVar12 = true;
          }
          else {
            iVar18 = strcmp(__s,"sprite_info");
            if ((iVar18 == 0) && (uVar31 - 2 < 3)) {
              iVar18 = strcasecmp(local_180[0],"b");
              uVar32 = (ulong)(iVar18 == 0);
              cVar36 = (iVar18 == 0) + 'A';
              if (bVar14) {
                uVar29 = strtoul(local_180[1],(char **)0x0,10);
                lVar24 = *(long *)(*param_1 + 0x2258);
                uVar42 = uVar29 & 0xffffffff;
                lVar45 = *(long *)(nds_system + lVar24 + uVar32 * 0x81420 + 0x31d8d68);
                local_220 = (uint)uVar29;
                __printf_chk(1,"Engine %c OBJ:\n",cVar36);
              }
              else if (uVar31 == 4) {
                uVar29 = strtoul(local_180[1],(char **)0x0,10);
                uVar42 = strtoul(local_180[2],(char **)0x0,10);
                lVar24 = *(long *)(*param_1 + 0x2258);
                local_220 = (uint)uVar42;
                lVar45 = *(long *)(nds_system + lVar24 + uVar32 * 0x81420 + 0x31d8d68);
                __printf_chk(1,"Engine %c OBJ:\n",cVar36);
                uVar42 = uVar29 & 0xffffffff;
                if (local_220 < (uint)uVar29) goto LAB_00184fc8;
              }
              else {
                lVar24 = *(long *)(*param_1 + 0x2258);
                uVar42 = 0;
                lVar45 = *(long *)(nds_system + lVar24 + uVar32 * 0x81420 + 0x31d8d68);
                local_220 = 0x7f;
                __printf_chk(1,"Engine %c OBJ:\n",cVar36);
              }
              lVar47 = uVar32 * 0x81420;
              do {
                lVar10 = (uVar42 & 0x3fffffff) * 8;
                lVar3 = lVar45 + lVar10;
                uVar7 = *(ushort *)(lVar45 + lVar10);
                uVar6 = *(ushort *)(lVar3 + 2);
                uVar34 = uVar7 & 0xff;
                lVar10 = (ulong)((uint)(uVar6 >> 0xe) | (uint)(uVar7 >> 0xe) << 2) * 2;
                bVar16 = (&DAT_00224241)[lVar10];
                uVar33 = (ushort)bVar16;
                if ((uVar7 >> 9 & 1) == 0) {
                  if ((uVar34 < 0xc0) || (0xff < (ushort)(uVar34 + bVar16))) {
                    uVar34 = (ushort)(byte)(&obj_size_table_11495)[lVar10];
LAB_00185120:
                    if (((uVar6 & 0x1ff) < 0x100) || (0x1ff < (ushort)(uVar34 + (uVar6 & 0x1ff)))) {
                      lVar10 = lVar24 + lVar47 + uVar42 * 0x58;
                      uVar5 = *(ushort *)(lVar3 + 4);
                      iVar18 = *(int *)(nds_system + lVar24 + lVar47 + 0x31d8dc8);
                      bVar16 = nds_system[lVar10 + 0x31d910a];
                      iVar19 = 4 << (ulong)(bVar16 & 3);
                      __printf_chk(1," Obj %d (%04x %04x %04x):\n",uVar42,uVar7,uVar6,uVar5);
                      __printf_chk(1,"  Location:    %d, %d\n",
                                   (long)*(short *)(nds_system + lVar10 + 0x31d90fe),
                                   (long)*(short *)(nds_system + lVar10 + 0x31d9100));
                      __printf_chk(1,"  Size:        %d (%d) by %d\n",uVar34,
                                   nds_system[lVar10 + 0x31d910d],uVar33);
                      __printf_chk(1,"  Color depth: %dbpp\n",iVar19);
                      if (((bVar16 & 3) == 0) || (iVar18 < 0 && iVar19 == 8)) {
                        __printf_chk(1,"  Palette:     %x\n",uVar5 >> 0xc);
                      }
                      lVar3 = lVar24 + lVar47 + uVar42 * 0x58;
                      __printf_chk(1,"  Hflip:       %d\n",
                                   (byte)nds_system[lVar3 + 0x31d910a] >> 2 & 1);
                      __printf_chk(1,"  Vflip:       %d\n",nds_system[lVar3 + 0x31d910c]);
                      __printf_chk(1,"  Affine:      %d\n",
                                   (byte)nds_system[lVar3 + 0x31d910a] >> 3 & 1);
                      if (((byte)nds_system[lVar3 + 0x31d910a] >> 3 & 1) != 0) {
                        __printf_chk(1,"   Affine dx:  %04x\n",
                                     (long)*(short *)(nds_system + lVar3 + 0x31d9102));
                        __printf_chk(1,"   Affine dy:  %04x\n",
                                     (long)*(short *)(nds_system + lVar3 + 0x31d9104));
                        __printf_chk(1,"   Affine dmx: %04x\n",
                                     (long)*(short *)(nds_system + lVar3 + 0x31d9106));
                        __printf_chk(1,"   Affine dmy: %04x\n",
                                     (long)*(short *)(nds_system + lVar3 + 0x31d9108));
                      }
                      lVar3 = lVar24 + lVar47 + uVar42 * 0x58;
                      __printf_chk(1,"  Force blend: %d\n",
                                   (ulong)(long)(char)nds_system[lVar3 + 0x31d910b] >> 0x1f & 1);
                      __printf_chk(1,"  Alpha:       %d\n",nds_system[lVar3 + 0x31d910b] & 0x3f);
                      __printf_chk(1,"  Base:        %04x\n",uVar5 & 0x3ff);
                    }
                  }
                }
                else {
                  uVar33 = (ushort)bVar16 * 2;
                  if ((uVar34 < 0xc0) || (0xff < (ushort)(uVar34 + uVar33))) {
                    uVar34 = (ushort)(byte)(&obj_size_table_11495)[lVar10] * 2;
                    goto LAB_00185120;
                  }
                }
                uVar37 = (int)uVar42 + 1;
                uVar42 = (ulong)uVar37;
              } while (uVar37 <= local_220);
              goto LAB_00184fc8;
            }
            iVar18 = strcmp(__s,"sprite_sizes");
            uVar12 = true;
            if (iVar18 == 0 && bVar13) {
              local_108 = 0;
              local_100 = 0;
              iVar18 = strcasecmp(local_180[0],"b");
              lVar24 = 0x81420;
              if (iVar18 != 0) {
                lVar24 = 0;
              }
              iVar19 = 0;
              puVar25 = *(ushort **)(nds_system + *(long *)(*param_1 + 0x2258) + lVar24 + 0x31d8d68)
              ;
              puVar1 = puVar25 + 0x200;
              do {
                uVar31 = (uint)(*puVar25 >> 0xe);
                if ((uVar31 != 3) && ((*puVar25 & 0x300) != 0x200)) {
                  iVar19 = iVar19 + 1;
                  uVar32 = (ulong)(uVar31 << 2 | (uint)(puVar25[1] >> 0xe));
                  *(char *)((long)&local_108 + uVar32) =
                       *(char *)((long)&local_108 + uVar32) + '\x01';
                }
                puVar25 = puVar25 + 4;
              } while (puVar1 != puVar25);
              __printf_chk(1,"Engine %c OBJ sizes (%d total):\n",(iVar18 == 0) + 'A',iVar19);
              uVar32 = local_108 & 0xff;
              if ((char)local_108 != '\0') {
                uVar32 = (local_108 & 0xff) << 6;
                __printf_chk(1," %-2d by %-2d:   %d\n",8,8,(char)local_108);
              }
              if (local_108._1_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._1_1_ * 0x100);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x10);
              }
              if (local_108._2_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._2_1_ * 0x400);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x20);
              }
              if (local_108._3_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._3_1_ * 0x1000);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x40);
              }
              if (local_108._4_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._4_1_ * 0x80);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x10,8);
              }
              if (local_108._5_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._5_1_ * 0x100);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x20,8);
              }
              if (local_108._6_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._6_1_ * 0x200);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x20,0x10);
              }
              if (local_108._7_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_108._7_1_ * 0x800);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x40,0x20);
              }
              if ((byte)local_100 != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)(byte)local_100 * 0x80);
                __printf_chk(1," %-2d by %-2d:   %d\n",8,0x10);
              }
              if (local_100._1_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_100._1_1_ * 0x100);
                __printf_chk(1," %-2d by %-2d:   %d\n",8,0x20);
              }
              if (local_100._2_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_100._2_1_ * 0x200);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x10,0x20);
              }
              if (local_100._3_1_ != 0) {
                uVar32 = (ulong)((int)uVar32 + (uint)local_100._3_1_ * 0x800);
                __printf_chk(1," %-2d by %-2d:   %d\n",0x20,0x40);
              }
              uVar31 = 2;
              uVar12 = true;
              __printf_chk(1,"%d total pixels.\n",uVar32);
              goto LAB_00183a40;
            }
          }
          goto LAB_0018376c;
        }
        if (!bVar11) {
          iVar18 = strcmp(__s,"alternate_cpu_state");
          if (iVar18 == 0) {
LAB_00183fa8:
            iVar19 = strcmp(__s,"scheduler_state");
            iVar18 = strcmp(__s,"div_status");
            if (iVar19 != 0) goto LAB_0018349c;
            if (iVar18 != 0) goto LAB_00183fd8;
          }
          else {
            iVar18 = strcmp(__s,"scheduler_state");
            if (iVar18 != 0) goto LAB_00183488;
          }
          goto LAB_001834a4;
        }
        uVar12 = true;
        print_debug(param_1,param_3);
LAB_001838f8:
        if ((*__s == 'q') && (__s[1] == '\0')) goto LAB_0018390c;
        goto LAB_00183868;
      }
      iVar18 = strcmp(__s,"disasm_thumb_block");
      if ((iVar18 != 0) || (1 < uVar31 - 2)) goto LAB_0018337c;
      if (uVar31 == 3) {
        uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
        uVar29 = strtoul(local_180[1],(char **)0x0,0x10);
      }
      else {
        uVar32 = (ulong)*(uint *)(param_1 + 0x24);
        uVar29 = strtoul(local_180[0],(char **)0x0,0x10);
      }
      uVar42 = uVar29 & 0xffffffff;
      uVar37 = (uint)uVar29;
      while (uVar37 != 0) {
        uVar17 = load_memory16(lVar27,uVar32 & 0xffffffff);
        disasm_thumb_instruction(uVar17,&local_108,uVar32 & 0xffffffff,0,0);
        __printf_chk(1,"%08x: %08x  %s\n",uVar32 & 0xffffffff,uVar17,&local_108);
        uVar32 = (ulong)((int)uVar32 + 2);
        uVar37 = (int)uVar42 - 1;
        uVar42 = (ulong)uVar37;
      }
LAB_00183a3c:
      uVar12 = true;
LAB_00183a40:
      if ((*__s != 'q') || (__s[1] != '\0')) {
LAB_00183a4c:
        iVar18 = strcmp(__s,"quit");
        if (iVar18 == 0) goto LAB_00183788;
        cVar36 = *__s;
        goto joined_r0x00183a64;
      }
LAB_00183788:
      cVar36 = *__s;
      if (cVar36 != '\0') {
LAB_00183790:
        if (cVar36 == 's') goto LAB_00183798;
      }
    }
    else {
      do {
        uVar37 = uVar31;
        *pcVar22 = '\0';
        ppcVar40 = ppcVar40 + 1;
        *ppcVar40 = pcVar22 + 1;
        uVar31 = uVar37 + 1;
        pcVar22 = strchr(pcVar22 + 1,0x20);
        __s = local_188;
      } while (pcVar22 != (char *)0x0 && uVar31 < 0xf || pcVar22 != (char *)0x0 && uVar31 == 0xf);
      iVar18 = strcmp(local_188,"break");
      if ((iVar18 != 0) || (uVar37 != 1)) {
        bVar13 = uVar31 == 2;
        iVar18 = strcmp(__s,"skip");
        if (iVar18 != 0 || !bVar13) {
          iVar18 = strcmp(__s,"resume");
          if (iVar18 != 0) goto LAB_00183304;
          goto LAB_00183320;
        }
        param_1[0x23] = param_1[0x22];
        uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
        uVar31 = 2;
        uVar12 = false;
        param_1[0x22] = uVar32;
        *(undefined *)((long)param_1 + 0x131) = 4;
        goto LAB_00183a40;
      }
      if (uVar31 == 2) {
        param_1[0x23] = param_1[0x22];
        if (((*local_180[0] == 'l') && (local_180[0][1] == 'r')) && (local_180[0][2] == '\0')) {
          param_1[0x22] = (ulong)*(uint *)(*param_1 + 0x23a8) & 0xfffffffe;
        }
        else {
          uVar32 = strtoul(local_180[0],(char **)0x0,0x10);
          param_1[0x22] = uVar32;
        }
      }
LAB_00183760:
      uVar12 = false;
      *(undefined *)((long)param_1 + 0x131) = 3;
LAB_0018376c:
      if ((*__s == 'q') && (__s[1] == '\0')) {
LAB_00183780:
        if (uVar31 == 1) {
LAB_0018390c:
                    /* WARNING: Subroutine does not return */
          quit(*(undefined8 *)(*param_1 + 0x2258));
        }
        goto LAB_00183788;
      }
LAB_00183868:
      iVar18 = strcmp(__s,"quit");
      if (iVar18 == 0) goto LAB_00183780;
      cVar36 = *__s;
joined_r0x00183a64:
      if (cVar36 == '\0') {
        if (uVar31 != 1) goto joined_r0x00183a70;
        break;
      }
      iVar18 = strcmp(__s,"break_load_state");
      if (iVar18 == 0) {
        if (uVar31 != 1) goto LAB_00183790;
        *(undefined *)((long)param_1 + 0x131) = 7;
        putchar(10);
        goto LAB_00183148;
      }
      if (cVar36 != 's') goto joined_r0x00183a70;
      if (uVar31 == 1) {
        ppuVar26 = __ctype_b_loc();
        if ((((*ppuVar26)[*(byte *)((long)__s + 1)] >> 0xc & 1) == 0) ||
           (__isoc99_sscanf(__s,&DAT_002241f0,&local_1d0), local_1d0 < 1)) goto joined_r0x00183a70;
        param_1[0x22] = local_1d0;
        param_1[0x23] = local_1d0;
        *(undefined *)((long)param_1 + 0x131) = 4;
        break;
      }
LAB_00183798:
      if ((uVar31 == 2) && (ppuVar26 = __ctype_b_loc(), ((*ppuVar26)[(byte)__s[1]] >> 0xc & 1) != 0)
         ) {
        __isoc99_sscanf(__s,&DAT_002241f0,&local_1d0);
        __sprintf_chk(param_1 + 1,1,0x100,"s%lx\n",local_1d0);
        uVar32 = strtoul(local_180[0],(char **)0x0,10);
        *(int *)(param_1 + 0x25) = (int)uVar32 + -1;
        if (0 < local_1d0) {
          param_1[0x22] = local_1d0;
          param_1[0x23] = local_1d0;
          *(undefined *)((long)param_1 + 0x131) = 4;
          break;
        }
      }
    }
joined_r0x00183a70:
  } while ((bool)uVar12);
  putchar(10);
LAB_00183148:
  param_1[0x21] = param_1[0x21] + 1;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
LAB_00185920:
  putchar(10);
  lVar24 = lVar24 + 0x81420;
  uVar32 = 1;
  if (uVar37 < uVar46 + 1) goto LAB_0018594c;
  goto LAB_001854ec;
}


