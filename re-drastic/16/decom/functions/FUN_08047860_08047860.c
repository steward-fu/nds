/*
 * Ghidra decompilation
 *
 * Function : FUN_08047860
 * Address  : 08047860
 * Program  : drastic16
 */


/* WARNING: Control flow encountered unimplemented instructions */

void FUN_08047860(int param_1)

{
  byte *pbVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  undefined4 uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint *puVar15;
  byte *pbVar16;
  byte bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  uint uVar29;
  int iVar30;
  int *piVar31;
  uint uVar32;
  undefined4 *puVar33;
  uint uVar34;
  byte bVar35;
  char cVar36;
  undefined4 *puVar37;
  char cVar38;
  undefined4 *puVar39;
  byte bVar40;
  undefined4 *puVar41;
  undefined4 uVar42;
  undefined2 uVar43;
  int iVar44;
  undefined *puVar45;
  int iVar46;
  int iVar47;
  undefined4 uVar48;
  int *piVar49;
  byte bVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  undefined4 uVar54;
  undefined *puVar55;
  undefined2 *puVar56;
  byte bVar57;
  undefined2 *puVar58;
  int iVar59;
  int iVar60;
  bool bVar61;
  undefined uVar62;
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  int *local_3b44;
  int local_3b3c;
  uint local_3b34;
  int local_3b30;
  int *local_3b2c;
  int *local_3b28;
  byte local_3b24;
  uint local_3b14;
  uint local_3b0c;
  byte local_3af0 [192];
  undefined8 uStack_3a30;
  undefined8 uStack_3a28;
  undefined auStack_3a20 [176];
  byte local_3970 [192];
  undefined4 local_38b0;
  undefined4 local_38ac;
  undefined4 local_38a8;
  undefined4 local_38a4;
  undefined4 local_38a0;
  undefined2 local_389c;
  undefined local_389a;
  undefined4 local_3898;
  undefined4 local_3894;
  undefined4 local_3890;
  undefined4 local_388c;
  undefined4 local_3888;
  undefined2 local_3884;
  undefined local_3882;
  undefined4 local_3880;
  undefined4 local_387c;
  undefined4 local_3878;
  undefined4 local_3874;
  undefined4 local_3870;
  undefined2 local_386c;
  undefined local_386a;
  undefined4 local_3868;
  undefined4 local_3864;
  undefined4 local_3860;
  undefined4 local_385c;
  undefined4 local_3858;
  undefined2 local_3854;
  undefined local_3852;
  int local_3730 [2];
  undefined auStack_3728 [1528];
  undefined4 local_3130 [1568];
  undefined auStack_18b0 [6284];
  
  iVar25 = *(int *)(param_1 + 0x324);
  *(char *)(param_1 + (iVar25 + 0xf3c) * 8 + 5) = (char)*(undefined4 *)(param_1 + 800);
  if (iVar25 == 0) {
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined *)(param_1 + (*(int *)(param_1 + 0x308) + 0xffd) * 8 + 6) = 0xff;
    *(undefined4 *)(param_1 + 0x63c) = 0;
    piVar49 = (int *)0x0;
    local_3b28 = (int *)0x0;
    local_3b14 = 0;
  }
  else {
    local_3b3c = 0;
    piVar28 = (int *)(param_1 + 0x79e8);
    piVar26 = (int *)(param_1 + 0x79e0);
    local_3b2c = local_3730;
    do {
      piVar49 = piVar26;
      piVar26 = piVar28;
      bVar40 = *(byte *)(piVar49 + 1);
      piVar31 = (int *)(uint)bVar40;
      iVar44 = *piVar49;
      bVar50 = *(byte *)((int)piVar49 + 5);
      uVar51 = (uint)bVar50;
      uVar27 = (uint)(iVar44 << 0x18) >> 0x1e;
      local_3b14 = *(byte *)((int)piVar26 + 5) - uVar51;
      piVar28 = local_3b2c;
      local_3b24 = bVar40;
      local_3b44._0_1_ = bVar40;
      switch(piVar31) {
      case (int *)0x0:
        *(char *)((int)piVar49 + 6) = (char)(local_3b14 / 3);
        uVar19 = local_3b14 / 3 & 0xff;
        if (uVar19 != 0) {
          bVar61 = uVar19 >> 4 == 0;
          if ((bVar61 || 0xe < uVar19) && (!bVar61 && uVar19 != 0xf)) {
            SIMDExpandImmediate(0,0xe,0xff);
            SIMDExpandImmediate(0,0xe,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
          bVar61 = true;
          uVar12 = 0;
          pbVar16 = (byte *)(param_1 + uVar51 + 0x1280);
          do {
            bVar17 = *pbVar16;
            bVar7 = pbVar16[1];
            bVar35 = pbVar16[2];
            bVar57 = bVar35 & bVar17 & bVar7;
            local_3970[uVar12] = bVar57;
            if (bVar57 == 0) {
              bVar61 = false;
            }
            local_3af0[uVar12] = bVar35 | bVar17 | bVar7;
            uVar12 = uVar12 + 1;
            pbVar16 = pbVar16 + 3;
          } while (uVar12 < uVar19);
          if (!bVar61) {
            piVar31 = local_3b2c;
            bVar17 = bVar40;
            if (uVar27 == 3) {
              uVar62 = *(undefined *)((int)piVar49 + 7);
              if (uVar19 != 0) {
                cVar38 = '\x04';
                local_3b24 = 0;
                goto LAB_08047e60;
              }
              cVar38 = '\x04';
LAB_0804a6fc:
              *(byte *)((int)piVar31 + 5) = bVar40 + bVar50;
              piVar28 = piVar31 + 2;
              *piVar31 = iVar44;
              *(byte *)(piVar31 + 1) = (byte)local_3b44;
              *(byte *)((int)piVar31 + 6) = bVar17;
              *(undefined *)((int)piVar31 + 7) = uVar62;
              *(undefined4 *)(param_1 + 0x638) = 0;
            }
            else {
              FUN_08090be8(param_1 + (short)(ushort)bVar50 * 0x10 + 0x640,uVar19,0x30,0x10,
                           &uStack_3a30);
              uVar19 = (uint)*(byte *)((int)piVar49 + 6);
              if (uVar19 == 0) {
                local_3b24 = *(byte *)(piVar49 + 1);
                iVar44 = *piVar49;
                bVar50 = *(byte *)((int)piVar49 + 5);
                cVar38 = (local_3b24 & 1) + 4;
                uVar62 = *(undefined *)((int)piVar49 + 7);
                local_3b44._0_1_ = local_3b24 & 3;
                goto LAB_0804a6fc;
              }
              uVar12 = (uint)(*(byte *)((int)piVar49 + 6) >> 4);
              uVar51 = uVar12 * 0x10;
              if (uVar12 != 0 && uVar19 < 0xf || (uVar12 == 0 || uVar19 == 0xf)) {
                uVar51 = 0;
LAB_08049f68:
                bVar40 = local_3970[uVar51];
                if ((*(byte *)((int)&uStack_3a30 + uVar51) & uVar27) == 0) {
                  bVar40 = bVar40 | 1;
                }
                local_3970[uVar51] = bVar40;
                if (uVar51 + 1 < uVar19) {
                  bVar40 = local_3970[uVar51 + 1];
                  if ((*(byte *)((int)&uStack_3a30 + uVar51 + 1) & uVar27) == 0) {
                    bVar40 = bVar40 | 1;
                  }
                  local_3970[uVar51 + 1] = bVar40;
                  if (uVar51 + 2 < uVar19) {
                    bVar40 = local_3970[uVar51 + 2];
                    if ((*(byte *)((int)&uStack_3a30 + uVar51 + 2) & uVar27) == 0) {
                      bVar40 = bVar40 | 1;
                    }
                    local_3970[uVar51 + 2] = bVar40;
                    if (uVar51 + 3 < uVar19) {
                      bVar40 = local_3970[uVar51 + 3];
                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 3) & uVar27) == 0) {
                        bVar40 = bVar40 | 1;
                      }
                      local_3970[uVar51 + 3] = bVar40;
                      if (uVar51 + 4 < uVar19) {
                        bVar40 = local_3970[uVar51 + 4];
                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 4) & uVar27) == 0) {
                          bVar40 = bVar40 | 1;
                        }
                        local_3970[uVar51 + 4] = bVar40;
                        if (uVar51 + 5 < uVar19) {
                          bVar40 = local_3970[uVar51 + 5];
                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 5) & uVar27) == 0) {
                            bVar40 = bVar40 | 1;
                          }
                          local_3970[uVar51 + 5] = bVar40;
                          if (uVar51 + 6 < uVar19) {
                            bVar40 = local_3970[uVar51 + 6];
                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 6) & uVar27) == 0) {
                              bVar40 = bVar40 | 1;
                            }
                            local_3970[uVar51 + 6] = bVar40;
                            if (uVar51 + 7 < uVar19) {
                              bVar40 = local_3970[uVar51 + 7];
                              if ((*(byte *)((int)&uStack_3a30 + uVar51 + 7) & uVar27) == 0) {
                                bVar40 = bVar40 | 1;
                              }
                              local_3970[uVar51 + 7] = bVar40;
                              if (uVar51 + 8 < uVar19) {
                                bVar40 = local_3970[uVar51 + 8];
                                if ((*(byte *)((int)&uStack_3a30 + uVar51 + 8) & uVar27) == 0) {
                                  bVar40 = bVar40 | 1;
                                }
                                local_3970[uVar51 + 8] = bVar40;
                                if (uVar51 + 9 < uVar19) {
                                  bVar40 = local_3970[uVar51 + 9];
                                  if ((*(byte *)((int)&uStack_3a30 + uVar51 + 9) & uVar27) == 0) {
                                    bVar40 = bVar40 | 1;
                                  }
                                  local_3970[uVar51 + 9] = bVar40;
                                  if (uVar51 + 10 < uVar19) {
                                    bVar40 = local_3970[uVar51 + 10];
                                    if ((*(byte *)((int)&uStack_3a30 + uVar51 + 10) & uVar27) == 0)
                                    {
                                      bVar40 = bVar40 | 1;
                                    }
                                    local_3970[uVar51 + 10] = bVar40;
                                    if (uVar51 + 0xb < uVar19) {
                                      bVar40 = local_3970[uVar51 + 0xb];
                                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xb) & uVar27) ==
                                          0) {
                                        bVar40 = bVar40 | 1;
                                      }
                                      local_3970[uVar51 + 0xb] = bVar40;
                                      if (uVar51 + 0xc < uVar19) {
                                        bVar40 = local_3970[uVar51 + 0xc];
                                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xc) & uVar27)
                                            == 0) {
                                          bVar40 = bVar40 | 1;
                                        }
                                        local_3970[uVar51 + 0xc] = bVar40;
                                        if (uVar51 + 0xd < uVar19) {
                                          bVar40 = local_3970[uVar51 + 0xd];
                                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xd) & uVar27)
                                              == 0) {
                                            bVar40 = bVar40 | 1;
                                          }
                                          local_3970[uVar51 + 0xd] = bVar40;
                                          if (uVar51 + 0xe < uVar19) {
                                            bVar40 = local_3970[uVar51 + 0xe];
                                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xe) &
                                                uVar27) == 0) {
                                              bVar40 = bVar40 | 1;
                                            }
                                            local_3970[uVar51 + 0xe] = bVar40;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                auVar2 = ZEXT816(0);
                auVar3 = SIMDExpandImmediate(0,0,1);
                auVar5._4_4_ = uVar27;
                auVar5._0_4_ = uVar27;
                auVar5._8_8_ = 0;
                auVar5 = auVar5 & auVar5 << 0x40;
                pbVar16 = local_3970;
                puVar45 = auStack_3a20;
                uVar32 = 0;
                do {
                  pbVar16 = pbVar16 + 0x10;
                  auVar64 = VectorCopyLong(*(undefined8 *)(puVar45 + -0x10),1,1);
                  auVar65 = VectorCopyLong(*(undefined8 *)(puVar45 + -8),1,1);
                  uVar32 = uVar32 + 1;
                  auVar4 = *(undefined (*) [16])(pbVar16 + -0x10);
                  auVar68 = VectorCopyLong(auVar64._0_8_,2,1);
                  puVar45 = puVar45 + 0x10;
                  auVar67 = VectorCopyLong(auVar64._8_8_,2,1);
                  auVar64 = VectorCopyLong(auVar65._0_8_,2,1);
                  auVar65 = VectorCopyLong(auVar65._8_8_,2,1);
                  auVar68 = VectorCompareEqual(auVar68 & auVar5,0,4);
                  auVar67 = VectorCompareEqual(auVar67 & auVar5,0,4);
                  auVar64 = VectorCompareEqual(auVar64 & auVar5,0,4);
                  auVar65 = VectorCompareEqual(auVar65 & auVar5,0,4);
                  auVar67 = VectorBitwiseSelect(auVar67,auVar3,auVar2);
                  auVar68 = VectorBitwiseSelect(auVar68,auVar3,auVar2);
                  auVar65 = VectorBitwiseSelect(auVar65,auVar3,auVar2);
                  auVar64 = VectorBitwiseSelect(auVar64,auVar3,auVar2);
                  auVar63._0_8_ = VectorCopyNarrow(auVar68,4);
                  auVar63._8_8_ = VectorCopyNarrow(auVar67,4);
                  auVar69._0_8_ = VectorCopyNarrow(auVar64,4);
                  auVar69._8_8_ = VectorCopyNarrow(auVar65,4);
                  auVar66._0_8_ = VectorCopyNarrow(auVar63,2);
                  auVar66._8_8_ = VectorCopyNarrow(auVar69,2);
                  *(longlong *)(pbVar16 + -0x10) = SUB168(auVar66 | auVar4,0);
                  *(longlong *)(pbVar16 + -8) = SUB168(auVar66 | auVar4,8);
                } while (uVar32 < uVar12);
                if (uVar51 != uVar19) goto LAB_08049f68;
              }
              local_3b24 = *(byte *)(piVar49 + 1);
              uVar51 = (uint)*(byte *)((int)piVar49 + 5);
              local_3b44._0_1_ = local_3b24 & 3;
              cVar38 = (local_3b24 & 1) + 4;
              uVar62 = *(undefined *)((int)piVar49 + 7);
              iVar44 = *piVar49;
