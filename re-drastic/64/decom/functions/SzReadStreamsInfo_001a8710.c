/*
 * Ghidra decompilation
 *
 * Function : SzReadStreamsInfo
 * Address  : 001a8710
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong SzReadStreamsInfo(byte **param_1,ulong *param_2,long *param_3,uint *param_4,long *param_5,
                       long *param_6,long *param_7,code **param_8,code **param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint3 uVar6;
  uint5 uVar7;
  uint6 uVar8;
  uint7 uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  int *piVar22;
  long lVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  long *plVar28;
  long *plVar29;
  byte *pbVar30;
  long extraout_x10;
  uint uVar31;
  ulong extraout_x11;
  long extraout_x12;
  long lVar32;
  uint uVar33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined auVar47 [16];
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined4 uVar52;
  ulong local_70;
  ulong local_28;
  undefined8 local_20;
  byte abStack_18 [16];
  long local_8;
  
  pbVar30 = param_1[1];
  local_8 = ___stack_chk_guard;
  if (pbVar30 == (byte *)0x0) {
LAB_001a8d38:
    uVar20 = 0x10;
LAB_001a8d3c:
    if (local_8 - ___stack_chk_guard == 0) {
      return uVar20;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
LAB_001a877c:
  pbVar12 = *param_1;
  *param_1 = pbVar12 + 1;
  param_1[1] = pbVar30 + -1;
  bVar36 = *pbVar12;
  uVar20 = (ulong)bVar36;
  if ((char)*pbVar12 < '\0') {
    if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
    *param_1 = pbVar12 + 2;
    param_1[1] = pbVar30 + -2;
    bVar37 = pbVar12[1];
    if ((bVar36 >> 6 & 1) == 0) {
      uVar20 = (uVar20 & 0x3f) * 0x100 + (ulong)bVar37;
    }
    else {
      if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
      *param_1 = pbVar12 + 3;
      param_1[1] = pbVar30 + -3;
      uVar5 = CONCAT11(pbVar12[2],bVar37);
      if ((bVar36 >> 5 & 1) == 0) {
        uVar20 = (uVar20 & 0x1f) * 0x10000 + (ulong)uVar5;
      }
      else {
        if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 4;
        param_1[1] = pbVar30 + -4;
        uVar6 = CONCAT12(pbVar12[3],uVar5);
        if ((bVar36 >> 4 & 1) == 0) {
          uVar20 = (uVar20 & 0xf) * 0x1000000 + (ulong)uVar6;
        }
        else {
          if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar12 + 5;
          param_1[1] = pbVar30 + -5;
          uVar11 = CONCAT13(pbVar12[4],uVar6);
          if ((bVar36 >> 3 & 1) == 0) {
            uVar20 = ((uVar20 & 7) << 0x20) + (ulong)uVar11;
          }
          else {
            if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 6;
            param_1[1] = pbVar30 + -6;
            uVar7 = CONCAT14(pbVar12[5],uVar11);
            if ((bVar36 >> 2 & 1) == 0) {
              uVar20 = ((uVar20 & 3) << 0x28) + (ulong)uVar7;
            }
            else {
              if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 7;
              param_1[1] = pbVar30 + -7;
              uVar8 = CONCAT15(pbVar12[6],uVar7);
              if ((bVar36 >> 1 & 1) == 0) {
                uVar20 = ((uVar20 & 1) << 0x30) + (ulong)uVar8;
              }
              else {
                if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 8;
                param_1[1] = pbVar30 + -8;
                uVar9 = CONCAT16(pbVar12[7],uVar8);
                uVar20 = (ulong)uVar9;
                if ((bVar36 & 1) != 0) {
                  if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 9;
                  param_1[1] = pbVar30 + -9;
                  uVar20 = CONCAT17(pbVar12[8],uVar9);
                }
              }
            }
          }
        }
      }
    }
  }
  iVar48 = (int)uVar20;
  if (uVar20 != (long)iVar48) {
LAB_001a9278:
    uVar20 = 4;
    goto LAB_001a8d3c;
  }
  if (iVar48 != 7) {
    if (7 < iVar48) {
      if (iVar48 != 8) goto LAB_001a9278;
      uVar11 = *(uint *)((long)param_3 + 0x2c);
      plVar29 = (long *)param_3[3];
      if (uVar11 != 0) {
        puVar14 = (undefined4 *)((long)plVar29 + 0x34);
        do {
          puVar13 = puVar14 + 0xe;
          *puVar14 = 1;
          puVar14 = puVar13;
        } while ((undefined4 *)((long)plVar29 + (ulong)(uVar11 - 1) * 0x38 + 0x6c) != puVar13);
      }
      pbVar30 = param_1[1];
      *param_4 = uVar11;
      if (pbVar30 != (byte *)0x0) {
        uVar10 = uVar11 - 1;
        lVar17 = (ulong)uVar10 * 0x38;
        do {
          pbVar12 = *param_1;
          *param_1 = pbVar12 + 1;
          param_1[1] = pbVar30 + -1;
          bVar36 = *pbVar12;
          uVar26 = (ulong)bVar36;
          uVar20 = uVar26;
          if ((char)*pbVar12 < '\0') {
            if (pbVar30 + -1 == (byte *)0x0) break;
            *param_1 = pbVar12 + 2;
            param_1[1] = pbVar30 + -2;
            bVar37 = pbVar12[1];
            uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
            if ((bVar36 >> 6 & 1) != 0) {
              if (pbVar30 + -2 == (byte *)0x0) break;
              *param_1 = pbVar12 + 3;
              param_1[1] = pbVar30 + -3;
              uVar5 = CONCAT11(pbVar12[2],bVar37);
              if ((bVar36 >> 5 & 1) == 0) {
                uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
              }
              else {
                if (pbVar30 + -3 == (byte *)0x0) break;
                *param_1 = pbVar12 + 4;
                param_1[1] = pbVar30 + -4;
                uVar6 = CONCAT12(pbVar12[3],uVar5);
                if ((bVar36 >> 4 & 1) == 0) {
                  uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
                }
                else {
                  if (pbVar30 + -4 == (byte *)0x0) break;
                  *param_1 = pbVar12 + 5;
                  param_1[1] = pbVar30 + -5;
                  uVar33 = CONCAT13(pbVar12[4],uVar6);
                  if ((bVar36 >> 3 & 1) == 0) {
                    uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar33;
                  }
                  else {
                    if (pbVar30 + -5 == (byte *)0x0) break;
                    *param_1 = pbVar12 + 6;
                    param_1[1] = pbVar30 + -6;
                    uVar7 = CONCAT14(pbVar12[5],uVar33);
                    if ((bVar36 >> 2 & 1) == 0) {
                      uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                    }
                    else {
                      if (pbVar30 + -6 == (byte *)0x0) break;
                      *param_1 = pbVar12 + 7;
                      param_1[1] = pbVar30 + -7;
                      uVar8 = CONCAT15(pbVar12[6],uVar7);
                      if ((bVar36 >> 1 & 1) == 0) {
                        uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                      }
                      else {
                        if (pbVar30 + -7 == (byte *)0x0) break;
                        *param_1 = pbVar12 + 8;
                        param_1[1] = pbVar30 + -8;
                        uVar9 = CONCAT16(pbVar12[7],uVar8);
                        uVar20 = (ulong)uVar9;
                        if ((bVar36 & 1) != 0) {
                          if (pbVar30 + -8 == (byte *)0x0) break;
                          param_1[1] = pbVar30 + -9;
                          *param_1 = pbVar12 + 9;
                          uVar20 = CONCAT17(pbVar12[8],uVar9);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (uVar20 == 0xd) {
            pbVar30 = param_1[1];
            *param_4 = 0;
            if (uVar11 != 0) {
              piVar16 = (int *)((long)plVar29 + 0x34);
              do {
                if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                pbVar12 = *param_1;
                *param_1 = pbVar12 + 1;
                param_1[1] = pbVar30 + -1;
                bVar36 = *pbVar12;
                uVar26 = (ulong)bVar36;
                uVar20 = uVar26;
                if ((char)*pbVar12 < '\0') {
                  if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 2;
                  param_1[1] = pbVar30 + -2;
                  bVar37 = pbVar12[1];
                  uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
                  if ((bVar36 >> 6 & 1) != 0) {
                    if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 3;
                    param_1[1] = pbVar30 + -3;
                    uVar5 = CONCAT11(pbVar12[2],bVar37);
                    uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
                    if ((bVar36 >> 5 & 1) != 0) {
                      if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 4;
                      param_1[1] = pbVar30 + -4;
                      uVar6 = CONCAT12(pbVar12[3],uVar5);
                      uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
                      if ((bVar36 >> 4 & 1) != 0) {
                        if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 5;
                        param_1[1] = pbVar30 + -5;
                        uVar33 = CONCAT13(pbVar12[4],uVar6);
                        uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar33;
                        if ((bVar36 >> 3 & 1) != 0) {
                          if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar12 + 6;
                          param_1[1] = pbVar30 + -6;
                          uVar7 = CONCAT14(pbVar12[5],uVar33);
                          uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                          if ((bVar36 >> 2 & 1) != 0) {
                            if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 7;
                            param_1[1] = pbVar30 + -7;
                            uVar8 = CONCAT15(pbVar12[6],uVar7);
                            if ((bVar36 >> 1 & 1) == 0) {
                              uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                            }
                            else {
                              if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                              *param_1 = pbVar12 + 8;
                              param_1[1] = pbVar30 + -8;
                              uVar9 = CONCAT16(pbVar12[7],uVar8);
                              uVar20 = (ulong)uVar9;
                              if ((bVar36 & 1) != 0) {
                                if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                                param_1[1] = pbVar30 + -9;
                                *param_1 = pbVar12 + 9;
                                uVar20 = CONCAT17(pbVar12[8],uVar9);
                              }
                            }
                          }
                        }
                        if (0x7fffffff < uVar20) goto LAB_001a9278;
                      }
                    }
                  }
                }
                piVar22 = piVar16 + 0xe;
                *piVar16 = (int)uVar20;
                pbVar30 = param_1[1];
                *param_4 = *param_4 + (int)uVar20;
                piVar16 = piVar22;
              } while ((int *)((long)plVar29 + lVar17 + 0x6c) != piVar22);
            }
          }
          else {
            if ((uVar20 - 9 < 2) || (uVar20 == 0)) goto LAB_001a9afc;
            pbVar12 = param_1[1];
            if (pbVar12 == (byte *)0x0) break;
            pbVar21 = *param_1;
            pbVar30 = pbVar12 + -1;
            *param_1 = pbVar21 + 1;
            param_1[1] = pbVar30;
            bVar36 = *pbVar21;
            pbVar19 = (byte *)(ulong)bVar36;
            if ((char)*pbVar21 < '\0') {
              if (pbVar30 == (byte *)0x0) break;
              pbVar30 = pbVar12 + -2;
              *param_1 = pbVar21 + 2;
              param_1[1] = pbVar30;
              bVar37 = pbVar21[1];
              if ((bVar36 >> 6 & 1) == 0) {
                pbVar19 = (byte *)(((ulong)pbVar19 & 0x3f) * 0x100 + (ulong)bVar37);
              }
              else {
                if (pbVar30 == (byte *)0x0) break;
                pbVar30 = pbVar12 + -3;
                *param_1 = pbVar21 + 3;
                param_1[1] = pbVar30;
                uVar5 = CONCAT11(pbVar21[2],bVar37);
                if ((bVar36 >> 5 & 1) == 0) {
                  pbVar19 = (byte *)(((ulong)pbVar19 & 0x1f) * 0x10000 + (ulong)uVar5);
                }
                else {
                  if (pbVar30 == (byte *)0x0) break;
                  pbVar30 = pbVar12 + -4;
                  *param_1 = pbVar21 + 4;
                  param_1[1] = pbVar30;
                  uVar6 = CONCAT12(pbVar21[3],uVar5);
                  if ((bVar36 >> 4 & 1) == 0) {
                    pbVar19 = (byte *)(((ulong)pbVar19 & 0xf) * 0x1000000 + (ulong)uVar6);
                  }
                  else {
                    if (pbVar30 == (byte *)0x0) break;
                    pbVar30 = pbVar12 + -5;
                    *param_1 = pbVar21 + 5;
                    param_1[1] = pbVar30;
                    uVar33 = CONCAT13(pbVar21[4],uVar6);
                    if ((bVar36 >> 3 & 1) == 0) {
                      pbVar19 = (byte *)((((ulong)pbVar19 & 7) << 0x20) + (ulong)uVar33);
                    }
                    else {
                      if (pbVar30 == (byte *)0x0) break;
                      pbVar30 = pbVar12 + -6;
                      *param_1 = pbVar21 + 6;
                      param_1[1] = pbVar30;
                      uVar7 = CONCAT14(pbVar21[5],uVar33);
                      if ((bVar36 >> 2 & 1) == 0) {
                        pbVar19 = (byte *)((((ulong)pbVar19 & 3) << 0x28) + (ulong)uVar7);
                      }
                      else {
                        if (pbVar30 == (byte *)0x0) break;
                        pbVar30 = pbVar12 + -7;
                        *param_1 = pbVar21 + 7;
                        param_1[1] = pbVar30;
                        uVar8 = CONCAT15(pbVar21[6],uVar7);
                        if ((bVar36 >> 1 & 1) == 0) {
                          pbVar19 = (byte *)((((ulong)pbVar19 & 1) << 0x30) + (ulong)uVar8);
                        }
                        else {
                          if (pbVar30 == (byte *)0x0) break;
                          pbVar30 = pbVar12 + -8;
                          *param_1 = pbVar21 + 8;
                          param_1[1] = pbVar30;
                          uVar9 = CONCAT16(pbVar21[7],uVar8);
                          pbVar19 = (byte *)(ulong)uVar9;
                          if ((bVar36 & 1) != 0) {
                            if (pbVar30 == (byte *)0x0) break;
                            pbVar30 = pbVar12 + -9;
                            *param_1 = pbVar21 + 9;
                            param_1[1] = pbVar30;
                            pbVar19 = (byte *)CONCAT17(pbVar21[8],uVar9);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (pbVar30 < pbVar19) break;
            pbVar30 = pbVar30 + -(long)pbVar19;
            *param_1 = *param_1 + (long)pbVar19;
            param_1[1] = pbVar30;
          }
          if (pbVar30 == (byte *)0x0) break;
        } while( true );
      }
      goto LAB_001a8d38;
    }
    if (iVar48 == 0) {
LAB_001a9288:
      uVar20 = uVar20 & 0xffffffff;
      goto LAB_001a8d3c;
    }
    if (iVar48 != 6) goto LAB_001a9278;
    pbVar30 = param_1[1];
    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
    pbVar19 = *param_1;
    pbVar12 = pbVar30 + -1;
    *param_1 = pbVar19 + 1;
    param_1[1] = pbVar12;
    bVar36 = *pbVar19;
    uVar26 = (ulong)bVar36;
    *param_2 = 0;
    uVar20 = uVar26;
    if ((char)bVar36 < '\0') {
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -2;
      *param_1 = pbVar19 + 2;
      param_1[1] = pbVar12;
      bVar37 = pbVar19[1];
      *param_2 = (ulong)bVar37;
      uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
      if ((bVar36 >> 6 & 1) == 0) goto LAB_001ab560;
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -3;
      *param_1 = pbVar19 + 3;
      param_1[1] = pbVar12;
      uVar5 = CONCAT11(pbVar19[2],bVar37);
      *param_2 = (ulong)uVar5;
      if ((bVar36 >> 5 & 1) == 0) {
        uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
        goto LAB_001ab560;
      }
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -4;
      *param_1 = pbVar19 + 4;
      param_1[1] = pbVar12;
      uVar6 = CONCAT12(pbVar19[3],uVar5);
      *param_2 = (ulong)uVar6;
      if ((bVar36 >> 4 & 1) == 0) {
        uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
        goto LAB_001ab560;
      }
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -5;
      *param_1 = pbVar19 + 5;
      param_1[1] = pbVar12;
      uVar11 = CONCAT13(pbVar19[4],uVar6);
      *param_2 = (ulong)uVar11;
      uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
      if ((bVar36 >> 3 & 1) == 0) goto LAB_001ab560;
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -6;
      *param_1 = pbVar19 + 6;
      param_1[1] = pbVar12;
      uVar7 = CONCAT14(pbVar19[5],uVar11);
      *param_2 = (ulong)uVar7;
      uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
      if ((bVar36 >> 2 & 1) == 0) goto LAB_001ab560;
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -7;
      *param_1 = pbVar19 + 7;
      param_1[1] = pbVar12;
      uVar8 = CONCAT15(pbVar19[6],uVar7);
      *param_2 = (ulong)uVar8;
      if ((bVar36 >> 1 & 1) == 0) {
        uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
        goto LAB_001ab560;
      }
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -8;
      *param_1 = pbVar19 + 8;
      param_1[1] = pbVar12;
      uVar9 = CONCAT16(pbVar19[7],uVar8);
      *param_2 = (ulong)uVar9;
      uVar20 = (ulong)uVar9;
      if ((bVar36 & 1) == 0) goto LAB_001ab560;
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -9;
      *param_1 = pbVar19 + 9;
      param_1[1] = pbVar12;
      *param_2 = CONCAT17(pbVar19[8],uVar9);
    }
    else {
LAB_001ab560:
      *param_2 = uVar20;
    }
    if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
    pbVar30 = *param_1;
    *param_1 = pbVar30 + 1;
    param_1[1] = pbVar12 + -1;
    bVar36 = *pbVar30;
    uVar20 = (ulong)bVar36;
    if ((char)*pbVar30 < '\0') {
      if (pbVar12 + -1 == (byte *)0x0) goto LAB_001a8d38;
      *param_1 = pbVar30 + 2;
      param_1[1] = pbVar12 + -2;
      bVar37 = pbVar30[1];
      if ((bVar36 >> 6 & 1) == 0) {
        uVar20 = (uVar20 & 0x3f) * 0x100 + (ulong)bVar37;
      }
      else {
        if (pbVar12 + -2 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar30 + 3;
        param_1[1] = pbVar12 + -3;
        uVar5 = CONCAT11(pbVar30[2],bVar37);
        if ((bVar36 >> 5 & 1) == 0) {
          uVar20 = (uVar20 & 0x1f) * 0x10000 + (ulong)uVar5;
        }
        else {
          if (pbVar12 + -3 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar30 + 4;
          param_1[1] = pbVar12 + -4;
          uVar6 = CONCAT12(pbVar30[3],uVar5);
          if ((bVar36 >> 4 & 1) == 0) {
            uVar20 = (uVar20 & 0xf) * 0x1000000 + (ulong)uVar6;
          }
          else {
            if (pbVar12 + -4 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar30 + 5;
            param_1[1] = pbVar12 + -5;
            uVar11 = CONCAT13(pbVar30[4],uVar6);
            if ((bVar36 >> 3 & 1) == 0) {
              uVar20 = ((uVar20 & 7) << 0x20) + (ulong)uVar11;
            }
            else {
              if (pbVar12 + -5 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar30 + 6;
              param_1[1] = pbVar12 + -6;
              uVar7 = CONCAT14(pbVar30[5],uVar11);
              if ((bVar36 >> 2 & 1) == 0) {
                uVar20 = ((uVar20 & 3) << 0x28) + (ulong)uVar7;
              }
              else {
                if (pbVar12 + -6 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar30 + 7;
                param_1[1] = pbVar12 + -7;
                uVar8 = CONCAT15(pbVar30[6],uVar7);
                if ((bVar36 >> 1 & 1) == 0) {
                  uVar20 = ((uVar20 & 1) << 0x30) + (ulong)uVar8;
                }
                else {
                  if (pbVar12 + -7 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar30 + 8;
                  param_1[1] = pbVar12 + -8;
                  uVar9 = CONCAT16(pbVar30[7],uVar8);
                  uVar20 = (ulong)uVar9;
                  if ((bVar36 & 1) != 0) {
                    if (pbVar12 + -8 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar30 + 9;
                    param_1[1] = pbVar12 + -9;
                    uVar20 = CONCAT17(pbVar30[8],uVar9);
                  }
                }
              }
            }
            if (0x7fffffff < uVar20) goto LAB_001a9278;
          }
        }
      }
    }
    pbVar30 = param_1[1];
    *(int *)(param_3 + 5) = (int)uVar20;
    if (pbVar30 != (byte *)0x0) {
      pbVar12 = *param_1;
      while( true ) {
        *param_1 = pbVar12 + 1;
        param_1[1] = pbVar30 + -1;
        bVar36 = *pbVar12;
        uVar26 = (ulong)bVar36;
        if ((char)*pbVar12 < '\0') {
          if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar12 + 2;
          param_1[1] = pbVar30 + -2;
          bVar37 = pbVar12[1];
          if ((bVar36 >> 6 & 1) == 0) {
            uVar26 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
          }
          else {
            if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 3;
            param_1[1] = pbVar30 + -3;
            uVar5 = CONCAT11(pbVar12[2],bVar37);
            if ((bVar36 >> 5 & 1) == 0) {
              uVar26 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
            }
            else {
              if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 4;
              param_1[1] = pbVar30 + -4;
              uVar6 = CONCAT12(pbVar12[3],uVar5);
              if ((bVar36 >> 4 & 1) == 0) {
                uVar26 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
              }
              else {
                if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 5;
                param_1[1] = pbVar30 + -5;
                uVar11 = CONCAT13(pbVar12[4],uVar6);
                if ((bVar36 >> 3 & 1) == 0) {
                  uVar26 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
                }
                else {
                  if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 6;
                  param_1[1] = pbVar30 + -6;
                  uVar7 = CONCAT14(pbVar12[5],uVar11);
                  if ((bVar36 >> 2 & 1) == 0) {
                    uVar26 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                  }
                  else {
                    if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 7;
                    param_1[1] = pbVar30 + -7;
                    uVar8 = CONCAT15(pbVar12[6],uVar7);
                    if ((bVar36 >> 1 & 1) == 0) {
                      uVar26 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                    }
                    else {
                      if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 8;
                      param_1[1] = pbVar30 + -8;
                      uVar9 = CONCAT16(pbVar12[7],uVar8);
                      uVar26 = (ulong)uVar9;
                      if ((bVar36 & 1) != 0) {
                        if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 9;
                        param_1[1] = pbVar30 + -9;
                        uVar26 = CONCAT17(pbVar12[8],uVar9);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar26 == 9) break;
        if ((uVar26 == 0) || (pbVar19 = param_1[1], pbVar19 == (byte *)0x0)) goto LAB_001a8d38;
        pbVar21 = *param_1;
        pbVar30 = pbVar19 + -1;
        *param_1 = pbVar21 + 1;
        param_1[1] = pbVar30;
        bVar36 = *pbVar21;
        pbVar27 = (byte *)(ulong)bVar36;
        pbVar12 = pbVar27;
        if ((char)*pbVar21 < '\0') {
          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
          pbVar30 = pbVar19 + -2;
          *param_1 = pbVar21 + 2;
          param_1[1] = pbVar30;
          bVar37 = pbVar21[1];
          pbVar12 = (byte *)(((ulong)pbVar27 & 0x3f) * 0x100 + (ulong)bVar37);
          if ((bVar36 >> 6 & 1) != 0) {
            if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
            pbVar30 = pbVar19 + -3;
            *param_1 = pbVar21 + 3;
            param_1[1] = pbVar30;
            uVar5 = CONCAT11(pbVar21[2],bVar37);
            if ((bVar36 >> 5 & 1) == 0) {
              pbVar12 = (byte *)(((ulong)pbVar27 & 0x1f) * 0x10000 + (ulong)uVar5);
            }
            else {
              if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
              pbVar30 = pbVar19 + -4;
              *param_1 = pbVar21 + 4;
              param_1[1] = pbVar30;
              uVar6 = CONCAT12(pbVar21[3],uVar5);
              pbVar12 = (byte *)(((ulong)pbVar27 & 0xf) * 0x1000000 + (ulong)uVar6);
              if ((bVar36 >> 4 & 1) != 0) {
                if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                pbVar30 = pbVar19 + -5;
                *param_1 = pbVar21 + 5;
                param_1[1] = pbVar30;
                uVar11 = CONCAT13(pbVar21[4],uVar6);
                pbVar12 = (byte *)((((ulong)pbVar27 & 7) << 0x20) + (ulong)uVar11);
                if ((bVar36 >> 3 & 1) != 0) {
                  if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                  pbVar30 = pbVar19 + -6;
                  *param_1 = pbVar21 + 6;
                  param_1[1] = pbVar30;
                  uVar7 = CONCAT14(pbVar21[5],uVar11);
                  if ((bVar36 >> 2 & 1) == 0) {
                    pbVar12 = (byte *)((((ulong)pbVar27 & 3) << 0x28) + (ulong)uVar7);
                  }
                  else {
                    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                    pbVar30 = pbVar19 + -7;
                    *param_1 = pbVar21 + 7;
                    param_1[1] = pbVar30;
                    uVar8 = CONCAT15(pbVar21[6],uVar7);
                    if ((bVar36 >> 1 & 1) == 0) {
                      pbVar12 = (byte *)((((ulong)pbVar27 & 1) << 0x30) + (ulong)uVar8);
                    }
                    else {
                      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                      pbVar30 = pbVar19 + -8;
                      *param_1 = pbVar21 + 8;
                      param_1[1] = pbVar30;
                      uVar9 = CONCAT16(pbVar21[7],uVar8);
                      pbVar12 = (byte *)(ulong)uVar9;
                      if ((bVar36 & 1) != 0) {
                        if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                        pbVar30 = pbVar19 + -9;
                        *param_1 = pbVar21 + 9;
                        param_1[1] = pbVar30;
                        pbVar12 = (byte *)CONCAT17(pbVar21[8],uVar9);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (pbVar30 < pbVar12) goto LAB_001a8d38;
        pbVar30 = pbVar30 + -(long)pbVar12;
        pbVar12 = *param_1 + (long)pbVar12;
        *param_1 = pbVar12;
        param_1[1] = pbVar30;
        if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
      }
      if (uVar20 != 0) {
        lVar17 = (**param_8)(param_8,uVar20 << 3);
        *param_3 = lVar17;
        if (lVar17 != 0) {
          uVar11 = *(uint *)(param_3 + 5);
          lVar23 = 0;
          pbVar12 = param_1[1];
          pbVar30 = pbVar12;
          if (uVar11 != 0) {
            do {
              if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
              pbVar19 = *param_1;
              pbVar12 = pbVar30 + -1;
              *param_1 = pbVar19 + 1;
              param_1[1] = pbVar12;
              bVar36 = *pbVar19;
              uVar20 = (ulong)bVar36;
              *(undefined8 *)(lVar17 + lVar23 * 8) = 0;
              if ((char)bVar36 < '\0') {
                if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                pbVar12 = pbVar30 + -2;
                *param_1 = pbVar19 + 2;
                param_1[1] = pbVar12;
                bVar37 = pbVar19[1];
                *(ulong *)(lVar17 + lVar23 * 8) = (ulong)bVar37;
                if ((bVar36 >> 6 & 1) == 0) {
                  *(ulong *)(lVar17 + lVar23 * 8) = (uVar20 & 0x3f) * 0x100 + (ulong)bVar37;
                }
                else {
                  if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                  pbVar12 = pbVar30 + -3;
                  *param_1 = pbVar19 + 3;
                  param_1[1] = pbVar12;
                  uVar5 = CONCAT11(pbVar19[2],bVar37);
                  *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar5;
                  if ((bVar36 >> 5 & 1) == 0) {
                    *(ulong *)(lVar17 + lVar23 * 8) = (uVar20 & 0x1f) * 0x10000 + (ulong)uVar5;
                  }
                  else {
                    if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                    pbVar12 = pbVar30 + -4;
                    *param_1 = pbVar19 + 4;
                    param_1[1] = pbVar12;
                    uVar6 = CONCAT12(pbVar19[3],uVar5);
                    *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar6;
                    if ((bVar36 >> 4 & 1) == 0) {
                      *(ulong *)(lVar17 + lVar23 * 8) = (uVar20 & 0xf) * 0x1000000 + (ulong)uVar6;
                    }
                    else {
                      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                      pbVar12 = pbVar30 + -5;
                      *param_1 = pbVar19 + 5;
                      param_1[1] = pbVar12;
                      uVar10 = CONCAT13(pbVar19[4],uVar6);
                      *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar10;
                      if ((bVar36 >> 3 & 1) == 0) {
                        *(ulong *)(lVar17 + lVar23 * 8) = ((uVar20 & 7) << 0x20) + (ulong)uVar10;
                      }
                      else {
                        if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                        pbVar12 = pbVar30 + -6;
                        *param_1 = pbVar19 + 6;
                        param_1[1] = pbVar12;
                        uVar7 = CONCAT14(pbVar19[5],uVar10);
                        *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar7;
                        if ((bVar36 >> 2 & 1) == 0) {
                          *(ulong *)(lVar17 + lVar23 * 8) = ((uVar20 & 3) << 0x28) + (ulong)uVar7;
                        }
                        else {
                          if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                          pbVar12 = pbVar30 + -7;
                          *param_1 = pbVar19 + 7;
                          param_1[1] = pbVar12;
                          uVar8 = CONCAT15(pbVar19[6],uVar7);
                          *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar8;
                          if ((bVar36 >> 1 & 1) == 0) {
                            *(ulong *)(lVar17 + lVar23 * 8) = ((uVar20 & 1) << 0x30) + (ulong)uVar8;
                          }
                          else {
                            if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                            pbVar12 = pbVar30 + -8;
                            *param_1 = pbVar19 + 8;
                            param_1[1] = pbVar12;
                            uVar9 = CONCAT16(pbVar19[7],uVar8);
                            *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar9;
                            if ((bVar36 & 1) == 0) {
                              *(ulong *)(lVar17 + lVar23 * 8) = (ulong)uVar9;
                            }
                            else {
                              if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                              pbVar12 = pbVar30 + -9;
                              *param_1 = pbVar19 + 9;
                              param_1[1] = pbVar12;
                              *(ulong *)(lVar17 + lVar23 * 8) = CONCAT17(pbVar19[8],uVar9);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                *(ulong *)(lVar17 + lVar23 * 8) = uVar20;
              }
              lVar23 = lVar23 + 1;
              pbVar30 = pbVar12;
            } while ((uint)lVar23 < uVar11);
          }
          goto LAB_001aadb0;
        }
        goto LAB_001aa2a0;
      }
      pbVar12 = param_1[1];
      *param_3 = 0;
LAB_001aadb0:
      if (pbVar12 != (byte *)0x0) {
        do {
          pbVar30 = *param_1;
          *param_1 = pbVar30 + 1;
          param_1[1] = pbVar12 + -1;
          bVar36 = *pbVar30;
          if ((char)*pbVar30 < '\0') {
            if (pbVar12 + -1 == (byte *)0x0) break;
            *param_1 = pbVar30 + 2;
            param_1[1] = pbVar12 + -2;
            bVar37 = pbVar30[1];
            uVar20 = (ulong)bVar37;
            if ((bVar36 >> 6 & 1) == 0) {
              lVar17 = 8;
              uVar11 = 0x3f;
              goto LAB_001ac288;
            }
            if (pbVar12 + -2 == (byte *)0x0) break;
            *param_1 = pbVar30 + 3;
            param_1[1] = pbVar12 + -3;
            uVar5 = CONCAT11(pbVar30[2],bVar37);
            uVar20 = (ulong)uVar5;
            if ((bVar36 >> 5 & 1) == 0) {
              lVar17 = 0x10;
              uVar11 = 0x1f;
              goto LAB_001ac288;
            }
            if (pbVar12 + -3 == (byte *)0x0) break;
            *param_1 = pbVar30 + 4;
            param_1[1] = pbVar12 + -4;
            uVar6 = CONCAT12(pbVar30[3],uVar5);
            uVar20 = (ulong)uVar6;
            if ((bVar36 >> 4 & 1) == 0) {
              lVar17 = 0x18;
              uVar11 = 0xf;
              goto LAB_001ac288;
            }
            if (pbVar12 + -4 == (byte *)0x0) break;
            *param_1 = pbVar30 + 5;
            param_1[1] = pbVar12 + -5;
            uVar11 = CONCAT13(pbVar30[4],uVar6);
            uVar20 = (ulong)uVar11;
            if ((bVar36 >> 3 & 1) == 0) {
              lVar17 = 0x20;
              uVar11 = 7;
              goto LAB_001ac288;
            }
            if (pbVar12 + -5 == (byte *)0x0) break;
            *param_1 = pbVar30 + 6;
            param_1[1] = pbVar12 + -6;
            uVar7 = CONCAT14(pbVar30[5],uVar11);
            uVar20 = (ulong)uVar7;
            if ((bVar36 >> 2 & 1) == 0) {
              lVar17 = 0x28;
              uVar11 = 3;
              goto LAB_001ac288;
            }
            if (pbVar12 + -6 == (byte *)0x0) break;
            *param_1 = pbVar30 + 7;
            param_1[1] = pbVar12 + -7;
            uVar8 = CONCAT15(pbVar30[6],uVar7);
            uVar20 = (ulong)uVar8;
            if ((bVar36 >> 1 & 1) == 0) {
              lVar17 = 0x30;
              uVar11 = 1;
              goto LAB_001ac288;
            }
            if (pbVar12 + -7 == (byte *)0x0) break;
            *param_1 = pbVar30 + 8;
            param_1[1] = pbVar12 + -8;
            uVar9 = CONCAT16(pbVar30[7],uVar8);
            uVar20 = (ulong)uVar9;
            if ((bVar36 & 1) == 0) {
              lVar17 = 0x38;
              uVar11 = 0;
              goto LAB_001ac288;
            }
            if (pbVar12 + -8 == (byte *)0x0) break;
            *param_1 = pbVar30 + 9;
            param_1[1] = pbVar12 + -9;
            lVar17 = CONCAT17(pbVar30[8],uVar9);
          }
          else {
            lVar17 = 0;
            uVar11 = 0x7f;
            uVar20 = 0;
LAB_001ac288:
            lVar17 = ((long)(int)(bVar36 & uVar11) << lVar17) + uVar20;
          }
          if (lVar17 == 0) goto LAB_001aa5cc;
          if (lVar17 == 10) {
            uVar20 = SzReadHashDigests(param_1,*(undefined4 *)(param_3 + 5),param_3 + 1,param_3 + 2,
                                       param_8);
            if ((int)uVar20 != 0) goto LAB_001a9288;
            pbVar12 = param_1[1];
          }
          else {
            pbVar30 = param_1[1];
            if (pbVar30 == (byte *)0x0) break;
            pbVar19 = *param_1;
            pbVar12 = pbVar30 + -1;
            *param_1 = pbVar19 + 1;
            param_1[1] = pbVar12;
            bVar36 = *pbVar19;
            if ((char)*pbVar19 < '\0') {
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -2;
              *param_1 = pbVar19 + 2;
              param_1[1] = pbVar12;
              bVar37 = pbVar19[1];
              uVar20 = (ulong)bVar37;
              if ((bVar36 >> 6 & 1) == 0) {
                lVar17 = 8;
                uVar11 = 0x3f;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -3;
              *param_1 = pbVar19 + 3;
              param_1[1] = pbVar12;
              uVar5 = CONCAT11(pbVar19[2],bVar37);
              uVar20 = (ulong)uVar5;
              if ((bVar36 >> 5 & 1) == 0) {
                lVar17 = 0x10;
                uVar11 = 0x1f;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -4;
              *param_1 = pbVar19 + 4;
              param_1[1] = pbVar12;
              uVar6 = CONCAT12(pbVar19[3],uVar5);
              uVar20 = (ulong)uVar6;
              if ((bVar36 >> 4 & 1) == 0) {
                lVar17 = 0x18;
                uVar11 = 0xf;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -5;
              *param_1 = pbVar19 + 5;
              param_1[1] = pbVar12;
              uVar11 = CONCAT13(pbVar19[4],uVar6);
              uVar20 = (ulong)uVar11;
              if ((bVar36 >> 3 & 1) == 0) {
                lVar17 = 0x20;
                uVar11 = 7;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -6;
              *param_1 = pbVar19 + 6;
              param_1[1] = pbVar12;
              uVar7 = CONCAT14(pbVar19[5],uVar11);
              uVar20 = (ulong)uVar7;
              if ((bVar36 >> 2 & 1) == 0) {
                lVar17 = 0x28;
                uVar11 = 3;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -7;
              *param_1 = pbVar19 + 7;
              param_1[1] = pbVar12;
              uVar8 = CONCAT15(pbVar19[6],uVar7);
              uVar20 = (ulong)uVar8;
              if ((bVar36 >> 1 & 1) == 0) {
                lVar17 = 0x30;
                uVar11 = 1;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -8;
              *param_1 = pbVar19 + 8;
              param_1[1] = pbVar12;
              uVar9 = CONCAT16(pbVar19[7],uVar8);
              uVar20 = (ulong)uVar9;
              if ((bVar36 & 1) == 0) {
                lVar17 = 0x38;
                uVar11 = 0;
                goto LAB_001ac48c;
              }
              if (pbVar12 == (byte *)0x0) break;
              pbVar12 = pbVar30 + -9;
              *param_1 = pbVar19 + 9;
              param_1[1] = pbVar12;
              pbVar30 = (byte *)CONCAT17(pbVar19[8],uVar9);
            }
            else {
              lVar17 = 0;
              uVar11 = 0x7f;
              uVar20 = 0;
LAB_001ac48c:
              pbVar30 = (byte *)(((long)(int)(bVar36 & uVar11) << lVar17) + uVar20);
            }
            if (pbVar12 < pbVar30) break;
            pbVar12 = pbVar12 + -(long)pbVar30;
            *param_1 = *param_1 + (long)pbVar30;
            param_1[1] = pbVar12;
          }
          if (pbVar12 == (byte *)0x0) break;
        } while( true );
      }
    }
    goto LAB_001a8d38;
  }
  pbVar30 = param_1[1];
  if (pbVar30 != (byte *)0x0) {
    pbVar12 = *param_1;
    while( true ) {
      *param_1 = pbVar12 + 1;
      param_1[1] = pbVar30 + -1;
      bVar36 = *pbVar12;
      uVar20 = (ulong)bVar36;
      if ((char)*pbVar12 < '\0') {
        if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 2;
        param_1[1] = pbVar30 + -2;
        bVar37 = pbVar12[1];
        if ((bVar36 >> 6 & 1) == 0) {
          uVar20 = (uVar20 & 0x3f) * 0x100 + (ulong)bVar37;
        }
        else {
          if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar12 + 3;
          param_1[1] = pbVar30 + -3;
          uVar5 = CONCAT11(pbVar12[2],bVar37);
          if ((bVar36 >> 5 & 1) == 0) {
            uVar20 = (uVar20 & 0x1f) * 0x10000 + (ulong)uVar5;
          }
          else {
            if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 4;
            param_1[1] = pbVar30 + -4;
            uVar6 = CONCAT12(pbVar12[3],uVar5);
            if ((bVar36 >> 4 & 1) == 0) {
              uVar20 = (uVar20 & 0xf) * 0x1000000 + (ulong)uVar6;
            }
            else {
              if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 5;
              param_1[1] = pbVar30 + -5;
              uVar11 = CONCAT13(pbVar12[4],uVar6);
              if ((bVar36 >> 3 & 1) == 0) {
                uVar20 = ((uVar20 & 7) << 0x20) + (ulong)uVar11;
              }
              else {
                if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 6;
                param_1[1] = pbVar30 + -6;
                uVar7 = CONCAT14(pbVar12[5],uVar11);
                if ((bVar36 >> 2 & 1) == 0) {
                  uVar20 = ((uVar20 & 3) << 0x28) + (ulong)uVar7;
                }
                else {
                  if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 7;
                  param_1[1] = pbVar30 + -7;
                  uVar8 = CONCAT15(pbVar12[6],uVar7);
                  if ((bVar36 >> 1 & 1) == 0) {
                    uVar20 = ((uVar20 & 1) << 0x30) + (ulong)uVar8;
                  }
                  else {
                    if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 8;
                    param_1[1] = pbVar30 + -8;
                    uVar9 = CONCAT16(pbVar12[7],uVar8);
                    uVar20 = (ulong)uVar9;
                    if ((bVar36 & 1) != 0) {
                      if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 9;
                      param_1[1] = pbVar30 + -9;
                      uVar20 = CONCAT17(pbVar12[8],uVar9);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (uVar20 == 0xb) break;
      if ((uVar20 == 0) || (pbVar19 = param_1[1], pbVar19 == (byte *)0x0)) goto LAB_001a8d38;
      pbVar21 = *param_1;
      pbVar30 = pbVar19 + -1;
      *param_1 = pbVar21 + 1;
      param_1[1] = pbVar30;
      bVar36 = *pbVar21;
      pbVar12 = (byte *)(ulong)bVar36;
      if ((char)*pbVar21 < '\0') {
        if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
        pbVar30 = pbVar19 + -2;
        *param_1 = pbVar21 + 2;
        param_1[1] = pbVar30;
        bVar37 = pbVar21[1];
        if ((bVar36 >> 6 & 1) == 0) {
          pbVar12 = (byte *)(((ulong)pbVar12 & 0x3f) * 0x100 + (ulong)bVar37);
        }
        else {
          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
          pbVar30 = pbVar19 + -3;
          *param_1 = pbVar21 + 3;
          param_1[1] = pbVar30;
          uVar5 = CONCAT11(pbVar21[2],bVar37);
          if ((bVar36 >> 5 & 1) == 0) {
            pbVar12 = (byte *)(((ulong)pbVar12 & 0x1f) * 0x10000 + (ulong)uVar5);
          }
          else {
            if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
            pbVar30 = pbVar19 + -4;
            *param_1 = pbVar21 + 4;
            param_1[1] = pbVar30;
            uVar6 = CONCAT12(pbVar21[3],uVar5);
            if ((bVar36 >> 4 & 1) == 0) {
              pbVar12 = (byte *)(((ulong)pbVar12 & 0xf) * 0x1000000 + (ulong)uVar6);
            }
            else {
              if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
              pbVar30 = pbVar19 + -5;
              *param_1 = pbVar21 + 5;
              param_1[1] = pbVar30;
              uVar11 = CONCAT13(pbVar21[4],uVar6);
              if ((bVar36 >> 3 & 1) == 0) {
                pbVar12 = (byte *)((((ulong)pbVar12 & 7) << 0x20) + (ulong)uVar11);
              }
              else {
                if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                pbVar30 = pbVar19 + -6;
                *param_1 = pbVar21 + 6;
                param_1[1] = pbVar30;
                uVar7 = CONCAT14(pbVar21[5],uVar11);
                if ((bVar36 >> 2 & 1) == 0) {
                  pbVar12 = (byte *)((((ulong)pbVar12 & 3) << 0x28) + (ulong)uVar7);
                }
                else {
                  if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                  pbVar30 = pbVar19 + -7;
                  *param_1 = pbVar21 + 7;
                  param_1[1] = pbVar30;
                  uVar8 = CONCAT15(pbVar21[6],uVar7);
                  if ((bVar36 >> 1 & 1) == 0) {
                    pbVar12 = (byte *)((((ulong)pbVar12 & 1) << 0x30) + (ulong)uVar8);
                  }
                  else {
                    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                    pbVar30 = pbVar19 + -8;
                    *param_1 = pbVar21 + 8;
                    param_1[1] = pbVar30;
                    uVar9 = CONCAT16(pbVar21[7],uVar8);
                    pbVar12 = (byte *)(ulong)uVar9;
                    if ((bVar36 & 1) != 0) {
                      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                      pbVar30 = pbVar19 + -9;
                      *param_1 = pbVar21 + 9;
                      param_1[1] = pbVar30;
                      pbVar12 = (byte *)CONCAT17(pbVar21[8],uVar9);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (pbVar30 < pbVar12) goto LAB_001a8d38;
      pbVar30 = pbVar30 + -(long)pbVar12;
      pbVar12 = *param_1 + (long)pbVar12;
      *param_1 = pbVar12;
      param_1[1] = pbVar30;
      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
    }
    pbVar30 = param_1[1];
    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
    pbVar12 = *param_1;
    *param_1 = pbVar12 + 1;
    param_1[1] = pbVar30 + -1;
    bVar36 = *pbVar12;
    uVar26 = (ulong)bVar36;
    uVar20 = uVar26;
    if ((char)*pbVar12 < '\0') {
      if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
      *param_1 = pbVar12 + 2;
      param_1[1] = pbVar30 + -2;
      bVar37 = pbVar12[1];
      if ((bVar36 >> 6 & 1) == 0) {
        uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
      }
      else {
        if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 3;
        param_1[1] = pbVar30 + -3;
        uVar5 = CONCAT11(pbVar12[2],bVar37);
        uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
        if ((bVar36 >> 5 & 1) != 0) {
          if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar12 + 4;
          param_1[1] = pbVar30 + -4;
          uVar6 = CONCAT12(pbVar12[3],uVar5);
          uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
          if ((bVar36 >> 4 & 1) != 0) {
            if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 5;
            param_1[1] = pbVar30 + -5;
            uVar11 = CONCAT13(pbVar12[4],uVar6);
            uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
            if ((bVar36 >> 3 & 1) != 0) {
              if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 6;
              param_1[1] = pbVar30 + -6;
              uVar7 = CONCAT14(pbVar12[5],uVar11);
              uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
              if ((bVar36 >> 2 & 1) != 0) {
                if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 7;
                param_1[1] = pbVar30 + -7;
                uVar8 = CONCAT15(pbVar12[6],uVar7);
                if ((bVar36 >> 1 & 1) == 0) {
                  uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                }
                else {
                  if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 8;
                  param_1[1] = pbVar30 + -8;
                  uVar9 = CONCAT16(pbVar12[7],uVar8);
                  uVar20 = (ulong)uVar9;
                  if ((bVar36 & 1) != 0) {
                    if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 9;
                    param_1[1] = pbVar30 + -9;
                    uVar20 = CONCAT17(pbVar12[8],uVar9);
                  }
                }
              }
            }
            if (0x7fffffff < uVar20) goto LAB_001a9278;
          }
        }
      }
    }
    pbVar30 = param_1[1];
    *(int *)((long)param_3 + 0x2c) = (int)uVar20;
    if (pbVar30 != (byte *)0x0) {
      pbVar12 = *param_1;
      pbVar30 = pbVar30 + -1;
      *param_1 = pbVar12 + 1;
      param_1[1] = pbVar30;
      if (*pbVar12 != 0) goto LAB_001a9278;
      if (uVar20 == 0) {
        param_3[3] = 0;
      }
      else {
        lVar17 = (**param_8)(param_8,uVar20 * 0x38);
        param_3[3] = lVar17;
        if (lVar17 == 0) goto LAB_001aa2a0;
        uVar20 = 0;
        pbVar30 = param_1[1];
        if (*(int *)((long)param_3 + 0x2c) != 0) {
          do {
            lVar32 = uVar20 * 0x38;
            uVar11 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar11;
            lVar23 = lVar17 + lVar32;
            puVar3 = (undefined8 *)(lVar17 + lVar32);
            puVar3[1] = 0;
            *puVar3 = 0;
            *(undefined8 *)(lVar23 + 0x20) = 0;
            *(undefined8 *)(lVar23 + 0x28) = 0;
            *(undefined8 *)(lVar23 + 0x30) = 0;
            *(undefined8 *)(lVar23 + 0x18) = 0;
            *(undefined8 *)(lVar23 + 0x10) = 0;
          } while (uVar11 < *(uint *)((long)param_3 + 0x2c));
          if (*(uint *)((long)param_3 + 0x2c) != 0) {
            local_70 = 0;
LAB_001a9910:
            if (pbVar30 != (byte *)0x0) {
              pbVar12 = *param_1;
              *param_1 = pbVar12 + 1;
              param_1[1] = pbVar30 + -1;
              bVar36 = *pbVar12;
              uVar26 = (ulong)bVar36;
              uVar20 = uVar26;
              if ((char)*pbVar12 < '\0') {
                if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 2;
                param_1[1] = pbVar30 + -2;
                bVar37 = pbVar12[1];
                uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
                if ((bVar36 >> 6 & 1) != 0) {
                  if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 3;
                  param_1[1] = pbVar30 + -3;
                  uVar5 = CONCAT11(pbVar12[2],bVar37);
                  uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
                  if ((bVar36 >> 5 & 1) != 0) {
                    if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 4;
                    param_1[1] = pbVar30 + -4;
                    uVar6 = CONCAT12(pbVar12[3],uVar5);
                    uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
                    if ((bVar36 >> 4 & 1) != 0) {
                      if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 5;
                      param_1[1] = pbVar30 + -5;
                      uVar11 = CONCAT13(pbVar12[4],uVar6);
                      uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
                      if ((bVar36 >> 3 & 1) != 0) {
                        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 6;
                        param_1[1] = pbVar30 + -6;
                        uVar7 = CONCAT14(pbVar12[5],uVar11);
                        uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                        if ((bVar36 >> 2 & 1) != 0) {
                          if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar12 + 7;
                          param_1[1] = pbVar30 + -7;
                          uVar8 = CONCAT15(pbVar12[6],uVar7);
                          if ((bVar36 >> 1 & 1) == 0) {
                            uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                          }
                          else {
                            if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 8;
                            param_1[1] = pbVar30 + -8;
                            uVar9 = CONCAT16(pbVar12[7],uVar8);
                            uVar20 = (ulong)uVar9;
                            if ((bVar36 & 1) != 0) {
                              if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                              *param_1 = pbVar12 + 9;
                              param_1[1] = pbVar30 + -9;
                              uVar20 = CONCAT17(pbVar12[8],uVar9);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar48 = (int)uVar20;
              if (0x20 < uVar20) goto LAB_001a9278;
              plVar29 = (long *)(lVar17 + local_70 * 0x38);
              *(int *)(plVar29 + 4) = iVar48;
              if (iVar48 != 0) {
                lVar23 = (**param_8)(param_8,uVar20 << 5);
                *(long *)(lVar17 + local_70 * 0x38) = lVar23;
                if (lVar23 != 0) {
                  for (lVar17 = 0; Buf_Init(lVar23 + lVar17 + 0x10),
                      (ulong)(iVar48 - 1) << 5 != lVar17; lVar17 = lVar17 + 0x20) {
                    lVar23 = *plVar29;
                  }
                  lVar17 = 0;
                  iVar49 = 0;
                  uVar11 = 0;
LAB_001aa748:
                  pbVar30 = param_1[1];
                  puVar3 = (undefined8 *)(*plVar29 + lVar17);
                  if (pbVar30 != (byte *)0x0) {
                    pbVar12 = *param_1;
                    pbVar19 = pbVar30 + -1;
                    *param_1 = pbVar12 + 1;
                    param_1[1] = pbVar19;
                    bVar36 = *pbVar12;
                    uVar20 = (ulong)bVar36;
                    uVar10 = bVar36 & 0xf;
                    if ((bVar36 & 0xf) == 0) {
                      puVar3[1] = 0;
                    }
                    else {
                      pbVar12 = pbVar12 + 2;
                      pbVar21 = pbVar19;
                      do {
                        if (pbVar21 == (byte *)0x0) goto LAB_001aa7c0;
                        pbVar27 = pbVar21 + -1;
                        *param_1 = pbVar12;
                        param_1[1] = pbVar27;
                        (abStack_18 + (long)pbVar30)[-1 - (long)pbVar21] = pbVar12[-1];
                        pbVar12 = pbVar12 + 1;
                        pbVar21 = pbVar27;
                      } while (pbVar27 != pbVar19 + -(uVar20 & 0xf));
                      if (8 < uVar10) goto LAB_001a9278;
                      puVar3[1] = 0;
                      if ((bVar36 & 0xf) != 0) {
                        bVar37 = abStack_18[uVar10 - 1];
                        uVar26 = (ulong)bVar37;
                        if (uVar10 - 1 != 0) {
                          uVar5 = CONCAT11(abStack_18[uVar10 - 2],bVar37);
                          uVar26 = (ulong)uVar5;
                          if (uVar10 - 2 != 0) {
                            uVar6 = CONCAT12(abStack_18[uVar10 - 3],uVar5);
                            uVar26 = (ulong)uVar6;
                            if (uVar10 - 3 != 0) {
                              uVar33 = CONCAT13(abStack_18[uVar10 - 4],uVar6);
                              uVar26 = (ulong)uVar33;
                              if (uVar10 - 4 != 0) {
                                uVar7 = CONCAT14(abStack_18[uVar10 - 5],uVar33);
                                uVar26 = (ulong)uVar7;
                                if (uVar10 - 5 != 0) {
                                  uVar8 = CONCAT15(abStack_18[uVar10 - 6],uVar7);
                                  uVar26 = (ulong)uVar8;
                                  if (uVar10 - 6 != 0) {
                                    uVar9 = CONCAT16(abStack_18[uVar10 - 7],uVar8);
                                    uVar26 = (ulong)uVar9;
                                    if ((uVar10 - 7 != 0) &&
                                       (uVar26 = CONCAT17(abStack_18[uVar10 - 8],uVar9),
                                       uVar10 - 8 != 0)) {
                                      uVar26 = uVar26 | abStack_18[uVar10 - 9];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        puVar3[1] = uVar26;
                      }
                    }
                    if ((bVar36 >> 4 & 1) == 0) {
                      *puVar3 = 0x100000001;
joined_r0x001aa888:
                      if ((bVar36 >> 5 & 1) != 0) {
                        pbVar30 = param_1[1];
                        if (pbVar30 == (byte *)0x0) goto LAB_001aa7c0;
                        pbVar12 = *param_1;
                        *param_1 = pbVar12 + 1;
                        param_1[1] = pbVar30 + -1;
                        bVar37 = *pbVar12;
                        if ((char)*pbVar12 < '\0') {
                          if (pbVar30 + -1 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 2;
                          param_1[1] = pbVar30 + -2;
                          bVar38 = pbVar12[1];
                          uVar20 = (ulong)bVar38;
                          if ((bVar37 >> 6 & 1) == 0) {
                            iVar50 = 1;
                            iVar51 = 0x40;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -2 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 3;
                          param_1[1] = pbVar30 + -3;
                          uVar5 = CONCAT11(pbVar12[2],bVar38);
                          uVar20 = (ulong)uVar5;
                          if ((bVar37 >> 5 & 1) == 0) {
                            iVar50 = 2;
                            iVar51 = 0x20;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -3 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 4;
                          param_1[1] = pbVar30 + -4;
                          uVar6 = CONCAT12(pbVar12[3],uVar5);
                          uVar20 = (ulong)uVar6;
                          if ((bVar37 >> 4 & 1) == 0) {
                            iVar50 = 3;
                            iVar51 = 0x10;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -4 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 5;
                          param_1[1] = pbVar30 + -5;
                          uVar10 = CONCAT13(pbVar12[4],uVar6);
                          uVar20 = (ulong)uVar10;
                          if ((bVar37 >> 3 & 1) == 0) {
                            iVar50 = 4;
                            iVar51 = 8;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -5 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 6;
                          param_1[1] = pbVar30 + -6;
                          uVar7 = CONCAT14(pbVar12[5],uVar10);
                          uVar20 = (ulong)uVar7;
                          if ((bVar37 >> 2 & 1) == 0) {
                            iVar50 = 5;
                            iVar51 = 4;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -6 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 7;
                          param_1[1] = pbVar30 + -7;
                          uVar8 = CONCAT15(pbVar12[6],uVar7);
                          uVar20 = (ulong)uVar8;
                          if ((bVar37 >> 1 & 1) == 0) {
                            iVar50 = 6;
                            iVar51 = 2;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -7 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 8;
                          param_1[1] = pbVar30 + -8;
                          uVar9 = CONCAT16(pbVar12[7],uVar8);
                          uVar20 = (ulong)uVar9;
                          if ((bVar37 & 1) == 0) {
                            iVar51 = 1;
                            iVar50 = 7;
                            goto LAB_001ac980;
                          }
                          if (pbVar30 + -8 == (byte *)0x0) goto LAB_001aa7c0;
                          param_1[1] = pbVar30 + -9;
                          *param_1 = pbVar12 + 9;
                          lVar23 = CONCAT17(pbVar12[8],uVar9);
                        }
                        else {
                          uVar20 = 0;
                          iVar50 = 0;
                          iVar51 = 0x80;
LAB_001ac980:
                          lVar23 = ((long)(int)(iVar51 - 1U & (uint)bVar37) << (iVar50 << 3)) +
                                   uVar20;
                        }
                        iVar50 = Buf_Create(puVar3 + 2,lVar23,param_8);
                        if (iVar50 == 0) goto LAB_001aa2a0;
                        uVar20 = (ulong)bVar36;
                        pbVar30 = (byte *)puVar3[2];
                        if (lVar23 != 0) {
                          pbVar12 = pbVar30;
                          do {
                            if (param_1[1] == (byte *)0x0) goto LAB_001aa7c0;
                            pbVar21 = *param_1;
                            param_1[1] = param_1[1] + -1;
                            *param_1 = pbVar21 + 1;
                            pbVar19 = pbVar12 + 1;
                            *pbVar12 = *pbVar21;
                            pbVar12 = pbVar19;
                          } while (pbVar30 + lVar23 != pbVar19);
                        }
                      }
                      while ((uint)uVar20 >> 7 != 0) {
                        if (param_1[1] == (byte *)0x0) goto LAB_001a8d38;
                        pbVar19 = *param_1;
                        pbVar12 = param_1[1] + -1;
                        pbVar30 = pbVar19 + 1;
                        *param_1 = pbVar30;
                        param_1[1] = pbVar12;
                        bVar36 = *pbVar19;
                        uVar20 = (ulong)bVar36;
                        pbVar19 = (byte *)(uVar20 & 0xf);
                        if (pbVar12 < pbVar19) goto LAB_001a8d38;
                        pbVar12 = pbVar12 + -(long)pbVar19;
                        pbVar21 = pbVar30 + (long)pbVar19;
                        *param_1 = pbVar21;
                        param_1[1] = pbVar12;
                        if ((bVar36 >> 4 & 1) != 0) {
                          if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar21 + 1;
                          param_1[1] = pbVar12 + -1;
                          bVar37 = pbVar30[(long)pbVar19];
                          if ((char)pbVar30[(long)pbVar19] < '\0') {
                            if (pbVar12 + -1 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 2;
                            param_1[1] = pbVar12 + -2;
                            bVar38 = pbVar21[1];
                            uVar26 = (ulong)bVar38;
                            if ((bVar37 >> 6 & 1) == 0) {
                              iVar50 = 1;
                              iVar51 = 0x40;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -2 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 3;
                            param_1[1] = pbVar12 + -3;
                            uVar5 = CONCAT11(pbVar21[2],bVar38);
                            uVar26 = (ulong)uVar5;
                            if ((bVar37 >> 5 & 1) == 0) {
                              iVar50 = 2;
                              iVar51 = 0x20;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -3 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 4;
                            param_1[1] = pbVar12 + -4;
                            uVar6 = CONCAT12(pbVar21[3],uVar5);
                            uVar26 = (ulong)uVar6;
                            if ((bVar37 >> 4 & 1) == 0) {
                              iVar50 = 3;
                              iVar51 = 0x10;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -4 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 5;
                            param_1[1] = pbVar12 + -5;
                            uVar10 = CONCAT13(pbVar21[4],uVar6);
                            uVar26 = (ulong)uVar10;
                            if ((bVar37 >> 3 & 1) == 0) {
                              iVar50 = 4;
                              iVar51 = 8;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -5 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 6;
                            param_1[1] = pbVar12 + -6;
                            uVar7 = CONCAT14(pbVar21[5],uVar10);
                            uVar26 = (ulong)uVar7;
                            if ((bVar37 >> 2 & 1) == 0) {
                              iVar50 = 5;
                              iVar51 = 4;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -6 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 7;
                            param_1[1] = pbVar12 + -7;
                            uVar8 = CONCAT15(pbVar21[6],uVar7);
                            uVar26 = (ulong)uVar8;
                            if ((bVar37 >> 1 & 1) == 0) {
                              iVar50 = 6;
                              iVar51 = 2;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -7 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar21 + 8;
                            param_1[1] = pbVar12 + -8;
                            uVar9 = CONCAT16(pbVar21[7],uVar8);
                            uVar26 = (ulong)uVar9;
                            if ((bVar37 & 1) == 0) {
                              iVar51 = 1;
                              iVar50 = 7;
                              goto LAB_001ac6b4;
                            }
                            if (pbVar12 + -8 == (byte *)0x0) goto LAB_001a8d38;
                            param_1[1] = pbVar12 + -9;
                            *param_1 = pbVar21 + 9;
                            uVar26 = CONCAT17(pbVar21[8],uVar9);
                          }
                          else {
                            uVar26 = 0;
                            iVar50 = 0;
                            iVar51 = 0x80;
LAB_001ac6b4:
                            uVar26 = ((long)(int)(iVar51 - 1U & (uint)bVar37) << (iVar50 << 3)) +
                                     uVar26;
                          }
                          if (0x7fffffff < uVar26) goto LAB_001a9278;
                          pbVar30 = param_1[1];
                          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                          pbVar12 = *param_1;
                          *param_1 = pbVar12 + 1;
                          param_1[1] = pbVar30 + -1;
                          bVar37 = *pbVar12;
                          if ((char)*pbVar12 < '\0') {
                            if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 2;
                            param_1[1] = pbVar30 + -2;
                            bVar38 = pbVar12[1];
                            uVar26 = (ulong)bVar38;
                            if ((bVar37 >> 6 & 1) == 0) {
                              iVar50 = 1;
                              iVar51 = 0x40;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 3;
                            param_1[1] = pbVar30 + -3;
                            uVar5 = CONCAT11(pbVar12[2],bVar38);
                            uVar26 = (ulong)uVar5;
                            if ((bVar37 >> 5 & 1) == 0) {
                              iVar50 = 2;
                              iVar51 = 0x20;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 4;
                            param_1[1] = pbVar30 + -4;
                            uVar6 = CONCAT12(pbVar12[3],uVar5);
                            uVar26 = (ulong)uVar6;
                            if ((bVar37 >> 4 & 1) == 0) {
                              iVar50 = 3;
                              iVar51 = 0x10;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 5;
                            param_1[1] = pbVar30 + -5;
                            uVar10 = CONCAT13(pbVar12[4],uVar6);
                            uVar26 = (ulong)uVar10;
                            if ((bVar37 >> 3 & 1) == 0) {
                              iVar50 = 4;
                              iVar51 = 8;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 6;
                            param_1[1] = pbVar30 + -6;
                            uVar7 = CONCAT14(pbVar12[5],uVar10);
                            uVar26 = (ulong)uVar7;
                            if ((bVar37 >> 2 & 1) == 0) {
                              iVar50 = 5;
                              iVar51 = 4;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 7;
                            param_1[1] = pbVar30 + -7;
                            uVar8 = CONCAT15(pbVar12[6],uVar7);
                            uVar26 = (ulong)uVar8;
                            if ((bVar37 >> 1 & 1) == 0) {
                              iVar50 = 6;
                              iVar51 = 2;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 8;
                            param_1[1] = pbVar30 + -8;
                            uVar9 = CONCAT16(pbVar12[7],uVar8);
                            uVar26 = (ulong)uVar9;
                            if ((bVar37 & 1) == 0) {
                              iVar51 = 1;
                              iVar50 = 7;
                              goto LAB_001ac890;
                            }
                            if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                            param_1[1] = pbVar30 + -9;
                            *param_1 = pbVar12 + 9;
                            uVar26 = CONCAT17(pbVar12[8],uVar9);
                          }
                          else {
                            uVar26 = 0;
                            iVar50 = 0;
                            iVar51 = 0x80;
LAB_001ac890:
                            uVar26 = ((long)(int)(iVar51 - 1U & (uint)bVar37) << (iVar50 << 3)) +
                                     uVar26;
                          }
                          if (0x7fffffff < uVar26) goto LAB_001a9278;
                        }
                        if ((bVar36 >> 5 & 1) != 0) {
                          pbVar30 = param_1[1];
                          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                          pbVar12 = *param_1;
                          *param_1 = pbVar12 + 1;
                          param_1[1] = pbVar30 + -1;
                          bVar36 = *pbVar12;
                          if ((char)*pbVar12 < '\0') {
                            if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 2;
                            param_1[1] = pbVar30 + -2;
                            bVar37 = pbVar12[1];
                            uVar26 = (ulong)bVar37;
                            if ((bVar36 >> 6 & 1) == 0) {
                              iVar50 = 1;
                              iVar51 = 0x40;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 3;
                            param_1[1] = pbVar30 + -3;
                            uVar5 = CONCAT11(pbVar12[2],bVar37);
                            uVar26 = (ulong)uVar5;
                            if ((bVar36 >> 5 & 1) == 0) {
                              iVar50 = 2;
                              iVar51 = 0x20;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 4;
                            param_1[1] = pbVar30 + -4;
                            uVar6 = CONCAT12(pbVar12[3],uVar5);
                            uVar26 = (ulong)uVar6;
                            if ((bVar36 >> 4 & 1) == 0) {
                              iVar50 = 3;
                              iVar51 = 0x10;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 5;
                            param_1[1] = pbVar30 + -5;
                            uVar10 = CONCAT13(pbVar12[4],uVar6);
                            uVar26 = (ulong)uVar10;
                            if ((bVar36 >> 3 & 1) == 0) {
                              iVar50 = 4;
                              iVar51 = 8;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 6;
                            param_1[1] = pbVar30 + -6;
                            uVar7 = CONCAT14(pbVar12[5],uVar10);
                            uVar26 = (ulong)uVar7;
                            if ((bVar36 >> 2 & 1) == 0) {
                              iVar50 = 5;
                              iVar51 = 4;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 7;
                            param_1[1] = pbVar30 + -7;
                            uVar8 = CONCAT15(pbVar12[6],uVar7);
                            uVar26 = (ulong)uVar8;
                            if ((bVar36 >> 1 & 1) == 0) {
                              iVar50 = 6;
                              iVar51 = 2;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 8;
                            param_1[1] = pbVar30 + -8;
                            uVar9 = CONCAT16(pbVar12[7],uVar8);
                            uVar26 = (ulong)uVar9;
                            if ((bVar36 & 1) == 0) {
                              iVar51 = 1;
                              iVar50 = 7;
                              goto LAB_001ac708;
                            }
                            if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                            pbVar30 = pbVar30 + -9;
                            *param_1 = pbVar12 + 9;
                            param_1[1] = pbVar30;
                            pbVar12 = (byte *)CONCAT17(pbVar12[8],uVar9);
                          }
                          else {
                            uVar26 = 0;
                            iVar50 = 0;
                            iVar51 = 0x80;
LAB_001ac708:
                            pbVar30 = param_1[1];
                            pbVar12 = (byte *)(((long)(int)(iVar51 - 1U & (uint)bVar36) <<
                                               (iVar50 << 3)) + uVar26);
                          }
                          if (pbVar30 < pbVar12) goto LAB_001a8d38;
                          *param_1 = *param_1 + (long)pbVar12;
                          param_1[1] = pbVar30 + -(long)pbVar12;
                        }
                      }
                      lVar17 = lVar17 + 0x20;
                      uVar11 = uVar11 + *(int *)puVar3;
                      iVar49 = iVar49 + *(int *)((long)puVar3 + 4);
                      if (((ulong)(iVar48 - 1) + 1) * 0x20 == lVar17) goto code_r0x001ac3b8;
                      goto LAB_001aa748;
                    }
                    pbVar30 = param_1[1];
                    if (pbVar30 != (byte *)0x0) {
                      pbVar12 = *param_1;
                      *param_1 = pbVar12 + 1;
                      param_1[1] = pbVar30 + -1;
                      bVar37 = *pbVar12;
                      if ((char)*pbVar12 < '\0') {
                        if (pbVar30 + -1 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 2;
                        param_1[1] = pbVar30 + -2;
                        bVar38 = pbVar12[1];
                        uVar26 = (ulong)bVar38;
                        if ((bVar37 >> 6 & 1) == 0) {
                          lVar23 = 8;
                          uVar10 = 0x3f;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -2 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 3;
                        param_1[1] = pbVar30 + -3;
                        uVar5 = CONCAT11(pbVar12[2],bVar38);
                        uVar26 = (ulong)uVar5;
                        if ((bVar37 >> 5 & 1) == 0) {
                          lVar23 = 0x10;
                          uVar10 = 0x1f;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -3 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 4;
                        param_1[1] = pbVar30 + -4;
                        uVar6 = CONCAT12(pbVar12[3],uVar5);
                        uVar26 = (ulong)uVar6;
                        if ((bVar37 >> 4 & 1) == 0) {
                          lVar23 = 0x18;
                          uVar10 = 0xf;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -4 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 5;
                        param_1[1] = pbVar30 + -5;
                        uVar10 = CONCAT13(pbVar12[4],uVar6);
                        uVar26 = (ulong)uVar10;
                        if ((bVar37 >> 3 & 1) == 0) {
                          lVar23 = 0x20;
                          uVar10 = 7;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 6;
                        param_1[1] = pbVar30 + -6;
                        uVar7 = CONCAT14(pbVar12[5],uVar10);
                        uVar26 = (ulong)uVar7;
                        if ((bVar37 >> 2 & 1) == 0) {
                          lVar23 = 0x28;
                          uVar10 = 3;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -6 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 7;
                        param_1[1] = pbVar30 + -7;
                        uVar8 = CONCAT15(pbVar12[6],uVar7);
                        uVar26 = (ulong)uVar8;
                        if ((bVar37 >> 1 & 1) == 0) {
                          lVar23 = 0x30;
                          uVar10 = 1;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -7 == (byte *)0x0) goto LAB_001aa7c0;
                        *param_1 = pbVar12 + 8;
                        param_1[1] = pbVar30 + -8;
                        uVar9 = CONCAT16(pbVar12[7],uVar8);
                        uVar26 = (ulong)uVar9;
                        if ((bVar37 & 1) == 0) {
                          lVar23 = 0x38;
                          uVar10 = 0;
                          goto LAB_001ac604;
                        }
                        if (pbVar30 + -8 == (byte *)0x0) goto LAB_001aa7c0;
                        param_1[1] = pbVar30 + -9;
                        *param_1 = pbVar12 + 9;
                        uVar26 = CONCAT17(pbVar12[8],uVar9);
                      }
                      else {
                        lVar23 = 0;
                        uVar10 = 0x7f;
                        uVar26 = 0;
LAB_001ac604:
                        uVar26 = ((long)(int)(bVar37 & uVar10) << lVar23) + uVar26;
                      }
                      if (uVar26 < 0x80000000) {
                        pbVar30 = param_1[1];
                        *(int *)puVar3 = (int)uVar26;
                        if (pbVar30 == (byte *)0x0) goto LAB_001aa7c0;
                        pbVar12 = *param_1;
                        *param_1 = pbVar12 + 1;
                        param_1[1] = pbVar30 + -1;
                        bVar37 = *pbVar12;
                        if ((char)*pbVar12 < '\0') {
                          if (pbVar30 + -1 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 2;
                          param_1[1] = pbVar30 + -2;
                          bVar38 = pbVar12[1];
                          uVar25 = (ulong)bVar38;
                          if ((bVar37 >> 6 & 1) == 0) {
                            iVar50 = 1;
                            iVar51 = 0x40;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -2 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 3;
                          param_1[1] = pbVar30 + -3;
                          uVar5 = CONCAT11(pbVar12[2],bVar38);
                          uVar25 = (ulong)uVar5;
                          if ((bVar37 >> 5 & 1) == 0) {
                            iVar50 = 2;
                            iVar51 = 0x20;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -3 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 4;
                          param_1[1] = pbVar30 + -4;
                          uVar6 = CONCAT12(pbVar12[3],uVar5);
                          uVar25 = (ulong)uVar6;
                          if ((bVar37 >> 4 & 1) == 0) {
                            iVar50 = 3;
                            iVar51 = 0x10;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -4 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 5;
                          param_1[1] = pbVar30 + -5;
                          uVar10 = CONCAT13(pbVar12[4],uVar6);
                          uVar25 = (ulong)uVar10;
                          if ((bVar37 >> 3 & 1) == 0) {
                            iVar50 = 4;
                            iVar51 = 8;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -5 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 6;
                          param_1[1] = pbVar30 + -6;
                          uVar7 = CONCAT14(pbVar12[5],uVar10);
                          uVar25 = (ulong)uVar7;
                          if ((bVar37 >> 2 & 1) == 0) {
                            iVar50 = 5;
                            iVar51 = 4;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -6 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 7;
                          param_1[1] = pbVar30 + -7;
                          uVar8 = CONCAT15(pbVar12[6],uVar7);
                          uVar25 = (ulong)uVar8;
                          if ((bVar37 >> 1 & 1) == 0) {
                            iVar50 = 6;
                            iVar51 = 2;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -7 == (byte *)0x0) goto LAB_001aa7c0;
                          *param_1 = pbVar12 + 8;
                          param_1[1] = pbVar30 + -8;
                          uVar9 = CONCAT16(pbVar12[7],uVar8);
                          uVar25 = (ulong)uVar9;
                          if ((bVar37 & 1) == 0) {
                            iVar51 = 1;
                            iVar50 = 7;
                            goto LAB_001ac768;
                          }
                          if (pbVar30 + -8 == (byte *)0x0) goto LAB_001aa7c0;
                          param_1[1] = pbVar30 + -9;
                          *param_1 = pbVar12 + 9;
                          uVar25 = CONCAT17(pbVar12[8],uVar9);
                        }
                        else {
                          uVar25 = 0;
                          iVar50 = 0;
                          iVar51 = 0x80;
LAB_001ac768:
                          uVar25 = ((long)(int)(iVar51 - 1U & (uint)bVar37) << (iVar50 << 3)) +
                                   uVar25;
                        }
                        if ((uVar25 < 0x80000000) &&
                           (*(int *)((long)puVar3 + 4) = (int)uVar25,
                           uVar26 < 0x21 && uVar25 < 0x20 || uVar26 < 0x21 && uVar25 == 0x20))
                        goto joined_r0x001aa888;
                      }
                      goto LAB_001a9278;
                    }
                  }
LAB_001aa7c0:
                  uVar20 = 0x10;
                  goto LAB_001a8d3c;
                }
                goto LAB_001aa2a0;
              }
              uVar20 = 4;
              *plVar29 = 0;
              goto LAB_001a8d3c;
            }
            goto LAB_001a8d38;
          }
        }
      }
LAB_001aa32c:
      if (pbVar30 != (byte *)0x0) {
        pbVar12 = *param_1;
        while( true ) {
          *param_1 = pbVar12 + 1;
          param_1[1] = pbVar30 + -1;
          bVar36 = *pbVar12;
          uVar26 = (ulong)bVar36;
          uVar20 = uVar26;
          if ((char)*pbVar12 < '\0') {
            if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 2;
            param_1[1] = pbVar30 + -2;
            bVar37 = pbVar12[1];
            uVar20 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
            if ((bVar36 >> 6 & 1) != 0) {
              if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 3;
              param_1[1] = pbVar30 + -3;
              uVar5 = CONCAT11(pbVar12[2],bVar37);
              uVar20 = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
              if ((bVar36 >> 5 & 1) != 0) {
                if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 4;
                param_1[1] = pbVar30 + -4;
                uVar6 = CONCAT12(pbVar12[3],uVar5);
                uVar20 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
                if ((bVar36 >> 4 & 1) != 0) {
                  if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 5;
                  param_1[1] = pbVar30 + -5;
                  uVar11 = CONCAT13(pbVar12[4],uVar6);
                  uVar20 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
                  if ((bVar36 >> 3 & 1) != 0) {
                    if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 6;
                    param_1[1] = pbVar30 + -6;
                    uVar7 = CONCAT14(pbVar12[5],uVar11);
                    uVar20 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                    if ((bVar36 >> 2 & 1) != 0) {
                      if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 7;
                      param_1[1] = pbVar30 + -7;
                      uVar8 = CONCAT15(pbVar12[6],uVar7);
                      if ((bVar36 >> 1 & 1) == 0) {
                        uVar20 = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                      }
                      else {
                        if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 8;
                        param_1[1] = pbVar30 + -8;
                        uVar9 = CONCAT16(pbVar12[7],uVar8);
                        uVar20 = (ulong)uVar9;
                        if ((bVar36 & 1) != 0) {
                          if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar12 + 9;
                          param_1[1] = pbVar30 + -9;
                          uVar20 = CONCAT17(pbVar12[8],uVar9);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (uVar20 == 0xc) break;
          if ((uVar20 == 0) || (pbVar19 = param_1[1], pbVar19 == (byte *)0x0)) goto LAB_001a8d38;
          pbVar21 = *param_1;
          pbVar30 = pbVar19 + -1;
          *param_1 = pbVar21 + 1;
          param_1[1] = pbVar30;
          bVar36 = *pbVar21;
          pbVar27 = (byte *)(ulong)bVar36;
          pbVar12 = pbVar27;
          if ((char)*pbVar21 < '\0') {
            if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
            pbVar30 = pbVar19 + -2;
            *param_1 = pbVar21 + 2;
            param_1[1] = pbVar30;
            bVar37 = pbVar21[1];
            pbVar12 = (byte *)(((ulong)pbVar27 & 0x3f) * 0x100 + (ulong)bVar37);
            if ((bVar36 >> 6 & 1) != 0) {
              if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
              pbVar30 = pbVar19 + -3;
              *param_1 = pbVar21 + 3;
              param_1[1] = pbVar30;
              uVar5 = CONCAT11(pbVar21[2],bVar37);
              pbVar12 = (byte *)(((ulong)pbVar27 & 0x1f) * 0x10000 + (ulong)uVar5);
              if ((bVar36 >> 5 & 1) != 0) {
                if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                pbVar30 = pbVar19 + -4;
                *param_1 = pbVar21 + 4;
                param_1[1] = pbVar30;
                uVar6 = CONCAT12(pbVar21[3],uVar5);
                pbVar12 = (byte *)(((ulong)pbVar27 & 0xf) * 0x1000000 + (ulong)uVar6);
                if ((bVar36 >> 4 & 1) != 0) {
                  if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                  pbVar30 = pbVar19 + -5;
                  *param_1 = pbVar21 + 5;
                  param_1[1] = pbVar30;
                  uVar11 = CONCAT13(pbVar21[4],uVar6);
                  pbVar12 = (byte *)((((ulong)pbVar27 & 7) << 0x20) + (ulong)uVar11);
                  if ((bVar36 >> 3 & 1) != 0) {
                    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                    pbVar30 = pbVar19 + -6;
                    *param_1 = pbVar21 + 6;
                    param_1[1] = pbVar30;
                    uVar7 = CONCAT14(pbVar21[5],uVar11);
                    pbVar12 = (byte *)((((ulong)pbVar27 & 3) << 0x28) + (ulong)uVar7);
                    if ((bVar36 >> 2 & 1) != 0) {
                      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                      pbVar30 = pbVar19 + -7;
                      *param_1 = pbVar21 + 7;
                      param_1[1] = pbVar30;
                      uVar8 = CONCAT15(pbVar21[6],uVar7);
                      if ((bVar36 >> 1 & 1) == 0) {
                        pbVar12 = (byte *)((((ulong)pbVar27 & 1) << 0x30) + (ulong)uVar8);
                      }
                      else {
                        if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                        pbVar30 = pbVar19 + -8;
                        *param_1 = pbVar21 + 8;
                        param_1[1] = pbVar30;
                        uVar9 = CONCAT16(pbVar21[7],uVar8);
                        pbVar12 = (byte *)(ulong)uVar9;
                        if ((bVar36 & 1) != 0) {
                          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                          pbVar30 = pbVar19 + -9;
                          *param_1 = pbVar21 + 9;
                          param_1[1] = pbVar30;
                          pbVar12 = (byte *)CONCAT17(pbVar21[8],uVar9);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (pbVar30 < pbVar12) goto LAB_001a8d38;
          pbVar30 = pbVar30 + -(long)pbVar12;
          pbVar12 = *param_1 + (long)pbVar12;
          *param_1 = pbVar12;
          param_1[1] = pbVar30;
          if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
        }
        uVar11 = *(uint *)((long)param_3 + 0x2c);
        uVar20 = 0;
        if (uVar11 != 0) {
LAB_001abd58:
          lVar17 = param_3[3] + uVar20 * 0x38;
          if (*(int *)(lVar17 + 0x20) != 0) {
            lVar23 = *(long *)(param_3[3] + uVar20 * 0x38);
            uVar26 = 0;
            piVar16 = (int *)(lVar23 + 4);
            do {
              piVar22 = piVar16 + 8;
              uVar10 = (int)uVar26 + *piVar16;
              uVar26 = (ulong)uVar10;
              piVar16 = piVar22;
            } while (piVar22 != (int *)(lVar23 + 0x24 + (ulong)(*(int *)(lVar17 + 0x20) - 1) * 0x20)
                    );
            if (uVar10 != 0) {
              lVar23 = (**param_8)(param_8,uVar26 << 3);
              *(long *)(lVar17 + 0x18) = lVar23;
              if (lVar23 != 0) {
                lVar17 = 0;
LAB_001abf10:
                pbVar30 = param_1[1];
                if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
                pbVar12 = *param_1;
                *param_1 = pbVar12 + 1;
                param_1[1] = pbVar30 + -1;
                bVar36 = *pbVar12;
                uVar26 = (ulong)bVar36;
                *(undefined8 *)(lVar23 + lVar17 * 8) = 0;
                if ((char)bVar36 < '\0') {
                  if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 2;
                  param_1[1] = pbVar30 + -2;
                  bVar37 = pbVar12[1];
                  *(ulong *)(lVar23 + lVar17 * 8) = (ulong)bVar37;
                  uVar25 = (uVar26 & 0x3f) * 0x100 + (ulong)bVar37;
                  if ((bVar36 >> 6 & 1) != 0) {
                    if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 3;
                    param_1[1] = pbVar30 + -3;
                    uVar5 = CONCAT11(pbVar12[2],bVar37);
                    *(ulong *)(lVar23 + lVar17 * 8) = (ulong)uVar5;
                    if ((bVar36 >> 5 & 1) == 0) {
                      *(ulong *)(lVar23 + lVar17 * 8) = (uVar26 & 0x1f) * 0x10000 + (ulong)uVar5;
                      goto LAB_001abf04;
                    }
                    if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 4;
                    param_1[1] = pbVar30 + -4;
                    uVar6 = CONCAT12(pbVar12[3],uVar5);
                    *(ulong *)(lVar23 + lVar17 * 8) = (ulong)uVar6;
                    if ((bVar36 >> 4 & 1) == 0) {
                      uVar25 = (uVar26 & 0xf) * 0x1000000 + (ulong)uVar6;
                    }
                    else {
                      if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 5;
                      param_1[1] = pbVar30 + -5;
                      uVar11 = CONCAT13(pbVar12[4],uVar6);
                      *(ulong *)(lVar23 + lVar17 * 8) = (ulong)uVar11;
                      uVar25 = ((uVar26 & 7) << 0x20) + (ulong)uVar11;
                      if ((bVar36 >> 3 & 1) != 0) {
                        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 6;
                        param_1[1] = pbVar30 + -6;
                        uVar7 = CONCAT14(pbVar12[5],uVar11);
                        *(ulong *)(lVar23 + lVar17 * 8) = (ulong)uVar7;
                        uVar25 = ((uVar26 & 3) << 0x28) + (ulong)uVar7;
                        if ((bVar36 >> 2 & 1) != 0) {
                          if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar12 + 7;
                          param_1[1] = pbVar30 + -7;
                          uVar8 = CONCAT15(pbVar12[6],uVar7);
                          *(ulong *)(lVar23 + lVar17 * 8) = (ulong)uVar8;
                          if ((bVar36 >> 1 & 1) != 0) {
                            if (pbVar30 + -7 != (byte *)0x0) {
                              *param_1 = pbVar12 + 8;
                              param_1[1] = pbVar30 + -8;
                              bVar37 = pbVar12[7];
                              uVar25 = (ulong)CONCAT16(bVar37,uVar8);
                              *(ulong *)(lVar23 + lVar17 * 8) = uVar25;
                              if ((bVar36 & 1) == 0) goto LAB_001abf5c;
                              if (pbVar30 + -8 != (byte *)0x0) {
                                param_1[1] = pbVar30 + -9;
                                *param_1 = pbVar12 + 9;
                                *(ulong *)(lVar23 + lVar17 * 8) =
                                     CONCAT17(pbVar12[8],CONCAT16(bVar37,uVar8));
                                goto LAB_001abf04;
                              }
                            }
                            goto LAB_001a8d38;
                          }
                          *(ulong *)(lVar23 + lVar17 * 8) = ((uVar26 & 1) << 0x30) + (ulong)uVar8;
                          goto LAB_001abf04;
                        }
                      }
                    }
                  }
LAB_001abf5c:
                  *(ulong *)(lVar23 + lVar17 * 8) = uVar25;
                }
                else {
                  *(ulong *)(lVar23 + lVar17 * 8) = uVar26;
                }
LAB_001abf04:
                lVar17 = lVar17 + 1;
                if (uVar10 <= (uint)lVar17) goto LAB_001ac1b4;
                goto LAB_001abf10;
              }
              goto LAB_001aa2a0;
            }
          }
          *(undefined8 *)(lVar17 + 0x18) = 0;
          goto LAB_001abf74;
        }
LAB_001abf80:
        pbVar30 = param_1[1];
        if (pbVar30 != (byte *)0x0) {
          do {
            pbVar12 = *param_1;
            *param_1 = pbVar12 + 1;
            param_1[1] = pbVar30 + -1;
            bVar36 = *pbVar12;
            if ((char)*pbVar12 < '\0') {
              if (pbVar30 + -1 == (byte *)0x0) break;
              *param_1 = pbVar12 + 2;
              param_1[1] = pbVar30 + -2;
              bVar37 = pbVar12[1];
              uVar20 = (ulong)bVar37;
              if ((bVar36 >> 6 & 1) == 0) {
                iVar48 = 1;
                iVar49 = 0x40;
                goto LAB_001aca48;
              }
              if (pbVar30 + -2 == (byte *)0x0) break;
              *param_1 = pbVar12 + 3;
              param_1[1] = pbVar30 + -3;
              uVar5 = CONCAT11(pbVar12[2],bVar37);
              uVar20 = (ulong)uVar5;
              if ((bVar36 >> 5 & 1) == 0) {
                iVar48 = 2;
                iVar49 = 0x20;
                goto LAB_001aca48;
              }
              if (pbVar30 + -3 == (byte *)0x0) break;
              *param_1 = pbVar12 + 4;
              param_1[1] = pbVar30 + -4;
              uVar6 = CONCAT12(pbVar12[3],uVar5);
              uVar20 = (ulong)uVar6;
              if ((bVar36 >> 4 & 1) == 0) {
                iVar48 = 3;
                iVar49 = 0x10;
                goto LAB_001aca48;
              }
              if (pbVar30 + -4 == (byte *)0x0) break;
              *param_1 = pbVar12 + 5;
              param_1[1] = pbVar30 + -5;
              uVar11 = CONCAT13(pbVar12[4],uVar6);
              uVar20 = (ulong)uVar11;
              if ((bVar36 >> 3 & 1) == 0) {
                iVar48 = 4;
                iVar49 = 8;
                goto LAB_001aca48;
              }
              if (pbVar30 + -5 == (byte *)0x0) break;
              *param_1 = pbVar12 + 6;
              param_1[1] = pbVar30 + -6;
              uVar7 = CONCAT14(pbVar12[5],uVar11);
              uVar20 = (ulong)uVar7;
              if ((bVar36 >> 2 & 1) == 0) {
                iVar48 = 5;
                iVar49 = 4;
                goto LAB_001aca48;
              }
              if (pbVar30 + -6 == (byte *)0x0) break;
              *param_1 = pbVar12 + 7;
              param_1[1] = pbVar30 + -7;
              uVar8 = CONCAT15(pbVar12[6],uVar7);
              uVar20 = (ulong)uVar8;
              if ((bVar36 >> 1 & 1) == 0) {
                iVar48 = 6;
                iVar49 = 2;
                goto LAB_001aca48;
              }
              if (pbVar30 + -7 == (byte *)0x0) break;
              *param_1 = pbVar12 + 8;
              param_1[1] = pbVar30 + -8;
              uVar9 = CONCAT16(pbVar12[7],uVar8);
              uVar20 = (ulong)uVar9;
              if ((bVar36 & 1) == 0) {
                iVar49 = 1;
                iVar48 = 7;
                goto LAB_001aca48;
              }
              if (pbVar30 + -8 == (byte *)0x0) break;
              *param_1 = pbVar12 + 9;
              param_1[1] = pbVar30 + -9;
              lVar17 = CONCAT17(pbVar12[8],uVar9);
            }
            else {
              uVar20 = 0;
              iVar48 = 0;
              iVar49 = 0x80;
LAB_001aca48:
              lVar17 = ((long)(int)(iVar49 - 1U & (uint)bVar36) << (iVar48 << 3)) + uVar20;
            }
            if (lVar17 == 0) goto LAB_001ac324;
            if (lVar17 == 10) {
              local_28 = 0;
              local_20 = 0;
              uVar26 = SzReadHashDigests(param_1,*(undefined4 *)((long)param_3 + 0x2c),&local_28,
                                         &local_20,param_9);
              uVar20 = uVar26 & 0xffffffff;
              if ((int)uVar26 != 0) {
                (*param_9[1])(param_9,local_20);
                uVar26 = local_28;
LAB_001aa6a4:
                (*param_9[1])(param_9,uVar26);
                goto LAB_001a8d3c;
              }
              if (*(int *)((long)param_3 + 0x2c) != 0) {
                lVar17 = param_3[3];
                uVar20 = 0;
                do {
                  lVar23 = lVar17 + uVar20 * 0x38;
                  *(uint *)(lVar23 + 0x2c) = (uint)*(byte *)(local_28 + uVar20);
                  *(undefined4 *)(lVar23 + 0x30) = *(undefined4 *)(local_20 + uVar20 * 4);
                  uVar11 = (int)uVar20 + 1;
                  uVar20 = (ulong)uVar11;
                } while (uVar11 < *(uint *)((long)param_3 + 0x2c));
              }
              (*param_9[1])(param_9);
              (*param_9[1])(param_9,local_28);
              pbVar30 = param_1[1];
            }
            else {
              pbVar30 = param_1[1];
              if (pbVar30 == (byte *)0x0) break;
              pbVar12 = *param_1;
              *param_1 = pbVar12 + 1;
              param_1[1] = pbVar30 + -1;
              bVar36 = *pbVar12;
              if ((char)*pbVar12 < '\0') {
                if (pbVar30 + -1 == (byte *)0x0) break;
                *param_1 = pbVar12 + 2;
                param_1[1] = pbVar30 + -2;
                bVar37 = pbVar12[1];
                uVar20 = (ulong)bVar37;
                if ((bVar36 >> 6 & 1) == 0) {
                  iVar48 = 1;
                  iVar49 = 0x40;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -2 == (byte *)0x0) break;
                *param_1 = pbVar12 + 3;
                param_1[1] = pbVar30 + -3;
                uVar5 = CONCAT11(pbVar12[2],bVar37);
                uVar20 = (ulong)uVar5;
                if ((bVar36 >> 5 & 1) == 0) {
                  iVar48 = 2;
                  iVar49 = 0x20;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -3 == (byte *)0x0) break;
                *param_1 = pbVar12 + 4;
                param_1[1] = pbVar30 + -4;
                uVar6 = CONCAT12(pbVar12[3],uVar5);
                uVar20 = (ulong)uVar6;
                if ((bVar36 >> 4 & 1) == 0) {
                  iVar48 = 3;
                  iVar49 = 0x10;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -4 == (byte *)0x0) break;
                *param_1 = pbVar12 + 5;
                param_1[1] = pbVar30 + -5;
                uVar11 = CONCAT13(pbVar12[4],uVar6);
                uVar20 = (ulong)uVar11;
                if ((bVar36 >> 3 & 1) == 0) {
                  iVar48 = 4;
                  iVar49 = 8;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -5 == (byte *)0x0) break;
                *param_1 = pbVar12 + 6;
                param_1[1] = pbVar30 + -6;
                uVar7 = CONCAT14(pbVar12[5],uVar11);
                uVar20 = (ulong)uVar7;
                if ((bVar36 >> 2 & 1) == 0) {
                  iVar48 = 5;
                  iVar49 = 4;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -6 == (byte *)0x0) break;
                *param_1 = pbVar12 + 7;
                param_1[1] = pbVar30 + -7;
                uVar8 = CONCAT15(pbVar12[6],uVar7);
                uVar20 = (ulong)uVar8;
                if ((bVar36 >> 1 & 1) == 0) {
                  iVar48 = 6;
                  iVar49 = 2;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -7 == (byte *)0x0) break;
                *param_1 = pbVar12 + 8;
                param_1[1] = pbVar30 + -8;
                uVar9 = CONCAT16(pbVar12[7],uVar8);
                uVar20 = (ulong)uVar9;
                if ((bVar36 & 1) == 0) {
                  iVar49 = 1;
                  iVar48 = 7;
                  goto LAB_001accf8;
                }
                if (pbVar30 + -8 == (byte *)0x0) break;
                *param_1 = pbVar12 + 9;
                param_1[1] = pbVar30 + -9;
                pbVar12 = (byte *)CONCAT17(pbVar12[8],uVar9);
              }
              else {
                uVar20 = 0;
                iVar48 = 0;
                iVar49 = 0x80;
LAB_001accf8:
                pbVar12 = (byte *)(((long)(int)(iVar49 - 1U & (uint)bVar36) << (iVar48 << 3)) +
                                  uVar20);
              }
              if (param_1[1] < pbVar12) break;
              pbVar30 = param_1[1] + -(long)pbVar12;
              *param_1 = *param_1 + (long)pbVar12;
              param_1[1] = pbVar30;
            }
            if (pbVar30 == (byte *)0x0) break;
          } while( true );
        }
      }
    }
  }
  goto LAB_001a8d38;
LAB_001a9afc:
  if (*param_4 == 0) {
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    lVar23 = (**param_9)(param_9,(ulong)*param_4 << 3);
    *param_5 = lVar23;
    if (lVar23 == 0) {
LAB_001aa2a0:
      uVar20 = 2;
      goto LAB_001a8d3c;
    }
    lVar23 = (**param_9)(param_9,*param_4);
    *param_6 = lVar23;
    if (lVar23 == 0) goto LAB_001aa2a0;
    lVar23 = (**param_9)(param_9,(ulong)*param_4 << 2);
    *param_7 = lVar23;
    if (lVar23 == 0) goto LAB_001aa2a0;
  }
  if (uVar11 != 0) {
    uVar33 = 0;
    plVar28 = plVar29;
    do {
      uVar2 = *(uint *)((long)plVar28 + 0x34);
      if (uVar2 != 0) {
        uVar31 = uVar33;
        if (uVar20 == 9) {
          if (uVar2 < 2) {
            lVar23 = 0;
            lVar32 = *param_5;
          }
          else {
            uVar31 = (uVar33 - 1) + uVar2;
            lVar23 = 0;
            do {
              pbVar30 = param_1[1];
              if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
              pbVar12 = *param_1;
              *param_1 = pbVar12 + 1;
              param_1[1] = pbVar30 + -1;
              bVar36 = *pbVar12;
              uVar25 = (ulong)bVar36;
              uVar26 = uVar25;
              if ((char)*pbVar12 < '\0') {
                if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 2;
                param_1[1] = pbVar30 + -2;
                bVar37 = pbVar12[1];
                uVar26 = (uVar25 & 0x3f) * 0x100 + (ulong)bVar37;
                if ((bVar36 >> 6 & 1) != 0) {
                  if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 3;
                  param_1[1] = pbVar30 + -3;
                  uVar5 = CONCAT11(pbVar12[2],bVar37);
                  if ((bVar36 >> 5 & 1) == 0) {
                    uVar26 = (uVar25 & 0x1f) * 0x10000 + (ulong)uVar5;
                  }
                  else {
                    if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 4;
                    param_1[1] = pbVar30 + -4;
                    uVar6 = CONCAT12(pbVar12[3],uVar5);
                    if ((bVar36 >> 4 & 1) == 0) {
                      uVar26 = (uVar25 & 0xf) * 0x1000000 + (ulong)uVar6;
                    }
                    else {
                      if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
                      *param_1 = pbVar12 + 5;
                      param_1[1] = pbVar30 + -5;
                      uVar2 = CONCAT13(pbVar12[4],uVar6);
                      if ((bVar36 >> 3 & 1) == 0) {
                        uVar26 = ((uVar25 & 7) << 0x20) + (ulong)uVar2;
                      }
                      else {
                        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
                        *param_1 = pbVar12 + 6;
                        param_1[1] = pbVar30 + -6;
                        uVar7 = CONCAT14(pbVar12[5],uVar2);
                        if ((bVar36 >> 2 & 1) == 0) {
                          uVar26 = ((uVar25 & 3) << 0x28) + (ulong)uVar7;
                        }
                        else {
                          if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                          *param_1 = pbVar12 + 7;
                          param_1[1] = pbVar30 + -7;
                          uVar8 = CONCAT15(pbVar12[6],uVar7);
                          if ((bVar36 >> 1 & 1) == 0) {
                            uVar26 = ((uVar25 & 1) << 0x30) + (ulong)uVar8;
                          }
                          else {
                            if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                            *param_1 = pbVar12 + 8;
                            param_1[1] = pbVar30 + -8;
                            uVar9 = CONCAT16(pbVar12[7],uVar8);
                            uVar26 = (ulong)uVar9;
                            if ((bVar36 & 1) != 0) {
                              if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                              param_1[1] = pbVar30 + -9;
                              *param_1 = pbVar12 + 9;
                              uVar26 = CONCAT17(pbVar12[8],uVar9);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              lVar32 = *param_5;
              uVar2 = uVar33 + 1;
              lVar23 = lVar23 + uVar26;
              *(ulong *)(lVar32 + (ulong)uVar33 * 8) = uVar26;
              uVar33 = uVar2;
            } while (uVar2 != uVar31);
          }
        }
        else {
          lVar32 = *param_5;
          lVar23 = 0;
        }
        if (*(int *)(plVar28 + 4) == 0) {
LAB_001a9bd0:
          lVar15 = 0;
        }
        else {
          iVar48 = 0;
          piVar16 = (int *)(*plVar28 + 4);
          do {
            piVar22 = piVar16 + 8;
            iVar48 = iVar48 + *piVar16;
            piVar16 = piVar22;
          } while ((int *)(*plVar28 + 0x24 + (ulong)(*(int *)(plVar28 + 4) - 1) * 0x20) != piVar22);
          lVar15 = 0;
          if ((iVar48 != 0) && (iVar48 = iVar48 + -1, -1 < iVar48)) {
            do {
              if (*(int *)((long)plVar28 + 0x24) == 0) {
LAB_001aa0f0:
                lVar15 = *(long *)(plVar28[3] + (long)iVar48 * 8);
                goto LAB_001a9bd4;
              }
              iVar49 = 0;
              piVar16 = (int *)(plVar28[1] + 4);
              while (*piVar16 != iVar48) {
                iVar49 = iVar49 + 1;
                piVar16 = piVar16 + 2;
                if (iVar49 == *(int *)((long)plVar28 + 0x24)) goto LAB_001aa0f0;
              }
              if (iVar49 < 0) goto LAB_001aa0f0;
              iVar48 = iVar48 + -1;
            } while (iVar48 != -1);
            goto LAB_001a9bd0;
          }
        }
LAB_001a9bd4:
        uVar33 = uVar31 + 1;
        *(long *)(lVar32 + (ulong)uVar31 * 8) = lVar15 - lVar23;
      }
      plVar28 = plVar28 + 7;
    } while (plVar29 + (ulong)uVar10 * 7 + 7 != plVar28);
  }
  if (uVar20 == 9) {
    pbVar30 = param_1[1];
    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
    pbVar12 = *param_1;
    *param_1 = pbVar12 + 1;
    param_1[1] = pbVar30 + -1;
    bVar36 = *pbVar12;
    if ((char)*pbVar12 < '\0') {
      if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
      *param_1 = pbVar12 + 2;
      param_1[1] = pbVar30 + -2;
      bVar37 = pbVar12[1];
      uVar20 = (ulong)bVar37;
      if ((bVar36 >> 6 & 1) == 0) {
        iVar49 = 1;
        iVar48 = 0x40;
      }
      else {
        if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 3;
        param_1[1] = pbVar30 + -3;
        uVar5 = CONCAT11(pbVar12[2],bVar37);
        uVar20 = (ulong)uVar5;
        if ((bVar36 >> 5 & 1) == 0) {
          iVar49 = 2;
          iVar48 = 0x20;
        }
        else {
          if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar12 + 4;
          param_1[1] = pbVar30 + -4;
          uVar6 = CONCAT12(pbVar12[3],uVar5);
          uVar20 = (ulong)uVar6;
          if ((bVar36 >> 4 & 1) == 0) {
            iVar49 = 3;
            iVar48 = 0x10;
          }
          else {
            if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar12 + 5;
            param_1[1] = pbVar30 + -5;
            uVar33 = CONCAT13(pbVar12[4],uVar6);
            uVar20 = (ulong)uVar33;
            if ((bVar36 >> 3 & 1) == 0) {
              iVar49 = 4;
              iVar48 = 8;
            }
            else {
              if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar12 + 6;
              param_1[1] = pbVar30 + -6;
              uVar7 = CONCAT14(pbVar12[5],uVar33);
              uVar20 = (ulong)uVar7;
              if ((bVar36 >> 2 & 1) == 0) {
                iVar49 = 5;
                iVar48 = 4;
              }
              else {
                if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar12 + 7;
                param_1[1] = pbVar30 + -7;
                uVar8 = CONCAT15(pbVar12[6],uVar7);
                uVar20 = (ulong)uVar8;
                if ((bVar36 >> 1 & 1) == 0) {
                  iVar49 = 6;
                  iVar48 = 2;
                }
                else {
                  if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
                  *param_1 = pbVar12 + 8;
                  param_1[1] = pbVar30 + -8;
                  uVar9 = CONCAT16(pbVar12[7],uVar8);
                  uVar20 = (ulong)uVar9;
                  if ((bVar36 & 1) != 0) {
                    if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
                    *param_1 = pbVar12 + 9;
                    param_1[1] = pbVar30 + -9;
                    uVar20 = CONCAT17(pbVar12[8],uVar9);
                    goto LAB_001a9bf4;
                  }
                  iVar49 = 7;
                  iVar48 = 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar20 = 0;
      iVar49 = 0;
      iVar48 = 0x80;
    }
    uVar20 = ((long)(int)(iVar48 - 1U & (uint)bVar36) << (iVar49 << 3)) + uVar20;
  }
LAB_001a9bf4:
  uVar26 = 0;
  if (*param_4 != 0) {
    do {
      *(undefined *)(*param_6 + uVar26) = 0;
      *(undefined4 *)(*param_7 + uVar26 * 4) = 0;
      uVar33 = (int)uVar26 + 1;
      uVar26 = (ulong)uVar33;
    } while (uVar33 < *param_4);
  }
  iVar48 = 0;
  if (uVar11 != 0) {
    if (uVar10 < 3) {
      iVar48 = 0;
      uVar10 = 0;
    }
    else {
      puVar14 = (undefined4 *)((long)plVar29 + 0x2c);
      iVar48 = 0;
      iVar49 = 0;
      iVar50 = 0;
      iVar51 = 0;
      puVar13 = puVar14 + (ulong)(uVar11 >> 2) * 0x38;
      do {
        uVar45 = puVar14[0x10];
        auVar34._0_4_ = *puVar14;
        uVar4 = puVar14[2];
        auVar34._4_4_ = puVar14[0xe];
        bVar36 = (byte)((uint)uVar45 >> 8);
        bVar37 = (byte)((uint)uVar45 >> 0x10);
        bVar38 = (byte)((uint)uVar45 >> 0x18);
        uVar52 = puVar14[0x1e];
        uVar46 = puVar14[0x2c];
        auVar34._8_4_ = puVar14[0x1c];
        bVar39 = (byte)((uint)uVar52 >> 8);
        bVar40 = (byte)((uint)uVar52 >> 0x10);
        bVar41 = (byte)((uint)uVar52 >> 0x18);
        puVar1 = puVar14 + 0x2a;
        puVar14 = puVar14 + 0x38;
        bVar42 = (byte)((uint)uVar46 >> 8);
        bVar43 = (byte)((uint)uVar46 >> 0x10);
        bVar44 = (byte)((uint)uVar46 >> 0x18);
        auVar34._12_4_ = *puVar1;
        auVar35[4] = (byte)uVar45;
        auVar35._0_4_ = uVar4;
        auVar35[5] = bVar36;
        auVar35[6] = bVar37;
        auVar35[7] = bVar38;
        auVar35[8] = (byte)uVar52;
        auVar35[9] = bVar39;
        auVar35[10] = bVar40;
        auVar35[11] = bVar41;
        auVar35[12] = (byte)uVar46;
        auVar35[13] = bVar42;
        auVar35[14] = bVar43;
        auVar35[15] = bVar44;
        auVar47._8_4_ = 1;
        auVar47._0_8_ = 0x100000001;
        auVar47._12_4_ = 1;
        auVar47 = NEON_cmeq(auVar35,auVar47,4);
        auVar35 = NEON_cmeq(auVar34,0,2);
        iVar48 = iVar48 + CONCAT13((byte)((uint)uVar4 >> 0x18) &
                                   (auVar35[3] & auVar47[3] | ~auVar47[3]),
                                   CONCAT12((byte)((uint)uVar4 >> 0x10) &
                                            (auVar35[2] & auVar47[2] | ~auVar47[2]),
                                            CONCAT11((byte)((uint)uVar4 >> 8) &
                                                     (auVar35[1] & auVar47[1] | ~auVar47[1]),
                                                     (byte)uVar4 &
                                                     (auVar35[0] & auVar47[0] | ~auVar47[0]))));
        iVar49 = iVar49 + CONCAT13(bVar38 & (auVar35[7] & auVar47[7] | ~auVar47[7]),
                                   CONCAT12(bVar37 & (auVar35[6] & auVar47[6] | ~auVar47[6]),
                                            CONCAT11(bVar36 & (auVar35[5] & auVar47[5] | ~auVar47[5]
                                                              ),
                                                     (byte)uVar45 &
                                                     (auVar35[4] & auVar47[4] | ~auVar47[4]))));
        iVar50 = iVar50 + CONCAT13(bVar41 & (auVar35[11] & auVar47[11] | ~auVar47[11]),
                                   CONCAT12(bVar40 & (auVar35[10] & auVar47[10] | ~auVar47[10]),
                                            CONCAT11(bVar39 & (auVar35[9] & auVar47[9] | ~auVar47[9]
                                                              ),
                                                     (byte)uVar52 &
                                                     (auVar35[8] & auVar47[8] | ~auVar47[8]))));
        iVar51 = iVar51 + CONCAT13(bVar44 & (auVar35[15] & auVar47[15] | ~auVar47[15]),
                                   CONCAT12(bVar43 & (auVar35[14] & auVar47[14] | ~auVar47[14]),
                                            CONCAT11(bVar42 & (auVar35[13] & auVar47[13] |
                                                              ~auVar47[13]),
                                                     (byte)uVar46 &
                                                     (auVar35[12] & auVar47[12] | ~auVar47[12]))));
      } while (puVar13 != puVar14);
      iVar48 = iVar48 + iVar49 + iVar50 + iVar51;
      uVar10 = uVar11 & 0xfffffffc;
      if ((uVar11 & 3) == 0) goto LAB_001a9d20;
    }
    iVar49 = *(int *)((long)plVar29 + (ulong)uVar10 * 0x38 + 0x34);
    if ((iVar49 != 1) || (*(int *)((long)plVar29 + (ulong)uVar10 * 0x38 + 0x2c) == 0)) {
      iVar48 = iVar48 + iVar49;
    }
    uVar33 = uVar10 + 1;
    if (uVar33 < uVar11) {
      iVar49 = *(int *)((long)plVar29 + (ulong)uVar33 * 0x38 + 0x34);
      if ((iVar49 != 1) || (*(int *)((long)plVar29 + (ulong)uVar33 * 0x38 + 0x2c) == 0)) {
        iVar48 = iVar48 + iVar49;
      }
      uVar10 = uVar10 + 2;
      if ((uVar10 < uVar11) &&
         ((iVar49 = *(int *)((long)plVar29 + (ulong)uVar10 * 0x38 + 0x34), iVar49 != 1 ||
          (*(int *)((long)plVar29 + (ulong)uVar10 * 0x38 + 0x2c) == 0)))) {
        iVar48 = iVar48 + iVar49;
      }
    }
  }
LAB_001a9d20:
  uVar26 = 0;
LAB_001a9d40:
  if (uVar20 == 10) {
    local_28 = 0;
    local_20 = 0;
    uVar25 = SzReadHashDigests(param_1,iVar48,&local_28,&local_20,param_9);
    uVar20 = uVar25 & 0xffffffff;
    if ((int)uVar25 != 0) {
      (*param_9[1])(param_9,local_28);
      uVar26 = local_20;
      goto LAB_001aa6a4;
    }
    if (uVar11 != 0) {
      piVar16 = (int *)((long)plVar29 + 0x2c);
      do {
        uVar10 = piVar16[2];
        iVar49 = (int)uVar26;
        if (uVar10 == 1) {
          lVar23 = *param_6;
          if (*piVar16 == 0) goto LAB_001ab6a0;
          *(undefined *)(lVar23 + uVar26) = 1;
          *(int *)(*param_7 + uVar26 * 4) = piVar16[1];
          uVar26 = (ulong)(iVar49 + 1);
        }
        else if (uVar10 != 0) {
          lVar23 = *param_6;
LAB_001ab6a0:
          iVar50 = (int)uVar20;
          *(undefined *)(lVar23 + uVar26) = *(undefined *)(local_28 + (long)iVar50);
          *(undefined4 *)(*param_7 + uVar26 * 4) = *(undefined4 *)(local_20 + (long)iVar50 * 4);
          if (1 < uVar10) {
            lVar23 = (long)(iVar50 + 1);
            uVar33 = iVar49 + 1U;
            do {
              *(undefined *)(*param_6 + (ulong)uVar33) = *(undefined *)(local_28 + lVar23);
              lVar32 = lVar23 * 4;
              lVar23 = lVar23 + 1;
              *(undefined4 *)(*param_7 + (ulong)uVar33 * 4) = *(undefined4 *)(local_20 + lVar32);
              uVar33 = uVar33 + 1;
            } while (uVar33 != iVar49 + uVar10);
          }
          iVar51 = uVar10 - 1;
          if (uVar10 == 0) {
            iVar51 = 0;
          }
          uVar26 = (ulong)(iVar51 + iVar49 + 1U);
          uVar20 = (ulong)(uint)(iVar51 + iVar50 + 1);
        }
        piVar16 = piVar16 + 0xe;
      } while ((int *)((long)plVar29 + lVar17 + 100) != piVar16);
    }
    (*param_9[1])(param_9,local_28);
    (*param_9[1])(param_9,local_20);
    pbVar12 = param_1[1];
  }
  else {
    pbVar30 = param_1[1];
    if (uVar20 == 0) goto LAB_001aa5e4;
    if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
    pbVar21 = *param_1;
    pbVar12 = pbVar30 + -1;
    *param_1 = pbVar21 + 1;
    param_1[1] = pbVar12;
    bVar36 = *pbVar21;
    pbVar27 = (byte *)(ulong)bVar36;
    pbVar19 = pbVar27;
    if ((char)*pbVar21 < '\0') {
      if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = pbVar30 + -2;
      *param_1 = pbVar21 + 2;
      param_1[1] = pbVar12;
      bVar37 = pbVar21[1];
      pbVar19 = (byte *)(((ulong)pbVar27 & 0x3f) * 0x100 + (ulong)bVar37);
      if ((bVar36 >> 6 & 1) != 0) {
        if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
        pbVar12 = pbVar30 + -3;
        *param_1 = pbVar21 + 3;
        param_1[1] = pbVar12;
        uVar5 = CONCAT11(pbVar21[2],bVar37);
        pbVar19 = (byte *)(((ulong)pbVar27 & 0x1f) * 0x10000 + (ulong)uVar5);
        if ((bVar36 >> 5 & 1) != 0) {
          if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
          pbVar12 = pbVar30 + -4;
          *param_1 = pbVar21 + 4;
          param_1[1] = pbVar12;
          uVar6 = CONCAT12(pbVar21[3],uVar5);
          pbVar19 = (byte *)(((ulong)pbVar27 & 0xf) * 0x1000000 + (ulong)uVar6);
          if ((bVar36 >> 4 & 1) != 0) {
            if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
            pbVar12 = pbVar30 + -5;
            *param_1 = pbVar21 + 5;
            param_1[1] = pbVar12;
            uVar10 = CONCAT13(pbVar21[4],uVar6);
            pbVar19 = (byte *)((((ulong)pbVar27 & 7) << 0x20) + (ulong)uVar10);
            if ((bVar36 >> 3 & 1) != 0) {
              if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
              pbVar12 = pbVar30 + -6;
              *param_1 = pbVar21 + 6;
              param_1[1] = pbVar12;
              uVar7 = CONCAT14(pbVar21[5],uVar10);
              pbVar19 = (byte *)((((ulong)pbVar27 & 3) << 0x28) + (ulong)uVar7);
              if ((bVar36 >> 2 & 1) != 0) {
                if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                pbVar12 = pbVar30 + -7;
                *param_1 = pbVar21 + 7;
                param_1[1] = pbVar12;
                uVar8 = CONCAT15(pbVar21[6],uVar7);
                if ((bVar36 >> 1 & 1) == 0) {
                  pbVar19 = (byte *)((((ulong)pbVar27 & 1) << 0x30) + (ulong)uVar8);
                }
                else {
                  if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                  pbVar12 = pbVar30 + -8;
                  *param_1 = pbVar21 + 8;
                  param_1[1] = pbVar12;
                  uVar9 = CONCAT16(pbVar21[7],uVar8);
                  pbVar19 = (byte *)(ulong)uVar9;
                  if ((bVar36 & 1) != 0) {
                    if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
                    pbVar12 = pbVar30 + -9;
                    *param_1 = pbVar21 + 9;
                    param_1[1] = pbVar12;
                    pbVar19 = (byte *)CONCAT17(pbVar21[8],uVar9);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (pbVar12 < pbVar19) goto LAB_001a8d38;
    pbVar12 = pbVar12 + -(long)pbVar19;
    *param_1 = *param_1 + (long)pbVar19;
    param_1[1] = pbVar12;
  }
  if (pbVar12 == (byte *)0x0) goto LAB_001a8d38;
  pbVar30 = *param_1;
  *param_1 = pbVar30 + 1;
  param_1[1] = pbVar12 + -1;
  bVar36 = *pbVar30;
  uVar25 = (ulong)bVar36;
  uVar20 = uVar25;
  if ((char)*pbVar30 < '\0') {
    if (pbVar12 + -1 == (byte *)0x0) goto LAB_001a8d38;
    *param_1 = pbVar30 + 2;
    param_1[1] = pbVar12 + -2;
    bVar37 = pbVar30[1];
    uVar20 = (uVar25 & 0x3f) * 0x100 + (ulong)bVar37;
    if ((bVar36 >> 6 & 1) != 0) {
      if (pbVar12 + -2 == (byte *)0x0) goto LAB_001a8d38;
      *param_1 = pbVar30 + 3;
      param_1[1] = pbVar12 + -3;
      uVar5 = CONCAT11(pbVar30[2],bVar37);
      if ((bVar36 >> 5 & 1) == 0) {
        uVar20 = (uVar25 & 0x1f) * 0x10000 + (ulong)uVar5;
      }
      else {
        if (pbVar12 + -3 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar30 + 4;
        param_1[1] = pbVar12 + -4;
        uVar6 = CONCAT12(pbVar30[3],uVar5);
        if ((bVar36 >> 4 & 1) == 0) {
          uVar20 = (uVar25 & 0xf) * 0x1000000 + (ulong)uVar6;
        }
        else {
          if (pbVar12 + -4 == (byte *)0x0) goto LAB_001a8d38;
          *param_1 = pbVar30 + 5;
          param_1[1] = pbVar12 + -5;
          uVar10 = CONCAT13(pbVar30[4],uVar6);
          if ((bVar36 >> 3 & 1) == 0) {
            uVar20 = ((uVar25 & 7) << 0x20) + (ulong)uVar10;
          }
          else {
            if (pbVar12 + -5 == (byte *)0x0) goto LAB_001a8d38;
            *param_1 = pbVar30 + 6;
            param_1[1] = pbVar12 + -6;
            uVar7 = CONCAT14(pbVar30[5],uVar10);
            if ((bVar36 >> 2 & 1) == 0) {
              uVar20 = ((uVar25 & 3) << 0x28) + (ulong)uVar7;
            }
            else {
              if (pbVar12 + -6 == (byte *)0x0) goto LAB_001a8d38;
              *param_1 = pbVar30 + 7;
              param_1[1] = pbVar12 + -7;
              uVar8 = CONCAT15(pbVar30[6],uVar7);
              if ((bVar36 >> 1 & 1) == 0) {
                uVar20 = ((uVar25 & 1) << 0x30) + (ulong)uVar8;
              }
              else {
                if (pbVar12 + -7 == (byte *)0x0) goto LAB_001a8d38;
                *param_1 = pbVar30 + 8;
                param_1[1] = pbVar12 + -8;
                uVar9 = CONCAT16(pbVar30[7],uVar8);
                uVar20 = (ulong)uVar9;
                if ((bVar36 & 1) != 0) {
                  if (pbVar12 + -8 == (byte *)0x0) goto LAB_001a8d38;
                  param_1[1] = pbVar12 + -9;
                  *param_1 = pbVar30 + 9;
                  uVar20 = CONCAT17(pbVar30[8],uVar9);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_001a9d40;
LAB_001aa5cc:
  if (param_3[1] == 0) {
    if (*(int *)(param_3 + 5) != 0) {
      lVar17 = (**param_8)(param_8,*(int *)(param_3 + 5));
      param_3[1] = lVar17;
      if (lVar17 == 0) goto LAB_001aa2a0;
      if (*(uint *)(param_3 + 5) != 0) {
        lVar17 = (**param_8)(param_8,(ulong)*(uint *)(param_3 + 5) << 2);
        param_3[2] = lVar17;
        if (lVar17 == 0) goto LAB_001aa2a0;
        uVar20 = 0;
        if (*(int *)(param_3 + 5) != 0) {
          do {
            *(undefined *)(param_3[1] + uVar20) = 0;
            *(undefined4 *)(param_3[2] + uVar20 * 4) = 0;
            uVar11 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar11;
          } while (uVar11 < *(uint *)(param_3 + 5));
        }
        goto LAB_001ac324;
      }
    }
    pbVar30 = param_1[1];
    param_3[2] = 0;
  }
  else {
LAB_001ac324:
    pbVar30 = param_1[1];
  }
LAB_001aa5e4:
  if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
  goto LAB_001a877c;
code_r0x001ac3b8:
  if (iVar49 == 0) goto LAB_001a9278;
  uVar10 = iVar49 - 1;
  *(uint *)((long)plVar29 + 0x24) = uVar10;
  if (uVar10 == 0) {
    plVar29[1] = 0;
  }
  else {
    puVar14 = (undefined4 *)(**param_8)(param_8,(ulong)uVar10 << 3);
    plVar29[1] = (long)puVar14;
    if (puVar14 == (undefined4 *)0x0) goto LAB_001aa2a0;
    puVar13 = puVar14 + ((ulong)(iVar49 - 2) + 1) * 2;
    do {
      pbVar30 = param_1[1];
      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = *param_1;
      *param_1 = pbVar12 + 1;
      param_1[1] = pbVar30 + -1;
      bVar36 = *pbVar12;
      if ((char)*pbVar12 < '\0') {
        if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 2;
        param_1[1] = pbVar30 + -2;
        bVar37 = pbVar12[1];
        uVar20 = (ulong)bVar37;
        if ((bVar36 >> 6 & 1) == 0) {
          iVar48 = 1;
          iVar49 = 0x40;
          goto LAB_001acc38;
        }
        if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 3;
        param_1[1] = pbVar30 + -3;
        uVar5 = CONCAT11(pbVar12[2],bVar37);
        uVar20 = (ulong)uVar5;
        if ((bVar36 >> 5 & 1) == 0) {
          iVar48 = 2;
          iVar49 = 0x20;
          goto LAB_001acc38;
        }
        if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 4;
        param_1[1] = pbVar30 + -4;
        uVar6 = CONCAT12(pbVar12[3],uVar5);
        uVar20 = (ulong)uVar6;
        if ((bVar36 >> 4 & 1) == 0) {
          iVar48 = 3;
          iVar49 = 0x10;
          goto LAB_001acc38;
        }
        if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 5;
        param_1[1] = pbVar30 + -5;
        uVar33 = CONCAT13(pbVar12[4],uVar6);
        uVar20 = (ulong)uVar33;
        if ((bVar36 >> 3 & 1) == 0) {
          iVar48 = 4;
          iVar49 = 8;
          goto LAB_001acc38;
        }
        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 6;
        param_1[1] = pbVar30 + -6;
        uVar7 = CONCAT14(pbVar12[5],uVar33);
        uVar20 = (ulong)uVar7;
        if ((bVar36 >> 2 & 1) == 0) {
          iVar48 = 5;
          iVar49 = 4;
          goto LAB_001acc38;
        }
        if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 7;
        param_1[1] = pbVar30 + -7;
        uVar8 = CONCAT15(pbVar12[6],uVar7);
        uVar20 = (ulong)uVar8;
        if ((bVar36 >> 1 & 1) == 0) {
          iVar48 = 6;
          iVar49 = 2;
          goto LAB_001acc38;
        }
        if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 8;
        param_1[1] = pbVar30 + -8;
        uVar9 = CONCAT16(pbVar12[7],uVar8);
        uVar20 = (ulong)uVar9;
        if ((bVar36 & 1) == 0) {
          iVar49 = 1;
          iVar48 = 7;
          goto LAB_001acc38;
        }
        if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
        param_1[1] = pbVar30 + -9;
        *param_1 = pbVar12 + 9;
        uVar20 = CONCAT17(pbVar12[8],uVar9);
      }
      else {
        uVar20 = 0;
        iVar48 = 0;
        iVar49 = 0x80;
LAB_001acc38:
        uVar20 = ((long)(int)(iVar49 - 1U & (uint)bVar36) << (iVar48 << 3)) + uVar20;
      }
      if (0x7fffffff < uVar20) goto LAB_001a9278;
      pbVar30 = param_1[1];
      *puVar14 = (int)uVar20;
      if (pbVar30 == (byte *)0x0) goto LAB_001a8d38;
      pbVar12 = *param_1;
      *param_1 = pbVar12 + 1;
      param_1[1] = pbVar30 + -1;
      bVar36 = *pbVar12;
      if ((char)*pbVar12 < '\0') {
        if (pbVar30 + -1 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 2;
        param_1[1] = pbVar30 + -2;
        bVar37 = pbVar12[1];
        uVar20 = (ulong)bVar37;
        if ((bVar36 >> 6 & 1) == 0) {
          iVar48 = 1;
          iVar49 = 0x40;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -2 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 3;
        param_1[1] = pbVar30 + -3;
        uVar5 = CONCAT11(pbVar12[2],bVar37);
        uVar20 = (ulong)uVar5;
        if ((bVar36 >> 5 & 1) == 0) {
          iVar48 = 2;
          iVar49 = 0x20;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -3 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 4;
        param_1[1] = pbVar30 + -4;
        uVar6 = CONCAT12(pbVar12[3],uVar5);
        uVar20 = (ulong)uVar6;
        if ((bVar36 >> 4 & 1) == 0) {
          iVar48 = 3;
          iVar49 = 0x10;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -4 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 5;
        param_1[1] = pbVar30 + -5;
        uVar33 = CONCAT13(pbVar12[4],uVar6);
        uVar20 = (ulong)uVar33;
        if ((bVar36 >> 3 & 1) == 0) {
          iVar48 = 4;
          iVar49 = 8;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -5 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 6;
        param_1[1] = pbVar30 + -6;
        uVar7 = CONCAT14(pbVar12[5],uVar33);
        uVar20 = (ulong)uVar7;
        if ((bVar36 >> 2 & 1) == 0) {
          iVar48 = 5;
          iVar49 = 4;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -6 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 7;
        param_1[1] = pbVar30 + -7;
        uVar8 = CONCAT15(pbVar12[6],uVar7);
        uVar20 = (ulong)uVar8;
        if ((bVar36 >> 1 & 1) == 0) {
          iVar48 = 6;
          iVar49 = 2;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -7 == (byte *)0x0) goto LAB_001a8d38;
        *param_1 = pbVar12 + 8;
        param_1[1] = pbVar30 + -8;
        uVar9 = CONCAT16(pbVar12[7],uVar8);
        uVar20 = (ulong)uVar9;
        if ((bVar36 & 1) == 0) {
          iVar49 = 1;
          iVar48 = 7;
          goto LAB_001acc8c;
        }
        if (pbVar30 + -8 == (byte *)0x0) goto LAB_001a8d38;
        param_1[1] = pbVar30 + -9;
        *param_1 = pbVar12 + 9;
        uVar20 = CONCAT17(pbVar12[8],uVar9);
      }
      else {
        uVar20 = 0;
        iVar48 = 0;
        iVar49 = 0x80;
LAB_001acc8c:
        uVar20 = ((long)(int)(iVar49 - 1U & (uint)bVar36) << (iVar48 << 3)) + uVar20;
      }
      if (0x7fffffff < uVar20) goto LAB_001a9278;
      puVar14[1] = (int)uVar20;
      puVar14 = puVar14 + 2;
    } while (puVar13 != puVar14);
    if (uVar11 < uVar10) goto LAB_001a9278;
  }
  uVar10 = uVar11 - uVar10;
  *(uint *)(plVar29 + 5) = uVar10;
  if (uVar10 == 0) {
    plVar29[2] = 0;
  }
  else {
    puVar18 = (uint *)(**param_8)(param_8,(ulong)uVar10 << 2);
    plVar29[2] = (long)puVar18;
    if (puVar18 == (uint *)0x0) goto LAB_001aa2a0;
    if (uVar10 == 1) {
      uVar10 = 0;
      while( true ) {
        if (uVar11 == uVar10) goto LAB_001a9278;
        if (*(int *)((long)plVar29 + 0x24) == 0) break;
        puVar24 = (uint *)plVar29[1];
        iVar48 = 0;
        while (*puVar24 != uVar10) {
          iVar48 = iVar48 + 1;
          puVar24 = puVar24 + 2;
          if (iVar48 == *(int *)((long)plVar29 + 0x24)) goto LAB_001ace84;
        }
        if (iVar48 < 0) break;
        uVar10 = uVar10 + 1;
      }
LAB_001ace84:
      *puVar18 = uVar10;
    }
    else {
      lVar17 = 0;
      while ((uint)lVar17 < uVar10) {
        uVar11 = SzReadNumber(param_1,&local_20);
        if (uVar11 != 0) {
          uVar20 = (ulong)uVar11;
          goto LAB_001a8d3c;
        }
        if (extraout_x11 < local_20) goto LAB_001a9278;
        *(int *)(extraout_x12 + extraout_x10 * 4) = (int)local_20;
        lVar17 = extraout_x10 + 1;
      }
    }
  }
  uVar11 = (int)local_70 + 1;
  local_70 = (ulong)uVar11;
  pbVar30 = param_1[1];
  if (*(uint *)((long)param_3 + 0x2c) <= uVar11) goto LAB_001aa32c;
  lVar17 = param_3[3];
  goto LAB_001a9910;
LAB_001ac1b4:
  uVar11 = *(uint *)((long)param_3 + 0x2c);
LAB_001abf74:
  uVar10 = (int)uVar20 + 1;
  uVar20 = (ulong)uVar10;
  if (uVar11 <= uVar10) goto LAB_001abf80;
  goto LAB_001abd58;
}


