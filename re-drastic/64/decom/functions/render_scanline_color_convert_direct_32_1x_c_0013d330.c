/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_32_1x_c
 * Address  : 0013d330
 * Program  : drastic64
 */


void render_scanline_color_convert_direct_32_1x_c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  short sVar23;
  int iVar24;
  short sVar25;
  uint3 uVar26;
  undefined8 *puVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  int iVar37;
  undefined8 uVar38;
  int iVar39;
  int iVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  undefined8 uVar44;
  int iVar45;
  int iVar46;
  undefined8 uVar47;
  int iVar48;
  short sVar49;
  short sVar53;
  int iVar50;
  int iVar51;
  short sVar54;
  undefined8 uVar52;
  short sVar56;
  int iVar55;
  short sVar59;
  int iVar57;
  short sVar60;
  undefined8 uVar58;
  short sVar62;
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  
  if (param_2 + 0x80 <= param_1 || param_1 + 0x60 <= param_2) {
    puVar27 = param_1;
    do {
      uVar41 = puVar27[0x21];
      uVar38 = puVar27[0x20];
      puVar1 = puVar27 + 2;
      uVar58 = puVar27[0x41];
      uVar52 = puVar27[0x40];
      bVar29 = (byte)((ulong)uVar38 >> 8);
      bVar33 = (byte)((ulong)uVar38 >> 0x28);
      bVar30 = (byte)((ulong)uVar41 >> 8);
      bVar34 = (byte)((ulong)uVar41 >> 0x28);
      uVar26 = CONCAT12((char)((ulong)uVar58 >> 8),(short)uVar58) & 0xff00ff;
      uVar47 = puVar27[1];
      uVar44 = *puVar27;
      sVar14 = (ushort)(byte)uVar52 << 2;
      sVar16 = (ushort)(byte)((ulong)uVar52 >> 8) << 2;
      sVar17 = (ushort)(byte)((ulong)uVar52 >> 0x10) << 2;
      sVar19 = (ushort)(byte)((ulong)uVar52 >> 0x18) << 2;
      sVar20 = (ushort)(byte)((ulong)uVar52 >> 0x20) << 2;
      sVar22 = (ushort)(byte)((ulong)uVar52 >> 0x28) << 2;
      sVar23 = (ushort)(byte)((ulong)uVar52 >> 0x30) << 2;
      sVar25 = (ushort)(byte)((ulong)uVar52 >> 0x38) << 2;
      bVar31 = (byte)((ulong)uVar44 >> 8);
      bVar35 = (byte)((ulong)uVar44 >> 0x28);
      sVar49 = (short)uVar26 << 2;
      sVar53 = (ushort)(byte)(uVar26 >> 0x10) << 2;
      sVar54 = (ushort)(byte)((ulong)uVar58 >> 0x10) << 2;
      sVar56 = (ushort)(byte)((ulong)uVar58 >> 0x18) << 2;
      sVar59 = (ushort)(byte)((ulong)uVar58 >> 0x28) << 2;
      sVar60 = (ushort)(byte)((ulong)uVar58 >> 0x30) << 2;
      sVar62 = (ushort)(byte)((ulong)uVar58 >> 0x38) << 2;
      bVar32 = (byte)((ulong)uVar47 >> 8);
      bVar36 = (byte)((ulong)uVar47 >> 0x28);
      iVar50 = (uint)(byte)((ulong)uVar58 >> 0x20) << 2;
      iVar6 = (CONCAT12(bVar29,(ushort)(byte)uVar38) & 0xffff) << 10;
      iVar7 = (uint)bVar29 << 10;
      iVar8 = (uint)(byte)((ulong)uVar38 >> 0x10) << 10;
      iVar9 = (uint)(byte)((ulong)uVar38 >> 0x18) << 10;
      iVar2 = (CONCAT12(bVar33,(ushort)(byte)((ulong)uVar38 >> 0x20)) & 0xffff) << 10;
      iVar3 = (uint)bVar33 << 10;
      iVar4 = (uint)(byte)((ulong)uVar38 >> 0x30) << 10;
      iVar5 = (uint)(byte)((ulong)uVar38 >> 0x38) << 10;
      iVar63 = ((CONCAT12(bVar30,(short)uVar41) & 0xff00ff) & 0xffff) << 10;
      iVar64 = (uint)bVar30 << 10;
      iVar65 = (uint)(byte)((ulong)uVar41 >> 0x10) << 10;
      iVar66 = (uint)(byte)((ulong)uVar41 >> 0x18) << 10;
      iVar37 = (CONCAT12(bVar34,(ushort)(byte)((ulong)uVar41 >> 0x20)) & 0xffff) << 10;
      iVar39 = (uint)bVar34 << 10;
      iVar40 = (uint)(byte)((ulong)uVar41 >> 0x30) << 10;
      iVar42 = (uint)(byte)((ulong)uVar41 >> 0x38) << 10;
      iVar15 = (uint)CONCAT12(bVar31,(ushort)(byte)uVar44) << 0x12;
      iVar18 = (uint)bVar31 << 0x12;
      iVar21 = (uint)(byte)((ulong)uVar44 >> 0x10) << 0x12;
      iVar24 = (uint)(byte)((ulong)uVar44 >> 0x18) << 0x12;
      iVar10 = (uint)CONCAT12(bVar35,(ushort)(byte)((ulong)uVar44 >> 0x20)) << 0x12;
      iVar11 = (uint)bVar35 << 0x12;
      iVar12 = (uint)(byte)((ulong)uVar44 >> 0x30) << 0x12;
      iVar13 = (uint)(byte)((ulong)uVar44 >> 0x38) << 0x12;
      iVar51 = (uint)(CONCAT12(bVar32,(short)uVar47) & 0xff00ff) << 0x12;
      iVar55 = (uint)bVar32 << 0x12;
      iVar57 = (uint)(byte)((ulong)uVar47 >> 0x10) << 0x12;
      iVar61 = (uint)(byte)((ulong)uVar47 >> 0x18) << 0x12;
      iVar43 = (uint)CONCAT12(bVar36,(ushort)(byte)((ulong)uVar47 >> 0x20)) << 0x12;
      iVar45 = (uint)bVar36 << 0x12;
      iVar46 = (uint)(byte)((ulong)uVar47 >> 0x30) << 0x12;
      iVar48 = (uint)(byte)((ulong)uVar47 >> 0x38) << 0x12;
      param_2[1] = CONCAT17((char)((uint)iVar24 >> 0x18),
                            CONCAT16((byte)((uint)iVar9 >> 0x10) | (byte)((uint)iVar24 >> 0x10),
                                     CONCAT15((byte)((uint)iVar9 >> 8) | (byte)((ushort)sVar19 >> 8)
                                              ,CONCAT14((char)sVar19,
                                                        CONCAT13((char)((uint)iVar21 >> 0x18),
                                                                 CONCAT12((byte)((uint)iVar8 >> 0x10
                                                                                ) | (byte)((uint)
                                                  iVar21 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar8 >> 8) |
                                                           (byte)((ushort)sVar17 >> 8),(char)sVar17)
                                                  ))))));
      *param_2 = CONCAT17((char)((uint)iVar18 >> 0x18),
                          CONCAT16((byte)((uint)iVar7 >> 0x10) | (byte)((uint)iVar18 >> 0x10),
                                   CONCAT15((byte)((uint)iVar7 >> 8) | (byte)((ushort)sVar16 >> 8),
                                            CONCAT14((char)sVar16,
                                                     CONCAT13((char)((uint)iVar15 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar6 >> 0x10) |
                                                                       (byte)((uint)iVar15 >> 0x10),
                                                                       CONCAT11((byte)((uint)iVar6
                                                                                      >> 8) |
                                                                                (byte)((ushort)
                                                  sVar14 >> 8),(char)sVar14)))))));
      param_2[3] = CONCAT17((char)((uint)iVar13 >> 0x18),
                            CONCAT16((byte)((uint)iVar5 >> 0x10) | (byte)((uint)iVar13 >> 0x10),
                                     CONCAT15((byte)((uint)iVar5 >> 8) | (byte)((ushort)sVar25 >> 8)
                                              ,CONCAT14((char)sVar25,
                                                        CONCAT13((char)((uint)iVar12 >> 0x18),
                                                                 CONCAT12((byte)((uint)iVar4 >> 0x10
                                                                                ) | (byte)((uint)
                                                  iVar12 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar4 >> 8) |
                                                           (byte)((ushort)sVar23 >> 8),(char)sVar23)
                                                  ))))));
      param_2[2] = CONCAT17((char)((uint)iVar11 >> 0x18),
                            CONCAT16((byte)((uint)iVar3 >> 0x10) | (byte)((uint)iVar11 >> 0x10),
                                     CONCAT15((byte)((uint)iVar3 >> 8) | (byte)((ushort)sVar22 >> 8)
                                              ,CONCAT14((char)sVar22,
                                                        CONCAT13((char)((uint)iVar10 >> 0x18),
                                                                 CONCAT12((byte)((uint)iVar2 >> 0x10
                                                                                ) | (byte)((uint)
                                                  iVar10 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar2 >> 8) |
                                                           (byte)((ushort)sVar20 >> 8),(char)sVar20)
                                                  ))))));
      param_2[5] = CONCAT17((char)((uint)iVar61 >> 0x18),
                            CONCAT16((byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar61 >> 0x10),
                                     CONCAT15((byte)((uint)iVar66 >> 8) |
                                              (byte)((ushort)sVar56 >> 8),
                                              CONCAT14((char)sVar56,
                                                       CONCAT13((char)((uint)iVar57 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar65 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar57 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar65 >> 8) |
                                                           (byte)((ushort)sVar54 >> 8),(char)sVar54)
                                                  ))))));
      param_2[4] = CONCAT17((char)((uint)iVar55 >> 0x18),
                            CONCAT16((byte)((uint)iVar64 >> 0x10) | (byte)((uint)iVar55 >> 0x10),
                                     CONCAT15((byte)((uint)iVar64 >> 8) |
                                              (byte)((ushort)sVar53 >> 8),
                                              CONCAT14((char)sVar53,
                                                       CONCAT13((char)((uint)iVar51 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar63 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar51 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar63 >> 8) |
                                                           (byte)((ushort)sVar49 >> 8),(char)sVar49)
                                                  ))))));
      param_2[7] = CONCAT17((char)((uint)iVar48 >> 0x18),
                            CONCAT16((byte)((uint)iVar42 >> 0x10) | (byte)((uint)iVar48 >> 0x10),
                                     CONCAT15((byte)((uint)iVar42 >> 8) |
                                              (byte)((ushort)sVar62 >> 8),
                                              CONCAT14((char)sVar62,
                                                       CONCAT13((char)((uint)iVar46 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar40 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar46 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar40 >> 8) |
                                                           (byte)((ushort)sVar60 >> 8),(char)sVar60)
                                                  ))))));
      param_2[6] = CONCAT17((char)((uint)iVar45 >> 0x18),
                            CONCAT16((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar45 >> 0x10),
                                     CONCAT15((byte)((uint)iVar39 >> 8) |
                                              (byte)((ushort)sVar59 >> 8),
                                              CONCAT14((char)sVar59,
                                                       CONCAT13((char)((uint)iVar43 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar37 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar43 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar37 >> 8) |
                                                           (byte)((uint)iVar50 >> 8),(char)iVar50)))
                                                  ))));
      param_2 = param_2 + 8;
      puVar27 = puVar1;
    } while (param_1 + 0x20 != puVar1);
    return;
  }
  lVar28 = 0;
  do {
    *(uint *)((long)param_2 + lVar28 * 4) =
         (uint)*(byte *)((long)param_1 + lVar28 + 0x200) << 2 |
         (uint)*(byte *)((long)param_1 + lVar28 + 0x100) << 10 |
         (uint)*(byte *)((long)param_1 + lVar28) << 0x12;
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0x100);
  return;
}