LAB_08047e60:
              bVar50 = (byte)uVar51;
              uVar27 = 0;
              uVar12 = 0;
              bVar61 = false;
              do {
                bVar40 = local_3970[uVar12];
                piVar28 = piVar31;
                if (bVar61) {
                  if (bVar40 == 0) {
                    if (local_3af0[uVar12] == 0) {
                      bVar61 = false;
                      uVar27 = uVar12;
                    }
                    else {
                      piVar28 = piVar31 + 2;
                      *piVar31 = iVar44;
                      *(char *)((int)piVar31 + 5) = (char)uVar51;
                      *(char *)(piVar31 + 1) = cVar38;
                      *(undefined *)((int)piVar31 + 7) = uVar62;
                    }
                  }
                }
                else if ((bVar40 != 0) || (local_3af0[uVar12] != 0)) {
                  if (uVar12 != 0) {
                    *piVar31 = iVar44;
                    *(undefined *)((int)piVar31 + 7) = uVar62;
                    piVar28 = piVar31 + 2;
                    *(byte *)(piVar31 + 1) = (byte)local_3b44;
                    *(byte *)((int)piVar31 + 5) = bVar50 + (char)uVar27 * '\x03';
                    *(char *)((int)piVar31 + 6) = (char)uVar12 - (char)uVar27;
                  }
                  if (bVar40 == 0) {
                    *piVar28 = iVar44;
                    *(char *)((int)piVar28 + 5) = (char)uVar51;
                    *(char *)(piVar28 + 1) = cVar38;
                    *(undefined *)((int)piVar28 + 7) = uVar62;
                    piVar28 = piVar28 + 2;
                  }
                  bVar61 = true;
                }
                uVar12 = uVar12 + 1;
                uVar51 = uVar51 + 3 & 0xff;
                piVar31 = piVar28;
              } while (uVar12 != uVar19);
              *(undefined4 *)(param_1 + 0x638) = 1;
              if (!bVar61) {
                bVar40 = (char)uVar27 * '\x03';
                bVar17 = (char)uVar12 - (char)uVar27;
                goto LAB_0804a6fc;
              }
            }
            if ((*(char *)((int)local_3b2c + 5) == *(char *)((int)piVar49 + 5)) &&
               (cVar38 != *(char *)(local_3b2c + 1))) {
              *(byte *)(local_3b2c + 1) = local_3b24;
            }
          }
        }
        break;
      case (int *)0x1:
        uVar19 = local_3b14 >> 2 & 0xff;
        *(char *)((int)piVar49 + 6) = (char)(local_3b14 >> 2);
        if (uVar19 != 0) {
          bVar61 = uVar19 >> 4 == 0;
          if ((bVar61 || 0xe < uVar19) && (!bVar61 && uVar19 != 0xf)) {
            SIMDExpandImmediate(0,0xe,0xff);
            SIMDExpandImmediate(0,0xe,1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
          bVar61 = true;
          uVar12 = 0;
          pbVar16 = (byte *)(param_1 + uVar51 + 0x1280);
          do {
            bVar40 = pbVar16[3];
            bVar17 = pbVar16[2];
            bVar7 = pbVar16[1];
            bVar35 = *pbVar16;
            bVar57 = bVar35 & bVar7 & bVar17 & bVar40;
            local_3970[uVar12] = bVar57;
            if (bVar57 == 0) {
              bVar61 = false;
            }
            local_3af0[uVar12] = bVar35 | bVar7 | bVar17 | bVar40;
            uVar12 = uVar12 + 1;
            pbVar16 = pbVar16 + 4;
          } while (uVar12 < uVar19);
          if (!bVar61) {
            if (uVar27 == 3) {
              uVar62 = *(undefined *)((int)piVar49 + 7);
              if (uVar19 != 0) {
                local_3b24 = 1;
                cVar38 = '\x05';
                goto LAB_08048088;
              }
              cVar38 = '\x05';
LAB_0804aff8:
              cVar36 = '\0';
              piVar31 = local_3b2c;
              cVar18 = cVar36;
LAB_0804a6b8:
              *(byte *)((int)piVar31 + 5) = cVar36 + bVar50;
              piVar28 = piVar31 + 2;
              *(byte *)(piVar31 + 1) = (byte)local_3b44;
              *piVar31 = iVar44;
              *(char *)((int)piVar31 + 6) = cVar18;
              *(undefined *)((int)piVar31 + 7) = uVar62;
              *(undefined4 *)(param_1 + 0x638) = 0;
            }
            else {
              FUN_08090be8(param_1 + (short)(ushort)bVar50 * 0x10 + 0x640,uVar19,0x40,0x10,
                           &uStack_3a30);
              uVar19 = (uint)*(byte *)((int)piVar49 + 6);
              if (uVar19 == 0) {
                local_3b24 = *(byte *)(piVar49 + 1);
                iVar44 = *piVar49;
                local_3b44._0_1_ = local_3b24 & 3;
                cVar38 = (local_3b24 & 1) + 4;
                bVar50 = *(byte *)((int)piVar49 + 5);
                uVar62 = *(undefined *)((int)piVar49 + 7);
                goto LAB_0804aff8;
              }
              uVar12 = (uint)(*(byte *)((int)piVar49 + 6) >> 4);
              uVar51 = uVar12 * 0x10;
              if (uVar12 != 0 && uVar19 < 0xf || (uVar12 == 0 || uVar19 == 0xf)) {
                uVar51 = 0;
LAB_0804a264:
                bVar40 = local_3970[uVar51];
                if ((*(byte *)((int)&uStack_3a30 + uVar51) & uVar27) == 0) {
                  bVar40 = bVar40 | 1;
                }
                local_3970[uVar51] = bVar40;
                if (uVar51 + 1 < uVar19) {
                  bVar40 = local_3970[uVar51 + 1];
                  if ((*(byte *)((int)&uStack_3a30 + uVar51 + 1) & uVar27) == 0) {
                    bVar40 = bVar40 | 1;
                  }
                  local_3970[uVar51 + 1] = bVar40;
                  if (uVar51 + 2 < uVar19) {
                    bVar40 = local_3970[uVar51 + 2];
                    if ((*(byte *)((int)&uStack_3a30 + uVar51 + 2) & uVar27) == 0) {
                      bVar40 = bVar40 | 1;
                    }
                    local_3970[uVar51 + 2] = bVar40;
                    if (uVar51 + 3 < uVar19) {
                      bVar40 = local_3970[uVar51 + 3];
                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 3) & uVar27) == 0) {
                        bVar40 = bVar40 | 1;
                      }
                      local_3970[uVar51 + 3] = bVar40;
                      if (uVar51 + 4 < uVar19) {
                        bVar40 = local_3970[uVar51 + 4];
                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 4) & uVar27) == 0) {
                          bVar40 = bVar40 | 1;
                        }
                        local_3970[uVar51 + 4] = bVar40;
                        if (uVar51 + 5 < uVar19) {
                          bVar40 = local_3970[uVar51 + 5];
                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 5) & uVar27) == 0) {
                            bVar40 = bVar40 | 1;
                          }
                          local_3970[uVar51 + 5] = bVar40;
                          if (uVar51 + 6 < uVar19) {
                            bVar40 = local_3970[uVar51 + 6];
                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 6) & uVar27) == 0) {
                              bVar40 = bVar40 | 1;
                            }
                            local_3970[uVar51 + 6] = bVar40;
                            if (uVar51 + 7 < uVar19) {
                              bVar40 = local_3970[uVar51 + 7];
                              if ((*(byte *)((int)&uStack_3a30 + uVar51 + 7) & uVar27) == 0) {
                                bVar40 = bVar40 | 1;
                              }
                              local_3970[uVar51 + 7] = bVar40;
                              if (uVar51 + 8 < uVar19) {
                                bVar40 = local_3970[uVar51 + 8];
                                if ((*(byte *)((int)&uStack_3a30 + uVar51 + 8) & uVar27) == 0) {
                                  bVar40 = bVar40 | 1;
                                }
                                local_3970[uVar51 + 8] = bVar40;
                                if (uVar51 + 9 < uVar19) {
                                  bVar40 = local_3970[uVar51 + 9];
                                  if ((*(byte *)((int)&uStack_3a30 + uVar51 + 9) & uVar27) == 0) {
                                    bVar40 = bVar40 | 1;
                                  }
                                  local_3970[uVar51 + 9] = bVar40;
                                  if (uVar51 + 10 < uVar19) {
                                    bVar40 = local_3970[uVar51 + 10];
                                    if ((*(byte *)((int)&uStack_3a30 + uVar51 + 10) & uVar27) == 0)
                                    {
                                      bVar40 = bVar40 | 1;
                                    }
                                    local_3970[uVar51 + 10] = bVar40;
                                    if (uVar51 + 0xb < uVar19) {
                                      bVar40 = local_3970[uVar51 + 0xb];
                                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xb) & uVar27) ==
                                          0) {
                                        bVar40 = bVar40 | 1;
                                      }
                                      local_3970[uVar51 + 0xb] = bVar40;
                                      if (uVar51 + 0xc < uVar19) {
                                        bVar40 = local_3970[uVar51 + 0xc];
                                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xc) & uVar27)
                                            == 0) {
                                          bVar40 = bVar40 | 1;
                                        }
                                        local_3970[uVar51 + 0xc] = bVar40;
                                        if (uVar51 + 0xd < uVar19) {
                                          bVar40 = local_3970[uVar51 + 0xd];
                                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xd) & uVar27)
                                              == 0) {
                                            bVar40 = bVar40 | 1;
                                          }
                                          local_3970[uVar51 + 0xd] = bVar40;
                                          if (uVar51 + 0xe < uVar19) {
                                            bVar40 = local_3970[uVar51 + 0xe];
                                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xe) &
                                                uVar27) == 0) {
                                              bVar40 = bVar40 | 1;
                                            }
                                            local_3970[uVar51 + 0xe] = bVar40;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                auVar2 = ZEXT816(0);
                auVar3 = SIMDExpandImmediate(0,0,1);
                auVar65._4_4_ = uVar27;
                auVar65._0_4_ = uVar27;
                auVar65._8_8_ = 0;
                auVar65 = auVar65 & auVar65 << 0x40;
                pbVar16 = local_3970;
                puVar45 = auStack_3a20;
                uVar32 = 0;
                do {
                  pbVar16 = pbVar16 + 0x10;
                  auVar67 = VectorCopyLong(*(undefined8 *)(puVar45 + -0x10),1,1);
                  auVar64 = VectorCopyLong(*(undefined8 *)(puVar45 + -8),1,1);
                  uVar32 = uVar32 + 1;
                  auVar4 = *(undefined (*) [16])(pbVar16 + -0x10);
                  auVar71 = VectorCopyLong(auVar67._0_8_,2,1);
                  puVar45 = puVar45 + 0x10;
                  auVar68 = VectorCopyLong(auVar67._8_8_,2,1);
                  auVar67 = VectorCopyLong(auVar64._0_8_,2,1);
                  auVar64 = VectorCopyLong(auVar64._8_8_,2,1);
                  auVar71 = VectorCompareEqual(auVar71 & auVar65,0,4);
                  auVar68 = VectorCompareEqual(auVar68 & auVar65,0,4);
                  auVar67 = VectorCompareEqual(auVar67 & auVar65,0,4);
                  auVar64 = VectorCompareEqual(auVar64 & auVar65,0,4);
                  auVar68 = VectorBitwiseSelect(auVar68,auVar3,auVar2);
                  auVar71 = VectorBitwiseSelect(auVar71,auVar3,auVar2);
                  auVar64 = VectorBitwiseSelect(auVar64,auVar3,auVar2);
                  auVar67 = VectorBitwiseSelect(auVar67,auVar3,auVar2);
                  auVar71._0_8_ = VectorCopyNarrow(auVar71,4);
                  auVar71._8_8_ = VectorCopyNarrow(auVar68,4);
                  auVar70._0_8_ = VectorCopyNarrow(auVar67,4);
                  auVar70._8_8_ = VectorCopyNarrow(auVar64,4);
                  auVar72._0_8_ = VectorCopyNarrow(auVar71,2);
                  auVar72._8_8_ = VectorCopyNarrow(auVar70,2);
                  *(longlong *)(pbVar16 + -0x10) = SUB168(auVar72 | auVar4,0);
                  *(longlong *)(pbVar16 + -8) = SUB168(auVar72 | auVar4,8);
                } while (uVar32 < uVar12);
                if (uVar51 != uVar19) goto LAB_0804a264;
              }
              local_3b24 = *(byte *)(piVar49 + 1);
              uVar51 = (uint)*(byte *)((int)piVar49 + 5);
              local_3b44._0_1_ = local_3b24 & 3;
              cVar38 = (local_3b24 & 1) + 4;
              uVar62 = *(undefined *)((int)piVar49 + 7);
              iVar44 = *piVar49;
