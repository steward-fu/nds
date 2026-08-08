/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_pass_c
 * Address  : 00149e80
 * Program  : drastic64
 */


void render_polygon_alpha_pass_c
               (undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint7 uVar7;
  uint7 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  uint3 uVar23;
  undefined6 uVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 uVar38;
  ulong uVar39;
  ulong uVar40;
  
  uVar27 = (uint)param_3;
  if (uVar27 != 0) {
    lVar31 = (param_3 & 0xffffffff) * 4;
    bVar25 = param_4 < (undefined8 *)((long)param_1 + lVar31);
    puVar30 = (undefined8 *)((long)param_4 + (param_3 & 0xffffffff));
    uVar28 = (long)param_1 + (0x3f - (long)param_2);
    bVar26 = param_4 < (undefined8 *)((long)param_2 + lVar31);
    if (((bVar25 && param_1 < puVar30 || uVar28 < 0x7e) ||
        (!bVar25 || param_1 >= puVar30) && uVar28 == 0x7e) ||
        ((bVar26 && param_2 < puVar30 || uVar27 - 1 < 0xe) ||
        (!bVar26 || param_2 >= puVar30) && uVar27 - 1 == 0xe)) {
      lVar31 = 0;
      do {
        uVar12 = *(uint *)((long)param_1 + lVar31 * 4);
        uVar10 = *(uint *)((long)param_2 + lVar31 * 4) >> 0x18 & 0x1f;
        if (uVar10 <= uVar12 >> 0x18) {
          uVar10 = uVar12 >> 0x18;
        }
        *(char *)((long)param_4 + lVar31) = (char)(uVar12 >> 0x18);
        *(uint *)((long)param_1 + lVar31 * 4) = uVar12 & 0xffffff | uVar10 << 0x18;
        lVar31 = lVar31 + 1;
      } while ((uint)lVar31 < uVar27);
      return;
    }
    puVar29 = param_1;
    puVar30 = param_2;
    puVar32 = param_4;
    do {
      puVar6 = puVar30 + 1;
      uVar38 = *puVar30;
      puVar3 = puVar30 + 2;
      puVar4 = puVar30 + 3;
      bVar25 = puVar30 != param_2 + (ulong)((uVar27 >> 4) - 1) * 8;
      puVar1 = puVar30 + 4;
      puVar5 = puVar30 + 5;
      auVar34 = *(undefined (*) [16])(puVar30 + 6);
      puVar30 = puVar30 + 8;
      uVar11 = puVar29[1];
      uVar9 = *puVar29;
      uVar35 = puVar29[3];
      uVar28 = puVar29[2];
      uVar37 = puVar29[5];
      uVar36 = puVar29[4];
      uVar40 = puVar29[7];
      uVar39 = puVar29[6];
      uVar10 = (uint)((ulong)uVar9 >> 0x20) & 0xffffff;
      uVar12 = (uint)((ulong)uVar11 >> 0x20) & 0xffffff;
      uVar23 = CONCAT12((char)((ulong)uVar9 >> 0x38),(short)((ulong)uVar9 >> 0x18)) & 0xff00ff;
      uVar13 = (undefined)(uVar35 >> 0x18);
      uVar14 = (undefined)(uVar35 >> 0x38);
      auVar33._0_8_ =
           CONCAT17((char)((ulong)*puVar4 >> 0x38),
                    CONCAT16((char)((ulong)*puVar4 >> 0x18),
                             CONCAT15((char)((ulong)*puVar3 >> 0x38),
                                      CONCAT14((char)((ulong)*puVar3 >> 0x18),
                                               CONCAT13((char)((ulong)*puVar6 >> 0x38),
                                                        CONCAT12((char)((ulong)*puVar6 >> 0x18),
                                                                 CONCAT11((char)((ulong)uVar38 >>
                                                                                0x38),
                                                                          (char)((ulong)uVar38 >>
                                                                                0x18)))))))) &
           0x1f1f1f1f1f1f1f1f;
      auVar33[8] = (byte)((ulong)*puVar1 >> 0x18) & 0x1f;
      auVar33[9] = (byte)((ulong)*puVar1 >> 0x38) & 0x1f;
      auVar33[10] = (byte)((ulong)*puVar5 >> 0x18) & 0x1f;
      auVar33[11] = (byte)((ulong)*puVar5 >> 0x38) & 0x1f;
      auVar33[12] = auVar34[3] & 0x1f;
      auVar33[13] = auVar34[7] & 0x1f;
      auVar33[14] = auVar34[11] & 0x1f;
      auVar33[15] = auVar34[15] & 0x1f;
      uVar15 = (undefined)(uVar36 >> 0x18);
      uVar16 = (undefined)(uVar36 >> 0x38);
      uVar17 = (undefined)(uVar37 >> 0x18);
      uVar18 = (undefined)(uVar37 >> 0x38);
      uVar19 = (undefined)(uVar39 >> 0x18);
      uVar20 = (undefined)(uVar39 >> 0x38);
      uVar21 = (undefined)(uVar40 >> 0x18);
      uVar22 = (undefined)(uVar40 >> 0x38);
      uVar8 = CONCAT16((char)(uVar12 >> 0x10),
                       CONCAT15((char)(uVar12 >> 8),CONCAT14((char)uVar12,(int)uVar11))) &
              0xffffff00ffffff;
      uVar7 = CONCAT16((char)(uVar10 >> 0x10),
                       CONCAT15((char)(uVar10 >> 8),CONCAT14((char)uVar10,(int)uVar9))) &
              0xffffff00ffffff;
      uVar24 = CONCAT15((char)(uVar28 >> 0x38),
                        CONCAT14((char)(uVar28 >> 0x18),
                                 CONCAT13((char)((ulong)uVar11 >> 0x38),
                                          CONCAT12((char)((ulong)uVar11 >> 0x18),
                                                   CONCAT11((char)(uVar23 >> 0x10),(char)uVar23)))))
      ;
      uVar28 = uVar28 & 0xffffff00ffffff;
      uVar35 = uVar35 & 0xffffff00ffffff;
      uVar36 = uVar36 & 0xffffff00ffffff;
      uVar37 = uVar37 & 0xffffff00ffffff;
      auVar34[6] = uVar13;
      auVar34._0_6_ = uVar24;
      auVar34[7] = uVar14;
      auVar34[8] = uVar15;
      auVar34[9] = uVar16;
      auVar34[10] = uVar17;
      auVar34[11] = uVar18;
      auVar34[12] = uVar19;
      auVar34[13] = uVar20;
      auVar34[14] = uVar21;
      auVar34[15] = uVar22;
      auVar34 = NEON_umax(auVar34,auVar33,1);
      puVar32[1] = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      *puVar32 = CONCAT17(uVar14,CONCAT16(uVar13,uVar24));
      uVar39 = uVar39 & 0xffffff00ffffff;
      uVar40 = uVar40 & 0xffffff00ffffff;
      puVar29[1] = CONCAT17(auVar34[3],
                            CONCAT16((char)(uVar8 >> 0x30),
                                     CONCAT15((char)(uVar8 >> 0x28),
                                              CONCAT14((char)(uVar8 >> 0x20),
                                                       CONCAT13(auVar34[2],(int3)uVar8)))));
      *puVar29 = CONCAT17(auVar34[1],
                          CONCAT16((char)(uVar7 >> 0x30),
                                   CONCAT15((char)(uVar7 >> 0x28),
                                            CONCAT14((char)(uVar7 >> 0x20),
                                                     CONCAT13(auVar34[0],(int3)uVar7)))));
      puVar29[3] = CONCAT17(auVar34[7],
                            CONCAT16((char)(uVar35 >> 0x30),
                                     CONCAT15((char)(uVar35 >> 0x28),
                                              CONCAT14((char)(uVar35 >> 0x20),
                                                       CONCAT13(auVar34[6],(int3)uVar35)))));
      puVar29[2] = CONCAT17(auVar34[5],
                            CONCAT16((char)(uVar28 >> 0x30),
                                     CONCAT15((char)(uVar28 >> 0x28),
                                              CONCAT14((char)(uVar28 >> 0x20),
                                                       CONCAT13(auVar34[4],(int3)uVar28)))));
      puVar29[5] = CONCAT17(auVar34[11],
                            CONCAT16((char)(uVar37 >> 0x30),
                                     CONCAT15((char)(uVar37 >> 0x28),
                                              CONCAT14((char)(uVar37 >> 0x20),
                                                       CONCAT13(auVar34[10],(int3)uVar37)))));
      puVar29[4] = CONCAT17(auVar34[9],
                            CONCAT16((char)(uVar36 >> 0x30),
                                     CONCAT15((char)(uVar36 >> 0x28),
                                              CONCAT14((char)(uVar36 >> 0x20),
                                                       CONCAT13(auVar34[8],(int3)uVar36)))));
      *(char *)(puVar29 + 8) = (char)uVar40;
      *(char *)((long)puVar29 + 0x41) = (char)(uVar40 >> 8);
      *(char *)((long)puVar29 + 0x42) = (char)(uVar40 >> 0x10);
      *(char *)((long)puVar29 + 0x43) = auVar34[14];
      *(char *)((long)puVar29 + 0x44) = (char)(uVar40 >> 0x20);
      *(char *)((long)puVar29 + 0x45) = (char)(uVar40 >> 0x28);
      *(char *)((long)puVar29 + 0x46) = (char)(uVar40 >> 0x30);
      *(char *)((long)puVar29 + 0x47) = auVar34[15];
      *(char *)(puVar29 + 6) = (char)uVar39;
      *(char *)((long)puVar29 + 0x31) = (char)(uVar39 >> 8);
      *(char *)((long)puVar29 + 0x32) = (char)(uVar39 >> 0x10);
      *(char *)((long)puVar29 + 0x33) = auVar34[12];
      *(char *)((long)puVar29 + 0x34) = (char)(uVar39 >> 0x20);
      *(char *)((long)puVar29 + 0x35) = (char)(uVar39 >> 0x28);
      *(char *)((long)puVar29 + 0x36) = (char)(uVar39 >> 0x30);
      *(char *)((long)puVar29 + 0x37) = auVar34[13];
      puVar29 = puVar29 + 8;
      puVar32 = puVar32 + 2;
    } while (bVar25);
    uVar28 = param_3 & 0xfffffff0;
    lVar31 = uVar28 * 4;
    uVar10 = uVar27 & 0xfffffff0;
    if ((param_3 & 0xf) != 0) {
      uVar2 = *(uint *)((long)param_1 + uVar28 * 4);
      uVar12 = *(uint *)((long)param_2 + uVar28 * 4) >> 0x18 & 0x1f;
      if (uVar12 <= uVar2 >> 0x18) {
        uVar12 = uVar2 >> 0x18;
      }
      *(char *)((long)param_4 + (ulong)uVar10) = (char)(uVar2 >> 0x18);
      *(uint *)((long)param_1 + uVar28 * 4) = uVar2 & 0xffffff | uVar12 << 0x18;
      if (uVar10 + 1 < uVar27) {
        uVar2 = *(uint *)((long)param_1 + lVar31 + 4);
        uVar12 = *(byte *)((long)param_2 + lVar31 + 7) & 0x1f;
        if (uVar12 <= uVar2 >> 0x18) {
          uVar12 = uVar2 >> 0x18;
        }
        *(char *)((long)param_4 + uVar28 + 1) = (char)(uVar2 >> 0x18);
        *(uint *)((long)param_1 + lVar31 + 4) = uVar2 & 0xffffff | uVar12 << 0x18;
        if (uVar10 + 2 < uVar27) {
          uVar2 = *(uint *)((long)param_1 + lVar31 + 8);
          uVar12 = *(byte *)((long)param_2 + lVar31 + 0xb) & 0x1f;
          if (uVar12 <= uVar2 >> 0x18) {
            uVar12 = uVar2 >> 0x18;
          }
          *(char *)((long)param_4 + uVar28 + 2) = (char)(uVar2 >> 0x18);
          *(uint *)((long)param_1 + lVar31 + 8) = uVar2 & 0xffffff | uVar12 << 0x18;
          if (uVar10 + 3 < uVar27) {
            uVar2 = *(uint *)((long)param_1 + lVar31 + 0xc);
            uVar12 = *(byte *)((long)param_2 + lVar31 + 0xf) & 0x1f;
            if (uVar12 <= uVar2 >> 0x18) {
              uVar12 = uVar2 >> 0x18;
            }
            *(char *)((long)param_4 + uVar28 + 3) = (char)(uVar2 >> 0x18);
            *(uint *)((long)param_1 + lVar31 + 0xc) = uVar2 & 0xffffff | uVar12 << 0x18;
            if (uVar10 + 4 < uVar27) {
              uVar2 = *(uint *)((long)param_1 + lVar31 + 0x10);
              uVar12 = *(byte *)((long)param_2 + lVar31 + 0x13) & 0x1f;
              if (uVar12 <= uVar2 >> 0x18) {
                uVar12 = uVar2 >> 0x18;
              }
              *(char *)((long)param_4 + uVar28 + 4) = (char)(uVar2 >> 0x18);
              *(uint *)((long)param_1 + lVar31 + 0x10) = uVar2 & 0xffffff | uVar12 << 0x18;
              if (uVar10 + 5 < uVar27) {
                uVar2 = *(uint *)((long)param_1 + lVar31 + 0x14);
                uVar12 = *(byte *)((long)param_2 + lVar31 + 0x17) & 0x1f;
                if (uVar12 <= uVar2 >> 0x18) {
                  uVar12 = uVar2 >> 0x18;
                }
                *(char *)((long)param_4 + uVar28 + 5) = (char)(uVar2 >> 0x18);
                *(uint *)((long)param_1 + lVar31 + 0x14) = uVar2 & 0xffffff | uVar12 << 0x18;
                if (uVar10 + 6 < uVar27) {
                  uVar2 = *(uint *)((long)param_1 + lVar31 + 0x18);
                  uVar12 = *(byte *)((long)param_2 + lVar31 + 0x1b) & 0x1f;
                  if (uVar12 <= uVar2 >> 0x18) {
                    uVar12 = uVar2 >> 0x18;
                  }
                  *(char *)((long)param_4 + uVar28 + 6) = (char)(uVar2 >> 0x18);
                  *(uint *)((long)param_1 + lVar31 + 0x18) = uVar2 & 0xffffff | uVar12 << 0x18;
                  if (uVar10 + 7 < uVar27) {
                    uVar2 = *(uint *)((long)param_1 + lVar31 + 0x1c);
                    uVar12 = *(byte *)((long)param_2 + lVar31 + 0x1f) & 0x1f;
                    if (uVar12 <= uVar2 >> 0x18) {
                      uVar12 = uVar2 >> 0x18;
                    }
                    *(char *)((long)param_4 + uVar28 + 7) = (char)(uVar2 >> 0x18);
                    *(uint *)((long)param_1 + lVar31 + 0x1c) = uVar2 & 0xffffff | uVar12 << 0x18;
                    if (uVar10 + 8 < uVar27) {
                      uVar2 = *(uint *)((long)param_1 + lVar31 + 0x20);
                      uVar12 = *(byte *)((long)param_2 + lVar31 + 0x23) & 0x1f;
                      if (uVar12 <= uVar2 >> 0x18) {
                        uVar12 = uVar2 >> 0x18;
                      }
                      *(char *)((long)param_4 + uVar28 + 8) = (char)(uVar2 >> 0x18);
                      *(uint *)((long)param_1 + lVar31 + 0x20) = uVar2 & 0xffffff | uVar12 << 0x18;
                      if (uVar10 + 9 < uVar27) {
                        uVar2 = *(uint *)((long)param_1 + lVar31 + 0x24);
                        uVar12 = *(byte *)((long)param_2 + lVar31 + 0x27) & 0x1f;
                        if (uVar12 <= uVar2 >> 0x18) {
                          uVar12 = uVar2 >> 0x18;
                        }
                        *(char *)((long)param_4 + uVar28 + 9) = (char)(uVar2 >> 0x18);
                        *(uint *)((long)param_1 + lVar31 + 0x24) = uVar2 & 0xffffff | uVar12 << 0x18
                        ;
                        if (uVar10 + 10 < uVar27) {
                          uVar2 = *(uint *)((long)param_1 + lVar31 + 0x28);
                          uVar12 = *(byte *)((long)param_2 + lVar31 + 0x2b) & 0x1f;
                          if (uVar12 <= uVar2 >> 0x18) {
                            uVar12 = uVar2 >> 0x18;
                          }
                          *(char *)((long)param_4 + uVar28 + 10) = (char)(uVar2 >> 0x18);
                          *(uint *)((long)param_1 + lVar31 + 0x28) =
                               uVar2 & 0xffffff | uVar12 << 0x18;
                          if (uVar10 + 0xb < uVar27) {
                            uVar2 = *(uint *)((long)param_1 + lVar31 + 0x2c);
                            uVar12 = *(byte *)((long)param_2 + lVar31 + 0x2f) & 0x1f;
                            if (uVar12 <= uVar2 >> 0x18) {
                              uVar12 = uVar2 >> 0x18;
                            }
                            *(char *)((long)param_4 + uVar28 + 0xb) = (char)(uVar2 >> 0x18);
                            *(uint *)((long)param_1 + lVar31 + 0x2c) =
                                 uVar2 & 0xffffff | uVar12 << 0x18;
                            if (uVar10 + 0xc < uVar27) {
                              uVar2 = *(uint *)((long)param_1 + lVar31 + 0x30);
                              uVar12 = *(byte *)((long)param_2 + lVar31 + 0x33) & 0x1f;
                              if (uVar12 <= uVar2 >> 0x18) {
                                uVar12 = uVar2 >> 0x18;
                              }
                              *(char *)((long)param_4 + uVar28 + 0xc) = (char)(uVar2 >> 0x18);
                              *(uint *)((long)param_1 + lVar31 + 0x30) =
                                   uVar2 & 0xffffff | uVar12 << 0x18;
                              if (uVar10 + 0xd < uVar27) {
                                uVar2 = *(uint *)((long)param_1 + lVar31 + 0x34);
                                uVar12 = *(byte *)((long)param_2 + lVar31 + 0x37) & 0x1f;
                                if (uVar12 <= uVar2 >> 0x18) {
                                  uVar12 = uVar2 >> 0x18;
                                }
                                *(char *)((long)param_4 + uVar28 + 0xd) = (char)(uVar2 >> 0x18);
                                *(uint *)((long)param_1 + lVar31 + 0x34) =
                                     uVar2 & 0xffffff | uVar12 << 0x18;
                                if (uVar10 + 0xe < uVar27) {
                                  uVar10 = *(uint *)((long)param_1 + lVar31 + 0x38);
                                  uVar27 = *(byte *)((long)param_2 + lVar31 + 0x3b) & 0x1f;
                                  if (uVar27 <= uVar10 >> 0x18) {
                                    uVar27 = uVar10 >> 0x18;
                                  }
                                  *(char *)((long)param_4 + uVar28 + 0xe) = (char)(uVar10 >> 0x18);
                                  *(uint *)((long)param_1 + lVar31 + 0x38) =
                                       uVar10 & 0xffffff | uVar27 << 0x18;
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
  }
  return;
}


