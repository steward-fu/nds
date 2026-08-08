/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_test_c
 * Address  : 00145840
 * Program  : drastic64
 */


void render_polygon_alpha_test_c
               (undefined8 *param_1,undefined (*param_2) [16],uint param_3,ulong param_4,
               uint *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  undefined6 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  undefined (*pauVar14) [16];
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  
  uVar13 = (uint)param_4;
  if (uVar13 == 0) {
LAB_00145b50:
    *param_5 = uVar13;
    return;
  }
  bVar11 = param_1 < *param_2 + (param_4 & 0xffffffff) * 4;
  bVar10 = param_2 < (undefined (*) [16])((long)param_1 + (param_4 & 0xffffffff));
  if ((bVar11 && bVar10 || uVar13 - 1 < 0xe) || (!bVar11 || !bVar10) && uVar13 - 1 == 0xe) {
    lVar15 = 0;
    uVar17 = 0;
    do {
      while (pcVar1 = (char *)((long)param_1 + lVar15),
            *(uint *)(*param_2 + lVar15 * 4) >> 0x18 <= param_3) {
        *(undefined *)((long)param_1 + lVar15) = 0;
        lVar15 = lVar15 + 1;
        if (uVar13 <= (uint)lVar15) goto LAB_00145bc4;
      }
      lVar15 = lVar15 + 1;
      uVar17 = uVar17 - (int)*pcVar1;
    } while ((uint)lVar15 < uVar13);
LAB_00145bc4:
    *param_5 = uVar17;
    return;
  }
  iVar57 = 0;
  iVar59 = 0;
  iVar60 = 0;
  iVar61 = 0;
  pauVar14 = param_2;
  puVar16 = param_1;
  do {
    auVar48 = *pauVar14;
    auVar46 = pauVar14[1];
    uVar52 = puVar16[1];
    uVar51 = *puVar16;
    auVar50._0_4_ = auVar48._0_4_ >> 0x18;
    auVar50._4_4_ = auVar48._4_4_ >> 0x18;
    auVar50._8_4_ = auVar48._8_4_ >> 0x18;
    auVar50._12_4_ = auVar48._12_4_ >> 0x18;
    auVar49._0_4_ = auVar46._0_4_ >> 0x18;
    auVar49._4_4_ = auVar46._4_4_ >> 0x18;
    auVar49._8_4_ = auVar46._8_4_ >> 0x18;
    auVar49._12_4_ = auVar46._12_4_ >> 0x18;
    bVar19 = (byte)uVar51;
    bVar21 = (byte)((ulong)uVar51 >> 8);
    bVar36 = (char)bVar21 >> 7;
    bVar23 = (byte)((ulong)uVar51 >> 0x10);
    bVar37 = (char)bVar23 >> 7;
    bVar25 = (byte)((ulong)uVar51 >> 0x18);
    bVar39 = (char)bVar25 >> 7;
    bVar27 = (byte)((ulong)uVar51 >> 0x20);
    bVar29 = (byte)((ulong)uVar51 >> 0x28);
    bVar41 = (char)bVar29 >> 7;
    bVar31 = (byte)((ulong)uVar51 >> 0x30);
    bVar42 = (char)bVar31 >> 7;
    bVar33 = (byte)((ulong)uVar51 >> 0x38);
    bVar44 = (char)bVar33 >> 7;
    auVar7 = pauVar14[2];
    auVar6 = pauVar14[3];
    pauVar14 = pauVar14 + 4;
    auVar46._4_4_ = param_3;
    auVar46._0_4_ = param_3;
    auVar46._8_4_ = param_3;
    auVar46._12_4_ = param_3;
    auVar49 = NEON_cmhi(auVar49,auVar46,4);
    auVar48._4_4_ = param_3;
    auVar48._0_4_ = param_3;
    auVar48._8_4_ = param_3;
    auVar48._12_4_ = param_3;
    auVar50 = NEON_cmhi(auVar50,auVar48,4);
    auVar47._0_4_ = auVar7._0_4_ >> 0x18;
    auVar47._4_4_ = auVar7._4_4_ >> 0x18;
    auVar47._8_4_ = auVar7._8_4_ >> 0x18;
    auVar47._12_4_ = auVar7._12_4_ >> 0x18;
    bVar20 = (byte)uVar52;
    bVar22 = (byte)((ulong)uVar52 >> 8);
    bVar24 = (byte)((ulong)uVar52 >> 0x10);
    bVar26 = (byte)((ulong)uVar52 >> 0x18);
    bVar28 = (byte)((ulong)uVar52 >> 0x20);
    bVar30 = (byte)((ulong)uVar52 >> 0x28);
    bVar32 = (byte)((ulong)uVar52 >> 0x30);
    bVar34 = (byte)((ulong)uVar52 >> 0x38);
    auVar45._0_4_ = auVar6._0_4_ >> 0x18;
    auVar45._4_4_ = auVar6._4_4_ >> 0x18;
    auVar45._8_4_ = auVar6._8_4_ >> 0x18;
    auVar45._12_4_ = auVar6._12_4_ >> 0x18;
    bVar8 = (char)bVar27 >> 7;
    auVar6._4_4_ = param_3;
    auVar6._0_4_ = param_3;
    auVar6._8_4_ = param_3;
    auVar6._12_4_ = param_3;
    auVar48 = NEON_cmhi(auVar47,auVar6,4);
    uVar2 = CONCAT13((char)bVar22 >> 7,CONCAT12(bVar22,(short)(char)bVar20));
    uVar3 = CONCAT15((char)bVar24 >> 7,CONCAT14(bVar24,uVar2));
    bVar9 = (char)bVar19 >> 7;
    auVar7._4_4_ = param_3;
    auVar7._0_4_ = param_3;
    auVar7._8_4_ = param_3;
    auVar7._12_4_ = param_3;
    auVar46 = NEON_cmhi(auVar45,auVar7,4);
    uVar4 = CONCAT13((char)bVar30 >> 7,CONCAT12(bVar30,(short)(char)bVar28));
    uVar5 = CONCAT15((char)bVar32 >> 7,CONCAT14(bVar32,uVar4));
    bVar35 = (byte)((short)(char)bVar28 >> 0xf);
    bVar38 = (byte)((int)uVar4 >> 0x1f);
    bVar40 = (byte)((int6)uVar5 >> 0x2f);
    bVar43 = (byte)((long)CONCAT17((char)bVar34 >> 7,CONCAT16(bVar34,uVar5)) >> 0x3f);
    bVar53 = (byte)((short)(char)bVar20 >> 0xf);
    bVar54 = (byte)((int)uVar2 >> 0x1f);
    bVar55 = (byte)((int6)uVar3 >> 0x2f);
    bVar56 = (byte)((long)CONCAT17((char)bVar26 >> 7,CONCAT16(bVar26,uVar3)) >> 0x3f);
    puVar16[1] = CONCAT17(bVar34 & auVar46[12],
                          CONCAT16(bVar32 & auVar46[8],
                                   CONCAT15(bVar30 & auVar46[4],
                                            CONCAT14(bVar28 & auVar46[0],
                                                     CONCAT13(bVar26 & auVar48[12],
                                                              CONCAT12(bVar24 & auVar48[8],
                                                                       CONCAT11(bVar22 & auVar48[4],
                                                                                bVar20 & auVar48[0])
                                                                      ))))));
    *puVar16 = CONCAT17(bVar33 & auVar49[12],
                        CONCAT16(bVar31 & auVar49[8],
                                 CONCAT15(bVar29 & auVar49[4],
                                          CONCAT14(bVar27 & auVar49[0],
                                                   CONCAT13(bVar25 & auVar50[12],
                                                            CONCAT12(bVar23 & auVar50[8],
                                                                     CONCAT11(bVar21 & auVar50[4],
                                                                              bVar19 & auVar50[0])))
                                                  ))));
    iVar57 = iVar57 - (CONCAT13(bVar9 & auVar50[3],
                                CONCAT12(bVar9 & auVar50[2],
                                         CONCAT11(bVar9 & auVar50[1],bVar19 & auVar50[0]))) +
                       CONCAT13(bVar8 & auVar49[3],
                                CONCAT12(bVar8 & auVar49[2],
                                         CONCAT11(bVar8 & auVar49[1],bVar27 & auVar49[0]))) +
                       CONCAT13(bVar53 & auVar48[3],
                                CONCAT12(bVar53 & auVar48[2],
                                         CONCAT11((char)bVar20 >> 7 & auVar48[1],bVar20 & auVar48[0]
                                                 ))) +
                      CONCAT13(bVar35 & auVar46[3],
                               CONCAT12(bVar35 & auVar46[2],
                                        CONCAT11((char)bVar28 >> 7 & auVar46[1],bVar28 & auVar46[0])
                                       )));
    iVar59 = iVar59 - (CONCAT13(bVar36 & auVar50[7],
                                CONCAT12(bVar36 & auVar50[6],
                                         CONCAT11(bVar36 & auVar50[5],bVar21 & auVar50[4]))) +
                       CONCAT13(bVar41 & auVar49[7],
                                CONCAT12(bVar41 & auVar49[6],
                                         CONCAT11(bVar41 & auVar49[5],bVar29 & auVar49[4]))) +
                       CONCAT13(bVar54 & auVar48[7],
                                CONCAT12(bVar54 & auVar48[6],
                                         CONCAT11((char)bVar22 >> 7 & auVar48[5],bVar22 & auVar48[4]
                                                 ))) +
                      CONCAT13(bVar38 & auVar46[7],
                               CONCAT12(bVar38 & auVar46[6],
                                        CONCAT11((char)bVar30 >> 7 & auVar46[5],bVar30 & auVar46[4])
                                       )));
    iVar60 = iVar60 - (CONCAT13(bVar37 & auVar50[11],
                                CONCAT12(bVar37 & auVar50[10],
                                         CONCAT11(bVar37 & auVar50[9],bVar23 & auVar50[8]))) +
                       CONCAT13(bVar42 & auVar49[11],
                                CONCAT12(bVar42 & auVar49[10],
                                         CONCAT11(bVar42 & auVar49[9],bVar31 & auVar49[8]))) +
                       CONCAT13(bVar55 & auVar48[11],
                                CONCAT12(bVar55 & auVar48[10],
                                         CONCAT11((char)bVar24 >> 7 & auVar48[9],bVar24 & auVar48[8]
                                                 ))) +
                      CONCAT13(bVar40 & auVar46[11],
                               CONCAT12(bVar40 & auVar46[10],
                                        CONCAT11((char)bVar32 >> 7 & auVar46[9],bVar32 & auVar46[8])
                                       )));
    iVar61 = iVar61 - (CONCAT13(bVar39 & auVar50[15],
                                CONCAT12(bVar39 & auVar50[14],
                                         CONCAT11(bVar39 & auVar50[13],bVar25 & auVar50[12]))) +
                       CONCAT13(bVar44 & auVar49[15],
                                CONCAT12(bVar44 & auVar49[14],
                                         CONCAT11(bVar44 & auVar49[13],bVar33 & auVar49[12]))) +
                       CONCAT13(bVar56 & auVar48[15],
                                CONCAT12(bVar56 & auVar48[14],
                                         CONCAT11((char)bVar26 >> 7 & auVar48[13],
                                                  bVar26 & auVar48[12]))) +
                      CONCAT13(bVar43 & auVar46[15],
                               CONCAT12(bVar43 & auVar46[14],
                                        CONCAT11((char)bVar34 >> 7 & auVar46[13],
                                                 bVar34 & auVar46[12]))));
    puVar16 = puVar16 + 2;
  } while (pauVar14 != param_2 + (ulong)((uVar13 >> 4) - 1) * 4 + 4);
  uVar58 = iVar57 + iVar59 + iVar60 + iVar61;
  uVar18 = param_4 & 0xfffffff0;
  uVar17 = uVar13 & 0xfffffff0;
  if ((param_4 & 0xf) != 0) {
    cVar12 = *(char *)((long)param_1 + (ulong)uVar17);
    if (param_3 < *(uint *)(*param_2 + uVar18 * 4) >> 0x18) {
      uVar58 = uVar58 - (int)cVar12;
    }
    else {
      cVar12 = '\0';
    }
    *(char *)((long)param_1 + (ulong)uVar17) = cVar12;
    if (uVar17 + 1 < uVar13) {
      cVar12 = *(char *)((long)param_1 + uVar18 + 1);
      if (param_3 < (byte)(*param_2)[uVar18 * 4 + 7]) {
        uVar58 = uVar58 - (int)cVar12;
      }
      else {
        cVar12 = '\0';
      }
      *(char *)((long)param_1 + uVar18 + 1) = cVar12;
      if (uVar17 + 2 < uVar13) {
        cVar12 = *(char *)((long)param_1 + uVar18 + 2);
        if (param_3 < (byte)(*param_2)[uVar18 * 4 + 0xb]) {
          uVar58 = uVar58 - (int)cVar12;
        }
        else {
          cVar12 = '\0';
        }
        *(char *)((long)param_1 + uVar18 + 2) = cVar12;
        if (uVar17 + 3 < uVar13) {
          cVar12 = *(char *)((long)param_1 + uVar18 + 3);
          if (param_3 < (byte)(*param_2)[uVar18 * 4 + 0xf]) {
            uVar58 = uVar58 - (int)cVar12;
          }
          else {
            cVar12 = '\0';
          }
          *(char *)((long)param_1 + uVar18 + 3) = cVar12;
          if (uVar17 + 4 < uVar13) {
            cVar12 = *(char *)((long)param_1 + uVar18 + 4);
            if (param_3 < (byte)param_2[1][uVar18 * 4 + 3]) {
              uVar58 = uVar58 - (int)cVar12;
            }
            else {
              cVar12 = '\0';
            }
            *(char *)((long)param_1 + uVar18 + 4) = cVar12;
            if (uVar17 + 5 < uVar13) {
              cVar12 = *(char *)((long)param_1 + uVar18 + 5);
              if (param_3 < (byte)param_2[1][uVar18 * 4 + 7]) {
                uVar58 = uVar58 - (int)cVar12;
              }
              else {
                cVar12 = '\0';
              }
              *(char *)((long)param_1 + uVar18 + 5) = cVar12;
              if (uVar17 + 6 < uVar13) {
                cVar12 = *(char *)((long)param_1 + uVar18 + 6);
                if (param_3 < (byte)param_2[1][uVar18 * 4 + 0xb]) {
                  uVar58 = uVar58 - (int)cVar12;
                }
                else {
                  cVar12 = '\0';
                }
                *(char *)((long)param_1 + uVar18 + 6) = cVar12;
                if (uVar17 + 7 < uVar13) {
                  cVar12 = *(char *)((long)param_1 + uVar18 + 7);
                  if (param_3 < (byte)param_2[1][uVar18 * 4 + 0xf]) {
                    uVar58 = uVar58 - (int)cVar12;
                  }
                  else {
                    cVar12 = '\0';
                  }
                  *(char *)((long)param_1 + uVar18 + 7) = cVar12;
                  if (uVar17 + 8 < uVar13) {
                    cVar12 = *(char *)((long)param_1 + uVar18 + 8);
                    if (param_3 < (byte)param_2[2][uVar18 * 4 + 3]) {
                      uVar58 = uVar58 - (int)cVar12;
                    }
                    else {
                      cVar12 = '\0';
                    }
                    *(char *)((long)param_1 + uVar18 + 8) = cVar12;
                    if (uVar17 + 9 < uVar13) {
                      cVar12 = *(char *)((long)param_1 + uVar18 + 9);
                      if (param_3 < (byte)param_2[2][uVar18 * 4 + 7]) {
                        uVar58 = uVar58 - (int)cVar12;
                      }
                      else {
                        cVar12 = '\0';
                      }
                      *(char *)((long)param_1 + uVar18 + 9) = cVar12;
                      if (uVar17 + 10 < uVar13) {
                        cVar12 = *(char *)((long)param_1 + uVar18 + 10);
                        if (param_3 < (byte)param_2[2][uVar18 * 4 + 0xb]) {
                          uVar58 = uVar58 - (int)cVar12;
                        }
                        else {
                          cVar12 = '\0';
                        }
                        *(char *)((long)param_1 + uVar18 + 10) = cVar12;
                        if (uVar17 + 0xb < uVar13) {
                          cVar12 = *(char *)((long)param_1 + uVar18 + 0xb);
                          if (param_3 < (byte)param_2[2][uVar18 * 4 + 0xf]) {
                            uVar58 = uVar58 - (int)cVar12;
                          }
                          else {
                            cVar12 = '\0';
                          }
                          *(char *)((long)param_1 + uVar18 + 0xb) = cVar12;
                          if (uVar17 + 0xc < uVar13) {
                            cVar12 = *(char *)((long)param_1 + uVar18 + 0xc);
                            if (param_3 < (byte)param_2[3][uVar18 * 4 + 3]) {
                              uVar58 = uVar58 - (int)cVar12;
                            }
                            else {
                              cVar12 = '\0';
                            }
                            *(char *)((long)param_1 + uVar18 + 0xc) = cVar12;
                            if (uVar17 + 0xd < uVar13) {
                              cVar12 = *(char *)((long)param_1 + uVar18 + 0xd);
                              if (param_3 < (byte)param_2[3][uVar18 * 4 + 7]) {
                                uVar58 = uVar58 - (int)cVar12;
                              }
                              else {
                                cVar12 = '\0';
                              }
                              *(char *)((long)param_1 + uVar18 + 0xd) = cVar12;
                              if (uVar17 + 0xe < uVar13) {
                                cVar12 = *(char *)((long)param_1 + uVar18 + 0xe);
                                uVar13 = uVar58 - (int)cVar12;
                                if ((byte)param_2[3][uVar18 * 4 + 0xb] <= param_3) {
                                  cVar12 = '\0';
                                  uVar13 = uVar58;
                                }
                                *(char *)((long)param_1 + uVar18 + 0xe) = cVar12;
                                goto LAB_00145b50;
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
  *param_5 = uVar58;
  return;
}