LAB_08048088:
              bVar50 = (byte)uVar51;
              uVar27 = 0;
              uVar12 = 0;
              bVar61 = false;
              piVar31 = local_3b2c;
              do {
                bVar40 = local_3970[uVar12];
                piVar28 = piVar31;
                if (bVar61) {
                  if (bVar40 == 0) {
                    if (local_3af0[uVar12] == 0) {
                      bVar61 = false;
                      uVar27 = uVar12;
                    }
                    else {
                      piVar28 = piVar31 + 2;
                      *piVar31 = iVar44;
                      *(char *)((int)piVar31 + 5) = (char)uVar51;
                      *(char *)(piVar31 + 1) = cVar38;
                      *(undefined *)((int)piVar31 + 7) = uVar62;
                    }
                  }
                }
                else if ((bVar40 != 0) || (local_3af0[uVar12] != 0)) {
                  if (uVar12 != 0) {
                    *piVar31 = iVar44;
                    piVar28 = piVar31 + 2;
                    *(undefined *)((int)piVar31 + 7) = uVar62;
                    *(byte *)(piVar31 + 1) = (byte)local_3b44;
                    *(char *)((int)piVar31 + 6) = (char)uVar12 - (char)uVar27;
                    *(byte *)((int)piVar31 + 5) = bVar50 + (char)uVar27 * '\x04';
                  }
                  if (bVar40 == 0) {
                    *piVar28 = iVar44;
                    *(char *)((int)piVar28 + 5) = (char)uVar51;
                    *(char *)(piVar28 + 1) = cVar38;
                    *(undefined *)((int)piVar28 + 7) = uVar62;
                    piVar28 = piVar28 + 2;
                  }
                  bVar61 = true;
                }
                uVar12 = uVar12 + 1;
                uVar51 = uVar51 + 4 & 0xff;
                piVar31 = piVar28;
              } while (uVar12 != uVar19);
              *(undefined4 *)(param_1 + 0x638) = 1;
              if (!bVar61) {
                cVar36 = (char)((uVar27 & 0x3f) << 2);
                cVar18 = (char)uVar12 - (char)uVar27;
                goto LAB_0804a6b8;
              }
            }
            if ((*(char *)((int)local_3b2c + 5) == *(char *)((int)piVar49 + 5)) &&
               (cVar38 != *(char *)(local_3b2c + 1))) {
              *(byte *)(local_3b2c + 1) = local_3b24;
            }
          }
        }
        break;
      case (int *)0x2:
      case (int *)0x6:
        uVar19 = local_3b14 - 2;
        bVar17 = *(byte *)((int)piVar49 + 7);
        bVar40 = (&DAT_080e69f0)[uVar27];
        if (bVar17 != 0) {
          uVar27 = uVar27 ^ bVar40;
        }
        if (0 < (int)uVar19) {
          *(char *)((int)piVar49 + 6) = (char)uVar19;
          bVar61 = true;
          iVar52 = param_1 + uVar51 + 0x1280;
          uVar12 = 0;
          pbVar16 = (byte *)(iVar52 + 3);
          bVar35 = *(byte *)(iVar52 + 2);
          bVar7 = *(byte *)(iVar52 + 1);
          bVar57 = *(byte *)(param_1 + uVar51 + 0x1280);
          do {
            bVar14 = bVar7;
            bVar7 = bVar35;
            bVar35 = bVar14 & bVar7 & bVar57;
            local_3970[uVar12] = bVar35;
            if (bVar35 == 0) {
              bVar61 = false;
            }
            local_3af0[uVar12] = bVar14 | bVar57 | bVar7;
            uVar12 = uVar12 + 1;
            bVar35 = *pbVar16;
            pbVar16 = pbVar16 + 1;
            bVar57 = bVar14;
          } while (uVar19 != uVar12);
          if (!bVar61) {
            if (uVar27 == 3) {
LAB_08047c14:
              cVar38 = (char)uVar51;
              uVar27 = 0;
              local_3b34._0_1_ = (byte)piVar31 & 3;
              uVar32 = ((uint)piVar31 & 1) + 4;
              uVar12 = 0;
              bVar61 = false;
              piVar31 = local_3b2c;
              do {
                bVar40 = local_3970[uVar12];
                bVar50 = (byte)uVar12;
                piVar28 = piVar31;
                if (bVar61) {
                  if (bVar40 == 0) {
                    if (local_3af0[uVar12] == 0) {
                      bVar61 = false;
                      uVar27 = uVar12;
                    }
                    else {
                      *(char *)(piVar31 + 1) = (char)uVar32;
                      *piVar31 = iVar44;
                      *(char *)((int)piVar31 + 5) = (char)uVar51;
                      piVar28 = piVar31 + 2;
                      *(byte *)((int)piVar31 + 7) = bVar17 ^ bVar50 & 1;
                    }
                  }
                }
                else if ((bVar40 != 0) || (local_3af0[uVar12] != 0)) {
                  if (uVar12 != 0) {
                    bVar7 = (byte)uVar27;
                    *piVar31 = iVar44;
                    piVar28 = piVar31 + 2;
                    *(byte *)(piVar31 + 1) = (byte)local_3b34;
                    *(byte *)((int)piVar31 + 7) = bVar17 ^ bVar7 & 1;
                    *(byte *)((int)piVar31 + 6) = bVar50 - bVar7;
                    *(byte *)((int)piVar31 + 5) = cVar38 + bVar7;
                  }
                  if (bVar40 == 0) {
                    *(char *)(piVar28 + 1) = (char)uVar32;
                    *piVar28 = iVar44;
                    *(char *)((int)piVar28 + 5) = (char)uVar51;
                    *(byte *)((int)piVar28 + 7) = bVar17 ^ bVar50 & 1;
                    piVar28 = piVar28 + 2;
                  }
                  bVar61 = true;
                }
                uVar12 = uVar12 + 1;
                uVar51 = uVar51 + 1 & 0xff;
                piVar31 = piVar28;
              } while (uVar12 != uVar19);
              *(undefined4 *)(param_1 + 0x638) = 1;
              if (!bVar61) {
                bVar50 = (byte)uVar27;
                cVar18 = (char)uVar12 - bVar50;
                bVar40 = bVar50 & 1;
                goto LAB_0804a744;
              }
            }
            else {
              FUN_08090be8(param_1 + (short)(ushort)bVar50 * 0x10 + 0x640,uVar19,0x10,0x10,
                           &uStack_3a30);
              bVar50 = *(byte *)((int)piVar49 + 6);
              if (bVar50 != 0) {
                uVar19 = 0;
                do {
                  bVar17 = local_3970[uVar19];
                  uVar51 = *(byte *)(uVar19 + (int)&uStack_3a30) & uVar27;
                  uVar27 = uVar27 ^ bVar40;
                  if (uVar51 == 0) {
                    bVar17 = bVar17 | 1;
                  }
                  local_3970[uVar19] = bVar17;
                  uVar19 = uVar19 + 1;
                } while (uVar19 != bVar50);
                piVar31 = (int *)(uint)*(byte *)(piVar49 + 1);
                uVar51 = (uint)*(byte *)((int)piVar49 + 5);
                bVar17 = *(byte *)((int)piVar49 + 7);
                iVar44 = *piVar49;
                local_3b44._0_1_ = *(byte *)(piVar49 + 1);
                goto LAB_08047c14;
              }
              local_3b44._0_1_ = *(byte *)(piVar49 + 1);
              iVar44 = *piVar49;
              local_3b34._0_1_ = (byte)local_3b44 & 3;
              uVar32 = ((byte)local_3b44 & 1) + 4;
              bVar17 = *(byte *)((int)piVar49 + 7);
              cVar38 = *(char *)((int)piVar49 + 5);
              cVar18 = '\0';
              bVar40 = 0;
              piVar31 = local_3b2c;
LAB_0804a744:
              *(byte *)((int)piVar31 + 5) = bVar50 + cVar38;
              *(byte *)((int)piVar31 + 7) = bVar40 ^ bVar17;
              piVar28 = piVar31 + 2;
              *(byte *)(piVar31 + 1) = (byte)local_3b34;
              *piVar31 = iVar44;
              *(char *)((int)piVar31 + 6) = cVar18;
              *(undefined4 *)(param_1 + 0x638) = 0;
            }
            if ((*(char *)((int)local_3b2c + 5) == *(char *)((int)piVar49 + 5)) &&
               (uVar32 != *(byte *)(local_3b2c + 1))) {
              *(byte *)(local_3b2c + 1) = (byte)local_3b44;
            }
          }
        }
        break;
      case (int *)0x3:
      case (int *)0x7:
        bVar61 = true;
        uVar19 = (local_3b14 >> 1) - 1;
        *(undefined *)((int)piVar49 + 7) = 1;
        if (0 < (int)uVar19) {
          *(char *)((int)piVar49 + 6) = (char)uVar19;
          iVar52 = param_1 + uVar51 + 0x1280;
          if ((uVar19 & 0xff) != 0) {
            uVar12 = 0;
            pbVar16 = (byte *)(iVar52 + 4);
            bVar17 = *(byte *)(iVar52 + 2);
            bVar7 = *(byte *)(iVar52 + 3);
            bVar35 = *(byte *)(iVar52 + 1);
            bVar57 = *(byte *)(param_1 + uVar51 + 0x1280);
            do {
              bVar6 = bVar7;
              bVar14 = bVar17;
              bVar17 = bVar14 & bVar35 & bVar57 & bVar6;
              local_3970[uVar12] = bVar17;
              if (bVar17 == 0) {
                bVar61 = false;
              }
              local_3af0[uVar12] = bVar35 | bVar57 | bVar14 | bVar6;
              uVar12 = uVar12 + 1;
              pbVar1 = pbVar16 + 1;
              bVar17 = *pbVar16;
              pbVar16 = pbVar16 + 2;
              bVar7 = *pbVar1;
              bVar35 = bVar6;
              bVar57 = bVar14;
            } while (uVar12 != (uVar19 & 0xff));
            if (!bVar61) {
              if (uVar27 == 3) {
                uVar62 = uVar12 == 0;
                bVar40 = bVar40 & 3;
                local_3b34 = ((uint)piVar31 & 1) + 4;
                local_3b44 = piVar31;
                if ((bool)uVar62) goto LAB_0804b328;
                uVar62 = 1;
LAB_0804a4c8:
                bVar50 = (byte)uVar51;
                uVar27 = 0;
                uVar19 = 0;
                bVar61 = false;
                piVar31 = local_3b2c;
                do {
                  bVar17 = local_3970[uVar19];
                  piVar28 = piVar31;
                  if (bVar61) {
                    if (bVar17 == 0) {
                      if (local_3af0[uVar19] == 0) {
                        bVar61 = false;
                        uVar27 = uVar19;
                      }
                      else {
                        piVar28 = piVar31 + 2;
                        *piVar31 = iVar44;
                        *(char *)((int)piVar31 + 5) = (char)uVar51;
                        *(char *)(piVar31 + 1) = (char)local_3b34;
                        *(undefined *)((int)piVar31 + 7) = uVar62;
                      }
                    }
                  }
                  else if ((bVar17 != 0) || (local_3af0[uVar19] != 0)) {
                    if (uVar19 != 0) {
                      *(byte *)(piVar31 + 1) = bVar40;
                      *piVar31 = iVar44;
                      *(undefined *)((int)piVar31 + 7) = uVar62;
                      piVar28 = piVar31 + 2;
                      *(byte *)((int)piVar31 + 5) = bVar50 + (char)uVar27 * '\x02';
                      *(char *)((int)piVar31 + 6) = (char)uVar19 - (char)uVar27;
                    }
                    if (bVar17 == 0) {
                      *piVar28 = iVar44;
                      *(char *)((int)piVar28 + 5) = (char)uVar51;
                      *(char *)(piVar28 + 1) = (char)local_3b34;
                      *(undefined *)((int)piVar28 + 7) = uVar62;
                      piVar28 = piVar28 + 2;
                    }
                    bVar61 = true;
                  }
                  uVar19 = uVar19 + 1;
                  uVar51 = uVar51 + 2 & 0xff;
                  piVar31 = piVar28;
                } while (uVar19 != uVar12);
                *(undefined4 *)(param_1 + 0x638) = 1;
                if (!bVar61) {
                  cVar18 = (char)((uVar27 & 0x7f) << 1);
                  cVar38 = (char)uVar19 - (char)uVar27;
                  goto LAB_0804a78c;
                }
              }
              else {
                FUN_08090be8(param_1 + (short)(ushort)bVar50 * 0x10 + 0x640,uVar12,0x20,0x20,
                             &uStack_3a30);
                uVar12 = (uint)*(byte *)((int)piVar49 + 6);
                if (uVar12 != 0) {
                  uVar19 = (uint)(*(byte *)((int)piVar49 + 6) >> 4);
                  uVar51 = uVar19 * 0x10;
                  if (uVar19 != 0 && uVar12 < 0xf || (uVar19 == 0 || uVar12 == 0xf)) {
                    uVar51 = 0;
LAB_0804ade8:
                    bVar40 = local_3970[uVar51];
                    if ((*(byte *)((int)&uStack_3a30 + uVar51) & uVar27) == 0) {
                      bVar40 = bVar40 | 1;
                    }
                    local_3970[uVar51] = bVar40;
                    if (uVar51 + 1 < uVar12) {
                      bVar40 = local_3970[uVar51 + 1];
                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 1) & uVar27) == 0) {
                        bVar40 = bVar40 | 1;
                      }
                      local_3970[uVar51 + 1] = bVar40;
                      if (uVar51 + 2 < uVar12) {
                        bVar40 = local_3970[uVar51 + 2];
                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 2) & uVar27) == 0) {
                          bVar40 = bVar40 | 1;
                        }
                        local_3970[uVar51 + 2] = bVar40;
                        if (uVar51 + 3 < uVar12) {
                          bVar40 = local_3970[uVar51 + 3];
                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 3) & uVar27) == 0) {
                            bVar40 = bVar40 | 1;
                          }
                          local_3970[uVar51 + 3] = bVar40;
                          if (uVar51 + 4 < uVar12) {
                            bVar40 = local_3970[uVar51 + 4];
                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 4) & uVar27) == 0) {
                              bVar40 = bVar40 | 1;
                            }
                            local_3970[uVar51 + 4] = bVar40;
                            if (uVar51 + 5 < uVar12) {
                              bVar40 = local_3970[uVar51 + 5];
                              if ((*(byte *)((int)&uStack_3a30 + uVar51 + 5) & uVar27) == 0) {
                                bVar40 = bVar40 | 1;
                              }
                              local_3970[uVar51 + 5] = bVar40;
                              if (uVar51 + 6 < uVar12) {
                                bVar40 = local_3970[uVar51 + 6];
                                if ((*(byte *)((int)&uStack_3a30 + uVar51 + 6) & uVar27) == 0) {
                                  bVar40 = bVar40 | 1;
                                }
                                local_3970[uVar51 + 6] = bVar40;
                                if (uVar51 + 7 < uVar12) {
                                  bVar40 = local_3970[uVar51 + 7];
                                  if ((*(byte *)((int)&uStack_3a30 + uVar51 + 7) & uVar27) == 0) {
                                    bVar40 = bVar40 | 1;
                                  }
                                  local_3970[uVar51 + 7] = bVar40;
                                  if (uVar51 + 8 < uVar12) {
                                    bVar40 = local_3970[uVar51 + 8];
                                    if ((*(byte *)((int)&uStack_3a30 + uVar51 + 8) & uVar27) == 0) {
                                      bVar40 = bVar40 | 1;
                                    }
                                    local_3970[uVar51 + 8] = bVar40;
                                    if (uVar51 + 9 < uVar12) {
                                      bVar40 = local_3970[uVar51 + 9];
                                      if ((*(byte *)((int)&uStack_3a30 + uVar51 + 9) & uVar27) == 0)
                                      {
                                        bVar40 = bVar40 | 1;
                                      }
                                      local_3970[uVar51 + 9] = bVar40;
                                      if (uVar51 + 10 < uVar12) {
                                        bVar40 = local_3970[uVar51 + 10];
                                        if ((*(byte *)((int)&uStack_3a30 + uVar51 + 10) & uVar27) ==
                                            0) {
                                          bVar40 = bVar40 | 1;
                                        }
                                        local_3970[uVar51 + 10] = bVar40;
                                        if (uVar51 + 0xb < uVar12) {
                                          bVar40 = local_3970[uVar51 + 0xb];
                                          if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xb) & uVar27)
                                              == 0) {
                                            bVar40 = bVar40 | 1;
                                          }
                                          local_3970[uVar51 + 0xb] = bVar40;
                                          if (uVar51 + 0xc < uVar12) {
                                            bVar40 = local_3970[uVar51 + 0xc];
                                            if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xc) &
                                                uVar27) == 0) {
                                              bVar40 = bVar40 | 1;
                                            }
                                            local_3970[uVar51 + 0xc] = bVar40;
                                            if (uVar51 + 0xd < uVar12) {
                                              bVar40 = local_3970[uVar51 + 0xd];
                                              if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xd) &
                                                  uVar27) == 0) {
                                                bVar40 = bVar40 | 1;
                                              }
                                              local_3970[uVar51 + 0xd] = bVar40;
                                              if (uVar51 + 0xe < uVar12) {
                                                bVar40 = local_3970[uVar51 + 0xe];
                                                if ((*(byte *)((int)&uStack_3a30 + uVar51 + 0xe) &
                                                    uVar27) == 0) {
                                                  bVar40 = bVar40 | 1;
                                                }
                                                local_3970[uVar51 + 0xe] = bVar40;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    auVar2 = ZEXT816(0);
                    auVar3 = SIMDExpandImmediate(0,0,1);
                    auVar4._4_4_ = uVar27;
                    auVar4._0_4_ = uVar27;
                    auVar4._8_8_ = 0;
                    auVar4 = auVar4 & auVar4 << 0x40;
                    pbVar16 = local_3970;
                    puVar45 = auStack_3a20;
                    uVar32 = 0;
                    do {
                      pbVar16 = pbVar16 + 0x10;
                      auVar67 = VectorCopyLong(*(undefined8 *)(puVar45 + -0x10),1,1);
                      auVar64 = VectorCopyLong(*(undefined8 *)(puVar45 + -8),1,1);
                      uVar32 = uVar32 + 1;
                      auVar65 = *(undefined (*) [16])(pbVar16 + -0x10);
                      auVar71 = VectorCopyLong(auVar67._0_8_,2,1);
                      puVar45 = puVar45 + 0x10;
                      auVar68 = VectorCopyLong(auVar67._8_8_,2,1);
                      auVar67 = VectorCopyLong(auVar64._0_8_,2,1);
                      auVar64 = VectorCopyLong(auVar64._8_8_,2,1);
                      auVar72 = VectorCompareEqual(auVar71 & auVar4,0,4);
                      auVar71 = VectorCompareEqual(auVar68 & auVar4,0,4);
                      auVar68 = VectorCompareEqual(auVar67 & auVar4,0,4);
                      auVar64 = VectorCompareEqual(auVar64 & auVar4,0,4);
                      auVar71 = VectorBitwiseSelect(auVar71,auVar3,auVar2);
                      auVar72 = VectorBitwiseSelect(auVar72,auVar3,auVar2);
                      auVar67 = VectorBitwiseSelect(auVar64,auVar3,auVar2);
                      auVar68 = VectorBitwiseSelect(auVar68,auVar3,auVar2);
                      auVar64._0_8_ = VectorCopyNarrow(auVar72,4);
                      auVar64._8_8_ = VectorCopyNarrow(auVar71,4);
                      auVar68._0_8_ = VectorCopyNarrow(auVar68,4);
                      auVar68._8_8_ = VectorCopyNarrow(auVar67,4);
                      auVar67._0_8_ = VectorCopyNarrow(auVar64,2);
                      auVar67._8_8_ = VectorCopyNarrow(auVar68,2);
                      *(longlong *)(pbVar16 + -0x10) = SUB168(auVar67 | auVar65,0);
                      *(longlong *)(pbVar16 + -8) = SUB168(auVar67 | auVar65,8);
                    } while (uVar32 < uVar19);
                    if (uVar51 != uVar12) goto LAB_0804ade8;
                  }
                  bVar50 = *(byte *)(piVar49 + 1);
                  uVar51 = (uint)*(byte *)((int)piVar49 + 5);
                  bVar40 = bVar50 & 3;
                  local_3b34 = ((uint)(int *)(uint)bVar50 & 1) + 4;
                  uVar62 = *(undefined *)((int)piVar49 + 7);
                  iVar44 = *piVar49;
                  local_3b44 = (int *)(uint)bVar50;
                  goto LAB_0804a4c8;
                }
                bVar17 = *(byte *)(piVar49 + 1);
                iVar44 = *piVar49;
                bVar50 = *(byte *)((int)piVar49 + 5);
                uVar62 = *(undefined *)((int)piVar49 + 7);
                local_3b34 = ((uint)(int *)(uint)bVar17 & 1) + 4;
                bVar40 = bVar17 & 3;
                local_3b44 = (int *)(uint)bVar17;
