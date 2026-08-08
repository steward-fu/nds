/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_full_16bpp_c
 * Address  : 00131dc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_set_visibility_full_16bpp_c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint5 uVar8;
  uint5 uVar9;
  uint7 uVar10;
  uint5 uVar12;
  uint3 uVar13;
  uint uVar14;
  uint uVar15;
  uint3 uVar16;
  uint uVar17;
  uint uVar18;
  uint3 uVar19;
  uint uVar20;
  uint uVar21;
  uint3 uVar22;
  uint uVar23;
  uint3 uVar24;
  uint uVar25;
  uint uVar26;
  uint3 uVar27;
  uint uVar28;
  uint uVar29;
  uint3 uVar30;
  uint uVar31;
  uint3 uVar32;
  uint uVar33;
  uint3 uVar34;
  uint3 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  byte bVar11;
  
  lVar5 = ___stack_chk_guard;
  puVar2 = param_1 + 0x40;
  if (param_1 < param_2 + 4 && param_2 < puVar2) {
    do {
      uVar14 = *(uint *)param_1;
      puVar3 = (uint *)((long)param_1 + 4);
      puVar1 = param_1 + 1;
      puVar4 = (uint *)((long)param_1 + 0xc);
      param_1 = param_1 + 2;
      uVar14 = *puVar4 >> 9 & 0x400040 | *(uint *)puVar1 >> 0xb & 0x100010 |
               *puVar3 >> 0xd & 0x40004 | uVar14 >> 0xf & 0x10001;
      *(byte *)param_2 = (byte)uVar14 | (byte)(uVar14 >> 0xf);
      param_2 = (undefined8 *)((long)param_2 + 1);
    } while (puVar2 != param_1);
  }
  else {
    uVar14 = *(uint *)param_1;
    uVar20 = *(uint *)((long)param_1 + 4);
    uVar25 = *(uint *)(param_1 + 1);
    uVar15 = *(uint *)(param_1 + 2);
    uVar21 = *(uint *)((long)param_1 + 0x14);
    uVar26 = *(uint *)(param_1 + 3);
    uVar31 = *(uint *)((long)param_1 + 0x1c);
    uVar17 = *(uint *)(param_1 + 4);
    uVar28 = *(uint *)(param_1 + 5);
    uVar18 = *(uint *)(param_1 + 6);
    uVar23 = *(uint *)((long)param_1 + 0x34);
    uVar29 = *(uint *)(param_1 + 7);
    uVar33 = *(uint *)((long)param_1 + 0x3c);
    uVar36 = *(uint *)(param_1 + 8);
    uVar40 = *(uint *)((long)param_1 + 0x44);
    uVar44 = *(uint *)(param_1 + 9);
    uVar37 = *(uint *)(param_1 + 10);
    uVar41 = *(uint *)((long)param_1 + 0x54);
    uVar45 = *(uint *)(param_1 + 0xb);
    uVar48 = *(uint *)((long)param_1 + 0x5c);
    uVar38 = *(uint *)(param_1 + 0xc);
    uVar42 = *(uint *)((long)param_1 + 100);
    uVar46 = *(uint *)(param_1 + 0xd);
    uVar39 = *(uint *)(param_1 + 0xe);
    uVar43 = *(uint *)((long)param_1 + 0x74);
    uVar47 = *(uint *)(param_1 + 0xf);
    uVar49 = *(uint *)((long)param_1 + 0x7c);
    uVar6 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x24) >> 0x1d),
                     (ushort)((byte)(*(uint *)((long)param_1 + 0x24) >> 0xd) & 4)) & 0x4ffff;
    uVar12 = CONCAT14((char)(uVar39 >> 0xf),(uVar38 >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar9 = CONCAT14((char)(*(uint *)(param_1 + 0x16) >> 0xf),
                     (*(uint *)(param_1 + 0x14) >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar8 = CONCAT14((char)(*(uint *)(param_1 + 0x1e) >> 0xf),
                     (*(uint *)(param_1 + 0x1c) >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar34 = CONCAT12((byte)(*(uint *)(param_1 + 0x11) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x11) >> 0xb) & 0x10)) & 0x10ffff;
    uVar35 = CONCAT12((byte)(*(uint *)(param_1 + 0x15) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x15) >> 0xb) & 0x10)) & 0x10ffff;
    uVar30 = CONCAT12((byte)(*(uint *)(param_1 + 0x19) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x19) >> 0xb) & 0x10)) & 0x10ffff;
    uVar32 = CONCAT12((byte)(*(uint *)(param_1 + 0x1d) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x1d) >> 0xb) & 0x10)) & 0x10ffff;
    uVar24 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x4c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x4c) >> 9) & 0x40)) & 0x40ffff;
    uVar27 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x6c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x6c) >> 9) & 0x40)) & 0x40ffff;
    uVar19 = CONCAT12((byte)(*(uint *)((long)param_1 + 0xc) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0xc) >> 9) & 0x40)) & 0x40ffff;
    uVar22 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x2c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x2c) >> 9) & 0x40)) & 0x40ffff;
    uVar13 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x8c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x8c) >> 9) & 0x40)) & 0x40ffff;
    uVar16 = CONCAT12((byte)(*(uint *)((long)param_1 + 0xac) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0xac) >> 9) & 0x40)) & 0x40ffff;
    uVar7 = CONCAT12((byte)(*(uint *)((long)param_1 + 0xec) >> 0x19),
                     (ushort)((byte)(*(uint *)((long)param_1 + 0xec) >> 9) & 0x40)) & 0x40ffff;
    bVar11 = (byte)(uVar8 >> 0x20) | (byte)(*(uint *)((long)param_1 + 0xf4) >> 0xd) & 4 |
             (byte)(*(uint *)(param_1 + 0x1f) >> 0xb) & 0x10 |
             (byte)(*(uint *)((long)param_1 + 0xfc) >> 9) & 0x40;
    uVar10 = CONCAT16((byte)(*(uint *)(param_1 + 0x1e) >> 0x1f) |
                      (byte)(*(uint *)((long)param_1 + 0xf4) >> 0x1d) & 4 |
                      (byte)(*(uint *)(param_1 + 0x1f) >> 0x1b) & 0x10 |
                      (byte)(*(uint *)((long)param_1 + 0xfc) >> 0x19) & 0x40,
                      (uint6)CONCAT14(bVar11,(uint)(byte)((byte)(uVar8 >> 0x10) |
                                                          (byte)(*(uint *)((long)param_1 + 0xe4) >>
                                                                0x1d) & 4 | (byte)(uVar32 >> 0x10) |
                                                         (byte)(uVar7 >> 0x10)) << 0x10));
    param_2[1] = CONCAT17((byte)(uint3)(uVar10 >> 0x2f) | bVar11,
                          CONCAT16((byte)(((ulong)uVar10 & 0xffff8000) >> 0xf) |
                                   (byte)(*(uint *)(param_1 + 0x1c) >> 0xf) & 1 |
                                   (byte)(*(uint *)((long)param_1 + 0xe4) >> 0xd) & 4 | (byte)uVar32
                                   | (byte)uVar7,
                                   CONCAT15((byte)((uint3)((uint3)(byte)((byte)(*(uint *)(param_1 +
                                                                                         0x1a) >>
                                                                               0x1f) |
                                                                         (byte)(*(uint *)((long)
                                                  param_1 + 0xd4) >> 0x1d) & 4 |
                                                  (byte)(*(uint *)(param_1 + 0x1b) >> 0x1b) & 0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0xdc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                            (byte)(*(uint *)(param_1 + 0x1a) >> 0xf) & 1 |
                                            (byte)(*(uint *)((long)param_1 + 0xd4) >> 0xd) & 4 |
                                            (byte)(*(uint *)(param_1 + 0x1b) >> 0xb) & 0x10 |
                                            (byte)(*(uint *)((long)param_1 + 0xdc) >> 9) & 0x40,
                                            CONCAT14((byte)((uint3)((uint3)(byte)((byte)(*(uint *)(
                                                  param_1 + 0x18) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0xc4) >> 0x1d) &
                                                  4 | (byte)(uVar30 >> 0x10) |
                                                  (byte)(*(uint *)((long)param_1 + 0xcc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x18) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0xc4) >> 0xd) & 4
                                                  | (byte)uVar30 |
                                                  (byte)(*(uint *)((long)param_1 + 0xcc) >> 9) &
                                                  0x40,CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  *(uint *)(param_1 + 0x16) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0xb4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x17) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0xbc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar9 >> 0x20) |
                                                  (byte)(*(uint *)((long)param_1 + 0xb4) >> 0xd) & 4
                                                  | (byte)(*(uint *)(param_1 + 0x17) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)param_1 + 0xbc) >> 9) &
                                                    0x40,CONCAT12((byte)((uint3)((uint3)(byte)((byte
                                                  )(uVar9 >> 0x10) |
                                                  (byte)(*(uint *)((long)param_1 + 0xa4) >> 0x1d) &
                                                  4 | (byte)(uVar35 >> 0x10) |
                                                  (byte)(uVar16 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x14) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0xa4) >> 0xd) & 4
                                                  | (byte)uVar35 | (byte)uVar16,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(*(uint *)(param_1 + 0x12) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x94) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x13) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x9c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x12) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x94) >> 0xd) & 4
                                                  | (byte)(*(uint *)(param_1 + 0x13) >> 0xb) & 0x10
                                                  | (byte)(*(uint *)((long)param_1 + 0x9c) >> 9) &
                                                    0x40,(byte)((uint3)((uint3)(byte)((byte)(*(uint 
                                                  *)(param_1 + 0x10) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x84) >> 0x1d) &
                                                  4 | (byte)(uVar34 >> 0x10) |
                                                  (byte)(uVar13 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x10) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x84) >> 0xd) & 4
                                                  | (byte)uVar34 | (byte)uVar13)))))));
    *param_2 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar39 >> 0x1f) |
                                                     (byte)(uVar43 >> 0x1d) & 4 |
                                                     (byte)(uVar47 >> 0x1b) & 0x10 |
                                                    (byte)(uVar49 >> 0x19) & 0x40) << 0x30) >> 0x2f)
                        | (byte)(uVar12 >> 0x20) | (byte)(uVar43 >> 0xd) & 4 |
                          (byte)(uVar47 >> 0xb) & 0x10 | (byte)(uVar49 >> 9) & 0x40,
                        CONCAT16((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar12 >> 0x10) |
                                                                      (byte)(uVar42 >> 0x1d) & 4 |
                                                                      (byte)(uVar46 >> 0x1b) & 0x10
                                                                     | (byte)(uVar27 >> 0x10)) <<
                                                       0x10) >> 0xf) |
                                 (byte)(uVar38 >> 0xf) & 1 | (byte)(uVar42 >> 0xd) & 4 |
                                 (byte)(uVar46 >> 0xb) & 0x10 | (byte)uVar27,
                                 CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar37 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar41 >> 0x1d) & 4 |
                                                  (byte)(uVar45 >> 0x1b) & 0x10 |
                                                  (byte)(uVar48 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                          (byte)(uVar37 >> 0xf) & 1 | (byte)(uVar41 >> 0xd) & 4 |
                                          (byte)(uVar45 >> 0xb) & 0x10 | (byte)(uVar48 >> 9) & 0x40,
                                          CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar36 >> 0x1f) | (byte)(uVar40 >> 0x1d) & 4 |
                                                  (byte)(uVar44 >> 0x1b) & 0x10 |
                                                  (byte)(uVar24 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar36 >> 0xf) & 1 |
                                                  (byte)(uVar40 >> 0xd) & 4 |
                                                  (byte)(uVar44 >> 0xb) & 0x10 | (byte)uVar24,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar18 >> 0x1f) | (byte)(uVar23 >> 0x1d) & 4 |
                                                  (byte)(uVar29 >> 0x1b) & 0x10 |
                                                  (byte)(uVar33 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar18 >> 0xf) & 1 |
                                                  (byte)(uVar23 >> 0xd) & 4 |
                                                  (byte)(uVar29 >> 0xb) & 0x10 |
                                                  (byte)(uVar33 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar17 >> 0x1f) | (byte)(uVar6 >> 0x10) |
                                                  (byte)(uVar28 >> 0x1b) & 0x10 |
                                                  (byte)(uVar22 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar17 >> 0xf) & 1 | (byte)uVar6 |
                                                  (byte)(uVar28 >> 0xb) & 0x10 | (byte)uVar22,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar15 >> 0x1f) | (byte)(uVar21 >> 0x1d) & 4
                                                  | (byte)(uVar26 >> 0x1b) & 0x10 |
                                                  (byte)(uVar31 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar15 >> 0xf) & 1 |
                                                  (byte)(uVar21 >> 0xd) & 4 |
                                                  (byte)(uVar26 >> 0xb) & 0x10 |
                                                  (byte)(uVar31 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar14 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar20 >> 0x1d) & 4 |
                                                  (byte)(uVar25 >> 0x1b) & 0x10 |
                                                  (byte)(uVar19 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar14 >> 0xf) & 1 |
                                                  (byte)(uVar20 >> 0xd) & 4 |
                                                  (byte)(uVar25 >> 0xb) & 0x10 | (byte)uVar19)))))))
    ;
    uVar14 = *(uint *)(param_1 + 0x20);
    uVar20 = *(uint *)((long)param_1 + 0x104);
    uVar25 = *(uint *)(param_1 + 0x21);
    uVar15 = *(uint *)(param_1 + 0x22);
    uVar21 = *(uint *)((long)param_1 + 0x114);
    uVar26 = *(uint *)(param_1 + 0x23);
    uVar31 = *(uint *)((long)param_1 + 0x11c);
    uVar17 = *(uint *)(param_1 + 0x24);
    uVar28 = *(uint *)(param_1 + 0x25);
    uVar18 = *(uint *)(param_1 + 0x26);
    uVar23 = *(uint *)((long)param_1 + 0x134);
    uVar29 = *(uint *)(param_1 + 0x27);
    uVar33 = *(uint *)((long)param_1 + 0x13c);
    uVar36 = *(uint *)(param_1 + 0x28);
    uVar40 = *(uint *)((long)param_1 + 0x144);
    uVar37 = *(uint *)(param_1 + 0x2a);
    uVar41 = *(uint *)((long)param_1 + 0x154);
    uVar44 = *(uint *)(param_1 + 0x2b);
    uVar46 = *(uint *)((long)param_1 + 0x15c);
    uVar38 = *(uint *)(param_1 + 0x2c);
    uVar42 = *(uint *)((long)param_1 + 0x164);
    uVar39 = *(uint *)(param_1 + 0x2e);
    uVar43 = *(uint *)((long)param_1 + 0x174);
    uVar45 = *(uint *)(param_1 + 0x2f);
    uVar47 = *(uint *)((long)param_1 + 0x17c);
    uVar6 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x124) >> 0x1d),
                     (ushort)((byte)(*(uint *)((long)param_1 + 0x124) >> 0xd) & 4)) & 0x4ffff;
    uVar9 = CONCAT14((char)(*(uint *)(param_1 + 0x36) >> 0xf),
                     (*(uint *)(param_1 + 0x34) >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar8 = CONCAT14((char)(*(uint *)(param_1 + 0x3e) >> 0xf),
                     (*(uint *)(param_1 + 0x3c) >> 0x1f) << 0x10) & 0x1ffffffff;
    uVar27 = CONCAT12((byte)(*(uint *)(param_1 + 0x29) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x29) >> 0xb) & 0x10)) & 0x10ffff;
    uVar30 = CONCAT12((byte)(*(uint *)(param_1 + 0x2d) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x2d) >> 0xb) & 0x10)) & 0x10ffff;
    uVar22 = CONCAT12((byte)(*(uint *)(param_1 + 0x31) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x31) >> 0xb) & 0x10)) & 0x10ffff;
    uVar24 = CONCAT12((byte)(*(uint *)(param_1 + 0x35) >> 0x1b),
                      (ushort)((byte)(*(uint *)(param_1 + 0x35) >> 0xb) & 0x10)) & 0x10ffff;
    uVar16 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x10c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x10c) >> 9) & 0x40)) & 0x40ffff;
    uVar19 = CONCAT12((byte)(*(uint *)((long)param_1 + 300) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 300) >> 9) & 0x40)) & 0x40ffff;
    uVar7 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x14c) >> 0x19),
                     (ushort)((byte)(*(uint *)((long)param_1 + 0x14c) >> 9) & 0x40)) & 0x40ffff;
    uVar13 = CONCAT12((byte)(*(uint *)((long)param_1 + 0x16c) >> 0x19),
                      (ushort)((byte)(*(uint *)((long)param_1 + 0x16c) >> 9) & 0x40)) & 0x40ffff;
    param_2[3] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(*(uint *)(param_1 + 0x3e) >> 0x1f) |
                                                       (byte)(*(uint *)((long)param_1 + 500) >> 0x1d
                                                             ) & 4 |
                                                       (byte)(*(uint *)(param_1 + 0x3f) >> 0x1b) &
                                                       0x10 | (byte)(*(uint *)((long)param_1 + 0x1fc
                                                                              ) >> 0x19) & 0x40) <<
                                        0x30) >> 0x2f) |
                          (byte)(uVar8 >> 0x20) | (byte)(*(uint *)((long)param_1 + 500) >> 0xd) & 4
                          | (byte)(*(uint *)(param_1 + 0x3f) >> 0xb) & 0x10 |
                          (byte)(*(uint *)((long)param_1 + 0x1fc) >> 9) & 0x40,
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar8 >> 0x10) |
                                                                (byte)(*(uint *)((long)param_1 +
                                                                                0x1e4) >> 0x1d) & 4
                                                                | (byte)(*(uint *)(param_1 + 0x3d)
                                                                        >> 0x1b) & 0x10 |
                                                               (byte)(*(uint *)((long)param_1 +
                                                                               0x1ec) >> 0x19) &
                                                               0x40) << 0x10) >> 0xf) |
                                   (byte)(*(uint *)(param_1 + 0x3c) >> 0xf) & 1 |
                                   (byte)(*(uint *)((long)param_1 + 0x1e4) >> 0xd) & 4 |
                                   (byte)(*(uint *)(param_1 + 0x3d) >> 0xb) & 0x10 |
                                   (byte)(*(uint *)((long)param_1 + 0x1ec) >> 9) & 0x40,
                                   CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(uint *)(
                                                  param_1 + 0x3a) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1d4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x3b) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1dc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                            (byte)(*(uint *)(param_1 + 0x3a) >> 0xf) & 1 |
                                            (byte)(*(uint *)((long)param_1 + 0x1d4) >> 0xd) & 4 |
                                            (byte)(*(uint *)(param_1 + 0x3b) >> 0xb) & 0x10 |
                                            (byte)(*(uint *)((long)param_1 + 0x1dc) >> 9) & 0x40,
                                            CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(*(
                                                  uint *)(param_1 + 0x38) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1c4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x39) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1cc) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x38) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1c4) >> 0xd) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x39) >> 0xb) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1cc) >> 9) &
                                                  0x40,CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  *(uint *)(param_1 + 0x36) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1b4) >> 0x1d) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x37) >> 0x1b) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1bc) >> 0x19) &
                                                  0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar9 >> 0x20) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1b4) >> 0xd) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x37) >> 0xb) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1bc) >> 9) &
                                                  0x40,CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar9 >> 0x10) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1a4) >> 0x1d) &
                                                  4 | (byte)(uVar24 >> 0x10) |
                                                  (byte)(*(uint *)((long)param_1 + 0x1ac) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x34) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1a4) >> 0xd) &
                                                  4 | (byte)uVar24 |
                                                  (byte)(*(uint *)((long)param_1 + 0x1ac) >> 9) &
                                                  0x40,CONCAT11((byte)(ushort)((uint3)((uint3)(byte)
                                                  ((byte)(*(uint *)(param_1 + 0x32) >> 0x1f) |
                                                   (byte)(*(uint *)((long)param_1 + 0x194) >> 0x1d)
                                                   & 4 | (byte)(*(uint *)(param_1 + 0x33) >> 0x1b) &
                                                         0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x19c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x32) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x194) >> 0xd) &
                                                  4 | (byte)(*(uint *)(param_1 + 0x33) >> 0xb) &
                                                      0x10 |
                                                  (byte)(*(uint *)((long)param_1 + 0x19c) >> 9) &
                                                  0x40,(byte)((uint3)((uint3)(byte)((byte)(*(uint *)
                                                  (param_1 + 0x30) >> 0x1f) |
                                                  (byte)(*(uint *)((long)param_1 + 0x184) >> 0x1d) &
                                                  4 | (byte)(uVar22 >> 0x10) |
                                                  (byte)(*(uint *)((long)param_1 + 0x18c) >> 0x19) &
                                                  0x40) << 0x10) >> 0xf) |
                                                  (byte)(*(uint *)(param_1 + 0x30) >> 0xf) & 1 |
                                                  (byte)(*(uint *)((long)param_1 + 0x184) >> 0xd) &
                                                  4 | (byte)uVar22 |
                                                  (byte)(*(uint *)((long)param_1 + 0x18c) >> 9) &
                                                  0x40)))))));
    param_2[2] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar39 >> 0x1f) |
                                                       (byte)(uVar43 >> 0x1d) & 4 |
                                                       (byte)(uVar45 >> 0x1b) & 0x10 |
                                                      (byte)(uVar47 >> 0x19) & 0x40) << 0x30) >>
                                       0x2f) |
                          (byte)(uVar39 >> 0xf) & 1 | (byte)(uVar43 >> 0xd) & 4 |
                          (byte)(uVar45 >> 0xb) & 0x10 | (byte)(uVar47 >> 9) & 0x40,
                          CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar38 >> 0x1f) |
                                                                (byte)(uVar42 >> 0x1d) & 4 |
                                                                (byte)(uVar30 >> 0x10) |
                                                               (byte)(uVar13 >> 0x10)) << 0x10) >>
                                         0xf) |
                                   (byte)(uVar38 >> 0xf) & 1 | (byte)(uVar42 >> 0xd) & 4 |
                                   (byte)uVar30 | (byte)uVar13,
                                   CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar37 >>
                                                                                       0x1f) |
                                                                                 (byte)(uVar41 >>
                                                                                       0x1d) & 4 |
                                                                                 (byte)(uVar44 >>
                                                                                       0x1b) & 0x10
                                                                                | (byte)(uVar46 >>
                                                                                        0x19) & 0x40
                                                                                ) << 0x10) >> 0xf) |
                                            (byte)(uVar37 >> 0xf) & 1 | (byte)(uVar41 >> 0xd) & 4 |
                                            (byte)(uVar44 >> 0xb) & 0x10 |
                                            (byte)(uVar46 >> 9) & 0x40,
                                            CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar36 >> 0x1f) | (byte)(uVar40 >> 0x1d) & 4 |
                                                  (byte)(uVar27 >> 0x10) | (byte)(uVar7 >> 0x10)) <<
                                                  0x10) >> 0xf) |
                                                  (byte)(uVar36 >> 0xf) & 1 |
                                                  (byte)(uVar40 >> 0xd) & 4 | (byte)uVar27 |
                                                  (byte)uVar7,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar18 >> 0x1f) | (byte)(uVar23 >> 0x1d) & 4 |
                                                  (byte)(uVar29 >> 0x1b) & 0x10 |
                                                  (byte)(uVar33 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar18 >> 0xf) & 1 |
                                                  (byte)(uVar23 >> 0xd) & 4 |
                                                  (byte)(uVar29 >> 0xb) & 0x10 |
                                                  (byte)(uVar33 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar17 >> 0x1f) | (byte)(uVar6 >> 0x10) |
                                                  (byte)(uVar28 >> 0x1b) & 0x10 |
                                                  (byte)(uVar19 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar17 >> 0xf) & 1 | (byte)uVar6 |
                                                  (byte)(uVar28 >> 0xb) & 0x10 | (byte)uVar19,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar15 >> 0x1f) | (byte)(uVar21 >> 0x1d) & 4
                                                  | (byte)(uVar26 >> 0x1b) & 0x10 |
                                                  (byte)(uVar31 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar15 >> 0xf) & 1 |
                                                  (byte)(uVar21 >> 0xd) & 4 |
                                                  (byte)(uVar26 >> 0xb) & 0x10 |
                                                  (byte)(uVar31 >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar14 >> 0x1f
                                                                                     ) | (byte)(
                                                  uVar20 >> 0x1d) & 4 |
                                                  (byte)(uVar25 >> 0x1b) & 0x10 |
                                                  (byte)(uVar16 >> 0x10)) << 0x10) >> 0xf) |
                                                  (byte)(uVar14 >> 0xf) & 1 |
                                                  (byte)(uVar20 >> 0xd) & 4 |
                                                  (byte)(uVar25 >> 0xb) & 0x10 | (byte)uVar16)))))))
    ;
  }
  if (lVar5 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5 - ___stack_chk_guard,0);
}


