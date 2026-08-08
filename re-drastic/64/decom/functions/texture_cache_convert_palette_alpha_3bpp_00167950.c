/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_palette_alpha_3bpp
 * Address  : 00167950
 * Program  : drastic64
 */


void texture_cache_convert_palette_alpha_3bpp(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint5 uVar2;
  int iVar3;
  uint3 uVar4;
  int iVar5;
  uint5 uVar6;
  undefined uVar7;
  undefined uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined uVar17;
  uint uVar16;
  undefined uVar18;
  undefined uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  uint3 uVar27;
  uint7 uVar28;
  undefined8 uVar29;
  uint3 uVar30;
  uint7 uVar31;
  undefined8 uVar32;
  uint uVar33;
  uint3 uVar34;
  uint7 uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint3 uVar38;
  uint7 uVar39;
  undefined uVar41;
  undefined8 uVar40;
  uint uVar42;
  uint3 uVar43;
  uint5 uVar44;
  undefined uVar47;
  undefined8 uVar45;
  uint uVar46;
  uint3 uVar48;
  uint5 uVar49;
  undefined uVar52;
  undefined8 uVar50;
  uint uVar51;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar60;
  uint6 uVar59;
  undefined uVar61;
  undefined uVar63;
  uint6 uVar62;
  undefined uVar64;
  undefined uVar66;
  uint5 uVar65;
  undefined uVar67;
  undefined uVar68;
  undefined uVar70;
  uint5 uVar69;
  undefined uVar71;
  uint uVar72;
  uint3 uVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint3 uVar77;
  uint uVar78;
  int iVar79;
  undefined uVar81;
  undefined uVar82;
  uint uVar80;
  undefined uVar86;
  uint3 uVar83;
  undefined uVar87;
  uint uVar84;
  int iVar85;
  undefined uVar90;
  uint3 uVar88;
  undefined uVar91;
  uint uVar89;
  undefined uVar95;
  uint3 uVar92;
  undefined uVar96;
  uint uVar93;
  int iVar94;
  uint uVar97;
  uint uVar98;
  int iVar99;
  uint uVar100;
  uint uVar101;
  int iVar102;
  uint uVar103;
  uint uVar104;
  int iVar105;
  uint uVar106;
  uint uVar107;
  int iVar108;
  uint uVar109;
  uint uVar110;
  int iVar111;
  uint uVar112;
  uint uVar113;
  int iVar114;
  uint uVar115;
  uint uVar116;
  int iVar117;
  uint uVar118;
  uint uVar119;
  int iVar120;
  uint uVar121;
  undefined uVar122;
  uint uVar123;
  int iVar124;
  undefined uVar125;
  uint uVar126;
  uint uVar127;
  int iVar128;
  undefined uVar130;
  undefined8 uVar129;
  undefined8 uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  
  puVar14 = *(undefined8 **)(param_1 + 0x18);
  *(undefined *)(param_1 + 0x4a) = 1;
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)malloc(0x400);
    *(undefined8 **)(param_1 + 0x18) = puVar14;
  }
  uVar50 = param_2[1];
  uVar45 = *param_2;
  uVar40 = param_2[3];
  uVar36 = param_2[2];
  iVar15 = 0;
  uVar32 = param_2[5];
  uVar29 = param_2[4];
  uVar131 = param_2[7];
  uVar129 = param_2[6];
  uVar13 = 0;
  uVar16 = (uint)uVar50 & 0xffff;
  bVar23 = (byte)((ulong)uVar45 >> 8) >> 2;
  bVar24 = (byte)((ulong)uVar45 >> 0x18) >> 2;
  bVar25 = (byte)((ulong)uVar45 >> 0x28) >> 2;
  bVar26 = (byte)((ulong)uVar45 >> 0x3a);
  uVar18 = (undefined)((ulong)uVar36 >> 0x30);
  uVar41 = (undefined)((ulong)uVar40 >> 0x20);
  uVar19 = (undefined)((ulong)uVar40 >> 0x30);
  uVar66 = (undefined)((ushort)uVar45 >> 5);
  uVar68 = (undefined)((ushort)((ulong)uVar45 >> 0x10) >> 5);
  uVar70 = (undefined)((ushort)((ulong)uVar45 >> 0x20) >> 5);
  uVar71 = (undefined)(ushort)((ulong)uVar45 >> 0x35);
  uVar59 = CONCAT15((char)((ushort)((ulong)uVar50 >> 0x10) >> 5),
                    (uint5)((byte)(uVar16 >> 5) & 0x1f) << 8) & 0x1fffffffffff;
  uVar62 = CONCAT15((char)(ushort)((ulong)uVar50 >> 0x35),
                    (uint5)((byte)((ushort)((ulong)uVar50 >> 0x20) >> 5) & 0x1f) << 8) &
           0x1fffffffffff;
  uVar65 = CONCAT14((char)((ulong)uVar45 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar45 >> 0x10),(ushort)((byte)uVar45 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar47 = (undefined)((ulong)uVar45 >> 0x30);
  uVar69 = CONCAT14((char)((ulong)uVar50 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar50 >> 0x10),(ushort)((byte)uVar50 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar52 = (undefined)((ulong)uVar50 >> 0x30);
  uVar17 = (undefined)(uVar16 >> 10);
  bVar20 = (byte)((ulong)uVar50 >> 0x18) >> 2;
  bVar21 = (byte)((ulong)uVar50 >> 0x28) >> 2;
  bVar22 = (byte)((ulong)uVar50 >> 0x3a);
  uVar44 = CONCAT14((char)((ulong)uVar29 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar29 >> 0x10),(ushort)((byte)uVar29 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar49 = CONCAT14((char)((ulong)uVar32 >> 0x20),
                    (uint)(CONCAT12((char)((ulong)uVar32 >> 0x10),(ushort)((byte)uVar32 & 0x1f)) &
                          0x1fffff)) & 0x1fffffffff;
  uVar55 = (undefined)((ushort)uVar36 >> 5);
  uVar56 = (undefined)((ushort)((ulong)uVar36 >> 0x10) >> 5);
  uVar57 = (undefined)((ushort)((ulong)uVar36 >> 0x20) >> 5);
  uVar58 = (undefined)(ushort)((ulong)uVar36 >> 0x35);
  bVar9 = (byte)((ulong)uVar36 >> 8) >> 2;
  bVar10 = (byte)((ulong)uVar36 >> 0x18) >> 2;
  bVar11 = (byte)((ulong)uVar36 >> 0x28) >> 2;
  bVar12 = (byte)((ulong)uVar36 >> 0x3a);
  uVar35 = CONCAT16((byte)((ulong)uVar129 >> 0x18) >> 2,
                    (uint6)(uint3)(((byte)((byte)((ulong)uVar129 >> 8) >> 2) & 0x1f) << 0x10)) &
           0x1fffffffffffff;
  uVar39 = CONCAT16((byte)((ulong)uVar129 >> 0x3a),
                    (uint6)(uint3)(((byte)((byte)((ulong)uVar129 >> 0x28) >> 2) & 0x1f) << 0x10)) &
           0x1fffffffffffff;
  uVar28 = CONCAT16((byte)((ulong)uVar131 >> 0x18) >> 2,
                    (uint6)(uint3)(((byte)((byte)((ulong)uVar131 >> 8) >> 2) & 0x1f) << 0x10)) &
           0x1fffffffffffff;
  uVar31 = CONCAT16((byte)((ulong)uVar131 >> 0x3a),
                    (uint6)(uint3)(((byte)((byte)((ulong)uVar131 >> 0x28) >> 2) & 0x1f) << 0x10)) &
           0x1fffffffffffff;
  uVar7 = (undefined)(uVar65 >> 0x20);
  uVar43 = CONCAT12((byte)((ulong)uVar40 >> 8) >> 2,((ushort)uVar40 >> 5) << 8) & 0x1f1fff;
  uVar83 = CONCAT12((byte)((ulong)uVar40 >> 0x18) >> 2,((ushort)((ulong)uVar40 >> 0x10) >> 5) << 8)
           & 0x1f1fff;
  uVar88 = CONCAT12((byte)((ulong)uVar40 >> 0x28) >> 2,((ushort)((ulong)uVar40 >> 0x20) >> 5) << 8)
           & 0x1f1fff;
  uVar92 = CONCAT12((byte)((ulong)uVar40 >> 0x3a),(ushort)((ulong)uVar40 >> 0x35) << 8) & 0x1f1fff;
  uVar38 = CONCAT12((byte)((ulong)uVar32 >> 8) >> 2,((ushort)uVar32 >> 5) << 8) & 0x1f1fff;
  uVar73 = CONCAT12((byte)((ulong)uVar32 >> 0x18) >> 2,((ushort)((ulong)uVar32 >> 0x10) >> 5) << 8)
           & 0x1f1fff;
  uVar48 = CONCAT12((byte)((ulong)uVar32 >> 0x28) >> 2,((ushort)((ulong)uVar32 >> 0x20) >> 5) << 8)
           & 0x1f1fff;
  uVar77 = CONCAT12((byte)((ulong)uVar32 >> 0x3a),(ushort)((ulong)uVar32 >> 0x35) << 8) & 0x1f1fff;
  uVar60 = (undefined)(uVar59 >> 8);
  uVar61 = (undefined)(uVar59 >> 0x28);
  uVar63 = (undefined)(uVar62 >> 8);
  uVar64 = (undefined)(uVar62 >> 0x28);
  uVar6 = CONCAT14((char)((ulong)uVar36 >> 0x20),
                   (uint)(CONCAT12((char)((ulong)uVar36 >> 0x10),(ushort)((byte)uVar36 & 0x1f)) &
                         0x1fffff)) & 0x1fffffffff;
  uVar30 = CONCAT11((byte)((ulong)uVar29 >> 0x18) >> 2,(char)((ushort)((ulong)uVar29 >> 0x10) >> 5))
           & 0x1f1f;
  uVar34 = CONCAT11((byte)((ulong)uVar29 >> 0x3a),(char)(ushort)((ulong)uVar29 >> 0x35)) & 0x1f1f;
  uVar35 = CONCAT16((char)(uVar35 >> 0x30),
                    CONCAT15((char)((ushort)((ulong)uVar129 >> 0x10) >> 5),
                             (uint5)(byte)(uVar35 >> 0x10) << 0x10)) & 0xff1fffffffffff;
  uVar39 = CONCAT16((char)(uVar39 >> 0x30),
                    CONCAT15((char)(ushort)((ulong)uVar129 >> 0x35),
                             (uint5)(byte)(uVar39 >> 0x10) << 0x10)) & 0xff1fffffffffff;
  uVar2 = CONCAT14((char)((ulong)uVar129 >> 0x20),
                   (uint)(CONCAT12((char)((ulong)uVar129 >> 0x10),(ushort)((byte)uVar129 & 0x1f)) &
                         0x1fffff)) & 0x1fffffffff;
  uVar28 = CONCAT16((char)(uVar28 >> 0x30),
                    CONCAT15((char)((ushort)((ulong)uVar131 >> 0x10) >> 5),
                             (uint5)(byte)(uVar28 >> 0x10) << 0x10)) & 0xff1fffffffffff;
  uVar31 = CONCAT16((char)(uVar31 >> 0x30),
                    CONCAT15((char)(ushort)((ulong)uVar131 >> 0x35),
                             (uint5)(byte)(uVar31 >> 0x10) << 0x10)) & 0xff1fffffffffff;
  uVar4 = CONCAT12((char)((ulong)uVar131 >> 0x10),(ushort)((byte)uVar131 & 0x1f)) & 0x1fffff;
  uVar8 = (undefined)(uVar69 >> 0x20);
  uVar27 = CONCAT12((char)((ulong)uVar40 >> 0x10),(ushort)((byte)uVar40 & 0x1f)) & 0x1fffff;
  uVar53 = (undefined)uVar27;
  uVar54 = (undefined)(uVar27 >> 0x10);
  uVar130 = (undefined)(uVar65 >> 0x10);
  uVar122 = (undefined)(uVar6 >> 0x10);
  uVar125 = (undefined)(uVar6 >> 0x20);
  uVar81 = (undefined)(uVar43 >> 8);
  uVar82 = (undefined)(uVar43 >> 0x10);
  uVar86 = (undefined)(uVar83 >> 8);
  uVar87 = (undefined)(uVar83 >> 0x10);
  uVar90 = (undefined)(uVar88 >> 8);
  uVar91 = (undefined)(uVar88 >> 0x10);
  uVar95 = (undefined)(uVar92 >> 8);
  uVar96 = (undefined)(uVar92 >> 0x10);
  uVar43 = CONCAT12((char)(uVar38 >> 0x10),CONCAT11((char)(uVar38 >> 8),(char)uVar49));
  uVar48 = CONCAT12((char)(uVar48 >> 0x10),CONCAT11((char)(uVar48 >> 8),(char)(uVar49 >> 0x20)));
  uVar67 = (undefined)(uVar69 >> 0x10);
  uVar83 = CONCAT12((byte)((ulong)uVar29 >> 8) >> 2,
                    CONCAT11((char)((ushort)uVar29 >> 5),(char)uVar44)) & 0x1f1fff;
  uVar132 = (uint)CONCAT12((char)(uVar30 >> 8),CONCAT11((char)uVar30,(char)(uVar44 >> 0x10)));
  uVar133 = (CONCAT12((byte)((ulong)uVar29 >> 0x28) >> 2,
                      CONCAT11((char)((ushort)((ulong)uVar29 >> 0x20) >> 5),(char)(uVar44 >> 0x20)))
            & 0x1fffff) & 0xffff1fff;
  uVar134 = (uint)(CONCAT12((char)(uVar34 >> 8),CONCAT11((char)uVar34,(char)((ulong)uVar29 >> 0x30))
                           ) & 0xffff1f);
  uVar34 = CONCAT12((char)(uVar35 >> 0x10),CONCAT11((char)((ushort)uVar129 >> 5),(char)uVar2)) &
           0xff1fff;
  uVar38 = CONCAT12((char)(uVar39 >> 0x10),
                    CONCAT11((char)((ushort)((ulong)uVar129 >> 0x20) >> 5),(char)(uVar2 >> 0x20))) &
           0xff1fff;
  uVar27 = CONCAT12((char)(uVar28 >> 0x10),CONCAT11((char)((ushort)uVar131 >> 5),(char)uVar4)) &
           0xff1fff;
  uVar30 = CONCAT12((char)(uVar31 >> 0x10),
                    CONCAT11((char)((ushort)((ulong)uVar131 >> 0x20) >> 5),
                             (char)((ulong)uVar131 >> 0x20))) & 0xff1f1f;
  uVar121 = (CONCAT12(bVar23,CONCAT11(uVar66,(char)uVar65)) & 0x1f1fff) + 0x1f1f1f;
  uVar123 = (CONCAT12(bVar24,CONCAT11(uVar68,uVar130)) & 0x1f1fff) + 0x1f1f1f;
  uVar126 = ((CONCAT12(bVar25,CONCAT11(uVar70,uVar7)) & 0xff1fff) & 0xff1fffff) + 0x1f1f1f;
  uVar127 = (CONCAT12(bVar26,CONCAT11(uVar71,uVar47)) & 0x1f1f1f) + 0x1f1f1f;
  uVar115 = (CONCAT12(uVar17,CONCAT11(uVar60,(char)uVar69)) & 0x1fffff) + 0x1f1f1f;
  uVar116 = (CONCAT12(bVar20,CONCAT11(uVar61,uVar67)) & 0x1fffff) + 0x1f1f1f;
  uVar118 = (CONCAT12(bVar21,CONCAT11(uVar63,uVar8)) & 0xff1fffff) + 0x1f1f1f;
  uVar119 = (CONCAT12(bVar22,CONCAT11(uVar64,uVar52)) & 0x1fff1f) + 0x1f1f1f;
  uVar109 = (CONCAT12(bVar9,CONCAT11(uVar55,(char)uVar6)) & 0x1f1fff) + 0x1f1f1f;
  uVar110 = (CONCAT12(bVar10,CONCAT11(uVar56,uVar122)) & 0x1f1fff) + 0x1f1f1f;
  uVar112 = (CONCAT12(bVar11,CONCAT11(uVar57,uVar125)) & 0x1f1fff) + 0x1f1f1f;
  uVar113 = (CONCAT12(bVar12,CONCAT11(uVar58,uVar18)) & 0x1f1f1f) + 0x1f1f1f;
  uVar103 = CONCAT12(uVar82,CONCAT11(uVar81,uVar53)) + 0x1f1f1f;
  uVar104 = CONCAT12(uVar87,CONCAT11(uVar86,uVar54)) + 0x1f1f1f;
  uVar106 = (CONCAT12(uVar91,CONCAT11(uVar90,uVar41)) & 0xffff1f) + 0x1f1f1f;
  uVar107 = (CONCAT12(uVar96,CONCAT11(uVar95,uVar19)) & 0xffff1f) + 0x1f1f1f;
  uVar80 = uVar43 + 0x1f1f1f;
  uVar46 = (uint)(uint3)(CONCAT16((char)(uVar73 >> 0x10),
                                  CONCAT15((char)(uVar73 >> 8),
                                           CONCAT14((char)(uVar49 >> 0x10),(uint)uVar43))) >> 0x20);
  uVar84 = uVar46 + 0x1f1f1f;
  uVar89 = uVar48 + 0x1f1f1f;
  uVar51 = (uint)((uint3)(CONCAT16((char)(uVar77 >> 0x10),
                                   CONCAT15((char)(uVar77 >> 8),
                                            CONCAT14((char)((ulong)uVar32 >> 0x30),(uint)uVar48)))
                         >> 0x20) & 0xffff1f);
  uVar93 = uVar51 + 0x1f1f1f;
  uVar72 = uVar34 + 0x1f1f1f;
  uVar37 = (uint)(uint3)(CONCAT16((char)(uVar35 >> 0x30),
                                  CONCAT15((char)(uVar35 >> 0x28),
                                           CONCAT14((char)(uVar2 >> 0x10),(uint)uVar34))) >> 0x20);
  uVar74 = uVar37 + 0x1f1f1f;
  uVar76 = uVar38 + 0x1f1f1f;
  uVar42 = (uint)((uint3)(CONCAT16((char)(uVar39 >> 0x30),
                                   CONCAT15((char)(uVar39 >> 0x28),
                                            CONCAT14((char)((ulong)uVar129 >> 0x30),(uint)uVar38)))
                         >> 0x20) & 0xffff1f);
  uVar78 = uVar42 + 0x1f1f1f;
  uVar16 = (uint)(uint3)(CONCAT16((char)(uVar28 >> 0x30),
                                  CONCAT15((char)(uVar28 >> 0x28),
                                           CONCAT14((char)(uVar4 >> 0x10),(uint)uVar27))) >> 0x20);
  uVar33 = (uint)((uint3)(CONCAT16((char)(uVar31 >> 0x30),
                                   CONCAT15((char)(uVar31 >> 0x28),
                                            CONCAT14((char)((ulong)uVar131 >> 0x30),(uint)uVar30)))
                         >> 0x20) & 0xffff1f);
  uVar97 = uVar83 + 0x1f1f1f;
  uVar98 = uVar132 + 0x1f1f1f;
  uVar100 = uVar133 + 0x1f1f1f;
  uVar101 = uVar134 + 0x1f1f1f;
  iVar124 = (uint)(CONCAT12((char)(ushort)(uVar123 >> 0x15),
                            CONCAT11((char)(uint3)(uVar123 >> 0xd),(char)(uVar123 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar24,CONCAT11(uVar68,uVar130)) & 0x1f1fff) * 2;
  iVar128 = (uint)(CONCAT12((char)(ushort)(uVar127 >> 0x15),
                            CONCAT11((char)(uint3)(uVar127 >> 0xd),(char)(uVar127 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar26,CONCAT11(uVar71,uVar47)) & 0x1f1f1f) * 2;
  iVar117 = (uint)(CONCAT12((char)(ushort)(uVar116 >> 0x15),
                            CONCAT11((char)(uint3)(uVar116 >> 0xd),(char)(uVar116 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar20,CONCAT11(uVar61,uVar67)) & 0x1fffff) * 2;
  iVar120 = (uint)(CONCAT12((char)(ushort)(uVar119 >> 0x15),
                            CONCAT11((char)(uint3)(uVar119 >> 0xd),(char)(uVar119 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar22,CONCAT11(uVar64,uVar52)) & 0x1fff1f) * 2;
  iVar111 = (uint)(CONCAT12((char)(ushort)(uVar110 >> 0x15),
                            CONCAT11((char)(uint3)(uVar110 >> 0xd),(char)(uVar110 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar10,CONCAT11(uVar56,uVar122)) & 0x1f1fff) * 2;
  iVar114 = (uint)(CONCAT12((char)(ushort)(uVar113 >> 0x15),
                            CONCAT11((char)(uint3)(uVar113 >> 0xd),(char)(uVar113 >> 5))) & 0x10101)
            + (uint)(CONCAT12(bVar12,CONCAT11(uVar58,uVar18)) & 0x1f1f1f) * 2;
  iVar105 = (uint)(CONCAT12((char)(ushort)(uVar104 >> 0x15),
                            CONCAT11((char)(uint3)(uVar104 >> 0xd),(char)(uVar104 >> 5))) & 0x10101)
            + (uint)CONCAT12(uVar87,CONCAT11(uVar86,uVar54)) * 2;
  iVar108 = (uint)(CONCAT12((char)(ushort)(uVar107 >> 0x15),
                            CONCAT11((char)(uint3)(uVar107 >> 0xd),(char)(uVar107 >> 5))) & 0x10101)
            + (uint)(CONCAT12(uVar96,CONCAT11(uVar95,uVar19)) & 0xffff1f) * 2;
  iVar99 = (uint)(CONCAT12((char)(ushort)(uVar98 >> 0x15),
                           CONCAT11((char)(uint3)(uVar98 >> 0xd),(char)(uVar98 >> 5))) & 0x10101) +
           uVar132 * 2;
  iVar102 = (uint)(CONCAT12((char)(ushort)(uVar101 >> 0x15),
                            CONCAT11((char)(uint3)(uVar101 >> 0xd),(char)(uVar101 >> 5))) & 0x10101)
            + uVar134 * 2;
  iVar85 = (uint)(CONCAT12((char)(ushort)(uVar84 >> 0x15),
                           CONCAT11((char)(uint3)(uVar84 >> 0xd),(char)(uVar84 >> 5))) & 0x10101) +
           uVar46 * 2;
  iVar94 = (uint)(CONCAT12((char)(ushort)(uVar93 >> 0x15),
                           CONCAT11((char)(uint3)(uVar93 >> 0xd),(char)(uVar93 >> 5))) & 0x10101) +
           uVar51 * 2;
  iVar75 = (uint)(CONCAT12((char)(ushort)(uVar74 >> 0x15),
                           CONCAT11((char)(uint3)(uVar74 >> 0xd),(char)(uVar74 >> 5))) & 0x10101) +
           uVar37 * 2;
  iVar79 = (uint)(CONCAT12((char)(ushort)(uVar78 >> 0x15),
                           CONCAT11((char)(uint3)(uVar78 >> 0xd),(char)(uVar78 >> 5))) & 0x10101) +
           uVar42 * 2;
  iVar3 = (uint)((uint3)(uVar16 + 0x1f1f1f >> 5) & 0x10101) + uVar16 * 2;
  iVar5 = (uint)((uint3)(uVar33 + 0x1f1f1f >> 5) & 0x10101) + uVar33 * 2;
  do {
    iVar1 = iVar15 + (uVar13 >> 1);
    uVar13 = uVar13 + 1;
    iVar15 = iVar15 + 4;
    uVar18 = (undefined)iVar1;
    uVar19 = (undefined)((uint)(iVar1 * 0x1000000) >> 0x18);
    puVar14[1] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar128 >> 0x10),
                                          CONCAT15((char)((uint)iVar128 >> 8),
                                                   CONCAT14((char)iVar128,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar126 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar126 >> 0xd),
                                                           (char)(uVar126 >> 5))) & 0x10101) +
                                                  (CONCAT12(bVar25,CONCAT11(uVar70,uVar7)) &
                                                  0x1f1fff) * 2)))));
    *puVar14 = CONCAT17(uVar18,CONCAT16((char)((uint)iVar124 >> 0x10),
                                        CONCAT15((char)((uint)iVar124 >> 8),
                                                 CONCAT14((char)iVar124,
                                                          CONCAT13(uVar18,(CONCAT12((char)(ushort)(
                                                  uVar121 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar121 >> 0xd),
                                                           (char)(uVar121 >> 5))) & 0x10101) +
                                                  (CONCAT12(bVar23,CONCAT11(uVar66,(char)uVar65)) &
                                                  0x1f1fff) * 2)))));
    puVar14[3] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar120 >> 0x10),
                                          CONCAT15((char)((uint)iVar120 >> 8),
                                                   CONCAT14((char)iVar120,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar118 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar118 >> 0xd),
                                                           (char)(uVar118 >> 5))) & 0x10101) +
                                                  (CONCAT12(bVar21,CONCAT11(uVar63,uVar8)) &
                                                  0x1fffff) * 2)))));
    puVar14[2] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar117 >> 0x10),
                                          CONCAT15((char)((uint)iVar117 >> 8),
                                                   CONCAT14((char)iVar117,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar115 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar115 >> 0xd),
                                                           (char)(uVar115 >> 5))) & 0x10101) +
                                                  (CONCAT12(uVar17,CONCAT11(uVar60,(char)uVar69)) &
                                                  0x1fffff) * 2)))));
    puVar14[5] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar114 >> 0x10),
                                          CONCAT15((char)((uint)iVar114 >> 8),
                                                   CONCAT14((char)iVar114,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar112 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar112 >> 0xd),
                                                           (char)(uVar112 >> 5))) & 0x10101) +
                                                  (CONCAT12(bVar11,CONCAT11(uVar57,uVar125)) &
                                                  0x1f1fff) * 2)))));
    puVar14[4] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar111 >> 0x10),
                                          CONCAT15((char)((uint)iVar111 >> 8),
                                                   CONCAT14((char)iVar111,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar109 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar109 >> 0xd),
                                                           (char)(uVar109 >> 5))) & 0x10101) +
                                                  (CONCAT12(bVar9,CONCAT11(uVar55,(char)uVar6)) &
                                                  0x1f1fff) * 2)))));
    puVar14[7] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar108 >> 0x10),
                                          CONCAT15((char)((uint)iVar108 >> 8),
                                                   CONCAT14((char)iVar108,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar106 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar106 >> 0xd),
                                                           (char)(uVar106 >> 5))) & 0x10101) +
                                                  (CONCAT12(uVar91,CONCAT11(uVar90,uVar41)) &
                                                  0xffff1f) * 2)))));
    puVar14[6] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar105 >> 0x10),
                                          CONCAT15((char)((uint)iVar105 >> 8),
                                                   CONCAT14((char)iVar105,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar103 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar103 >> 0xd),
                                                           (char)(uVar103 >> 5))) & 0x10101) +
                                                  CONCAT12(uVar82,CONCAT11(uVar81,uVar53)) * 2)))));
    puVar14[9] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar102 >> 0x10),
                                          CONCAT15((char)((uint)iVar102 >> 8),
                                                   CONCAT14((char)iVar102,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar100 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar100 >> 0xd),
                                                           (char)(uVar100 >> 5))) & 0x10101) +
                                                  (int3)uVar133 * 2)))));
    puVar14[8] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar99 >> 0x10),
                                          CONCAT15((char)((uint)iVar99 >> 8),
                                                   CONCAT14((char)iVar99,
                                                            CONCAT13(uVar18,(CONCAT12((char)(ushort)
                                                  (uVar97 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar97 >> 0xd),
                                                           (char)(uVar97 >> 5))) & 0x10101) +
                                                  uVar83 * 2)))));
    puVar14[0xb] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar94 >> 0x10),
                                            CONCAT15((char)((uint)iVar94 >> 8),
                                                     CONCAT14((char)iVar94,
                                                              CONCAT13(uVar18,(CONCAT12((char)(
                                                  ushort)(uVar89 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar89 >> 0xd),
                                                           (char)(uVar89 >> 5))) & 0x10101) +
                                                  uVar48 * 2)))));
    puVar14[10] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar85 >> 0x10),
                                           CONCAT15((char)((uint)iVar85 >> 8),
                                                    CONCAT14((char)iVar85,
                                                             CONCAT13(uVar18,(CONCAT12((char)(ushort
                                                  )(uVar80 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar80 >> 0xd),
                                                           (char)(uVar80 >> 5))) & 0x10101) +
                                                  uVar43 * 2)))));
    puVar14[0xd] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar79 >> 0x10),
                                            CONCAT15((char)((uint)iVar79 >> 8),
                                                     CONCAT14((char)iVar79,
                                                              CONCAT13(uVar18,(CONCAT12((char)(
                                                  ushort)(uVar76 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar76 >> 0xd),
                                                           (char)(uVar76 >> 5))) & 0x10101) +
                                                  uVar38 * 2)))));
    puVar14[0xc] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar75 >> 0x10),
                                            CONCAT15((char)((uint)iVar75 >> 8),
                                                     CONCAT14((char)iVar75,
                                                              CONCAT13(uVar18,(CONCAT12((char)(
                                                  ushort)(uVar72 >> 0x15),
                                                  CONCAT11((char)(uint3)(uVar72 >> 0xd),
                                                           (char)(uVar72 >> 5))) & 0x10101) +
                                                  uVar34 * 2)))));
    puVar14[0xf] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar5 >> 0x10),
                                            CONCAT15((char)((uint)iVar5 >> 8),
                                                     CONCAT14((char)iVar5,
                                                              CONCAT13(uVar19,((uint3)(uVar30 + 
                                                  0x1f1f1f >> 5) & 0x10101) + uVar30 * 2)))));
    puVar14[0xe] = CONCAT17(uVar18,CONCAT16((char)((uint)iVar3 >> 0x10),
                                            CONCAT15((char)((uint)iVar3 >> 8),
                                                     CONCAT14((char)iVar3,
                                                              CONCAT13(uVar19,((uint3)(uVar27 + 
                                                  0x1f1f1f >> 5) & 0x10101) + uVar27 * 2)))));
    puVar14 = puVar14 + 0x10;
  } while (uVar13 != 8);
  return;
}