LAB_0804b328:
                cVar18 = '\0';
                piVar31 = local_3b2c;
                cVar38 = cVar18;
LAB_0804a78c:
                *(byte *)(piVar31 + 1) = bVar40;
                *(byte *)((int)piVar31 + 5) = cVar18 + bVar50;
                piVar28 = piVar31 + 2;
                *piVar31 = iVar44;
                *(char *)((int)piVar31 + 6) = cVar38;
                *(undefined *)((int)piVar31 + 7) = uVar62;
                *(undefined4 *)(param_1 + 0x638) = 0;
              }
              if ((*(char *)((int)local_3b2c + 5) == *(char *)((int)piVar49 + 5)) &&
                 (local_3b34 != *(byte *)(local_3b2c + 1))) {
                *(char *)(local_3b2c + 1) = (char)local_3b44;
                piVar49 = local_3b44;
              }
            }
          }
        }
      }
      local_3b2c = piVar28;
      local_3b3c = local_3b3c + 1;
      piVar28 = piVar26 + 2;
    } while (local_3b3c != iVar25);
    *(undefined4 *)(param_1 + 0x30c) = 0;
    iVar44 = (int)local_3b2c - (int)local_3730 >> 3;
    *(undefined *)(param_1 + (*(int *)(param_1 + 0x308) + 0xffd) * 8 + 6) = 0xff;
    *(undefined4 *)(param_1 + 0x63c) = 0;
    if (iVar44 == 0) {
      local_3b28 = (int *)0x0;
    }
    else {
      puVar45 = auStack_3728;
      local_3b2c = local_3730;
      local_3b30 = 0;
      do {
        bVar40 = puVar45[-3];
        uVar51 = (uint)bVar40;
        bVar50 = puVar45[-2];
        local_3b34 = (uint)bVar50;
        local_3b44 = local_3130;
        switch(puVar45[-4]) {
        case 0:
          iVar30 = *(int *)(puVar45 + -8);
          uVar12 = (uint)*(byte *)(param_1 + 0x9a85);
          iVar13 = *(int *)(param_1 + 0x30c);
          uVar27 = ((uint)(iVar30 << 0xb) >> 0x1b) - 1;
          iVar52 = uVar12 * 2;
          iVar59 = param_1 + (iVar13 + 0xffd) * 8;
          iVar21 = *(int *)(param_1 + 0x62c);
          uVar19 = (uint)*(byte *)(iVar59 + 6);
          iVar20 = *(int *)(param_1 + uVar12 * 0x18004 + 0x21a98);
          uVar32 = *(uint *)(param_1 + 0x630);
          if ((uVar27 < 0x1e) || (uVar29 = (uint)(iVar21 << 3) >> 0x1d, uVar29 == 6 || uVar29 == 1))
          {
            iVar60 = uVar12 * 0xa004 + param_1 + 0x4daa8;
          }
          else {
            iVar60 = uVar12 * 0xa004 + param_1 + 0x39aa0;
          }
          if (*(char *)((int)local_3b2c + 7) == '\0') {
            uVar10 = 3;
          }
          else {
            uVar10 = 0x43;
          }
          uVar11 = *(ushort *)(param_1 + 0x9a68);
          local_3b0c = local_3b34;
          if (0x800 < local_3b34 + uVar11) {
            local_3b0c = 0x800 - uVar11;
          }
          if (iVar20 + 3 + (local_3b0c - 1) * 3 < 0x1801) {
LAB_080490b4:
            if (0 < (int)local_3b0c) {
              uVar12 = uVar51 + 2;
              iVar52 = iVar20 + 3;
              local_3b34 = iVar20;
              while( true ) {
                iVar53 = iVar52;
                if (uVar19 < uVar12) {
                  if (uVar27 < 0x1e) {
                    iVar52 = iVar59 + 8;
                    iVar47 = iVar59;
                    do {
                      iVar22 = iVar52;
                      iVar21 = *(int *)(iVar22 + -8);
                      uVar8 = *(ushort *)(iVar22 + -4);
                      iVar13 = iVar13 + 1;
                      uVar19 = (uint)*(byte *)(iVar59 + 8 + (iVar47 - iVar59) + 6);
                      iVar47 = iVar47 + 8;
                      iVar60 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004 + param_1 + 0x4daa8;
                      iVar52 = iVar22 + 8;
                    } while (uVar19 < uVar12);
                  }
                  else {
                    iVar46 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004;
                    iVar52 = iVar59 + 8;
                    iVar47 = iVar59;
                    do {
                      iVar22 = iVar52;
                      iVar21 = *(int *)(iVar22 + -8);
                      uVar32 = (uint)(iVar21 << 3) >> 0x1d;
                      uVar8 = *(ushort *)(iVar22 + -4);
                      uVar19 = (uint)*(byte *)(iVar59 + 8 + (iVar47 - iVar59) + 6);
                      iVar13 = iVar13 + 1;
                      iVar47 = iVar47 + 8;
                      iVar60 = param_1 + iVar46 + 0x4daa8;
                      if (uVar32 != 1 && uVar32 != 6) {
                        iVar60 = param_1 + iVar46 + 0x39aa0;
                      }
                      iVar52 = iVar22 + 8;
                    } while (uVar19 < uVar12);
                  }
                  iVar59 = iVar22;
                  uVar32 = (uint)uVar8;
                }
                iVar47 = *(int *)(iVar60 + 0xa000);
                uVar12 = uVar12 + 3;
                iVar52 = iVar60 + iVar47 * 0x14;
                *(int *)(iVar52 + 4) = iVar30;
                *(int *)(iVar60 + iVar47 * 0x14) = iVar21;
                *(short *)(iVar52 + 0x10) = (short)uVar32;
                *(short *)(iVar52 + 0x12) = (short)local_3b34;
                *(undefined4 *)(iVar52 + 8) = uVar10;
                *(int *)(iVar60 + 0xa000) = iVar47 + 1;
                if (iVar53 == local_3b0c * 3 + iVar20) break;
                iVar52 = iVar53 + 3;
                local_3b34 = iVar53;
              }
              uVar12 = (uint)*(byte *)(param_1 + 0x9a85);
              iVar52 = uVar12 << 1;
            }
            *(int *)(param_1 + 0x62c) = iVar21;
            *(uint *)(param_1 + 0x630) = uVar32;
            *(int *)(param_1 + 0x30c) = iVar13;
            *(ushort *)(param_1 + 0x9a68) = uVar11 + (short)local_3b0c;
          }
          else if (2 < 0x1800U - iVar20) {
            local_3b0c = (0x17fdU - iVar20) / 3;
            goto LAB_080490b4;
          }
          iVar21 = *(int *)(param_1 + 0x63c);
          iVar52 = param_1 + iVar52 * 0x8000 + uVar12 * 0x8004;
          local_3b34 = iVar52 + 0x9a98;
          iVar52 = *(int *)(iVar52 + 0x21a98);
          local_3b44 = (int *)((short)(ushort)bVar50 * 3);
          if (0x1800 < (uint)((short)(ushort)bVar50 * 3 + iVar52)) {
            local_3b44 = (int *)(0x1800 - iVar52);
          }
          if (local_3b44 != (int *)0x0) {
            puVar41 = (undefined4 *)(param_1 + uVar51 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar21 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar21 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar21 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar21 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + uVar51 * 2 + 0x1342);
            iVar21 = 0;
            puVar24 = (undefined4 *)(param_1 + uVar51 * 0x10 + 0x640);
            puVar15 = (uint *)(local_3b34 + iVar52 * 0x10);
            do {
              iVar21 = iVar21 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar51 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f);
              *puVar15 = uVar51;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while ((int *)iVar21 != local_3b44);
LAB_080494f0:
            iVar21 = *(int *)(param_1 + 0x63c);
          }
          goto LAB_080494f8;
        case 1:
          iVar30 = *(int *)(puVar45 + -8);
          uVar12 = (uint)*(byte *)(param_1 + 0x9a85);
          iVar13 = *(int *)(param_1 + 0x30c);
          uVar27 = ((uint)(iVar30 << 0xb) >> 0x1b) - 1;
          iVar52 = uVar12 * 2;
          iVar59 = param_1 + (iVar13 + 0xffd) * 8;
          iVar21 = *(int *)(param_1 + 0x62c);
          uVar19 = (uint)*(byte *)(iVar59 + 6);
          iVar20 = *(int *)(param_1 + uVar12 * 0x18004 + 0x21a98);
          uVar32 = *(uint *)(param_1 + 0x630);
          if ((uVar27 < 0x1e) || (uVar29 = (uint)(iVar21 << 3) >> 0x1d, uVar29 == 6 || uVar29 == 1))
          {
            iVar60 = uVar12 * 0xa004 + param_1 + 0x4daa8;
          }
          else {
            iVar60 = uVar12 * 0xa004 + param_1 + 0x39aa0;
          }
          uVar11 = *(ushort *)(param_1 + 0x9a68);
          if (*(char *)((int)local_3b2c + 7) == '\0') {
            uVar10 = 4;
          }
          else {
            uVar10 = 0x44;
          }
          if (0x800 < local_3b34 + uVar11) {
            local_3b34 = 0x800 - uVar11;
          }
          if (iVar20 + local_3b34 * 4 < 0x1801) {
LAB_080492a8:
            if (0 < (int)local_3b34) {
              uVar29 = 0;
              uVar12 = uVar51 + 3;
              do {
                if (uVar19 < uVar12) {
                  if (uVar27 < 0x1e) {
                    iVar52 = iVar59 + 8;
                    iVar53 = iVar59;
                    do {
                      iVar46 = iVar52;
                      iVar21 = *(int *)(iVar46 + -8);
                      uVar8 = *(ushort *)(iVar46 + -4);
                      iVar13 = iVar13 + 1;
                      uVar19 = (uint)*(byte *)(iVar59 + 8 + (iVar53 - iVar59) + 6);
                      iVar53 = iVar53 + 8;
                      iVar60 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004 + param_1 + 0x4daa8;
                      iVar52 = iVar46 + 8;
                    } while (uVar19 < uVar12);
                  }
                  else {
                    iVar47 = (uint)*(byte *)(param_1 + 0x9a85) * 0xa004;
                    iVar52 = iVar59 + 8;
                    iVar53 = iVar59;
                    do {
                      iVar46 = iVar52;
                      iVar21 = *(int *)(iVar46 + -8);
                      uVar32 = (uint)(iVar21 << 3) >> 0x1d;
                      uVar8 = *(ushort *)(iVar46 + -4);
                      uVar19 = (uint)*(byte *)(iVar59 + 8 + (iVar53 - iVar59) + 6);
                      iVar13 = iVar13 + 1;
                      iVar53 = iVar53 + 8;
                      iVar60 = param_1 + iVar47 + 0x4daa8;
                      if (uVar32 != 6 && uVar32 != 1) {
                        iVar60 = param_1 + iVar47 + 0x39aa0;
                      }
                      iVar52 = iVar46 + 8;
                    } while (uVar19 < uVar12);
                  }
                  iVar59 = iVar46;
                  uVar32 = (uint)uVar8;
                }
                iVar53 = *(int *)(iVar60 + 0xa000);
                uVar12 = uVar12 + 4;
                sVar9 = (short)uVar29;
                uVar29 = uVar29 + 1;
                iVar52 = iVar60 + iVar53 * 0x14;
                *(int *)(iVar52 + 4) = iVar30;
                *(int *)(iVar60 + iVar53 * 0x14) = iVar21;
                *(short *)(iVar52 + 0x10) = (short)uVar32;
                *(short *)(iVar52 + 0x12) = (short)iVar20 + sVar9 * 4;
                *(undefined4 *)(iVar52 + 8) = uVar10;
                *(int *)(iVar60 + 0xa000) = iVar53 + 1;
              } while (uVar29 != local_3b34);
              uVar12 = (uint)*(byte *)(param_1 + 0x9a85);
              iVar52 = uVar12 << 1;
            }
            *(int *)(param_1 + 0x62c) = iVar21;
            *(uint *)(param_1 + 0x630) = uVar32;
            *(int *)(param_1 + 0x30c) = iVar13;
            *(ushort *)(param_1 + 0x9a68) = uVar11 + (short)local_3b34;
          }
          else if (3 < 0x1800U - iVar20) {
            local_3b34 = 0x17fcU - iVar20 >> 2;
            goto LAB_080492a8;
          }
          iVar21 = *(int *)(param_1 + 0x63c);
          iVar52 = param_1 + iVar52 * 0x8000 + uVar12 * 0x8004;
          local_3b34 = iVar52 + 0x9a98;
          iVar52 = *(int *)(iVar52 + 0x21a98);
          local_3b44 = (int *)((short)(ushort)bVar50 * 4);
          if (0x1800 < (uint)((short)(ushort)bVar50 * 4 + iVar52)) {
            local_3b44 = (int *)(0x1800 - iVar52);
          }
          if (local_3b44 != (int *)0x0) {
            puVar41 = (undefined4 *)(param_1 + uVar51 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar21 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar21 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar21 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar21 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + uVar51 * 2 + 0x1342);
            iVar21 = 0;
            puVar24 = (undefined4 *)(param_1 + uVar51 * 0x10 + 0x640);
            puVar15 = (uint *)(local_3b34 + iVar52 * 0x10);
            do {
              iVar21 = iVar21 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar51 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f);
              *puVar15 = uVar51;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while ((int *)iVar21 != local_3b44);
            goto LAB_080494f0;
          }
LAB_080494f8:
          iVar52 = *(int *)(local_3b34 + 0x18000);
          *(int *)(param_1 + 0x63c) = iVar21 + (int)local_3b44;
          *(int *)(local_3b34 + 0x18000) = (int)local_3b44 + iVar52;
          break;
        case 2:
          FUN_08046d9c(param_1,*(undefined4 *)(puVar45 + -8),uVar51,local_3b34,
                       *(undefined *)((int)local_3b2c + 7),0);
          local_3b3c = local_3b34 + 2;
          iVar13 = *(int *)(param_1 + 0x63c);
          iVar52 = param_1 + (uint)*(byte *)(param_1 + 0x9a85) * 0x18004;
          local_3b34 = iVar52 + 0x9a98;
          iVar21 = *(int *)(iVar52 + 0x21a98);
          if (((uint)(local_3b3c + iVar21) < 0x1801) ||
             (local_3b44 = (int *)(0x1800 - iVar21), local_3b3c = (int)local_3b44,
             local_3b44 != (int *)0x0)) {
            puVar41 = (undefined4 *)(param_1 + uVar51 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar13 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar13 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar13 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar13 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + uVar51 * 2 + 0x1342);
            iVar52 = 0;
            puVar24 = (undefined4 *)(param_1 + uVar51 * 0x10 + 0x640);
            puVar15 = (uint *)(local_3b34 + iVar21 * 0x10);
            do {
              iVar52 = iVar52 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar51 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f);
              *puVar15 = uVar51;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while (iVar52 != local_3b3c);
LAB_08048e18:
            iVar13 = *(int *)(param_1 + 0x63c);
            iVar21 = *(int *)(local_3b34 + 0x18000);
            local_3b44 = (int *)local_3b3c;
          }
          goto LAB_08048438;
        case 3:
          FUN_08047054(param_1,*(undefined4 *)(puVar45 + -8),uVar51,local_3b34,
                       *(undefined *)((int)local_3b2c + 7),0);
          iVar13 = *(int *)(param_1 + 0x63c);
          local_3b3c = (local_3b34 + 1) * 2;
          iVar52 = param_1 + (uint)*(byte *)(param_1 + 0x9a85) * 0x18004;
          local_3b34 = iVar52 + 0x9a98;
          iVar21 = *(int *)(iVar52 + 0x21a98);
          if (((uint)(local_3b3c + iVar21) < 0x1801) ||
             (local_3b44 = (int *)(0x1800 - iVar21), local_3b3c = (int)local_3b44,
             local_3b44 != (int *)0x0)) {
            puVar41 = (undefined4 *)(param_1 + uVar51 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar13 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar13 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar13 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar13 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + uVar51 * 2 + 0x1342);
            iVar52 = 0;
            puVar24 = (undefined4 *)(param_1 + uVar51 * 0x10 + 0x640);
            puVar15 = (uint *)(local_3b34 + iVar21 * 0x10);
            do {
              iVar52 = iVar52 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar51 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f);
              *puVar15 = uVar51;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while (iVar52 != local_3b3c);
            goto LAB_08048e18;
          }
          goto LAB_08048438;
        case 4:
          uVar12 = uVar51 + 2;
          uVar19 = uVar51 + 1;
          uVar27 = uVar51;
          if (puVar45[-1] == '\0') {
            uVar19 = uVar51;
            uVar27 = uVar51 + 1;
          }
          iVar59 = uVar19 * 4 + 400;
          iVar13 = uVar27 * 4 + 400;
          iVar30 = uVar12 * 4 + 400;
          iVar52 = param_1 + iVar59 * 4;
          iVar21 = param_1 + iVar13 * 4;
          iVar20 = param_1 + iVar30 * 4;
          local_38b0 = *(undefined4 *)(param_1 + iVar59 * 4);
          local_38a0 = *(undefined4 *)(param_1 + (uVar19 + 0x532) * 4 + 4);
          local_38ac = *(undefined4 *)(iVar52 + 4);
          local_3898 = *(undefined4 *)(param_1 + iVar13 * 4);
          local_3880 = *(undefined4 *)(param_1 + iVar30 * 4);
          local_38a4 = *(undefined4 *)(iVar52 + 0xc);
          local_3888 = *(undefined4 *)(param_1 + (uVar27 + 0x532) * 4 + 4);
          local_389c = *(undefined2 *)(param_1 + (uVar19 + 0x9a0) * 2 + 4);
          uVar32 = 0;
          local_389a = *(undefined *)(param_1 + uVar19 + 0x1280);
          local_38a8 = *(undefined4 *)(iVar52 + 8);
          local_3884 = *(undefined2 *)(param_1 + (uVar27 + 0x9a0) * 2 + 4);
          local_3894 = *(undefined4 *)(iVar21 + 4);
          local_3890 = *(undefined4 *)(iVar21 + 8);
          local_388c = *(undefined4 *)(iVar21 + 0xc);
          local_387c = *(undefined4 *)(iVar20 + 4);
          local_3882 = *(undefined *)(param_1 + uVar27 + 0x1280);
          local_3878 = *(undefined4 *)(iVar20 + 8);
          local_3874 = *(undefined4 *)(iVar20 + 0xc);
          local_3870 = *(undefined4 *)(param_1 + (uVar51 + 0x534) * 4 + 4);
          local_386c = *(undefined2 *)(param_1 + (uVar51 + 0x9a2) * 2 + 4);
          local_386a = *(undefined *)(param_1 + uVar12 + 0x1280);
          uVar51 = 0;
          uVar27 = 0;
          puVar24 = &local_38b0;
          uVar19 = 3;
          while( true ) {
            do {
              puVar33 = puVar24;
              uVar29 = uVar51 + 1;
              puVar24 = puVar33 + uVar51 * 6;
              if (uVar29 == uVar19) {
                iVar52 = 0;
              }
              else {
                iVar52 = uVar51 * 0x18 + 0x18;
              }
              iVar52 = (int)puVar33 + iVar52;
              uVar51 = *(byte *)((int)puVar24 + 0x16) >> (uVar32 & 0xff) & 1 |
                       (*(byte *)(iVar52 + 0x16) >> (uVar32 & 0xff) & 1) << 1;
              if (uVar51 == 1) {
                FUN_08047308(local_3b44 + uVar27 * 6,iVar52,puVar24,uVar32);
                uVar34 = uVar27 + 1;
              }
              else if (uVar51 == 0) {
                uVar10 = puVar24[1];
                uVar42 = puVar24[2];
                uVar48 = puVar24[3];
                uVar34 = uVar27 + 1;
                puVar37 = local_3b44 + uVar27 * 6;
                *puVar37 = *puVar24;
                puVar37[1] = uVar10;
                puVar37[2] = uVar42;
                puVar37[3] = uVar48;
                uVar10 = puVar24[5];
                puVar37[4] = puVar24[4];
                puVar37[5] = uVar10;
              }
              else {
                uVar34 = uVar27;
                if (uVar51 == 2) {
                  uVar10 = puVar24[1];
                  uVar42 = puVar24[2];
                  uVar48 = puVar24[3];
                  uVar34 = uVar27 + 2;
                  puVar37 = local_3b44 + uVar27 * 6;
                  *puVar37 = *puVar24;
                  puVar37[1] = uVar10;
                  puVar37[2] = uVar42;
                  puVar37[3] = uVar48;
                  uVar10 = puVar24[5];
                  puVar37[4] = puVar24[4];
                  puVar37[5] = uVar10;
                  FUN_08047308(local_3b44 + uVar27 * 6 + 6,puVar24,iVar52,uVar32);
                }
              }
              uVar51 = uVar29;
              uVar27 = uVar34;
              puVar24 = puVar33;
            } while (uVar29 < uVar19);
            if (uVar34 == 0) goto switchD_08048288_caseD_8;
            uVar32 = uVar32 + 1;
            if (uVar32 == 6) break;
            uVar51 = 0;
            uVar27 = uVar51;
            puVar24 = local_3b44;
            uVar19 = uVar34;
            local_3b44 = puVar33;
          }
          uVar51 = (uint)*(byte *)(param_1 + 0x9a85);
          iVar21 = *(int *)(param_1 + 0x30c);
          sVar9 = *(short *)(param_1 + 0x9a68);
          iVar52 = uVar51 * 2;
          iVar59 = *(int *)(puVar45 + -8);
          piVar28 = (int *)(param_1 + (iVar21 + 0xffd) * 8);
          iVar13 = *(int *)(param_1 + 0x62c);
          uVar11 = (ushort)*(undefined4 *)(param_1 + 0x630);
          bVar40 = *(byte *)((int)piVar28 + 6);
          iVar20 = *(int *)(param_1 + uVar51 * 0x18004 + 0x21a98);
          if ((sVar9 != 0x800) && (uVar34 + iVar20 < 0x1801)) {
            while (bVar40 < uVar12) {
              iVar13 = *piVar28;
              iVar21 = iVar21 + 1;
              uVar11 = *(ushort *)(piVar28 + 1);
              *(int *)(param_1 + 0x30c) = iVar21;
              *(int *)(param_1 + 0x62c) = iVar13;
              *(uint *)(param_1 + 0x630) = (uint)uVar11;
              bVar40 = *(byte *)((int)piVar28 + 0xe);
              piVar28 = piVar28 + 2;
            }
            if ((((uint)(iVar59 << 0xb) >> 0x1b) - 1 < 0x1e) ||
               (uVar27 = (uint)(iVar13 << 3) >> 0x1d, uVar27 == 6 || uVar27 == 1)) {
              iVar52 = uVar51 * 0xa004 + param_1 + 0x4daa8;
            }
            else {
              iVar52 = uVar51 * 0xa004 + param_1 + 0x39aa0;
            }
            iVar30 = *(int *)(iVar52 + 0xa000);
            iVar21 = iVar52 + iVar30 * 0x14;
            *(int *)(iVar21 + 4) = iVar59;
            *(int *)(iVar52 + iVar30 * 0x14) = iVar13;
            *(short *)(iVar21 + 0x12) = (short)iVar20;
            *(ushort *)(iVar21 + 0x10) = uVar11;
            *(uint *)(iVar21 + 8) = uVar34;
            *(int *)(iVar52 + 0xa000) = iVar30 + 1;
            uVar51 = (uint)*(byte *)(param_1 + 0x9a85);
            *(short *)(param_1 + 0x9a68) = sVar9 + 1;
            iVar52 = uVar51 << 1;
          }
          iVar52 = param_1 + iVar52 * 0x8000 + uVar51 * 0x8004;
          iVar21 = iVar52 + 0x9a98;
          iVar52 = *(int *)(iVar52 + 0x21a98);
          if (uVar34 + iVar52 < 0x1801) {
            iVar20 = param_1 + *(int *)(param_1 + 0x63c) * 4;
            puVar37 = (undefined4 *)(iVar20 + 0x305c);
            puVar33 = (undefined4 *)(iVar20 + 0x48dc);
            puVar39 = (undefined4 *)(iVar20 + 0x615c);
            iVar13 = iVar20 + 0x17e4;
            puVar24 = (undefined4 *)(iVar21 + iVar52 * 0x10);
            do {
              uVar48 = local_3b44[1];
              iVar52 = iVar13 + 4;
              uVar42 = local_3b44[2];
              uVar54 = local_3b44[3];
              *(int *)(iVar13 + -4) = *local_3b44;
              uVar10 = local_3b44[4];
              uVar43 = *(undefined2 *)(local_3b44 + 5);
              puVar37 = puVar37 + 1;
              *puVar37 = uVar48;
              puVar33 = puVar33 + 1;
              *puVar33 = uVar42;
              puVar39 = puVar39 + 1;
              *puVar39 = uVar54;
              *(short *)((int)puVar24 + 0xe) = (short)((uint)uVar10 >> 0x10);
              *puVar24 = uVar54;
              *(short *)(puVar24 + 3) = (short)uVar10;
              *(undefined2 *)((int)puVar24 + 10) = uVar43;
              iVar13 = iVar52;
              local_3b44 = local_3b44 + 6;
              puVar24 = puVar24 + 4;
            } while (iVar52 != iVar20 + 0x17e4 + uVar34 * 4);
LAB_08049b94:
            iVar52 = *(int *)(iVar21 + 0x18000);
            *(uint *)(param_1 + 0x63c) = *(int *)(param_1 + 0x63c) + uVar34;
            *(uint *)(iVar21 + 0x18000) = uVar34 + iVar52;
          }
          break;
        case 5:
          uVar27 = uVar51 + 2;
          uVar12 = uVar51 + 3;
          uVar19 = uVar12;
          if (puVar45[-1] != '\0') {
            uVar19 = uVar27;
            uVar27 = uVar12;
          }
          iVar13 = (short)(ushort)bVar40 * 4 + 400;
          iVar21 = param_1 + iVar13 * 4;
          iVar59 = (short)(ushort)bVar40 * 4 + 0x194;
          iVar20 = uVar27 * 4 + 400;
          iVar52 = param_1 + iVar59 * 4;
          local_38b0 = *(undefined4 *)(param_1 + iVar13 * 4);
          local_3898 = *(undefined4 *)(param_1 + iVar59 * 4);
          iVar59 = param_1 + iVar20 * 4;
          local_38ac = *(undefined4 *)(iVar21 + 4);
          local_38a0 = *(undefined4 *)(param_1 + (uVar51 + 0x532) * 4 + 4);
          local_3880 = *(undefined4 *)(param_1 + iVar20 * 4);
          local_3888 = *(undefined4 *)(param_1 + (uVar51 + 0x533) * 4 + 4);
          local_38a4 = *(undefined4 *)(iVar21 + 0xc);
          local_38a8 = *(undefined4 *)(iVar21 + 8);
          local_389c = *(undefined2 *)(param_1 + (uVar51 + 0x9a0) * 2 + 4);
          iVar13 = uVar19 * 4 + 400;
          local_3894 = *(undefined4 *)(iVar52 + 4);
          local_389a = *(undefined *)(param_1 + uVar51 + 0x1280);
          local_3884 = *(undefined2 *)(param_1 + (uVar51 + 0x9a1) * 2 + 4);
          local_3890 = *(undefined4 *)(iVar52 + 8);
          iVar21 = param_1 + iVar13 * 4;
          local_388c = *(undefined4 *)(iVar52 + 0xc);
          local_3868 = *(undefined4 *)(param_1 + iVar13 * 4);
          local_387c = *(undefined4 *)(iVar59 + 4);
          local_3878 = *(undefined4 *)(iVar59 + 8);
          uVar32 = 0;
          local_3864 = *(undefined4 *)(iVar21 + 4);
          local_3860 = *(undefined4 *)(iVar21 + 8);
          local_3858 = *(undefined4 *)(param_1 + (uVar19 + 0x532) * 4 + 4);
          local_3882 = *(undefined *)(param_1 + uVar51 + 0x1281);
          local_3874 = *(undefined4 *)(iVar59 + 0xc);
          local_3870 = *(undefined4 *)(param_1 + (uVar27 + 0x532) * 4 + 4);
          local_385c = *(undefined4 *)(iVar21 + 0xc);
          local_386c = *(undefined2 *)(param_1 + (uVar27 + 0x9a0) * 2 + 4);
          local_386a = *(undefined *)(param_1 + uVar27 + 0x1280);
          local_3854 = *(undefined2 *)(param_1 + (uVar19 + 0x9a0) * 2 + 4);
          local_3852 = *(undefined *)(param_1 + uVar19 + 0x1280);
          uVar51 = 0;
          uVar27 = 0;
          puVar24 = &local_38b0;
          uVar19 = 4;
          while( true ) {
            do {
              puVar33 = puVar24;
              uVar29 = uVar51 + 1;
              puVar24 = puVar33 + uVar51 * 6;
              if (uVar29 == uVar19) {
                iVar52 = 0;
              }
              else {
                iVar52 = uVar51 * 0x18 + 0x18;
              }
              iVar52 = (int)puVar33 + iVar52;
              uVar51 = *(byte *)((int)puVar24 + 0x16) >> (uVar32 & 0xff) & 1 |
                       (*(byte *)(iVar52 + 0x16) >> (uVar32 & 0xff) & 1) << 1;
              if (uVar51 == 1) {
                FUN_08047308(local_3b44 + uVar27 * 6,iVar52,puVar24,uVar32);
                uVar34 = uVar27 + 1;
              }
              else if (uVar51 == 0) {
                uVar10 = puVar24[1];
                uVar42 = puVar24[2];
                uVar48 = puVar24[3];
                uVar34 = uVar27 + 1;
                puVar37 = local_3b44 + uVar27 * 6;
                *puVar37 = *puVar24;
                puVar37[1] = uVar10;
                puVar37[2] = uVar42;
                puVar37[3] = uVar48;
                uVar10 = puVar24[5];
                puVar37[4] = puVar24[4];
                puVar37[5] = uVar10;
              }
              else {
                uVar34 = uVar27;
                if (uVar51 == 2) {
                  uVar10 = puVar24[1];
                  uVar42 = puVar24[2];
                  uVar48 = puVar24[3];
                  uVar34 = uVar27 + 2;
                  puVar37 = local_3b44 + uVar27 * 6;
                  *puVar37 = *puVar24;
                  puVar37[1] = uVar10;
                  puVar37[2] = uVar42;
                  puVar37[3] = uVar48;
                  uVar10 = puVar24[5];
                  puVar37[4] = puVar24[4];
                  puVar37[5] = uVar10;
                  FUN_08047308(local_3b44 + uVar27 * 6 + 6,puVar24,iVar52,uVar32);
                }
              }
              uVar51 = uVar29;
              uVar27 = uVar34;
              puVar24 = puVar33;
            } while (uVar29 < uVar19);
            if (uVar34 == 0) goto switchD_08048288_caseD_8;
            uVar32 = uVar32 + 1;
            if (uVar32 == 6) break;
            uVar51 = 0;
            uVar27 = uVar51;
            puVar24 = local_3b44;
            uVar19 = uVar34;
            local_3b44 = puVar33;
          }
          uVar51 = (uint)*(byte *)(param_1 + 0x9a85);
          iVar21 = *(int *)(param_1 + 0x30c);
          sVar9 = *(short *)(param_1 + 0x9a68);
          iVar52 = uVar51 * 2;
          iVar59 = *(int *)(puVar45 + -8);
          piVar28 = (int *)(param_1 + (iVar21 + 0xffd) * 8);
          iVar13 = *(int *)(param_1 + 0x62c);
          uVar11 = (ushort)*(undefined4 *)(param_1 + 0x630);
          bVar40 = *(byte *)((int)piVar28 + 6);
          iVar20 = *(int *)(param_1 + uVar51 * 0x18004 + 0x21a98);
          if ((sVar9 != 0x800) && (uVar34 + iVar20 < 0x1801)) {
            while (bVar40 < uVar12) {
              iVar13 = *piVar28;
              iVar21 = iVar21 + 1;
              uVar11 = *(ushort *)(piVar28 + 1);
              *(int *)(param_1 + 0x30c) = iVar21;
              *(int *)(param_1 + 0x62c) = iVar13;
              *(uint *)(param_1 + 0x630) = (uint)uVar11;
              bVar40 = *(byte *)((int)piVar28 + 0xe);
              piVar28 = piVar28 + 2;
            }
            if ((((uint)(iVar59 << 0xb) >> 0x1b) - 1 < 0x1e) ||
               (uVar27 = (uint)(iVar13 << 3) >> 0x1d, uVar27 == 6 || uVar27 == 1)) {
              iVar52 = uVar51 * 0xa004 + param_1 + 0x4daa8;
            }
            else {
              iVar52 = uVar51 * 0xa004 + param_1 + 0x39aa0;
            }
            iVar30 = *(int *)(iVar52 + 0xa000);
            iVar21 = iVar52 + iVar30 * 0x14;
            *(int *)(iVar21 + 4) = iVar59;
            *(int *)(iVar52 + iVar30 * 0x14) = iVar13;
            *(short *)(iVar21 + 0x12) = (short)iVar20;
            *(ushort *)(iVar21 + 0x10) = uVar11;
            *(uint *)(iVar21 + 8) = uVar34;
            *(int *)(iVar52 + 0xa000) = iVar30 + 1;
            uVar51 = (uint)*(byte *)(param_1 + 0x9a85);
            *(short *)(param_1 + 0x9a68) = sVar9 + 1;
            iVar52 = uVar51 << 1;
          }
          iVar52 = param_1 + iVar52 * 0x8000 + uVar51 * 0x8004;
          iVar21 = iVar52 + 0x9a98;
          iVar52 = *(int *)(iVar52 + 0x21a98);
          if (uVar34 + iVar52 < 0x1801) {
            iVar20 = param_1 + *(int *)(param_1 + 0x63c) * 4;
            puVar37 = (undefined4 *)(iVar20 + 0x305c);
            puVar33 = (undefined4 *)(iVar20 + 0x48dc);
            puVar39 = (undefined4 *)(iVar20 + 0x615c);
            iVar13 = iVar20 + 0x17e4;
            puVar24 = (undefined4 *)(iVar21 + iVar52 * 0x10);
            do {
              uVar48 = local_3b44[1];
              iVar52 = iVar13 + 4;
              uVar42 = local_3b44[2];
              uVar54 = local_3b44[3];
              *(int *)(iVar13 + -4) = *local_3b44;
              uVar10 = local_3b44[4];
              uVar43 = *(undefined2 *)(local_3b44 + 5);
              puVar37 = puVar37 + 1;
              *puVar37 = uVar48;
              puVar33 = puVar33 + 1;
              *puVar33 = uVar42;
              puVar39 = puVar39 + 1;
              *puVar39 = uVar54;
              *(short *)((int)puVar24 + 0xe) = (short)((uint)uVar10 >> 0x10);
              *puVar24 = uVar54;
              *(short *)(puVar24 + 3) = (short)uVar10;
              *(undefined2 *)((int)puVar24 + 10) = uVar43;
              iVar13 = iVar52;
              local_3b44 = local_3b44 + 6;
              puVar24 = puVar24 + 4;
            } while (iVar52 != iVar20 + 0x17e4 + uVar34 * 4);
            goto LAB_08049b94;
          }
          break;
        case 6:
          FUN_08046d9c(param_1,*(undefined4 *)(puVar45 + -8),uVar51,local_3b34,
                       *(undefined *)((int)local_3b2c + 7),2);
          iVar13 = uVar51 + 2;
          iVar52 = *(int *)(param_1 + 0x63c);
          iVar21 = param_1 + (uint)*(byte *)(param_1 + 0x9a85) * 0x18004;
          iVar20 = *(int *)(iVar21 + 0x21a98);
          if (0x1800 < local_3b34 + iVar20) {
            local_3b34 = 0x1800 - iVar20;
          }
          if (local_3b34 != 0) {
            puVar41 = (undefined4 *)(param_1 + iVar13 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar52 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar52 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar52 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar52 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + iVar13 * 2 + 0x1342);
            uVar51 = 0;
            puVar24 = (undefined4 *)(param_1 + iVar13 * 0x10 + 0x640);
            puVar15 = (uint *)(iVar21 + 0x9a98 + iVar20 * 0x10);
            do {
              uVar51 = uVar51 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar27 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar27 ^ (int)uVar27 >> 0x1f) - ((int)uVar27 >> 0x1f);
              *puVar15 = uVar27;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while (uVar51 != local_3b34);
            iVar52 = *(int *)(param_1 + 0x63c);
            iVar20 = *(int *)(iVar21 + 0x21a98);
          }
          *(uint *)(param_1 + 0x63c) = iVar52 + local_3b34;
          *(uint *)(iVar21 + 0x21a98) = iVar20 + local_3b34;
          break;
        case 7:
          FUN_08047054(param_1,*(undefined4 *)(puVar45 + -8),uVar51,local_3b34,
                       *(undefined *)((int)local_3b2c + 7),2);
          iVar20 = uVar51 + 2;
          local_3b44 = (int *)((short)(ushort)bVar50 * 2);
          iVar13 = *(int *)(param_1 + 0x63c);
          iVar52 = param_1 + (uint)*(byte *)(param_1 + 0x9a85) * 0x18004;
          local_3b34 = iVar52 + 0x9a98;
          iVar21 = *(int *)(iVar52 + 0x21a98);
          if (0x1800 < (uint)((short)(ushort)bVar50 * 2 + iVar21)) {
            local_3b44 = (int *)(0x1800 - iVar21);
          }
          if (local_3b44 != (int *)0x0) {
            puVar41 = (undefined4 *)(param_1 + iVar20 * 4 + 0x14c8);
            puVar39 = (undefined4 *)(param_1 + (iVar13 + 0x5f8) * 4 + -4);
            puVar37 = (undefined4 *)(param_1 + (iVar13 + 0xc18) * 4 + -4);
            puVar33 = (undefined4 *)(param_1 + (iVar13 + 0x1238) * 4 + -4);
            piVar28 = (int *)(param_1 + (iVar13 + 0x1858) * 4 + -4);
            puVar58 = (undefined2 *)(param_1 + iVar20 * 2 + 0x1342);
            iVar13 = 0;
            puVar24 = (undefined4 *)(param_1 + iVar20 * 0x10 + 0x640);
            puVar15 = (uint *)(local_3b34 + iVar21 * 0x10);
            do {
              iVar13 = iVar13 + 1;
              puVar41 = puVar41 + 1;
              uVar10 = *puVar41;
              uVar51 = puVar24[3];
              puVar39 = puVar39 + 1;
              *puVar39 = *puVar24;
              puVar37 = puVar37 + 1;
              *puVar37 = puVar24[1];
              puVar33 = puVar33 + 1;
              *puVar33 = puVar24[2];
              piVar28 = piVar28 + 1;
              *piVar28 = (uVar51 ^ (int)uVar51 >> 0x1f) - ((int)uVar51 >> 0x1f);
              *puVar15 = uVar51;
              *(short *)(puVar15 + 3) = (short)uVar10;
              *(short *)((int)puVar15 + 0xe) = (short)((uint)uVar10 >> 0x10);
              puVar58 = puVar58 + 1;
              *(undefined2 *)((int)puVar15 + 10) = *puVar58;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + 4;
            } while ((int *)iVar13 != local_3b44);
            iVar13 = *(int *)(param_1 + 0x63c);
            iVar21 = *(int *)(iVar52 + 0x21a98);
          }
LAB_08048438:
          *(int *)(param_1 + 0x63c) = iVar13 + (int)local_3b44;
          *(int *)(local_3b34 + 0x18000) = iVar21 + (int)local_3b44;
        }
switchD_08048288_caseD_8:
        local_3b30 = local_3b30 + 1;
        local_3b2c = local_3b2c + 2;
        puVar45 = puVar45 + 8;
      } while (local_3b30 != iVar44);
      piVar49 = *(int **)(param_1 + 0x63c);
      local_3b28 = piVar49;
    }
  }
  iVar52 = param_1 + (uint)*(byte *)(param_1 + 0x9a85) * 0x18004;
  iVar44 = *(int *)(iVar52 + 0x21a98);
  FUN_08090960(local_3130,auStack_18b0,param_1 + 0x6160);
  FUN_08090d8c(param_1,local_3130,auStack_18b0);
  if (local_3b28 != (int *)0x0) {
    piVar49 = local_3b28;
  }
  if (local_3b28 != (int *)0x0) {
    iVar21 = 0;
    iVar44 = iVar52 + (iVar44 - (int)local_3b28) * 0x10 + 0x9aa8;
    do {
      *(short *)(iVar44 + -0xc) = (short)*(undefined4 *)(param_1 + 0x17e0 + iVar21);
      *(short *)(iVar44 + -10) = (short)*(undefined4 *)(param_1 + 0x3060 + iVar21);
      *(short *)(iVar44 + -8) = (short)*(undefined4 *)(param_1 + 0x48e0 + iVar21);
      puVar24 = (undefined4 *)(param_1 + 0x6160 + iVar21);
      iVar21 = iVar21 + 4;
      *(undefined4 *)(iVar44 + -0x10) = *puVar24;
      iVar44 = iVar44 + 0x10;
    } while (iVar21 != (int)piVar49 << 2);
  }
  iVar25 = iVar25 + 0xf3b;
  iVar44 = param_1 + iVar25 * 8;
  bVar40 = (byte)local_3b14;
  switch(*(undefined *)(iVar44 + 4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    *(undefined *)(param_1 + 0x79e4) = 0;
    *(undefined *)(param_1 + 0x79e7) = 0;
    *(undefined *)(param_1 + 0x79e5) = 0;
    local_3b14 = local_3b14 % 3;
    iVar25 = *(int *)(param_1 + 800) - local_3b14;
    puVar24 = (undefined4 *)(param_1 + 0x640) + iVar25 * 4;
    if (local_3b14 != 0) {
      puVar56 = (undefined2 *)(param_1 + (iVar25 + -1) * 2 + 0x1344);
      puVar41 = (undefined4 *)(param_1 + (iVar25 + -1) * 4 + 0x14cc);
      puVar45 = (undefined *)(param_1 + iVar25 + 0x127f);
      puVar55 = (undefined *)(param_1 + 0x127f);
      puVar58 = (undefined2 *)(param_1 + 0x1342);
      puVar39 = (undefined4 *)(param_1 + 0x14c8);
      puVar33 = (undefined4 *)(param_1 + 0x640);
      puVar37 = puVar24;
      do {
        puVar23 = puVar37 + 4;
        *puVar33 = *puVar37;
        puVar33[1] = puVar37[1];
        puVar33[2] = puVar37[2];
        puVar33[3] = puVar37[3];
        puVar45 = puVar45 + 1;
        puVar55 = puVar55 + 1;
        *puVar55 = *puVar45;
        puVar56 = puVar56 + 1;
        puVar58 = puVar58 + 1;
        *puVar58 = *puVar56;
        puVar41 = puVar41 + 1;
        puVar39 = puVar39 + 1;
        *puVar39 = *puVar41;
        puVar33 = puVar33 + 4;
        puVar37 = puVar23;
      } while (puVar23 != puVar24 + local_3b14 * 4);
    }
    *(uint *)(param_1 + 800) = local_3b14;
    *(uint *)(param_1 + 0x328) = local_3b14;
    *(undefined4 *)(param_1 + 0x324) = 1;
    break;
  case 1:
    local_3b14 = local_3b14 & 3;
    iVar44 = *(int *)(param_1 + 800) - local_3b14;
    puVar24 = (undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    *(undefined *)(param_1 + 0x79e4) = 1;
    *(undefined *)(param_1 + 0x79e7) = 0;
    *(undefined *)(param_1 + 0x79e5) = 0;
    if (local_3b14 != 0) {
      puVar56 = (undefined2 *)(param_1 + (iVar44 + -1) * 2 + 0x1344);
      puVar41 = (undefined4 *)(param_1 + (iVar44 + -1) * 4 + 0x14cc);
      puVar45 = (undefined *)(param_1 + iVar44 + 0x127f);
      puVar55 = (undefined *)(param_1 + 0x127f);
      puVar58 = (undefined2 *)(param_1 + 0x1342);
      puVar39 = (undefined4 *)(param_1 + 0x14c8);
      puVar33 = puVar24 + iVar44 * 4;
      puVar37 = puVar24;
      do {
        puVar23 = puVar37 + 4;
        *puVar37 = *puVar33;
        puVar37[1] = puVar33[1];
        puVar37[2] = puVar33[2];
        puVar37[3] = puVar33[3];
        puVar45 = puVar45 + 1;
        puVar55 = puVar55 + 1;
        *puVar55 = *puVar45;
        puVar56 = puVar56 + 1;
        puVar58 = puVar58 + 1;
        *puVar58 = *puVar56;
        puVar41 = puVar41 + 1;
        puVar39 = puVar39 + 1;
        *puVar39 = *puVar41;
        puVar33 = puVar33 + 4;
        puVar37 = puVar23;
      } while (puVar23 != puVar24 + local_3b14 * 4);
    }
    *(uint *)(param_1 + 800) = local_3b14;
    *(uint *)(param_1 + 0x328) = local_3b14;
    *(undefined4 *)(param_1 + 0x324) = 1;
    break;
  case 2:
    if (local_3b14 < 3) {
      uVar62 = *(undefined *)(iVar44 + 7);
      iVar44 = *(int *)(param_1 + 800) - local_3b14;
      iVar52 = param_1 + 0x640 + iVar44 * 0x10;
      *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
      *(undefined *)(param_1 + 0x79e7) = uVar62;
      *(undefined *)(param_1 + 0x79e4) = 2;
      *(undefined *)(param_1 + 0x79e5) = 0;
      if (local_3b14 != 0) {
        *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x640 + iVar44 * 0x10);
        uVar43 = *(undefined2 *)(param_1 + (iVar44 + 0x9a0) * 2 + 4);
        *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(iVar52 + 4);
        *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(iVar52 + 8);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar52 + 0xc);
        uVar62 = *(undefined *)(param_1 + iVar44 + 0x1280);
        uVar10 = *(undefined4 *)(param_1 + (iVar44 + 0x532) * 4 + 4);
        *(undefined2 *)(param_1 + 0x1344) = uVar43;
        *(undefined *)(param_1 + 0x1280) = uVar62;
        *(undefined4 *)(param_1 + 0x14cc) = uVar10;
        if (1 < local_3b14) {
          *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar52 + 0x10);
          uVar43 = *(undefined2 *)(param_1 + (iVar44 + 0x9a1) * 2 + 4);
          *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(iVar52 + 0x14);
          *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(iVar52 + 0x18);
          *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(iVar52 + 0x1c);
          uVar62 = *(undefined *)(param_1 + iVar44 + 0x1281);
          uVar10 = *(undefined4 *)(param_1 + (iVar44 + 0x533) * 4 + 4);
          *(undefined2 *)(param_1 + 0x1346) = uVar43;
          *(undefined *)(param_1 + 0x1281) = uVar62;
          *(undefined4 *)(param_1 + 0x14d0) = uVar10;
        }
      }
      *(undefined4 *)(param_1 + 0x324) = 1;
      *(uint *)(param_1 + 800) = local_3b14;
      *(uint *)(param_1 + 0x328) = local_3b14;
      break;
    }
    if (*(int *)(param_1 + 0x638) == 0) {
      iVar52 = *(int *)(param_1 + 800);
      uVar10 = *(undefined4 *)(param_1 + iVar25 * 8);
      bVar40 = bVar40 & 1 ^ *(byte *)(iVar44 + 7);
      goto LAB_0804b1cc;
    }
    iVar52 = *(int *)(param_1 + 800);
    bVar50 = *(byte *)(iVar44 + 7);
    iVar44 = iVar52 + -2;
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    *(undefined *)(param_1 + 0x79e4) = 2;
    *(byte *)(param_1 + 0x79e7) = bVar40 & 1 ^ bVar50;
    iVar25 = param_1 + 0x640 + iVar44 * 0x10;
    *(undefined *)(param_1 + 0x79e5) = 0;
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x640 + iVar44 * 0x10);
    uVar43 = *(undefined2 *)(param_1 + (iVar52 + 0x99e) * 2 + 4);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(iVar25 + 4);
    uVar10 = *(undefined4 *)(iVar25 + 8);
    goto LAB_0804a870;
  case 3:
    if (local_3b14 < 4) {
      iVar44 = *(int *)(param_1 + 800) - local_3b14;
      *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
      iVar25 = param_1 + 0x640 + iVar44 * 0x10;
      *(undefined *)(param_1 + 0x79e4) = 3;
      *(undefined *)(param_1 + 0x79e7) = 1;
      *(undefined *)(param_1 + 0x79e5) = 0;
      if (local_3b14 != 0) {
        *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x640 + iVar44 * 0x10);
        uVar43 = *(undefined2 *)(param_1 + (iVar44 + 0x9a0) * 2 + 4);
        *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(iVar25 + 4);
        *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(iVar25 + 8);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar25 + 0xc);
        uVar62 = *(undefined *)(param_1 + iVar44 + 0x1280);
        uVar10 = *(undefined4 *)(param_1 + (iVar44 + 0x532) * 4 + 4);
        *(undefined2 *)(param_1 + 0x1344) = uVar43;
        *(undefined *)(param_1 + 0x1280) = uVar62;
        *(undefined4 *)(param_1 + 0x14cc) = uVar10;
        if (1 < local_3b14) {
          *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar25 + 0x10);
          uVar43 = *(undefined2 *)(param_1 + (iVar44 + 0x9a1) * 2 + 4);
          *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(iVar25 + 0x14);
          *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(iVar25 + 0x18);
          *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(iVar25 + 0x1c);
          uVar62 = *(undefined *)(param_1 + iVar44 + 0x1281);
          uVar10 = *(undefined4 *)(param_1 + (iVar44 + 0x533) * 4 + 4);
          *(undefined2 *)(param_1 + 0x1346) = uVar43;
          *(undefined *)(param_1 + 0x1281) = uVar62;
          *(undefined4 *)(param_1 + 0x14d0) = uVar10;
          if (2 < local_3b14) {
            *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(iVar25 + 0x20);
            uVar43 = *(undefined2 *)(param_1 + (iVar44 + 0x9a2) * 2 + 4);
            *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(iVar25 + 0x24);
            *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(iVar25 + 0x28);
            *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(iVar25 + 0x2c);
            uVar62 = *(undefined *)(param_1 + iVar44 + 0x1282);
            uVar10 = *(undefined4 *)(param_1 + (iVar44 + 0x534) * 4 + 4);
            *(undefined2 *)(param_1 + 0x1348) = uVar43;
            *(undefined *)(param_1 + 0x1282) = uVar62;
            *(undefined4 *)(param_1 + 0x14d4) = uVar10;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x324) = 1;
      *(uint *)(param_1 + 800) = local_3b14;
      *(uint *)(param_1 + 0x328) = local_3b14;
      break;
    }
    if (*(int *)(param_1 + 0x638) == 0) {
      uVar27 = (local_3b14 & 1) + 2;
      iVar44 = *(int *)(param_1 + 800) - uVar27;
      puVar58 = (undefined2 *)(param_1 + 0x1342);
      *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
      puVar56 = (undefined2 *)(param_1 + (iVar44 + -1) * 2 + 0x1344);
      puVar39 = (undefined4 *)(param_1 + (iVar44 + -1) * 4 + 0x14cc);
      puVar45 = (undefined *)(param_1 + 0x127f);
      puVar37 = (undefined4 *)(param_1 + 0x14c8);
      *(undefined *)(param_1 + 0x79e5) = 0;
      *(undefined *)(param_1 + 0x79e4) = 7;
      *(undefined *)(param_1 + 0x79e7) = 1;
      uVar51 = 0;
      puVar24 = (undefined4 *)(param_1 + 0x640) + iVar44 * 4;
      puVar33 = (undefined4 *)(param_1 + 0x640);
      do {
        iVar25 = param_1 + iVar44 + uVar51;
        uVar51 = uVar51 + 1;
        *puVar33 = *puVar24;
        puVar33[1] = puVar24[1];
        puVar33[2] = puVar24[2];
        puVar33[3] = puVar24[3];
        puVar45 = puVar45 + 1;
        *puVar45 = *(undefined *)(iVar25 + 0x1280);
        puVar56 = puVar56 + 1;
        puVar58 = puVar58 + 1;
        *puVar58 = *puVar56;
        puVar39 = puVar39 + 1;
        puVar37 = puVar37 + 1;
        *puVar37 = *puVar39;
        puVar24 = puVar24 + 4;
        puVar33 = puVar33 + 4;
      } while (uVar51 < uVar27);
      goto LAB_0804b188;
    }
    uVar27 = (local_3b14 & 1) + 2;
    iVar44 = *(int *)(param_1 + 800) - uVar27;
    puVar39 = (undefined4 *)(param_1 + (iVar44 + -1) * 4 + 0x14cc);
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    puVar58 = (undefined2 *)(param_1 + (iVar44 + -1) * 2 + 0x1344);
    puVar45 = (undefined *)(param_1 + 0x127f);
    puVar56 = (undefined2 *)(param_1 + 0x1342);
    puVar37 = (undefined4 *)(param_1 + 0x14c8);
    uVar51 = 0;
    *(undefined *)(param_1 + 0x79e5) = 0;
    *(undefined *)(param_1 + 0x79e4) = 3;
    *(undefined *)(param_1 + 0x79e7) = 1;
    puVar24 = (undefined4 *)(param_1 + 0x640) + iVar44 * 4;
    puVar33 = (undefined4 *)(param_1 + 0x640);
    do {
      iVar25 = param_1 + iVar44 + uVar51;
      uVar51 = uVar51 + 1;
      *puVar33 = *puVar24;
      puVar33[1] = puVar24[1];
      puVar33[2] = puVar24[2];
      puVar33[3] = puVar24[3];
      puVar45 = puVar45 + 1;
      *puVar45 = *(undefined *)(iVar25 + 0x1280);
      puVar58 = puVar58 + 1;
      puVar56 = puVar56 + 1;
      *puVar56 = *puVar58;
      puVar39 = puVar39 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar39;
      puVar24 = puVar24 + 4;
      puVar33 = puVar33 + 4;
    } while (uVar51 < uVar27);
    goto LAB_0804ac94;
  case 6:
    if (*(int *)(param_1 + 0x638) == 0) {
      iVar52 = *(int *)(param_1 + 800);
      uVar10 = *(undefined4 *)(param_1 + iVar25 * 8);
      bVar40 = bVar40 & 1 ^ *(byte *)(iVar44 + 7);
LAB_0804b1cc:
      iVar25 = iVar52 + -2;
      *(undefined4 *)(param_1 + 0x79e0) = uVar10;
      *(byte *)(param_1 + 0x79e7) = bVar40;
      iVar44 = param_1 + 0x640 + iVar25 * 0x10;
      *(undefined *)(param_1 + 0x79e4) = 6;
      *(undefined *)(param_1 + 0x79e5) = 0;
      *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x640 + iVar25 * 0x10);
      uVar43 = *(undefined2 *)(param_1 + (iVar52 + 0x99e) * 2 + 4);
      *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(iVar44 + 4);
      *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(iVar44 + 8);
      *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar44 + 0xc);
      uVar10 = *(undefined4 *)(param_1 + (iVar52 + 0x530) * 4 + 4);
      uVar62 = *(undefined *)(param_1 + iVar25 + 0x1280);
      *(undefined2 *)(param_1 + 0x1344) = uVar43;
      uVar43 = *(undefined2 *)(param_1 + (iVar52 + 0x99f) * 2 + 4);
      *(undefined *)(param_1 + 0x1280) = uVar62;
      *(undefined4 *)(param_1 + 0x14cc) = uVar10;
      *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar44 + 0x10);
      *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(iVar44 + 0x14);
      *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(iVar44 + 0x18);
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(iVar44 + 0x1c);
      uVar62 = *(undefined *)(param_1 + iVar52 + 0x127f);
      uVar10 = *(undefined4 *)(param_1 + (iVar52 + 0x531) * 4 + 4);
      *(undefined2 *)(param_1 + 0x1346) = uVar43;
      *(undefined *)(param_1 + 0x1281) = uVar62;
      *(undefined4 *)(param_1 + 0x14d0) = uVar10;
      *(undefined4 *)(param_1 + 800) = 2;
      *(undefined4 *)(param_1 + 0x328) = 2;
      *(undefined4 *)(param_1 + 0x324) = 1;
      break;
    }
    iVar52 = *(int *)(param_1 + 800);
    bVar50 = *(byte *)(iVar44 + 7);
    iVar44 = iVar52 + -2;
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    *(undefined *)(param_1 + 0x79e4) = 2;
    *(byte *)(param_1 + 0x79e7) = bVar40 & 1 ^ bVar50;
    iVar25 = param_1 + 0x640 + iVar44 * 0x10;
    *(undefined *)(param_1 + 0x79e5) = 0;
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x640 + iVar44 * 0x10);
    uVar43 = *(undefined2 *)(param_1 + (iVar52 + 0x99e) * 2 + 4);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(iVar25 + 4);
    uVar10 = *(undefined4 *)(iVar25 + 8);
