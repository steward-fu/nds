/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_triple
 * Address  : 0013a380
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_window_inhibit_masks_triple
               (long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,uint param_7,uint param_8,uint param_9,
               uint param_10)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar9;
  byte bVar16;
  byte bVar17;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  byte bVar27;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  byte bVar37;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar39;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined8 uVar47;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 uVar55;
  byte bVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  uint uStack_2c;
  uint uStack_24;
  uint local_1c;
  uint local_14;
  uint uVar8;
  uint uVar18;
  uint uVar28;
  uint uVar38;
  
  lVar5 = ___stack_chk_guard;
  uVar55 = param_4[1];
  uVar47 = *param_4;
  uVar64 = param_4[3];
  uVar63 = param_4[2];
  uVar39 = param_5[1];
  uVar29 = *param_5;
  uVar19 = param_5[3];
  uVar9 = param_5[2];
  bVar27 = (byte)uVar29 | (byte)uVar47;
  bVar48 = (byte)((ulong)uVar47 >> 8);
  bVar30 = (byte)((ulong)uVar29 >> 8) | bVar48;
  bVar49 = (byte)((ulong)uVar47 >> 0x10);
  bVar31 = (byte)((ulong)uVar29 >> 0x10) | bVar49;
  bVar50 = (byte)((ulong)uVar47 >> 0x18);
  bVar32 = (byte)((ulong)uVar29 >> 0x18) | bVar50;
  uVar28 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar27)));
  bVar51 = (byte)((ulong)uVar47 >> 0x20);
  bVar33 = (byte)((ulong)uVar29 >> 0x20) | bVar51;
  bVar52 = (byte)((ulong)uVar47 >> 0x28);
  bVar34 = (byte)((ulong)uVar29 >> 0x28) | bVar52;
  bVar53 = (byte)((ulong)uVar47 >> 0x30);
  bVar35 = (byte)((ulong)uVar29 >> 0x30) | bVar53;
  bVar54 = (byte)((ulong)uVar47 >> 0x38);
  bVar36 = (byte)((ulong)uVar29 >> 0x38) | bVar54;
  bVar37 = (byte)uVar39 | (byte)uVar55;
  bVar56 = (byte)((ulong)uVar55 >> 8);
  bVar40 = (byte)((ulong)uVar39 >> 8) | bVar56;
  bVar57 = (byte)((ulong)uVar55 >> 0x10);
  bVar41 = (byte)((ulong)uVar39 >> 0x10) | bVar57;
  bVar58 = (byte)((ulong)uVar55 >> 0x18);
  bVar42 = (byte)((ulong)uVar39 >> 0x18) | bVar58;
  uVar38 = CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar37)));
  bVar59 = (byte)((ulong)uVar55 >> 0x20);
  bVar43 = (byte)((ulong)uVar39 >> 0x20) | bVar59;
  bVar60 = (byte)((ulong)uVar55 >> 0x28);
  bVar44 = (byte)((ulong)uVar39 >> 0x28) | bVar60;
  bVar61 = (byte)((ulong)uVar55 >> 0x30);
  bVar45 = (byte)((ulong)uVar39 >> 0x30) | bVar61;
  bVar62 = (byte)((ulong)uVar55 >> 0x38);
  bVar46 = (byte)((ulong)uVar39 >> 0x38) | bVar62;
  bVar7 = (byte)uVar9 | (byte)uVar63;
  bVar10 = (byte)((ulong)uVar9 >> 8) | (byte)((ulong)uVar63 >> 8);
  bVar11 = (byte)((ulong)uVar9 >> 0x10) | (byte)((ulong)uVar63 >> 0x10);
  bVar12 = (byte)((ulong)uVar9 >> 0x18) | (byte)((ulong)uVar63 >> 0x18);
  uVar8 = CONCAT13(bVar12,CONCAT12(bVar11,CONCAT11(bVar10,bVar7)));
  bVar13 = (byte)((ulong)uVar9 >> 0x20) | (byte)((ulong)uVar63 >> 0x20);
  bVar14 = (byte)((ulong)uVar9 >> 0x28) | (byte)((ulong)uVar63 >> 0x28);
  bVar15 = (byte)((ulong)uVar9 >> 0x30) | (byte)((ulong)uVar63 >> 0x30);
  bVar16 = (byte)((ulong)uVar9 >> 0x38) | (byte)((ulong)uVar63 >> 0x38);
  bVar17 = (byte)uVar19 | (byte)uVar64;
  bVar20 = (byte)((ulong)uVar19 >> 8) | (byte)((ulong)uVar64 >> 8);
  bVar21 = (byte)((ulong)uVar19 >> 0x10) | (byte)((ulong)uVar64 >> 0x10);
  bVar22 = (byte)((ulong)uVar19 >> 0x18) | (byte)((ulong)uVar64 >> 0x18);
  uVar18 = CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar17)));
  bVar23 = (byte)((ulong)uVar19 >> 0x20) | (byte)((ulong)uVar64 >> 0x20);
  bVar24 = (byte)((ulong)uVar19 >> 0x28) | (byte)((ulong)uVar64 >> 0x28);
  bVar25 = (byte)((ulong)uVar19 >> 0x30) | (byte)((ulong)uVar64 >> 0x30);
  bVar26 = (byte)((ulong)uVar19 >> 0x38) | (byte)((ulong)uVar64 >> 0x38);
  uVar3 = param_7 & param_3;
  if ((param_7 >> 5 & 1) != 0) {
    if ((ulong)((long)param_2 + (0xf - (long)param_4)) < 0x1f) {
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)param_4;
      *(uint *)((long)param_2 + 4) = *(uint *)((long)param_2 + 4) | *(uint *)((long)param_4 + 4);
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | *(uint *)(param_4 + 1);
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) | *(uint *)((long)param_4 + 0xc);
      *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) | *(uint *)(param_4 + 2);
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) | *(uint *)((long)param_4 + 0x14);
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) | *(uint *)(param_4 + 3);
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) | *(uint *)((long)param_4 + 0x1c);
      uVar6 = 0;
      goto joined_r0x0013a96c;
    }
    uVar19 = param_2[1];
    uVar9 = *param_2;
    uVar39 = param_2[3];
    uVar29 = param_2[2];
    param_2[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) | bVar62,
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) | bVar61,
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) | bVar60,
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) | bVar59,
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) | bVar58
                                                              ,CONCAT12((byte)((ulong)uVar19 >> 0x10
                                                                              ) | bVar57,
                                                                        CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) | bVar56,(byte)uVar19 | (byte)uVar55)
                                                  ))))));
    *param_2 = CONCAT17((byte)((ulong)uVar9 >> 0x38) | bVar54,
                        CONCAT16((byte)((ulong)uVar9 >> 0x30) | bVar53,
                                 CONCAT15((byte)((ulong)uVar9 >> 0x28) | bVar52,
                                          CONCAT14((byte)((ulong)uVar9 >> 0x20) | bVar51,
                                                   CONCAT13((byte)((ulong)uVar9 >> 0x18) | bVar50,
                                                            CONCAT12((byte)((ulong)uVar9 >> 0x10) |
                                                                     bVar49,CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) | bVar48,(byte)uVar9 | (byte)uVar47)))
                                                  ))));
    uVar19 = param_4[3];
    uVar9 = param_4[2];
    param_2[3] = CONCAT17((byte)((ulong)uVar19 >> 0x38) | (byte)((ulong)uVar39 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) | (byte)((ulong)uVar39 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) |
                                            (byte)((ulong)uVar39 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) |
                                                     (byte)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) |
                                                              (byte)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       | (byte)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar39
                                                                                      >> 8),
                                                                                (byte)uVar19 |
                                                                                (byte)uVar39)))))));
    param_2[2] = CONCAT17((byte)((ulong)uVar9 >> 0x38) | (byte)((ulong)uVar29 >> 0x38),
                          CONCAT16((byte)((ulong)uVar9 >> 0x30) | (byte)((ulong)uVar29 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar9 >> 0x28) |
                                            (byte)((ulong)uVar29 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar9 >> 0x20) |
                                                     (byte)((ulong)uVar29 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar9 >> 0x18) |
                                                              (byte)((ulong)uVar29 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar9 >> 0x10)
                                                                       | (byte)((ulong)uVar29 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar9
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar29
                                                                                      >> 8),
                                                                                (byte)uVar9 |
                                                                                (byte)uVar29)))))));
  }
  uVar6 = 0;
