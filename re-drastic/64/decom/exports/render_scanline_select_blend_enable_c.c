/*
 * Ghidra decompilation
 *
 * Function : render_scanline_select_blend_enable_c
 * Address  : 00139660
 * Program  : drastic64
 */


void render_scanline_select_blend_enable_c
               (undefined8 *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 uVar17;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined8 uVar25;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar12 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar10 = 0;
  uVar9 = *(uint *)(param_1 + 1);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 3);
  uVar11 = *(uint *)((long)param_1 + 0x1c);
  uVar7 = 0;
  uVar6 = 0;
  puVar4 = param_2;
  do {
    uVar2 = -(param_4 & 1) & -(param_3 & 1);
    uVar3 = (param_4 & 1) - 1 & -(param_3 & 1);
    uVar12 = (uVar2 & *(uint *)puVar4 | uVar12) & (uVar3 & *(uint *)puVar4 ^ 0xffffffff);
    *(uint *)param_1 = uVar12;
    puVar1 = puVar4 + 4;
    param_4 = param_4 >> 1;
    uVar10 = (uVar2 & *(uint *)((long)puVar4 + 4) | uVar10) &
             (uVar3 & *(uint *)((long)puVar4 + 4) ^ 0xffffffff);
    *(uint *)((long)param_1 + 4) = uVar10;
    param_3 = param_3 >> 1;
    uVar9 = (uVar2 & *(uint *)(puVar4 + 1) | uVar9) & (uVar3 & *(uint *)(puVar4 + 1) ^ 0xffffffff);
    *(uint *)(param_1 + 1) = uVar9;
    uVar8 = (uVar2 & *(uint *)((long)puVar4 + 0xc) | uVar8) &
            (uVar3 & *(uint *)((long)puVar4 + 0xc) ^ 0xffffffff);
    *(uint *)((long)param_1 + 0xc) = uVar8;
    uVar7 = (uVar2 & *(uint *)(puVar4 + 2) | uVar7) & (uVar3 & *(uint *)(puVar4 + 2) ^ 0xffffffff);
    *(uint *)(param_1 + 2) = uVar7;
    uVar6 = (uVar2 & *(uint *)((long)puVar4 + 0x14) | uVar6) &
            (uVar3 & *(uint *)((long)puVar4 + 0x14) ^ 0xffffffff);
    *(uint *)((long)param_1 + 0x14) = uVar6;
    uVar5 = (uVar2 & *(uint *)(puVar4 + 3) | uVar5) & (uVar3 & *(uint *)(puVar4 + 3) ^ 0xffffffff);
    *(uint *)(param_1 + 3) = uVar5;
    uVar11 = (uVar2 & *(uint *)((long)puVar4 + 0x1c) | uVar11) &
             (uVar3 & *(uint *)((long)puVar4 + 0x1c) ^ 0xffffffff);
    *(uint *)((long)param_1 + 0x1c) = uVar11;
    puVar4 = puVar1;
  } while (puVar1 != param_2 + 0x14);
  uVar2 = -(param_4 & 1);
  uVar3 = (param_4 & 1) - 1;
  if (param_1 + 2 <= puVar1 || param_2 + 0x16 <= param_1) {
    uVar25 = param_2[0x15];
    uVar17 = param_2[0x14];
    bVar13 = (byte)uVar3;
    bVar14 = (byte)(uVar3 >> 8);
    bVar15 = (byte)(uVar3 >> 0x10);
    bVar16 = (byte)(uVar3 >> 0x18);
    uVar40 = param_1[1];
    uVar39 = *param_1;
    uVar38 = param_1[3];
    uVar37 = param_1[2];
    bVar33 = (byte)uVar2;
    bVar18 = (byte)((ulong)uVar17 >> 8);
    bVar34 = (byte)(uVar2 >> 8);
    bVar19 = (byte)((ulong)uVar17 >> 0x10);
    bVar35 = (byte)(uVar2 >> 0x10);
    bVar20 = (byte)((ulong)uVar17 >> 0x18);
    bVar36 = (byte)(uVar2 >> 0x18);
    bVar21 = (byte)((ulong)uVar17 >> 0x20);
    bVar22 = (byte)((ulong)uVar17 >> 0x28);
    bVar23 = (byte)((ulong)uVar17 >> 0x30);
    bVar24 = (byte)((ulong)uVar17 >> 0x38);
    bVar26 = (byte)((ulong)uVar25 >> 8);
    bVar27 = (byte)((ulong)uVar25 >> 0x10);
    bVar28 = (byte)((ulong)uVar25 >> 0x18);
    bVar29 = (byte)((ulong)uVar25 >> 0x20);
    bVar30 = (byte)((ulong)uVar25 >> 0x28);
    bVar31 = (byte)((ulong)uVar25 >> 0x30);
    bVar32 = (byte)((ulong)uVar25 >> 0x38);
    param_1[1] = CONCAT17((bVar36 & bVar32 | (byte)((ulong)uVar40 >> 0x38)) & ~(bVar16 & bVar32),
                          CONCAT16((bVar35 & bVar31 | (byte)((ulong)uVar40 >> 0x30)) &
                                   ~(bVar15 & bVar31),
                                   CONCAT15((bVar34 & bVar30 | (byte)((ulong)uVar40 >> 0x28)) &
                                            ~(bVar14 & bVar30),
                                            CONCAT14((bVar33 & bVar29 |
                                                     (byte)((ulong)uVar40 >> 0x20)) &
                                                     ~(bVar13 & bVar29),
                                                     CONCAT13((bVar36 & bVar28 |
                                                              (byte)((ulong)uVar40 >> 0x18)) &
                                                              ~(bVar16 & bVar28),
                                                              CONCAT12((bVar35 & bVar27 |
                                                                       (byte)((ulong)uVar40 >> 0x10)
                                                                       ) & ~(bVar15 & bVar27),
                                                                       CONCAT11((bVar34 & bVar26 |
                                                                                (byte)((ulong)uVar40
                                                                                      >> 8)) &
                                                                                ~(bVar14 & bVar26),
                                                                                (bVar33 & (byte)
                                                  uVar25 | (byte)uVar40) & ~(bVar13 & (byte)uVar25))
                                                  ))))));
    *param_1 = CONCAT17((bVar36 & bVar24 | (byte)((ulong)uVar39 >> 0x38)) & ~(bVar16 & bVar24),
                        CONCAT16((bVar35 & bVar23 | (byte)((ulong)uVar39 >> 0x30)) &
                                 ~(bVar15 & bVar23),
                                 CONCAT15((bVar34 & bVar22 | (byte)((ulong)uVar39 >> 0x28)) &
                                          ~(bVar14 & bVar22),
                                          CONCAT14((bVar33 & bVar21 | (byte)((ulong)uVar39 >> 0x20))
                                                   & ~(bVar13 & bVar21),
                                                   CONCAT13((bVar36 & bVar20 |
                                                            (byte)((ulong)uVar39 >> 0x18)) &
                                                            ~(bVar16 & bVar20),
                                                            CONCAT12((bVar35 & bVar19 |
                                                                     (byte)((ulong)uVar39 >> 0x10))
                                                                     & ~(bVar15 & bVar19),
                                                                     CONCAT11((bVar34 & bVar18 |
                                                                              (byte)((ulong)uVar39
                                                                                    >> 8)) &
                                                                              ~(bVar14 & bVar18),
                                                                              (bVar33 & (byte)uVar17
                                                                              | (byte)uVar39) &
                                                                              ~(bVar13 & (byte)
                                                  uVar17))))))));
    uVar25 = param_2[0x17];
    uVar17 = param_2[0x16];
    bVar18 = (byte)((ulong)uVar17 >> 8);
    bVar19 = (byte)((ulong)uVar17 >> 0x10);
    bVar20 = (byte)((ulong)uVar17 >> 0x18);
    bVar21 = (byte)((ulong)uVar17 >> 0x20);
    bVar22 = (byte)((ulong)uVar17 >> 0x28);
    bVar23 = (byte)((ulong)uVar17 >> 0x30);
    bVar24 = (byte)((ulong)uVar17 >> 0x38);
    bVar26 = (byte)((ulong)uVar25 >> 8);
    bVar27 = (byte)((ulong)uVar25 >> 0x10);
    bVar28 = (byte)((ulong)uVar25 >> 0x18);
    bVar29 = (byte)((ulong)uVar25 >> 0x20);
    bVar30 = (byte)((ulong)uVar25 >> 0x28);
    bVar31 = (byte)((ulong)uVar25 >> 0x30);
    bVar32 = (byte)((ulong)uVar25 >> 0x38);
    param_1[3] = CONCAT17(((byte)((ulong)uVar38 >> 0x38) | bVar36 & bVar32) & ~(bVar16 & bVar32),
                          CONCAT16(((byte)((ulong)uVar38 >> 0x30) | bVar35 & bVar31) &
                                   ~(bVar15 & bVar31),
                                   CONCAT15(((byte)((ulong)uVar38 >> 0x28) | bVar34 & bVar30) &
                                            ~(bVar14 & bVar30),
                                            CONCAT14(((byte)((ulong)uVar38 >> 0x20) |
                                                     bVar33 & bVar29) & ~(bVar13 & bVar29),
                                                     CONCAT13(((byte)((ulong)uVar38 >> 0x18) |
                                                              bVar36 & bVar28) & ~(bVar16 & bVar28),
                                                              CONCAT12(((byte)((ulong)uVar38 >> 0x10
                                                                              ) | bVar35 & bVar27) &
                                                                       ~(bVar15 & bVar27),
                                                                       CONCAT11(((byte)((ulong)
                                                  uVar38 >> 8) | bVar34 & bVar26) &
                                                  ~(bVar14 & bVar26),
                                                  ((byte)uVar38 | bVar33 & (byte)uVar25) &
                                                  ~(bVar13 & (byte)uVar25))))))));
    param_1[2] = CONCAT17(((byte)((ulong)uVar37 >> 0x38) | bVar36 & bVar24) & ~(bVar16 & bVar24),
                          CONCAT16(((byte)((ulong)uVar37 >> 0x30) | bVar35 & bVar23) &
                                   ~(bVar15 & bVar23),
                                   CONCAT15(((byte)((ulong)uVar37 >> 0x28) | bVar34 & bVar22) &
                                            ~(bVar14 & bVar22),
                                            CONCAT14(((byte)((ulong)uVar37 >> 0x20) |
                                                     bVar33 & bVar21) & ~(bVar13 & bVar21),
                                                     CONCAT13(((byte)((ulong)uVar37 >> 0x18) |
                                                              bVar36 & bVar20) & ~(bVar16 & bVar20),
                                                              CONCAT12(((byte)((ulong)uVar37 >> 0x10
                                                                              ) | bVar35 & bVar19) &
                                                                       ~(bVar15 & bVar19),
                                                                       CONCAT11(((byte)((ulong)
                                                  uVar37 >> 8) | bVar34 & bVar18) &
                                                  ~(bVar14 & bVar18),
                                                  ((byte)uVar37 | bVar33 & (byte)uVar17) &
                                                  ~(bVar13 & (byte)uVar17))))))));
    return;
  }
  *(uint *)param_1 =
       (uVar2 & *(uint *)(param_2 + 0x14) | uVar12) &
       (uVar3 & *(uint *)(param_2 + 0x14) ^ 0xffffffff);
  *(uint *)((long)param_1 + 4) =
       (uVar2 & *(uint *)((long)param_2 + 0xa4) | uVar10) &
       (uVar3 & *(uint *)((long)param_2 + 0xa4) ^ 0xffffffff);
  *(uint *)(param_1 + 1) =
       (uVar2 & *(uint *)(param_2 + 0x15) | uVar9) &
       (uVar3 & *(uint *)(param_2 + 0x15) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0xc) =
       (uVar2 & *(uint *)((long)param_2 + 0xac) | uVar8) &
       (uVar3 & *(uint *)((long)param_2 + 0xac) ^ 0xffffffff);
  *(uint *)(param_1 + 2) =
       (uVar2 & *(uint *)(param_2 + 0x16) | uVar7) &
       (uVar3 & *(uint *)(param_2 + 0x16) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0x14) =
       (uVar2 & *(uint *)((long)param_2 + 0xb4) | uVar6) &
       (uVar3 & *(uint *)((long)param_2 + 0xb4) ^ 0xffffffff);
  *(uint *)(param_1 + 3) =
       (uVar2 & *(uint *)(param_2 + 0x17) | uVar5) &
       (uVar3 & *(uint *)(param_2 + 0x17) ^ 0xffffffff);
  *(uint *)((long)param_1 + 0x1c) =
       (uVar2 & *(uint *)((long)param_2 + 0xbc) | uVar11) &
       (uVar3 & *(uint *)((long)param_2 + 0xbc) ^ 0xffffffff);
  return;
}


