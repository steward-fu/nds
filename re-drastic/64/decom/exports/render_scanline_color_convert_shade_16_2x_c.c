/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_16_2x_c
 * Address  : 0013da70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_color_convert_shade_16_2x_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  short sVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  uint3 uVar17;
  uint3 uVar18;
  uint3 uVar19;
  uint3 uVar20;
  uint3 uVar21;
  uint6 uVar22;
  uint3 uVar23;
  uint3 uVar24;
  long lVar25;
  undefined8 *puVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  ushort uVar37;
  undefined8 uVar40;
  ulong uVar41;
  ushort uVar43;
  undefined8 uVar46;
  ulong uVar47;
  ushort uVar48;
  undefined8 uVar51;
  ulong uVar52;
  ushort uVar53;
  undefined8 uVar56;
  ulong uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  ulong uVar62;
  ulong uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  short sVar80;
  short sVar81;
  undefined8 uVar82;
  ulong uVar83;
  undefined8 uVar84;
  ulong uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  undefined4 uVar38;
  undefined6 uVar39;
  ulong uVar42;
  undefined4 uVar44;
  undefined6 uVar45;
  undefined4 uVar49;
  undefined6 uVar50;
  undefined4 uVar54;
  undefined6 uVar55;
  
  lVar25 = ___stack_chk_guard;
  puVar26 = param_3 + 0x80;
  sVar80 = (short)param_5;
  sVar81 = (short)param_4;
  if (param_3 < param_1 + 0x60 && param_1 < puVar26 || param_3 < param_2 + 0x60 && param_2 < puVar26
     ) {
    do {
      puVar1 = (undefined8 *)((long)param_3 + 4);
      *(ushort *)param_3 =
           sVar80 + (ushort)*(byte *)(param_1 + 0x20) * sVar81 & 0xffe0 |
           (ushort)(param_5 + (uint)*(byte *)(param_1 + 0x40) * param_4 >> 6) |
           (ushort)((param_5 + (uint)*(byte *)param_1 * param_4 >> 6 & 0x1f) << 0xb);
      *(ushort *)((long)param_3 + 2) =
           sVar80 + (ushort)*(byte *)(param_2 + 0x20) * sVar81 & 0xffe0 |
           (ushort)(param_5 + (uint)*(byte *)(param_2 + 0x40) * param_4 >> 6) |
           (ushort)((param_5 + (uint)*(byte *)param_2 * param_4 >> 6 & 0x1f) << 0xb);
      param_3 = puVar1;
      param_1 = (undefined8 *)((long)param_1 + 1);
      param_2 = (undefined8 *)((long)param_2 + 1);
    } while (puVar26 != puVar1);
  }
  else {
    puVar26 = param_1;
    do {
      uVar56 = puVar26[1];
      uVar51 = *puVar26;
      puVar1 = puVar26 + 2;
      uVar12 = puVar26[0x41];
      uVar5 = puVar26[0x40];
      uVar17 = CONCAT12((char)((ulong)uVar51 >> 8),(short)uVar51) & 0xff00ff;
      bVar29 = (byte)((ulong)uVar51 >> 0x28);
      bVar27 = (byte)((ulong)uVar5 >> 8);
      bVar30 = (byte)((ulong)uVar5 >> 0x28);
      uVar46 = param_2[1];
      uVar40 = *param_2;
      uVar84 = puVar26[0x21];
      uVar82 = puVar26[0x20];
      uVar18 = CONCAT12((char)((ulong)uVar82 >> 8),(short)uVar82) & 0xff00ff;
      uVar19 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
      bVar31 = (byte)((ulong)uVar40 >> 0x28);
      uVar59 = param_2[0x41];
      uVar58 = param_2[0x40];
      uVar20 = CONCAT12((char)((ulong)uVar58 >> 8),(short)uVar58) & 0xff00ff;
      bVar32 = (byte)((ulong)uVar58 >> 0x28);
      bVar28 = (byte)((ulong)uVar12 >> 8);
      bVar33 = (byte)((ulong)uVar12 >> 0x28);
      uVar21 = CONCAT12((char)((ulong)uVar59 >> 8),(short)uVar59) & 0xff00ff;
      bVar34 = (byte)((ulong)uVar59 >> 0x28);
      uVar22 = (uint6)CONCAT14((char)(uVar21 >> 0x10),(uint)uVar21) & 0xffff0000ffff;
      uVar21 = CONCAT12((char)((ulong)uVar56 >> 8),(short)uVar56) & 0xff00ff;
      bVar35 = (byte)((ulong)uVar56 >> 0x28);
      uVar23 = CONCAT12((char)((ulong)uVar46 >> 8),(short)uVar46) & 0xff00ff;
      bVar36 = (byte)((ulong)uVar46 >> 0x28);
      uVar24 = CONCAT12((char)((ulong)uVar84 >> 8),(short)uVar84) & 0xff00ff;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x18) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x10) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (short)uVar18 * sVar81) & 0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)(uVar18 >> 0x10) * sVar81,(short)uVar42)) &
               0xffffffffffe0ffff;
      uVar62 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x38) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x30) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x20) * sVar81) &
               0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar82 >> 0x28) * sVar81,
                                 (short)uVar42)) & 0xffffffffffe0ffff;
      uVar63 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar98 = param_5 + (int)uVar22 * param_4;
      iVar8 = param_5 + (uint)(ushort)(uVar22 >> 0x20) * param_4;
      iVar11 = param_5 + (uint)(byte)((ulong)uVar59 >> 0x10) * param_4;
      iVar15 = param_5 + (uint)(byte)((ulong)uVar59 >> 0x18) * param_4;
      uVar61 = param_2[0x21];
      uVar60 = param_2[0x20];
      uVar82 = CONCAT17((char)((uint)iVar8 >> 0x18),
                        CONCAT16((char)((uint)iVar8 >> 0x10),
                                 CONCAT15((char)((uint)iVar8 >> 8),CONCAT14((char)iVar8,uVar98))));
      auVar3[8] = (char)iVar11;
      auVar3._0_8_ = uVar82;
      auVar3[9] = (char)((uint)iVar11 >> 8);
      auVar3[10] = (char)((uint)iVar11 >> 0x10);
      auVar3[11] = (char)((uint)iVar11 >> 0x18);
      auVar2[12] = (char)iVar15;
      auVar2._0_12_ = auVar3;
      auVar2[13] = (char)((uint)iVar15 >> 8);
      auVar2[14] = (char)((uint)iVar15 >> 0x10);
      auVar2[15] = (char)((uint)iVar15 >> 0x18);
      uVar18 = CONCAT12((char)((ulong)uVar61 >> 8),(short)uVar61) & 0xff00ff;
      uVar86 = param_5 + (CONCAT12(bVar27,(ushort)(byte)uVar5) & 0xffff) * param_4 >> 6;
      uVar87 = param_5 + (uint)bVar27 * param_4 >> 6;
      uVar88 = param_5 + (uint)(byte)((ulong)uVar5 >> 0x10) * param_4 >> 6;
      uVar89 = param_5 + (uint)(byte)((ulong)uVar5 >> 0x18) * param_4 >> 6;
      uVar76 = param_5 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uVar5 >> 0x20)) & 0xffff) * param_4
               >> 6;
      uVar77 = param_5 + (uint)bVar30 * param_4 >> 6;
      uVar78 = param_5 + (uint)(byte)((ulong)uVar5 >> 0x30) * param_4 >> 6;
      uVar79 = param_5 + (uint)(byte)((ulong)uVar5 >> 0x38) * param_4 >> 6;
      sVar4 = sVar80 + (short)uVar18 * sVar81;
      sVar6 = sVar80 + (ushort)(byte)(uVar18 >> 0x10) * sVar81;
      sVar7 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x10) * sVar81;
      sVar9 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x18) * sVar81;
      sVar10 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x20) * sVar81;
      sVar13 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x28) * sVar81;
      sVar14 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x30) * sVar81;
      sVar16 = sVar80 + (ushort)(byte)((ulong)uVar61 >> 0x38) * sVar81;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x18) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x10) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (short)uVar24 * sVar81) & 0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)(uVar24 >> 0x10) * sVar81,(short)uVar42)) &
               0xffffffffffe0ffff;
      uVar83 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x38) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x30) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x20) * sVar81) &
               0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar84 >> 0x28) * sVar81,
                                 (short)uVar42)) & 0xffffffffffe0ffff;
      uVar85 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar44 = CONCAT13((char)((ushort)sVar13 >> 8),CONCAT12((char)sVar13,sVar10));
      uVar38 = CONCAT13((char)((ushort)sVar6 >> 8),CONCAT12((char)sVar6,sVar4));
      uVar90 = param_5 + (CONCAT12(bVar28,(ushort)(byte)uVar12) & 0xffff) * param_4 >> 6;
      uVar91 = param_5 + (uint)bVar28 * param_4 >> 6;
      uVar92 = param_5 + (uint)(byte)((ulong)uVar12 >> 0x10) * param_4 >> 6;
      uVar93 = param_5 + (uint)(byte)((ulong)uVar12 >> 0x18) * param_4 >> 6;
      uVar68 = param_5 + (CONCAT12(bVar33,(ushort)(byte)((ulong)uVar12 >> 0x20)) & 0xffff) * param_4
               >> 6;
      uVar69 = param_5 + (uint)bVar33 * param_4 >> 6;
      uVar70 = param_5 + (uint)(byte)((ulong)uVar12 >> 0x30) * param_4 >> 6;
      uVar71 = param_5 + (uint)(byte)((ulong)uVar12 >> 0x38) * param_4 >> 6;
      uVar94 = param_5 + (uVar20 & 0xffff) * param_4 >> 6;
      uVar95 = param_5 + (uint)(byte)(uVar20 >> 0x10) * param_4 >> 6;
      uVar96 = param_5 + (uint)(byte)((ulong)uVar58 >> 0x10) * param_4 >> 6;
      uVar97 = param_5 + (uint)(byte)((ulong)uVar58 >> 0x18) * param_4 >> 6;
      uVar64 = param_5 + (CONCAT12(bVar32,(ushort)(byte)((ulong)uVar58 >> 0x20)) & 0xffff) * param_4
               >> 6;
      uVar65 = param_5 + (uint)bVar32 * param_4 >> 6;
      uVar66 = param_5 + (uint)(byte)((ulong)uVar58 >> 0x30) * param_4 >> 6;
      uVar67 = param_5 + (uint)(byte)((ulong)uVar58 >> 0x38) * param_4 >> 6;
      uVar98 = uVar98 >> 6;
      uVar99 = (uint)((ulong)uVar82 >> 0x26);
      uVar100 = auVar3._8_4_ >> 6;
      uVar101 = auVar2._12_4_ >> 6;
      uVar72 = param_5 + (CONCAT12(bVar34,(ushort)(byte)((ulong)uVar59 >> 0x20)) & 0xffff) * param_4
               >> 6;
      uVar73 = param_5 + (uint)bVar34 * param_4 >> 6;
      uVar74 = param_5 + (uint)(byte)((ulong)uVar59 >> 0x30) * param_4 >> 6;
      uVar75 = param_5 + (uint)(byte)((ulong)uVar59 >> 0x38) * param_4 >> 6;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x18) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x10) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (ushort)(byte)uVar60 * sVar81) & 0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar60 >> 8) * sVar81,(short)uVar42)
                       ) & 0xffffffffffe0ffff;
      uVar52 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar42 = CONCAT62((int6)(((ulong)CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x38) *
                                                         sVar81,
                                                sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x30) *
                                                         sVar81) << 0x20) >> 0x10),
                        sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x20) * sVar81) &
               0xffffffffffffffe0;
      uVar41 = CONCAT44((int)(uVar42 >> 0x20),
                        CONCAT22(sVar80 + (ushort)(byte)((ulong)uVar60 >> 0x28) * sVar81,
                                 (short)uVar42)) & 0xffffffffffe0ffff;
      uVar57 = CONCAT26((short)(uVar41 >> 0x30),CONCAT24((short)(uVar42 >> 0x20),(int)uVar41)) &
               0xffe0ffe0ffffffff;
      uVar41 = CONCAT62((int6)(CONCAT17((char)((ushort)sVar9 >> 8),
                                        CONCAT16((char)sVar9,
                                                 CONCAT15((char)((ushort)sVar7 >> 8),
                                                          CONCAT14((char)sVar7,uVar38)))) >> 0x10),
                        sVar4) & 0xffffffffffffffe0;
      uVar42 = CONCAT44((int)(uVar41 >> 0x20),CONCAT22((short)((uint)uVar38 >> 0x10),(short)uVar41))
               & 0xffffffffffe0ffff;
      uVar42 = CONCAT26((short)(uVar42 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar42)) &
               0xffe0ffe0ffffffff;
      uVar41 = CONCAT62((int6)(CONCAT17((char)((ushort)sVar16 >> 8),
                                        CONCAT16((char)sVar16,
                                                 CONCAT15((char)((ushort)sVar14 >> 8),
                                                          CONCAT14((char)sVar14,uVar44)))) >> 0x10),
                        sVar10) & 0xffffffffffffffe0;
      uVar47 = CONCAT44((int)(uVar41 >> 0x20),CONCAT22((short)((uint)uVar44 >> 0x10),(short)uVar41))
               & 0xffffffffffe0ffff;
      uVar41 = CONCAT26((short)(uVar47 >> 0x30),CONCAT24((short)(uVar41 >> 0x20),(int)uVar47)) &
               0xffe0ffe0ffffffff;
      uVar37 = CONCAT11((byte)(uVar90 >> 8) | (byte)(uVar83 >> 8) |
                        (byte)((ushort)((short)(param_5 + (uVar21 & 0xffff) * param_4 >> 6) << 0xb)
                              >> 8),(byte)uVar90 | (byte)uVar83);
      uVar38 = CONCAT13((byte)(uVar91 >> 8) | (byte)(uVar83 >> 0x18) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)(uVar21 >> 0x10) * param_4 >>
                                               6) << 0xb) >> 8),
                        CONCAT12((byte)uVar91 | (byte)(uVar83 >> 0x10),uVar37));
      uVar39 = CONCAT15((byte)(uVar92 >> 8) | (byte)(uVar83 >> 0x28) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar56 >> 0x10) *
                                                          param_4 >> 6) << 0xb) >> 8),
                        CONCAT14((byte)uVar92 | (byte)(uVar83 >> 0x20),uVar38));
      uVar43 = CONCAT11((byte)(uVar68 >> 8) | (byte)(uVar85 >> 8) |
                        (byte)((ushort)((short)(param_5 + (CONCAT12(bVar35,(ushort)(byte)((ulong)
                                                  uVar56 >> 0x20)) & 0xffff) * param_4 >> 6) << 0xb)
                              >> 8),(byte)uVar68 | (byte)uVar85);
      uVar44 = CONCAT13((byte)(uVar69 >> 8) | (byte)(uVar85 >> 0x18) |
                        (byte)((ushort)((short)(param_5 + (uint)bVar35 * param_4 >> 6) << 0xb) >> 8)
                        ,CONCAT12((byte)uVar69 | (byte)(uVar85 >> 0x10),uVar43));
      uVar45 = CONCAT15((byte)(uVar70 >> 8) | (byte)(uVar85 >> 0x28) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar56 >> 0x30) *
                                                          param_4 >> 6) << 0xb) >> 8),
                        CONCAT14((byte)uVar70 | (byte)(uVar85 >> 0x20),uVar44));
      uVar48 = CONCAT11((byte)(uVar98 >> 8) | (byte)(uVar42 >> 8) |
                        (byte)((ushort)((short)(param_5 + (uVar23 & 0xffff) * param_4 >> 6) << 0xb)
                              >> 8),(byte)uVar98 | (byte)uVar42);
      uVar49 = CONCAT13((byte)(uVar99 >> 8) | (byte)(uVar42 >> 0x18) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)(uVar23 >> 0x10) * param_4 >>
                                               6) << 0xb) >> 8),
                        CONCAT12((byte)uVar99 | (byte)(uVar42 >> 0x10),uVar48));
      uVar50 = CONCAT15((byte)(uVar100 >> 8) | (byte)(uVar42 >> 0x28) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar46 >> 0x10) *
                                                          param_4 >> 6) << 0xb) >> 8),
                        CONCAT14((byte)uVar100 | (byte)(uVar42 >> 0x20),uVar49));
      uVar53 = CONCAT11((byte)(uVar72 >> 8) | (byte)(uVar41 >> 8) |
                        (byte)((ushort)((short)(param_5 + (CONCAT12(bVar36,(ushort)(byte)((ulong)
                                                  uVar46 >> 0x20)) & 0xffff) * param_4 >> 6) << 0xb)
                              >> 8),(byte)uVar72 | (byte)uVar41);
      uVar54 = CONCAT13((byte)(uVar73 >> 8) | (byte)(uVar41 >> 0x18) |
                        (byte)((ushort)((short)(param_5 + (uint)bVar36 * param_4 >> 6) << 0xb) >> 8)
                        ,CONCAT12((byte)uVar73 | (byte)(uVar41 >> 0x10),uVar53));
      uVar55 = CONCAT15((byte)(uVar74 >> 8) | (byte)(uVar41 >> 0x28) |
                        (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar46 >> 0x30) *
                                                          param_4 >> 6) << 0xb) >> 8),
                        CONCAT14((byte)uVar74 | (byte)(uVar41 >> 0x20),uVar54));
      *(ushort *)param_3 =
           CONCAT11((byte)(uVar86 >> 8) | (byte)(uVar62 >> 8) |
                    (byte)((ushort)((short)(param_5 + (uVar17 & 0xffff) * param_4 >> 6) << 0xb) >> 8
                          ),(byte)uVar86 | (byte)uVar62);
      *(ushort *)((long)param_3 + 2) =
           CONCAT11((byte)(uVar94 >> 8) | (byte)(uVar52 >> 8) |
                    (byte)((ushort)((short)(param_5 + (uVar19 & 0xffff) * param_4 >> 6) << 0xb) >> 8
                          ),(byte)uVar94 | (byte)uVar52);
      *(ushort *)((long)param_3 + 4) =
           CONCAT11((byte)(uVar87 >> 8) | (byte)(uVar62 >> 0x18) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)(uVar17 >> 0x10) * param_4 >> 6)
                                   << 0xb) >> 8),(byte)uVar87 | (byte)(uVar62 >> 0x10));
      *(ushort *)((long)param_3 + 6) =
           CONCAT11((byte)(uVar95 >> 8) | (byte)(uVar52 >> 0x18) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)(uVar19 >> 0x10) * param_4 >> 6)
                                   << 0xb) >> 8),(byte)uVar95 | (byte)(uVar52 >> 0x10));
      *(ushort *)(param_3 + 1) =
           CONCAT11((byte)(uVar88 >> 8) | (byte)(uVar62 >> 0x28) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar51 >> 0x10) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar88 | (byte)(uVar62 >> 0x20)
                   );
      *(ushort *)((long)param_3 + 10) =
           CONCAT11((byte)(uVar96 >> 8) | (byte)(uVar52 >> 0x28) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar40 >> 0x10) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar96 | (byte)(uVar52 >> 0x20)
                   );
      *(ushort *)((long)param_3 + 0xc) =
           CONCAT11((byte)(uVar89 >> 8) | (byte)(uVar62 >> 0x38) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar51 >> 0x18) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar89 | (byte)(uVar62 >> 0x30)
                   );
      *(ushort *)((long)param_3 + 0xe) =
           CONCAT11((byte)(uVar97 >> 8) | (byte)(uVar52 >> 0x38) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar40 >> 0x18) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar97 | (byte)(uVar52 >> 0x30)
                   );
      *(ushort *)(param_3 + 2) =
           CONCAT11((byte)(uVar76 >> 8) | (byte)(uVar63 >> 8) |
                    (byte)((ushort)((short)(param_5 + (CONCAT12(bVar29,(ushort)(byte)((ulong)uVar51
                                                                                     >> 0x20)) &
                                                      0xffff) * param_4 >> 6) << 0xb) >> 8),
                    (byte)uVar76 | (byte)uVar63);
      *(ushort *)((long)param_3 + 0x12) =
           CONCAT11((byte)(uVar64 >> 8) | (byte)(uVar57 >> 8) |
                    (byte)((ushort)((short)(param_5 + (CONCAT12(bVar31,(ushort)(byte)((ulong)uVar40
                                                                                     >> 0x20)) &
                                                      0xffff) * param_4 >> 6) << 0xb) >> 8),
                    (byte)uVar64 | (byte)uVar57);
      *(ushort *)((long)param_3 + 0x14) =
           CONCAT11((byte)(uVar77 >> 8) | (byte)(uVar63 >> 0x18) |
                    (byte)((ushort)((short)(param_5 + (uint)bVar29 * param_4 >> 6) << 0xb) >> 8),
                    (byte)uVar77 | (byte)(uVar63 >> 0x10));
      *(ushort *)((long)param_3 + 0x16) =
           CONCAT11((byte)(uVar65 >> 8) | (byte)(uVar57 >> 0x18) |
                    (byte)((ushort)((short)(param_5 + (uint)bVar31 * param_4 >> 6) << 0xb) >> 8),
                    (byte)uVar65 | (byte)(uVar57 >> 0x10));
      *(ushort *)(param_3 + 3) =
           CONCAT11((byte)(uVar78 >> 8) | (byte)(uVar63 >> 0x28) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar51 >> 0x30) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar78 | (byte)(uVar63 >> 0x20)
                   );
      *(ushort *)((long)param_3 + 0x1a) =
           CONCAT11((byte)(uVar66 >> 8) | (byte)(uVar57 >> 0x28) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar40 >> 0x30) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar66 | (byte)(uVar57 >> 0x20)
                   );
      *(ushort *)((long)param_3 + 0x1c) =
           CONCAT11((byte)(uVar79 >> 8) | (byte)(uVar63 >> 0x38) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar51 >> 0x38) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar79 | (byte)(uVar63 >> 0x30)
                   );
      *(ushort *)((long)param_3 + 0x1e) =
           CONCAT11((byte)(uVar67 >> 8) | (byte)(uVar57 >> 0x38) |
                    (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar40 >> 0x38) * param_4
                                           >> 6) << 0xb) >> 8),(byte)uVar67 | (byte)(uVar57 >> 0x30)
                   );
      *(ushort *)(param_3 + 4) = uVar37;
      *(ushort *)((long)param_3 + 0x22) = uVar48;
      *(ushort *)((long)param_3 + 0x24) = (ushort)((uint)uVar38 >> 0x10);
      *(ushort *)((long)param_3 + 0x26) = (ushort)((uint)uVar49 >> 0x10);
      *(ushort *)(param_3 + 5) = (ushort)((uint6)uVar39 >> 0x20);
      *(ushort *)((long)param_3 + 0x2a) = (ushort)((uint6)uVar50 >> 0x20);
      *(ushort *)((long)param_3 + 0x2c) =
           (ushort)(CONCAT17((byte)(uVar93 >> 8) | (byte)(uVar83 >> 0x38) |
                             (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar56 >> 0x18) *
                                                               param_4 >> 6) << 0xb) >> 8),
                             CONCAT16((byte)uVar93 | (byte)(uVar83 >> 0x30),uVar39)) >> 0x30);
      *(ushort *)((long)param_3 + 0x2e) =
           (ushort)(CONCAT17((byte)(uVar101 >> 8) | (byte)(uVar42 >> 0x38) |
                             (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar46 >> 0x18) *
                                                               param_4 >> 6) << 0xb) >> 8),
                             CONCAT16((byte)uVar101 | (byte)(uVar42 >> 0x30),uVar50)) >> 0x30);
      *(ushort *)(param_3 + 6) = uVar43;
      *(ushort *)((long)param_3 + 0x32) = uVar53;
      *(ushort *)((long)param_3 + 0x34) = (ushort)((uint)uVar44 >> 0x10);
      *(ushort *)((long)param_3 + 0x36) = (ushort)((uint)uVar54 >> 0x10);
      *(ushort *)(param_3 + 7) = (ushort)((uint6)uVar45 >> 0x20);
      *(ushort *)((long)param_3 + 0x3a) = (ushort)((uint6)uVar55 >> 0x20);
      *(ushort *)((long)param_3 + 0x3c) =
           (ushort)(CONCAT17((byte)(uVar71 >> 8) | (byte)(uVar85 >> 0x38) |
                             (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar56 >> 0x38) *
                                                               param_4 >> 6) << 0xb) >> 8),
                             CONCAT16((byte)uVar71 | (byte)(uVar85 >> 0x30),uVar45)) >> 0x30);
      *(ushort *)((long)param_3 + 0x3e) =
           (ushort)(CONCAT17((byte)(uVar75 >> 8) | (byte)(uVar41 >> 0x38) |
                             (byte)((ushort)((short)(param_5 + (uint)(byte)((ulong)uVar46 >> 0x38) *
                                                               param_4 >> 6) << 0xb) >> 8),
                             CONCAT16((byte)uVar75 | (byte)(uVar41 >> 0x30),uVar55)) >> 0x30);
      param_3 = param_3 + 8;
      puVar26 = puVar1;
      param_2 = param_2 + 2;
    } while (param_1 + 0x20 != puVar1);
  }
  if (lVar25 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar25 - ___stack_chk_guard,0);
}


