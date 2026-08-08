/*
 * Ghidra decompilation
 *
 * Function : FUN_0804b5f0
 * Address  : 0804b5f0
 * Program  : drastic16
 */


void FUN_0804b5f0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  int *piVar13;
  int iVar14;
  ushort *puVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  ushort uVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int local_104;
  int *local_fc;
  ushort *local_f8;
  ushort *local_f4;
  uint local_b8;
  undefined4 local_ac;
  ushort local_a8 [66];
  
  local_b8 = *(uint *)(param_1 + 800);
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x9a95) != '\0') {
    FUN_080907f0(param_1 + 0x97d0,param_1 + 0x9810,*(undefined4 *)(param_1 + 0x9a38));
    *(undefined *)(param_1 + 0x9a95) = 0;
  }
  FUN_08090670(param_1);
  iVar23 = *(int *)(param_1 + 0x300);
  if (iVar23 != 0) {
    iVar11 = local_b8 * 4;
    local_b8 = local_b8 + iVar23;
    memmove((void *)(param_1 + iVar11 + 0x14cc),(void *)(param_1 + 0x51c),iVar23 << 2);
  }
  local_ac = param_1 + 0x32c;
  iVar11 = *(int *)(param_1 + 0x314) - local_ac >> 2;
  if (iVar11 == 0) {
    uVar7 = *(uint *)(param_1 + 0x634);
    iVar11 = *(int *)(param_1 + 0x318) - (int)(ushort *)(param_1 + 0x43c) >> 1;
    puVar16 = (undefined2 *)(param_1 + *(int *)(param_1 + 800) * 2 + 0x1344);
    if (iVar11 == 0) {
      uVar22 = 0;
    }
    else {
      uVar8 = 0;
      uVar37 = uVar7;
      puVar15 = (ushort *)(param_1 + 0x43c);
      pbVar33 = (byte *)(param_1 + 0x4cc);
      do {
        pbVar35 = pbVar33 + 1;
        uVar7 = (uint)*puVar15;
        uVar22 = *pbVar33 & 0x7f;
        uVar8 = uVar22 - uVar8;
        if (uVar8 != 0) {
          uVar5 = (undefined2)uVar37;
          uVar37 = -((uint)((int)puVar16 << 0x1d) >> 0x1e) & 7;
          if (uVar8 <= uVar37) {
            uVar37 = uVar8;
          }
          uVar19 = uVar8;
          if ((uVar8 < 0xb) || (puVar12 = puVar16, uVar19 = uVar37, uVar37 != 0)) {
            puVar12 = puVar16 + 1;
            *puVar16 = uVar5;
            uVar37 = uVar19;
            if (uVar19 != 1) {
              puVar16[1] = uVar5;
              puVar12 = puVar16 + 2;
              if (uVar19 != 2) {
                puVar16[2] = uVar5;
                puVar12 = puVar16 + 3;
                if (uVar19 != 3) {
                  puVar16[3] = uVar5;
                  puVar12 = puVar16 + 4;
                  if (uVar19 != 4) {
                    puVar16[4] = uVar5;
                    puVar12 = puVar16 + 5;
                    if (uVar19 != 5) {
                      puVar16[5] = uVar5;
                      puVar12 = puVar16 + 6;
                      if (uVar19 != 6) {
                        puVar16[6] = uVar5;
                        puVar12 = puVar16 + 7;
                        if (uVar19 != 7) {
                          puVar16[7] = uVar5;
                          puVar12 = puVar16 + 8;
                          if (uVar19 != 8) {
                            puVar16[8] = uVar5;
                            puVar12 = puVar16 + 9;
                            if (uVar19 == 10) {
                              puVar12 = puVar16 + 10;
                              puVar16[9] = uVar5;
                            }
                            else {
                              uVar37 = 9;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (uVar8 != uVar19) goto LAB_0804c0d0;
          }
          else {
LAB_0804c0d0:
            uVar6 = uVar8 - uVar19;
            uVar40 = uVar6 & 0xfffffff8;
            if (uVar40 != 0) {
              puVar17 = (undefined8 *)(puVar16 + uVar19);
              uVar19 = 0;
              do {
                uVar19 = uVar19 + 1;
                *puVar17 = 0;
                puVar17[1] = 0;
                puVar17 = puVar17 + 2;
              } while (uVar19 < uVar6 >> 3);
              puVar12 = puVar12 + uVar40;
              uVar37 = uVar37 + uVar40;
              if (uVar40 == uVar6) goto LAB_0804c174;
            }
            *puVar12 = uVar5;
            if ((((uVar37 + 1 < uVar8) && (puVar12[1] = uVar5, uVar37 + 2 < uVar8)) &&
                (puVar12[2] = uVar5, uVar37 + 3 < uVar8)) &&
               (((puVar12[3] = uVar5, uVar37 + 4 < uVar8 && (puVar12[4] = uVar5, uVar37 + 5 < uVar8)
                 ) && (puVar12[5] = uVar5, uVar37 + 6 < uVar8)))) {
              puVar12[6] = uVar5;
            }
          }
LAB_0804c174:
          puVar16 = puVar16 + uVar8;
        }
        uVar8 = uVar22;
        uVar37 = uVar7;
        puVar15 = puVar15 + 1;
        pbVar33 = pbVar35;
      } while (pbVar35 != (byte *)(param_1 + 0x4cc) + iVar11);
    }
  }
  else {
    piVar13 = *(int **)(param_1 + 0x9a3c);
    local_fc = (int *)(param_1 + 0x328);
    uVar37 = *(uint *)(param_1 + 0x9744);
    iVar20 = *piVar13;
    iVar24 = piVar13[4];
    iVar31 = piVar13[8];
    piVar28 = local_fc + iVar11;
    iVar38 = piVar13[1];
    iVar21 = piVar13[5];
    iVar25 = piVar13[9];
    iVar29 = piVar13[2];
    uVar8 = *(uint *)(param_1 + 0x9748);
    iVar32 = piVar13[6];
    uVar7 = *(uint *)(param_1 + 0x974c);
    iVar14 = piVar13[10];
    bVar1 = *(byte *)(param_1 + 0x9a88);
    local_f8 = (ushort *)((int)&local_ac + 2);
    do {
      local_fc = local_fc + 1;
      iVar39 = *local_fc;
      iVar26 = (iVar39 << 0xc) >> 0x16;
      iVar18 = (iVar39 << 0x16) >> 0x16;
      iVar39 = (iVar39 << 2) >> 0x16;
      lVar2 = (longlong)iVar39 * (longlong)iVar31 +
              (longlong)iVar18 * (longlong)iVar20 + (longlong)iVar26 * (longlong)iVar24;
      lVar3 = (longlong)iVar39 * (longlong)iVar25 +
              (longlong)iVar18 * (longlong)iVar38 + (longlong)iVar26 * (longlong)iVar21;
      lVar4 = (longlong)iVar39 * (longlong)iVar14 +
              (longlong)iVar18 * (longlong)iVar29 + (longlong)iVar26 * (longlong)iVar32;
      uVar6 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
      uVar9 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
      uVar27 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
      uVar19 = uVar8;
      uVar22 = uVar7;
      uVar40 = uVar37;
      if (bVar1 != 0) {
        puVar15 = (ushort *)(param_1 + 0x9714);
        iVar18 = param_1;
        uVar10 = (uint)bVar1;
        do {
          if ((uVar10 & 1) != 0) {
            uVar30 = ((int)(*(int *)(iVar18 + 0x96e8) * uVar9) >> 9) +
                     ((int)(*(int *)(iVar18 + 0x96e4) * uVar6) >> 9) +
                     ((int)(*(int *)(iVar18 + 0x96ec) * uVar27) >> 9);
            uVar30 = uVar30 & ~((int)uVar30 >> 0x1f);
            iVar26 = uVar30 * uVar30;
            uVar30 = ((int)(*(int *)(iVar18 + 0x96b8) * uVar9) >> 9) +
                     ((int)(*(int *)(iVar18 + 0x96b4) * uVar6) >> 9) +
                     ((int)(*(int *)(iVar18 + 0x96bc) * uVar27) >> 9);
            iVar39 = iVar26 >> 0xb;
            uVar30 = uVar30 & ~((int)uVar30 >> 0x1f);
            iVar26 = iVar26 >> 9;
            if (*(char *)(param_1 + 0x9a93) != '\0') {
              if (iVar39 < 0x80) {
                iVar39 = param_1 + iVar39;
              }
              else {
                iVar39 = param_1 + 0x7f;
              }
              iVar26 = (uint)*(byte *)(iVar39 + 0x9890) << 1;
            }
            uVar40 = iVar26 * (uint)puVar15[0xc] + uVar30 * *puVar15 + uVar40;
            uVar19 = (uint)puVar15[0xd] * iVar26 + uVar30 * puVar15[1] + uVar19;
            uVar22 = (uint)puVar15[0xe] * iVar26 + uVar30 * puVar15[2] + uVar22;
          }
          uVar10 = uVar10 >> 1;
          puVar15 = puVar15 + 3;
          iVar18 = iVar18 + 0xc;
        } while (uVar10 != 0);
      }
      uVar22 = uVar22 >> 0xe;
      uVar19 = uVar19 >> 0xe;
      if (0x1e < uVar22) {
        uVar22 = 0x1f;
      }
      if (0x1e < uVar19) {
        uVar19 = 0x1f;
      }
      uVar36 = (ushort)(uVar22 << 10) | (ushort)(uVar19 << 5);
      if (uVar40 >> 0xe < 0x20) {
        uVar36 = uVar36 | (ushort)(uVar40 >> 0xe);
      }
      else {
        uVar36 = uVar36 | 0x1f;
      }
      local_f8 = local_f8 + 1;
      *local_f8 = uVar36;
    } while (local_fc != piVar28);
    local_f4 = (ushort *)(param_1 + 0x43c);
    pbVar33 = (byte *)(param_1 + 0x4cc);
    uVar7 = *(uint *)(param_1 + 0x634);
    puVar16 = (undefined2 *)(param_1 + *(int *)(param_1 + 800) * 2 + 0x1344);
    if (*(int *)(param_1 + 0x318) - (int)local_f4 >> 1 == 0) {
      puVar15 = (ushort *)((int)&local_ac + 2);
      uVar8 = 0;
      uVar37 = uVar7;
      pbVar35 = pbVar33;
      do {
        pbVar34 = pbVar35 + 1;
        uVar22 = (uint)*pbVar35;
        puVar15 = puVar15 + 1;
        uVar7 = (uint)*puVar15;
        uVar8 = uVar22 - uVar8;
        if (uVar8 != 0) {
          uVar5 = (undefined2)uVar37;
          uVar37 = -((uint)((int)puVar16 << 0x1d) >> 0x1e) & 7;
          if (uVar8 <= uVar37) {
            uVar37 = uVar8;
          }
          uVar19 = uVar8;
          if ((uVar8 < 0xb) || (puVar12 = puVar16, uVar19 = uVar37, uVar37 != 0)) {
            puVar12 = puVar16 + 1;
            *puVar16 = uVar5;
            uVar37 = uVar19;
            if (uVar19 != 1) {
              puVar16[1] = uVar5;
              puVar12 = puVar16 + 2;
              if (uVar19 != 2) {
                puVar16[2] = uVar5;
                puVar12 = puVar16 + 3;
                if (uVar19 != 3) {
                  puVar16[3] = uVar5;
                  puVar12 = puVar16 + 4;
                  if (uVar19 != 4) {
                    puVar16[4] = uVar5;
                    puVar12 = puVar16 + 5;
                    if (uVar19 != 5) {
                      puVar16[5] = uVar5;
                      puVar12 = puVar16 + 6;
                      if (uVar19 != 6) {
                        puVar16[6] = uVar5;
                        puVar12 = puVar16 + 7;
                        if (uVar19 != 7) {
                          puVar16[7] = uVar5;
                          puVar12 = puVar16 + 8;
                          if (uVar19 != 8) {
                            puVar16[8] = uVar5;
                            puVar12 = puVar16 + 9;
                            if (uVar19 == 10) {
                              puVar12 = puVar16 + 10;
                              puVar16[9] = uVar5;
                            }
                            else {
                              uVar37 = 9;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (uVar8 != uVar19) goto LAB_0804bc44;
          }
          else {
LAB_0804bc44:
            uVar6 = uVar8 - uVar19;
            uVar40 = uVar6 & 0xfffffff8;
            if (uVar40 != 0) {
              puVar17 = (undefined8 *)(puVar16 + uVar19);
              uVar19 = 0;
              do {
                uVar19 = uVar19 + 1;
                *puVar17 = 0;
                puVar17[1] = 0;
                puVar17 = puVar17 + 2;
              } while (uVar19 < uVar6 >> 3);
              uVar37 = uVar37 + uVar40;
              puVar12 = puVar12 + uVar40;
              if (uVar40 == uVar6) goto LAB_0804bce8;
            }
            *puVar12 = uVar5;
            if (((((uVar37 + 1 < uVar8) && (puVar12[1] = uVar5, uVar37 + 2 < uVar8)) &&
                 (puVar12[2] = uVar5, uVar37 + 3 < uVar8)) &&
                ((puVar12[3] = uVar5, uVar37 + 4 < uVar8 && (puVar12[4] = uVar5, uVar37 + 5 < uVar8)
                 ))) && (puVar12[5] = uVar5, uVar37 + 6 < uVar8)) {
              puVar12[6] = uVar5;
            }
          }
LAB_0804bce8:
          puVar16 = puVar16 + uVar8;
        }
        uVar8 = uVar22;
        uVar37 = uVar7;
        pbVar35 = pbVar34;
      } while (pbVar34 != pbVar33 + iVar11);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x31c) - (int)pbVar33;
      if (iVar11 == 0) {
        uVar22 = 0;
      }
      else {
        local_f8 = local_a8;
        uVar8 = 0;
        uVar37 = uVar7;
        pbVar35 = pbVar33;
        do {
          pbVar34 = pbVar35 + 1;
          uVar22 = *pbVar35 & 0x7f;
          if ((*pbVar35 & 0x80) == 0) {
            uVar36 = *local_f8;
            local_f8 = local_f8 + 1;
          }
          else {
            uVar36 = *local_f4;
            local_f4 = local_f4 + 1;
          }
          uVar7 = (uint)uVar36;
          uVar8 = uVar22 - uVar8;
          if (uVar8 != 0) {
            uVar5 = (undefined2)uVar37;
            uVar37 = -((uint)((int)puVar16 << 0x1d) >> 0x1e) & 7;
            if (uVar8 <= uVar37) {
              uVar37 = uVar8;
            }
            uVar19 = uVar8;
            if ((uVar8 < 0xb) || (puVar12 = puVar16, uVar19 = uVar37, uVar37 != 0)) {
              puVar12 = puVar16 + 1;
              *puVar16 = uVar5;
              uVar37 = uVar19;
              if (uVar19 != 1) {
                puVar16[1] = uVar5;
                puVar12 = puVar16 + 2;
                if (uVar19 != 2) {
                  puVar16[2] = uVar5;
                  puVar12 = puVar16 + 3;
                  if (uVar19 != 3) {
                    puVar16[3] = uVar5;
                    puVar12 = puVar16 + 4;
                    if (uVar19 != 4) {
                      puVar16[4] = uVar5;
                      puVar12 = puVar16 + 5;
                      if (uVar19 != 5) {
                        puVar16[5] = uVar5;
                        puVar12 = puVar16 + 6;
                        if (uVar19 != 6) {
                          puVar16[6] = uVar5;
                          puVar12 = puVar16 + 7;
                          if (uVar19 != 7) {
                            puVar16[7] = uVar5;
                            puVar12 = puVar16 + 8;
                            if (uVar19 != 8) {
                              puVar16[8] = uVar5;
                              puVar12 = puVar16 + 9;
                              if (uVar19 == 10) {
                                puVar12 = puVar16 + 10;
                                puVar16[9] = uVar5;
                              }
                              else {
                                uVar37 = 9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (uVar8 != uVar19) goto LAB_0804ba88;
            }
            else {
LAB_0804ba88:
              uVar6 = uVar8 - uVar19;
              uVar40 = uVar6 & 0xfffffff8;
              if (uVar40 != 0) {
                puVar17 = (undefined8 *)(puVar16 + uVar19);
                uVar19 = 0;
                do {
                  uVar19 = uVar19 + 1;
                  *puVar17 = 0;
                  puVar17[1] = 0;
                  puVar17 = puVar17 + 2;
                } while (uVar19 < uVar6 >> 3);
                puVar12 = puVar12 + uVar40;
                uVar37 = uVar37 + uVar40;
                if (uVar40 == uVar6) goto LAB_0804bb24;
              }
              *puVar12 = uVar5;
              if ((((uVar37 + 1 < uVar8) && (puVar12[1] = uVar5, uVar37 + 2 < uVar8)) &&
                  (puVar12[2] = uVar5, uVar37 + 3 < uVar8)) &&
                 (((puVar12[3] = uVar5, uVar37 + 4 < uVar8 &&
                   (puVar12[4] = uVar5, uVar37 + 5 < uVar8)) &&
                  (puVar12[5] = uVar5, uVar37 + 6 < uVar8)))) {
                puVar12[6] = uVar5;
              }
            }
LAB_0804bb24:
            puVar16 = puVar16 + uVar8;
          }
          uVar8 = uVar22;
          uVar37 = uVar7;
          pbVar35 = pbVar34;
        } while (pbVar34 != pbVar33 + iVar11);
      }
    }
  }
  local_fc = (int *)(param_1 + 0x43c);
  local_104 = param_1 + 0x4cc;
  uVar22 = iVar23 - uVar22;
  if (uVar22 != 0) {
    uVar5 = (undefined2)uVar7;
    uVar8 = -((uint)((int)puVar16 << 0x1d) >> 0x1e) & 7;
    if (uVar22 <= uVar8) {
      uVar8 = uVar22;
    }
    uVar37 = uVar22;
    if ((uVar22 < 0xb) || (uVar37 = uVar8, uVar8 != 0)) {
      uVar8 = uVar37;
      puVar12 = puVar16 + 1;
      *puVar16 = uVar5;
      if (uVar8 < 2) {
        iVar23 = 1;
      }
      else {
        puVar16[1] = uVar5;
        puVar12 = puVar16 + 2;
        if (uVar8 < 3) {
          iVar23 = 2;
        }
        else {
          puVar16[2] = uVar5;
          puVar12 = puVar16 + 3;
          if (uVar8 < 4) {
            iVar23 = 3;
          }
          else {
            puVar16[3] = uVar5;
            puVar12 = puVar16 + 4;
            if (uVar8 < 5) {
              iVar23 = 4;
            }
            else {
              puVar16[4] = uVar5;
              puVar12 = puVar16 + 5;
              if (uVar8 < 6) {
                iVar23 = 5;
              }
              else {
                puVar16[5] = uVar5;
                puVar12 = puVar16 + 6;
                if (uVar8 < 7) {
                  iVar23 = 6;
                }
                else {
                  puVar16[6] = uVar5;
                  puVar12 = puVar16 + 7;
                  if (uVar8 < 8) {
                    iVar23 = 7;
                  }
                  else {
                    puVar16[7] = uVar5;
                    puVar12 = puVar16 + 8;
                    if (uVar8 < 9) {
                      iVar23 = 8;
                    }
                    else {
                      puVar16[8] = uVar5;
                      puVar12 = puVar16 + 9;
                      if (uVar8 < 10) {
                        iVar23 = 9;
                      }
                      else {
                        puVar12 = puVar16 + 10;
                        iVar23 = 10;
                        puVar16[9] = uVar5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (uVar22 == uVar8) goto LAB_0804beb0;
    }
    else {
      iVar23 = 0;
      puVar12 = puVar16;
    }
    uVar19 = uVar22 - uVar8;
    uVar37 = uVar19 & 0xfffffff8;
    if (uVar37 != 0) {
      puVar17 = (undefined8 *)(puVar16 + uVar8);
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17 = puVar17 + 2;
      } while (uVar8 < uVar19 >> 3);
      puVar12 = puVar12 + uVar37;
      iVar23 = iVar23 + uVar37;
      if (uVar37 == uVar19) goto LAB_0804beb0;
    }
    *puVar12 = uVar5;
    if (((((iVar23 + 1U < uVar22) && (puVar12[1] = uVar5, iVar23 + 2U < uVar22)) &&
         (puVar12[2] = uVar5, iVar23 + 3U < uVar22)) &&
        ((puVar12[3] = uVar5, iVar23 + 4U < uVar22 && (puVar12[4] = uVar5, iVar23 + 5U < uVar22))))
       && (puVar12[5] = uVar5, iVar23 + 6U < uVar22)) {
      puVar12[6] = uVar5;
    }
  }
LAB_0804beb0:
  *(uint *)(param_1 + 0x634) = uVar7;
  *(uint *)(param_1 + 800) = local_b8;
  *(int *)(param_1 + 0x314) = local_ac;
  *(int **)(param_1 + 0x318) = local_fc;
  *(int *)(param_1 + 0x31c) = local_104;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0xff;
  if (local_b8 < 0x80) {
    return;
  }
  FUN_08047860(param_1);
  return;
}


