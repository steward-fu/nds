/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_16_1x_c
 * Address  : 0013d8d0
 * Program  : drastic64
 */


void render_scanline_color_convert_shade_16_1x_c
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  short sVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint uVar29;
  short sVar30;
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
  ulong uVar19;
  
  sVar30 = (short)param_4;
  sVar2 = (short)param_3;
  if (param_2 + 0x40 <= param_1 || param_1 + 0x60 <= param_2) {
    puVar11 = param_1;
    do {
      uVar24 = puVar11[0x41];
      uVar22 = puVar11[0x40];
      puVar1 = puVar11 + 2;
      uVar20 = puVar11[1];
      uVar17 = *puVar11;
      uVar3 = CONCAT12((char)((ulong)uVar22 >> 8),(short)uVar22) & 0xff00ff;
      bVar13 = (byte)((ulong)uVar22 >> 0x28);
      uVar4 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
      bVar14 = (byte)((ulong)uVar17 >> 0x28);
      uVar5 = CONCAT12((char)((ulong)uVar24 >> 8),(short)uVar24) & 0xff00ff;
      bVar15 = (byte)((ulong)uVar24 >> 0x28);
      uVar6 = CONCAT12((char)((ulong)uVar20 >> 8),(short)uVar20) & 0xff00ff;
      bVar16 = (byte)((ulong)uVar20 >> 0x28);
      uVar28 = puVar11[0x21];
      uVar26 = puVar11[0x20];
      uVar7 = CONCAT12((char)((ulong)uVar26 >> 8),(short)uVar26) & 0xff00ff;
      uVar8 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
      uVar18 = CONCAT62((int6)(((ulong)CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x18) *
                                                         sVar2,
                                                sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x10) *
                                                         sVar2) << 0x20) >> 0x10),
                        sVar30 + (short)uVar7 * sVar2) & 0xffffffffffffffe0;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22(sVar30 + (ushort)(byte)(uVar7 >> 0x10) * sVar2,(short)uVar18)) &
               0xffffffffffe0ffff;
      uVar23 = CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
               0xffe0ffe0ffffffff;
      uVar18 = CONCAT62((int6)(((ulong)CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x38) *
                                                         sVar2,
                                                sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x30) *
                                                         sVar2) << 0x20) >> 0x10),
                        sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x20) * sVar2) & 0xffffffffffffffe0
      ;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar26 >> 0x28) * sVar2,
                                 (short)uVar18)) & 0xffffffffffe0ffff;
      uVar25 = CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
               0xffe0ffe0ffffffff;
      uVar18 = CONCAT62((int6)(((ulong)CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x18) *
                                                         sVar2,
                                                sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x10) *
                                                         sVar2) << 0x20) >> 0x10),
                        sVar30 + (short)uVar8 * sVar2) & 0xffffffffffffffe0;
      uVar19 = CONCAT44((int)(uVar18 >> 0x20),
                        CONCAT22(sVar30 + (ushort)(byte)(uVar8 >> 0x10) * sVar2,(short)uVar18)) &
               0xffffffffffe0ffff;
      uVar18 = CONCAT26((short)(uVar19 >> 0x30),CONCAT24((short)(uVar18 >> 0x20),(int)uVar19)) &
               0xffe0ffe0ffffffff;
      uVar19 = CONCAT62((int6)(((ulong)CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x38) *
                                                         sVar2,
                                                sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x30) *
                                                         sVar2) << 0x20) >> 0x10),
                        sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x20) * sVar2) & 0xffffffffffffffe0
      ;
      uVar21 = CONCAT44((int)(uVar19 >> 0x20),
                        CONCAT22(sVar30 + (ushort)(byte)((ulong)uVar28 >> 0x28) * sVar2,
                                 (short)uVar19)) & 0xffffffffffe0ffff;
      uVar19 = CONCAT26((short)(uVar21 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar21)) &
               0xffe0ffe0ffffffff;
      uVar9 = param_4 + (CONCAT12(bVar15,(ushort)(byte)((ulong)uVar24 >> 0x20)) & 0xffff) * param_3
              >> 6;
      uVar27 = param_4 + (uint)bVar15 * param_3 >> 6;
      uVar10 = param_4 + (uint)(byte)((ulong)uVar24 >> 0x30) * param_3 >> 6;
      uVar29 = param_4 + (uint)(byte)((ulong)uVar24 >> 0x38) * param_3 >> 6;
      uVar39 = param_4 + (uVar3 & 0xffff) * param_3 >> 6;
      uVar40 = param_4 + (uint)(byte)(uVar3 >> 0x10) * param_3 >> 6;
      uVar41 = param_4 + (uint)(byte)((ulong)uVar22 >> 0x10) * param_3 >> 6;
      uVar42 = param_4 + (uint)(byte)((ulong)uVar22 >> 0x18) * param_3 >> 6;
      uVar35 = param_4 + (CONCAT12(bVar13,(ushort)(byte)((ulong)uVar22 >> 0x20)) & 0xffff) * param_3
               >> 6;
      uVar36 = param_4 + (uint)bVar13 * param_3 >> 6;
      uVar37 = param_4 + (uint)(byte)((ulong)uVar22 >> 0x30) * param_3 >> 6;
      uVar38 = param_4 + (uint)(byte)((ulong)uVar22 >> 0x38) * param_3 >> 6;
      uVar31 = param_4 + (uVar5 & 0xffff) * param_3 >> 6;
      uVar32 = param_4 + (uint)(byte)(uVar5 >> 0x10) * param_3 >> 6;
      uVar33 = param_4 + (uint)(byte)((ulong)uVar24 >> 0x10) * param_3 >> 6;
      uVar34 = param_4 + (uint)(byte)((ulong)uVar24 >> 0x18) * param_3 >> 6;
      param_2[1] = CONCAT17((byte)(uVar38 >> 8) | (byte)(uVar25 >> 0x38) |
                            (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)uVar17 >> 0x38) *
                                                              param_3 >> 6) << 0xb) >> 8),
                            CONCAT16((byte)uVar38 | (byte)(uVar25 >> 0x30),
                                     CONCAT15((byte)(uVar37 >> 8) | (byte)(uVar25 >> 0x28) |
                                              (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)
                                                  uVar17 >> 0x30) * param_3 >> 6) << 0xb) >> 8),
                                              CONCAT14((byte)uVar37 | (byte)(uVar25 >> 0x20),
                                                       CONCAT13((byte)(uVar36 >> 8) |
                                                                (byte)(uVar25 >> 0x18) |
                                                                (byte)((ushort)((short)(param_4 + (
                                                  uint)bVar14 * param_3 >> 6) << 0xb) >> 8),
                                                  CONCAT12((byte)uVar36 | (byte)(uVar25 >> 0x10),
                                                           CONCAT11((byte)(uVar35 >> 8) |
                                                                    (byte)(uVar25 >> 8) |
                                                                    (byte)((ushort)((short)(param_4 
                                                  + (CONCAT12(bVar14,(ushort)(byte)((ulong)uVar17 >>
                                                                                   0x20)) & 0xffff)
                                                    * param_3 >> 6) << 0xb) >> 8),
                                                  (byte)uVar35 | (byte)uVar25)))))));
      *param_2 = CONCAT17((byte)(uVar42 >> 8) | (byte)(uVar23 >> 0x38) |
                          (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)uVar17 >> 0x18) *
                                                            param_3 >> 6) << 0xb) >> 8),
                          CONCAT16((byte)uVar42 | (byte)(uVar23 >> 0x30),
                                   CONCAT15((byte)(uVar41 >> 8) | (byte)(uVar23 >> 0x28) |
                                            (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)
                                                  uVar17 >> 0x10) * param_3 >> 6) << 0xb) >> 8),
                                            CONCAT14((byte)uVar41 | (byte)(uVar23 >> 0x20),
                                                     CONCAT13((byte)(uVar40 >> 8) |
                                                              (byte)(uVar23 >> 0x18) |
                                                              (byte)((ushort)((short)(param_4 + (
                                                  uint)(byte)(uVar4 >> 0x10) * param_3 >> 6) << 0xb)
                                                  >> 8),CONCAT12((byte)uVar40 |
                                                                 (byte)(uVar23 >> 0x10),
                                                                 CONCAT11((byte)(uVar39 >> 8) |
                                                                          (byte)(uVar23 >> 8) |
                                                                          (byte)((ushort)((short)(
                                                  param_4 + (uVar4 & 0xffff) * param_3 >> 6) << 0xb)
                                                  >> 8),(byte)uVar39 | (byte)uVar23)))))));
      param_2[3] = CONCAT17((byte)(uVar29 >> 8) | (byte)(uVar19 >> 0x38) |
                            (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)uVar20 >> 0x38) *
                                                              param_3 >> 6) << 0xb) >> 8),
                            CONCAT16((byte)uVar29 | (byte)(uVar19 >> 0x30),
                                     CONCAT15((byte)(uVar10 >> 8) | (byte)(uVar19 >> 0x28) |
                                              (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)
                                                  uVar20 >> 0x30) * param_3 >> 6) << 0xb) >> 8),
                                              CONCAT14((byte)uVar10 | (byte)(uVar19 >> 0x20),
                                                       CONCAT13((byte)(uVar27 >> 8) |
                                                                (byte)(uVar19 >> 0x18) |
                                                                (byte)((ushort)((short)(param_4 + (
                                                  uint)bVar16 * param_3 >> 6) << 0xb) >> 8),
                                                  CONCAT12((byte)uVar27 | (byte)(uVar19 >> 0x10),
                                                           CONCAT11((byte)(uVar9 >> 8) |
                                                                    (byte)(uVar19 >> 8) |
                                                                    (byte)((ushort)((short)(param_4 
                                                  + (CONCAT12(bVar16,(ushort)(byte)((ulong)uVar20 >>
                                                                                   0x20)) & 0xffff)
                                                    * param_3 >> 6) << 0xb) >> 8),
                                                  (byte)uVar9 | (byte)uVar19)))))));
      param_2[2] = CONCAT17((byte)(uVar34 >> 8) | (byte)(uVar18 >> 0x38) |
                            (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)uVar20 >> 0x18) *
                                                              param_3 >> 6) << 0xb) >> 8),
                            CONCAT16((byte)uVar34 | (byte)(uVar18 >> 0x30),
                                     CONCAT15((byte)(uVar33 >> 8) | (byte)(uVar18 >> 0x28) |
                                              (byte)((ushort)((short)(param_4 + (uint)(byte)((ulong)
                                                  uVar20 >> 0x10) * param_3 >> 6) << 0xb) >> 8),
                                              CONCAT14((byte)uVar33 | (byte)(uVar18 >> 0x20),
                                                       CONCAT13((byte)(uVar32 >> 8) |
                                                                (byte)(uVar18 >> 0x18) |
                                                                (byte)((ushort)((short)(param_4 + (
                                                  uint)(byte)(uVar6 >> 0x10) * param_3 >> 6) << 0xb)
                                                  >> 8),CONCAT12((byte)uVar32 |
                                                                 (byte)(uVar18 >> 0x10),
                                                                 CONCAT11((byte)(uVar31 >> 8) |
                                                                          (byte)(uVar18 >> 8) |
                                                                          (byte)((ushort)((short)(
                                                  param_4 + (uVar6 & 0xffff) * param_3 >> 6) << 0xb)
                                                  >> 8),(byte)uVar31 | (byte)uVar18)))))));
      param_2 = param_2 + 4;
      puVar11 = puVar1;
    } while (param_1 + 0x20 != puVar1);
    return;
  }
  lVar12 = 0;
  do {
    *(ushort *)((long)param_2 + lVar12 * 2) =
         sVar30 + (ushort)*(byte *)((long)param_1 + lVar12 + 0x100) * sVar2 & 0xffe0 |
         (ushort)(param_4 + (uint)*(byte *)((long)param_1 + lVar12 + 0x200) * param_3 >> 6) |
         (ushort)((param_4 + (uint)*(byte *)((long)param_1 + lVar12) * param_3 >> 6 & 0x1f) << 0xb);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x100);
  return;
}


