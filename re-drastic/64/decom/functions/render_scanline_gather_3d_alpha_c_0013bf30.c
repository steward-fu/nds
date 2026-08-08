/*
 * Ghidra decompilation
 *
 * Function : render_scanline_gather_3d_alpha_c
 * Address  : 0013bf30
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_gather_3d_alpha_c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar3 = ___stack_chk_guard;
  puVar4 = param_1;
  if (param_1 < param_2 + 0x80 && param_2 < param_1 + 0x20) {
    do {
      puVar5 = (undefined8 *)((long)puVar4 + 4);
      *(uint *)puVar4 =
           (uint)*(byte *)((long)param_2 + 7) << 8 | (uint)*(byte *)((long)param_2 + 0xb) << 0x10 |
           *(uint *)((long)param_2 + 0xc) & 0xff000000 | *(uint *)param_2 >> 0x18;
      puVar4 = puVar5;
      param_2 = param_2 + 2;
    } while (puVar5 != param_1 + 0x20);
  }
  else {
    uVar1 = *(uint *)param_2;
    uVar6 = *(uint *)((long)param_2 + 4);
    uVar8 = *(uint *)(param_2 + 1);
    uVar10 = *(uint *)((long)param_2 + 0xc);
    uVar2 = *(uint *)(param_2 + 2);
    uVar7 = *(uint *)((long)param_2 + 0x14);
    uVar9 = *(uint *)(param_2 + 3);
    uVar11 = *(uint *)((long)param_2 + 0x1c);
    param_1[1] = CONCAT17((char)(*(uint *)((long)param_2 + 0x3c) >> 0x18),
                          CONCAT16((char)(*(uint *)(param_2 + 7) >> 0x18),
                                   CONCAT15((char)(*(uint *)((long)param_2 + 0x34) >> 0x18),
                                            CONCAT14((char)(*(uint *)(param_2 + 6) >> 0x18),
                                                     CONCAT13((char)(*(uint *)((long)param_2 + 0x2c)
                                                                    >> 0x18),
                                                              CONCAT12((char)(*(uint *)(param_2 + 5)
                                                                             >> 0x18),
                                                                       CONCAT11((char)(*(uint *)((
                                                  long)param_2 + 0x24) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 4) >> 0x18))))))));
    *param_1 = CONCAT17((char)(uVar11 >> 0x18),
                        CONCAT16((char)(uVar9 >> 0x18),
                                 CONCAT15((char)(uVar7 >> 0x18),
                                          CONCAT14((char)(uVar2 >> 0x18),
                                                   CONCAT13((char)(uVar10 >> 0x18),
                                                            CONCAT12((char)(uVar8 >> 0x18),
                                                                     CONCAT11((char)(uVar6 >> 0x18),
                                                                              (char)(uVar1 >> 0x18))
                                                                    ))))));
    uVar1 = *(uint *)(param_2 + 8);
    uVar6 = *(uint *)((long)param_2 + 0x44);
    uVar8 = *(uint *)(param_2 + 9);
    uVar10 = *(uint *)((long)param_2 + 0x4c);
    uVar2 = *(uint *)(param_2 + 10);
    uVar7 = *(uint *)((long)param_2 + 0x54);
    uVar9 = *(uint *)(param_2 + 0xb);
    uVar11 = *(uint *)((long)param_2 + 0x5c);
    param_1[3] = CONCAT17((char)(*(uint *)((long)param_2 + 0x7c) >> 0x18),
                          CONCAT16((char)(*(uint *)(param_2 + 0xf) >> 0x18),
                                   CONCAT15((char)(*(uint *)((long)param_2 + 0x74) >> 0x18),
                                            CONCAT14((char)(*(uint *)(param_2 + 0xe) >> 0x18),
                                                     CONCAT13((char)(*(uint *)((long)param_2 + 0x6c)
                                                                    >> 0x18),
                                                              CONCAT12((char)(*(uint *)(param_2 +
                                                                                       0xd) >> 0x18)
                                                                       ,CONCAT11((char)(*(uint *)((
                                                  long)param_2 + 100) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0xc) >> 0x18))))))));
    param_1[2] = CONCAT17((char)(uVar11 >> 0x18),
                          CONCAT16((char)(uVar9 >> 0x18),
                                   CONCAT15((char)(uVar7 >> 0x18),
                                            CONCAT14((char)(uVar2 >> 0x18),
                                                     CONCAT13((char)(uVar10 >> 0x18),
                                                              CONCAT12((char)(uVar8 >> 0x18),
                                                                       CONCAT11((char)(uVar6 >> 0x18
                                                                                      ),(char)(uVar1
                                                                                              >> 
                                                  0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar6 = *(uint *)((long)param_2 + 0x84);
    uVar8 = *(uint *)(param_2 + 0x11);
    uVar10 = *(uint *)((long)param_2 + 0x8c);
    uVar2 = *(uint *)(param_2 + 0x12);
    uVar7 = *(uint *)((long)param_2 + 0x94);
    uVar9 = *(uint *)(param_2 + 0x13);
    uVar11 = *(uint *)((long)param_2 + 0x9c);
    param_1[5] = CONCAT17((char)(*(uint *)((long)param_2 + 0xbc) >> 0x18),
                          CONCAT16((char)(*(uint *)(param_2 + 0x17) >> 0x18),
                                   CONCAT15((char)(*(uint *)((long)param_2 + 0xb4) >> 0x18),
                                            CONCAT14((char)(*(uint *)(param_2 + 0x16) >> 0x18),
                                                     CONCAT13((char)(*(uint *)((long)param_2 + 0xac)
                                                                    >> 0x18),
                                                              CONCAT12((char)(*(uint *)(param_2 +
                                                                                       0x15) >> 0x18
                                                                             ),CONCAT11((char)(*(
                                                  uint *)((long)param_2 + 0xa4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x14) >> 0x18))))))));
    param_1[4] = CONCAT17((char)(uVar11 >> 0x18),
                          CONCAT16((char)(uVar9 >> 0x18),
                                   CONCAT15((char)(uVar7 >> 0x18),
                                            CONCAT14((char)(uVar2 >> 0x18),
                                                     CONCAT13((char)(uVar10 >> 0x18),
                                                              CONCAT12((char)(uVar8 >> 0x18),
                                                                       CONCAT11((char)(uVar6 >> 0x18
                                                                                      ),(char)(uVar1
                                                                                              >> 
                                                  0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)((long)param_2 + 0xc4);
    uVar8 = *(uint *)(param_2 + 0x19);
    uVar10 = *(uint *)((long)param_2 + 0xcc);
    uVar2 = *(uint *)(param_2 + 0x1a);
    uVar7 = *(uint *)((long)param_2 + 0xd4);
    uVar9 = *(uint *)(param_2 + 0x1b);
    uVar11 = *(uint *)((long)param_2 + 0xdc);
    param_1[7] = CONCAT17((char)(*(uint *)((long)param_2 + 0xfc) >> 0x18),
                          CONCAT16((char)(*(uint *)(param_2 + 0x1f) >> 0x18),
                                   CONCAT15((char)(*(uint *)((long)param_2 + 0xf4) >> 0x18),
                                            CONCAT14((char)(*(uint *)(param_2 + 0x1e) >> 0x18),
                                                     CONCAT13((char)(*(uint *)((long)param_2 + 0xec)
                                                                    >> 0x18),
                                                              CONCAT12((char)(*(uint *)(param_2 +
                                                                                       0x1d) >> 0x18
                                                                             ),CONCAT11((char)(*(
                                                  uint *)((long)param_2 + 0xe4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x1c) >> 0x18))))))));
    param_1[6] = CONCAT17((char)(uVar11 >> 0x18),
                          CONCAT16((char)(uVar9 >> 0x18),
                                   CONCAT15((char)(uVar7 >> 0x18),
                                            CONCAT14((char)(uVar2 >> 0x18),
                                                     CONCAT13((char)(uVar10 >> 0x18),
                                                              CONCAT12((char)(uVar8 >> 0x18),
                                                                       CONCAT11((char)(uVar6 >> 0x18
                                                                                      ),(char)(uVar1
                                                                                              >> 
                                                  0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x20);
    uVar6 = *(uint *)((long)param_2 + 0x104);
    uVar8 = *(uint *)(param_2 + 0x21);
    uVar10 = *(uint *)((long)param_2 + 0x10c);
    uVar2 = *(uint *)(param_2 + 0x22);
    uVar7 = *(uint *)((long)param_2 + 0x114);
    uVar9 = *(uint *)(param_2 + 0x23);
    uVar11 = *(uint *)((long)param_2 + 0x11c);
    param_1[9] = CONCAT17((char)(*(uint *)((long)param_2 + 0x13c) >> 0x18),
                          CONCAT16((char)(*(uint *)(param_2 + 0x27) >> 0x18),
                                   CONCAT15((char)(*(uint *)((long)param_2 + 0x134) >> 0x18),
                                            CONCAT14((char)(*(uint *)(param_2 + 0x26) >> 0x18),
                                                     CONCAT13((char)(*(uint *)((long)param_2 + 300)
                                                                    >> 0x18),
                                                              CONCAT12((char)(*(uint *)(param_2 +
                                                                                       0x25) >> 0x18
                                                                             ),CONCAT11((char)(*(
                                                  uint *)((long)param_2 + 0x124) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x24) >> 0x18))))))));
    param_1[8] = CONCAT17((char)(uVar11 >> 0x18),
                          CONCAT16((char)(uVar9 >> 0x18),
                                   CONCAT15((char)(uVar7 >> 0x18),
                                            CONCAT14((char)(uVar2 >> 0x18),
                                                     CONCAT13((char)(uVar10 >> 0x18),
                                                              CONCAT12((char)(uVar8 >> 0x18),
                                                                       CONCAT11((char)(uVar6 >> 0x18
                                                                                      ),(char)(uVar1
                                                                                              >> 
                                                  0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x28);
    uVar6 = *(uint *)((long)param_2 + 0x144);
    uVar8 = *(uint *)(param_2 + 0x29);
    uVar10 = *(uint *)((long)param_2 + 0x14c);
    uVar2 = *(uint *)(param_2 + 0x2a);
    uVar7 = *(uint *)((long)param_2 + 0x154);
    uVar9 = *(uint *)(param_2 + 0x2b);
    uVar11 = *(uint *)((long)param_2 + 0x15c);
    param_1[0xb] = CONCAT17((char)(*(uint *)((long)param_2 + 0x17c) >> 0x18),
                            CONCAT16((char)(*(uint *)(param_2 + 0x2f) >> 0x18),
                                     CONCAT15((char)(*(uint *)((long)param_2 + 0x174) >> 0x18),
                                              CONCAT14((char)(*(uint *)(param_2 + 0x2e) >> 0x18),
                                                       CONCAT13((char)(*(uint *)((long)param_2 +
                                                                                0x16c) >> 0x18),
                                                                CONCAT12((char)(*(uint *)(param_2 +
                                                                                         0x2d) >>
                                                                               0x18),
                                                                         CONCAT11((char)(*(uint *)((
                                                  long)param_2 + 0x164) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x2c) >> 0x18))))))));
    param_1[10] = CONCAT17((char)(uVar11 >> 0x18),
                           CONCAT16((char)(uVar9 >> 0x18),
                                    CONCAT15((char)(uVar7 >> 0x18),
                                             CONCAT14((char)(uVar2 >> 0x18),
                                                      CONCAT13((char)(uVar10 >> 0x18),
                                                               CONCAT12((char)(uVar8 >> 0x18),
                                                                        CONCAT11((char)(uVar6 >> 
                                                  0x18),(char)(uVar1 >> 0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x30);
    uVar6 = *(uint *)((long)param_2 + 0x184);
    uVar8 = *(uint *)(param_2 + 0x31);
    uVar10 = *(uint *)((long)param_2 + 0x18c);
    uVar2 = *(uint *)(param_2 + 0x32);
    uVar7 = *(uint *)((long)param_2 + 0x194);
    uVar9 = *(uint *)(param_2 + 0x33);
    uVar11 = *(uint *)((long)param_2 + 0x19c);
    param_1[0xd] = CONCAT17((char)(*(uint *)((long)param_2 + 0x1bc) >> 0x18),
                            CONCAT16((char)(*(uint *)(param_2 + 0x37) >> 0x18),
                                     CONCAT15((char)(*(uint *)((long)param_2 + 0x1b4) >> 0x18),
                                              CONCAT14((char)(*(uint *)(param_2 + 0x36) >> 0x18),
                                                       CONCAT13((char)(*(uint *)((long)param_2 +
                                                                                0x1ac) >> 0x18),
                                                                CONCAT12((char)(*(uint *)(param_2 +
                                                                                         0x35) >>
                                                                               0x18),
                                                                         CONCAT11((char)(*(uint *)((
                                                  long)param_2 + 0x1a4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x34) >> 0x18))))))));
    param_1[0xc] = CONCAT17((char)(uVar11 >> 0x18),
                            CONCAT16((char)(uVar9 >> 0x18),
                                     CONCAT15((char)(uVar7 >> 0x18),
                                              CONCAT14((char)(uVar2 >> 0x18),
                                                       CONCAT13((char)(uVar10 >> 0x18),
                                                                CONCAT12((char)(uVar8 >> 0x18),
                                                                         CONCAT11((char)(uVar6 >> 
                                                  0x18),(char)(uVar1 >> 0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x38);
    uVar6 = *(uint *)((long)param_2 + 0x1c4);
    uVar8 = *(uint *)(param_2 + 0x39);
    uVar10 = *(uint *)((long)param_2 + 0x1cc);
    uVar2 = *(uint *)(param_2 + 0x3a);
    uVar7 = *(uint *)((long)param_2 + 0x1d4);
    uVar9 = *(uint *)(param_2 + 0x3b);
    uVar11 = *(uint *)((long)param_2 + 0x1dc);
    param_1[0xf] = CONCAT17((char)(*(uint *)((long)param_2 + 0x1fc) >> 0x18),
                            CONCAT16((char)(*(uint *)(param_2 + 0x3f) >> 0x18),
                                     CONCAT15((char)(*(uint *)((long)param_2 + 500) >> 0x18),
                                              CONCAT14((char)(*(uint *)(param_2 + 0x3e) >> 0x18),
                                                       CONCAT13((char)(*(uint *)((long)param_2 +
                                                                                0x1ec) >> 0x18),
                                                                CONCAT12((char)(*(uint *)(param_2 +
                                                                                         0x3d) >>
                                                                               0x18),
                                                                         CONCAT11((char)(*(uint *)((
                                                  long)param_2 + 0x1e4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x3c) >> 0x18))))))));
    param_1[0xe] = CONCAT17((char)(uVar11 >> 0x18),
                            CONCAT16((char)(uVar9 >> 0x18),
                                     CONCAT15((char)(uVar7 >> 0x18),
                                              CONCAT14((char)(uVar2 >> 0x18),
                                                       CONCAT13((char)(uVar10 >> 0x18),
                                                                CONCAT12((char)(uVar8 >> 0x18),
                                                                         CONCAT11((char)(uVar6 >> 
                                                  0x18),(char)(uVar1 >> 0x18))))))));
    uVar1 = *(uint *)(param_2 + 0x40);
    uVar6 = *(uint *)((long)param_2 + 0x204);
    uVar8 = *(uint *)(param_2 + 0x41);
    uVar10 = *(uint *)((long)param_2 + 0x20c);
    uVar2 = *(uint *)(param_2 + 0x42);
    uVar7 = *(uint *)((long)param_2 + 0x214);
    uVar9 = *(uint *)(param_2 + 0x43);
    uVar11 = *(uint *)((long)param_2 + 0x21c);
    param_1[0x11] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x23c) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x47) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x234) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x46) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x22c) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x45) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x224) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x44) >> 0x18))))))));
    param_1[0x10] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x48);
    uVar6 = *(uint *)((long)param_2 + 0x244);
    uVar8 = *(uint *)(param_2 + 0x49);
    uVar10 = *(uint *)((long)param_2 + 0x24c);
    uVar2 = *(uint *)(param_2 + 0x4a);
    uVar7 = *(uint *)((long)param_2 + 0x254);
    uVar9 = *(uint *)(param_2 + 0x4b);
    uVar11 = *(uint *)((long)param_2 + 0x25c);
    param_1[0x13] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x27c) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x4f) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x274) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x4e) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x26c) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x4d) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x264) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x4c) >> 0x18))))))));
    param_1[0x12] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x50);
    uVar6 = *(uint *)((long)param_2 + 0x284);
    uVar8 = *(uint *)(param_2 + 0x51);
    uVar10 = *(uint *)((long)param_2 + 0x28c);
    uVar2 = *(uint *)(param_2 + 0x52);
    uVar7 = *(uint *)((long)param_2 + 0x294);
    uVar9 = *(uint *)(param_2 + 0x53);
    uVar11 = *(uint *)((long)param_2 + 0x29c);
    param_1[0x15] =
         CONCAT17((char)(*(uint *)((long)param_2 + 700) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x57) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x2b4) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x56) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x2ac) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x55) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x2a4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x54) >> 0x18))))))));
    param_1[0x14] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x58);
    uVar6 = *(uint *)((long)param_2 + 0x2c4);
    uVar8 = *(uint *)(param_2 + 0x59);
    uVar10 = *(uint *)((long)param_2 + 0x2cc);
    uVar2 = *(uint *)(param_2 + 0x5a);
    uVar7 = *(uint *)((long)param_2 + 0x2d4);
    uVar9 = *(uint *)(param_2 + 0x5b);
    uVar11 = *(uint *)((long)param_2 + 0x2dc);
    param_1[0x17] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x2fc) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x5f) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x2f4) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x5e) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x2ec) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x5d) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x2e4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x5c) >> 0x18))))))));
    param_1[0x16] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x60);
    uVar6 = *(uint *)((long)param_2 + 0x304);
    uVar8 = *(uint *)(param_2 + 0x61);
    uVar10 = *(uint *)((long)param_2 + 0x30c);
    uVar2 = *(uint *)(param_2 + 0x62);
    uVar7 = *(uint *)((long)param_2 + 0x314);
    uVar9 = *(uint *)(param_2 + 99);
    uVar11 = *(uint *)((long)param_2 + 0x31c);
    param_1[0x19] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x33c) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x67) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x334) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x66) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x32c) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x65) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x324) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 100) >> 0x18))))))));
    param_1[0x18] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x68);
    uVar6 = *(uint *)((long)param_2 + 0x344);
    uVar8 = *(uint *)(param_2 + 0x69);
    uVar10 = *(uint *)((long)param_2 + 0x34c);
    uVar2 = *(uint *)(param_2 + 0x6a);
    uVar7 = *(uint *)((long)param_2 + 0x354);
    uVar9 = *(uint *)(param_2 + 0x6b);
    uVar11 = *(uint *)((long)param_2 + 0x35c);
    param_1[0x1b] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x37c) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x6f) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x374) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x6e) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x36c) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x6d) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x364) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x6c) >> 0x18))))))));
    param_1[0x1a] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x70);
    uVar6 = *(uint *)((long)param_2 + 900);
    uVar8 = *(uint *)(param_2 + 0x71);
    uVar10 = *(uint *)((long)param_2 + 0x38c);
    uVar2 = *(uint *)(param_2 + 0x72);
    uVar7 = *(uint *)((long)param_2 + 0x394);
    uVar9 = *(uint *)(param_2 + 0x73);
    uVar11 = *(uint *)((long)param_2 + 0x39c);
    param_1[0x1d] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x3bc) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x77) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x3b4) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x76) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x3ac) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x75) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x3a4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x74) >> 0x18))))))));
    param_1[0x1c] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
    uVar1 = *(uint *)(param_2 + 0x78);
    uVar6 = *(uint *)((long)param_2 + 0x3c4);
    uVar8 = *(uint *)(param_2 + 0x79);
    uVar10 = *(uint *)((long)param_2 + 0x3cc);
    uVar2 = *(uint *)(param_2 + 0x7a);
    uVar7 = *(uint *)((long)param_2 + 0x3d4);
    uVar9 = *(uint *)(param_2 + 0x7b);
    uVar11 = *(uint *)((long)param_2 + 0x3dc);
    param_1[0x1f] =
         CONCAT17((char)(*(uint *)((long)param_2 + 0x3fc) >> 0x18),
                  CONCAT16((char)(*(uint *)(param_2 + 0x7f) >> 0x18),
                           CONCAT15((char)(*(uint *)((long)param_2 + 0x3f4) >> 0x18),
                                    CONCAT14((char)(*(uint *)(param_2 + 0x7e) >> 0x18),
                                             CONCAT13((char)(*(uint *)((long)param_2 + 0x3ec) >>
                                                            0x18),
                                                      CONCAT12((char)(*(uint *)(param_2 + 0x7d) >>
                                                                     0x18),
                                                               CONCAT11((char)(*(uint *)((long)
                                                  param_2 + 0x3e4) >> 0x18),
                                                  (char)(*(uint *)(param_2 + 0x7c) >> 0x18))))))));
    param_1[0x1e] =
         CONCAT17((char)(uVar11 >> 0x18),
                  CONCAT16((char)(uVar9 >> 0x18),
                           CONCAT15((char)(uVar7 >> 0x18),
                                    CONCAT14((char)(uVar2 >> 0x18),
                                             CONCAT13((char)(uVar10 >> 0x18),
                                                      CONCAT12((char)(uVar8 >> 0x18),
                                                               CONCAT11((char)(uVar6 >> 0x18),
                                                                        (char)(uVar1 >> 0x18))))))))
    ;
  }
  if (lVar3 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 - ___stack_chk_guard,0);
}


