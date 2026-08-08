/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack12UnpackDecodeER16UnpackThreadData
 * Address  : 001daa90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::UnpackDecode(UnpackThreadData&) */

void __thiscall Unpack::UnpackDecode(Unpack *this,UnpackThreadData *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  UnpackThreadData UVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  short sVar16;
  uint uVar17;
  void *__ptr;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  undefined4 *puVar28;
  long lVar29;
  uint uVar30;
  UnpackFilter local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  undefined4 local_10;
  byte local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1[0x38] != (UnpackThreadData)0x0) ||
      (param_1[0x38] = (UnpackThreadData)0x1, param_1[0x35] == (UnpackThreadData)0x0)) ||
     (((param_1[0x10] != (UnpackThreadData)0x0 ||
       ((*(int *)(param_1 + 8) < *(int *)(this + 0xd0) + -0x18 ||
        (cVar15 = UnpReadBuf(), cVar15 != '\0')))) &&
      (cVar15 = ReadTables((BitInput *)this,(UnpackBlockHeader *)(param_1 + 8),
                           (UnpackBlockTables *)(param_1 + 0x3c)), cVar15 != '\0')))) {
    iVar27 = *(int *)(param_1 + 8);
    if (iVar27 <= *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x4ae8) = 0;
      iVar13 = *(int *)(param_1 + 0x4ad8) + -0x10;
      iVar14 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) + -1;
      iVar5 = iVar14;
      if (iVar13 < iVar14) {
        iVar5 = iVar13;
      }
      puVar4 = (uint *)(param_1 + 0x2d00);
      do {
        if (iVar5 <= iVar27) {
          if ((iVar14 < iVar27) ||
             ((iVar14 == iVar27 && (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0xc)))))
          goto LAB_001dae54;
          if (((iVar13 <= iVar27) && (param_1[0x4ade] == (UnpackThreadData)0x0)) ||
             (*(int *)(param_1 + 0x4ad8) <= iVar27)) goto LAB_001dba8c;
        }
        uVar21 = *(uint *)(param_1 + 0x4ae8);
        __ptr = *(void **)(param_1 + 0x4ae0);
        if (*(int *)(param_1 + 0x4aec) - 8U < uVar21) {
          uVar21 = *(int *)(param_1 + 0x4aec) * 2;
          *(uint *)(param_1 + 0x4aec) = uVar21;
          __ptr = realloc(__ptr,(ulong)uVar21 * 0xc);
          *(void **)(param_1 + 0x4ae0) = __ptr;
          if (__ptr == (void *)0x0) {
            ErrorHandler::MemoryError();
            iVar27 = *(int *)(param_1 + 8);
            uVar21 = *(uint *)(param_1 + 0x4ae8);
            __ptr = *(void **)(param_1 + 0x4ae0);
          }
          else {
            iVar27 = *(int *)(param_1 + 8);
            uVar21 = *(uint *)(param_1 + 0x4ae8);
          }
        }
        lVar29 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x4ae8) = uVar21 + 1;
        uVar20 = *(uint *)(param_1 + 0xc0);
        iVar22 = *(int *)(param_1 + 0xc);
        uVar17 = ((uint)*(byte *)(lVar29 + iVar27 + 2) | (uint)*(byte *)(lVar29 + iVar27) << 0x10 |
                 (uint)*(byte *)(lVar29 + iVar27 + 1) << 8) >> (ulong)(8U - iVar22 & 0x1f) & 0xfffe;
        puVar28 = (undefined4 *)((long)__ptr + (ulong)uVar21 * 0xc);
        if (uVar17 < *(uint *)(param_1 + (ulong)uVar20 * 4 + 0x40)) {
          uVar24 = (ulong)(uVar17 >> (ulong)(0x10 - uVar20 & 0x1f));
          uVar10 = *(ushort *)(param_1 + uVar24 * 2 + 0x4c4);
          uVar20 = (uint)(byte)param_1[uVar24 + 0xc4] + iVar22 & 7;
          iVar27 = iVar27 + ((uint)(byte)param_1[uVar24 + 0xc4] + iVar22 >> 3);
          *(int *)(param_1 + 8) = iVar27;
          *(uint *)(param_1 + 0xc) = uVar20;
        }
        else {
          uVar19 = uVar20 + 1;
          if (uVar19 < 0xf) {
            uVar24 = (ulong)uVar19;
            if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
              uVar19 = uVar20 + 2;
              if (uVar20 == 0xd) {
LAB_001daf28:
                uVar25 = 1;
                uVar18 = 0xe;
                uVar24 = 0xf;
                goto LAB_001dada4;
              }
              uVar24 = (ulong)uVar19;
              if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                uVar19 = uVar20 + 3;
                if (uVar20 == 0xc) goto LAB_001daf28;
                uVar24 = (ulong)uVar19;
                if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                  uVar19 = uVar20 + 4;
                  if (uVar20 == 0xb) goto LAB_001daf28;
                  uVar24 = (ulong)uVar19;
                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                    uVar19 = uVar20 + 5;
                    if (uVar20 == 10) goto LAB_001daf28;
                    uVar24 = (ulong)uVar19;
                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                      uVar19 = uVar20 + 6;
                      if (uVar20 == 9) goto LAB_001daf28;
                      uVar24 = (ulong)uVar19;
                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                        uVar19 = uVar20 + 7;
                        if (uVar20 == 8) goto LAB_001daf28;
                        uVar24 = (ulong)uVar19;
                        if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                          uVar19 = uVar20 + 8;
                          if (uVar20 == 7) goto LAB_001daf28;
                          uVar24 = (ulong)uVar19;
                          if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                            uVar19 = uVar20 + 9;
                            if (uVar20 == 6) goto LAB_001daf28;
                            uVar24 = (ulong)uVar19;
                            if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                              uVar19 = uVar20 + 10;
                              if (uVar20 == 5) goto LAB_001daf28;
                              uVar24 = (ulong)uVar19;
                              if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                                uVar19 = uVar20 + 0xb;
                                if (uVar20 == 4) goto LAB_001daf28;
                                uVar24 = (ulong)uVar19;
                                if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                                  uVar19 = uVar20 + 0xc;
                                  if (uVar20 == 3) goto LAB_001daf28;
                                  uVar24 = (ulong)uVar19;
                                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                                    uVar19 = uVar20 + 0xd;
                                    if (uVar20 == 2) goto LAB_001daf28;
                                    uVar24 = (ulong)uVar19;
                                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                                      uVar19 = uVar20 + 0xe;
                                      if (uVar20 == 1) goto LAB_001daf28;
                                      uVar24 = (ulong)uVar19;
                                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x40) <= uVar17) {
                                        if ((uVar20 == 0) || (*(uint *)(param_1 + 0x78) <= uVar17))
                                        goto LAB_001dad94;
                                        uVar19 = 0xe;
                                        uVar24 = 0xe;
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
            uVar18 = (ulong)(uVar19 - 1);
            uVar25 = 0x10 - uVar19;
          }
          else {
LAB_001dad94:
            uVar25 = 1;
            uVar18 = 0xe;
            uVar19 = 0xf;
            uVar24 = 0xf;
          }
