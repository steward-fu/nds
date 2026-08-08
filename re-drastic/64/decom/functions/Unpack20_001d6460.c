/*
 * Ghidra decompilation
 *
 * Function : Unpack20
 * Address  : 001d6460
 * Program  : drastic64
 */


/* Unpack::Unpack20(bool) [clone .part.0] */

void __thiscall Unpack::Unpack20(Unpack *this,bool param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  Unpack UVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined8 uVar32;
  
  iVar27 = *(int *)(this + 8);
  if (-1 < *(long *)(this + 0x4da0)) {
    puVar2 = (uint *)(this + 0x2db0);
LAB_001d6498:
    do {
      uVar24 = *(ulong *)(this + 0xe980);
      uVar21 = uVar24 & *(ulong *)(this + 0xc0);
      *(ulong *)(this + 0xc0) = uVar21;
      if (*(int *)(this + 0xd0) + -0x1d <= iVar27) {
        cVar10 = UnpReadBuf();
        if (cVar10 != '\0') {
          uVar21 = *(ulong *)(this + 0xc0);
          uVar19 = *(ulong *)(this + 200);
          uVar24 = *(ulong *)(this + 0xe980);
          if ((uVar19 - uVar21 & uVar24) < 0x10e && uVar19 != uVar21) goto LAB_001d69e8;
          goto LAB_001d64d4;
        }
LAB_001d6a54:
        iVar27 = *(int *)(this + 8);
        break;
      }
      uVar19 = *(ulong *)(this + 200);
      if ((uVar19 - uVar21 & uVar24) < 0x10e && uVar19 != uVar21) {
LAB_001d69e8:
        this[0x4daa] = (Unpack)0x1;
        if (uVar21 < uVar19) {
          ComprDataIO::UnpWrite
                    (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar19),
                     (long)-(int)uVar19 & uVar24);
          ComprDataIO::UnpWrite
                    (*(ComprDataIO **)this,*(uchar **)(this + 0x4b90),*(ulong *)(this + 0xc0));
          this[0x4da9] = (Unpack)0x1;
        }
        else {
          ComprDataIO::UnpWrite
                    (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar19),
                     uVar21 - uVar19);
        }
        uVar21 = *(ulong *)(this + 0xc0);
        *(ulong *)(this + 200) = uVar21;
        if (this[0x4da8] != (Unpack)0x0) {
          return;
        }
      }
LAB_001d64d4:
      iVar27 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0xc);
      lVar25 = *(long *)(this + 0x18);
      uVar23 = ((uint)*(byte *)(lVar25 + iVar27 + 2) | (uint)*(byte *)(lVar25 + iVar27) << 0x10 |
               (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f) & 0xfffe;
      if (*(int *)(this + 0x98a8) != 0) {
        lVar25 = (long)*(int *)(this + 0x98b0);
        lVar26 = lVar25 * 0x3bb;
        uVar15 = *(uint *)(this + lVar25 * 0xeec + 0x5978);
        if (uVar23 < *(uint *)(this + (lVar26 + (ulong)uVar15 + 0x163c) * 4 + 8)) {
          uVar24 = (ulong)(uVar23 >> (ulong)(0x10 - uVar15 & 0x1f));
          UVar4 = this[uVar24 + lVar25 * 0xeec + 0x597c];
          *(uint *)(this + 8) = iVar27 + ((uint)(byte)UVar4 + iVar3 >> 3);
          *(uint *)(this + 0xc) = (uint)(byte)UVar4 + iVar3 & 7;
          uVar6 = *(ushort *)(this + (uVar24 + lVar25 * 0x776 + 0x2eb8) * 2 + 0xc);
        }
        else {
          uVar14 = uVar15 + 1;
          if (uVar14 < 0xf) {
            uVar24 = (ulong)uVar14;
            if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
              uVar14 = uVar15 + 2;
              if (uVar15 == 0xd) {
LAB_001d74c4:
                uVar28 = 1;
                uVar15 = 0xe;
                uVar24 = 0xf;
                goto LAB_001d71fc;
              }
              uVar24 = (ulong)uVar14;
              if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                uVar14 = uVar15 + 3;
                if (uVar15 == 0xc) goto LAB_001d74c4;
                uVar24 = (ulong)uVar14;
                if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                  uVar14 = uVar15 + 4;
                  if (uVar15 == 0xb) goto LAB_001d74c4;
                  uVar24 = (ulong)uVar14;
                  if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                    uVar14 = uVar15 + 5;
                    if (uVar15 == 10) goto LAB_001d74c4;
                    uVar24 = (ulong)uVar14;
                    lVar26 = lVar25 * 0x3bb;
                    if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                      uVar14 = uVar15 + 6;
                      if (uVar15 == 9) goto LAB_001d74c4;
                      uVar24 = (ulong)uVar14;
                      if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                        uVar14 = uVar15 + 7;
                        if (uVar15 == 8) goto LAB_001d74c4;
                        uVar24 = (ulong)uVar14;
                        if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                          uVar14 = uVar15 + 8;
                          if (uVar15 == 7) goto LAB_001d74c4;
                          uVar24 = (ulong)uVar14;
                          if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                            uVar14 = uVar15 + 9;
                            if (uVar15 == 6) goto LAB_001d74c4;
                            uVar24 = (ulong)uVar14;
                            if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                              uVar14 = uVar15 + 10;
                              if (uVar15 == 5) goto LAB_001d74c4;
                              uVar24 = (ulong)uVar14;
                              lVar26 = lVar25 * 0x3bb;
                              if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23) {
                                uVar14 = uVar15 + 0xb;
                                if (uVar15 == 4) goto LAB_001d74c4;
                                uVar24 = (ulong)uVar14;
                                if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23)
                                {
                                  uVar14 = uVar15 + 0xc;
                                  if (uVar15 == 3) goto LAB_001d74c4;
                                  uVar24 = (ulong)uVar14;
                                  if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <= uVar23
                                     ) {
                                    uVar14 = uVar15 + 0xd;
                                    if (uVar15 == 2) goto LAB_001d74c4;
                                    uVar24 = (ulong)uVar14;
                                    if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <=
                                        uVar23) {
                                      uVar14 = uVar15 + 0xe;
                                      if (uVar15 == 1) goto LAB_001d74c4;
                                      uVar24 = (ulong)uVar14;
                                      if (*(uint *)(this + (lVar26 + uVar24 + 0x163c) * 4 + 8) <=
                                          uVar23) {
                                        if ((uVar15 == 0) ||
                                           (*(uint *)(this + lVar25 * 0xeec + 0x5930) <= uVar23))
                                        goto LAB_001d67a4;
                                        uVar14 = 0xe;
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
            uVar15 = uVar14 - 1;
            uVar28 = 0x10 - uVar14;
          }
          else {
LAB_001d67a4:
            uVar28 = 1;
            uVar15 = 0xe;
            uVar14 = 0xf;
            uVar24 = 0xf;
          }
LAB_001d71fc:
          *(uint *)(this + 8) = iVar27 + (uVar14 + iVar3 >> 3);
          *(uint *)(this + 0xc) = uVar14 + iVar3 & 7;
          uVar23 = (uVar23 - *(int *)(this + (lVar25 * 0x3bb + (ulong)uVar15 + 0x163c) * 4 + 8) >>
                   (ulong)(uVar28 & 0x1f)) +
                   *(int *)(this + (lVar25 * 0x3bb + uVar24 + 0x164c) * 4 + 8);
          if (*(uint *)(this + lVar25 * 0xeec + 0x58f4) <= uVar23) {
            uVar23 = 0;
          }
          uVar6 = *(ushort *)(this + ((ulong)uVar23 + lVar25 * 0x776 + 0x32b8) * 2 + 0xc);
        }
        if (uVar6 == 0x100) {
LAB_001d6a44:
          cVar10 = ReadTables20();
          if (cVar10 != '\0') goto LAB_001d6fe0;
          goto LAB_001d6a54;
        }
        lVar25 = *(long *)(this + 0x4b90);
        *(ulong *)(this + 0xc0) = uVar21 + 1;
        uVar11 = DecodeAudio(this,(uint)uVar6);
        *(undefined *)(lVar25 + uVar21) = uVar11;
        iVar27 = *(int *)(this + 0x98b0) + 1;
        if (iVar27 == *(int *)(this + 0x98ac)) {
          iVar27 = 0;
        }
        *(int *)(this + 0x98b0) = iVar27;
        iVar27 = *(int *)(this + 8);
        lVar26 = *(long *)(this + 0x4da0) + -1;
        *(long *)(this + 0x4da0) = lVar26;
joined_r0x001d8004:
        if (lVar26 < 0) break;
        goto LAB_001d6498;
      }
      uVar15 = *(uint *)(this + 0x170);
      if (uVar23 < *(uint *)(this + (ulong)uVar15 * 4 + 0xf0)) {
        uVar24 = (ulong)(uVar23 >> (ulong)(0x10 - uVar15 & 0x1f));
        uVar6 = *(ushort *)(this + uVar24 * 2 + 0x574);
        uVar15 = (uint)(byte)this[uVar24 + 0x174] + iVar3 & 7;
        iVar27 = iVar27 + ((uint)(byte)this[uVar24 + 0x174] + iVar3 >> 3);
        *(int *)(this + 8) = iVar27;
        *(uint *)(this + 0xc) = uVar15;
      }
      else {
        uVar14 = uVar15 + 1;
        if (uVar14 < 0xf) {
          uVar24 = (ulong)uVar14;
          if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
            uVar14 = uVar15 + 2;
            if (uVar15 == 0xd) {
LAB_001d74d4:
              uVar29 = 1;
              uVar28 = 0xe;
              uVar24 = 0xf;
              goto LAB_001d719c;
            }
            uVar24 = (ulong)uVar14;
            if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
              uVar14 = uVar15 + 3;
              if (uVar15 == 0xc) goto LAB_001d74d4;
              uVar24 = (ulong)uVar14;
              if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                uVar14 = uVar15 + 4;
                if (uVar15 == 0xb) goto LAB_001d74d4;
                uVar24 = (ulong)uVar14;
                if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                  uVar14 = uVar15 + 5;
                  if (uVar15 == 10) goto LAB_001d74d4;
                  uVar24 = (ulong)uVar14;
                  if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                    uVar14 = uVar15 + 6;
                    if (uVar15 == 9) goto LAB_001d74d4;
                    uVar24 = (ulong)uVar14;
                    if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                      uVar14 = uVar15 + 7;
                      if (uVar15 == 8) goto LAB_001d74d4;
                      uVar24 = (ulong)uVar14;
                      if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                        uVar14 = uVar15 + 8;
                        if (uVar15 == 7) goto LAB_001d74d4;
                        uVar24 = (ulong)uVar14;
                        if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                          uVar14 = uVar15 + 9;
                          if (uVar15 == 6) goto LAB_001d74d4;
                          uVar24 = (ulong)uVar14;
                          if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                            uVar14 = uVar15 + 10;
                            if (uVar15 == 5) goto LAB_001d74d4;
                            uVar24 = (ulong)uVar14;
                            if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                              uVar14 = uVar15 + 0xb;
                              if (uVar15 == 4) goto LAB_001d74d4;
                              uVar24 = (ulong)uVar14;
                              if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                uVar14 = uVar15 + 0xc;
                                if (uVar15 == 3) goto LAB_001d74d4;
                                uVar24 = (ulong)uVar14;
                                if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                  uVar14 = uVar15 + 0xd;
                                  if (uVar15 == 2) goto LAB_001d74d4;
                                  uVar24 = (ulong)uVar14;
                                  if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                    uVar14 = uVar15 + 0xe;
                                    if (uVar15 == 1) goto LAB_001d74d4;
                                    uVar24 = (ulong)uVar14;
                                    if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                      if ((uVar15 == 0) || (*(uint *)(this + 0x128) <= uVar23))
                                      goto LAB_001d69a0;
                                      uVar14 = 0xe;
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
          uVar28 = uVar14 - 1;
          uVar29 = 0x10 - uVar14;
        }
        else {
LAB_001d69a0:
          uVar29 = 1;
          uVar28 = 0xe;
          uVar14 = 0xf;
          uVar24 = 0xf;
        }
LAB_001d719c:
        iVar27 = iVar27 + (uVar14 + iVar3 >> 3);
        uVar15 = uVar14 + iVar3 & 7;
        *(int *)(this + 8) = iVar27;
        *(uint *)(this + 0xc) = uVar15;
        uVar23 = (uVar23 - *(int *)(this + (ulong)uVar28 * 4 + 0xf0) >> (ulong)(uVar29 & 0x1f)) +
                 *(int *)(this + uVar24 * 4 + 0x130);
        if (*(uint *)(this + 0xec) <= uVar23) {
          uVar23 = 0;
        }
        uVar6 = *(ushort *)(this + (ulong)uVar23 * 2 + 0xd74);
      }
      uVar23 = (uint)uVar6;
      if (uVar23 < 0x100) {
        *(ulong *)(this + 0xc0) = uVar21 + 1;
        *(char *)(*(long *)(this + 0x4b90) + uVar21) = (char)uVar6;
        iVar27 = *(int *)(this + 8);
        lVar26 = *(long *)(this + 0x4da0) + -1;
        *(long *)(this + 0x4da0) = lVar26;
        goto joined_r0x001d8004;
      }
      if (uVar23 < 0x10e) {
        if (uVar23 == 0x10d) goto LAB_001d6a44;
        uVar28 = *(uint *)(this + 0xb0);
        iVar3 = uVar28 + 1;
        uVar14 = uVar28 & 3;
        uVar24 = *(long *)(this + 0xe978) - 0x1001;
        lVar26 = *(long *)(this + 0x4da0);
        if (uVar23 == 0x100) {
          uVar23 = *(uint *)(this + 0xb4);
          *(int *)(this + 0xb0) = iVar3;
          uVar19 = uVar21 - *(uint *)(this + 0xb8);
          *(uint *)(this + ((ulong)uVar14 + 0x28) * 4) = *(uint *)(this + 0xb8);
          lVar26 = lVar26 - (ulong)uVar23;
          *(long *)(this + 0x4da0) = lVar26;
          uVar16 = uVar19;
          if (uVar19 < uVar21) {
            uVar16 = uVar21;
          }
          if (uVar16 < uVar24) {
            *(ulong *)(this + 0xc0) = uVar23 + uVar21;
            puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar19);
            puVar20 = (undefined *)(*(long *)(this + 0x4b90) + uVar21);
            if (7 < uVar23) {
              uVar15 = uVar23 - 8;
              bVar9 = (long)uVar19 < (long)(uVar21 + 0x10);
              bVar8 = false;
              if (bVar9) {
                bVar8 = (long)(uVar21 - (uVar19 + 0x10)) < 0;
              }
              bVar9 = bVar8 != (bVar9 && SBORROW8(uVar21,uVar19 + 0x10));
              if ((bVar9 || uVar15 < 7) || !bVar9 && uVar15 == 7) {
                puVar13 = puVar20;
                puVar18 = puVar22;
                do {
                  *puVar13 = *puVar18;
                  puVar1 = puVar13 + 8;
                  puVar13[1] = puVar18[1];
                  puVar13[2] = puVar18[2];
                  puVar13[3] = puVar18[3];
                  puVar13[4] = puVar18[4];
                  puVar13[5] = puVar18[5];
                  puVar13[6] = puVar18[6];
                  puVar13[7] = puVar18[7];
                  puVar13 = puVar1;
                  puVar18 = puVar18 + 8;
                } while (puVar20 + (ulong)(uVar15 & 0xfffffff8) + 8 != puVar1);
              }
              else {
                uVar14 = (uVar15 >> 3) + 1;
                lVar25 = 0;
                do {
                  uVar32 = *(undefined8 *)(puVar22 + lVar25);
                  *(undefined8 *)((long)(puVar20 + lVar25) + 8) =
                       *(undefined8 *)((long)(puVar22 + lVar25) + 8);
                  *(undefined8 *)(puVar20 + lVar25) = uVar32;
                  lVar25 = lVar25 + 0x10;
                } while (((ulong)((uVar14 >> 1) - 1) + 1) * 0x10 - lVar25 != 0);
                lVar25 = ((ulong)uVar14 & 0x3ffffffe) * 8;
                if ((uVar14 & 1) != 0) {
                  puVar20[lVar25] = puVar22[lVar25];
                  puVar20[lVar25 + 1] = puVar22[lVar25 + 1];
                  puVar20[lVar25 + 2] = puVar22[lVar25 + 2];
                  puVar20[lVar25 + 3] = puVar22[lVar25 + 3];
                  puVar20[lVar25 + 4] = puVar22[lVar25 + 4];
                  puVar20[lVar25 + 5] = puVar22[lVar25 + 5];
                  puVar20[lVar25 + 6] = puVar22[lVar25 + 6];
                  puVar20[lVar25 + 7] = puVar22[lVar25 + 7];
                }
              }
              lVar25 = (ulong)(uVar15 & 0xfffffff8) + 8;
              puVar22 = puVar22 + lVar25;
              puVar20 = puVar20 + lVar25;
              uVar23 = uVar23 & 7;
            }
            if (((uVar23 != 0) && (*puVar20 = *puVar22, uVar23 != 1)) &&
               ((puVar20[1] = puVar22[1], uVar23 != 2 &&
                (((puVar20[2] = puVar22[2], uVar23 != 3 && (puVar20[3] = puVar22[3], uVar23 != 4))
                 && (puVar20[4] = puVar22[4], uVar23 != 5)))))) {
              puVar20[5] = puVar22[5];
joined_r0x001d8140:
              if (uVar23 == 7) {
                puVar20[6] = puVar22[6];
                lVar26 = *(long *)(this + 0x4da0);
                iVar27 = *(int *)(this + 8);
                goto joined_r0x001d8004;
              }
            }
          }
          else {
            if (uVar23 == 0) goto joined_r0x001d8004;
            uVar16 = *(ulong *)(this + 0xe980);
            uVar24 = uVar19 + (uVar23 - 1);
            do {
              uVar16 = uVar19 & uVar16;
              bVar9 = uVar19 != uVar24;
              uVar19 = uVar19 + 1;
              *(undefined *)(*(long *)(this + 0x4b90) + uVar21) =
                   *(undefined *)(*(long *)(this + 0x4b90) + uVar16);
              uVar16 = *(ulong *)(this + 0xe980);
              uVar21 = *(long *)(this + 0xc0) + 1U & uVar16;
              *(ulong *)(this + 0xc0) = uVar21;
            } while (bVar9);
          }
        }
        else {
          if (0x104 < uVar6) {
            bVar5 = *(byte *)((long)&Unpack20(bool)::SDBits + (long)(int)(uVar23 - 0x105));
            uVar23 = *(byte *)((long)&Unpack20(bool)::SDDecode + (long)(int)(uVar23 - 0x105)) + 1;
            if (bVar5 != 0) {
              uVar23 = uVar23 + ((((uint)*(byte *)(lVar25 + iVar27 + 2) |
                                   (uint)*(byte *)(lVar25 + iVar27) << 0x10 |
                                  (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >>
                                  (ulong)(8 - uVar15 & 0x1f) & 0xffff) >>
                                (ulong)(0x10 - bVar5 & 0x1f));
              *(uint *)(this + 8) = iVar27 + (uVar15 + bVar5 >> 3);
              *(uint *)(this + 0xc) = uVar15 + bVar5 & 7;
            }
            *(int *)(this + 0xb0) = iVar3;
            uVar16 = uVar21 - uVar23;
            *(uint *)(this + ((ulong)uVar14 + 0x28) * 4) = uVar23;
            lVar25 = *(long *)(this + 0x4b90);
            *(undefined4 *)(this + 0xb4) = 2;
            *(uint *)(this + 0xb8) = uVar23;
            *(long *)(this + 0x4da0) = lVar26 + -2;
            uVar19 = uVar16;
            if (uVar16 < uVar21) {
              uVar19 = uVar21;
            }
            if (uVar19 < uVar24) {
              *(ulong *)(this + 0xc0) = uVar21 + 2;
              *(undefined *)(lVar25 + uVar21) = *(undefined *)(lVar25 + uVar16);
              *(undefined *)(lVar25 + uVar21 + 1) = *(undefined *)(lVar25 + uVar16 + 1);
              lVar25 = *(long *)(this + 0x4da0);
              iVar27 = *(int *)(this + 8);
            }
            else {
              *(undefined *)(lVar25 + uVar21) =
                   *(undefined *)(lVar25 + (uVar16 & *(ulong *)(this + 0xe980)));
              uVar21 = *(long *)(this + 0xc0) + 1U & *(ulong *)(this + 0xe980);
              *(ulong *)(this + 0xc0) = uVar21;
              *(undefined *)(*(long *)(this + 0x4b90) + uVar21) =
                   *(undefined *)
                    (*(long *)(this + 0x4b90) + (uVar16 + 1 & *(ulong *)(this + 0xe980)));
              lVar25 = *(long *)(this + 0x4da0);
              *(ulong *)(this + 0xc0) = *(long *)(this + 0xc0) + 1U & *(ulong *)(this + 0xe980);
              iVar27 = *(int *)(this + 8);
            }
            goto joined_r0x001d7ef4;
          }
          uVar30 = *(uint *)(this + 0x2e34);
          uVar29 = ((uint)*(byte *)(lVar25 + iVar27 + 2) | (uint)*(byte *)(lVar25 + iVar27) << 0x10
                   | (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >> (ulong)(8 - uVar15 & 0x1f) &
                   0xfffe;
          uVar28 = *(uint *)(this + (((ulong)(uVar28 - uVar23) & 3) + 0x28) * 4);
          if (uVar29 < puVar2[(ulong)uVar30 + 1]) {
            uVar19 = (ulong)(uVar29 >> (ulong)(0x10 - uVar30 & 0x1f));
            uVar6 = *(ushort *)((long)puVar2 + uVar19 * 2 + 0x488);
            uVar15 = *(byte *)((long)puVar2 + uVar19 + 0x88) + uVar15;
            uVar30 = uVar15 & 7;
            iVar27 = iVar27 + (uVar15 >> 3);
            *(int *)(this + 8) = iVar27;
            *(uint *)(this + 0xc) = uVar30;
          }
          else {
            uVar23 = uVar30 + 1;
            if (uVar23 < 0xf) {
              uVar19 = (ulong)uVar23;
              if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                uVar23 = uVar30 + 2;
                if (uVar30 == 0xd) {
LAB_001d7d2c:
                  uVar31 = 1;
                  uVar16 = 0xe;
                  uVar19 = 0xf;
                  goto LAB_001d7d38;
                }
                uVar19 = (ulong)uVar23;
                if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                  uVar23 = uVar30 + 3;
                  if (uVar30 == 0xc) goto LAB_001d7d2c;
                  uVar19 = (ulong)uVar23;
                  if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                    uVar23 = uVar30 + 4;
                    if (uVar30 == 0xb) goto LAB_001d7d2c;
                    uVar19 = (ulong)uVar23;
                    if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                      uVar23 = uVar30 + 5;
                      if (uVar30 == 10) goto LAB_001d7d2c;
                      uVar19 = (ulong)uVar23;
                      if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                        uVar23 = uVar30 + 6;
                        if (uVar30 == 9) goto LAB_001d7d2c;
                        uVar19 = (ulong)uVar23;
                        if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                          uVar23 = uVar30 + 7;
                          if (uVar30 == 8) goto LAB_001d7d2c;
                          uVar19 = (ulong)uVar23;
                          if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                            uVar23 = uVar30 + 8;
                            if (uVar30 == 7) goto LAB_001d7d2c;
                            uVar19 = (ulong)uVar23;
                            if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                              uVar23 = uVar30 + 9;
                              if (uVar30 == 6) goto LAB_001d7d2c;
                              uVar19 = (ulong)uVar23;
                              if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                uVar23 = uVar30 + 10;
                                if (uVar30 == 5) goto LAB_001d7d2c;
                                uVar19 = (ulong)uVar23;
                                if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                  uVar23 = uVar30 + 0xb;
                                  if (uVar30 == 4) goto LAB_001d7d2c;
                                  uVar19 = (ulong)uVar23;
                                  if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                    uVar23 = uVar30 + 0xc;
                                    if (uVar30 == 3) goto LAB_001d7d2c;
                                    uVar19 = (ulong)uVar23;
                                    if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                      uVar23 = uVar30 + 0xd;
                                      if (uVar30 == 2) goto LAB_001d7d2c;
                                      uVar19 = (ulong)uVar23;
                                      if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                        uVar23 = uVar30 + 0xe;
                                        if (uVar30 == 1) goto LAB_001d7d2c;
                                        uVar19 = (ulong)uVar23;
                                        if (puVar2[(ulong)uVar23 + 1] <= uVar29) {
                                          if ((uVar30 == 0) || (*(uint *)(this + 0x2dec) <= uVar29))
                                          goto LAB_001d74a4;
                                          uVar23 = 0xe;
                                          uVar19 = 0xe;
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
              uVar16 = (ulong)(uVar23 - 1);
              uVar31 = 0x10 - uVar23;
            }
            else {
LAB_001d74a4:
              uVar31 = 1;
              uVar16 = 0xe;
              uVar23 = 0xf;
              uVar19 = 0xf;
            }
LAB_001d7d38:
            iVar27 = iVar27 + (uVar23 + uVar15 >> 3);
            uVar30 = uVar23 + uVar15 & 7;
            *(int *)(this + 8) = iVar27;
            *(uint *)(this + 0xc) = uVar30;
            uVar23 = (uVar29 - puVar2[uVar16 + 1] >> (ulong)(uVar31 & 0x1f)) + puVar2[uVar19 + 0x11]
            ;
            if (*puVar2 <= uVar23) {
              uVar23 = 0;
            }
            uVar6 = *(ushort *)((long)puVar2 + (ulong)uVar23 * 2 + 0xc88);
          }
          bVar5 = Unpack20(bool)::LBits[(int)(uint)uVar6];
          uVar23 = (byte)Unpack20(bool)::LDecode[(int)(uint)uVar6] + 2;
          if (bVar5 != 0) {
            uVar23 = ((((uint)*(byte *)(lVar25 + iVar27 + 2) |
                        (uint)*(byte *)(lVar25 + iVar27) << 0x10 |
                       (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >> (ulong)(8 - uVar30 & 0x1f) &
                      0xffff) >> (ulong)(0x10 - bVar5 & 0x1f)) + uVar23;
            *(uint *)(this + 8) = iVar27 + (uVar30 + bVar5 >> 3);
            *(uint *)(this + 0xc) = uVar30 + bVar5 & 7;
          }
          if (0x100 < uVar28) {
            if (uVar28 < 0x2000) {
              uVar23 = uVar23 + 1;
            }
            else {
              if (0x3ffff < uVar28) {
                uVar23 = uVar23 + 1;
              }
              uVar23 = uVar23 + 2;
            }
          }
          *(int *)(this + 0xb0) = iVar3;
          uVar16 = uVar21 - uVar28;
          *(uint *)(this + ((ulong)uVar14 + 0x28) * 4) = uVar28;
          lVar26 = lVar26 - (ulong)uVar23;
          *(uint *)(this + 0xb4) = uVar23;
          *(uint *)(this + 0xb8) = uVar28;
          *(long *)(this + 0x4da0) = lVar26;
          uVar19 = uVar16;
          if (uVar16 < uVar21) {
            uVar19 = uVar21;
          }
          if (uVar24 <= uVar19) {
            if (uVar23 != 0) {
              uVar12 = *(ulong *)(this + 0xe980);
              uVar24 = uVar16;
              uVar19 = uVar16 + 1;
              do {
                bVar9 = uVar19 != uVar16 + 1 + (ulong)(uVar23 - 1);
                *(undefined *)(*(long *)(this + 0x4b90) + uVar21) =
                     *(undefined *)(*(long *)(this + 0x4b90) + (uVar24 & uVar12));
                uVar12 = *(ulong *)(this + 0xe980);
                uVar21 = *(long *)(this + 0xc0) + 1U & uVar12;
                *(ulong *)(this + 0xc0) = uVar21;
                uVar24 = uVar19;
                uVar19 = uVar19 + 1;
              } while (bVar9);
              iVar27 = *(int *)(this + 8);
              lVar25 = *(long *)(this + 0x4da0);
              goto joined_r0x001d7ef4;
            }
            goto LAB_001d8000;
          }
          *(ulong *)(this + 0xc0) = uVar23 + uVar21;
          puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar16);
          puVar20 = (undefined *)(*(long *)(this + 0x4b90) + uVar21);
          if (7 < uVar23) {
            uVar23 = uVar23 - 8;
            bVar9 = (long)uVar16 < (long)(uVar21 + 0x10);
            bVar8 = false;
            if (bVar9) {
              bVar8 = (long)(uVar21 - (uVar16 + 0x10)) < 0;
            }
            bVar9 = bVar8 != (bVar9 && SBORROW8(uVar21,uVar16 + 0x10));
            if ((bVar9 || uVar23 < 7) || !bVar9 && uVar23 == 7) {
              puVar13 = puVar20;
              puVar18 = puVar22;
              do {
                *puVar13 = *puVar18;
                puVar1 = puVar13 + 8;
                puVar13[1] = puVar18[1];
                puVar13[2] = puVar18[2];
                puVar13[3] = puVar18[3];
                puVar13[4] = puVar18[4];
                puVar13[5] = puVar18[5];
                puVar13[6] = puVar18[6];
                puVar13[7] = puVar18[7];
                puVar13 = puVar1;
                puVar18 = puVar18 + 8;
              } while (puVar20 + (ulong)(uVar23 & 0xfffffff8) + 8 != puVar1);
            }
            else {
              uVar15 = (uVar23 >> 3) + 1;
              lVar25 = 0;
              do {
                uVar32 = *(undefined8 *)(puVar22 + lVar25);
                *(undefined8 *)((long)(puVar20 + lVar25) + 8) =
                     *(undefined8 *)((long)(puVar22 + lVar25) + 8);
                *(undefined8 *)(puVar20 + lVar25) = uVar32;
                lVar25 = lVar25 + 0x10;
              } while (lVar25 != ((ulong)((uVar15 >> 1) - 1) + 1) * 0x10);
              lVar25 = ((ulong)uVar15 & 0x3ffffffe) * 8;
              if ((uVar15 & 1) != 0) {
                puVar20[lVar25] = puVar22[lVar25];
                puVar20[lVar25 + 1] = puVar22[lVar25 + 1];
                puVar20[lVar25 + 2] = puVar22[lVar25 + 2];
                puVar20[lVar25 + 3] = puVar22[lVar25 + 3];
                puVar20[lVar25 + 4] = puVar22[lVar25 + 4];
                puVar20[lVar25 + 5] = puVar22[lVar25 + 5];
                puVar20[lVar25 + 6] = puVar22[lVar25 + 6];
                puVar20[lVar25 + 7] = puVar22[lVar25 + 7];
              }
            }
            lVar25 = (ulong)(uVar23 & 0xfffffff8) + 8;
            puVar22 = puVar22 + lVar25;
            puVar20 = puVar20 + lVar25;
            uVar23 = uVar23 + (uVar23 >> 3) * -8;
          }
          if (((uVar23 != 0) && (*puVar20 = *puVar22, uVar23 != 1)) &&
             ((puVar20[1] = puVar22[1], uVar23 != 2 &&
              (((puVar20[2] = puVar22[2], uVar23 != 3 && (puVar20[3] = puVar22[3], uVar23 != 4)) &&
               (puVar20[4] = puVar22[4], uVar23 != 5)))))) {
            puVar20[5] = puVar22[5];
            goto joined_r0x001d8140;
          }
        }
LAB_001d6fe0:
        iVar27 = *(int *)(this + 8);
        lVar25 = *(long *)(this + 0x4da0);
      }
      else {
        bVar5 = Unpack20(bool)::LBits[(int)(uVar23 - 0x10e)];
        uVar23 = (byte)Unpack20(bool)::LDecode[(int)(uVar23 - 0x10e)] + 3;
        uVar14 = ((uint)*(byte *)(lVar25 + iVar27 + 2) | (uint)*(byte *)(lVar25 + iVar27) << 0x10 |
                 (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >> (ulong)(8 - uVar15 & 0x1f);
        if (bVar5 != 0) {
          uVar28 = bVar5 + uVar15;
          uVar15 = uVar28 & 7;
          iVar27 = iVar27 + (uVar28 >> 3);
          *(int *)(this + 8) = iVar27;
          *(uint *)(this + 0xc) = uVar15;
          uVar23 = ((uVar14 & 0xffff) >> (ulong)(0x10 - bVar5 & 0x1f)) + uVar23;
          uVar14 = ((uint)*(byte *)(lVar25 + iVar27 + 2) | (uint)*(byte *)(lVar25 + iVar27) << 0x10
                   | (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >> (ulong)(8 - uVar15 & 0x1f);
        }
        uVar28 = *(uint *)(this + 0x105c);
        uVar14 = uVar14 & 0xfffe;
        if (uVar14 < *(uint *)(this + (ulong)uVar28 * 4 + 0xfdc)) {
          uVar24 = (ulong)(uVar14 >> (ulong)(0x10 - uVar28 & 0x1f));
          uVar6 = *(ushort *)(this + uVar24 * 2 + 0x1460);
          uVar28 = (byte)this[uVar24 + 0x1060] + uVar15 & 7;
          iVar27 = iVar27 + ((byte)this[uVar24 + 0x1060] + uVar15 >> 3);
          *(int *)(this + 8) = iVar27;
          *(uint *)(this + 0xc) = uVar28;
        }
        else {
          uVar29 = uVar28 + 1;
          if (uVar29 < 0xf) {
            uVar24 = (ulong)uVar29;
            if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
              uVar29 = uVar28 + 2;
              if (uVar28 == 0xd) {
LAB_001d7f28:
                uVar30 = 1;
                uVar19 = 0xe;
                uVar24 = 0xf;
                goto LAB_001d7764;
              }
              uVar24 = (ulong)uVar29;
              if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                uVar29 = uVar28 + 3;
                if (uVar28 == 0xc) goto LAB_001d7f28;
                uVar24 = (ulong)uVar29;
                if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                  uVar29 = uVar28 + 4;
                  if (uVar28 == 0xb) goto LAB_001d7f28;
                  uVar24 = (ulong)uVar29;
                  if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                    uVar29 = uVar28 + 5;
                    if (uVar28 == 10) goto LAB_001d7f28;
                    uVar24 = (ulong)uVar29;
                    if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                      uVar29 = uVar28 + 6;
                      if (uVar28 == 9) goto LAB_001d7f28;
                      uVar24 = (ulong)uVar29;
                      if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                        uVar29 = uVar28 + 7;
                        if (uVar28 == 8) goto LAB_001d7f28;
                        uVar24 = (ulong)uVar29;
                        if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                          uVar29 = uVar28 + 8;
                          if (uVar28 == 7) goto LAB_001d7f28;
                          uVar24 = (ulong)uVar29;
                          if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                            uVar29 = uVar28 + 9;
                            if (uVar28 == 6) goto LAB_001d7f28;
                            uVar24 = (ulong)uVar29;
                            if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                              uVar29 = uVar28 + 10;
                              if (uVar28 == 5) goto LAB_001d7f28;
                              uVar24 = (ulong)uVar29;
                              if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                                uVar29 = uVar28 + 0xb;
                                if (uVar28 == 4) goto LAB_001d7f28;
                                uVar24 = (ulong)uVar29;
                                if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                                  uVar29 = uVar28 + 0xc;
                                  if (uVar28 == 3) goto LAB_001d7f28;
                                  uVar24 = (ulong)uVar29;
                                  if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                                    uVar29 = uVar28 + 0xd;
                                    if (uVar28 == 2) goto LAB_001d7f28;
                                    uVar24 = (ulong)uVar29;
                                    if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                                      uVar29 = uVar28 + 0xe;
                                      if (uVar28 == 1) goto LAB_001d7f28;
                                      uVar24 = (ulong)uVar29;
                                      if (*(uint *)(this + (ulong)uVar29 * 4 + 0xfdc) <= uVar14) {
                                        if ((uVar28 == 0) || (*(uint *)(this + 0x1014) <= uVar14))
                                        goto LAB_001d7754;
                                        uVar29 = 0xe;
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
            uVar19 = (ulong)(uVar29 - 1);
            uVar30 = 0x10 - uVar29;
          }
          else {
LAB_001d7754:
            uVar30 = 1;
            uVar19 = 0xe;
            uVar29 = 0xf;
            uVar24 = 0xf;
          }
LAB_001d7764:
          iVar27 = iVar27 + (uVar29 + uVar15 >> 3);
          uVar28 = uVar29 + uVar15 & 7;
          *(int *)(this + 8) = iVar27;
          *(uint *)(this + 0xc) = uVar28;
          uVar15 = (uVar14 - *(int *)(this + uVar19 * 4 + 0xfdc) >> (ulong)(uVar30 & 0x1f)) +
                   *(int *)(this + uVar24 * 4 + 0x101c);
          if (*(uint *)(this + 0xfd8) <= uVar15) {
            uVar15 = 0;
          }
          uVar6 = *(ushort *)(this + (ulong)uVar15 * 2 + 0x1c60);
        }
        bVar5 = Unpack20(bool)::DBits[(int)(uint)uVar6];
        uVar15 = *(int *)(Unpack20(bool)::DDecode + (long)(int)(uint)uVar6 * 4) + 1;
        if (bVar5 != 0) {
          uVar15 = uVar15 + ((((uint)*(byte *)(lVar25 + iVar27 + 2) |
                               (uint)*(byte *)(lVar25 + iVar27) << 0x10 |
                              (uint)*(byte *)(lVar25 + iVar27 + 1) << 8) >>
                              (ulong)(8 - uVar28 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar5 & 0x1f));
          *(uint *)(this + 8) = iVar27 + (uVar28 + bVar5 >> 3);
          *(uint *)(this + 0xc) = uVar28 + bVar5 & 7;
        }
        if (0x1fff < uVar15) {
          if (0x3ffff < uVar15) {
            uVar23 = uVar23 + 1;
          }
          uVar23 = uVar23 + 1;
        }
        uVar14 = *(uint *)(this + 0xb0);
        lVar26 = *(long *)(this + 0x4da0);
        *(uint *)(this + 0xb0) = uVar14 + 1;
        lVar25 = *(long *)(this + 0xe978);
        uVar19 = uVar21 - uVar15;
        *(uint *)(this + (((ulong)uVar14 & 3) + 0x28) * 4) = uVar15;
        lVar26 = lVar26 - (ulong)uVar23;
        *(uint *)(this + 0xb4) = uVar23;
        *(uint *)(this + 0xb8) = uVar15;
        *(long *)(this + 0x4da0) = lVar26;
        uVar24 = uVar21;
        if (uVar21 < uVar19) {
          uVar24 = uVar19;
        }
        if (uVar24 < lVar25 - 0x1001U) {
          *(ulong *)(this + 0xc0) = uVar23 + uVar21;
          puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar19);
          puVar20 = (undefined *)(*(long *)(this + 0x4b90) + uVar21);
          if (7 < uVar23) {
            uVar23 = uVar23 - 8;
            bVar9 = (long)uVar19 < (long)(uVar21 + 0x10);
            bVar8 = false;
            if (bVar9) {
              bVar8 = (long)(uVar21 - (uVar19 + 0x10)) < 0;
            }
            bVar9 = bVar8 != (bVar9 && SBORROW8(uVar21,uVar19 + 0x10));
            if ((bVar9 || uVar23 < 7) || !bVar9 && uVar23 == 7) {
              puVar13 = puVar20;
              puVar18 = puVar22;
              do {
                *puVar13 = *puVar18;
                puVar1 = puVar13 + 8;
                puVar13[1] = puVar18[1];
                puVar13[2] = puVar18[2];
                puVar13[3] = puVar18[3];
                puVar13[4] = puVar18[4];
                puVar13[5] = puVar18[5];
                puVar13[6] = puVar18[6];
                puVar13[7] = puVar18[7];
                puVar13 = puVar1;
                puVar18 = puVar18 + 8;
              } while (puVar20 + (ulong)(uVar23 & 0xfffffff8) + 8 != puVar1);
            }
            else {
              uVar15 = (uVar23 >> 3) + 1;
              lVar25 = 0;
              do {
                uVar32 = *(undefined8 *)(puVar22 + lVar25);
                *(undefined8 *)((long)(puVar20 + lVar25) + 8) =
                     *(undefined8 *)((long)(puVar22 + lVar25) + 8);
                *(undefined8 *)(puVar20 + lVar25) = uVar32;
                lVar25 = lVar25 + 0x10;
              } while (((ulong)((uVar15 >> 1) - 1) + 1) * 0x10 - lVar25 != 0);
              lVar25 = ((ulong)uVar15 & 0x3ffffffe) * 8;
              if ((uVar15 & 1) != 0) {
                puVar20[lVar25] = puVar22[lVar25];
                puVar20[lVar25 + 1] = puVar22[lVar25 + 1];
                puVar20[lVar25 + 2] = puVar22[lVar25 + 2];
                puVar20[lVar25 + 3] = puVar22[lVar25 + 3];
                puVar20[lVar25 + 4] = puVar22[lVar25 + 4];
                puVar20[lVar25 + 5] = puVar22[lVar25 + 5];
                puVar20[lVar25 + 6] = puVar22[lVar25 + 6];
                puVar20[lVar25 + 7] = puVar22[lVar25 + 7];
              }
            }
            lVar25 = (ulong)(uVar23 & 0xfffffff8) + 8;
            uVar23 = uVar23 + (uVar23 >> 3) * -8;
            puVar22 = puVar22 + lVar25;
            puVar20 = puVar20 + lVar25;
          }
          if ((((((uVar23 == 0) || (*puVar20 = *puVar22, uVar23 == 1)) ||
                (puVar20[1] = puVar22[1], uVar23 == 2)) ||
               ((puVar20[2] = puVar22[2], uVar23 == 3 || (puVar20[3] = puVar22[3], uVar23 == 4))))
              || (puVar20[4] = puVar22[4], uVar23 == 5)) || (puVar20[5] = puVar22[5], uVar23 != 7))
          goto LAB_001d6fe0;
          puVar20[6] = puVar22[6];
          lVar25 = *(long *)(this + 0x4da0);
          iVar27 = *(int *)(this + 8);
        }
        else {
          if (uVar23 == 0) {
LAB_001d8000:
            iVar27 = *(int *)(this + 8);
            goto joined_r0x001d8004;
          }
          uVar12 = *(ulong *)(this + 0xe980);
          uVar24 = uVar19 + 1;
          uVar16 = uVar19;
          do {
            uVar17 = uVar24;
            *(undefined *)(*(long *)(this + 0x4b90) + uVar21) =
                 *(undefined *)(*(long *)(this + 0x4b90) + (uVar16 & uVar12));
            uVar12 = *(ulong *)(this + 0xe980);
            uVar21 = *(long *)(this + 0xc0) + 1U & uVar12;
            *(ulong *)(this + 0xc0) = uVar21;
            uVar24 = uVar17 + 1;
            uVar16 = uVar17;
          } while (uVar17 != uVar19 + 1 + (ulong)(uVar23 - 1));
          iVar27 = *(int *)(this + 8);
          lVar25 = *(long *)(this + 0x4da0);
        }
      }
joined_r0x001d7ef4:
    } while (-1 < lVar25);
  }
  if (*(int *)(this + 0xd0) <= iVar27 + 4) goto LAB_001d6da8;
  iVar3 = *(int *)(this + 0xc);
  lVar25 = *(long *)(this + 0x18) + (long)iVar27;
  uVar23 = ((uint)*(byte *)(lVar25 + 2) |
            (uint)*(byte *)(*(long *)(this + 0x18) + (long)iVar27) << 0x10 |
           (uint)*(byte *)(lVar25 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f) & 0xfffe;
  if (*(int *)(this + 0x98a8) == 0) {
    uVar15 = *(uint *)(this + 0x170);
    if (uVar23 < *(uint *)(this + (ulong)uVar15 * 4 + 0xf0)) {
      uVar21 = (ulong)(uVar23 >> (ulong)(0x10 - uVar15 & 0x1f));
      UVar4 = this[uVar21 + 0x174];
      sVar7 = *(short *)(this + uVar21 * 2 + 0x574);
      *(uint *)(this + 8) = iVar27 + ((uint)(byte)UVar4 + iVar3 >> 3);
      *(uint *)(this + 0xc) = (uint)(byte)UVar4 + iVar3 & 7;
    }
    else {
      uVar14 = uVar15 + 1;
      if (uVar14 < 0xf) {
        uVar21 = (ulong)uVar14;
        if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
          uVar14 = uVar15 + 2;
          if (uVar15 == 0xd) {
LAB_001d7cdc:
            uVar15 = 1;
            uVar24 = 0xe;
            uVar21 = 0xf;
            goto LAB_001d7ce8;
          }
          uVar21 = (ulong)uVar14;
          if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
            uVar14 = uVar15 + 3;
            if (uVar15 == 0xc) goto LAB_001d7cdc;
            uVar21 = (ulong)uVar14;
            if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
              uVar14 = uVar15 + 4;
              if (uVar15 == 0xb) goto LAB_001d7cdc;
              uVar21 = (ulong)uVar14;
              if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                uVar14 = uVar15 + 5;
                if (uVar15 == 10) goto LAB_001d7cdc;
                uVar21 = (ulong)uVar14;
                if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                  uVar14 = uVar15 + 6;
                  if (uVar15 == 9) goto LAB_001d7cdc;
                  uVar21 = (ulong)uVar14;
                  if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                    uVar14 = uVar15 + 7;
                    if (uVar15 == 8) goto LAB_001d7cdc;
                    uVar21 = (ulong)uVar14;
                    if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                      uVar14 = uVar15 + 8;
                      if (uVar15 == 7) goto LAB_001d7cdc;
                      uVar21 = (ulong)uVar14;
                      if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                        uVar14 = uVar15 + 9;
                        if (uVar15 == 6) goto LAB_001d7cdc;
                        uVar21 = (ulong)uVar14;
                        if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                          uVar14 = uVar15 + 10;
                          if (uVar15 == 5) goto LAB_001d7cdc;
                          uVar21 = (ulong)uVar14;
                          if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                            uVar14 = uVar15 + 0xb;
                            if (uVar15 == 4) goto LAB_001d7cdc;
                            uVar21 = (ulong)uVar14;
                            if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                              uVar14 = uVar15 + 0xc;
                              if (uVar15 == 3) goto LAB_001d7cdc;
                              uVar21 = (ulong)uVar14;
                              if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                uVar14 = uVar15 + 0xd;
                                if (uVar15 == 2) goto LAB_001d7cdc;
                                uVar21 = (ulong)uVar14;
                                if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                  uVar14 = uVar15 + 0xe;
                                  if (uVar15 == 1) goto LAB_001d7cdc;
                                  uVar21 = (ulong)uVar14;
                                  if (*(uint *)(this + (ulong)uVar14 * 4 + 0xf0) <= uVar23) {
                                    if ((uVar15 == 0) || (*(uint *)(this + 0x128) <= uVar23))
                                    goto LAB_001d7ab8;
                                    uVar14 = 0xe;
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
        uVar24 = (ulong)(uVar14 - 1);
        uVar15 = 0x10 - uVar14;
      }
      else {
LAB_001d7ab8:
        uVar15 = 1;
        uVar24 = 0xe;
        uVar14 = 0xf;
        uVar21 = 0xf;
      }
LAB_001d7ce8:
      *(uint *)(this + 8) = iVar27 + (uVar14 + iVar3 >> 3);
      *(uint *)(this + 0xc) = uVar14 + iVar3 & 7;
      uVar23 = (uVar23 - *(int *)(this + uVar24 * 4 + 0xf0) >> (ulong)(uVar15 & 0x1f)) +
               *(int *)(this + uVar21 * 4 + 0x130);
      if (*(uint *)(this + 0xec) <= uVar23) {
        uVar23 = 0;
      }
      sVar7 = *(short *)(this + (ulong)uVar23 * 2 + 0xd74);
    }
    if (sVar7 != 0x10d) goto LAB_001d6da8;
  }
  else {
    lVar26 = (long)*(int *)(this + 0x98b0);
    lVar25 = lVar26 * 0x3bb;
    uVar15 = *(uint *)(this + lVar26 * 0xeec + 0x5978);
    if (uVar23 < *(uint *)(this + (lVar25 + (ulong)uVar15 + 0x163c) * 4 + 8)) {
      uVar21 = (ulong)(uVar23 >> (ulong)(0x10 - uVar15 & 0x1f));
      UVar4 = this[uVar21 + lVar26 * 0xeec + 0x597c];
      *(uint *)(this + 8) = iVar27 + ((uint)(byte)UVar4 + iVar3 >> 3);
      *(uint *)(this + 0xc) = (uint)(byte)UVar4 + iVar3 & 7;
      sVar7 = *(short *)(this + (uVar21 + lVar26 * 0x776 + 0x2eb8) * 2 + 0xc);
    }
    else {
      uVar14 = uVar15 + 1;
      if (uVar14 < 0xf) {
        uVar21 = (ulong)uVar14;
        if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
          uVar14 = uVar15 + 2;
          if (uVar15 == 0xd) {
LAB_001d7c50:
            uVar15 = 1;
            uVar24 = 0xe;
            uVar21 = 0xf;
            goto LAB_001d7c5c;
          }
          uVar21 = (ulong)uVar14;
          if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
            uVar14 = uVar15 + 3;
            if (uVar15 == 0xc) goto LAB_001d7c50;
            uVar21 = (ulong)uVar14;
            if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
              uVar14 = uVar15 + 4;
              if (uVar15 == 0xb) goto LAB_001d7c50;
              uVar21 = (ulong)uVar14;
              lVar25 = lVar26 * 0x3bb;
              if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                uVar14 = uVar15 + 5;
                if (uVar15 == 10) goto LAB_001d7c50;
                uVar21 = (ulong)uVar14;
                if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                  uVar14 = uVar15 + 6;
                  if (uVar15 == 9) goto LAB_001d7c50;
                  uVar21 = (ulong)uVar14;
                  if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                    uVar14 = uVar15 + 7;
                    if (uVar15 == 8) goto LAB_001d7c50;
                    uVar21 = (ulong)uVar14;
                    if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                      uVar14 = uVar15 + 8;
                      if (uVar15 == 7) goto LAB_001d7c50;
                      uVar21 = (ulong)uVar14;
                      if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                        uVar14 = uVar15 + 9;
                        if (uVar15 == 6) goto LAB_001d7c50;
                        uVar21 = (ulong)uVar14;
                        lVar25 = lVar26 * 0x3bb;
                        if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                          uVar14 = uVar15 + 10;
                          if (uVar15 == 5) goto LAB_001d7c50;
                          uVar21 = (ulong)uVar14;
                          if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                            uVar14 = uVar15 + 0xb;
                            if (uVar15 == 4) goto LAB_001d7c50;
                            uVar21 = (ulong)uVar14;
                            if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                              uVar14 = uVar15 + 0xc;
                              if (uVar15 == 3) goto LAB_001d7c50;
                              uVar21 = (ulong)uVar14;
                              if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23) {
                                uVar14 = uVar15 + 0xd;
                                if (uVar15 == 2) goto LAB_001d7c50;
                                uVar21 = (ulong)uVar14;
                                if (*(uint *)(this + (lVar25 + uVar21 + 0x163c) * 4 + 8) <= uVar23)
                                {
                                  uVar14 = uVar15 + 0xe;
                                  if (uVar15 == 1) goto LAB_001d7c50;
                                  uVar21 = (ulong)uVar14;
                                  if (*(uint *)(this + (uVar21 + lVar26 * 0x3bb + 0x163c) * 4 + 8)
                                      <= uVar23) {
                                    if ((uVar15 == 0) ||
                                       (*(uint *)(this + lVar26 * 0xeec + 0x5930) <= uVar23))
                                    goto LAB_001d6d44;
                                    uVar14 = 0xe;
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
        uVar24 = (ulong)(uVar14 - 1);
        uVar15 = 0x10 - uVar14;
      }
      else {
LAB_001d6d44:
        uVar15 = 1;
        uVar24 = 0xe;
        uVar14 = 0xf;
        uVar21 = 0xf;
      }
LAB_001d7c5c:
      *(uint *)(this + 8) = iVar27 + (uVar14 + iVar3 >> 3);
      *(uint *)(this + 0xc) = uVar14 + iVar3 & 7;
      uVar23 = (uVar23 - *(int *)(this + (lVar26 * 0x3bb + uVar24 + 0x163c) * 4 + 8) >>
               (ulong)(uVar15 & 0x1f)) + *(int *)(this + (lVar26 * 0x3bb + uVar21 + 0x164c) * 4 + 8)
      ;
      if (*(uint *)(this + lVar26 * 0xeec + 0x58f4) <= uVar23) {
        uVar23 = 0;
      }
      sVar7 = *(short *)(this + ((ulong)uVar23 + lVar26 * 0x776 + 0x32b8) * 2 + 0xc);
    }
    if (sVar7 != 0x100) goto LAB_001d6da8;
  }
  ReadTables20();
LAB_001d6da8:
  uVar24 = *(ulong *)(this + 0xc0);
  uVar21 = *(ulong *)(this + 200);
  if ((uVar24 == uVar21) || (this[0x4daa] = (Unpack)0x1, uVar21 <= uVar24)) {
    ComprDataIO::UnpWrite
              (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar21),uVar24 - uVar21);
  }
  else {
    ComprDataIO::UnpWrite
              (*(ComprDataIO **)this,(uchar *)(*(long *)(this + 0x4b90) + uVar21),
               (long)-(int)uVar21 & *(ulong *)(this + 0xe980));
    ComprDataIO::UnpWrite(*(ComprDataIO **)this,*(uchar **)(this + 0x4b90),*(ulong *)(this + 0xc0));
    this[0x4da9] = (Unpack)0x1;
  }
  *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  return;
}


