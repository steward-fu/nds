/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_masks_double
 * Address  : 0013ab10
 * Program  : drastic64
 */


void render_scanline_window_inhibit_masks_double
               (long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
               undefined8 *param_5,uint param_6,uint param_7,uint param_8)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = param_6 & param_3;
  if ((param_6 >> 5 & 1) != 0) {
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
    }
    else {
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar11 = param_2[3];
      uVar10 = param_2[2];
      uVar7 = param_4[1];
      uVar6 = *param_4;
      param_2[1] = CONCAT17((byte)((ulong)uVar9 >> 0x38) | (byte)((ulong)uVar7 >> 0x38),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) | (byte)((ulong)uVar7 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) |
                                              (byte)((ulong)uVar7 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) |
                                                       (byte)((ulong)uVar7 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) |
                                                                (byte)((ulong)uVar7 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) |
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar9 | (byte)uVar7)))))));
      *param_2 = CONCAT17((byte)((ulong)uVar8 >> 0x38) | (byte)((ulong)uVar6 >> 0x38),
                          CONCAT16((byte)((ulong)uVar8 >> 0x30) | (byte)((ulong)uVar6 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar8 >> 0x28) |
                                            (byte)((ulong)uVar6 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar8 >> 0x20) |
                                                     (byte)((ulong)uVar6 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar8 >> 0x18) |
                                                              (byte)((ulong)uVar6 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar8 >> 0x10)
                                                                       | (byte)((ulong)uVar6 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar8
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar6
                                                                                      >> 8),
                                                                                (byte)uVar8 |
                                                                                (byte)uVar6)))))));
      uVar7 = param_4[3];
      uVar6 = param_4[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar7 >> 0x38) | (byte)((ulong)uVar11 >> 0x38),
                            CONCAT16((byte)((ulong)uVar7 >> 0x30) | (byte)((ulong)uVar11 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar7 >> 0x28) |
                                              (byte)((ulong)uVar11 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar7 >> 0x20) |
                                                       (byte)((ulong)uVar11 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar7 >> 0x18) |
                                                                (byte)((ulong)uVar11 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar7 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar11 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) |
                                                           (byte)((ulong)uVar11 >> 8),
                                                           (byte)uVar7 | (byte)uVar11)))))));
      param_2[2] = CONCAT17((byte)((ulong)uVar6 >> 0x38) | (byte)((ulong)uVar10 >> 0x38),
                            CONCAT16((byte)((ulong)uVar6 >> 0x30) | (byte)((ulong)uVar10 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar6 >> 0x28) |
                                              (byte)((ulong)uVar10 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar6 >> 0x20) |
                                                       (byte)((ulong)uVar10 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                                (byte)((ulong)uVar10 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar6 >> 0x10
                                                                               ) | (byte)((ulong)
                                                  uVar10 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) |
                                                           (byte)((ulong)uVar10 >> 8),
                                                           (byte)uVar6 | (byte)uVar10)))))));
    }
  }
  uVar5 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      lVar4 = uVar5 * 0x20;
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
    uVar5 = (ulong)((int)uVar5 + 1);
  }
  uVar3 = param_3 & param_7;
  if ((param_7 >> 5 & 1) != 0) {
    uVar5 = (long)param_2 + (0xf - (long)param_4);
    bVar1 = (ulong)((long)param_2 + (0xf - (long)param_5)) < 0x1f;
    if ((bVar1 || uVar5 < 0x1e) || !bVar1 && uVar5 == 0x1e) {
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
      uVar12 = param_5[1];
      uVar10 = *param_5;
      uVar9 = param_4[1];
      uVar8 = *param_4;
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar13 = param_2[3];
      uVar11 = param_2[2];
      param_2[1] = CONCAT17((byte)((ulong)uVar12 >> 0x38) & ~(byte)((ulong)uVar9 >> 0x38) |
                            (byte)((ulong)uVar7 >> 0x38),
                            CONCAT16((byte)((ulong)uVar12 >> 0x30) & ~(byte)((ulong)uVar9 >> 0x30) |
                                     (byte)((ulong)uVar7 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                              ~(byte)((ulong)uVar9 >> 0x28) |
                                              (byte)((ulong)uVar7 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                       ~(byte)((ulong)uVar9 >> 0x20) |
                                                       (byte)((ulong)uVar7 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar12 >> 0x18) &
                                                                ~(byte)((ulong)uVar9 >> 0x18) |
                                                                (byte)((ulong)uVar7 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar12 >>
                                                                               0x10) &
                                                                         ~(byte)((ulong)uVar9 >>
                                                                                0x10) |
                                                                         (byte)((ulong)uVar7 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  ulong)uVar12 >> 8) & ~(byte)((ulong)uVar9 >> 8) |
                                                  (byte)((ulong)uVar7 >> 8),
                                                  (byte)uVar12 & ~(byte)uVar9 | (byte)uVar7)))))));
      *param_2 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & ~(byte)((ulong)uVar8 >> 0x38) |
                          (byte)((ulong)uVar6 >> 0x38),
                          CONCAT16((byte)((ulong)uVar10 >> 0x30) & ~(byte)((ulong)uVar8 >> 0x30) |
                                   (byte)((ulong)uVar6 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar10 >> 0x28) &
                                            ~(byte)((ulong)uVar8 >> 0x28) |
                                            (byte)((ulong)uVar6 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar10 >> 0x20) &
                                                     ~(byte)((ulong)uVar8 >> 0x20) |
                                                     (byte)((ulong)uVar6 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar10 >> 0x18) &
                                                              ~(byte)((ulong)uVar8 >> 0x18) |
                                                              (byte)((ulong)uVar6 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar10 >> 0x10)
                                                                       & ~(byte)((ulong)uVar8 >>
                                                                                0x10) |
                                                                       (byte)((ulong)uVar6 >> 0x10),
                                                                       CONCAT11((byte)((ulong)uVar10
                                                                                      >> 8) &
                                                                                ~(byte)((ulong)uVar8
                                                                                       >> 8) |
                                                                                (byte)((ulong)uVar6
                                                                                      >> 8),
                                                                                (byte)uVar10 &
                                                                                ~(byte)uVar8 |
                                                                                (byte)uVar6)))))));
      uVar7 = param_4[3];
      uVar6 = param_4[2];
      uVar9 = param_5[3];
      uVar8 = param_5[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar9 >> 0x38) & ~(byte)((ulong)uVar7 >> 0x38) |
                            (byte)((ulong)uVar13 >> 0x38),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) & ~(byte)((ulong)uVar7 >> 0x30) |
                                     (byte)((ulong)uVar13 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) &
                                              ~(byte)((ulong)uVar7 >> 0x28) |
                                              (byte)((ulong)uVar13 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) &
                                                       ~(byte)((ulong)uVar7 >> 0x20) |
                                                       (byte)((ulong)uVar13 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) &
                                                                ~(byte)((ulong)uVar7 >> 0x18) |
                                                                (byte)((ulong)uVar13 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) & ~(byte)((ulong)
                                                  uVar7 >> 0x10) | (byte)((ulong)uVar13 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) &
                                                           ~(byte)((ulong)uVar7 >> 8) |
                                                           (byte)((ulong)uVar13 >> 8),
                                                           (byte)uVar9 & ~(byte)uVar7 | (byte)uVar13
                                                          )))))));
      param_2[2] = CONCAT17((byte)((ulong)uVar8 >> 0x38) & ~(byte)((ulong)uVar6 >> 0x38) |
                            (byte)((ulong)uVar11 >> 0x38),
                            CONCAT16((byte)((ulong)uVar8 >> 0x30) & ~(byte)((ulong)uVar6 >> 0x30) |
                                     (byte)((ulong)uVar11 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar8 >> 0x28) &
                                              ~(byte)((ulong)uVar6 >> 0x28) |
                                              (byte)((ulong)uVar11 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar8 >> 0x20) &
                                                       ~(byte)((ulong)uVar6 >> 0x20) |
                                                       (byte)((ulong)uVar11 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar8 >> 0x18) &
                                                                ~(byte)((ulong)uVar6 >> 0x18) |
                                                                (byte)((ulong)uVar11 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar8 >> 0x10
                                                                               ) & ~(byte)((ulong)
                                                  uVar6 >> 0x10) | (byte)((ulong)uVar11 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) &
                                                           ~(byte)((ulong)uVar6 >> 8) |
                                                           (byte)((ulong)uVar11 >> 8),
                                                           (byte)uVar8 & ~(byte)uVar6 | (byte)uVar11
                                                          )))))));
    }
  }
  uVar5 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      lVar4 = uVar5 * 0x20;
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
    uVar5 = (ulong)((int)uVar5 + 1);
  }
  param_3 = param_3 & param_8;
  if ((param_8 >> 5 & 1) != 0) {
    uVar5 = (long)param_2 + (0xf - (long)param_4);
    bVar1 = 0x1e < (ulong)((long)param_2 + (0xf - (long)param_5));
    if ((!bVar1 || uVar5 < 0x1e) || bVar1 && uVar5 == 0x1e) {
      *(uint *)param_2 = *(uint *)param_2 | (*(uint *)param_4 | *(uint *)param_5) ^ 0xffffffff;
      *(uint *)((long)param_2 + 4) =
           *(uint *)((long)param_2 + 4) |
           (*(uint *)((long)param_5 + 4) | *(uint *)((long)param_4 + 4)) ^ 0xffffffff;
      *(uint *)(param_2 + 1) =
           *(uint *)(param_2 + 1) | (*(uint *)(param_4 + 1) | *(uint *)(param_5 + 1)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0xc) =
           *(uint *)((long)param_2 + 0xc) |
           (*(uint *)((long)param_5 + 0xc) | *(uint *)((long)param_4 + 0xc)) ^ 0xffffffff;
      *(uint *)(param_2 + 2) =
           *(uint *)(param_2 + 2) | (*(uint *)(param_4 + 2) | *(uint *)(param_5 + 2)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x14) =
           *(uint *)((long)param_2 + 0x14) |
           (*(uint *)((long)param_4 + 0x14) | *(uint *)((long)param_5 + 0x14)) ^ 0xffffffff;
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | (*(uint *)(param_4 + 3) | *(uint *)(param_5 + 3)) ^ 0xffffffff;
      *(uint *)((long)param_2 + 0x1c) =
           *(uint *)((long)param_2 + 0x1c) |
           (*(uint *)((long)param_5 + 0x1c) | *(uint *)((long)param_4 + 0x1c)) ^ 0xffffffff;
    }
    else {
      uVar12 = param_5[1];
      uVar10 = *param_5;
      uVar9 = param_4[1];
      uVar8 = *param_4;
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar13 = param_2[3];
      uVar11 = param_2[2];
      param_2[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) |
                            ~((byte)((ulong)uVar9 >> 0x38) | (byte)((ulong)uVar12 >> 0x38)),
                            CONCAT16((byte)((ulong)uVar7 >> 0x30) |
                                     ~((byte)((ulong)uVar9 >> 0x30) | (byte)((ulong)uVar12 >> 0x30))
                                     ,CONCAT15((byte)((ulong)uVar7 >> 0x28) |
                                               ~((byte)((ulong)uVar9 >> 0x28) |
                                                (byte)((ulong)uVar12 >> 0x28)),
                                               CONCAT14((byte)((ulong)uVar7 >> 0x20) |
                                                        ~((byte)((ulong)uVar9 >> 0x20) |
                                                         (byte)((ulong)uVar12 >> 0x20)),
                                                        CONCAT13((byte)((ulong)uVar7 >> 0x18) |
                                                                 ~((byte)((ulong)uVar9 >> 0x18) |
                                                                  (byte)((ulong)uVar12 >> 0x18)),
                                                                 CONCAT12((byte)((ulong)uVar7 >>
                                                                                0x10) |
                                                                          ~((byte)((ulong)uVar9 >>
                                                                                  0x10) |
                                                                           (byte)((ulong)uVar12 >>
                                                                                 0x10)),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) |
                                                  ~((byte)((ulong)uVar9 >> 8) |
                                                   (byte)((ulong)uVar12 >> 8)),
                                                  (byte)uVar7 | ~((byte)uVar9 | (byte)uVar12))))))))
      ;
      *param_2 = CONCAT17((byte)((ulong)uVar6 >> 0x38) |
                          ~((byte)((ulong)uVar8 >> 0x38) | (byte)((ulong)uVar10 >> 0x38)),
                          CONCAT16((byte)((ulong)uVar6 >> 0x30) |
                                   ~((byte)((ulong)uVar8 >> 0x30) | (byte)((ulong)uVar10 >> 0x30)),
                                   CONCAT15((byte)((ulong)uVar6 >> 0x28) |
                                            ~((byte)((ulong)uVar8 >> 0x28) |
                                             (byte)((ulong)uVar10 >> 0x28)),
                                            CONCAT14((byte)((ulong)uVar6 >> 0x20) |
                                                     ~((byte)((ulong)uVar8 >> 0x20) |
                                                      (byte)((ulong)uVar10 >> 0x20)),
                                                     CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                              ~((byte)((ulong)uVar8 >> 0x18) |
                                                               (byte)((ulong)uVar10 >> 0x18)),
                                                              CONCAT12((byte)((ulong)uVar6 >> 0x10)
                                                                       | ~((byte)((ulong)uVar8 >>
                                                                                 0x10) |
                                                                          (byte)((ulong)uVar10 >>
                                                                                0x10)),
                                                                       CONCAT11((byte)((ulong)uVar6
                                                                                      >> 8) |
                                                                                ~((byte)((ulong)
                                                  uVar8 >> 8) | (byte)((ulong)uVar10 >> 8)),
                                                  (byte)uVar6 | ~((byte)uVar8 | (byte)uVar10))))))))
      ;
      uVar9 = param_4[3];
      uVar8 = param_4[2];
      uVar7 = param_5[3];
      uVar6 = param_5[2];
      param_2[3] = CONCAT17((byte)((ulong)uVar13 >> 0x38) |
                            ~((byte)((ulong)uVar7 >> 0x38) | (byte)((ulong)uVar9 >> 0x38)),
                            CONCAT16((byte)((ulong)uVar13 >> 0x30) |
                                     ~((byte)((ulong)uVar7 >> 0x30) | (byte)((ulong)uVar9 >> 0x30)),
                                     CONCAT15((byte)((ulong)uVar13 >> 0x28) |
                                              ~((byte)((ulong)uVar7 >> 0x28) |
                                               (byte)((ulong)uVar9 >> 0x28)),
                                              CONCAT14((byte)((ulong)uVar13 >> 0x20) |
                                                       ~((byte)((ulong)uVar7 >> 0x20) |
                                                        (byte)((ulong)uVar9 >> 0x20)),
                                                       CONCAT13((byte)((ulong)uVar13 >> 0x18) |
                                                                ~((byte)((ulong)uVar7 >> 0x18) |
                                                                 (byte)((ulong)uVar9 >> 0x18)),
                                                                CONCAT12((byte)((ulong)uVar13 >>
                                                                               0x10) |
                                                                         ~((byte)((ulong)uVar7 >>
                                                                                 0x10) |
                                                                          (byte)((ulong)uVar9 >>
                                                                                0x10)),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar13 >> 8) |
                                                  ~((byte)((ulong)uVar7 >> 8) |
                                                   (byte)((ulong)uVar9 >> 8)),
                                                  (byte)uVar13 | ~((byte)uVar7 | (byte)uVar9))))))))
      ;
      param_2[2] = CONCAT17((byte)((ulong)uVar11 >> 0x38) |
                            ~((byte)((ulong)uVar6 >> 0x38) | (byte)((ulong)uVar8 >> 0x38)),
                            CONCAT16((byte)((ulong)uVar11 >> 0x30) |
                                     ~((byte)((ulong)uVar6 >> 0x30) | (byte)((ulong)uVar8 >> 0x30)),
                                     CONCAT15((byte)((ulong)uVar11 >> 0x28) |
                                              ~((byte)((ulong)uVar6 >> 0x28) |
                                               (byte)((ulong)uVar8 >> 0x28)),
                                              CONCAT14((byte)((ulong)uVar11 >> 0x20) |
                                                       ~((byte)((ulong)uVar6 >> 0x20) |
                                                        (byte)((ulong)uVar8 >> 0x20)),
                                                       CONCAT13((byte)((ulong)uVar11 >> 0x18) |
                                                                ~((byte)((ulong)uVar6 >> 0x18) |
                                                                 (byte)((ulong)uVar8 >> 0x18)),
                                                                CONCAT12((byte)((ulong)uVar11 >>
                                                                               0x10) |
                                                                         ~((byte)((ulong)uVar6 >>
                                                                                 0x10) |
                                                                          (byte)((ulong)uVar8 >>
                                                                                0x10)),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar11 >> 8) |
                                                  ~((byte)((ulong)uVar6 >> 8) |
                                                   (byte)((ulong)uVar8 >> 8)),
                                                  (byte)uVar11 | ~((byte)uVar6 | (byte)uVar8))))))))
      ;
    }
  }
  uVar5 = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    if ((param_3 & 1) != 0) {
      lVar4 = uVar5 * 0x20;
      lVar2 = param_1 + lVar4;
      *(uint *)(param_1 + lVar4) =
           *(uint *)(param_1 + lVar4) | (*(uint *)param_4 | *(uint *)param_5) ^ 0xffffffff;
      *(uint *)(lVar2 + 4) =
           *(uint *)(lVar2 + 4) |
           (*(uint *)((long)param_4 + 4) | *(uint *)((long)param_5 + 4)) ^ 0xffffffff;
      *(uint *)(lVar2 + 8) =
           *(uint *)(lVar2 + 8) | (*(uint *)(param_4 + 1) | *(uint *)(param_5 + 1)) ^ 0xffffffff;
      *(uint *)(lVar2 + 0xc) =
           *(uint *)(lVar2 + 0xc) |
           (*(uint *)((long)param_4 + 0xc) | *(uint *)((long)param_5 + 0xc)) ^ 0xffffffff;
      *(uint *)(lVar2 + 0x10) =
           *(uint *)(lVar2 + 0x10) | (*(uint *)(param_4 + 2) | *(uint *)(param_5 + 2)) ^ 0xffffffff;
      *(uint *)(lVar2 + 0x14) =
           *(uint *)(lVar2 + 0x14) |
           (*(uint *)((long)param_4 + 0x14) | *(uint *)((long)param_5 + 0x14)) ^ 0xffffffff;
      *(uint *)(lVar2 + 0x18) =
           *(uint *)(lVar2 + 0x18) | (*(uint *)(param_4 + 3) | *(uint *)(param_5 + 3)) ^ 0xffffffff;
      *(uint *)(lVar2 + 0x1c) =
           *(uint *)(lVar2 + 0x1c) |
           (*(uint *)((long)param_4 + 0x1c) | *(uint *)((long)param_5 + 0x1c)) ^ 0xffffffff;
    }
    uVar5 = (ulong)((int)uVar5 + 1);
  }
  return;
}