LAB_001dada4:
          iVar27 = iVar27 + (uVar19 + iVar22 >> 3);
          uVar20 = uVar19 + iVar22 & 7;
          *(int *)(param_1 + 8) = iVar27;
          *(uint *)(param_1 + 0xc) = uVar20;
          uVar17 = (uVar17 - *(int *)(param_1 + uVar18 * 4 + 0x40) >> (ulong)(uVar25 & 0x1f)) +
                   *(int *)(param_1 + uVar24 * 4 + 0x80);
          if (*(uint *)(param_1 + 0x3c) <= uVar17) {
            uVar17 = 0;
          }
          uVar10 = *(ushort *)(param_1 + (ulong)uVar17 * 2 + 0xcc4);
        }
        uVar17 = (uint)uVar10;
        if (uVar17 < 0x100) {
          if (((uVar21 + 1 < 2) || (puVar28[-3] != 0)) || (2 < *(ushort *)(puVar28 + -2))) {
            *(char *)(puVar28 + 2) = (char)uVar10;
            *(undefined2 *)(puVar28 + 1) = 0;
            iVar27 = *(int *)(param_1 + 8);
            *puVar28 = 0;
          }
          else {
            uVar3 = *(ushort *)(puVar28 + -2) + 1;
            *(ushort *)(puVar28 + -2) = uVar3;
            *(char *)((long)puVar28 + ((ulong)uVar3 - 4)) = (char)uVar10;
            *(int *)(param_1 + 0x4ae8) = *(int *)(param_1 + 0x4ae8) + -1;
            iVar27 = *(int *)(param_1 + 8);
          }
        }
        else if (uVar17 < 0x106) {
          if (uVar17 == 0x100) {
            ReadFilter(this,(BitInput *)(param_1 + 8),local_20);
            puVar28[2] = local_1c;
            uVar21 = *(uint *)(param_1 + 0x4ae8);
            lVar26 = *(long *)(param_1 + 0x4ae0);
            *puVar28 = 4;
            lVar23 = (ulong)uVar21 * 0xc;
            *(ushort *)(puVar28 + 1) = (ushort)(byte)local_20[0];
            lVar29 = lVar26 + lVar23;
            *(uint *)(param_1 + 0x4ae8) = uVar21 + 1;
            *(undefined4 *)(lVar26 + lVar23) = 4;
            *(undefined4 *)(lVar29 + 8) = local_18;
            *(ushort *)(lVar29 + 4) = (ushort)local_14;
            uVar21 = *(uint *)(param_1 + 0x4ae8);
            *(uint *)(param_1 + 0x4ae8) = uVar21 + 1;
            lVar23 = (ulong)uVar21 * 0xc;
            lVar29 = *(long *)(param_1 + 0x4ae0) + lVar23;
            *(undefined4 *)(*(long *)(param_1 + 0x4ae0) + lVar23) = 4;
            *(undefined4 *)(lVar29 + 8) = local_10;
            *(ushort *)(lVar29 + 4) = (ushort)local_c;
            iVar27 = *(int *)(param_1 + 8);
          }
          else if (uVar17 == 0x101) {
            *puVar28 = 2;
          }
          else {
            puVar28[2] = uVar17 - 0x102;
            lVar29 = *(long *)(param_1 + 0x18);
            iVar27 = *(int *)(param_1 + 8);
            uVar17 = *(uint *)(param_1 + 0x2d84);
            iVar22 = *(int *)(param_1 + 0xc);
            *puVar28 = 3;
            uVar21 = ((uint)*(byte *)(lVar29 + iVar27 + 2) |
                      (uint)*(byte *)(lVar29 + iVar27) << 0x10 |
                     (uint)*(byte *)(lVar29 + iVar27 + 1) << 8) >> (ulong)(8U - iVar22 & 0x1f) &
                     0xfffe;
            if (uVar21 < puVar4[(ulong)uVar17 + 1]) {
              uVar24 = (ulong)(uVar21 >> (ulong)(0x10 - uVar17 & 0x1f));
              uVar10 = *(ushort *)((long)puVar4 + uVar24 * 2 + 0x488);
              uVar21 = (uint)*(byte *)((long)puVar4 + uVar24 + 0x88) + iVar22;
              uVar17 = uVar21 & 7;
              iVar27 = iVar27 + (uVar21 >> 3);
              *(int *)(param_1 + 8) = iVar27;
              *(uint *)(param_1 + 0xc) = uVar17;
            }
            else {
              uVar20 = uVar17 + 1;
              if (uVar20 < 0xf) {
                uVar24 = (ulong)uVar20;
                if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                  uVar20 = uVar17 + 2;
                  if (uVar17 == 0xd) {
LAB_001db42c:
                    uVar19 = 1;
                    uVar18 = 0xe;
                    uVar24 = 0xf;
                    goto LAB_001db438;
                  }
                  uVar24 = (ulong)uVar20;
                  if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                    uVar20 = uVar17 + 3;
                    if (uVar17 == 0xc) goto LAB_001db42c;
                    uVar24 = (ulong)uVar20;
                    if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                      uVar20 = uVar17 + 4;
                      if (uVar17 == 0xb) goto LAB_001db42c;
                      uVar24 = (ulong)uVar20;
                      if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                        uVar20 = uVar17 + 5;
                        if (uVar17 == 10) goto LAB_001db42c;
                        uVar24 = (ulong)uVar20;
                        if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                          uVar20 = uVar17 + 6;
                          if (uVar17 == 9) goto LAB_001db42c;
                          uVar24 = (ulong)uVar20;
                          if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                            uVar20 = uVar17 + 7;
                            if (uVar17 == 8) goto LAB_001db42c;
                            uVar24 = (ulong)uVar20;
                            if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                              uVar20 = uVar17 + 8;
                              if (uVar17 == 7) goto LAB_001db42c;
                              uVar24 = (ulong)uVar20;
                              if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                uVar20 = uVar17 + 9;
                                if (uVar17 == 6) goto LAB_001db42c;
                                uVar24 = (ulong)uVar20;
                                if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                  uVar20 = uVar17 + 10;
                                  if (uVar17 == 5) goto LAB_001db42c;
                                  uVar24 = (ulong)uVar20;
                                  if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                    uVar20 = uVar17 + 0xb;
                                    if (uVar17 == 4) goto LAB_001db42c;
                                    uVar24 = (ulong)uVar20;
                                    if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                      uVar20 = uVar17 + 0xc;
                                      if (uVar17 == 3) goto LAB_001db42c;
                                      uVar24 = (ulong)uVar20;
                                      if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                        uVar20 = uVar17 + 0xd;
                                        if (uVar17 == 2) goto LAB_001db42c;
                                        uVar24 = (ulong)uVar20;
                                        if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                          uVar20 = uVar17 + 0xe;
                                          if (uVar17 == 1) goto LAB_001db42c;
                                          uVar24 = (ulong)uVar20;
                                          if (puVar4[(ulong)uVar20 + 1] <= uVar21) {
                                            if ((uVar17 == 0) ||
                                               (*(uint *)(param_1 + 0x2d3c) <= uVar21))
                                            goto LAB_001db418;
                                            uVar20 = 0xe;
                                            uVar24 = 0xe;
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
                uVar18 = (ulong)(uVar20 - 1);
                uVar19 = 0x10 - uVar20;
              }
              else {
LAB_001db418:
                uVar19 = 1;
                uVar18 = 0xe;
                uVar20 = 0xf;
                uVar24 = 0xf;
              }
LAB_001db438:
              uVar17 = iVar22 + uVar20 & 7;
              iVar27 = iVar27 + (iVar22 + uVar20 >> 3);
              *(int *)(param_1 + 8) = iVar27;
              *(uint *)(param_1 + 0xc) = uVar17;
              uVar21 = (uVar21 - puVar4[uVar18 + 1] >> (ulong)(uVar19 & 0x1f)) +
                       puVar4[uVar24 + 0x11];
              if (*puVar4 <= uVar21) {
                uVar21 = 0;
              }
              uVar10 = *(ushort *)((long)puVar4 + (ulong)uVar21 * 2 + 0xc88);
            }
            if (uVar10 < 8) {
              *(ushort *)(puVar28 + 1) = uVar10 + 2;
            }
            else {
              bVar9 = *(byte *)(lVar29 + iVar27);
              bVar6 = *(byte *)(lVar29 + iVar27 + 2);
              bVar7 = *(byte *)(lVar29 + iVar27 + 1);
              uVar21 = (uVar10 >> 2) - 1;
              iVar27 = iVar27 + (uVar17 + uVar21 >> 3);
              *(int *)(param_1 + 8) = iVar27;
              *(uint *)(param_1 + 0xc) = uVar17 + uVar21 & 7;
              *(short *)(puVar28 + 1) =
                   (short)((((uint)bVar6 | (uint)bVar9 << 0x10 | (uint)bVar7 << 8) >>
                            (ulong)(8 - uVar17 & 0x1f) & 0xffff) >> (ulong)(0x10 - uVar21 & 0x1f)) +
                   (short)((uVar10 & 3 | 4) << (ulong)(uVar21 & 0x1f)) + 2;
            }
          }
        }
        else {
          uVar17 = uVar17 - 0x106;
          uVar21 = ((uint)*(byte *)(lVar29 + iVar27 + 2) | (uint)*(byte *)(lVar29 + iVar27) << 0x10
                   | (uint)*(byte *)(lVar29 + iVar27 + 1) << 8) >> (ulong)(8 - uVar20 & 0x1f);
          if (uVar17 < 8) {
            uVar17 = *(uint *)(param_1 + 0xfac);
            uVar21 = uVar21 & 0xfffe;
            sVar16 = uVar10 - 0x104;
            if (*(uint *)(param_1 + (ulong)uVar17 * 4 + 0xf2c) <= uVar21) goto LAB_001daf9c;
LAB_001db508:
            uVar24 = (ulong)(uVar21 >> (ulong)(0x10 - uVar17 & 0x1f));
            uVar10 = *(ushort *)(param_1 + uVar24 * 2 + 0x13b0);
            uVar17 = (byte)param_1[uVar24 + 0xfb0] + uVar20 & 7;
            iVar27 = iVar27 + ((byte)param_1[uVar24 + 0xfb0] + uVar20 >> 3);
            *(int *)(param_1 + 8) = iVar27;
            *(uint *)(param_1 + 0xc) = uVar17;
            uVar21 = (uint)uVar10;
            if (3 < uVar21) goto LAB_001db53c;
LAB_001db1d4:
            uVar21 = uVar21 + 1;
          }
          else {
            uVar25 = (uVar17 >> 2) - 1;
            uVar19 = uVar25 + uVar20;
            uVar20 = uVar19 & 7;
            iVar27 = iVar27 + (uVar19 >> 3);
            *(int *)(param_1 + 8) = iVar27;
            *(uint *)(param_1 + 0xc) = uVar20;
            sVar16 = (short)((uVar21 & 0xffff) >> (ulong)(0x10 - uVar25 & 0x1f)) +
                     (short)((uVar17 & 3 | 4) << (ulong)(uVar25 & 0x1f)) + 2;
            uVar17 = *(uint *)(param_1 + 0xfac);
            uVar21 = ((uint)*(byte *)(lVar29 + iVar27 + 2) |
                      (uint)*(byte *)(lVar29 + iVar27) << 0x10 |
                     (uint)*(byte *)(lVar29 + iVar27 + 1) << 8) >> (ulong)(8 - uVar20 & 0x1f) &
                     0xfffe;
            if (uVar21 < *(uint *)(param_1 + (ulong)uVar17 * 4 + 0xf2c)) goto LAB_001db508;
LAB_001daf9c:
            uVar19 = uVar17 + 1;
            if (uVar19 < 0xf) {
              uVar24 = (ulong)uVar19;
              if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                uVar19 = uVar17 + 2;
                if (uVar17 == 0xd) {
LAB_001db180:
                  uVar25 = 1;
                  uVar18 = 0xe;
                  uVar24 = 0xf;
                  goto LAB_001db18c;
                }
                uVar24 = (ulong)uVar19;
                if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                  uVar19 = uVar17 + 3;
                  if (uVar17 == 0xc) goto LAB_001db180;
                  uVar24 = (ulong)uVar19;
                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                    uVar19 = uVar17 + 4;
                    if (uVar17 == 0xb) goto LAB_001db180;
                    uVar24 = (ulong)uVar19;
                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                      uVar19 = uVar17 + 5;
                      if (uVar17 == 10) goto LAB_001db180;
                      uVar24 = (ulong)uVar19;
                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                        uVar19 = uVar17 + 6;
                        if (uVar17 == 9) goto LAB_001db180;
                        uVar24 = (ulong)uVar19;
                        if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                          uVar19 = uVar17 + 7;
                          if (uVar17 == 8) goto LAB_001db180;
                          uVar24 = (ulong)uVar19;
                          if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                            uVar19 = uVar17 + 8;
                            if (uVar17 == 7) goto LAB_001db180;
                            uVar24 = (ulong)uVar19;
                            if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                              uVar19 = uVar17 + 9;
                              if (uVar17 == 6) goto LAB_001db180;
                              uVar24 = (ulong)uVar19;
                              if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                                uVar19 = uVar17 + 10;
                                if (uVar17 == 5) goto LAB_001db180;
                                uVar24 = (ulong)uVar19;
                                if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                                  uVar19 = uVar17 + 0xb;
                                  if (uVar17 == 4) goto LAB_001db180;
                                  uVar24 = (ulong)uVar19;
                                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                                    uVar19 = uVar17 + 0xc;
                                    if (uVar17 == 3) goto LAB_001db180;
                                    uVar24 = (ulong)uVar19;
                                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21) {
                                      uVar19 = uVar17 + 0xd;
                                      if (uVar17 == 2) goto LAB_001db180;
                                      uVar24 = (ulong)uVar19;
                                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21)
                                      {
                                        uVar19 = uVar17 + 0xe;
                                        if (uVar17 == 1) goto LAB_001db180;
                                        uVar24 = (ulong)uVar19;
                                        if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0xf2c) <= uVar21
                                           ) {
                                          if ((uVar17 == 0) ||
                                             (*(uint *)(param_1 + 0xf64) <= uVar21))
                                          goto LAB_001db16c;
                                          uVar19 = 0xe;
                                          uVar24 = 0xe;
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
              uVar18 = (ulong)(uVar19 - 1);
              uVar25 = 0x10 - uVar19;
            }
            else {
LAB_001db16c:
              uVar25 = 1;
              uVar18 = 0xe;
              uVar19 = 0xf;
              uVar24 = 0xf;
            }
LAB_001db18c:
            iVar27 = iVar27 + (uVar19 + uVar20 >> 3);
            uVar17 = uVar19 + uVar20 & 7;
            *(int *)(param_1 + 8) = iVar27;
            *(uint *)(param_1 + 0xc) = uVar17;
            uVar21 = (uVar21 - *(int *)(param_1 + uVar18 * 4 + 0xf2c) >> (ulong)(uVar25 & 0x1f)) +
                     *(int *)(param_1 + uVar24 * 4 + 0xf6c);
            if (*(uint *)(param_1 + 0xf28) <= uVar21) {
              uVar21 = 0;
            }
            uVar10 = *(ushort *)(param_1 + (ulong)uVar21 * 2 + 0x1bb0);
            uVar21 = (uint)uVar10;
            if (uVar10 < 4) goto LAB_001db1d4;
LAB_001db53c:
            lVar23 = lVar29 + iVar27;
            uVar20 = (uVar10 >> 1) - 1;
            uVar24 = (ulong)uVar17;
            iVar22 = ((uVar10 & 1 | 2) << (ulong)(uVar20 & 0x1f)) + 1;
            uVar21 = 8 - uVar17;
            uVar25 = (uint)*(byte *)(lVar23 + 2);
            uVar19 = (uint)*(byte *)(lVar23 + 1);
            uVar30 = (uint)*(byte *)(lVar29 + iVar27);
            if (uVar20 < 4) {
              uVar21 = (((uint)(*(byte *)(lVar23 + 4) >> (ulong)(uVar21 & 0x1f)) |
                        (uVar25 << 8 | uVar19 << 0x10 | (uint)*(byte *)(lVar23 + 3) | uVar30 << 0x18
                        ) << (ulong)uVar17) >> (ulong)(-uVar20 & 0x1f)) + iVar22;
              *(uint *)(param_1 + 8) = iVar27 + (uVar20 + uVar17 >> 3);
              *(uint *)(param_1 + 0xc) = uVar20 + uVar17 & 7;
            }
            else {
              if (uVar20 != 4) {
                bVar6 = *(byte *)(lVar23 + 3);
                uVar17 = ((uVar10 >> 1) + uVar17) - 5;
                uVar11 = uVar25 << 8;
                iVar27 = iVar27 + (uVar17 >> 3);
                uVar1 = uVar19 << 0x10;
                uVar2 = uVar30 << 0x18;
                bVar7 = *(byte *)(lVar23 + 4);
                uVar17 = uVar17 & 7;
                uVar12 = uVar21 & 0x1f;
                *(int *)(param_1 + 8) = iVar27;
                *(uint *)(param_1 + 0xc) = uVar17;
                uVar19 = (uint)*(byte *)(lVar29 + iVar27 + 1);
                uVar30 = (uint)*(byte *)(lVar29 + iVar27);
                uVar25 = (uint)*(byte *)(lVar29 + iVar27 + 2);
                uVar21 = 8 - uVar17;
                iVar22 = iVar22 + (((uint)(bVar7 >> (ulong)uVar12) |
                                   (uVar11 | uVar1 | bVar6 | uVar2) << uVar24) >>
                                  (ulong)(0x24 - uVar20 & 0x1f)) * 0x10;
              }
              uVar20 = *(uint *)(param_1 + 0x1e98);
              uVar21 = (uVar19 << 8 | uVar30 << 0x10 | uVar25) >> (ulong)(uVar21 & 0x1f) & 0xfffe;
              if (uVar21 < *(uint *)(param_1 + (ulong)uVar20 * 4 + 0x1e18)) {
                uVar24 = (ulong)(uVar21 >> (ulong)(0x10 - uVar20 & 0x1f));
                UVar8 = param_1[uVar24 + 0x1e9c];
                uVar21 = iVar22 + (uint)*(ushort *)(param_1 + uVar24 * 2 + 0x229c);
                *(uint *)(param_1 + 8) = iVar27 + ((byte)UVar8 + uVar17 >> 3);
                *(uint *)(param_1 + 0xc) = (byte)UVar8 + uVar17 & 7;
              }
              else {
                uVar19 = uVar20 + 1;
                if (uVar19 < 0xf) {
                  uVar24 = (ulong)uVar19;
                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                    uVar19 = uVar20 + 2;
                    if (uVar20 == 0xd) {
LAB_001dbac4:
                      uVar20 = 1;
                      uVar18 = 0xe;
                      uVar24 = 0xf;
                      goto LAB_001db7f0;
                    }
                    uVar24 = (ulong)uVar19;
                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                      uVar19 = uVar20 + 3;
                      if (uVar20 == 0xc) goto LAB_001dbac4;
                      uVar24 = (ulong)uVar19;
                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                        uVar19 = uVar20 + 4;
                        if (uVar20 == 0xb) goto LAB_001dbac4;
                        uVar24 = (ulong)uVar19;
                        if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                          uVar19 = uVar20 + 5;
                          if (uVar20 == 10) goto LAB_001dbac4;
                          uVar24 = (ulong)uVar19;
                          if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                            uVar19 = uVar20 + 6;
                            if (uVar20 == 9) goto LAB_001dbac4;
                            uVar24 = (ulong)uVar19;
                            if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                              uVar19 = uVar20 + 7;
                              if (uVar20 == 8) goto LAB_001dbac4;
                              uVar24 = (ulong)uVar19;
                              if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                                uVar19 = uVar20 + 8;
                                if (uVar20 == 7) goto LAB_001dbac4;
                                uVar24 = (ulong)uVar19;
                                if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                                  uVar19 = uVar20 + 9;
                                  if (uVar20 == 6) goto LAB_001dbac4;
                                  uVar24 = (ulong)uVar19;
                                  if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                                    uVar19 = uVar20 + 10;
                                    if (uVar20 == 5) goto LAB_001dbac4;
                                    uVar24 = (ulong)uVar19;
                                    if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21) {
                                      uVar19 = uVar20 + 0xb;
                                      if (uVar20 == 4) goto LAB_001dbac4;
                                      uVar24 = (ulong)uVar19;
                                      if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <= uVar21)
                                      {
                                        uVar19 = uVar20 + 0xc;
                                        if (uVar20 == 3) goto LAB_001dbac4;
                                        uVar24 = (ulong)uVar19;
                                        if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <=
                                            uVar21) {
                                          uVar19 = uVar20 + 0xd;
                                          if (uVar20 == 2) goto LAB_001dbac4;
                                          uVar24 = (ulong)uVar19;
                                          if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <=
                                              uVar21) {
                                            uVar19 = uVar20 + 0xe;
                                            if (uVar20 == 1) goto LAB_001dbac4;
                                            uVar24 = (ulong)uVar19;
                                            if (*(uint *)(param_1 + (ulong)uVar19 * 4 + 0x1e18) <=
                                                uVar21) {
                                              if ((uVar20 == 0) ||
                                                 (*(uint *)(param_1 + 0x1e50) <= uVar21))
                                              goto LAB_001db7e0;
                                              uVar19 = 0xe;
                                              uVar24 = 0xe;
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
                  uVar18 = (ulong)(uVar19 - 1);
                  uVar20 = 0x10 - uVar19;
                }
                else {
LAB_001db7e0:
                  uVar20 = 1;
                  uVar18 = 0xe;
                  uVar19 = 0xf;
                  uVar24 = 0xf;
                }
LAB_001db7f0:
                *(uint *)(param_1 + 8) = iVar27 + (uVar19 + uVar17 >> 3);
                *(uint *)(param_1 + 0xc) = uVar19 + uVar17 & 7;
                uVar21 = (uVar21 - *(int *)(param_1 + uVar18 * 4 + 0x1e18) >> (ulong)(uVar20 & 0x1f)
                         ) + *(int *)(param_1 + uVar24 * 4 + 0x1e58);
                if (*(uint *)(param_1 + 0x1e14) <= uVar21) {
                  uVar21 = 0;
                }
                uVar21 = iVar22 + (uint)*(ushort *)(param_1 + (ulong)uVar21 * 2 + 0x2a9c);
              }
            }
            if (0x100 < uVar21) {
              if (uVar21 < 0x2001) {
                sVar16 = sVar16 + 1;
              }
              else {
                if (0x40000 < uVar21) {
                  sVar16 = sVar16 + 1;
                }
                sVar16 = sVar16 + 2;
              }
            }
          }
          puVar28[2] = uVar21;
          iVar27 = *(int *)(param_1 + 8);
          *puVar28 = 1;
          *(short *)(puVar28 + 1) = sVar16;
        }
      } while( true );
    }
  }
  param_1[0x4adc] = (UnpackThreadData)0x1;
LAB_001dae54:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
LAB_001dba8c:
  param_1[0x4adf] = (UnpackThreadData)0x1;
  goto LAB_001dae54;
}


