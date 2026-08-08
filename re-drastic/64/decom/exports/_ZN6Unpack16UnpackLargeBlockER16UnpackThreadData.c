/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack16UnpackLargeBlockER16UnpackThreadData
 * Address  : 001de2c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::UnpackLargeBlock(UnpackThreadData&) */

void __thiscall Unpack::UnpackLargeBlock(Unpack *this,UnpackThreadData *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  long lVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  UnpackFilter aUStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1[0x38] != (UnpackThreadData)0x0) ||
      (param_1[0x38] = (UnpackThreadData)0x1, param_1[0x35] == (UnpackThreadData)0x0)) ||
     (((param_1[0x10] != (UnpackThreadData)0x0 ||
       ((*(int *)(param_1 + 8) < *(int *)(this + 0xd0) + -0x18 ||
        (cVar19 = UnpReadBuf(), cVar19 != '\0')))) &&
      (cVar19 = ReadTables((BitInput *)this,(UnpackBlockHeader *)(param_1 + 8),
                           (UnpackBlockTables *)(param_1 + 0x3c)), cVar19 != '\0')))) {
    iVar39 = *(int *)(param_1 + 8);
    if (iVar39 <= *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x30)) {
      iVar15 = *(int *)(param_1 + 0x4ad8) + -0x10;
      iVar16 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) + -1;
      puVar4 = (uint *)(param_1 + 0x1e14);
      uVar42 = *(ulong *)(this + 0xc0);
      uVar21 = *(ulong *)(this + 0xe980);
      puVar5 = (uint *)(param_1 + 0x2d00);
      iVar6 = iVar16;
      if (iVar15 < iVar16) {
        iVar6 = iVar15;
      }
      do {
        uVar42 = uVar42 & uVar21;
        *(ulong *)(this + 0xc0) = uVar42;
        if (iVar6 <= iVar39) {
          if ((iVar16 < iVar39) ||
             ((iVar16 == iVar39 && (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0xc)))))
          goto LAB_001de948;
          if ((iVar15 <= iVar39) &&
             ((param_1[0x4ade] == (UnpackThreadData)0x0 || (*(int *)(param_1 + 0x4ad8) <= iVar39))))
          {
            uVar22 = 1;
            param_1[0x4adf] = (UnpackThreadData)0x1;
            goto LAB_001de958;
          }
        }
        if ((*(ulong *)(this + 0x4b88) - uVar42 & uVar21) < 0x1004 &&
            uVar42 != *(ulong *)(this + 0x4b88)) {
          UnpWriteBuf();
          if (*(long *)(this + 0x4da0) < *(long *)(this + 0x4db0)) {
            uVar22 = 0;
            goto LAB_001de958;
          }
          iVar39 = *(int *)(param_1 + 8);
        }
        lVar38 = *(long *)(param_1 + 0x18);
        uVar33 = *(uint *)(param_1 + 0xc0);
        iVar20 = *(int *)(param_1 + 0xc);
        uVar34 = ((uint)*(byte *)(lVar38 + iVar39 + 2) | (uint)*(byte *)(lVar38 + iVar39) << 0x10 |
                 (uint)*(byte *)(lVar38 + iVar39 + 1) << 8) >> (ulong)(8U - iVar20 & 0x1f) & 0xfffe;
        if (uVar34 < *(uint *)(param_1 + (ulong)uVar33 * 4 + 0x40)) {
          uVar21 = (ulong)(uVar34 >> (ulong)(0x10 - uVar33 & 0x1f));
          uVar12 = *(ushort *)(param_1 + uVar21 * 2 + 0x4c4);
          uVar32 = (uint)uVar12;
          uVar29 = (uint)(byte)param_1[uVar21 + 0xc4] + iVar20 & 7;
          iVar39 = iVar39 + ((uint)(byte)param_1[uVar21 + 0xc4] + iVar20 >> 3);
          *(int *)(param_1 + 8) = iVar39;
          *(uint *)(param_1 + 0xc) = uVar29;
          uVar33 = (uint)uVar12;
          if (uVar33 < 0x100) goto LAB_001de690;
LAB_001de62c:
          if (uVar33 < 0x106) {
            if (uVar33 == 0x100) {
              cVar19 = ReadFilter(this,(BitInput *)(param_1 + 8),aUStack_20);
              if ((cVar19 != '\0') && (cVar19 = AddFilter(this,aUStack_20), cVar19 != '\0'))
              goto LAB_001def98;
              goto LAB_001de948;
            }
            uVar42 = *(ulong *)(this + 0xc0);
            if (uVar33 == 0x101) {
              uVar34 = *(uint *)(this + 0xb4);
              if (uVar34 == 0) {
                uVar21 = *(ulong *)(this + 0xe980);
              }
              else {
                uVar30 = uVar42 - *(uint *)(this + 0xa0);
                uVar21 = uVar30;
                if (uVar30 < uVar42) {
                  uVar21 = uVar42;
                }
                lVar38 = *(long *)(this + 0x4b90);
                if (*(long *)(this + 0xe978) - 0x1001U <= uVar21) {
                  uVar26 = uVar30 + 1;
                  *(undefined *)(lVar38 + uVar42) =
                       *(undefined *)(lVar38 + (uVar30 & *(ulong *)(this + 0xe980)));
                  uVar21 = *(ulong *)(this + 0xe980);
                  uVar42 = *(long *)(this + 0xc0) + 1U & uVar21;
                  *(ulong *)(this + 0xc0) = uVar42;
                  if (uVar34 != 1) {
                    do {
                      uVar21 = uVar21 & uVar26;
                      uVar26 = uVar26 + 1;
                      *(undefined *)(*(long *)(this + 0x4b90) + uVar42) =
                           *(undefined *)(*(long *)(this + 0x4b90) + uVar21);
                      uVar21 = *(ulong *)(this + 0xe980);
                      uVar42 = *(long *)(this + 0xc0) + 1U & uVar21;
                      *(ulong *)(this + 0xc0) = uVar42;
                    } while (uVar26 != (uVar34 - 2) + uVar30 + 2);
                  }
                  goto LAB_001df040;
                }
                *(ulong *)(this + 0xc0) = uVar42 + uVar34;
                puVar37 = (undefined *)(lVar38 + uVar42);
                puVar36 = (undefined *)(lVar38 + uVar30);
                if (7 < uVar34) {
                  uVar33 = uVar34 - 8;
                  bVar18 = (long)uVar30 < (long)(uVar42 + 0x10);
                  bVar17 = false;
                  if (bVar18) {
                    bVar17 = (long)(uVar42 - (uVar30 + 0x10)) < 0;
                  }
                  bVar18 = bVar17 != (bVar18 && SBORROW8(uVar42,uVar30 + 0x10));
                  if ((bVar18 || uVar33 < 7) || !bVar18 && uVar33 == 7) {
                    puVar24 = puVar37;
                    puVar28 = puVar36;
                    do {
                      *puVar24 = *puVar28;
                      puVar3 = puVar24 + 8;
                      puVar24[1] = puVar28[1];
                      puVar24[2] = puVar28[2];
                      puVar24[3] = puVar28[3];
                      puVar24[4] = puVar28[4];
                      puVar24[5] = puVar28[5];
                      puVar24[6] = puVar28[6];
                      puVar24[7] = puVar28[7];
                      puVar24 = puVar3;
                      puVar28 = puVar28 + 8;
                    } while (puVar37 + (ulong)(uVar33 & 0xfffffff8) + 8 != puVar3);
                  }
                  else {
                    uVar29 = (uVar33 >> 3) + 1;
                    lVar38 = 0;
                    do {
                      uVar22 = *(undefined8 *)(puVar36 + lVar38);
                      *(undefined8 *)((long)(puVar37 + lVar38) + 8) =
                           *(undefined8 *)((long)(puVar36 + lVar38) + 8);
                      *(undefined8 *)(puVar37 + lVar38) = uVar22;
                      lVar38 = lVar38 + 0x10;
                    } while (lVar38 != ((ulong)((uVar29 >> 1) - 1) + 1) * 0x10);
                    lVar38 = ((ulong)uVar29 & 0x3ffffffe) * 8;
                    if ((uVar29 & 1) != 0) {
                      puVar37[lVar38] = puVar36[lVar38];
                      puVar37[lVar38 + 1] = puVar36[lVar38 + 1];
                      puVar37[lVar38 + 2] = puVar36[lVar38 + 2];
                      puVar37[lVar38 + 3] = puVar36[lVar38 + 3];
                      puVar37[lVar38 + 4] = puVar36[lVar38 + 4];
                      puVar37[lVar38 + 5] = puVar36[lVar38 + 5];
                      puVar37[lVar38 + 6] = puVar36[lVar38 + 6];
                      puVar37[lVar38 + 7] = puVar36[lVar38 + 7];
                    }
                  }
                  lVar38 = (ulong)(uVar33 & 0xfffffff8) + 8;
                  puVar36 = puVar36 + lVar38;
                  puVar37 = puVar37 + lVar38;
                  uVar34 = uVar34 & 7;
                  if (uVar34 == 0) goto LAB_001def98;
                }
                *puVar37 = *puVar36;
                if (((uVar34 == 1) || (puVar37[1] = puVar36[1], uVar34 == 2)) ||
                   ((puVar37[2] = puVar36[2], uVar34 == 3 ||
                    (((puVar37[3] = puVar36[3], uVar34 == 4 ||
                      (puVar37[4] = puVar36[4], uVar34 == 5)) ||
                     (puVar37[5] = puVar36[5], uVar34 != 7)))))) goto LAB_001def98;
                puVar37[6] = puVar36[6];
                iVar39 = *(int *)(param_1 + 8);
                uVar42 = *(ulong *)(this + 0xc0);
                uVar21 = *(ulong *)(this + 0xe980);
              }
            }
            else {
              lVar23 = (long)(int)(uVar33 - 0x102) + 0x28;
              uVar34 = *(uint *)(this + lVar23 * 4);
              if (uVar33 - 0x102 != 0) {
                lVar23 = lVar23 * 4;
                lVar35 = (ulong)(uVar33 - 0x103) * -4;
                memmove(this + lVar35 + lVar23,this + lVar23 + -4 + lVar35,
                        ((ulong)(uVar33 - 0x103) + 1) * 4);
              }
              *(uint *)(this + 0xa0) = uVar34;
              iVar39 = *(int *)(param_1 + 8);
              uVar29 = *(uint *)(param_1 + 0x2d84);
              iVar20 = *(int *)(param_1 + 0xc);
              uVar33 = ((uint)*(byte *)(lVar38 + iVar39 + 2) |
                        (uint)*(byte *)(lVar38 + iVar39) << 0x10 |
                       (uint)*(byte *)(lVar38 + iVar39 + 1) << 8) >> (ulong)(8U - iVar20 & 0x1f) &
                       0xfffe;
              if (uVar33 < puVar5[(ulong)uVar29 + 1]) {
                uVar21 = (ulong)(uVar33 >> (ulong)(0x10 - uVar29 & 0x1f));
                uVar12 = *(ushort *)((long)puVar5 + uVar21 * 2 + 0x488);
                uVar33 = (uint)*(byte *)((long)puVar5 + uVar21 + 0x88) + iVar20;
                uVar29 = uVar33 & 7;
                iVar39 = iVar39 + (uVar33 >> 3);
                *(int *)(param_1 + 8) = iVar39;
                *(uint *)(param_1 + 0xc) = uVar29;
              }
              else {
                uVar32 = uVar29 + 1;
                if (uVar32 < 0xf) {
                  uVar21 = (ulong)uVar32;
                  if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                    uVar32 = uVar29 + 2;
                    if (uVar29 == 0xd) {
LAB_001df180:
                      uVar25 = 1;
                      uVar30 = 0xe;
                      uVar21 = 0xf;
                      goto LAB_001df18c;
                    }
                    uVar21 = (ulong)uVar32;
                    if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                      uVar32 = uVar29 + 3;
                      if (uVar29 == 0xc) goto LAB_001df180;
                      uVar21 = (ulong)uVar32;
                      if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                        uVar32 = uVar29 + 4;
                        if (uVar29 == 0xb) goto LAB_001df180;
                        uVar21 = (ulong)uVar32;
                        if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                          uVar32 = uVar29 + 5;
                          if (uVar29 == 10) goto LAB_001df180;
                          uVar21 = (ulong)uVar32;
                          if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                            uVar32 = uVar29 + 6;
                            if (uVar29 == 9) goto LAB_001df180;
                            uVar21 = (ulong)uVar32;
                            if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                              uVar32 = uVar29 + 7;
                              if (uVar29 == 8) goto LAB_001df180;
                              uVar21 = (ulong)uVar32;
                              if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                uVar32 = uVar29 + 8;
                                if (uVar29 == 7) goto LAB_001df180;
                                uVar21 = (ulong)uVar32;
                                if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                  uVar32 = uVar29 + 9;
                                  if (uVar29 == 6) goto LAB_001df180;
                                  uVar21 = (ulong)uVar32;
                                  if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                    uVar32 = uVar29 + 10;
                                    if (uVar29 == 5) goto LAB_001df180;
                                    uVar21 = (ulong)uVar32;
                                    if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                      uVar32 = uVar29 + 0xb;
                                      if (uVar29 == 4) goto LAB_001df180;
                                      uVar21 = (ulong)uVar32;
                                      if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                        uVar32 = uVar29 + 0xc;
                                        if (uVar29 == 3) goto LAB_001df180;
                                        uVar21 = (ulong)uVar32;
                                        if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                          uVar32 = uVar29 + 0xd;
                                          if (uVar29 == 2) goto LAB_001df180;
                                          uVar21 = (ulong)uVar32;
                                          if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                            uVar32 = uVar29 + 0xe;
                                            if (uVar29 == 1) goto LAB_001df180;
                                            uVar21 = (ulong)uVar32;
                                            if (puVar5[(ulong)uVar32 + 1] <= uVar33) {
                                              if ((uVar29 == 0) ||
                                                 (*(uint *)(param_1 + 0x2d3c) <= uVar33))
                                              goto LAB_001debec;
                                              uVar32 = 0xe;
                                              uVar21 = 0xe;
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
                  uVar30 = (ulong)(uVar32 - 1);
                  uVar25 = 0x10 - uVar32;
                }
                else {
LAB_001debec:
                  uVar25 = 1;
                  uVar30 = 0xe;
                  uVar32 = 0xf;
                  uVar21 = 0xf;
                }
LAB_001df18c:
                iVar39 = iVar39 + (iVar20 + uVar32 >> 3);
                uVar29 = iVar20 + uVar32 & 7;
                *(int *)(param_1 + 8) = iVar39;
                *(uint *)(param_1 + 0xc) = uVar29;
                uVar33 = (uVar33 - puVar5[uVar30 + 1] >> (ulong)(uVar25 & 0x1f)) +
                         puVar5[uVar21 + 0x11];
                if (*puVar5 <= uVar33) {
                  uVar33 = 0;
                }
                uVar12 = *(ushort *)((long)puVar5 + (ulong)uVar33 * 2 + 0xc88);
              }
              uVar33 = (uint)uVar12;
              if (uVar33 < 8) {
                uVar33 = uVar33 + 2;
              }
              else {
                uVar32 = (uVar12 >> 2) - 1;
                uVar33 = ((((uint)*(byte *)(lVar38 + iVar39 + 2) |
                            (uint)*(byte *)(lVar38 + iVar39) << 0x10 |
                           (uint)*(byte *)(lVar38 + iVar39 + 1) << 8) >> (ulong)(8 - uVar29 & 0x1f)
                          & 0xffff) >> (ulong)(0x10 - uVar32 & 0x1f)) +
                         ((uVar33 & 3 | 4) << (ulong)(uVar32 & 0x1f)) + 2;
                *(uint *)(param_1 + 8) = iVar39 + (uVar29 + uVar32 >> 3);
                *(uint *)(param_1 + 0xc) = uVar29 + uVar32 & 7;
              }
              uVar30 = uVar42 - uVar34;
              *(uint *)(this + 0xb4) = uVar33;
              uVar21 = uVar30;
              if (uVar30 < uVar42) {
                uVar21 = uVar42;
              }
              if (uVar21 < *(long *)(this + 0xe978) - 0x1001U) {
                *(ulong *)(this + 0xc0) = uVar42 + uVar33;
                puVar37 = (undefined *)(*(long *)(this + 0x4b90) + uVar30);
                puVar36 = (undefined *)(*(long *)(this + 0x4b90) + uVar42);
                if (7 < uVar33) {
                  uVar34 = uVar33 - 8;
                  bVar18 = (long)uVar30 < (long)(uVar42 + 0x10);
                  bVar17 = false;
                  if (bVar18) {
                    bVar17 = (long)(uVar42 - (uVar30 + 0x10)) < 0;
                  }
                  bVar18 = bVar17 != (bVar18 && SBORROW8(uVar42,uVar30 + 0x10));
                  if ((bVar18 || uVar34 < 7) || !bVar18 && uVar34 == 7) {
                    puVar24 = puVar37;
                    puVar28 = puVar36;
                    do {
                      *puVar28 = *puVar24;
                      puVar3 = puVar28 + 8;
                      puVar28[1] = puVar24[1];
                      puVar28[2] = puVar24[2];
                      puVar28[3] = puVar24[3];
                      puVar28[4] = puVar24[4];
                      puVar28[5] = puVar24[5];
                      puVar28[6] = puVar24[6];
                      puVar28[7] = puVar24[7];
                      puVar24 = puVar24 + 8;
                      puVar28 = puVar3;
                    } while (puVar3 != puVar36 + (ulong)(uVar34 & 0xfffffff8) + 8);
                  }
                  else {
                    uVar29 = (uVar34 >> 3) + 1;
                    lVar38 = 0;
                    do {
                      uVar22 = *(undefined8 *)(puVar37 + lVar38);
                      *(undefined8 *)((long)(puVar36 + lVar38) + 8) =
                           *(undefined8 *)((long)(puVar37 + lVar38) + 8);
                      *(undefined8 *)(puVar36 + lVar38) = uVar22;
                      lVar38 = lVar38 + 0x10;
                    } while (((ulong)((uVar29 >> 1) - 1) + 1) * 0x10 - lVar38 != 0);
                    lVar38 = ((ulong)uVar29 & 0x3ffffffe) * 8;
                    if ((uVar29 & 1) != 0) {
                      puVar36[lVar38] = puVar37[lVar38];
                      puVar36[lVar38 + 1] = puVar37[lVar38 + 1];
                      puVar36[lVar38 + 2] = puVar37[lVar38 + 2];
                      puVar36[lVar38 + 3] = puVar37[lVar38 + 3];
                      puVar36[lVar38 + 4] = puVar37[lVar38 + 4];
                      puVar36[lVar38 + 5] = puVar37[lVar38 + 5];
                      puVar36[lVar38 + 6] = puVar37[lVar38 + 6];
                      puVar36[lVar38 + 7] = puVar37[lVar38 + 7];
                    }
                  }
                  lVar38 = (ulong)(uVar34 & 0xfffffff8) + 8;
                  puVar37 = puVar37 + lVar38;
                  puVar36 = puVar36 + lVar38;
                  uVar33 = uVar33 & 7;
                }
                if ((((uVar33 == 0) || (*puVar36 = *puVar37, uVar33 == 1)) ||
                    (puVar36[1] = puVar37[1], uVar33 == 2)) ||
                   (((puVar36[2] = puVar37[2], uVar33 == 3 || (puVar36[3] = puVar37[3], uVar33 == 4)
                     ) || ((puVar36[4] = puVar37[4], uVar33 == 5 ||
                           (puVar36[5] = puVar37[5], uVar33 != 7)))))) goto LAB_001def98;
                puVar36[6] = puVar37[6];
                iVar39 = *(int *)(param_1 + 8);
                uVar42 = *(ulong *)(this + 0xc0);
                uVar21 = *(ulong *)(this + 0xe980);
              }
              else {
                uVar21 = *(ulong *)(this + 0xe980);
                uVar26 = uVar30 + 1;
                uVar31 = uVar30;
                if (uVar33 == 0) goto LAB_001df040;
                while( true ) {
                  uVar27 = uVar26;
                  *(undefined *)(*(long *)(this + 0x4b90) + uVar42) =
                       *(undefined *)(*(long *)(this + 0x4b90) + (uVar31 & uVar21));
                  uVar21 = *(ulong *)(this + 0xe980);
                  uVar42 = *(long *)(this + 0xc0) + 1U & uVar21;
                  *(ulong *)(this + 0xc0) = uVar42;
                  if (uVar27 == uVar30 + 1 + (ulong)(uVar33 - 1)) break;
                  uVar26 = uVar27 + 1;
                  uVar31 = uVar27;
                }
                iVar39 = *(int *)(param_1 + 8);
              }
            }
          }
          else {
            uVar32 = uVar33 - 0x106;
            uVar34 = ((uint)*(byte *)(lVar38 + iVar39 + 2) |
                      (uint)*(byte *)(lVar38 + iVar39) << 0x10 |
                     (uint)*(byte *)(lVar38 + iVar39 + 1) << 8) >> (ulong)(8 - uVar29 & 0x1f);
            if (uVar32 < 8) {
              uVar32 = *(uint *)(param_1 + 0xfac);
              uVar34 = uVar34 & 0xfffe;
              uVar33 = uVar33 - 0x104;
              if (*(uint *)(param_1 + (ulong)uVar32 * 4 + 0xf2c) <= uVar34) goto LAB_001de750;
LAB_001dec78:
              uVar21 = (ulong)(uVar34 >> (ulong)(0x10 - uVar32 & 0x1f));
              uVar12 = *(ushort *)(param_1 + uVar21 * 2 + 0x13b0);
              uVar32 = (byte)param_1[uVar21 + 0xfb0] + uVar29 & 7;
              iVar39 = iVar39 + ((byte)param_1[uVar21 + 0xfb0] + uVar29 >> 3);
              *(int *)(param_1 + 8) = iVar39;
              *(uint *)(param_1 + 0xc) = uVar32;
              if (3 < uVar12) goto LAB_001decac;
LAB_001df0fc:
              uVar29 = uVar12 + 1;
            }
            else {
              uVar25 = (uVar32 >> 2) - 1;
              uVar33 = uVar25 + uVar29;
              uVar29 = uVar33 & 7;
              iVar39 = iVar39 + (uVar33 >> 3);
              *(int *)(param_1 + 8) = iVar39;
              *(uint *)(param_1 + 0xc) = uVar29;
              uVar33 = ((uVar34 & 0xffff) >> (ulong)(0x10 - uVar25 & 0x1f)) +
                       ((uVar32 & 3 | 4) << (ulong)(uVar25 & 0x1f)) + 2;
              uVar32 = *(uint *)(param_1 + 0xfac);
              uVar34 = ((uint)*(byte *)(lVar38 + iVar39 + 2) |
                        (uint)*(byte *)(lVar38 + iVar39) << 0x10 |
                       (uint)*(byte *)(lVar38 + iVar39 + 1) << 8) >> (ulong)(8 - uVar29 & 0x1f) &
                       0xfffe;
              if (uVar34 < *(uint *)(param_1 + (ulong)uVar32 * 4 + 0xf2c)) goto LAB_001dec78;
LAB_001de750:
              uVar25 = uVar32 + 1;
              if (uVar25 < 0xf) {
                uVar21 = (ulong)uVar25;
                if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                  uVar25 = uVar32 + 2;
                  if (uVar32 == 0xd) {
LAB_001df468:
                    uVar41 = 1;
                    uVar40 = 0xe;
                    uVar21 = 0xf;
                    goto LAB_001df0b4;
                  }
                  uVar21 = (ulong)uVar25;
                  if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                    uVar25 = uVar32 + 3;
                    if (uVar32 == 0xc) goto LAB_001df468;
                    uVar21 = (ulong)uVar25;
                    if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                      uVar25 = uVar32 + 4;
                      if (uVar32 == 0xb) goto LAB_001df468;
                      uVar21 = (ulong)uVar25;
                      if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                        uVar25 = uVar32 + 5;
                        if (uVar32 == 10) goto LAB_001df468;
                        uVar21 = (ulong)uVar25;
                        if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                          uVar25 = uVar32 + 6;
                          if (uVar32 == 9) goto LAB_001df468;
                          uVar21 = (ulong)uVar25;
                          if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                            uVar25 = uVar32 + 7;
                            if (uVar32 == 8) goto LAB_001df468;
                            uVar21 = (ulong)uVar25;
                            if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                              uVar25 = uVar32 + 8;
                              if (uVar32 == 7) goto LAB_001df468;
                              uVar21 = (ulong)uVar25;
                              if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                                uVar25 = uVar32 + 9;
                                if (uVar32 == 6) goto LAB_001df468;
                                uVar21 = (ulong)uVar25;
                                if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                                  uVar25 = uVar32 + 10;
                                  if (uVar32 == 5) goto LAB_001df468;
                                  uVar21 = (ulong)uVar25;
                                  if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                                    uVar25 = uVar32 + 0xb;
                                    if (uVar32 == 4) goto LAB_001df468;
                                    uVar21 = (ulong)uVar25;
                                    if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34) {
                                      uVar25 = uVar32 + 0xc;
                                      if (uVar32 == 3) goto LAB_001df468;
                                      uVar21 = (ulong)uVar25;
                                      if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34)
                                      {
                                        uVar25 = uVar32 + 0xd;
                                        if (uVar32 == 2) goto LAB_001df468;
                                        uVar21 = (ulong)uVar25;
                                        if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <= uVar34
                                           ) {
                                          uVar25 = uVar32 + 0xe;
                                          if (uVar32 == 1) goto LAB_001df468;
                                          uVar21 = (ulong)uVar25;
                                          if (*(uint *)(param_1 + (ulong)uVar25 * 4 + 0xf2c) <=
                                              uVar34) {
                                            if ((uVar32 == 0) ||
                                               (*(uint *)(param_1 + 0xf64) <= uVar34))
                                            goto LAB_001de920;
                                            uVar25 = 0xe;
                                            uVar21 = 0xe;
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
                uVar40 = uVar25 - 1;
                uVar41 = 0x10 - uVar25;
              }
              else {
LAB_001de920:
                uVar41 = 1;
                uVar40 = 0xe;
                uVar25 = 0xf;
                uVar21 = 0xf;
              }
LAB_001df0b4:
              iVar39 = iVar39 + (uVar25 + uVar29 >> 3);
              uVar32 = uVar25 + uVar29 & 7;
              *(int *)(param_1 + 8) = iVar39;
              *(uint *)(param_1 + 0xc) = uVar32;
              uVar34 = (uVar34 - *(int *)(param_1 + (ulong)uVar40 * 4 + 0xf2c) >>
                       (ulong)(uVar41 & 0x1f)) + *(int *)(param_1 + uVar21 * 4 + 0xf6c);
              if (*(uint *)(param_1 + 0xf28) <= uVar34) {
                uVar34 = 0;
              }
              uVar12 = *(ushort *)(param_1 + (ulong)uVar34 * 2 + 0x1bb0);
              if (uVar12 < 4) goto LAB_001df0fc;
LAB_001decac:
              lVar23 = lVar38 + iVar39;
              uVar34 = (uVar12 >> 1) - 1;
              uVar21 = (ulong)uVar32;
              iVar20 = ((uVar12 & 1 | 2) << (ulong)(uVar34 & 0x1f)) + 1;
              uVar29 = 8 - uVar32;
              uVar40 = (uint)*(byte *)(lVar23 + 2);
              uVar25 = (uint)*(byte *)(lVar23 + 1);
              uVar41 = (uint)*(byte *)(lVar38 + iVar39);
              if (uVar34 < 4) {
                uVar29 = (((uint)(*(byte *)(lVar23 + 4) >> (ulong)(uVar29 & 0x1f)) |
                          (uVar40 << 8 | uVar25 << 0x10 |
                          (uint)*(byte *)(lVar23 + 3) | uVar41 << 0x18) << (ulong)uVar32) >>
                         (ulong)(-uVar34 & 0x1f)) + iVar20;
                *(uint *)(param_1 + 8) = iVar39 + (uVar34 + uVar32 >> 3);
                *(uint *)(param_1 + 0xc) = uVar34 + uVar32 & 7;
              }
              else {
                if (uVar34 != 4) {
                  bVar10 = *(byte *)(lVar23 + 3);
                  uVar32 = ((uVar12 >> 1) + uVar32) - 5;
                  uVar13 = uVar40 << 8;
                  iVar39 = iVar39 + (uVar32 >> 3);
                  uVar1 = uVar25 << 0x10;
                  uVar2 = uVar41 << 0x18;
                  bVar11 = *(byte *)(lVar23 + 4);
                  uVar32 = uVar32 & 7;
                  uVar14 = uVar29 & 0x1f;
                  *(int *)(param_1 + 8) = iVar39;
                  *(uint *)(param_1 + 0xc) = uVar32;
                  uVar25 = (uint)*(byte *)(lVar38 + iVar39 + 1);
                  uVar41 = (uint)*(byte *)(lVar38 + iVar39);
                  uVar40 = (uint)*(byte *)(lVar38 + iVar39 + 2);
                  uVar29 = 8 - uVar32;
                  iVar20 = iVar20 + (((uint)(bVar11 >> (ulong)uVar14) |
                                     (uVar13 | uVar1 | bVar10 | uVar2) << uVar21) >>
                                    (ulong)(0x24 - uVar34 & 0x1f)) * 0x10;
                }
                uVar1 = *(uint *)(param_1 + 0x1e98);
                uVar34 = (uVar25 << 8 | uVar41 << 0x10 | uVar40) >> (ulong)(uVar29 & 0x1f) & 0xfffe;
                if (uVar34 < puVar4[(ulong)uVar1 + 1]) {
                  uVar21 = (ulong)(uVar34 >> (ulong)(0x10 - uVar1 & 0x1f));
                  uVar32 = *(byte *)((long)puVar4 + uVar21 + 0x88) + uVar32;
                  uVar29 = iVar20 + (uint)*(ushort *)((long)puVar4 + uVar21 * 2 + 0x488);
                  *(uint *)(param_1 + 8) = iVar39 + (uVar32 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar32 & 7;
                }
                else {
                  uVar29 = uVar1 + 1;
                  if (uVar29 < 0xf) {
                    uVar21 = (ulong)uVar29;
                    if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                      uVar29 = uVar1 + 2;
                      if (uVar1 == 0xd) {
LAB_001df634:
                        uVar40 = 1;
                        uVar25 = 0xe;
                        uVar21 = 0xf;
                        goto LAB_001df640;
                      }
                      uVar21 = (ulong)uVar29;
                      if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                        uVar29 = uVar1 + 3;
                        if (uVar1 == 0xc) goto LAB_001df634;
                        uVar21 = (ulong)uVar29;
                        if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                          uVar29 = uVar1 + 4;
                          if (uVar1 == 0xb) goto LAB_001df634;
                          uVar21 = (ulong)uVar29;
                          if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                            uVar29 = uVar1 + 5;
                            if (uVar1 == 10) goto LAB_001df634;
                            uVar21 = (ulong)uVar29;
                            if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                              uVar29 = uVar1 + 6;
                              if (uVar1 == 9) goto LAB_001df634;
                              uVar21 = (ulong)uVar29;
                              if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                uVar29 = uVar1 + 7;
                                if (uVar1 == 8) goto LAB_001df634;
                                uVar21 = (ulong)uVar29;
                                if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                  uVar29 = uVar1 + 8;
                                  if (uVar1 == 7) goto LAB_001df634;
                                  uVar21 = (ulong)uVar29;
                                  if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                    uVar29 = uVar1 + 9;
                                    if (uVar1 == 6) goto LAB_001df634;
                                    uVar21 = (ulong)uVar29;
                                    if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                      uVar29 = uVar1 + 10;
                                      if (uVar1 == 5) goto LAB_001df634;
                                      uVar21 = (ulong)uVar29;
                                      if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                        uVar29 = uVar1 + 0xb;
                                        if (uVar1 == 4) goto LAB_001df634;
                                        uVar21 = (ulong)uVar29;
                                        if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                          uVar29 = uVar1 + 0xc;
                                          if (uVar1 == 3) goto LAB_001df634;
                                          uVar21 = (ulong)uVar29;
                                          if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                            uVar29 = uVar1 + 0xd;
                                            if (uVar1 == 2) goto LAB_001df634;
                                            uVar21 = (ulong)uVar29;
                                            if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                              uVar29 = uVar1 + 0xe;
                                              if (uVar1 == 1) goto LAB_001df634;
                                              uVar21 = (ulong)uVar29;
                                              if (puVar4[(ulong)uVar29 + 1] <= uVar34) {
                                                if ((uVar1 == 0) ||
                                                   (*(uint *)(param_1 + 0x1e50) <= uVar34))
                                                goto LAB_001df890;
                                                uVar29 = 0xe;
                                                uVar21 = 0xe;
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
                    uVar25 = uVar29 - 1;
                    uVar40 = 0x10 - uVar29;
                  }
                  else {
LAB_001df890:
                    uVar40 = 1;
                    uVar25 = 0xe;
                    uVar29 = 0xf;
                    uVar21 = 0xf;
                  }
LAB_001df640:
                  *(uint *)(param_1 + 8) = iVar39 + (uVar29 + uVar32 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar29 + uVar32 & 7;
                  uVar34 = (uVar34 - puVar4[(ulong)uVar25 + 1] >> (ulong)(uVar40 & 0x1f)) +
                           puVar4[uVar21 + 0x11];
                  if (*puVar4 <= uVar34) {
                    uVar34 = 0;
                  }
                  uVar29 = iVar20 + (uint)*(ushort *)((long)puVar4 + (ulong)uVar34 * 2 + 0xc88);
                }
              }
              if (0x100 < uVar29) {
                if (uVar29 < 0x2001) {
                  uVar33 = uVar33 + 1;
                }
                else {
                  if (0x40000 < uVar29) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar33 = uVar33 + 2;
                }
              }
            }
            uVar42 = *(ulong *)(this + 0xc0);
            *(uint *)(this + 0xb4) = uVar33;
            uVar30 = uVar42 - uVar29;
            uVar7 = *(undefined4 *)(this + 0xa0);
            uVar8 = *(undefined4 *)(this + 0xa4);
            uVar9 = *(undefined4 *)(this + 0xa8);
            *(uint *)(this + 0xa0) = uVar29;
            *(undefined4 *)(this + 0xa4) = uVar7;
            *(undefined4 *)(this + 0xa8) = uVar8;
            *(undefined4 *)(this + 0xac) = uVar9;
            uVar21 = uVar42;
            if (uVar42 < uVar30) {
              uVar21 = uVar30;
            }
            if (uVar21 < *(long *)(this + 0xe978) - 0x1001U) {
              *(ulong *)(this + 0xc0) = uVar42 + uVar33;
              puVar37 = (undefined *)(*(long *)(this + 0x4b90) + uVar30);
              puVar36 = (undefined *)(*(long *)(this + 0x4b90) + uVar42);
              if (7 < uVar33) {
                lVar38 = uVar42 + 0x10;
                uVar34 = uVar33 - 8;
                uVar21 = uVar30 + 0x10;
                bVar18 = false;
                if ((long)uVar30 < lVar38) {
                  bVar18 = (long)(uVar21 - uVar42) < 0;
                }
                bVar18 = bVar18 == ((long)uVar30 < lVar38 && SBORROW8(uVar21,uVar42));
                if ((((long)uVar30 < lVar38 && uVar21 != uVar42) && bVar18 || uVar34 < 7) ||
                    ((lVar38 <= (long)uVar30 || uVar21 == uVar42) || !bVar18) && uVar34 == 7) {
                  puVar24 = puVar36;
                  puVar28 = puVar37;
                  do {
                    *puVar24 = *puVar28;
                    puVar3 = puVar24 + 8;
                    puVar24[1] = puVar28[1];
                    puVar24[2] = puVar28[2];
                    puVar24[3] = puVar28[3];
                    puVar24[4] = puVar28[4];
                    puVar24[5] = puVar28[5];
                    puVar24[6] = puVar28[6];
                    puVar24[7] = puVar28[7];
                    puVar24 = puVar3;
                    puVar28 = puVar28 + 8;
                  } while (puVar3 != puVar36 + (ulong)(uVar34 & 0xfffffff8) + 8);
                }
                else {
                  uVar29 = (uVar34 >> 3) + 1;
                  lVar38 = 0;
                  do {
                    uVar22 = *(undefined8 *)(puVar37 + lVar38);
                    *(undefined8 *)((long)(puVar36 + lVar38) + 8) =
                         *(undefined8 *)((long)(puVar37 + lVar38) + 8);
                    *(undefined8 *)(puVar36 + lVar38) = uVar22;
                    lVar38 = lVar38 + 0x10;
                  } while (((ulong)((uVar29 >> 1) - 1) + 1) * 0x10 - lVar38 != 0);
                  lVar38 = ((ulong)uVar29 & 0x3ffffffe) * 8;
                  if ((uVar29 & 1) != 0) {
                    puVar36[lVar38] = puVar37[lVar38];
                    puVar36[lVar38 + 1] = puVar37[lVar38 + 1];
                    puVar36[lVar38 + 2] = puVar37[lVar38 + 2];
                    puVar36[lVar38 + 3] = puVar37[lVar38 + 3];
                    puVar36[lVar38 + 4] = puVar37[lVar38 + 4];
                    puVar36[lVar38 + 5] = puVar37[lVar38 + 5];
                    puVar36[lVar38 + 6] = puVar37[lVar38 + 6];
                    puVar36[lVar38 + 7] = puVar37[lVar38 + 7];
                  }
                }
                lVar38 = (ulong)(uVar34 & 0xfffffff8) + 8;
                puVar37 = puVar37 + lVar38;
                puVar36 = puVar36 + lVar38;
                uVar33 = uVar33 & 7;
              }
              if (((((uVar33 == 0) || (*puVar36 = *puVar37, uVar33 == 1)) ||
                   (puVar36[1] = puVar37[1], uVar33 == 2)) ||
                  ((puVar36[2] = puVar37[2], uVar33 == 3 || (puVar36[3] = puVar37[3], uVar33 == 4)))
                  ) || ((puVar36[4] = puVar37[4], uVar33 == 5 ||
                        (puVar36[5] = puVar37[5], uVar33 != 7)))) {
LAB_001def98:
                iVar39 = *(int *)(param_1 + 8);
                uVar42 = *(ulong *)(this + 0xc0);
                uVar21 = *(ulong *)(this + 0xe980);
              }
              else {
                puVar36[6] = puVar37[6];
                iVar39 = *(int *)(param_1 + 8);
                uVar42 = *(ulong *)(this + 0xc0);
                uVar21 = *(ulong *)(this + 0xe980);
              }
            }
            else {
              uVar26 = (uVar33 - 1) + uVar30;
              uVar21 = *(ulong *)(this + 0xe980);
              if (uVar33 == 0) {
LAB_001df040:
                iVar39 = *(int *)(param_1 + 8);
              }
              else {
                do {
                  uVar21 = uVar30 & uVar21;
                  bVar18 = uVar30 != uVar26;
                  uVar30 = uVar30 + 1;
                  *(undefined *)(*(long *)(this + 0x4b90) + uVar42) =
                       *(undefined *)(*(long *)(this + 0x4b90) + uVar21);
                  uVar21 = *(ulong *)(this + 0xe980);
                  uVar42 = *(long *)(this + 0xc0) + 1U & uVar21;
                  *(ulong *)(this + 0xc0) = uVar42;
                } while (bVar18);
                iVar39 = *(int *)(param_1 + 8);
              }
            }
          }
        }
        else {
          uVar29 = uVar33 + 1;
          if (uVar29 < 0xf) {
            uVar21 = (ulong)uVar29;
            if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
              uVar29 = uVar33 + 2;
              if (uVar33 == 0xd) {
LAB_001de6f0:
                uVar33 = 1;
                uVar42 = 0xe;
                uVar21 = 0xf;
                goto LAB_001de5e0;
              }
              uVar21 = (ulong)uVar29;
              if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                uVar29 = uVar33 + 3;
                if (uVar33 == 0xc) goto LAB_001de6f0;
                uVar21 = (ulong)uVar29;
                if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                  uVar29 = uVar33 + 4;
                  if (uVar33 == 0xb) goto LAB_001de6f0;
                  uVar21 = (ulong)uVar29;
                  if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                    uVar29 = uVar33 + 5;
                    if (uVar33 == 10) goto LAB_001de6f0;
                    uVar21 = (ulong)uVar29;
                    if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                      uVar29 = uVar33 + 6;
                      if (uVar33 == 9) goto LAB_001de6f0;
                      uVar21 = (ulong)uVar29;
                      if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                        uVar29 = uVar33 + 7;
                        if (uVar33 == 8) goto LAB_001de6f0;
                        uVar21 = (ulong)uVar29;
                        if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                          uVar29 = uVar33 + 8;
                          if (uVar33 == 7) goto LAB_001de6f0;
                          uVar21 = (ulong)uVar29;
                          if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                            uVar29 = uVar33 + 9;
                            if (uVar33 == 6) goto LAB_001de6f0;
                            uVar21 = (ulong)uVar29;
                            if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                              uVar29 = uVar33 + 10;
                              if (uVar33 == 5) goto LAB_001de6f0;
                              uVar21 = (ulong)uVar29;
                              if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                                uVar29 = uVar33 + 0xb;
                                if (uVar33 == 4) goto LAB_001de6f0;
                                uVar21 = (ulong)uVar29;
                                if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                                  uVar29 = uVar33 + 0xc;
                                  if (uVar33 == 3) goto LAB_001de6f0;
                                  uVar21 = (ulong)uVar29;
                                  if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                                    uVar29 = uVar33 + 0xd;
                                    if (uVar33 == 2) goto LAB_001de6f0;
                                    uVar21 = (ulong)uVar29;
                                    if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                                      uVar29 = uVar33 + 0xe;
                                      if (uVar33 == 1) goto LAB_001de6f0;
                                      uVar21 = (ulong)uVar29;
                                      if (*(uint *)(param_1 + (ulong)uVar29 * 4 + 0x40) <= uVar34) {
                                        if ((uVar33 == 0) || (*(uint *)(param_1 + 0x78) <= uVar34))
                                        goto LAB_001de5d0;
                                        uVar29 = 0xe;
                                        uVar21 = 0xe;
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
            uVar42 = (ulong)(uVar29 - 1);
            uVar33 = 0x10 - uVar29;
          }
          else {
LAB_001de5d0:
            uVar33 = 1;
            uVar42 = 0xe;
            uVar29 = 0xf;
            uVar21 = 0xf;
          }
LAB_001de5e0:
          iVar39 = iVar39 + (uVar29 + iVar20 >> 3);
          uVar29 = uVar29 + iVar20 & 7;
          *(int *)(param_1 + 8) = iVar39;
          *(uint *)(param_1 + 0xc) = uVar29;
          uVar34 = (uVar34 - *(int *)(param_1 + uVar42 * 4 + 0x40) >> (ulong)(uVar33 & 0x1f)) +
                   *(int *)(param_1 + uVar21 * 4 + 0x80);
          if (*(uint *)(param_1 + 0x3c) <= uVar34) {
            uVar34 = 0;
          }
          uVar33 = (uint)*(ushort *)(param_1 + (ulong)uVar34 * 2 + 0xcc4);
          uVar32 = uVar33;
          if (0xff < *(ushort *)(param_1 + (ulong)uVar34 * 2 + 0xcc4)) goto LAB_001de62c;
LAB_001de690:
          lVar38 = *(long *)(this + 0xc0);
          *(long *)(this + 0xc0) = lVar38 + 1;
          *(char *)(*(long *)(this + 0x4b90) + lVar38) = (char)uVar32;
          iVar39 = *(int *)(param_1 + 8);
          uVar42 = *(ulong *)(this + 0xc0);
          uVar21 = *(ulong *)(this + 0xe980);
        }
      } while( true );
    }
  }
  uVar22 = 0;
  param_1[0x4adc] = (UnpackThreadData)0x1;
LAB_001de958:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar22,local_8 - ___stack_chk_guard,0);
LAB_001de948:
  uVar22 = 1;
  goto LAB_001de958;
}


