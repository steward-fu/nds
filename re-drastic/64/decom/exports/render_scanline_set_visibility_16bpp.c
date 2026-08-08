/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_16bpp
 * Address  : 00131b00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_set_visibility_16bpp(uint *param_1,long param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint5 uVar13;
  uint5 uVar14;
  uint5 uVar15;
  uint5 uVar16;
  uint5 uVar17;
  uint3 uVar18;
  uint3 uVar19;
  uint5 uVar20;
  uint5 uVar21;
  uint3 uVar22;
  uint3 uVar23;
  uint5 uVar24;
  uint5 uVar25;
  uint3 uVar26;
  uint3 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
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
  uint uVar50;
  uint uVar51;
  uint uVar52;
  
  lVar5 = ___stack_chk_guard;
  uVar6 = (uint)(param_4 >> 3) & 0x1fffffff;
  if (param_3 >> 3 <= uVar6) {
    param_3 = param_3 >> 3;
    uVar7 = (ulong)((uVar6 + 1) - param_3);
    uVar12 = (ulong)param_3;
    puVar8 = (undefined8 *)(param_2 + uVar12);
    bVar4 = param_1 < (uint *)(param_2 + uVar7 + uVar12);
    uVar3 = (uVar6 + 1) - param_3;
    if ((puVar8 < param_1 + uVar7 * 4 && bVar4 || uVar6 - param_3 < 0xe) ||
        (puVar8 >= param_1 + uVar7 * 4 || !bVar4) && uVar6 - param_3 == 0xe) {
      do {
        uVar3 = *param_1;
        puVar1 = param_1 + 1;
        puVar9 = param_1 + 2;
        puVar2 = param_1 + 3;
        param_1 = param_1 + 4;
        uVar3 = *puVar9 >> 0xb & 0x100010 | *puVar2 >> 9 & 0x400040 |
                *puVar1 >> 0xd & 0x40004 | uVar3 >> 0xf & 0x10001;
        *(byte *)(param_2 + uVar12) = (byte)uVar3 | (byte)(uVar3 >> 0xf);
        uVar12 = uVar12 + 1;
      } while ((uint)uVar12 <= uVar6);
    }
    else {
      puVar9 = param_1;
      do {
        uVar28 = *puVar9;
        uVar33 = puVar9[2];
        uVar37 = puVar9[3];
        uVar29 = puVar9[4];
        uVar31 = puVar9[5];
        uVar34 = puVar9[6];
        uVar38 = puVar9[7];
        uVar35 = puVar9[10];
        uVar39 = puVar9[0xb];
        uVar30 = puVar9[0xc];
        uVar32 = puVar9[0xd];
        uVar36 = puVar9[0xe];
        uVar40 = puVar9[0xf];
        puVar1 = puVar9 + 0x40;
        uVar41 = puVar9[0x10];
        uVar49 = puVar9[0x13];
        uVar42 = puVar9[0x14];
        uVar45 = puVar9[0x15];
        uVar47 = puVar9[0x16];
        uVar50 = puVar9[0x17];
        uVar43 = puVar9[0x18];
        uVar51 = puVar9[0x1b];
        uVar44 = puVar9[0x1c];
        uVar46 = puVar9[0x1d];
        uVar48 = puVar9[0x1e];
        uVar52 = puVar9[0x1f];
        uVar15 = CONCAT14((char)(uVar44 >> 0xf),(uVar43 >> 0x1f) << 0x10) & 0x1ffffffff;
        uVar26 = CONCAT12((byte)(puVar9[0x11] >> 0x1d),(ushort)((byte)(puVar9[0x11] >> 0xd) & 4)) &
                 0x4ffff;
        uVar27 = CONCAT12((byte)(puVar9[0x19] >> 0x1d),(ushort)((byte)(puVar9[0x19] >> 0xd) & 4)) &
                 0x4ffff;
        uVar16 = CONCAT14((char)(uVar30 >> 0xf),
                          (uint)CONCAT12((byte)(puVar9[8] >> 0x1f),
                                         (ushort)((byte)(puVar9[8] >> 0xf) & 1))) & 0x1ffffffff;
        uVar24 = CONCAT14((char)(uVar31 >> 0xd),
                          (uint)(CONCAT12((byte)(puVar9[1] >> 0x1d),
                                          (ushort)((byte)(puVar9[1] >> 0xd) & 4)) & 0x4ffff)) &
                 0x4ffffffff;
        uVar25 = CONCAT14((char)(uVar32 >> 0xd),
                          (uint)(CONCAT12((byte)(puVar9[9] >> 0x1d),
                                          (ushort)((byte)(puVar9[9] >> 0xd) & 4)) & 0x4ffff)) &
                 0x4ffffffff;
        uVar14 = CONCAT14((char)(puVar9[0x2c] >> 0xf),(puVar9[0x28] >> 0x1f) << 0x10) & 0x1ffffffff;
        uVar22 = CONCAT12((byte)(puVar9[0x21] >> 0x1d),(ushort)((byte)(puVar9[0x21] >> 0xd) & 4)) &
                 0x4ffff;
        uVar23 = CONCAT12((byte)(puVar9[0x29] >> 0x1d),(ushort)((byte)(puVar9[0x29] >> 0xd) & 4)) &
                 0x4ffff;
        uVar13 = CONCAT14((char)(puVar9[0x3c] >> 0xf),
                          (uint)CONCAT12((byte)(puVar9[0x38] >> 0x1f),
                                         (ushort)((byte)(puVar9[0x38] >> 0xf) & 1))) & 0x1ffffffff;
        uVar20 = CONCAT14((char)(puVar9[0x35] >> 0xd),
                          (uint)(CONCAT12((byte)(puVar9[0x31] >> 0x1d),
                                          (ushort)((byte)(puVar9[0x31] >> 0xd) & 4)) & 0x4ffff)) &
                 0x4ffffffff;
        uVar21 = CONCAT14((char)(puVar9[0x3d] >> 0xd),
                          (uint)(CONCAT12((byte)(puVar9[0x39] >> 0x1d),
                                          (ushort)((byte)(puVar9[0x39] >> 0xd) & 4)) & 0x4ffff)) &
                 0x4ffffffff;
        uVar18 = CONCAT12((byte)(puVar9[0x12] >> 0x1b),(ushort)((byte)(puVar9[0x12] >> 0xb) & 0x10))
                 & 0x10ffff;
        uVar19 = CONCAT12((byte)(puVar9[0x1a] >> 0x1b),(ushort)((byte)(puVar9[0x1a] >> 0xb) & 0x10))
                 & 0x10ffff;
        uVar17 = CONCAT14((char)(puVar9[0x3f] >> 9),
                          (uint)(CONCAT12((byte)(puVar9[0x3b] >> 0x19),
                                          (ushort)((byte)(puVar9[0x3b] >> 9) & 0x40)) & 0x40ffff)) &
                 0x40ffffffff;
        puVar8[1] = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(puVar9[0x3c] >> 0x1f) |
                                                          (byte)(puVar9[0x3d] >> 0x1d) & 4 |
                                                          (byte)(puVar9[0x3e] >> 0x1b) & 0x10 |
                                                         (byte)(puVar9[0x3f] >> 0x19) & 0x40) <<
                                           0x30) >> 0x2f) |
                             (byte)(uVar13 >> 0x20) | (byte)(uVar21 >> 0x20) |
                             (byte)(puVar9[0x3e] >> 0xb) & 0x10 | (byte)(uVar17 >> 0x20),
                             CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar13 >> 0x10) |
                                                                   (byte)(uVar21 >> 0x10) |
                                                                   (byte)(puVar9[0x3a] >> 0x1b) &
                                                                   0x10 | (byte)(uVar17 >> 0x10)) <<
                                                    0x10) >> 0xf) |
                                      (byte)uVar13 | (byte)uVar21 |
                                      (byte)(puVar9[0x3a] >> 0xb) & 0x10 | (byte)uVar17,
                                      CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(puVar9[
                                                  0x34] >> 0x1f) | (byte)(puVar9[0x35] >> 0x1d) & 4
                                                  | (byte)(puVar9[0x36] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x37] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar9[0x34] >> 0xf) & 1 |
                                                         (byte)(uVar20 >> 0x20) |
                                                         (byte)(puVar9[0x36] >> 0xb) & 0x10 |
                                                         (byte)(puVar9[0x37] >> 9) & 0x40,
                                               CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  puVar9[0x30] >> 0x1f) | (byte)(uVar20 >> 0x10) |
                                                  (byte)(puVar9[0x32] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x33] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar9[0x30] >> 0xf) & 1 |
                                                         (byte)uVar20 |
                                                         (byte)(puVar9[0x32] >> 0xb) & 0x10 |
                                                         (byte)(puVar9[0x33] >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  puVar9[0x2c] >> 0x1f) |
                                                  (byte)(puVar9[0x2d] >> 0x1d) & 4 |
                                                  (byte)(puVar9[0x2e] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x2f] >> 0x19) & 0x40) << 0x30) >>
                                                  0x2f) | (byte)(uVar14 >> 0x20) |
                                                          (byte)(puVar9[0x2d] >> 0xd) & 4 |
                                                          (byte)(puVar9[0x2e] >> 0xb) & 0x10 |
                                                          (byte)(puVar9[0x2f] >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar14 >> 0x10) | (byte)(uVar23 >> 0x10) |
                                                  (byte)(puVar9[0x2a] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x2b] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar9[0x28] >> 0xf) & 1 |
                                                         (byte)uVar23 |
                                                         (byte)(puVar9[0x2a] >> 0xb) & 0x10 |
                                                         (byte)(puVar9[0x2b] >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(puVar9[0x24] >> 0x1f) |
                                                  (byte)(puVar9[0x25] >> 0x1d) & 4 |
                                                  (byte)(puVar9[0x26] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x27] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar9[0x24] >> 0xf) & 1 |
                                                         (byte)(puVar9[0x25] >> 0xd) & 4 |
                                                         (byte)(puVar9[0x26] >> 0xb) & 0x10 |
                                                         (byte)(puVar9[0x27] >> 9) & 0x40,
                                                  (byte)((uint3)((uint3)(byte)((byte)(puVar9[0x20]
                                                                                     >> 0x1f) |
                                                                               (byte)(uVar22 >> 0x10
                                                                                     ) | (byte)(
                                                  puVar9[0x22] >> 0x1b) & 0x10 |
                                                  (byte)(puVar9[0x23] >> 0x19) & 0x40) << 0x10) >>
                                                  0xf) | (byte)(puVar9[0x20] >> 0xf) & 1 |
                                                         (byte)uVar22 |
                                                         (byte)(puVar9[0x22] >> 0xb) & 0x10 |
                                                         (byte)(puVar9[0x23] >> 9) & 0x40)))))));
        *puVar8 = CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar44 >> 0x1f) |
                                                        (byte)(uVar46 >> 0x1d) & 4 |
                                                        (byte)(uVar48 >> 0x1b) & 0x10 |
                                                       (byte)(uVar52 >> 0x19) & 0x40) << 0x30) >>
                                        0x2f) |
                           (byte)(uVar15 >> 0x20) | (byte)(uVar46 >> 0xd) & 4 |
                           (byte)(uVar48 >> 0xb) & 0x10 | (byte)(uVar52 >> 9) & 0x40,
                           CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar15 >> 0x10) |
                                                                 (byte)(uVar27 >> 0x10) |
                                                                 (byte)(uVar19 >> 0x10) |
                                                                (byte)(uVar51 >> 0x19) & 0x40) <<
                                                  0x10) >> 0xf) |
                                    (byte)(uVar43 >> 0xf) & 1 | (byte)uVar27 | (byte)uVar19 |
                                    (byte)(uVar51 >> 9) & 0x40,
                                    CONCAT15((byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar42 >>
                                                                                        0x1f) |
                                                                                  (byte)(uVar45 >>
                                                                                        0x1d) & 4 |
                                                                                  (byte)(uVar47 >>
                                                                                        0x1b) & 0x10
                                                                                 | (byte)(uVar50 >>
                                                                                         0x19) &
                                                                                   0x40) << 0x10) >>
                                                           0xf) |
                                             (byte)(uVar42 >> 0xf) & 1 | (byte)(uVar45 >> 0xd) & 4 |
                                             (byte)(uVar47 >> 0xb) & 0x10 |
                                             (byte)(uVar50 >> 9) & 0x40,
                                             CONCAT14((byte)(ushort)((uint3)((uint3)(byte)((byte)(
                                                  uVar41 >> 0x1f) | (byte)(uVar26 >> 0x10) |
                                                  (byte)(uVar18 >> 0x10) |
                                                  (byte)(uVar49 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar41 >> 0xf) & 1 | (byte)uVar26 |
                                                  (byte)uVar18 | (byte)(uVar49 >> 9) & 0x40,
                                                  CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar30 >> 0x1f) | (byte)(uVar32 >> 0x1d) & 4 |
                                                  (byte)(uVar36 >> 0x1b) & 0x10 |
                                                  (byte)(uVar40 >> 0x19) & 0x40) << 0x30) >> 0x2f) |
                                                  (byte)(uVar16 >> 0x20) | (byte)(uVar25 >> 0x20) |
                                                  (byte)(uVar36 >> 0xb) & 0x10 |
                                                  (byte)(uVar40 >> 9) & 0x40,
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar16 >> 0x10) | (byte)(uVar25 >> 0x10) |
                                                  (byte)(uVar35 >> 0x1b) & 0x10 |
                                                  (byte)(uVar39 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)uVar16 | (byte)uVar25 |
                                                  (byte)(uVar35 >> 0xb) & 0x10 |
                                                  (byte)(uVar39 >> 9) & 0x40,
                                                  CONCAT11((byte)(ushort)((uint3)((uint3)(byte)((
                                                  byte)(uVar29 >> 0x1f) | (byte)(uVar31 >> 0x1d) & 4
                                                  | (byte)(uVar34 >> 0x1b) & 0x10 |
                                                  (byte)(uVar38 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar29 >> 0xf) & 1 | (byte)(uVar24 >> 0x20)
                                                  | (byte)(uVar34 >> 0xb) & 0x10 |
                                                  (byte)(uVar38 >> 9) & 0x40,
                                                  (byte)(ushort)((uint3)((uint3)(byte)((byte)(uVar28
                                                                                             >> 0x1f
                                                  ) | (byte)(uVar24 >> 0x10) |
                                                  (byte)(uVar33 >> 0x1b) & 0x10 |
                                                  (byte)(uVar37 >> 0x19) & 0x40) << 0x10) >> 0xf) |
                                                  (byte)(uVar28 >> 0xf) & 1 | (byte)uVar24 |
                                                  (byte)(uVar33 >> 0xb) & 0x10 |
                                                  (byte)(uVar37 >> 9) & 0x40)))))));
        puVar8 = puVar8 + 2;
        puVar9 = puVar1;
      } while (puVar1 != param_1 + (ulong)((uVar3 >> 4) - 1) * 0x40 + 0x40);
      param_1 = param_1 + ((ulong)uVar3 & 0xfffffff0) * 4;
      if (uVar3 != (uVar3 & 0xfffffff0)) {
        pbVar10 = (byte *)(param_2 + (ulong)(param_3 + (uVar3 & 0xfffffff0)));
        do {
          uVar3 = *param_1;
          puVar1 = param_1 + 1;
          puVar9 = param_1 + 2;
          puVar2 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar3 = *puVar9 >> 0xb & 0x100010 | *puVar2 >> 9 & 0x400040 |
                  uVar3 >> 0xf & 0x10001 | *puVar1 >> 0xd & 0x40004;
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar3 | (byte)(uVar3 >> 0xf);
          pbVar10 = pbVar11;
        } while ((uint)((int)pbVar11 - (int)param_2) <= uVar6);
      }
    }
  }
  if (lVar5 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5 - ___stack_chk_guard,0);
}


