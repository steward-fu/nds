/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack8Unpack29Eb
 * Address  : 001e2430
 * Program  : drastic64
 */


/* Unpack::Unpack29(bool) */

void __thiscall Unpack::Unpack29(Unpack *this,bool param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Unpack UVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  void *pvVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  uint uVar35;
  long lVar36;
  size_t sVar37;
  int iVar38;
  ulong uVar39;
  undefined uVar40;
  int iVar41;
  undefined8 uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  
  if (DAT_004faf74 == 0) {
    uVar39 = 0;
    iVar45 = 0;
    lVar36 = 0;
    do {
      uVar14 = (&Unpack29(bool)::DBitLengthCounts)[lVar36];
      if (0 < (int)uVar14) {
        uVar35 = uVar14 - 1;
        uVar13 = (uint)lVar36;
        iVar15 = 1 << (ulong)(uVar13 & 0x1f);
        iVar38 = (int)uVar39;
        if (uVar35 < 6) {
          uVar26 = 0;
          iVar29 = iVar38;
          iVar43 = iVar45;
LAB_001e25fc:
          (&Unpack29(bool)::DDecode)[iVar29] = iVar43;
          if ((int)(uVar26 + 1) < (int)uVar14) {
            (&Unpack29(bool)::DDecode)[iVar29 + 1] = iVar15 + iVar43;
            iVar43 = iVar15 + iVar15 + iVar43;
            if ((int)(uVar26 + 2) < (int)uVar14) {
              (&Unpack29(bool)::DDecode)[iVar29 + 2] = iVar43;
              iVar43 = iVar15 + iVar43;
              if ((int)(uVar26 + 3) < (int)uVar14) {
                (&Unpack29(bool)::DDecode)[iVar29 + 3] = iVar43;
                iVar43 = iVar15 + iVar43;
                if ((int)(uVar26 + 4) < (int)uVar14) {
                  (&Unpack29(bool)::DDecode)[iVar29 + 4] = iVar43;
                  if ((int)(uVar26 + 5) < (int)uVar14) {
                    (&Unpack29(bool)::DDecode)[iVar29 + 5] = iVar15 + iVar43;
                  }
                }
              }
            }
          }
        }
        else {
          iVar46 = iVar15 + iVar45;
          iVar29 = 4 << (ulong)(uVar13 & 0x1f);
          uVar39 = -(uVar39 >> 0x1f) & 0xfffffffc00000000 | uVar39 << 2;
          uVar26 = uVar14 >> 2;
          iVar44 = iVar15 + iVar46;
          *(ulong *)(uVar39 + 0x4faf78) = CONCAT44(iVar15 + iVar44,iVar44);
          *(ulong *)((long)&Unpack29(bool)::DDecode + uVar39) = CONCAT44(iVar46,iVar45);
          iVar43 = iVar29 + iVar15 + iVar44;
          if (uVar26 != 1) {
            *(ulong *)((long)&DAT_004faf88 + uVar39) = CONCAT44(iVar43,iVar29 + iVar44);
            *(ulong *)((long)&DAT_004faf80 + uVar39) = CONCAT44(iVar29 + iVar46,iVar29 + iVar45);
            iVar41 = iVar29 + iVar45 + iVar29;
            iVar46 = iVar29 + iVar46 + iVar29;
            iVar44 = iVar29 + iVar44 + iVar29;
            iVar43 = iVar43 + iVar29;
            if (uVar26 != 2) {
              *(ulong *)(uVar39 + 0x4faf98) = CONCAT44(iVar43,iVar44);
              *(ulong *)((long)&DAT_004faf90 + uVar39) = CONCAT44(iVar46,iVar41);
              iVar41 = iVar41 + iVar29;
              iVar46 = iVar46 + iVar29;
              iVar44 = iVar44 + iVar29;
              iVar43 = iVar43 + iVar29;
              if (uVar26 != 3) {
                *(ulong *)(uVar39 + 0x4fafa8) = CONCAT44(iVar43,iVar44);
                *(ulong *)(&DAT_004fafa0 + uVar39) = CONCAT44(iVar46,iVar41);
                iVar41 = iVar41 + iVar29;
                iVar46 = iVar46 + iVar29;
                iVar44 = iVar44 + iVar29;
                iVar43 = iVar43 + iVar29;
                if (uVar26 != 4) {
                  *(ulong *)(uVar39 + 0x4fafb8) = CONCAT44(iVar43,iVar44);
                  *(ulong *)(&DAT_004fafb0 + uVar39) = CONCAT44(iVar46,iVar41);
                  iVar41 = iVar41 + iVar29;
                  iVar46 = iVar46 + iVar29;
                  iVar44 = iVar44 + iVar29;
                  iVar43 = iVar43 + iVar29;
                  if (uVar26 != 5) {
                    *(ulong *)(uVar39 + 0x4fafc8) = CONCAT44(iVar43,iVar44);
                    *(ulong *)(&DAT_004fafc0 + uVar39) = CONCAT44(iVar46,iVar41);
                    iVar41 = iVar41 + iVar29;
                    iVar46 = iVar46 + iVar29;
                    iVar44 = iVar44 + iVar29;
                    iVar43 = iVar43 + iVar29;
                    if (uVar26 != 6) {
                      *(ulong *)(uVar39 + 0x4fafd8) = CONCAT44(iVar43,iVar44);
                      *(ulong *)(&DAT_004fafd0 + uVar39) = CONCAT44(iVar46,iVar41);
                      iVar41 = iVar41 + iVar29;
                      iVar46 = iVar46 + iVar29;
                      iVar44 = iVar44 + iVar29;
                      iVar43 = iVar43 + iVar29;
                      if (uVar26 != 7) {
                        *(ulong *)(uVar39 + 0x4fafe8) = CONCAT44(iVar43,iVar44);
                        *(ulong *)(&DAT_004fafe0 + uVar39) = CONCAT44(iVar46,iVar41);
                        iVar41 = iVar41 + iVar29;
                        iVar46 = iVar46 + iVar29;
                        iVar44 = iVar44 + iVar29;
                        iVar43 = iVar43 + iVar29;
                        if (uVar26 != 8) {
                          *(ulong *)(uVar39 + 0x4faff8) = CONCAT44(iVar43,iVar44);
                          *(ulong *)(&DAT_004faff0 + uVar39) = CONCAT44(iVar46,iVar41);
                          iVar41 = iVar41 + iVar29;
                          iVar46 = iVar46 + iVar29;
                          iVar44 = iVar44 + iVar29;
                          iVar43 = iVar43 + iVar29;
                          if (uVar26 != 9) {
                            *(ulong *)(uVar39 + 0x4fb008) = CONCAT44(iVar43,iVar44);
                            *(ulong *)(&DAT_004fb000 + uVar39) = CONCAT44(iVar46,iVar41);
                            iVar41 = iVar41 + iVar29;
                            iVar46 = iVar46 + iVar29;
                            iVar44 = iVar44 + iVar29;
                            iVar43 = iVar43 + iVar29;
                            if (uVar26 != 10) {
                              *(ulong *)(uVar39 + 0x4fb018) = CONCAT44(iVar43,iVar44);
                              *(ulong *)(&DAT_004fb010 + uVar39) = CONCAT44(iVar46,iVar41);
                              iVar41 = iVar41 + iVar29;
                              iVar46 = iVar46 + iVar29;
                              iVar44 = iVar44 + iVar29;
                              iVar43 = iVar43 + iVar29;
                              if (uVar26 != 0xb) {
                                *(ulong *)(uVar39 + 0x4fb028) = CONCAT44(iVar43,iVar44);
                                *(ulong *)(&DAT_004fb020 + uVar39) = CONCAT44(iVar46,iVar41);
                                iVar41 = iVar41 + iVar29;
                                iVar46 = iVar46 + iVar29;
                                iVar44 = iVar44 + iVar29;
                                iVar43 = iVar43 + iVar29;
                                if (uVar26 != 0xc) {
                                  *(ulong *)(uVar39 + 0x4fb038) = CONCAT44(iVar43,iVar44);
                                  *(ulong *)(&DAT_004fb030 + uVar39) = CONCAT44(iVar46,iVar41);
                                  iVar41 = iVar41 + iVar29;
                                  iVar46 = iVar46 + iVar29;
                                  iVar44 = iVar44 + iVar29;
                                  iVar43 = iVar43 + iVar29;
                                  if (uVar26 != 0xd) {
                                    *(ulong *)(uVar39 + 0x4fb048) = CONCAT44(iVar43,iVar44);
                                    *(ulong *)(&DAT_004fb040 + uVar39) = CONCAT44(iVar46,iVar41);
                                    iVar41 = iVar41 + iVar29;
                                    iVar46 = iVar46 + iVar29;
                                    iVar44 = iVar44 + iVar29;
                                    iVar43 = iVar43 + iVar29;
                                    if (uVar26 != 0xe) {
                                      *(ulong *)(uVar39 + 0x4fb058) = CONCAT44(iVar43,iVar44);
                                      *(ulong *)(&DAT_004fb050 + uVar39) = CONCAT44(iVar46,iVar41);
                                      if (uVar26 != 0xf) {
                                        *(ulong *)(uVar39 + 0x4fb068) =
                                             CONCAT44(iVar43 + iVar29,iVar44 + iVar29);
                                        *(ulong *)(&DAT_004fb060 + uVar39) =
                                             CONCAT44(iVar46 + iVar29,iVar41 + iVar29);
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
          uVar26 = uVar14 & 0xfffffffc;
          iVar29 = uVar26 + iVar38;
          iVar43 = (uVar26 << (ulong)(uVar13 & 0x1f)) + iVar45;
          if (uVar26 != uVar14) goto LAB_001e25fc;
        }
        uVar39 = (ulong)(iVar38 + uVar14);
        memset(Unpack29(bool)::DBits + iVar38,uVar13,(ulong)uVar35 + 1);
        iVar45 = (uVar35 << (ulong)(uVar13 & 0x1f)) + iVar15 + iVar45;
      }
      lVar36 = lVar36 + 1;
    } while (lVar36 != 0x13);
  }
  this[0x4db8] = (Unpack)0x1;
  if (this[0x4da8] == (Unpack)0x0) {
    UnpInitData(this,param_1);
    iVar45 = *(int *)(this + 8);
    iVar15 = *(int *)(this + 0xd0);
    iVar38 = iVar15 - iVar45;
    if (iVar38 < 0) {
      return;
    }
    pvVar28 = *(void **)(this + 0x18);
    if (iVar45 < 0x4001) {
      sVar37 = (size_t)iVar15;
      iVar38 = iVar15;
    }
    else {
      sVar37 = (size_t)iVar38;
      if (iVar38 != 0) {
        memmove(pvVar28,(void *)((long)pvVar28 + (long)iVar45),sVar37);
        pvVar28 = *(void **)(this + 0x18);
      }
      *(undefined4 *)(this + 8) = 0;
      *(int *)(this + 0xd0) = iVar38;
    }
    iVar45 = ComprDataIO::UnpRead
                       (*(ComprDataIO **)this,(uchar *)((long)pvVar28 + sVar37),
                        (long)(0x8000 - iVar38));
    if (iVar45 < 1) {
      iVar15 = *(int *)(this + 0xd0) + -0x1e;
      *(int *)(this + 0xd4) = iVar15;
      if (iVar45 == -1) {
        return;
      }
    }
    else {
      iVar15 = iVar45 + *(int *)(this + 0xd0) + -0x1e;
      *(int *)(this + 0xd0) = iVar45 + *(int *)(this + 0xd0);
      *(int *)(this + 0xd4) = iVar15;
    }
    if ((param_1) && (this[0xe8a8] != (Unpack)0x0)) goto LAB_001e26c4;
    cVar12 = ReadTables30();
    if (cVar12 == '\0') {
      return;
    }
  }
  iVar15 = *(int *)(this + 0xd4);
LAB_001e26c4:
  uVar39 = *(ulong *)(this + 0xe980);
  iVar45 = *(int *)(this + 8);
  uVar32 = *(ulong *)(this + 0xc0) & uVar39;
  *(ulong *)(this + 0xc0) = uVar32;
  puVar2 = (uint *)(this + 0x2db0);
  if (iVar15 < iVar45) goto LAB_001e2ae0;
LAB_001e26f8:
  do {
    if ((*(ulong *)(this + 200) - uVar32 & uVar39) < 0x104 && *(ulong *)(this + 200) != uVar32)
    goto LAB_001e2b50;
LAB_001e2710:
    if (*(int *)(this + 0xe8a4) == 1) {
      iVar45 = ModelPPM::DecodeChar();
      if (iVar45 == -1) {
LAB_001e2ef4:
        if (*(long *)(this + 0xe4d8) == 0) {
LAB_001e2f2c:
          pvVar28 = malloc(0x1aaacc);
          *(void **)(this + 0xe588) = pvVar28;
          if (pvVar28 == (void *)0x0) {
            ErrorHandler::MemoryError();
          }
          else {
            *(long *)(this + 0xe6e0) = (long)pvVar28 + 0x1aaab8;
            *(undefined8 *)(this + 0xe4d8) = 0x100000;
          }
        }
        else {
          *(undefined8 *)(this + 0xe4d8) = 0;
          free(*(void **)(this + 0xe588));
          if ((int)*(long *)(this + 0xe4d8) != 0x100000) {
            if (*(long *)(this + 0xe4d8) != 0) {
              *(undefined8 *)(this + 0xe4d8) = 0;
              free(*(void **)(this + 0xe588));
            }
            goto LAB_001e2f2c;
          }
        }
        ModelPPM::StartModelRare((ModelPPM *)(this + 0x9a30),2);
        *(undefined4 *)(this + 0xe8a4) = 0;
        goto LAB_001e2f68;
      }
      if (*(int *)(this + 0xe6f0) != iVar45) {
LAB_001e2bb8:
        lVar36 = *(long *)(this + 0xc0);
        *(long *)(this + 0xc0) = lVar36 + 1;
        *(char *)(*(long *)(this + 0x4b90) + lVar36) = (char)iVar45;
        iVar45 = *(int *)(this + 8);
        iVar15 = *(int *)(this + 0xd4);
        uVar32 = *(ulong *)(this + 0xc0);
        uVar39 = *(ulong *)(this + 0xe980);
        goto LAB_001e2ad0;
      }
      iVar15 = ModelPPM::DecodeChar();
      if (iVar15 == -1) goto LAB_001e2ef4;
      if (iVar15 == 0) {
        cVar12 = ReadTables30();
        if (cVar12 == '\0') {
          UnpWriteBuf30();
          return;
        }
        goto LAB_001e3368;
      }
      if (iVar15 == 2) goto LAB_001e2f68;
      if (iVar15 == 3) {
        cVar12 = ReadVMCodePPM();
        if (cVar12 != '\0') goto LAB_001e3368;
        goto LAB_001e2f68;
      }
      if (iVar15 != 4) {
        if (iVar15 != 5) goto LAB_001e2bb8;
        iVar45 = ModelPPM::DecodeChar();
        if (iVar45 == -1) goto LAB_001e2ef4;
        uVar32 = *(ulong *)(this + 0xc0);
        uVar14 = iVar45 + 4;
        uVar16 = uVar32 - 1;
        uVar39 = uVar32;
        if (uVar32 < uVar16) {
          uVar39 = uVar16;
        }
        if (uVar39 < *(long *)(this + 0xe978) - 0x1001U) {
          *(ulong *)(this + 0xc0) = uVar32 + uVar14;
          puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar16);
          puVar34 = (undefined8 *)(*(long *)(this + 0x4b90) + uVar32);
          if (7 < uVar14) {
            uVar14 = iVar45 - 4;
            uVar40 = *(undefined *)((long)puVar34 + -1);
            lVar36 = (ulong)(uVar14 & 0xfffffff8) + 8;
            puVar3 = (undefined8 *)((long)puVar34 + lVar36);
            puVar33 = puVar34;
            do {
              puVar34 = puVar33 + 1;
              *puVar33 = CONCAT17(uVar40,CONCAT16(uVar40,CONCAT15(uVar40,CONCAT14(uVar40,CONCAT13(
                                                  uVar40,CONCAT12(uVar40,CONCAT11(uVar40,uVar40)))))
                                                 ));
              puVar33 = puVar34;
            } while (puVar34 != puVar3);
            puVar22 = puVar22 + lVar36;
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
          }
          if ((((uVar14 != 0) && (*(undefined *)puVar34 = *puVar22, uVar14 != 1)) &&
              (*(undefined *)((long)puVar34 + 1) = puVar22[1], uVar14 != 2)) &&
             (((*(undefined *)((long)puVar34 + 2) = puVar22[2], uVar14 != 3 &&
               (*(undefined *)((long)puVar34 + 3) = puVar22[3], uVar14 != 4)) &&
              ((*(undefined *)((long)puVar34 + 4) = puVar22[4], uVar14 != 5 &&
               (*(undefined *)((long)puVar34 + 5) = puVar22[5], uVar14 == 7)))))) {
            *(undefined *)((long)puVar34 + 6) = puVar22[6];
            iVar45 = *(int *)(this + 8);
            iVar15 = *(int *)(this + 0xd4);
            uVar32 = *(ulong *)(this + 0xc0);
            uVar39 = *(ulong *)(this + 0xe980);
            goto LAB_001e2ad0;
          }
          goto LAB_001e3368;
        }
        uVar25 = (iVar45 + 3) + uVar32;
        uVar39 = *(ulong *)(this + 0xe980);
        if (uVar14 != 0) {
          do {
            uVar39 = uVar16 & uVar39;
            uVar16 = uVar16 + 1;
            *(undefined *)(*(long *)(this + 0x4b90) + uVar32) =
                 *(undefined *)(*(long *)(this + 0x4b90) + uVar39);
            uVar39 = *(ulong *)(this + 0xe980);
            uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
            *(ulong *)(this + 0xc0) = uVar32;
          } while (uVar16 != uVar25);
        }
        goto LAB_001e304c;
      }
      iVar45 = 0;
      uVar14 = ModelPPM::DecodeChar();
      iVar15 = 0;
      while( true ) {
        if (uVar14 == 0xffffffff) goto LAB_001e2ef4;
        uVar14 = uVar14 & 0xff;
        if (iVar45 == 3) break;
        iVar15 = uVar14 + iVar15 * 0x100;
        iVar45 = iVar45 + 1;
        uVar14 = ModelPPM::DecodeChar();
      }
      uVar32 = *(ulong *)(this + 0xc0);
      uVar16 = uVar32 - (iVar15 + 2);
      uVar39 = uVar32;
      if (uVar32 < uVar16) {
        uVar39 = uVar16;
      }
      lVar36 = *(long *)(this + 0x4b90);
      if (uVar39 < *(long *)(this + 0xe978) - 0x1001U) {
        lVar20 = uVar16 + 0x10;
        *(ulong *)(this + 0xc0) = (uVar14 + 0x20) + uVar32;
        uVar39 = uVar32 + 0x10;
        bVar11 = false;
        if ((long)uVar32 < lVar20) {
          bVar11 = (long)(uVar39 - uVar16) < 0;
        }
        uVar14 = uVar14 + 0x18;
        puVar22 = (undefined *)(lVar36 + uVar32);
        puVar18 = (undefined *)(lVar36 + uVar16);
        if (((long)uVar32 < lVar20 && uVar39 != uVar16) &&
            bVar11 == ((long)uVar32 < lVar20 && SBORROW8(uVar39,uVar16))) {
          puVar19 = puVar18;
          puVar23 = puVar22;
          do {
            *puVar23 = *puVar19;
            puVar1 = puVar19 + 8;
            puVar23[1] = puVar19[1];
            puVar23[2] = puVar19[2];
            puVar23[3] = puVar19[3];
            puVar23[4] = puVar19[4];
            puVar23[5] = puVar19[5];
            puVar23[6] = puVar19[6];
            puVar23[7] = puVar19[7];
            puVar19 = puVar1;
            puVar23 = puVar23 + 8;
          } while (puVar1 != puVar18 + ((ulong)uVar14 & 0x1f8) + 8);
        }
        else {
          uVar35 = (uVar14 >> 3) + 1;
          lVar36 = 0;
          do {
            uVar42 = *(undefined8 *)(puVar18 + lVar36);
            *(undefined8 *)((long)(puVar22 + lVar36) + 8) =
                 *(undefined8 *)((long)(puVar18 + lVar36) + 8);
            *(undefined8 *)(puVar22 + lVar36) = uVar42;
            lVar36 = lVar36 + 0x10;
          } while (((ulong)((uVar35 >> 1) - 1) + 1) * 0x10 - lVar36 != 0);
          lVar36 = ((ulong)uVar35 & 0x7e) * 8;
          if ((uVar35 & 1) != 0) {
            puVar22[lVar36] = puVar18[lVar36];
            puVar22[lVar36 + 1] = puVar18[lVar36 + 1];
            puVar22[lVar36 + 2] = puVar18[lVar36 + 2];
            puVar22[lVar36 + 3] = puVar18[lVar36 + 3];
            puVar22[lVar36 + 4] = puVar18[lVar36 + 4];
            puVar22[lVar36 + 5] = puVar18[lVar36 + 5];
            puVar22[lVar36 + 6] = puVar18[lVar36 + 6];
            puVar22[lVar36 + 7] = puVar18[lVar36 + 7];
          }
        }
        uVar39 = (ulong)(uVar14 & 0xfffffff8);
        iVar45 = uVar14 + (uVar14 >> 3) * -8;
        if ((((iVar45 != 0) && (puVar22[uVar39 + 8] = puVar18[uVar39 + 8], iVar45 != 1)) &&
            ((puVar22[uVar39 + 9] = puVar18[uVar39 + 9], iVar45 != 2 &&
             (((puVar22[uVar39 + 10] = puVar18[uVar39 + 10], iVar45 != 3 &&
               (puVar22[uVar39 + 0xb] = puVar18[uVar39 + 0xb], iVar45 != 4)) &&
              (puVar22[uVar39 + 0xc] = puVar18[uVar39 + 0xc], iVar45 != 5)))))) &&
           (puVar22[uVar39 + 0xd] = puVar18[uVar39 + 0xd], iVar45 == 7)) {
          puVar22[uVar39 + 0xe] = puVar18[uVar39 + 0xe];
          iVar45 = *(int *)(this + 8);
          iVar15 = *(int *)(this + 0xd4);
          uVar32 = *(ulong *)(this + 0xc0);
          uVar39 = *(ulong *)(this + 0xe980);
          goto LAB_001e2ad0;
        }
        goto LAB_001e3368;
      }
      uVar25 = uVar16 + 1;
      *(undefined *)(lVar36 + uVar32) =
           *(undefined *)(lVar36 + (uVar16 & *(ulong *)(this + 0xe980)));
      uVar39 = *(ulong *)(this + 0xe980);
      uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
      *(ulong *)(this + 0xc0) = uVar32;
      do {
        uVar39 = uVar39 & uVar25;
        uVar25 = uVar25 + 1;
        *(undefined *)(*(long *)(this + 0x4b90) + uVar32) =
             *(undefined *)(*(long *)(this + 0x4b90) + uVar39);
        uVar39 = *(ulong *)(this + 0xe980);
        uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
        *(ulong *)(this + 0xc0) = uVar32;
      } while (uVar25 != (ulong)(uVar14 + 0x1e) + 2 + uVar16);
      iVar45 = *(int *)(this + 8);
LAB_001e3050:
      iVar15 = *(int *)(this + 0xd4);
    }
    else {
      iVar45 = *(int *)(this + 8);
      iVar15 = *(int *)(this + 0xc);
      lVar36 = *(long *)(this + 0x18);
      uVar35 = *(uint *)(this + 0x170);
      uVar14 = ((uint)*(byte *)(lVar36 + iVar45 + 2) | (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
               (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >> (ulong)(8U - iVar15 & 0x1f) & 0xfffe;
      if (uVar14 < *(uint *)(this + (ulong)uVar35 * 4 + 0xf0)) {
        uVar39 = (ulong)(uVar14 >> (ulong)(0x10 - uVar35 & 0x1f));
        uVar9 = *(ushort *)(this + uVar39 * 2 + 0x574);
        uVar14 = (uint)uVar9;
        uVar35 = (uint)(byte)this[uVar39 + 0x174] + iVar15 & 7;
        iVar45 = iVar45 + ((uint)(byte)this[uVar39 + 0x174] + iVar15 >> 3);
        *(int *)(this + 8) = iVar45;
        *(uint *)(this + 0xc) = uVar35;
        uVar13 = (uint)uVar9;
        if (uVar13 < 0x100) goto LAB_001e2c18;
LAB_001e29b0:
        if (uVar13 < 0x10f) {
          if (uVar13 == 0x100) {
            cVar12 = ReadEndOfBlock();
            if (cVar12 == '\0') goto LAB_001e2f68;
LAB_001e3368:
            iVar45 = *(int *)(this + 8);
            uVar32 = *(ulong *)(this + 0xc0);
          }
          else {
            if (uVar13 == 0x101) {
              cVar12 = ReadVMCode();
              if (cVar12 == '\0') {
                UnpWriteBuf30();
                return;
              }
              goto LAB_001e3368;
            }
            uVar32 = *(ulong *)(this + 0xc0);
            if (uVar13 != 0x102) {
              if (uVar13 < 0x107) {
                lVar20 = (long)(int)(uVar13 - 0x103) + 0x28;
                uVar14 = *(uint *)(this + lVar20 * 4);
                if (uVar13 - 0x103 != 0) {
                  lVar20 = lVar20 * 4;
                  lVar17 = (long)(int)(uVar13 - 0x104) * -4;
                  memmove(this + lVar17 + lVar20,this + lVar20 + -4 + lVar17,
                          ((long)(int)(uVar13 - 0x104) + 1) * 4);
                }
                *(uint *)(this + 0xa0) = uVar14;
                uVar26 = *(uint *)(this + 0x2e34);
                uVar13 = ((uint)*(byte *)(lVar36 + iVar45 + 2) |
                          (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                         (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >> (ulong)(8 - uVar35 & 0x1f) &
                         0xfffe;
                if (uVar13 < puVar2[(ulong)uVar26 + 1]) {
                  uVar39 = (ulong)(uVar13 >> (ulong)(0x10 - uVar26 & 0x1f));
                  uVar9 = *(ushort *)((long)puVar2 + uVar39 * 2 + 0x488);
                  uVar35 = *(byte *)((long)puVar2 + uVar39 + 0x88) + uVar35;
                  uVar26 = uVar35 & 7;
                  iVar45 = iVar45 + (uVar35 >> 3);
                  *(int *)(this + 8) = iVar45;
                  *(uint *)(this + 0xc) = uVar26;
                }
                else {
                  uVar30 = uVar26 + 1;
                  if (uVar30 < 0xf) {
                    uVar39 = (ulong)uVar30;
                    if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                      uVar30 = uVar26 + 2;
                      if (uVar26 == 0xd) {
LAB_001e3cf4:
                        uVar31 = 1;
                        uVar27 = 0xe;
                        uVar39 = 0xf;
                        goto LAB_001e3cac;
                      }
                      uVar39 = (ulong)uVar30;
                      if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                        uVar30 = uVar26 + 3;
                        if (uVar26 == 0xc) goto LAB_001e3cf4;
                        uVar39 = (ulong)uVar30;
                        if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                          uVar30 = uVar26 + 4;
                          if (uVar26 == 0xb) goto LAB_001e3cf4;
                          uVar39 = (ulong)uVar30;
                          if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                            uVar30 = uVar26 + 5;
                            if (uVar26 == 10) goto LAB_001e3cf4;
                            uVar39 = (ulong)uVar30;
                            if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                              uVar30 = uVar26 + 6;
                              if (uVar26 == 9) goto LAB_001e3cf4;
                              uVar39 = (ulong)uVar30;
                              if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                uVar30 = uVar26 + 7;
                                if (uVar26 == 8) goto LAB_001e3cf4;
                                uVar39 = (ulong)uVar30;
                                if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                  uVar30 = uVar26 + 8;
                                  if (uVar26 == 7) goto LAB_001e3cf4;
                                  uVar39 = (ulong)uVar30;
                                  if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                    uVar30 = uVar26 + 9;
                                    if (uVar26 == 6) goto LAB_001e3cf4;
                                    uVar39 = (ulong)uVar30;
                                    if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                      uVar30 = uVar26 + 10;
                                      if (uVar26 == 5) goto LAB_001e3cf4;
                                      uVar39 = (ulong)uVar30;
                                      if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                        uVar30 = uVar26 + 0xb;
                                        if (uVar26 == 4) goto LAB_001e3cf4;
                                        uVar39 = (ulong)uVar30;
                                        if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                          uVar30 = uVar26 + 0xc;
                                          if (uVar26 == 3) goto LAB_001e3cf4;
                                          uVar39 = (ulong)uVar30;
                                          if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                            uVar30 = uVar26 + 0xd;
                                            if (uVar26 == 2) goto LAB_001e3cf4;
                                            uVar39 = (ulong)uVar30;
                                            if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                              uVar30 = uVar26 + 0xe;
                                              if (uVar26 == 1) goto LAB_001e3cf4;
                                              uVar39 = (ulong)uVar30;
                                              if (puVar2[(ulong)uVar30 + 1] <= uVar13) {
                                                if ((uVar26 == 0) ||
                                                   (*(uint *)(this + 0x2dec) <= uVar13))
                                                goto LAB_001e3608;
                                                uVar30 = 0xe;
                                                uVar39 = 0xe;
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
                    uVar27 = uVar30 - 1;
                    uVar31 = 0x10 - uVar30;
                  }
                  else {
LAB_001e3608:
                    uVar31 = 1;
                    uVar27 = 0xe;
                    uVar30 = 0xf;
                    uVar39 = 0xf;
                  }
LAB_001e3cac:
                  iVar45 = iVar45 + (uVar30 + uVar35 >> 3);
                  uVar26 = uVar30 + uVar35 & 7;
                  *(int *)(this + 8) = iVar45;
                  *(uint *)(this + 0xc) = uVar26;
                  uVar35 = (uVar13 - puVar2[(ulong)uVar27 + 1] >> (ulong)(uVar31 & 0x1f)) +
                           puVar2[uVar39 + 0x11];
                  if (*puVar2 <= uVar35) {
                    uVar35 = 0;
                  }
                  uVar9 = *(ushort *)((long)puVar2 + (ulong)uVar35 * 2 + 0xc88);
                }
                bVar8 = Unpack20(bool)::LBits[(int)(uint)uVar9];
                uVar35 = (byte)Unpack20(bool)::LDecode[(int)(uint)uVar9] + 2;
                if (bVar8 != 0) {
                  uVar35 = uVar35 + ((((uint)*(byte *)(lVar36 + iVar45 + 2) |
                                       (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                                      (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >>
                                      (ulong)(8 - uVar26 & 0x1f) & 0xffff) >>
                                    (ulong)(0x10 - bVar8 & 0x1f));
                  iVar45 = iVar45 + (uVar26 + bVar8 >> 3);
                  *(int *)(this + 8) = iVar45;
                  *(uint *)(this + 0xc) = uVar26 + bVar8 & 7;
                }
                uVar16 = uVar32 - uVar14;
                *(uint *)(this + 0xb4) = uVar35;
                uVar39 = uVar16;
                if (uVar16 < uVar32) {
                  uVar39 = uVar32;
                }
                if (uVar39 < *(long *)(this + 0xe978) - 0x1001U) {
                  *(ulong *)(this + 0xc0) = uVar32 + uVar35;
                  puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar16);
                  puVar18 = (undefined *)(*(long *)(this + 0x4b90) + uVar32);
                  if (7 < uVar35) {
                    uVar14 = uVar35 - 8;
                    bVar11 = (long)uVar16 < (long)(uVar32 + 0x10);
                    bVar10 = false;
                    if (bVar11) {
                      bVar10 = (long)(uVar32 - (uVar16 + 0x10)) < 0;
                    }
                    bVar11 = bVar10 != (bVar11 && SBORROW8(uVar32,uVar16 + 0x10));
                    if ((bVar11 || uVar14 < 7) || !bVar11 && uVar14 == 7) {
                      puVar19 = puVar18;
                      puVar23 = puVar22;
                      do {
                        *puVar19 = *puVar23;
                        puVar1 = puVar19 + 8;
                        puVar19[1] = puVar23[1];
                        puVar19[2] = puVar23[2];
                        puVar19[3] = puVar23[3];
                        puVar19[4] = puVar23[4];
                        puVar19[5] = puVar23[5];
                        puVar19[6] = puVar23[6];
                        puVar19[7] = puVar23[7];
                        puVar19 = puVar1;
                        puVar23 = puVar23 + 8;
                      } while (puVar1 != puVar18 + (ulong)(uVar14 & 0xfffffff8) + 8);
                    }
                    else {
                      uVar13 = (uVar14 >> 3) + 1;
                      lVar36 = 0;
                      do {
                        uVar42 = *(undefined8 *)(puVar22 + lVar36);
                        *(undefined8 *)((long)(puVar18 + lVar36) + 8) =
                             *(undefined8 *)((long)(puVar22 + lVar36) + 8);
                        *(undefined8 *)(puVar18 + lVar36) = uVar42;
                        lVar36 = lVar36 + 0x10;
                      } while (lVar36 != ((ulong)((uVar13 >> 1) - 1) + 1) * 0x10);
                      lVar36 = ((ulong)uVar13 & 0x3ffffffe) * 8;
                      if ((uVar13 & 1) != 0) {
                        puVar18[lVar36] = puVar22[lVar36];
                        puVar18[lVar36 + 1] = puVar22[lVar36 + 1];
                        puVar18[lVar36 + 2] = puVar22[lVar36 + 2];
                        puVar18[lVar36 + 3] = puVar22[lVar36 + 3];
                        puVar18[lVar36 + 4] = puVar22[lVar36 + 4];
                        puVar18[lVar36 + 5] = puVar22[lVar36 + 5];
                        puVar18[lVar36 + 6] = puVar22[lVar36 + 6];
                        puVar18[lVar36 + 7] = puVar22[lVar36 + 7];
                      }
                    }
                    lVar36 = (ulong)(uVar14 & 0xfffffff8) + 8;
                    puVar22 = puVar22 + lVar36;
                    puVar18 = puVar18 + lVar36;
                    uVar35 = uVar35 & 7;
                  }
                  if ((((uVar35 != 0) && (*puVar18 = *puVar22, uVar35 != 1)) &&
                      (puVar18[1] = puVar22[1], uVar35 != 2)) &&
                     (((puVar18[2] = puVar22[2], uVar35 != 3 &&
                       (puVar18[3] = puVar22[3], uVar35 != 4)) &&
                      ((puVar18[4] = puVar22[4], uVar35 != 5 &&
                       (puVar18[5] = puVar22[5], uVar35 == 7)))))) {
                    puVar18[6] = puVar22[6];
                    iVar45 = *(int *)(this + 8);
                    iVar15 = *(int *)(this + 0xd4);
                    uVar32 = *(ulong *)(this + 0xc0);
                    uVar39 = *(ulong *)(this + 0xe980);
                    goto LAB_001e2ad0;
                  }
                  goto LAB_001e3368;
                }
                uVar39 = *(ulong *)(this + 0xe980);
                if (uVar35 != 0) {
                  uVar25 = uVar16 + 1;
                  uVar24 = uVar16;
                  do {
                    uVar21 = uVar25;
                    *(undefined *)(*(long *)(this + 0x4b90) + uVar32) =
                         *(undefined *)(*(long *)(this + 0x4b90) + (uVar24 & uVar39));
                    uVar39 = *(ulong *)(this + 0xe980);
                    uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
                    *(ulong *)(this + 0xc0) = uVar32;
                    uVar25 = uVar21 + 1;
                    uVar24 = uVar21;
                  } while (uVar21 != uVar16 + 1 + (ulong)(uVar35 - 1));
                  iVar45 = *(int *)(this + 8);
                  goto LAB_001e3050;
                }
              }
              else {
                bVar8 = *(byte *)((long)&Unpack20(bool)::SDBits + (long)(int)(uVar13 - 0x107));
                uVar14 = *(byte *)((long)&Unpack20(bool)::SDDecode + (long)(int)(uVar13 - 0x107)) +
                         1;
                if (bVar8 != 0) {
                  uVar14 = uVar14 + ((((uint)*(byte *)(lVar36 + iVar45 + 2) |
                                       (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                                      (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >>
                                      (ulong)(8 - uVar35 & 0x1f) & 0xffff) >>
                                    (ulong)(0x10 - bVar8 & 0x1f));
                  *(uint *)(this + 8) = iVar45 + (uVar35 + bVar8 >> 3);
                  *(uint *)(this + 0xc) = uVar35 + bVar8 & 7;
                }
                uVar16 = uVar32 - uVar14;
                uVar4 = *(undefined4 *)(this + 0xa0);
                uVar5 = *(undefined4 *)(this + 0xa4);
                uVar6 = *(undefined4 *)(this + 0xa8);
                lVar36 = *(long *)(this + 0x4b90);
                *(uint *)(this + 0xa0) = uVar14;
                *(undefined4 *)(this + 0xa4) = uVar4;
                *(undefined4 *)(this + 0xa8) = uVar5;
                *(undefined4 *)(this + 0xac) = uVar6;
                *(undefined4 *)(this + 0xb4) = 2;
                uVar39 = uVar16;
                if (uVar16 < uVar32) {
                  uVar39 = uVar32;
                }
                if (uVar39 < *(long *)(this + 0xe978) - 0x1001U) {
                  *(ulong *)(this + 0xc0) = uVar32 + 2;
                  *(undefined *)(lVar36 + uVar32) = *(undefined *)(lVar36 + uVar16);
                  *(undefined *)(lVar36 + uVar32 + 1) = *(undefined *)(lVar36 + uVar16 + 1);
                  iVar45 = *(int *)(this + 8);
                  iVar15 = *(int *)(this + 0xd4);
                  uVar32 = *(ulong *)(this + 0xc0);
                  uVar39 = *(ulong *)(this + 0xe980);
                  goto LAB_001e2ad0;
                }
                *(undefined *)(lVar36 + uVar32) =
                     *(undefined *)(lVar36 + (uVar16 & *(ulong *)(this + 0xe980)));
                uVar39 = *(long *)(this + 0xc0) + 1U & *(ulong *)(this + 0xe980);
                *(ulong *)(this + 0xc0) = uVar39;
                *(undefined *)(*(long *)(this + 0x4b90) + uVar39) =
                     *(undefined *)
                      (*(long *)(this + 0x4b90) + (uVar16 + 1 & *(ulong *)(this + 0xe980)));
                uVar39 = *(ulong *)(this + 0xe980);
                iVar45 = *(int *)(this + 8);
                uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
              }
              iVar15 = *(int *)(this + 0xd4);
              goto LAB_001e2ad0;
            }
            uVar14 = *(uint *)(this + 0xb4);
            if (uVar14 != 0) {
              uVar16 = uVar32 - *(uint *)(this + 0xa0);
              uVar39 = uVar16;
              if (uVar16 < uVar32) {
                uVar39 = uVar32;
              }
              lVar36 = *(long *)(this + 0x4b90);
              if (*(long *)(this + 0xe978) - 0x1001U <= uVar39) {
                uVar25 = uVar16 + 1;
                *(undefined *)(lVar36 + uVar32) =
                     *(undefined *)(lVar36 + (uVar16 & *(ulong *)(this + 0xe980)));
                uVar39 = *(ulong *)(this + 0xe980);
                uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
                *(ulong *)(this + 0xc0) = uVar32;
                if (uVar14 == 1) goto LAB_001e304c;
                do {
                  uVar39 = uVar39 & uVar25;
                  uVar25 = uVar25 + 1;
                  *(undefined *)(*(long *)(this + 0x4b90) + uVar32) =
                       *(undefined *)(*(long *)(this + 0x4b90) + uVar39);
                  uVar39 = *(ulong *)(this + 0xe980);
                  uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
                  *(ulong *)(this + 0xc0) = uVar32;
                } while (uVar25 != (uVar14 - 2) + uVar16 + 2);
                iVar45 = *(int *)(this + 8);
                goto LAB_001e3050;
              }
              *(ulong *)(this + 0xc0) = uVar32 + uVar14;
              puVar22 = (undefined *)(lVar36 + uVar32);
              puVar18 = (undefined *)(lVar36 + uVar16);
              if (7 < uVar14) {
                uVar35 = uVar14 - 8;
                bVar11 = (long)uVar16 < (long)(uVar32 + 0x10);
                bVar10 = false;
                if (bVar11) {
                  bVar10 = (long)(uVar32 - (uVar16 + 0x10)) < 0;
                }
                bVar11 = bVar10 != (bVar11 && SBORROW8(uVar32,uVar16 + 0x10));
                if ((bVar11 || uVar35 < 7) || !bVar11 && uVar35 == 7) {
                  puVar19 = puVar22;
                  puVar23 = puVar18;
                  do {
                    *puVar19 = *puVar23;
                    puVar1 = puVar19 + 8;
                    puVar19[1] = puVar23[1];
                    puVar19[2] = puVar23[2];
                    puVar19[3] = puVar23[3];
                    puVar19[4] = puVar23[4];
                    puVar19[5] = puVar23[5];
                    puVar19[6] = puVar23[6];
                    puVar19[7] = puVar23[7];
                    puVar19 = puVar1;
                    puVar23 = puVar23 + 8;
                  } while (puVar22 + (ulong)(uVar35 & 0xfffffff8) + 8 != puVar1);
                }
                else {
                  uVar13 = (uVar35 >> 3) + 1;
                  lVar36 = 0;
                  do {
                    uVar42 = *(undefined8 *)(puVar18 + lVar36);
                    *(undefined8 *)((long)(puVar22 + lVar36) + 8) =
                         *(undefined8 *)((long)(puVar18 + lVar36) + 8);
                    *(undefined8 *)(puVar22 + lVar36) = uVar42;
                    lVar36 = lVar36 + 0x10;
                  } while (((ulong)((uVar13 >> 1) - 1) + 1) * 0x10 - lVar36 != 0);
                  lVar36 = ((ulong)uVar13 & 0x3ffffffe) * 8;
                  if ((uVar13 & 1) != 0) {
                    puVar22[lVar36] = puVar18[lVar36];
                    puVar22[lVar36 + 1] = puVar18[lVar36 + 1];
                    puVar22[lVar36 + 2] = puVar18[lVar36 + 2];
                    puVar22[lVar36 + 3] = puVar18[lVar36 + 3];
                    puVar22[lVar36 + 4] = puVar18[lVar36 + 4];
                    puVar22[lVar36 + 5] = puVar18[lVar36 + 5];
                    puVar22[lVar36 + 6] = puVar18[lVar36 + 6];
                    puVar22[lVar36 + 7] = puVar18[lVar36 + 7];
                  }
                }
                lVar36 = (ulong)(uVar35 & 0xfffffff8) + 8;
                puVar18 = puVar18 + lVar36;
                puVar22 = puVar22 + lVar36;
                uVar14 = uVar14 & 7;
                if (uVar14 == 0) goto LAB_001e3368;
              }
              *puVar22 = *puVar18;
              if (((uVar14 != 1) && (puVar22[1] = puVar18[1], uVar14 != 2)) &&
                 ((puVar22[2] = puVar18[2], uVar14 != 3 &&
                  (((puVar22[3] = puVar18[3], uVar14 != 4 && (puVar22[4] = puVar18[4], uVar14 != 5))
                   && (puVar22[5] = puVar18[5], uVar14 == 7)))))) {
                puVar22[6] = puVar18[6];
                iVar45 = *(int *)(this + 8);
                iVar15 = *(int *)(this + 0xd4);
                uVar32 = *(ulong *)(this + 0xc0);
                uVar39 = *(ulong *)(this + 0xe980);
                goto LAB_001e2ad0;
              }
              goto LAB_001e3368;
            }
          }
          iVar15 = *(int *)(this + 0xd4);
          uVar39 = *(ulong *)(this + 0xe980);
        }
        else {
          bVar8 = Unpack20(bool)::LBits[(int)(uVar13 - 0x10f)];
          uVar14 = (byte)Unpack20(bool)::LDecode[(int)(uVar13 - 0x10f)] + 3;
          uVar13 = ((uint)*(byte *)(lVar36 + iVar45 + 2) | (uint)*(byte *)(lVar36 + iVar45) << 0x10
                   | (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >> (ulong)(8 - uVar35 & 0x1f);
          if (bVar8 == 0) {
            uVar26 = *(uint *)(this + 0x105c);
            uVar13 = uVar13 & 0xfffe;
            if (*(uint *)(this + (ulong)uVar26 * 4 + 0xfdc) <= uVar13) goto LAB_001e2cd4;
LAB_001e30d4:
            uVar39 = (ulong)(uVar13 >> (ulong)(0x10 - uVar26 & 0x1f));
            uVar9 = *(ushort *)(this + uVar39 * 2 + 0x1460);
            uVar26 = (byte)this[uVar39 + 0x1060] + uVar35 & 7;
            iVar45 = iVar45 + ((byte)this[uVar39 + 0x1060] + uVar35 >> 3);
            *(int *)(this + 8) = iVar45;
            *(uint *)(this + 0xc) = uVar26;
            bVar8 = Unpack29(bool)::DBits[(int)(uint)uVar9];
            iVar15 = (&Unpack29(bool)::DDecode)[(int)(uint)uVar9];
          }
          else {
            uVar26 = bVar8 + uVar35;
            uVar35 = uVar26 & 7;
            iVar45 = iVar45 + (uVar26 >> 3);
            *(int *)(this + 8) = iVar45;
            *(uint *)(this + 0xc) = uVar35;
            uVar14 = ((uVar13 & 0xffff) >> (ulong)(0x10 - bVar8 & 0x1f)) + uVar14;
            uVar26 = *(uint *)(this + 0x105c);
            uVar13 = ((uint)*(byte *)(lVar36 + iVar45 + 2) |
                      (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                     (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >> (ulong)(8 - uVar35 & 0x1f) &
                     0xfffe;
            if (uVar13 < *(uint *)(this + (ulong)uVar26 * 4 + 0xfdc)) goto LAB_001e30d4;
LAB_001e2cd4:
            uVar30 = uVar26 + 1;
            if (uVar30 < 0xf) {
              uVar39 = (ulong)uVar30;
              if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                uVar30 = uVar26 + 2;
                if (uVar26 == 0xd) {
LAB_001e3c5c:
                  uVar31 = 1;
                  uVar27 = 0xe;
                  uVar39 = 0xf;
                  goto LAB_001e3280;
                }
                uVar39 = (ulong)uVar30;
                if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                  uVar30 = uVar26 + 3;
                  if (uVar26 == 0xc) goto LAB_001e3c5c;
                  uVar39 = (ulong)uVar30;
                  if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                    uVar30 = uVar26 + 4;
                    if (uVar26 == 0xb) goto LAB_001e3c5c;
                    uVar39 = (ulong)uVar30;
                    if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                      uVar30 = uVar26 + 5;
                      if (uVar26 == 10) goto LAB_001e3c5c;
                      uVar39 = (ulong)uVar30;
                      if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                        uVar30 = uVar26 + 6;
                        if (uVar26 == 9) goto LAB_001e3c5c;
                        uVar39 = (ulong)uVar30;
                        if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                          uVar30 = uVar26 + 7;
                          if (uVar26 == 8) goto LAB_001e3c5c;
                          uVar39 = (ulong)uVar30;
                          if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                            uVar30 = uVar26 + 8;
                            if (uVar26 == 7) goto LAB_001e3c5c;
                            uVar39 = (ulong)uVar30;
                            if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                              uVar30 = uVar26 + 9;
                              if (uVar26 == 6) goto LAB_001e3c5c;
                              uVar39 = (ulong)uVar30;
                              if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                uVar30 = uVar26 + 10;
                                if (uVar26 == 5) goto LAB_001e3c5c;
                                uVar39 = (ulong)uVar30;
                                if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                  uVar30 = uVar26 + 0xb;
                                  if (uVar26 == 4) goto LAB_001e3c5c;
                                  uVar39 = (ulong)uVar30;
                                  if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                    uVar30 = uVar26 + 0xc;
                                    if (uVar26 == 3) goto LAB_001e3c5c;
                                    uVar39 = (ulong)uVar30;
                                    if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                      uVar30 = uVar26 + 0xd;
                                      if (uVar26 == 2) goto LAB_001e3c5c;
                                      uVar39 = (ulong)uVar30;
                                      if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                        uVar30 = uVar26 + 0xe;
                                        if (uVar26 == 1) goto LAB_001e3c5c;
                                        uVar39 = (ulong)uVar30;
                                        if (*(uint *)(this + (ulong)uVar30 * 4 + 0xfdc) <= uVar13) {
                                          if ((uVar26 == 0) || (*(uint *)(this + 0x1014) <= uVar13))
                                          goto LAB_001e2ea4;
                                          uVar30 = 0xe;
                                          uVar39 = 0xe;
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
              uVar27 = uVar30 - 1;
              uVar31 = 0x10 - uVar30;
            }
            else {
LAB_001e2ea4:
              uVar31 = 1;
              uVar27 = 0xe;
              uVar30 = 0xf;
              uVar39 = 0xf;
            }
LAB_001e3280:
            iVar45 = iVar45 + (uVar30 + uVar35 >> 3);
            uVar26 = uVar30 + uVar35 & 7;
            *(int *)(this + 8) = iVar45;
            *(uint *)(this + 0xc) = uVar26;
            uVar35 = (uVar13 - *(int *)(this + (ulong)uVar27 * 4 + 0xfdc) >> (ulong)(uVar31 & 0x1f))
                     + *(int *)(this + uVar39 * 4 + 0x101c);
            if (*(uint *)(this + 0xfd8) <= uVar35) {
              uVar35 = 0;
            }
            uVar9 = *(ushort *)(this + (ulong)uVar35 * 2 + 0x1c60);
            bVar8 = Unpack29(bool)::DBits[(int)(uint)uVar9];
            iVar15 = (&Unpack29(bool)::DDecode)[(int)(uint)uVar9];
          }
          uVar35 = iVar15 + 1;
          if (bVar8 != 0) {
            uVar13 = (uint)bVar8;
            if (uVar9 < 10) {
              uVar35 = uVar35 + ((((uint)*(byte *)(lVar36 + iVar45 + 2) |
                                   (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                                  (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >>
                                  (ulong)(8 - uVar26 & 0x1f) & 0xffff) >>
                                (ulong)(0x10 - uVar13 & 0x1f));
              *(uint *)(this + 8) = iVar45 + (uVar26 + uVar13 >> 3);
              *(uint *)(this + 0xc) = uVar26 + uVar13 & 7;
            }
            else {
              if (4 < bVar8) {
                uVar30 = (uVar26 - 4) + uVar13;
                uVar35 = uVar35 + ((((uint)*(byte *)(lVar36 + iVar45 + 2) |
                                     (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                                    (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >>
                                    (ulong)(8 - uVar26 & 0x1f) & 0xffff) >>
                                  (ulong)(0x14 - uVar13 & 0x1f)) * 0x10;
                iVar45 = iVar45 + (uVar30 >> 3);
                uVar26 = uVar30 & 7;
                *(int *)(this + 8) = iVar45;
                *(uint *)(this + 0xc) = uVar26;
              }
              if (*(int *)(this + 0x9a2c) < 1) {
                uVar30 = *(uint *)(this + 0x1f48);
                uVar13 = ((uint)*(byte *)(lVar36 + iVar45 + 2) |
                          (uint)*(byte *)(lVar36 + iVar45) << 0x10 |
                         (uint)*(byte *)(lVar36 + iVar45 + 1) << 8) >> (ulong)(8 - uVar26 & 0x1f) &
                         0xfffe;
                if (uVar13 < *(uint *)(this + (ulong)uVar30 * 4 + 0x1ec8)) {
                  uVar39 = (ulong)(uVar13 >> (ulong)(0x10 - uVar30 & 0x1f));
                  UVar7 = this[uVar39 + 0x1f4c];
                  uVar9 = *(ushort *)(this + uVar39 * 2 + 0x234c);
                  *(uint *)(this + 8) = iVar45 + ((byte)UVar7 + uVar26 >> 3);
                  *(uint *)(this + 0xc) = (byte)UVar7 + uVar26 & 7;
                }
                else {
                  uVar27 = uVar30 + 1;
                  if (uVar27 < 0xf) {
                    uVar39 = (ulong)uVar27;
                    if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                      uVar27 = uVar30 + 2;
                      if (uVar30 == 0xd) {
LAB_001e41b4:
                        uVar30 = 1;
                        uVar32 = 0xe;
                        uVar39 = 0xf;
                        goto LAB_001e3c08;
                      }
                      uVar39 = (ulong)uVar27;
                      if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                        uVar27 = uVar30 + 3;
                        if (uVar30 == 0xc) goto LAB_001e41b4;
                        uVar39 = (ulong)uVar27;
                        if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                          uVar27 = uVar30 + 4;
                          if (uVar30 == 0xb) goto LAB_001e41b4;
                          uVar39 = (ulong)uVar27;
                          if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                            uVar27 = uVar30 + 5;
                            if (uVar30 == 10) goto LAB_001e41b4;
                            uVar39 = (ulong)uVar27;
                            if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                              uVar27 = uVar30 + 6;
                              if (uVar30 == 9) goto LAB_001e41b4;
                              uVar39 = (ulong)uVar27;
                              if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                                uVar27 = uVar30 + 7;
                                if (uVar30 == 8) goto LAB_001e41b4;
                                uVar39 = (ulong)uVar27;
                                if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                                  uVar27 = uVar30 + 8;
                                  if (uVar30 == 7) goto LAB_001e41b4;
                                  uVar39 = (ulong)uVar27;
                                  if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                                    uVar27 = uVar30 + 9;
                                    if (uVar30 == 6) goto LAB_001e41b4;
                                    uVar39 = (ulong)uVar27;
                                    if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                                      uVar27 = uVar30 + 10;
                                      if (uVar30 == 5) goto LAB_001e41b4;
                                      uVar39 = (ulong)uVar27;
                                      if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13) {
                                        uVar27 = uVar30 + 0xb;
                                        if (uVar30 == 4) goto LAB_001e41b4;
                                        uVar39 = (ulong)uVar27;
                                        if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13)
                                        {
                                          uVar27 = uVar30 + 0xc;
                                          if (uVar30 == 3) goto LAB_001e41b4;
                                          uVar39 = (ulong)uVar27;
                                          if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <= uVar13
                                             ) {
                                            uVar27 = uVar30 + 0xd;
                                            if (uVar30 == 2) goto LAB_001e41b4;
                                            uVar39 = (ulong)uVar27;
                                            if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <=
                                                uVar13) {
                                              uVar27 = uVar30 + 0xe;
                                              if (uVar30 == 1) goto LAB_001e41b4;
                                              uVar39 = (ulong)uVar27;
                                              if (*(uint *)(this + (ulong)uVar27 * 4 + 0x1ec8) <=
                                                  uVar13) {
                                                if ((uVar30 == 0) ||
                                                   (*(uint *)(this + 0x1f00) <= uVar13))
                                                goto LAB_001e3bf8;
                                                uVar27 = 0xe;
                                                uVar39 = 0xe;
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
                    uVar32 = (ulong)(uVar27 - 1);
                    uVar30 = 0x10 - uVar27;
                  }
                  else {
LAB_001e3bf8:
                    uVar30 = 1;
                    uVar32 = 0xe;
                    uVar27 = 0xf;
                    uVar39 = 0xf;
                  }
LAB_001e3c08:
                  *(uint *)(this + 8) = iVar45 + (uVar27 + uVar26 >> 3);
                  *(uint *)(this + 0xc) = uVar27 + uVar26 & 7;
                  uVar13 = (uVar13 - *(int *)(this + uVar32 * 4 + 0x1ec8) >> (ulong)(uVar30 & 0x1f))
                           + *(int *)(this + uVar39 * 4 + 0x1f08);
                  if (*(uint *)(this + 0x1ec4) <= uVar13) {
                    uVar13 = 0;
                  }
                  uVar9 = *(ushort *)(this + (ulong)uVar13 * 2 + 0x2b4c);
                }
                uVar13 = (uint)uVar9;
                if (uVar13 == 0x10) {
                  uVar35 = uVar35 + *(int *)(this + 0x9a28);
                  *(undefined4 *)(this + 0x9a2c) = 0xf;
                }
                else {
                  uVar35 = uVar35 + uVar13;
                  *(uint *)(this + 0x9a28) = uVar13;
                }
              }
              else {
                uVar35 = uVar35 + *(int *)(this + 0x9a28);
                *(int *)(this + 0x9a2c) = *(int *)(this + 0x9a2c) + -1;
              }
            }
          }
          if (0x1fff < uVar35) {
            if (0x3ffff < uVar35) {
              uVar14 = uVar14 + 1;
            }
            uVar14 = uVar14 + 1;
          }
          uVar32 = *(ulong *)(this + 0xc0);
          *(uint *)(this + 0xb4) = uVar14;
          uVar4 = *(undefined4 *)(this + 0xa0);
          uVar5 = *(undefined4 *)(this + 0xa4);
          uVar16 = uVar32 - uVar35;
          uVar6 = *(undefined4 *)(this + 0xa8);
          *(uint *)(this + 0xa0) = uVar35;
          *(undefined4 *)(this + 0xa4) = uVar4;
          *(undefined4 *)(this + 0xa8) = uVar5;
          *(undefined4 *)(this + 0xac) = uVar6;
          uVar39 = uVar32;
          if (uVar32 < uVar16) {
            uVar39 = uVar16;
          }
          if (*(long *)(this + 0xe978) - 0x1001U <= uVar39) {
            uVar39 = *(ulong *)(this + 0xe980);
            uVar25 = uVar16 + 1;
            uVar24 = uVar16;
            if (uVar14 == 0) {
LAB_001e304c:
              iVar45 = *(int *)(this + 8);
            }
            else {
              do {
                uVar21 = uVar25;
                *(undefined *)(*(long *)(this + 0x4b90) + uVar32) =
                     *(undefined *)(*(long *)(this + 0x4b90) + (uVar24 & uVar39));
                uVar39 = *(ulong *)(this + 0xe980);
                uVar32 = *(long *)(this + 0xc0) + 1U & uVar39;
                *(ulong *)(this + 0xc0) = uVar32;
                uVar25 = uVar21 + 1;
                uVar24 = uVar21;
              } while (uVar21 != uVar16 + 1 + (ulong)(uVar14 - 1));
              iVar45 = *(int *)(this + 8);
            }
            goto LAB_001e3050;
          }
          *(ulong *)(this + 0xc0) = uVar32 + uVar14;
          puVar22 = (undefined *)(*(long *)(this + 0x4b90) + uVar16);
          puVar18 = (undefined *)(*(long *)(this + 0x4b90) + uVar32);
          if (7 < uVar14) {
            uVar14 = uVar14 - 8;
            bVar11 = (long)uVar16 < (long)(uVar32 + 0x10);
            bVar10 = false;
            if (bVar11) {
              bVar10 = (long)(uVar32 - (uVar16 + 0x10)) < 0;
            }
            bVar11 = bVar10 != (bVar11 && SBORROW8(uVar32,uVar16 + 0x10));
            if ((bVar11 || uVar14 < 7) || !bVar11 && uVar14 == 7) {
              puVar19 = puVar18;
              puVar23 = puVar22;
              do {
                *puVar19 = *puVar23;
                puVar1 = puVar19 + 8;
                puVar19[1] = puVar23[1];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar19[7] = puVar23[7];
                puVar19 = puVar1;
                puVar23 = puVar23 + 8;
              } while (puVar18 + (ulong)(uVar14 & 0xfffffff8) + 8 != puVar1);
            }
            else {
              uVar35 = (uVar14 >> 3) + 1;
              lVar36 = 0;
              do {
                uVar42 = *(undefined8 *)(puVar22 + lVar36);
                *(undefined8 *)((long)(puVar18 + lVar36) + 8) =
                     *(undefined8 *)((long)(puVar22 + lVar36) + 8);
                *(undefined8 *)(puVar18 + lVar36) = uVar42;
                lVar36 = lVar36 + 0x10;
              } while (lVar36 != ((ulong)((uVar35 >> 1) - 1) + 1) * 0x10);
              lVar36 = ((ulong)uVar35 & 0x3ffffffe) * 8;
              if ((uVar35 & 1) != 0) {
                puVar18[lVar36] = puVar22[lVar36];
                puVar18[lVar36 + 1] = puVar22[lVar36 + 1];
                puVar18[lVar36 + 2] = puVar22[lVar36 + 2];
                puVar18[lVar36 + 3] = puVar22[lVar36 + 3];
                puVar18[lVar36 + 4] = puVar22[lVar36 + 4];
                puVar18[lVar36 + 5] = puVar22[lVar36 + 5];
                puVar18[lVar36 + 6] = puVar22[lVar36 + 6];
                puVar18[lVar36 + 7] = puVar22[lVar36 + 7];
              }
            }
            lVar36 = (ulong)(uVar14 & 0xfffffff8) + 8;
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            puVar22 = puVar22 + lVar36;
            puVar18 = puVar18 + lVar36;
          }
          if ((((((uVar14 == 0) || (*puVar18 = *puVar22, uVar14 == 1)) ||
                (puVar18[1] = puVar22[1], uVar14 == 2)) ||
               ((puVar18[2] = puVar22[2], uVar14 == 3 || (puVar18[3] = puVar22[3], uVar14 == 4))))
              || (puVar18[4] = puVar22[4], uVar14 == 5)) || (puVar18[5] = puVar22[5], uVar14 != 7))
          goto LAB_001e3368;
          puVar18[6] = puVar22[6];
          iVar45 = *(int *)(this + 8);
          iVar15 = *(int *)(this + 0xd4);
          uVar32 = *(ulong *)(this + 0xc0);
          uVar39 = *(ulong *)(this + 0xe980);
        }
      }
      else {
        uVar13 = uVar35 + 1;
        if (uVar13 < 0xf) {
          uVar39 = (ulong)uVar13;
          if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
            uVar13 = uVar35 + 2;
            if (uVar35 == 0xd) {
LAB_001e2c5c:
              uVar30 = 1;
              uVar26 = 0xe;
              uVar39 = 0xf;
              goto LAB_001e2964;
            }
            uVar39 = (ulong)uVar13;
            if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
              uVar13 = uVar35 + 3;
              if (uVar35 == 0xc) goto LAB_001e2c5c;
              uVar39 = (ulong)uVar13;
              if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                uVar13 = uVar35 + 4;
                if (uVar35 == 0xb) goto LAB_001e2c5c;
                uVar39 = (ulong)uVar13;
                if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                  uVar13 = uVar35 + 5;
                  if (uVar35 == 10) goto LAB_001e2c5c;
                  uVar39 = (ulong)uVar13;
                  if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                    uVar13 = uVar35 + 6;
                    if (uVar35 == 9) goto LAB_001e2c5c;
                    uVar39 = (ulong)uVar13;
                    if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                      uVar13 = uVar35 + 7;
                      if (uVar35 == 8) goto LAB_001e2c5c;
                      uVar39 = (ulong)uVar13;
                      if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                        uVar13 = uVar35 + 8;
                        if (uVar35 == 7) goto LAB_001e2c5c;
                        uVar39 = (ulong)uVar13;
                        if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                          uVar13 = uVar35 + 9;
                          if (uVar35 == 6) goto LAB_001e2c5c;
                          uVar39 = (ulong)uVar13;
                          if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                            uVar13 = uVar35 + 10;
                            if (uVar35 == 5) goto LAB_001e2c5c;
                            uVar39 = (ulong)uVar13;
                            if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                              uVar13 = uVar35 + 0xb;
                              if (uVar35 == 4) goto LAB_001e2c5c;
                              uVar39 = (ulong)uVar13;
                              if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                                uVar13 = uVar35 + 0xc;
                                if (uVar35 == 3) goto LAB_001e2c5c;
                                uVar39 = (ulong)uVar13;
                                if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                                  uVar13 = uVar35 + 0xd;
                                  if (uVar35 == 2) goto LAB_001e2c5c;
                                  uVar39 = (ulong)uVar13;
                                  if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                                    uVar13 = uVar35 + 0xe;
                                    if (uVar35 == 1) goto LAB_001e2c5c;
                                    uVar39 = (ulong)uVar13;
                                    if (*(uint *)(this + (ulong)uVar13 * 4 + 0xf0) <= uVar14) {
                                      if ((uVar35 == 0) || (*(uint *)(this + 0x128) <= uVar14))
                                      goto LAB_001e2938;
                                      uVar13 = 0xe;
                                      uVar39 = 0xe;
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
          uVar26 = uVar13 - 1;
          uVar30 = 0x10 - uVar13;
        }
        else {
LAB_001e2938:
          uVar30 = 1;
          uVar26 = 0xe;
          uVar13 = 0xf;
          uVar39 = 0xf;
        }
LAB_001e2964:
        iVar45 = iVar45 + (uVar13 + iVar15 >> 3);
        uVar35 = uVar13 + iVar15 & 7;
        *(int *)(this + 8) = iVar45;
        *(uint *)(this + 0xc) = uVar35;
        uVar26 = (uVar14 - *(int *)(this + (ulong)uVar26 * 4 + 0xf0) >> (ulong)(uVar30 & 0x1f)) +
                 *(int *)(this + uVar39 * 4 + 0x130);
        if (*(uint *)(this + 0xec) <= uVar26) {
          uVar26 = 0;
        }
        uVar13 = (uint)*(ushort *)(this + (ulong)uVar26 * 2 + 0xd74);
        uVar14 = uVar13;
        if (0xff < *(ushort *)(this + (ulong)uVar26 * 2 + 0xd74)) goto LAB_001e29b0;
LAB_001e2c18:
        lVar36 = *(long *)(this + 0xc0);
        *(long *)(this + 0xc0) = lVar36 + 1;
        *(char *)(*(long *)(this + 0x4b90) + lVar36) = (char)uVar14;
        iVar45 = *(int *)(this + 8);
        iVar15 = *(int *)(this + 0xd4);
        uVar32 = *(ulong *)(this + 0xc0);
        uVar39 = *(ulong *)(this + 0xe980);
      }
    }
LAB_001e2ad0:
    uVar32 = uVar32 & uVar39;
    *(ulong *)(this + 0xc0) = uVar32;
    if (iVar45 <= iVar15) goto LAB_001e26f8;
LAB_001e2ae0:
    iVar15 = *(int *)(this + 0xd0);
    iVar38 = iVar15 - iVar45;
    if (iVar38 < 0) goto LAB_001e2f68;
    pvVar28 = *(void **)(this + 0x18);
    if (iVar45 < 0x4001) {
      sVar37 = (size_t)iVar15;
      iVar38 = iVar15;
    }
    else {
      sVar37 = (size_t)iVar38;
      if (iVar38 == 0) {
        *(undefined4 *)(this + 8) = 0;
        *(undefined4 *)(this + 0xd0) = 0;
      }
      else {
        memmove(pvVar28,(void *)((long)pvVar28 + (long)iVar45),sVar37);
        *(undefined4 *)(this + 8) = 0;
        *(int *)(this + 0xd0) = iVar38;
        pvVar28 = *(void **)(this + 0x18);
      }
    }
    iVar45 = ComprDataIO::UnpRead
                       (*(ComprDataIO **)this,(uchar *)((long)pvVar28 + sVar37),
                        (long)(0x8000 - iVar38));
    if (0 < iVar45) {
      iVar45 = iVar45 + *(int *)(this + 0xd0);
      *(int *)(this + 0xd0) = iVar45;
      *(int *)(this + 0xd4) = iVar45 + -0x1e;
      if ((*(long *)(this + 200) - *(long *)(this + 0xc0) & *(ulong *)(this + 0xe980)) < 0x104 &&
          *(long *)(this + 200) != *(long *)(this + 0xc0)) {
LAB_001e2b50:
        UnpWriteBuf30();
        if (*(long *)(this + 0x4da0) < *(long *)(this + 0x4db0)) {
          return;
        }
        if (this[0x4da8] != (Unpack)0x0) {
          this[0x4db8] = (Unpack)0x0;
          return;
        }
      }
      goto LAB_001e2710;
    }
    *(int *)(this + 0xd4) = *(int *)(this + 0xd0) + -0x1e;
    if (iVar45 == -1) {
LAB_001e2f68:
      UnpWriteBuf30();
      return;
    }
    uVar32 = *(ulong *)(this + 0xc0);
    uVar39 = *(ulong *)(this + 0xe980);
  } while( true );
}


