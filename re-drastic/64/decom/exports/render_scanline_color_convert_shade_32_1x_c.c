/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_32_1x_c
 * Address  : 0013ddd0
 * Program  : drastic64
 */


void render_scanline_color_convert_shade_32_1x_c
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined8 uVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  
  if (param_2 + 0x80 <= param_1 || param_1 + 0x60 <= param_2) {
    puVar7 = param_1;
    do {
      uVar20 = puVar7[0x21];
      uVar17 = puVar7[0x20];
      puVar1 = puVar7 + 2;
      uVar26 = puVar7[0x41];
      uVar23 = puVar7[0x40];
      uVar2 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
      bVar10 = (byte)((ulong)uVar17 >> 0x28);
      uVar3 = CONCAT12((char)((ulong)uVar20 >> 8),(short)uVar20) & 0xff00ff;
      bVar11 = (byte)((ulong)uVar20 >> 0x28);
      uVar4 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
      bVar12 = (byte)((ulong)uVar23 >> 0x28);
      uVar5 = CONCAT12((char)((ulong)uVar26 >> 8),(short)uVar26) & 0xff00ff;
      bVar13 = (byte)((ulong)uVar26 >> 0x28);
      uVar40 = puVar7[1];
      uVar37 = *puVar7;
      bVar9 = (byte)((ulong)uVar37 >> 8);
      bVar14 = (byte)((ulong)uVar37 >> 0x28);
      uVar6 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
      bVar15 = (byte)((ulong)uVar40 >> 0x28);
      iVar66 = (param_4 + (uVar2 & 0xffff) * param_3 >> 5) << 10;
      iVar67 = (param_4 + (uint)(byte)(uVar2 >> 0x10) * param_3 >> 5) << 10;
      iVar68 = (param_4 + (uint)(byte)((ulong)uVar17 >> 0x10) * param_3 >> 5) << 10;
      iVar69 = (param_4 + (uint)(byte)((ulong)uVar17 >> 0x18) * param_3 >> 5) << 10;
      iVar62 = (param_4 + (CONCAT12(bVar10,(ushort)(byte)((ulong)uVar17 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 10;
      iVar63 = (param_4 + (uint)bVar10 * param_3 >> 5) << 10;
      iVar64 = (param_4 + (uint)(byte)((ulong)uVar17 >> 0x30) * param_3 >> 5) << 10;
      iVar65 = (param_4 + (uint)(byte)((ulong)uVar17 >> 0x38) * param_3 >> 5) << 10;
      iVar32 = (param_4 + (uVar4 & 0xffff) * param_3 >> 5) << 2;
      iVar33 = (param_4 + (uint)(byte)(uVar4 >> 0x10) * param_3 >> 5) << 2;
      iVar34 = (param_4 + (uint)(byte)((ulong)uVar23 >> 0x10) * param_3 >> 5) << 2;
      iVar35 = (param_4 + (uint)(byte)((ulong)uVar23 >> 0x18) * param_3 >> 5) << 2;
      iVar28 = (param_4 + (CONCAT12(bVar12,(ushort)(byte)((ulong)uVar23 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 2;
      iVar29 = (param_4 + (uint)bVar12 * param_3 >> 5) << 2;
      iVar30 = (param_4 + (uint)(byte)((ulong)uVar23 >> 0x30) * param_3 >> 5) << 2;
      iVar31 = (param_4 + (uint)(byte)((ulong)uVar23 >> 0x38) * param_3 >> 5) << 2;
      iVar22 = (param_4 + (uVar5 & 0xffff) * param_3 >> 5) << 2;
      iVar24 = (param_4 + (uint)(byte)(uVar5 >> 0x10) * param_3 >> 5) << 2;
      iVar25 = (param_4 + (uint)(byte)((ulong)uVar26 >> 0x10) * param_3 >> 5) << 2;
      iVar27 = (param_4 + (uint)(byte)((ulong)uVar26 >> 0x18) * param_3 >> 5) << 2;
      iVar16 = (param_4 + (CONCAT12(bVar13,(ushort)(byte)((ulong)uVar26 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 2;
      iVar18 = (param_4 + (uint)bVar13 * param_3 >> 5) << 2;
      iVar19 = (param_4 + (uint)(byte)((ulong)uVar26 >> 0x30) * param_3 >> 5) << 2;
      iVar21 = (param_4 + (uint)(byte)((ulong)uVar26 >> 0x38) * param_3 >> 5) << 2;
      iVar58 = (param_4 + (uVar3 & 0xffff) * param_3 >> 5) << 10;
      iVar59 = (param_4 + (uint)(byte)(uVar3 >> 0x10) * param_3 >> 5) << 10;
      iVar60 = (param_4 + (uint)(byte)((ulong)uVar20 >> 0x10) * param_3 >> 5) << 10;
      iVar61 = (param_4 + (uint)(byte)((ulong)uVar20 >> 0x18) * param_3 >> 5) << 10;
      iVar54 = (param_4 + (CONCAT12(bVar11,(ushort)(byte)((ulong)uVar20 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 10;
      iVar55 = (param_4 + (uint)bVar11 * param_3 >> 5) << 10;
      iVar56 = (param_4 + (uint)(byte)((ulong)uVar20 >> 0x30) * param_3 >> 5) << 10;
      iVar57 = (param_4 + (uint)(byte)((ulong)uVar20 >> 0x38) * param_3 >> 5) << 10;
      iVar50 = (param_4 + ((CONCAT12(bVar9,(short)uVar37) & 0xff00ff) & 0xffff) * param_3 >> 5) <<
               0x12;
      iVar51 = (param_4 + (uint)bVar9 * param_3 >> 5) << 0x12;
      iVar52 = (param_4 + (uint)(byte)((ulong)uVar37 >> 0x10) * param_3 >> 5) << 0x12;
      iVar53 = (param_4 + (uint)(byte)((ulong)uVar37 >> 0x18) * param_3 >> 5) << 0x12;
      iVar46 = (param_4 + (CONCAT12(bVar14,(ushort)(byte)((ulong)uVar37 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 0x12;
      iVar47 = (param_4 + (uint)bVar14 * param_3 >> 5) << 0x12;
      iVar48 = (param_4 + (uint)(byte)((ulong)uVar37 >> 0x30) * param_3 >> 5) << 0x12;
      iVar49 = (param_4 + (uint)(byte)((ulong)uVar37 >> 0x38) * param_3 >> 5) << 0x12;
      iVar42 = (param_4 + (uVar6 & 0xffff) * param_3 >> 5) << 0x12;
      iVar43 = (param_4 + (uint)(byte)(uVar6 >> 0x10) * param_3 >> 5) << 0x12;
      iVar44 = (param_4 + (uint)(byte)((ulong)uVar40 >> 0x10) * param_3 >> 5) << 0x12;
      iVar45 = (param_4 + (uint)(byte)((ulong)uVar40 >> 0x18) * param_3 >> 5) << 0x12;
      iVar36 = (param_4 + (CONCAT12(bVar15,(ushort)(byte)((ulong)uVar40 >> 0x20)) & 0xffff) *
                          param_3 >> 5) << 0x12;
      iVar38 = (param_4 + (uint)bVar15 * param_3 >> 5) << 0x12;
      iVar39 = (param_4 + (uint)(byte)((ulong)uVar40 >> 0x30) * param_3 >> 5) << 0x12;
      iVar41 = (param_4 + (uint)(byte)((ulong)uVar40 >> 0x38) * param_3 >> 5) << 0x12;
      param_2[1] = CONCAT17((byte)((uint)iVar35 >> 0x18) | (byte)((uint)iVar69 >> 0x18) |
                            (byte)((uint)iVar53 >> 0x18),
                            CONCAT16((byte)((uint)iVar35 >> 0x10) | (byte)((uint)iVar69 >> 0x10) |
                                     (byte)((uint)iVar53 >> 0x10),
                                     CONCAT15((byte)((uint)iVar35 >> 8) | (byte)((uint)iVar69 >> 8),
                                              CONCAT14((char)iVar35,
                                                       CONCAT13((byte)((uint)iVar34 >> 0x18) |
                                                                (byte)((uint)iVar68 >> 0x18) |
                                                                (byte)((uint)iVar52 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar34 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar68 >> 0x10) | (byte)((uint)iVar52 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar34 >> 8) |
                                                           (byte)((uint)iVar68 >> 8),(char)iVar34)))
                                                  ))));
      *param_2 = CONCAT17((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar67 >> 0x18) |
                          (byte)((uint)iVar51 >> 0x18),
                          CONCAT16((byte)((uint)iVar33 >> 0x10) | (byte)((uint)iVar67 >> 0x10) |
                                   (byte)((uint)iVar51 >> 0x10),
                                   CONCAT15((byte)((uint)iVar33 >> 8) | (byte)((uint)iVar67 >> 8),
                                            CONCAT14((char)iVar33,
                                                     CONCAT13((byte)((uint)iVar32 >> 0x18) |
                                                              (byte)((uint)iVar66 >> 0x18) |
                                                              (byte)((uint)iVar50 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar32 >> 0x10)
                                                                       | (byte)((uint)iVar66 >> 0x10
                                                                               ) |
                                                                       (byte)((uint)iVar50 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar32
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar66
                                                                                      >> 8),
                                                                                (char)iVar32)))))));
      param_2[3] = CONCAT17((byte)((uint)iVar31 >> 0x18) | (byte)((uint)iVar65 >> 0x18) |
                            (byte)((uint)iVar49 >> 0x18),
                            CONCAT16((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar65 >> 0x10) |
                                     (byte)((uint)iVar49 >> 0x10),
                                     CONCAT15((byte)((uint)iVar31 >> 8) | (byte)((uint)iVar65 >> 8),
                                              CONCAT14((char)iVar31,
                                                       CONCAT13((byte)((uint)iVar30 >> 0x18) |
                                                                (byte)((uint)iVar64 >> 0x18) |
                                                                (byte)((uint)iVar48 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar30 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar64 >> 0x10) | (byte)((uint)iVar48 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar30 >> 8) |
                                                           (byte)((uint)iVar64 >> 8),(char)iVar30)))
                                                  ))));
      param_2[2] = CONCAT17((byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar63 >> 0x18) |
                            (byte)((uint)iVar47 >> 0x18),
                            CONCAT16((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar63 >> 0x10) |
                                     (byte)((uint)iVar47 >> 0x10),
                                     CONCAT15((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar63 >> 8),
                                              CONCAT14((char)iVar29,
                                                       CONCAT13((byte)((uint)iVar28 >> 0x18) |
                                                                (byte)((uint)iVar62 >> 0x18) |
                                                                (byte)((uint)iVar46 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar28 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar62 >> 0x10) | (byte)((uint)iVar46 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar28 >> 8) |
                                                           (byte)((uint)iVar62 >> 8),(char)iVar28)))
                                                  ))));
      param_2[5] = CONCAT17((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar61 >> 0x18) |
                            (byte)((uint)iVar45 >> 0x18),
                            CONCAT16((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar61 >> 0x10) |
                                     (byte)((uint)iVar45 >> 0x10),
                                     CONCAT15((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar61 >> 8),
                                              CONCAT14((char)iVar27,
                                                       CONCAT13((byte)((uint)iVar25 >> 0x18) |
                                                                (byte)((uint)iVar60 >> 0x18) |
                                                                (byte)((uint)iVar44 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar25 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar60 >> 0x10) | (byte)((uint)iVar44 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar25 >> 8) |
                                                           (byte)((uint)iVar60 >> 8),(char)iVar25)))
                                                  ))));
      param_2[4] = CONCAT17((byte)((uint)iVar24 >> 0x18) | (byte)((uint)iVar59 >> 0x18) |
                            (byte)((uint)iVar43 >> 0x18),
                            CONCAT16((byte)((uint)iVar24 >> 0x10) | (byte)((uint)iVar59 >> 0x10) |
                                     (byte)((uint)iVar43 >> 0x10),
                                     CONCAT15((byte)((uint)iVar24 >> 8) | (byte)((uint)iVar59 >> 8),
                                              CONCAT14((char)iVar24,
                                                       CONCAT13((byte)((uint)iVar22 >> 0x18) |
                                                                (byte)((uint)iVar58 >> 0x18) |
                                                                (byte)((uint)iVar42 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar22 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar58 >> 0x10) | (byte)((uint)iVar42 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar22 >> 8) |
                                                           (byte)((uint)iVar58 >> 8),(char)iVar22)))
                                                  ))));
      param_2[7] = CONCAT17((byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar57 >> 0x18) |
                            (byte)((uint)iVar41 >> 0x18),
                            CONCAT16((byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar57 >> 0x10) |
                                     (byte)((uint)iVar41 >> 0x10),
                                     CONCAT15((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar57 >> 8),
                                              CONCAT14((char)iVar21,
                                                       CONCAT13((byte)((uint)iVar19 >> 0x18) |
                                                                (byte)((uint)iVar56 >> 0x18) |
                                                                (byte)((uint)iVar39 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar19 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar56 >> 0x10) | (byte)((uint)iVar39 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar19 >> 8) |
                                                           (byte)((uint)iVar56 >> 8),(char)iVar19)))
                                                  ))));
      param_2[6] = CONCAT17((byte)((uint)iVar18 >> 0x18) | (byte)((uint)iVar55 >> 0x18) |
                            (byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)iVar18 >> 0x10) | (byte)((uint)iVar55 >> 0x10) |
                                     (byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)iVar18 >> 8) | (byte)((uint)iVar55 >> 8),
                                              CONCAT14((char)iVar18,
                                                       CONCAT13((byte)((uint)iVar16 >> 0x18) |
                                                                (byte)((uint)iVar54 >> 0x18) |
                                                                (byte)((uint)iVar36 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar16 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar54 >> 0x10) | (byte)((uint)iVar36 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar16 >> 8) |
                                                           (byte)((uint)iVar54 >> 8),(char)iVar16)))
                                                  ))));
      param_2 = param_2 + 8;
      puVar7 = puVar1;
    } while (puVar1 != param_1 + 0x20);
    return;
  }
  lVar8 = 0;
  do {
    *(uint *)((long)param_2 + lVar8 * 4) =
         (param_4 + (uint)*(byte *)((long)param_1 + lVar8 + 0x200) * param_3 >> 5) << 2 |
         (param_4 + (uint)*(byte *)((long)param_1 + lVar8 + 0x100) * param_3 >> 5) << 10 |
         (param_4 + (uint)*(byte *)((long)param_1 + lVar8) * param_3 >> 5) << 0x12;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x100);
  return;
}


