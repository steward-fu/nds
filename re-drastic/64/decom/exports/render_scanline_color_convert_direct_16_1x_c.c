/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_16_1x_c
 * Address  : 0013d680
 * Program  : drastic64
 */


void render_scanline_color_convert_direct_16_1x_c(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint3 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  short sVar13;
  short sVar15;
  short sVar16;
  undefined8 uVar14;
  short sVar17;
  short sVar18;
  short sVar20;
  short sVar21;
  undefined8 uVar19;
  short sVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  if (param_2 + 0x40 <= param_1 || param_1 + 0x60 <= param_2) {
    puVar10 = param_1;
    do {
      uVar19 = puVar10[0x21];
      uVar14 = puVar10[0x20];
      uVar26 = puVar10[0x41];
      uVar25 = puVar10[0x40];
      puVar11 = puVar10 + 2;
      uVar24 = puVar10[1];
      uVar23 = *puVar10;
      uVar9 = CONCAT12((char)((ulong)uVar19 >> 8),(short)uVar19) & 0xff00ff;
      sVar1 = (ushort)(byte)uVar14 << 5;
      sVar2 = (ushort)(byte)((ulong)uVar14 >> 8) << 5;
      sVar3 = (ushort)(byte)((ulong)uVar14 >> 0x10) << 5;
      sVar4 = (ushort)(byte)((ulong)uVar14 >> 0x18) << 5;
      sVar5 = (ushort)(byte)((ulong)uVar14 >> 0x20) << 5;
      sVar6 = (ushort)(byte)((ulong)uVar14 >> 0x28) << 5;
      sVar7 = (ushort)(byte)((ulong)uVar14 >> 0x30) << 5;
      sVar8 = (ushort)(byte)((ulong)uVar14 >> 0x38) << 5;
      sVar13 = (short)uVar9 << 5;
      sVar15 = (ushort)(byte)(uVar9 >> 0x10) << 5;
      sVar16 = (ushort)(byte)((ulong)uVar19 >> 0x10) << 5;
      sVar17 = (ushort)(byte)((ulong)uVar19 >> 0x18) << 5;
      sVar18 = (ushort)(byte)((ulong)uVar19 >> 0x20) << 5;
      sVar20 = (ushort)(byte)((ulong)uVar19 >> 0x28) << 5;
      sVar21 = (ushort)(byte)((ulong)uVar19 >> 0x30) << 5;
      sVar22 = (ushort)(byte)((ulong)uVar19 >> 0x38) << 5;
      param_2[1] = CONCAT17((byte)((ushort)sVar8 >> 8) |
                            (byte)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x39) << 0xb) >> 8),
                            CONCAT16((byte)sVar8 | (byte)((ulong)uVar25 >> 0x39),
                                     CONCAT15((byte)((ushort)sVar7 >> 8) |
                                              (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar23 >>
                                                                                   0x30) >> 1) <<
                                                             0xb) >> 8),
                                              CONCAT14((byte)sVar7 |
                                                       (byte)((ulong)uVar25 >> 0x30) >> 1,
                                                       CONCAT13((byte)((ushort)sVar6 >> 8) |
                                                                (byte)((ushort)((ushort)(byte)((byte
                                                  )((ulong)uVar23 >> 0x28) >> 1) << 0xb) >> 8),
                                                  CONCAT12((byte)sVar6 |
                                                           (byte)((ulong)uVar25 >> 0x28) >> 1,
                                                           CONCAT11((byte)((ushort)sVar5 >> 8) |
                                                                    (byte)((ushort)((ushort)(byte)((
                                                  byte)((ulong)uVar23 >> 0x20) >> 1) << 0xb) >> 8),
                                                  (byte)sVar5 | (byte)((ulong)uVar25 >> 0x20) >> 1))
                                                  )))));
      *param_2 = CONCAT17((byte)((ushort)sVar4 >> 8) |
                          (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar23 >> 0x18) >> 1) << 0xb)
                                >> 8),
                          CONCAT16((byte)sVar4 | (byte)((ulong)uVar25 >> 0x18) >> 1,
                                   CONCAT15((byte)((ushort)sVar3 >> 8) |
                                            (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar23 >>
                                                                                 0x10) >> 1) << 0xb)
                                                  >> 8),
                                            CONCAT14((byte)sVar3 |
                                                     (byte)((ulong)uVar25 >> 0x10) >> 1,
                                                     CONCAT13((byte)((ushort)sVar2 >> 8) |
                                                              (byte)((ushort)((ushort)(byte)((byte)(
                                                  (ulong)uVar23 >> 8) >> 1) << 0xb) >> 8),
                                                  CONCAT12((byte)sVar2 |
                                                           (byte)((ulong)uVar25 >> 8) >> 1,
                                                           CONCAT11((byte)((ushort)sVar1 >> 8) |
                                                                    (byte)((ushort)((ushort)(byte)((
                                                  byte)uVar23 >> 1) << 0xb) >> 8),
                                                  (byte)sVar1 | (byte)uVar25 >> 1)))))));
      param_2[3] = CONCAT17((byte)((ushort)sVar22 >> 8) |
                            (byte)((ushort)((ushort)(byte)((ulong)uVar24 >> 0x39) << 0xb) >> 8),
                            CONCAT16((byte)sVar22 | (byte)((ulong)uVar26 >> 0x39),
                                     CONCAT15((byte)((ushort)sVar21 >> 8) |
                                              (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar24 >>
                                                                                   0x30) >> 1) <<
                                                             0xb) >> 8),
                                              CONCAT14((byte)sVar21 |
                                                       (byte)((ulong)uVar26 >> 0x30) >> 1,
                                                       CONCAT13((byte)((ushort)sVar20 >> 8) |
                                                                (byte)((ushort)((ushort)(byte)((byte
                                                  )((ulong)uVar24 >> 0x28) >> 1) << 0xb) >> 8),
                                                  CONCAT12((byte)sVar20 |
                                                           (byte)((ulong)uVar26 >> 0x28) >> 1,
                                                           CONCAT11((byte)((ushort)sVar18 >> 8) |
                                                                    (byte)((ushort)((ushort)(byte)((
                                                  byte)((ulong)uVar24 >> 0x20) >> 1) << 0xb) >> 8),
                                                  (byte)sVar18 | (byte)((ulong)uVar26 >> 0x20) >> 1)
                                                  ))))));
      param_2[2] = CONCAT17((byte)((ushort)sVar17 >> 8) |
                            (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar24 >> 0x18) >> 1) <<
                                           0xb) >> 8),
                            CONCAT16((byte)sVar17 | (byte)((ulong)uVar26 >> 0x18) >> 1,
                                     CONCAT15((byte)((ushort)sVar16 >> 8) |
                                              (byte)((ushort)((ushort)(byte)((byte)((ulong)uVar24 >>
                                                                                   0x10) >> 1) <<
                                                             0xb) >> 8),
                                              CONCAT14((byte)sVar16 |
                                                       (byte)((ulong)uVar26 >> 0x10) >> 1,
                                                       CONCAT13((byte)((ushort)sVar15 >> 8) |
                                                                (byte)((ushort)((ushort)(byte)((byte
                                                  )((ulong)uVar24 >> 8) >> 1) << 0xb) >> 8),
                                                  CONCAT12((byte)sVar15 |
                                                           (byte)((ulong)uVar26 >> 8) >> 1,
                                                           CONCAT11((byte)((ushort)sVar13 >> 8) |
                                                                    (byte)((ushort)((ushort)(byte)((
                                                  byte)uVar24 >> 1) << 0xb) >> 8),
                                                  (byte)sVar13 | (byte)uVar26 >> 1)))))));
      param_2 = param_2 + 4;
      puVar10 = puVar11;
    } while (param_1 + 0x20 != puVar11);
    return;
  }
  lVar12 = 0;
  do {
    *(ushort *)((long)param_2 + lVar12 * 2) =
         (ushort)*(byte *)((long)param_1 + lVar12 + 0x100) << 5 |
         (ushort)(*(byte *)((long)param_1 + lVar12 + 0x200) >> 1) |
         (ushort)((*(byte *)((long)param_1 + lVar12) >> 1 & 0x1f) << 0xb);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x100);
  return;
}


