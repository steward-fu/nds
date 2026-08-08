/*
 * Ghidra decompilation
 *
 * Function : SzArEx_Open
 * Address  : 001ad7c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SzArEx_Open(long *param_1,long param_2,code **param_3,code **param_4)

{
  undefined *puVar1;
  char *pcVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 *local_110;
  uint local_fc;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  byte *local_90;
  ulong uStack_88;
  byte *local_80;
  ulong local_78;
  byte *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  char local_28;
  char local_27;
  char local_26;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  int local_20;
  ulong local_1c;
  ulong local_14;
  int local_c;
  long local_8;
  
  local_c0 = 0;
  local_8 = ___stack_chk_guard;
  iVar9 = (**(code **)(param_2 + 0x18))(param_2,&local_c0,1);
  if ((iVar9 == 0) && (iVar9 = LookInStream_Read2(param_2,&local_28,0x20,0x11), iVar9 == 0)) {
    if ((k7zSignature == local_28) &&
       ((((DAT_00267d11 == local_27 && (DAT_00267d12 == local_26)) && (DAT_00267d13 == local_25)) &&
        ((DAT_00267d14 == local_24 && (local_23 == DAT_00267d15)))))) {
      if (local_22 == '\0') {
        param_1[7] = local_c0 + 0x20;
        iVar10 = CrcCalc(&local_1c,0x14);
        if (iVar10 == local_20) {
          if (local_14 == 0) goto LAB_001ad82c;
          if ((CARRY8(local_1c,local_14)) || (local_1c + local_14 + 0x20 < local_1c))
          goto LAB_001ad9f8;
          local_60 = 0;
          iVar9 = (**(code **)(param_2 + 0x18))(param_2,&local_60,2);
          if (iVar9 == 0) {
            local_1c = local_1c + local_c0;
            if (((local_60 < local_1c) || (local_60 < local_1c + 0x20)) ||
               (local_60 < local_14 + 0x20 + local_1c)) {
              iVar9 = 6;
            }
            else {
              iVar9 = LookInStream_SeekTo(param_2);
              if (iVar9 == 0) {
                iVar9 = Buf_Create(&local_90,local_14,param_4);
                if (iVar9 == 0) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = LookInStream_Read(param_2,local_90,local_14);
                  if (iVar9 == 0) {
                    iVar9 = CrcCalc(local_90,local_14);
                    if (local_c == iVar9) {
                      local_80 = local_90;
                      local_78 = uStack_88;
                      iVar10 = SzReadNumber();
                      iVar9 = iVar10;
                      if (iVar10 == 0) {
                        if (local_b8 != 0x17) {
LAB_001ada98:
                          if (local_b8 == 1) {
                            local_a8 = local_a8 & 0xffffffff00000000;
                            local_a0 = 0;
                            local_98 = 0;
                            local_70 = (byte *)0x0;
                            local_60 = 0;
                            if (local_78 != 0) {
                              local_78 = local_78 - 1;
                              uVar21 = 0;
                              bVar4 = *local_80;
                              iVar9 = 0;
                              uVar20 = 0x80;
                              local_80 = local_80 + 1;
                              do {
                                if ((bVar4 & uVar20) == 0) {
                                  uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) <<
                                                    ((ulong)(uint)(iVar9 << 3) & 0x3f));
                                  break;
                                }
                                if (local_78 == 0) goto LAB_001ae220;
                                local_78 = local_78 - 1;
                                pbVar16 = local_80 + 1;
                                uVar17 = iVar9 << 3;
                                iVar9 = iVar9 + 1;
                                uVar20 = uVar20 >> 1;
                                uVar21 = uVar21 | (ulong)*local_80 << ((ulong)uVar17 & 0x3f);
                                local_80 = pbVar16;
                              } while (iVar9 != 8);
                              if (uVar21 != 2) goto LAB_001adb5c;
                              while (local_78 != 0) {
                                local_78 = local_78 - 1;
                                uVar21 = 0;
                                bVar4 = *local_80;
                                iVar9 = 0;
                                uVar20 = 0x80;
                                local_80 = local_80 + 1;
                                do {
                                  if ((bVar4 & uVar20) == 0) {
                                    uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) <<
                                                      ((ulong)(uint)(iVar9 << 3) & 0x3f));
                                    break;
                                  }
                                  if (local_78 == 0) goto LAB_001ae220;
                                  local_78 = local_78 - 1;
                                  pbVar16 = local_80 + 1;
                                  uVar17 = iVar9 << 3;
                                  iVar9 = iVar9 + 1;
                                  uVar20 = uVar20 >> 1;
                                  uVar21 = uVar21 | (ulong)*local_80 << ((ulong)uVar17 & 0x3f);
                                  local_80 = pbVar16;
                                } while (iVar9 != 8);
                                if (uVar21 == 0) {
                                  if (local_78 != 0) {
                                    local_78 = local_78 - 1;
                                    iVar9 = 0;
                                    bVar4 = *local_80;
                                    uVar20 = 0x80;
                                    uVar21 = 0;
                                    pbVar16 = local_80 + 1;
                                    goto LAB_001ae980;
                                  }
                                  break;
                                }
                                if (local_78 == 0) break;
                                local_78 = local_78 - 1;
                                uVar21 = 0;
                                bVar4 = *local_80;
                                iVar9 = 0;
                                uVar20 = 0x80;
                                local_80 = local_80 + 1;
                                do {
                                  if ((bVar4 & uVar20) == 0) {
                                    uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) <<
                                                      ((ulong)(uint)(iVar9 << 3) & 0x3f));
                                    break;
                                  }
                                  if (local_78 == 0) goto LAB_001ae220;
                                  local_78 = local_78 - 1;
                                  pbVar16 = local_80 + 1;
                                  uVar17 = iVar9 << 3;
                                  iVar9 = iVar9 + 1;
                                  uVar20 = uVar20 >> 1;
                                  uVar21 = uVar21 | (ulong)*local_80 << ((ulong)uVar17 & 0x3f);
                                  local_80 = pbVar16;
                                } while (iVar9 != 8);
                                if (uVar21 <= local_78) {
                                  local_78 = local_78 - uVar21;
                                  local_80 = local_80 + uVar21;
                                }
                              }
                            }
                            goto LAB_001ae220;
                          }
                          iVar9 = 4;
                          Buf_Free(&local_90,param_4);
                          goto LAB_001ad820;
                        }
                        Buf_Init(&local_70);
                        local_c4 = 0;
                        local_b0 = 0;
                        local_a8 = 0;
                        local_a0 = 0;
                        uStack_58 = 0;
                        local_60 = 0;
                        local_48 = (long *)0x0;
                        uStack_50 = 0;
                        local_40 = 0;
                        uStack_38 = 0;
                        local_30 = 0;
                        lVar27 = param_1[7];
                        iVar9 = SzReadStreamsInfo(&local_80,&local_98,&local_60,&local_c4,&local_b0,
                                                  &local_a8,&local_a0,param_4,param_4);
                        plVar7 = local_48;
                        if (iVar9 == 0) {
                          local_98 = lVar27 + local_98;
                          if (uStack_38._4_4_ == 1) {
                            iVar9 = 0;
                            for (lVar27 = 0; (uint)lVar27 < *(uint *)(local_48 + 4);
                                lVar27 = lVar27 + 1) {
                              iVar9 = iVar9 + *(int *)(*local_48 + lVar27 * 0x20 + 4);
                            }
                            if (iVar9 == 0) {
LAB_001ae018:
                              uVar26 = 0;
                            }
                            else {
                              do {
                                iVar9 = iVar9 + -1;
                                if (iVar9 < 0) goto LAB_001ae018;
                                lVar27 = 0;
                                do {
                                  uVar20 = (uint)lVar27;
                                  if (*(uint *)((long)local_48 + 0x24) <= uVar20) goto LAB_001adcc4;
                                  lVar28 = lVar27 * 8;
                                  lVar27 = lVar27 + 1;
                                } while (*(int *)(local_48[1] + lVar28 + 4) != iVar9);
                              } while (-1 < (int)uVar20);
LAB_001adcc4:
                              uVar26 = *(undefined8 *)(local_48[3] + (long)iVar9 * 8);
                            }
                            iVar9 = LookInStream_SeekTo(param_2);
                            if (iVar9 == 0) {
                              iVar9 = Buf_Create(&local_70,uVar26,param_4);
                              if (iVar9 == 0) {
                                iVar9 = 2;
                              }
                              else {
                                iVar9 = SzFolder_Decode(plVar7,local_60,param_2,local_98,local_70,
                                                        uVar26,param_4);
                                if ((iVar9 == 0) && (*(int *)((long)plVar7 + 0x2c) != 0)) {
                                  iVar11 = CrcCalc(local_70,uVar26);
                                  iVar9 = 0;
                                  if (iVar11 != *(int *)(plVar7 + 6)) {
                                    iVar9 = 3;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar9 = 0x10;
                          }
                        }
                        SzAr_Free(&local_60,param_4);
                        (*param_4[1])(param_4,local_b0);
                        (*param_4[1])(param_4,local_a8);
                        (*param_4[1])(param_4,local_a0);
                        if (iVar9 == 0) {
                          Buf_Free(&local_90,param_4);
                          local_90 = local_70;
                          uStack_88 = uStack_68;
                          local_80 = local_70;
                          local_78 = uStack_68;
                          iVar9 = SzReadNumber(&local_80,&local_b8);
                          if (iVar9 == 0) goto LAB_001ada98;
                        }
                        else {
                          Buf_Free(&local_70,param_4);
                        }
                      }
                      Buf_Free(&local_90,param_4);
                    }
                    else {
                      iVar9 = 0x10;
                      Buf_Free(&local_90,param_4);
                    }
                  }
                  else {
                    Buf_Free(&local_90,param_4);
                  }
                }
              }
            }
          }
        }
        else {
          iVar9 = 3;
        }
      }
      else {
        iVar9 = 4;
      }
    }
    else {
LAB_001ad9f8:
      iVar9 = 0x11;
    }
  }
  goto LAB_001ad820;
LAB_001ae2b0:
  if (uVar20 <= (uint)lVar13) goto LAB_001ae750;
  *(undefined *)((long)local_110 + 0x12) = 0;
  if (lVar27 == 0) {
    *(undefined *)(local_110 + 2) = 1;
LAB_001ae2c8:
    *(undefined *)((long)local_110 + 0x11) = 0;
    *local_110 = *(undefined8 *)(local_a0 + uVar21 * 8);
    *(undefined4 *)(local_110 + 1) = *(undefined4 *)(local_70 + uVar21 * 4);
    puVar1 = (undefined *)(local_98 + uVar21);
    uVar21 = (ulong)((int)uVar21 + 1);
    *(undefined *)((long)local_110 + 0x13) = *puVar1;
  }
  else {
    cVar5 = *(char *)(lVar27 + lVar13);
    *(bool *)(local_110 + 2) = cVar5 == '\0';
    if (cVar5 == '\0') goto LAB_001ae2c8;
    if (lVar28 == 0) {
      bVar8 = true;
    }
    else {
      bVar8 = *(char *)(lVar28 + uVar22) == '\0';
    }
    uVar22 = (ulong)((int)uVar22 + 1);
    *local_110 = 0;
    *(undefined4 *)(local_110 + 1) = 0;
    *(bool *)((long)local_110 + 0x11) = bVar8;
    *(undefined *)((long)local_110 + 0x13) = 0;
  }
  lVar13 = lVar13 + 1;
  local_110 = local_110 + 4;
  goto LAB_001ae2b0;
LAB_001ae750:
  uVar21 = (ulong)*(uint *)((long)param_1 + 0x2c);
  if (*(uint *)((long)param_1 + 0x2c) == 0) {
    param_1[9] = 0;
LAB_001ae75c:
    if (*(uint *)(param_1 + 5) == 0) {
      param_1[10] = 0;
    }
    else {
      lVar13 = (**param_3)(param_3,(ulong)*(uint *)(param_1 + 5) << 3);
      param_1[10] = lVar13;
      if (lVar13 == 0) goto LAB_001ae394;
      uVar20 = *(uint *)(param_1 + 5);
      lVar19 = 0;
      for (lVar24 = 0; (uint)lVar24 < uVar20; lVar24 = lVar24 + 1) {
        lVar25 = *param_1;
        *(long *)(lVar13 + lVar24 * 8) = lVar19;
        lVar19 = lVar19 + *(long *)(lVar25 + lVar24 * 8);
      }
      uVar21 = (ulong)*(uint *)((long)param_1 + 0x2c);
    }
    if ((int)uVar21 == 0) {
      param_1[0xb] = 0;
    }
    else {
      lVar13 = (**param_3)(param_3,uVar21 << 2);
      param_1[0xb] = lVar13;
      if (lVar13 == 0) {
        iVar9 = 2;
        goto LAB_001adfa0;
      }
    }
    if (*(uint *)(param_1 + 6) == 0) {
      param_1[0xc] = 0;
      iVar9 = iVar10;
    }
    else {
      lVar13 = (**param_3)(param_3,(ulong)*(uint *)(param_1 + 6) << 2);
      param_1[0xc] = lVar13;
      if (lVar13 == 0) goto LAB_001ae394;
      uVar20 = 0;
      uVar17 = 0;
      uVar21 = 0;
      while (uVar23 = (uint)uVar21, iVar9 = iVar10, uVar23 < *(uint *)(param_1 + 6)) {
        cVar5 = *(char *)(param_1[4] + uVar21 * 0x20 + 0x18);
        if (cVar5 == '\0' && uVar20 == 0) {
          uVar20 = 0;
          *(undefined4 *)(lVar13 + uVar21 * 4) = 0xffffffff;
          uVar21 = (ulong)(uVar23 + 1);
        }
        else {
          if (uVar20 == 0) {
            while( true ) {
              if (*(uint *)((long)param_1 + 0x2c) <= uVar17) {
                iVar9 = 0x10;
                goto LAB_001adfa0;
              }
              lVar24 = param_1[3];
              *(uint *)(param_1[0xb] + (ulong)uVar17 * 4) = uVar23;
              if (*(int *)(lVar24 + (ulong)uVar17 * 0x38 + 0x34) != 0) break;
              uVar17 = uVar17 + 1;
            }
            *(uint *)(param_1[0xc] + uVar21 * 4) = uVar17;
LAB_001ae7ec:
            uVar20 = uVar20 + 1;
            if (*(uint *)(lVar24 + (ulong)uVar17 * 0x38 + 0x34) <= uVar20) {
              uVar17 = uVar17 + 1;
              uVar20 = 0;
            }
          }
          else {
            *(uint *)(lVar13 + uVar21 * 4) = uVar17;
            if (cVar5 != '\0') {
              lVar24 = param_1[3];
              goto LAB_001ae7ec;
            }
          }
          uVar21 = (ulong)(uVar23 + 1);
        }
      }
    }
  }
  else {
    lVar13 = (**param_3)(param_3,uVar21 << 2);
    param_1[9] = lVar13;
    if (lVar13 != 0) {
      uVar22 = 0;
      iVar9 = 0;
      while( true ) {
        uVar21 = (ulong)*(uint *)((long)param_1 + 0x2c);
        if (*(uint *)((long)param_1 + 0x2c) <= (uint)uVar22) break;
        lVar19 = param_1[3];
        *(int *)(lVar13 + uVar22 * 4) = iVar9;
        lVar24 = uVar22 * 0x38;
        uVar22 = (ulong)((uint)uVar22 + 1);
        iVar9 = iVar9 + *(int *)(lVar19 + lVar24 + 0x28);
      }
      goto LAB_001ae75c;
    }
LAB_001ae394:
    iVar9 = 2;
  }
  goto LAB_001adfa0;
  while( true ) {
    if (local_78 == 0) goto LAB_001ae220;
    local_78 = local_78 - 1;
    local_80 = pbVar16 + 1;
    uVar17 = iVar9 << 3;
    iVar9 = iVar9 + 1;
    uVar20 = uVar20 >> 1;
    uVar21 = uVar21 | (ulong)*pbVar16 << ((ulong)uVar17 & 0x3f);
    pbVar16 = local_80;
    if (iVar9 == 8) break;
LAB_001ae980:
    local_80 = pbVar16;
    if ((bVar4 & uVar20) == 0) {
      uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) << ((ulong)(uint)(iVar9 << 3) & 0x3f)
                        );
      break;
    }
  }
LAB_001adb5c:
  if (uVar21 == 4) {
    iVar9 = SzReadStreamsInfo(&local_80,param_1 + 8,param_1,&local_a8,&local_a0,&local_98,&local_70,
                              param_3,param_4);
    if (iVar9 == 0) {
      param_1[8] = param_1[8] + param_1[7];
      if (local_78 != 0) {
        local_78 = local_78 - 1;
        uVar21 = 0;
        bVar4 = *local_80;
        uVar20 = 0x80;
        iVar9 = 0;
        pbVar16 = local_80 + 1;
        do {
          local_80 = pbVar16;
          if ((bVar4 & uVar20) == 0) {
            uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) <<
                              ((ulong)(uint)(iVar9 << 3) & 0x3f));
            break;
          }
          if (local_78 == 0) goto LAB_001ae220;
          local_78 = local_78 - 1;
          local_80 = pbVar16 + 1;
          uVar17 = iVar9 << 3;
          iVar9 = iVar9 + 1;
          uVar20 = uVar20 >> 1;
          uVar21 = uVar21 | (ulong)*pbVar16 << ((ulong)uVar17 & 0x3f);
          pbVar16 = local_80;
        } while (iVar9 != 8);
        goto LAB_001adb64;
      }
LAB_001ae220:
      lVar28 = 0;
      lVar27 = 0;
LAB_001ae228:
      iVar9 = 0x10;
    }
    else {
      lVar28 = 0;
      lVar27 = 0;
    }
  }
  else {
LAB_001adb64:
    if (uVar21 == 0) {
      lVar28 = 0;
      lVar27 = 0;
      iVar9 = iVar10;
    }
    else {
      if ((uVar21 != 5) || (local_78 == 0)) goto LAB_001ae220;
      local_78 = local_78 - 1;
      uVar21 = 0;
      bVar4 = *local_80;
      uVar20 = 0x80;
      iVar9 = 0;
      pbVar16 = local_80 + 1;
      do {
        local_80 = pbVar16;
        if ((bVar4 & uVar20) == 0) {
          uVar21 = uVar21 + ((long)(int)(uVar20 - 1 & (uint)bVar4) <<
                            ((ulong)(uint)(iVar9 << 3) & 0x3f));
          break;
        }
        if (local_78 == 0) goto LAB_001ae220;
        local_78 = local_78 - 1;
        local_80 = pbVar16 + 1;
        uVar17 = iVar9 << 3;
        iVar9 = iVar9 + 1;
        uVar20 = uVar20 >> 1;
        uVar21 = uVar21 | (ulong)*pbVar16 << ((ulong)uVar17 & 0x3f);
        pbVar16 = local_80;
      } while (iVar9 != 8);
      if (uVar21 < 0x80000000) {
        uVar20 = (uint)uVar21;
        *(uint *)(param_1 + 6) = uVar20;
        if (uVar21 == 0) {
          lVar27 = 0;
          local_110 = (undefined8 *)0x0;
        }
        else {
          lVar27 = uVar21 << 5;
          local_110 = (undefined8 *)(**param_3)(param_3,lVar27);
          if (local_110 == (undefined8 *)0x0) {
            lVar28 = 0;
            lVar27 = 0;
            iVar9 = 2;
            goto LAB_001adfa0;
          }
        }
        param_1[4] = (long)local_110;
        for (puVar12 = local_110; (undefined8 *)((long)local_110 + lVar27) != puVar12;
            puVar12 = puVar12 + 4) {
          *(undefined *)(puVar12 + 3) = 1;
          *(undefined *)((long)puVar12 + 0x19) = 0;
          *(undefined *)((long)puVar12 + 0x1a) = 0;
          *(undefined *)((long)puVar12 + 0x1b) = 0;
          *(undefined *)((long)puVar12 + 0x1c) = 0;
        }
        lVar28 = 0;
        lVar27 = 0;
        local_fc = 0;
        while (local_78 != 0) {
          local_78 = local_78 - 1;
          uVar22 = 0;
          bVar4 = *local_80;
          iVar9 = 0;
          uVar17 = 0x80;
          local_80 = local_80 + 1;
          do {
            if ((bVar4 & uVar17) == 0) {
              uVar22 = uVar22 + ((long)(int)(uVar17 - 1 & (uint)bVar4) <<
                                ((ulong)(uint)(iVar9 << 3) & 0x3f));
              break;
            }
            if (local_78 == 0) goto LAB_001ae228;
            local_78 = local_78 - 1;
            pbVar16 = local_80 + 1;
            uVar23 = iVar9 << 3;
            iVar9 = iVar9 + 1;
            uVar17 = uVar17 >> 1;
            uVar22 = uVar22 | (ulong)*local_80 << ((ulong)uVar23 & 0x3f);
            local_80 = pbVar16;
          } while (iVar9 != 8);
          if (uVar22 == 0) {
            lVar13 = 0;
            uVar22 = 0;
            local_110 = local_110 + 1;
            uVar21 = 0;
            goto LAB_001ae2b0;
          }
          if (local_78 == 0) break;
          local_78 = local_78 - 1;
          iVar9 = 0;
          bVar4 = *local_80;
          uVar18 = 0;
          uVar17 = 0x80;
          local_80 = local_80 + 1;
          do {
            if ((bVar4 & uVar17) == 0) {
              uVar18 = uVar18 + ((long)(int)(uVar17 - 1 & (uint)bVar4) <<
                                ((ulong)(uint)(iVar9 << 3) & 0x3f));
              break;
            }
            if (local_78 == 0) goto LAB_001ae228;
            local_78 = local_78 - 1;
            pbVar16 = local_80 + 1;
            uVar23 = iVar9 << 3;
            iVar9 = iVar9 + 1;
            uVar17 = uVar17 >> 1;
            uVar18 = uVar18 | (ulong)*local_80 << ((ulong)uVar23 & 0x3f);
            local_80 = pbVar16;
          } while (iVar9 != 8);
          if (local_78 < uVar18) break;
          iVar9 = (int)uVar22;
          if (uVar22 == (long)iVar9) {
            if (iVar9 == 0x11) {
              if (local_78 == 0) break;
              pbVar16 = local_80 + 1;
              local_78 = local_78 - 1;
              bVar4 = *local_80;
              local_80 = pbVar16;
              if (bVar4 != 0) goto LAB_001ae618;
              uVar18 = uVar18 - 1;
              uVar22 = uVar18 & 1;
              if ((uVar18 & 1) != 0) break;
              iVar9 = Buf_Create(param_1 + 0xe,uVar18,param_3);
              if (iVar9 == 0) goto LAB_001ae394;
              lVar13 = (**param_3)(param_3,(ulong)(uVar20 + 1) << 3);
              param_1[0xd] = lVar13;
              if (lVar13 == 0) goto LAB_001ae394;
              memcpy((void *)param_1[0xe],local_80,uVar18);
              puVar15 = (ulong *)param_1[0xd];
              puVar3 = puVar15 + uVar21;
              for (; puVar3 != puVar15; puVar15 = puVar15 + 1) {
                pbVar16 = local_80 + uVar22 * 2;
                *puVar15 = uVar22;
                while( true ) {
                  if (uVar18 >> 1 <= uVar22) goto LAB_001ae228;
                  uVar22 = uVar22 + 1;
                  if ((*pbVar16 == 0) && (pbVar16[1] == 0)) break;
                  pbVar16 = pbVar16 + 2;
                }
              }
              *puVar3 = uVar22;
              if ((uVar18 >> 1 != uVar22) || (local_78 < uVar18)) break;
              local_78 = local_78 - uVar18;
              local_80 = local_80 + uVar18;
            }
            else if (iVar9 < 0x12) {
              if (iVar9 == 0xe) {
                if (uVar21 == 0) {
                  lVar27 = 0;
                }
                else {
                  lVar27 = (**param_4)(param_4,uVar21);
                  if (lVar27 == 0) {
                    iVar9 = 2;
                    goto LAB_001adfa0;
                  }
                }
                uVar23 = 0;
                uVar17 = 0;
                for (uVar22 = 0; uVar22 != uVar21; uVar22 = uVar22 + 1) {
                  if (uVar17 == 0) {
                    if (local_78 == 0) {
                      iVar9 = 0x10;
                      goto LAB_001adfa0;
                    }
                    local_78 = local_78 - 1;
                    uVar17 = 0x80;
                    uVar23 = (uint)*local_80;
                    local_80 = local_80 + 1;
                  }
                  uVar6 = uVar17 & uVar23;
                  uVar17 = uVar17 >> 1;
                  *(bool *)(lVar27 + uVar22) = uVar6 != 0;
                }
                lVar13 = 0;
                local_fc = 0;
                while ((uint)lVar13 < uVar20) {
                  pcVar2 = (char *)(lVar27 + lVar13);
                  lVar13 = lVar13 + 1;
                  if (*pcVar2 != '\0') {
                    local_fc = local_fc + 1;
                  }
                }
              }
              else {
                if (iVar9 != 0xf) goto LAB_001adf4c;
                if (local_fc == 0) {
                  lVar28 = 0;
                }
                else {
                  lVar28 = (**param_4)(param_4);
                  if (lVar28 == 0) goto LAB_001ae394;
                }
                uVar23 = 0;
                uVar17 = 0;
                for (uVar22 = 0; uVar22 < local_fc; uVar22 = uVar22 + 1) {
                  if (uVar17 == 0) {
                    if (local_78 == 0) {
                      iVar9 = 0x10;
                      goto LAB_001adfa0;
                    }
                    local_78 = local_78 - 1;
                    uVar17 = 0x80;
                    uVar23 = (uint)*local_80;
                    local_80 = local_80 + 1;
                  }
                  uVar6 = uVar17 & uVar23;
                  uVar17 = uVar17 >> 1;
                  *(bool *)(lVar28 + uVar22) = uVar6 != 0;
                }
              }
            }
            else {
              if (iVar9 == 0x14) {
                iVar9 = SzReadBoolVector2(&local_80,uVar21,&local_60,param_4);
                if (iVar9 != 0) goto LAB_001adfa0;
                if (local_78 == 0) break;
                local_78 = local_78 - 1;
                pbVar16 = local_80 + 1;
                bVar4 = *local_80;
                local_80 = pbVar16;
                if (bVar4 != 0) {
LAB_001ae618:
                  iVar9 = 4;
                  goto LAB_001adfa0;
                }
                puVar12 = local_110;
                for (lVar13 = 0; (uint)lVar13 < uVar20; lVar13 = lVar13 + 1) {
                  cVar5 = *(char *)(local_60 + lVar13);
                  *puVar12 = 0;
                  *(char *)((long)puVar12 + 0x1c) = cVar5;
                  if (cVar5 != '\0') {
                    uVar17 = 0;
                    do {
                      if (local_78 == 0) goto LAB_001ae228;
                      local_78 = local_78 - 1;
                      pbVar16 = local_80 + 1;
                      *(uint *)puVar12 =
                           *(uint *)puVar12 | (uint)*local_80 << (ulong)(uVar17 & 0x1f);
                      uVar17 = uVar17 + 8;
                      local_80 = pbVar16;
                    } while (uVar17 != 0x20);
                    uVar17 = 0;
                    *(undefined4 *)((long)puVar12 + 4) = 0;
                    do {
                      local_80 = pbVar16;
                      if (local_78 == 0) goto LAB_001ae228;
                      local_78 = local_78 - 1;
                      local_80 = pbVar16 + 1;
                      *(uint *)((long)puVar12 + 4) =
                           *(uint *)((long)puVar12 + 4) | (uint)*pbVar16 << (ulong)(uVar17 & 0x1f);
                      uVar17 = uVar17 + 8;
                      pbVar16 = local_80;
                    } while (uVar17 != 0x20);
                  }
                  puVar12 = puVar12 + 4;
                }
              }
              else {
                if (iVar9 != 0x15) goto LAB_001adf4c;
                iVar9 = SzReadBoolVector2(&local_80,uVar21,&local_60,param_4);
                if (iVar9 != 0) goto LAB_001adfa0;
                if (local_78 == 0) break;
                local_78 = local_78 - 1;
                pbVar16 = local_80 + 1;
                bVar4 = *local_80;
                local_80 = pbVar16;
                if (bVar4 != 0) goto LAB_001ae618;
                puVar14 = (uint *)((long)local_110 + 0x14);
                for (lVar13 = 0; (uint)lVar13 < uVar20; lVar13 = lVar13 + 1) {
                  cVar5 = *(char *)(local_60 + lVar13);
                  *puVar14 = 0;
                  *(char *)((long)puVar14 + 9) = cVar5;
                  if (cVar5 != '\0') {
                    uVar17 = 0;
                    do {
                      if (local_78 == 0) goto LAB_001ae228;
                      local_78 = local_78 - 1;
                      pbVar16 = local_80 + 1;
                      *puVar14 = *puVar14 | (uint)*local_80 << (ulong)(uVar17 & 0x1f);
                      uVar17 = uVar17 + 8;
                      local_80 = pbVar16;
                    } while (uVar17 != 0x20);
                  }
                  puVar14 = puVar14 + 8;
                }
              }
              (*param_4[1])(param_4);
              local_60 = 0;
            }
          }
          else {
LAB_001adf4c:
            local_78 = local_78 - uVar18;
            local_80 = local_80 + uVar18;
          }
        }
        goto LAB_001ae228;
      }
      lVar28 = 0;
      lVar27 = 0;
      iVar9 = 4;
    }
  }
LAB_001adfa0:
  (*param_4[1])(param_4,local_a0);
  (*param_4[1])(param_4,local_98);
  (*param_4[1])(param_4,local_70);
  (*param_4[1])(param_4,lVar27);
  (*param_4[1])(param_4,lVar28);
  (*param_4[1])(param_4,local_60);
  Buf_Free(&local_90,param_4);
  if (iVar9 != 0) {
LAB_001ad820:
    SzArEx_Free(param_1,param_3);
  }
LAB_001ad82c:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return iVar9;
}