LAB_0804a870:
    *(undefined4 *)(param_1 + 0x648) = uVar10;
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar25 + 0xc);
    uVar62 = *(undefined *)(param_1 + iVar44 + 0x1280);
    uVar10 = *(undefined4 *)(param_1 + (iVar52 + 0x530) * 4 + 4);
    *(undefined2 *)(param_1 + 0x1344) = uVar43;
    *(undefined *)(param_1 + 0x1280) = uVar62;
    *(undefined4 *)(param_1 + 0x14cc) = uVar10;
    uVar43 = *(undefined2 *)(param_1 + (iVar52 + 0x99f) * 2 + 4);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar25 + 0x10);
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(iVar25 + 0x14);
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(iVar25 + 0x18);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(iVar25 + 0x1c);
    uVar62 = *(undefined *)(param_1 + iVar52 + 0x127f);
    uVar10 = *(undefined4 *)(param_1 + (iVar52 + 0x531) * 4 + 4);
    *(undefined2 *)(param_1 + 0x1346) = uVar43;
    *(undefined *)(param_1 + 0x1281) = uVar62;
    *(undefined4 *)(param_1 + 0x14d0) = uVar10;
    *(undefined4 *)(param_1 + 800) = 2;
    *(undefined4 *)(param_1 + 0x328) = 2;
    *(undefined4 *)(param_1 + 0x324) = 1;
    break;
  case 7:
    if (*(int *)(param_1 + 0x638) == 0) {
      uVar27 = (local_3b14 & 1) + 2;
      iVar44 = *(int *)(param_1 + 800) - uVar27;
      *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
      puVar56 = (undefined2 *)(param_1 + (iVar44 + -1) * 2 + 0x1344);
      puVar39 = (undefined4 *)(param_1 + (iVar44 + -1) * 4 + 0x14cc);
      puVar45 = (undefined *)(param_1 + 0x127f);
      puVar58 = (undefined2 *)(param_1 + 0x1342);
      puVar37 = (undefined4 *)(param_1 + 0x14c8);
      *(undefined *)(param_1 + 0x79e5) = 0;
      *(undefined *)(param_1 + 0x79e4) = 7;
      *(undefined *)(param_1 + 0x79e7) = 1;
      uVar51 = 0;
      puVar24 = (undefined4 *)(param_1 + 0x640) + iVar44 * 4;
      puVar33 = (undefined4 *)(param_1 + 0x640);
      do {
        iVar25 = param_1 + iVar44 + uVar51;
        uVar51 = uVar51 + 1;
        *puVar33 = *puVar24;
        puVar33[1] = puVar24[1];
        puVar33[2] = puVar24[2];
        puVar33[3] = puVar24[3];
        puVar45 = puVar45 + 1;
        *puVar45 = *(undefined *)(iVar25 + 0x1280);
        puVar56 = puVar56 + 1;
        puVar58 = puVar58 + 1;
        *puVar58 = *puVar56;
        puVar39 = puVar39 + 1;
        puVar37 = puVar37 + 1;
        *puVar37 = *puVar39;
        puVar24 = puVar24 + 4;
        puVar33 = puVar33 + 4;
      } while (uVar51 < uVar27);
LAB_0804b188:
      *(uint *)(param_1 + 800) = uVar27;
      *(uint *)(param_1 + 0x328) = uVar27;
      *(undefined4 *)(param_1 + 0x324) = 1;
      break;
    }
    uVar27 = (local_3b14 & 1) + 2;
    iVar44 = *(int *)(param_1 + 800) - uVar27;
    puVar45 = (undefined *)(param_1 + 0x127f);
    puVar56 = (undefined2 *)(param_1 + 0x1342);
    *(undefined4 *)(param_1 + 0x79e0) = *(undefined4 *)(param_1 + iVar25 * 8);
    puVar58 = (undefined2 *)(param_1 + (iVar44 + -1) * 2 + 0x1344);
    puVar39 = (undefined4 *)(param_1 + (iVar44 + -1) * 4 + 0x14cc);
    puVar37 = (undefined4 *)(param_1 + 0x14c8);
    uVar51 = 0;
    *(undefined *)(param_1 + 0x79e5) = 0;
    *(undefined *)(param_1 + 0x79e4) = 3;
    *(undefined *)(param_1 + 0x79e7) = 1;
    puVar24 = (undefined4 *)(param_1 + 0x640) + iVar44 * 4;
    puVar33 = (undefined4 *)(param_1 + 0x640);
    do {
      iVar25 = param_1 + iVar44 + uVar51;
      uVar51 = uVar51 + 1;
      *puVar33 = *puVar24;
      puVar33[1] = puVar24[1];
      puVar33[2] = puVar24[2];
      puVar33[3] = puVar24[3];
      puVar45 = puVar45 + 1;
      *puVar45 = *(undefined *)(iVar25 + 0x1280);
      puVar58 = puVar58 + 1;
      puVar56 = puVar56 + 1;
      *puVar56 = *puVar58;
      puVar39 = puVar39 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar39;
      puVar24 = puVar24 + 4;
      puVar33 = puVar33 + 4;
    } while (uVar51 < uVar27);
LAB_0804ac94:
    *(uint *)(param_1 + 800) = uVar27;
    *(uint *)(param_1 + 0x328) = uVar27;
    *(undefined4 *)(param_1 + 0x324) = 1;
  }
  if (*(int *)(param_1 + 0x308) != 0) {
    iVar25 = param_1 + (*(int *)(param_1 + 0x308) + -1) * 8;
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(iVar25 + 0x7fe8);
    *(uint *)(param_1 + 0x630) = (uint)*(ushort *)(iVar25 + 0x7fec);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0xff;
  return;
}