joined_r0x0013a96c:
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      lVar4 = uVar6 * 0x20;
      lVar2 = param_1 + lVar4;
      *(uint *)(param_1 + lVar4) = *(uint *)(param_1 + lVar4) | *(uint *)param_4;
      *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | *(uint *)((long)param_4 + 4);
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | *(uint *)(param_4 + 1);
      *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) | *(uint *)((long)param_4 + 0xc);
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | *(uint *)(param_4 + 2);
      *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) | *(uint *)((long)param_4 + 0x14);
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | *(uint *)(param_4 + 3);
      *(uint *)(lVar2 + 0x1c) = *(uint *)(lVar2 + 0x1c) | *(uint *)((long)param_4 + 0x1c);
    }
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  uVar3 = param_3 & param_8;
  if ((param_8 >> 5 & 1) != 0) {
    uVar6 = (long)param_2 + (0xf - (long)param_4);
    bVar1 = 0x1e < (ulong)((long)param_2 + (0xf - (long)param_5));
    if ((!bVar1 || uVar6 < 0x1e) || bVar1 && uVar6 == 0x1e) {
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)param_5 & (*(uint *)param_4 ^ 0xffffffff);
      *(uint *)((long)param_2 + 4) =
           *(uint *)((long)param_2 + 4) |
           *(uint *)((long)param_5 + 4) & (*(uint *)((long)param_4 + 4) ^ 0xffffffff);
      *(uint *)(param_2 + 1) =
           *(uint *)(param_2 + 1) | *(uint *)(param_5 + 1) & (*(uint *)(param_4 + 1) ^ 0xffffffff);
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) |
           *(uint *)((long)param_5 + 0xc) & (*(uint *)((long)param_4 + 0xc) ^ 0xffffffff);
      *(uint *)(param_2 + 2) =
           *(uint *)(param_2 + 2) | *(uint *)(param_5 + 2) & (*(uint *)(param_4 + 2) ^ 0xffffffff);
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) |
           *(uint *)((long)param_5 + 0x14) & (*(uint *)((long)param_4 + 0x14) ^ 0xffffffff);
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | *(uint *)(param_5 + 3) & (*(uint *)(param_4 + 3) ^ 0xffffffff);
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) |
           *(uint *)((long)param_5 + 0x1c) & (*(uint *)((long)param_4 + 0x1c) ^ 0xffffffff);
    }
    else {
      uVar63 = param_5[1];
      uVar47 = *param_5;
      uVar39 = param_4[1];
      uVar29 = *param_4;
      uVar19 = param_2[1];
      uVar9 = *param_2;
      uVar64 = param_2[3];
      uVar55 = param_2[2];
      param_2[1] = CONCAT17((byte)((ulong)uVar63 >> 0x38) & ~(byte)((ulong)uVar39 >> 0x38) |
                            (byte)((ulong)uVar19 >> 0x38),
                            CONCAT16((byte)((ulong)uVar63 >> 0x30) & ~(byte)((ulong)uVar39 >> 0x30)
                                     | (byte)((ulong)uVar19 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar63 >> 0x28) &
                                              ~(byte)((ulong)uVar39 >> 0x28) |
                                              (byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar63 >> 0x20) &
                                                       ~(byte)((ulong)uVar39 >> 0x20) |
                                                       (byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar63 >> 0x18) &
                                                                ~(byte)((ulong)uVar39 >> 0x18) |
                                                                (byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar63 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)uVar39 >>
                                                                                0x10) |
                                                                         (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar63 >> 8) & ~(byte)((ulong)uVar39 >> 8) |
                                                  (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar63 & ~(byte)uVar39 | (byte)uVar19)))))))
      ;
      *param_2 = CONCAT17((byte)((ulong)uVar47 >> 0x38) & ~(byte)((ulong)uVar29 >> 0x38) |
                          (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)uVar47 >> 0x30) & ~(byte)((ulong)uVar29 >> 0x30) |
                                   (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar47 >> 0x28) &
                                            ~(byte)((ulong)uVar29 >> 0x28) |
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar47 >> 0x20) &
                                                     ~(byte)((ulong)uVar29 >> 0x20) |
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar47 >> 0x18) &
                                                              ~(byte)((ulong)uVar29 >> 0x18) |
                                                              (byte)((ulong)uVar9 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar47 >> 0x10)
                                                                       & ~(byte)((ulong)uVar29 >>
                                                                                0x10) |
                                                                       (byte)((ulong)uVar9 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar47
                                                                                      >> 8) &
                                                                                ~(byte)((ulong)
                                                  uVar29 >> 8) | (byte)((ulong)uVar9 >> 8),
                                                  (byte)uVar47 & ~(byte)uVar29 | (byte)uVar9)))))));
      uVar19 = param_4[3];
      uVar9 = param_4[2];
      uVar39 = param_5[3];
      uVar29 = param_5[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar39 >> 0x38) & ~(byte)((ulong)uVar19 >> 0x38) |
                            (byte)((ulong)uVar64 >> 0x38),
                            CONCAT16((byte)((ulong)uVar39 >> 0x30) & ~(byte)((ulong)uVar19 >> 0x30)
                                     | (byte)((ulong)uVar64 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar39 >> 0x28) &
                                              ~(byte)((ulong)uVar19 >> 0x28) |
                                              (byte)((ulong)uVar64 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar39 >> 0x20) &
                                                       ~(byte)((ulong)uVar19 >> 0x20) |
                                                       (byte)((ulong)uVar64 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar39 >> 0x18) &
                                                                ~(byte)((ulong)uVar19 >> 0x18) |
                                                                (byte)((ulong)uVar64 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar39 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)uVar19 >>
                                                                                0x10) |
                                                                         (byte)((ulong)uVar64 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) & ~(byte)((ulong)uVar19 >> 8) |
                                                  (byte)((ulong)uVar64 >> 8),
                                                  (byte)uVar39 & ~(byte)uVar19 | (byte)uVar64)))))))
      ;
      param_2[2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) & ~(byte)((ulong)uVar9 >> 0x38) |
                            (byte)((ulong)uVar55 >> 0x38),
                            CONCAT16((byte)((ulong)uVar29 >> 0x30) & ~(byte)((ulong)uVar9 >> 0x30) |
                                     (byte)((ulong)uVar55 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar29 >> 0x28) &
                                              ~(byte)((ulong)uVar9 >> 0x28) |
                                              (byte)((ulong)uVar55 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar29 >> 0x20) &
                                                       ~(byte)((ulong)uVar9 >> 0x20) |
                                                       (byte)((ulong)uVar55 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar29 >> 0x18) &
                                                                ~(byte)((ulong)uVar9 >> 0x18) |
                                                                (byte)((ulong)uVar55 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar29 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)uVar9 >>
                                                                                0x10) |
                                                                         (byte)((ulong)uVar55 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) & ~(byte)((ulong)uVar9 >> 8) |
                                                  (byte)((ulong)uVar55 >> 8),
                                                  (byte)uVar29 & ~(byte)uVar9 | (byte)uVar55)))))));
    }
  }
  uVar6 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      lVar4 = uVar6 * 0x20;
      lVar2 = param_1 + lVar4;
      *(uint *)(param_1 + lVar4) =
           *(uint *)(param_1 + lVar4) | *(uint *)param_5 & (*(uint *)param_4 ^ 0xffffffff);
      *(uint *)(lVar2 + 4) =
           *(uint *)(lVar2 + 4) |
           *(uint *)((long)param_5 + 4) & (*(uint *)((long)param_4 + 4) ^ 0xffffffff);
      *(uint *)(lVar2 + 8) =
           *(uint *)(lVar2 + 8) | *(uint *)(param_5 + 1) & (*(uint *)(param_4 + 1) ^ 0xffffffff);
      *(uint *)(lVar2 + 0xc) =
           *(uint *)(lVar2 + 0xc) |
           *(uint *)((long)param_5 + 0xc) & (*(uint *)((long)param_4 + 0xc) ^ 0xffffffff);
      *(uint *)(lVar2 + 0x10) =
           *(uint *)(lVar2 + 0x10) | *(uint *)(param_5 + 2) & (*(uint *)(param_4 + 2) ^ 0xffffffff);
      *(uint *)(lVar2 + 0x14) =
           *(uint *)(lVar2 + 0x14) |
           *(uint *)((long)param_5 + 0x14) & (*(uint *)((long)param_4 + 0x14) ^ 0xffffffff);
      *(uint *)(lVar2 + 0x18) =
           *(uint *)(lVar2 + 0x18) | *(uint *)(param_5 + 3) & (*(uint *)(param_4 + 3) ^ 0xffffffff);
      *(uint *)(lVar2 + 0x1c) =
           *(uint *)(lVar2 + 0x1c) |
           *(uint *)((long)param_5 + 0x1c) & (*(uint *)((long)param_4 + 0x1c) ^ 0xffffffff);
    }
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  uVar3 = param_3 & param_9;
  uStack_24 = (uint)(CONCAT17(bVar46,CONCAT16(bVar45,CONCAT15(bVar44,CONCAT14(bVar43,uVar38)))) >>
                    0x20);
  uStack_2c = (uint)(CONCAT17(bVar36,CONCAT16(bVar35,CONCAT15(bVar34,CONCAT14(bVar33,uVar28)))) >>
                    0x20);
  local_1c = (uint)(CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar13,uVar8)))) >>
                   0x20);
  local_14 = (uint)(CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar23,uVar18)))) >>
                   0x20);
  if ((param_9 >> 5 & 1) != 0) {
    if ((ulong)((long)param_2 + (0xf - (long)param_6)) < 0x1f) {
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)param_6 & (uVar28 ^ 0xffffffff);
      *(uint *)((long)param_2 + 4) =
           *(uint *)((long)param_2 + 4) | *(uint *)((long)param_6 + 4) & (uStack_2c ^ 0xffffffff);
      *(uint *)(param_2 + 1) =
           *(uint *)(param_2 + 1) | *(uint *)(param_6 + 1) & (uVar38 ^ 0xffffffff);
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) |
           *(uint *)((long)param_6 + 0xc) & (uStack_24 ^ 0xffffffff);
      *(uint *)(param_2 + 2) =
           *(uint *)(param_2 + 2) | *(uint *)(param_6 + 2) & (uVar8 ^ 0xffffffff);
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) |
           *(uint *)((long)param_6 + 0x14) & (local_1c ^ 0xffffffff);
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | *(uint *)(param_6 + 3) & (uVar18 ^ 0xffffffff);
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) |
           *(uint *)((long)param_6 + 0x1c) & (local_14 ^ 0xffffffff);
    }
    else {
      uVar39 = param_6[1];
      uVar29 = *param_6;
      uVar19 = param_2[1];
      uVar9 = *param_2;
      uVar55 = param_2[3];
      uVar47 = param_2[2];
      param_2[1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) & ~bVar46 | (byte)((ulong)uVar19 >> 0x38),
                            CONCAT16((byte)((ulong)uVar39 >> 0x30) & ~bVar45 |
                                     (byte)((ulong)uVar19 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar39 >> 0x28) & ~bVar44 |
                                              (byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar39 >> 0x20) & ~bVar43 |
                                                       (byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar39 >> 0x18) &
                                                                ~bVar42 | (byte)((ulong)uVar19 >>
                                                                                0x18),
                                                                CONCAT12((byte)((ulong)uVar39 >>
                                                                               0x10) & ~bVar41 |
                                                                         (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) & ~bVar40 |
                                                  (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar39 & ~bVar37 | (byte)uVar19)))))));
      *param_2 = CONCAT17((byte)((ulong)uVar29 >> 0x38) & ~bVar36 | (byte)((ulong)uVar9 >> 0x38),
                          CONCAT16((byte)((ulong)uVar29 >> 0x30) & ~bVar35 |
                                   (byte)((ulong)uVar9 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar29 >> 0x28) & ~bVar34 |
                                            (byte)((ulong)uVar9 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar29 >> 0x20) & ~bVar33 |
                                                     (byte)((ulong)uVar9 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar29 >> 0x18) &
                                                              ~bVar32 | (byte)((ulong)uVar9 >> 0x18)
                                                              ,CONCAT12((byte)((ulong)uVar29 >> 0x10
                                                                              ) & ~bVar31 |
                                                                        (byte)((ulong)uVar9 >> 0x10)
                                                                        ,CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) & ~bVar30 | (byte)((ulong)uVar9 >> 8)
                                                  ,(byte)uVar29 & ~bVar27 | (byte)uVar9)))))));
      uVar19 = param_6[3];
      uVar9 = param_6[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar19 >> 0x38) & ~bVar26 | (byte)((ulong)uVar55 >> 0x38),
                            CONCAT16((byte)((ulong)uVar19 >> 0x30) & ~bVar25 |
                                     (byte)((ulong)uVar55 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar19 >> 0x28) & ~bVar24 |
                                              (byte)((ulong)uVar55 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar19 >> 0x20) & ~bVar23 |
                                                       (byte)((ulong)uVar55 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar19 >> 0x18) &
                                                                ~bVar22 | (byte)((ulong)uVar55 >>
                                                                                0x18),
                                                                CONCAT12((byte)((ulong)uVar19 >>
                                                                               0x10) & ~bVar21 |
                                                                         (byte)((ulong)uVar55 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) & ~bVar20 |
                                                  (byte)((ulong)uVar55 >> 8),
                                                  (byte)uVar19 & ~bVar17 | (byte)uVar55)))))));
      param_2[2] = CONCAT17((byte)((ulong)uVar9 >> 0x38) & ~bVar16 | (byte)((ulong)uVar47 >> 0x38),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) & ~bVar15 |
                                     (byte)((ulong)uVar47 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) & ~bVar14 |
                                              (byte)((ulong)uVar47 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) & ~bVar13 |
                                                       (byte)((ulong)uVar47 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) &
                                                                ~bVar12 | (byte)((ulong)uVar47 >>
                                                                                0x18),
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) & ~bVar11 |
                                                                         (byte)((ulong)uVar47 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) & ~bVar10 | (byte)((ulong)uVar47 >> 8)
                                                  ,(byte)uVar9 & ~bVar7 | (byte)uVar47)))))));
    }
  }
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      if ((uVar3 & 1) != 0) {
        lVar4 = uVar6 * 0x20;
        lVar2 = param_1 + lVar4;
        *(uint *)(param_1 + lVar4) = *(uint *)(param_1 + lVar4) | ~uVar28 & *(uint *)param_6;
        *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | ~uStack_2c & *(uint *)((long)param_6 + 4);
        *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | ~uVar38 & *(uint *)(param_6 + 1);
        *(uint *)(lVar2 + 0xc) =
             *(uint *)(lVar2 + 0xc) | ~uStack_24 & *(uint *)((long)param_6 + 0xc);
        *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | ~uVar8 & *(uint *)(param_6 + 2);
        *(uint *)(lVar2 + 0x14) =
             *(uint *)(lVar2 + 0x14) | ~local_1c & *(uint *)((long)param_6 + 0x14);
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | ~uVar18 & *(uint *)(param_6 + 3);
        *(uint *)(lVar2 + 0x1c) =
             *(uint *)(lVar2 + 0x1c) | ~local_14 & *(uint *)((long)param_6 + 0x1c);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
  }
  param_3 = param_3 & param_10;
  if ((param_10 >> 5 & 1) != 0) {
    if ((ulong)((long)param_2 + (0xf - (long)param_6)) < 0x1f) {
      *(uint *)param_2 = *(uint *)param_2 | (*(uint *)param_6 | uVar28) ^ 0xffffffff;
      *(uint *)((long)param_2 + 4) =
           *(uint *)((long)param_2 + 4) | (uStack_2c | *(uint *)((long)param_6 + 4)) ^ 0xffffffff;
      *(uint *)(param_2 + 1) =
           *(uint *)(param_2 + 1) | (uVar38 | *(uint *)(param_6 + 1)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) |
           (*(uint *)((long)param_6 + 0xc) | uStack_24) ^ 0xffffffff;
      *(uint *)(param_2 + 2) =
           *(uint *)(param_2 + 2) | (uVar8 | *(uint *)(param_6 + 2)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) |
           (local_1c | *(uint *)((long)param_6 + 0x14)) ^ 0xffffffff;
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | (uVar18 | *(uint *)(param_6 + 3)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) |
           (local_14 | *(uint *)((long)param_6 + 0x1c)) ^ 0xffffffff;
    }
    else {
      uVar19 = param_6[1];
      uVar9 = *param_6;
      uVar55 = param_2[1];
      uVar47 = *param_2;
      uVar39 = param_2[3];
      uVar29 = param_2[2];
      param_2[1] = CONCAT17((byte)((ulong)uVar55 >> 0x38) |
                            ~((byte)((ulong)uVar19 >> 0x38) | bVar46),
                            CONCAT16((byte)((ulong)uVar55 >> 0x30) |
                                     ~((byte)((ulong)uVar19 >> 0x30) | bVar45),
                                     CONCAT15((byte)((ulong)uVar55 >> 0x28) |
                                              ~((byte)((ulong)uVar19 >> 0x28) | bVar44),
                                              CONCAT14((byte)((ulong)uVar55 >> 0x20) |
                                                       ~((byte)((ulong)uVar19 >> 0x20) | bVar43),
                                                       CONCAT13((byte)((ulong)uVar55 >> 0x18) |
                                                                ~((byte)((ulong)uVar19 >> 0x18) |
                                                                 bVar42),CONCAT12((byte)((ulong)
                                                  uVar55 >> 0x10) |
                                                  ~((byte)((ulong)uVar19 >> 0x10) | bVar41),
                                                  CONCAT11((byte)((ulong)uVar55 >> 8) |
                                                           ~((byte)((ulong)uVar19 >> 8) | bVar40),
                                                           (byte)uVar55 | ~((byte)uVar19 | bVar37)))
                                                  )))));
      *param_2 = CONCAT17((byte)((ulong)uVar47 >> 0x38) | ~((byte)((ulong)uVar9 >> 0x38) | bVar36),
                          CONCAT16((byte)((ulong)uVar47 >> 0x30) |
                                   ~((byte)((ulong)uVar9 >> 0x30) | bVar35),
                                   CONCAT15((byte)((ulong)uVar47 >> 0x28) |
                                            ~((byte)((ulong)uVar9 >> 0x28) | bVar34),
                                            CONCAT14((byte)((ulong)uVar47 >> 0x20) |
                                                     ~((byte)((ulong)uVar9 >> 0x20) | bVar33),
                                                     CONCAT13((byte)((ulong)uVar47 >> 0x18) |
                                                              ~((byte)((ulong)uVar9 >> 0x18) |
                                                               bVar32),CONCAT12((byte)((ulong)uVar47
                                                                                      >> 0x10) |
                                                                                ~((byte)((ulong)
                                                  uVar9 >> 0x10) | bVar31),
                                                  CONCAT11((byte)((ulong)uVar47 >> 8) |
                                                           ~((byte)((ulong)uVar9 >> 8) | bVar30),
                                                           (byte)uVar47 | ~((byte)uVar9 | bVar27))))
                                                  ))));
      uVar19 = param_6[3];
      uVar9 = param_6[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar39 >> 0x38) |
                            ~((byte)((ulong)uVar19 >> 0x38) | bVar26),
                            CONCAT16((byte)((ulong)uVar39 >> 0x30) |
                                     ~((byte)((ulong)uVar19 >> 0x30) | bVar25),
                                     CONCAT15((byte)((ulong)uVar39 >> 0x28) |
                                              ~((byte)((ulong)uVar19 >> 0x28) | bVar24),
                                              CONCAT14((byte)((ulong)uVar39 >> 0x20) |
                                                       ~((byte)((ulong)uVar19 >> 0x20) | bVar23),
                                                       CONCAT13((byte)((ulong)uVar39 >> 0x18) |
                                                                ~((byte)((ulong)uVar19 >> 0x18) |
                                                                 bVar22),CONCAT12((byte)((ulong)
                                                  uVar39 >> 0x10) |
                                                  ~((byte)((ulong)uVar19 >> 0x10) | bVar21),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) |
                                                           ~((byte)((ulong)uVar19 >> 8) | bVar20),
                                                           (byte)uVar39 | ~((byte)uVar19 | bVar17)))
                                                  )))));
      param_2[2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) | ~((byte)((ulong)uVar9 >> 0x38) | bVar16)
                            ,CONCAT16((byte)((ulong)uVar29 >> 0x30) |
                                      ~((byte)((ulong)uVar9 >> 0x30) | bVar15),
                                      CONCAT15((byte)((ulong)uVar29 >> 0x28) |
                                               ~((byte)((ulong)uVar9 >> 0x28) | bVar14),
                                               CONCAT14((byte)((ulong)uVar29 >> 0x20) |
                                                        ~((byte)((ulong)uVar9 >> 0x20) | bVar13),
                                                        CONCAT13((byte)((ulong)uVar29 >> 0x18) |
                                                                 ~((byte)((ulong)uVar9 >> 0x18) |
                                                                  bVar12),CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) |
                                                  ~((byte)((ulong)uVar9 >> 0x10) | bVar11),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) |
                                                           ~((byte)((ulong)uVar9 >> 8) | bVar10),
                                                           (byte)uVar29 | ~((byte)uVar9 | bVar7)))))
                                              )));
    }
  }
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      if ((param_3 & 1) != 0) {
        lVar4 = uVar6 * 0x20;
        lVar2 = param_1 + lVar4;
        *(uint *)(param_1 + lVar4) =
             *(uint *)(param_1 + lVar4) | (uVar28 | *(uint *)param_6) ^ 0xffffffff;
        *(uint *)(lVar2 + 4) =
             *(uint *)(lVar2 + 4) | (uStack_2c | *(uint *)((long)param_6 + 4)) ^ 0xffffffff;
        *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | (uVar38 | *(uint *)(param_6 + 1)) ^ 0xffffffff
        ;
        *(uint *)(lVar2 + 0xc) =
             *(uint *)(lVar2 + 0xc) | (uStack_24 | *(uint *)((long)param_6 + 0xc)) ^ 0xffffffff;
        *(uint *)(lVar2 + 0x10) =
             *(uint *)(lVar2 + 0x10) | (uVar8 | *(uint *)(param_6 + 2)) ^ 0xffffffff;
        *(uint *)(lVar2 + 0x14) =
             *(uint *)(lVar2 + 0x14) | (local_1c | *(uint *)((long)param_6 + 0x14)) ^ 0xffffffff;
        *(uint *)(lVar2 + 0x18) =
             *(uint *)(lVar2 + 0x18) | (uVar18 | *(uint *)(param_6 + 3)) ^ 0xffffffff;
        *(uint *)(lVar2 + 0x1c) =
             *(uint *)(lVar2 + 0x1c) | (local_14 | *(uint *)((long)param_6 + 0x1c)) ^ 0xffffffff;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
  }
  if (lVar5 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5 - ___stack_chk_guard,0);
  }
  return;
}


