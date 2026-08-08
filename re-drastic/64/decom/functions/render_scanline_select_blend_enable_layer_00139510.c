/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_blend_enable_layer
 * Address  : 00139510
 * Program  : drastic64
 */


void render_scanline_select_blend_enable_layer
               (undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar3;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar1 = (param_3 & 1) - 1 & -param_4;
  uVar2 = -(param_3 & 1) & -param_4;
  if (0x1e < (ulong)((long)param_2 + (0xf - (long)param_1))) {
    uVar24 = param_2[1];
    uVar23 = *param_2;
    uVar11 = param_1[1];
    uVar3 = *param_1;
    uVar30 = param_1[3];
    uVar29 = param_1[2];
    bVar19 = (byte)uVar2;
    bVar20 = (byte)(uVar2 >> 8);
    bVar4 = (byte)((ulong)uVar23 >> 8);
    bVar21 = (byte)(uVar2 >> 0x10);
    bVar5 = (byte)((ulong)uVar23 >> 0x10);
    bVar22 = (byte)(uVar2 >> 0x18);
    bVar6 = (byte)((ulong)uVar23 >> 0x18);
    bVar7 = (byte)((ulong)uVar23 >> 0x20);
    bVar8 = (byte)((ulong)uVar23 >> 0x28);
    bVar9 = (byte)((ulong)uVar23 >> 0x30);
    bVar10 = (byte)((ulong)uVar23 >> 0x38);
    bVar12 = (byte)((ulong)uVar24 >> 8);
    bVar13 = (byte)((ulong)uVar24 >> 0x10);
    bVar14 = (byte)((ulong)uVar24 >> 0x18);
    bVar15 = (byte)((ulong)uVar24 >> 0x20);
    bVar16 = (byte)((ulong)uVar24 >> 0x28);
    bVar17 = (byte)((ulong)uVar24 >> 0x30);
    bVar18 = (byte)((ulong)uVar24 >> 0x38);
    bVar25 = (byte)uVar1;
    bVar26 = (byte)(uVar1 >> 8);
    bVar27 = (byte)(uVar1 >> 0x10);
    bVar28 = (byte)(uVar1 >> 0x18);
    param_1[1] = CONCAT17((bVar22 & bVar18 | (byte)((ulong)uVar11 >> 0x38)) & ~(bVar28 & bVar18),
                          CONCAT16((bVar21 & bVar17 | (byte)((ulong)uVar11 >> 0x30)) &
                                   ~(bVar27 & bVar17),
                                   CONCAT15((bVar20 & bVar16 | (byte)((ulong)uVar11 >> 0x28)) &
                                            ~(bVar26 & bVar16),
                                            CONCAT14((bVar19 & bVar15 |
                                                     (byte)((ulong)uVar11 >> 0x20)) &
                                                     ~(bVar25 & bVar15),
                                                     CONCAT13((bVar22 & bVar14 |
                                                              (byte)((ulong)uVar11 >> 0x18)) &
                                                              ~(bVar28 & bVar14),
                                                              CONCAT12((bVar21 & bVar13 |
                                                                       (byte)((ulong)uVar11 >> 0x10)
                                                                       ) & ~(bVar27 & bVar13),
                                                                       CONCAT11((bVar20 & bVar12 |
                                                                                (byte)((ulong)uVar11
                                                                                      >> 8)) &
                                                                                ~(bVar26 & bVar12),
                                                                                (bVar19 & (byte)
                                                  uVar24 | (byte)uVar11) & ~(bVar25 & (byte)uVar24))
                                                  ))))));
    *param_1 = CONCAT17((bVar22 & bVar10 | (byte)((ulong)uVar3 >> 0x38)) & ~(bVar28 & bVar10),
                        CONCAT16((bVar21 & bVar9 | (byte)((ulong)uVar3 >> 0x30)) & ~(bVar27 & bVar9)
                                 ,CONCAT15((bVar20 & bVar8 | (byte)((ulong)uVar3 >> 0x28)) &
                                           ~(bVar26 & bVar8),
                                           CONCAT14((bVar19 & bVar7 | (byte)((ulong)uVar3 >> 0x20))
                                                    & ~(bVar25 & bVar7),
                                                    CONCAT13((bVar22 & bVar6 |
                                                             (byte)((ulong)uVar3 >> 0x18)) &
                                                             ~(bVar28 & bVar6),
                                                             CONCAT12((bVar21 & bVar5 |
                                                                      (byte)((ulong)uVar3 >> 0x10))
                                                                      & ~(bVar27 & bVar5),
                                                                      CONCAT11((bVar20 & bVar4 |
                                                                               (byte)((ulong)uVar3
                                                                                     >> 8)) &
                                                                               ~(bVar26 & bVar4),
                                                                               (bVar19 & (byte)
                                                  uVar23 | (byte)uVar3) & ~(bVar25 & (byte)uVar23)))
                                                  )))));
    uVar11 = param_2[3];
    uVar3 = param_2[2];
    bVar4 = (byte)((ulong)uVar3 >> 8);
    bVar5 = (byte)((ulong)uVar3 >> 0x10);
    bVar6 = (byte)((ulong)uVar3 >> 0x18);
    bVar7 = (byte)((ulong)uVar3 >> 0x20);
    bVar8 = (byte)((ulong)uVar3 >> 0x28);
    bVar9 = (byte)((ulong)uVar3 >> 0x30);
    bVar10 = (byte)((ulong)uVar3 >> 0x38);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    param_1[3] = CONCAT17((bVar18 & bVar22 | (byte)((ulong)uVar30 >> 0x38)) & ~(bVar18 & bVar28),
                          CONCAT16((bVar17 & bVar21 | (byte)((ulong)uVar30 >> 0x30)) &
                                   ~(bVar17 & bVar27),
                                   CONCAT15((bVar16 & bVar20 | (byte)((ulong)uVar30 >> 0x28)) &
                                            ~(bVar16 & bVar26),
                                            CONCAT14((bVar15 & bVar19 |
                                                     (byte)((ulong)uVar30 >> 0x20)) &
                                                     ~(bVar15 & bVar25),
                                                     CONCAT13((bVar14 & bVar22 |
                                                              (byte)((ulong)uVar30 >> 0x18)) &
                                                              ~(bVar14 & bVar28),
                                                              CONCAT12((bVar13 & bVar21 |
                                                                       (byte)((ulong)uVar30 >> 0x10)
                                                                       ) & ~(bVar13 & bVar27),
                                                                       CONCAT11((bVar12 & bVar20 |
                                                                                (byte)((ulong)uVar30
                                                                                      >> 8)) &
                                                                                ~(bVar12 & bVar26),
                                                                                ((byte)uVar11 &
                                                                                 bVar19 | (byte)
                                                  uVar30) & ~((byte)uVar11 & bVar25))))))));
    param_1[2] = CONCAT17((bVar10 & bVar22 | (byte)((ulong)uVar29 >> 0x38)) & ~(bVar10 & bVar28),
                          CONCAT16((bVar9 & bVar21 | (byte)((ulong)uVar29 >> 0x30)) &
                                   ~(bVar9 & bVar27),
                                   CONCAT15((bVar8 & bVar20 | (byte)((ulong)uVar29 >> 0x28)) &
                                            ~(bVar8 & bVar26),
                                            CONCAT14((bVar7 & bVar19 | (byte)((ulong)uVar29 >> 0x20)
                                                     ) & ~(bVar7 & bVar25),
                                                     CONCAT13((bVar6 & bVar22 |
                                                              (byte)((ulong)uVar29 >> 0x18)) &
                                                              ~(bVar6 & bVar28),
                                                              CONCAT12((bVar5 & bVar21 |
                                                                       (byte)((ulong)uVar29 >> 0x10)
                                                                       ) & ~(bVar5 & bVar27),
                                                                       CONCAT11((bVar4 & bVar20 |
                                                                                (byte)((ulong)uVar29
                                                                                      >> 8)) &
                                                                                ~(bVar4 & bVar26),
                                                                                ((byte)uVar3 &
                                                                                 bVar19 | (byte)
                                                  uVar29) & ~((byte)uVar3 & bVar25))))))));
    return;
  }
  *(uint *)param_1 =
       (uVar2 & *(uint *)param_2 | *(uint *)param_1) & (uVar1 & *(uint *)param_2 ^ 0xffffffff);
  *(uint *)((long)param_1 + 4) =
       (uVar2 & *(uint *)((long)param_2 + 4) | *(uint *)((long)param_1 + 4)) &
       (uVar1 & *(uint *)((long)param_2 + 4) ^ 0xffffffff);
  *(uint *)(param_1 + 1) =
       (uVar2 & *(uint *)(param_2 + 1) | *(uint *)(param_1 + 1)) &
       (uVar1 & *(uint *)(param_2 + 1) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0xc) =
       (uVar2 & *(uint *)((long)param_2 + 0xc) | *(uint *)((long)param_1 + 0xc)) &
       (uVar1 & *(uint *)((long)param_2 + 0xc) ^ 0xffffffff);
  *(uint *)(param_1 + 2) =
       (uVar2 & *(uint *)(param_2 + 2) | *(uint *)(param_1 + 2)) &
       (uVar1 & *(uint *)(param_2 + 2) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0x14) =
       (uVar2 & *(uint *)((long)param_2 + 0x14) | *(uint *)((long)param_1 + 0x14)) &
       (uVar1 & *(uint *)((long)param_2 + 0x14) ^ 0xffffffff);
  *(uint *)(param_1 + 3) =
       (uVar2 & *(uint *)(param_2 + 3) | *(uint *)(param_1 + 3)) &
       (uVar1 & *(uint *)(param_2 + 3) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0x1c) =
       (uVar2 & *(uint *)((long)param_2 + 0x1c) | *(uint *)((long)param_1 + 0x1c)) &
       (uVar1 & *(uint *)((long)param_2 + 0x1c) ^ 0xffffffff);
  return;
}


