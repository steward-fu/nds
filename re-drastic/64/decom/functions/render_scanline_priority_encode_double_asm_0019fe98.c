/*
 * Ghidra decompilation
 *
 * Function : render_scanline_priority_encode_double_asm
 * Address  : 0019fe98
 * Program  : drastic64
 */


void render_scanline_priority_encode_double_asm(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar7;
  byte bVar8;
  undefined4 uVar6;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  undefined4 uVar10;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  undefined4 uVar14;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  undefined4 uVar18;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  undefined4 uVar22;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  undefined4 uVar26;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined4 uVar32;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined4 uVar40;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  undefined4 uVar48;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  undefined4 uVar53;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  undefined4 uVar58;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  undefined4 uVar63;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  undefined4 uVar68;
  byte bVar71;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  undefined4 uVar73;
  byte bVar76;
  byte bVar77;
  byte bVar79;
  byte bVar80;
  undefined4 uVar78;
  byte bVar81;
  byte bVar82;
  byte bVar84;
  byte bVar85;
  undefined4 uVar83;
  byte bVar86;
  byte bVar88;
  undefined4 uVar87;
  byte bVar89;
  byte bVar91;
  byte bVar92;
  undefined4 uVar90;
  byte bVar93;
  byte bVar95;
  byte bVar96;
  undefined4 uVar94;
  byte bVar97;
  byte bVar99;
  byte bVar100;
  undefined4 uVar98;
  byte bVar101;
  byte bVar103;
  byte bVar104;
  undefined4 uVar102;
  byte bVar105;
  byte bVar107;
  byte bVar108;
  undefined4 uVar106;
  byte bVar109;
  byte bVar111;
  byte bVar112;
  undefined4 uVar110;
  byte bVar113;
  byte bVar115;
  byte bVar116;
  undefined4 uVar114;
  byte bVar117;
  undefined4 uVar118;
  undefined4 uVar119;
  undefined4 uVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined4 uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  undefined4 uVar126;
  undefined4 uVar127;
  undefined4 uVar128;
  undefined4 uVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  undefined4 uVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  
  uVar4 = (uint)*(byte *)(param_1 + 0xb3);
  uVar6 = 0;
  uVar10 = 0;
  uVar14 = 0;
  uVar18 = 0;
  uVar22 = 0;
  uVar26 = 0;
  uVar32 = 0;
  uVar40 = 0;
  uVar48 = 0;
  uVar53 = 0;
  uVar58 = 0;
  uVar63 = 0;
  uVar68 = 0;
  uVar73 = 0;
  uVar78 = 0;
  uVar83 = 0;
  uVar87 = 0;
  uVar90 = 0;
  uVar94 = 0;
  uVar98 = 0;
  uVar102 = 0;
  uVar106 = 0;
  uVar110 = 0;
  uVar114 = 0;
  uVar118 = 0;
  uVar119 = 0;
  uVar120 = 0;
  uVar121 = 0;
  uVar122 = 0;
  uVar123 = 0;
  uVar124 = 0;
  uVar125 = 0;
  uVar126 = 0;
  uVar127 = 0;
  uVar128 = 0;
  uVar129 = 0;
  uVar130 = 0;
  uVar131 = 0;
  uVar132 = 0;
  uVar133 = 0;
  pbVar5 = (byte *)(param_1 + 0x84);
  if (*(byte *)(param_1 + 0xb3) != 0) {
    do {
      while( true ) {
        bVar7 = *pbVar5;
        bVar9 = (byte)((uint)uVar6 >> 8);
        bVar11 = (byte)((uint)uVar6 >> 0x10);
        bVar12 = (byte)((uint)uVar6 >> 0x18);
        bVar15 = (byte)((uint)uVar10 >> 8);
        bVar16 = (byte)((uint)uVar10 >> 0x10);
        bVar17 = (byte)((uint)uVar10 >> 0x18);
        bVar20 = (byte)((uint)uVar14 >> 8);
        bVar21 = (byte)((uint)uVar14 >> 0x10);
        bVar23 = (byte)((uint)uVar14 >> 0x18);
        bVar25 = (byte)((uint)uVar18 >> 8);
        bVar27 = (byte)((uint)uVar18 >> 0x10);
        bVar28 = (byte)((uint)uVar18 >> 0x18);
        bVar34 = (byte)((uint)uVar22 >> 8);
        bVar36 = (byte)((uint)uVar22 >> 0x10);
        bVar38 = (byte)((uint)uVar22 >> 0x18);
        bVar44 = (byte)((uint)uVar26 >> 8);
        bVar46 = (byte)((uint)uVar26 >> 0x10);
        bVar29 = (byte)((uint)uVar26 >> 0x18);
        bVar33 = (byte)((uint)uVar32 >> 8);
        bVar35 = (byte)((uint)uVar32 >> 0x10);
        bVar37 = (byte)((uint)uVar32 >> 0x18);
        bVar41 = (byte)((uint)uVar40 >> 8);
        bVar43 = (byte)((uint)uVar40 >> 0x10);
        bVar45 = (byte)((uint)uVar40 >> 0x18);
        bVar49 = (byte)((uint)uVar48 >> 8);
        bVar50 = (byte)((uint)uVar48 >> 0x10);
        bVar51 = (byte)((uint)uVar48 >> 0x18);
        bVar54 = (byte)((uint)uVar53 >> 8);
        bVar55 = (byte)((uint)uVar53 >> 0x10);
        bVar56 = (byte)((uint)uVar53 >> 0x18);
        bVar59 = (byte)((uint)uVar58 >> 8);
        bVar60 = (byte)((uint)uVar58 >> 0x10);
        bVar61 = (byte)((uint)uVar58 >> 0x18);
        bVar64 = (byte)((uint)uVar63 >> 8);
        bVar65 = (byte)((uint)uVar63 >> 0x10);
        bVar66 = (byte)((uint)uVar63 >> 0x18);
        bVar69 = (byte)((uint)uVar68 >> 8);
        bVar70 = (byte)((uint)uVar68 >> 0x10);
        bVar71 = (byte)((uint)uVar68 >> 0x18);
        bVar74 = (byte)((uint)uVar73 >> 8);
        bVar75 = (byte)((uint)uVar73 >> 0x10);
        bVar76 = (byte)((uint)uVar73 >> 0x18);
        bVar79 = (byte)((uint)uVar78 >> 8);
        bVar80 = (byte)((uint)uVar78 >> 0x10);
        bVar81 = (byte)((uint)uVar78 >> 0x18);
        bVar84 = (byte)((uint)uVar83 >> 8);
        bVar85 = (byte)((uint)uVar83 >> 0x10);
        bVar86 = (byte)((uint)uVar83 >> 0x18);
        bVar8 = (byte)uVar6;
        bVar13 = (byte)uVar10;
        bVar19 = (byte)uVar14;
        bVar24 = (byte)uVar18;
        bVar30 = (byte)uVar22;
        bVar42 = (byte)uVar26;
        bVar31 = (byte)uVar32;
        bVar39 = (byte)uVar40;
        bVar47 = (byte)uVar48;
        bVar52 = (byte)uVar53;
        bVar57 = (byte)uVar58;
        bVar62 = (byte)uVar63;
        bVar67 = (byte)uVar68;
        bVar72 = (byte)uVar73;
        bVar77 = (byte)uVar78;
        bVar82 = (byte)uVar83;
        if ((((uint)bVar7 << 5) >> 7 & 1) != 0) break;
        puVar1 = (undefined4 *)(param_2 + (ulong)bVar7 * 0x20);
        puVar2 = (undefined4 *)(param_3 + (ulong)bVar7 * 0x20);
        puVar3 = (undefined4 *)(param_4 + (ulong)bVar7 * 0x20);
        uVar6 = *puVar1;
        uVar10 = puVar1[1];
        uVar14 = puVar1[2];
        uVar18 = puVar1[3];
        uVar22 = puVar1[4];
        uVar26 = puVar1[5];
        uVar32 = puVar1[6];
        uVar40 = puVar1[7];
        bVar7 = (byte)uVar6;
        bVar88 = (byte)((uint)uVar6 >> 8);
        bVar89 = (byte)((uint)uVar6 >> 0x10);
        bVar91 = (byte)((uint)uVar6 >> 0x18);
        bVar92 = (byte)uVar10;
        bVar93 = (byte)((uint)uVar10 >> 8);
        bVar95 = (byte)((uint)uVar10 >> 0x10);
        bVar96 = (byte)((uint)uVar10 >> 0x18);
        bVar97 = (byte)uVar14;
        bVar99 = (byte)((uint)uVar14 >> 8);
        bVar100 = (byte)((uint)uVar14 >> 0x10);
        bVar101 = (byte)((uint)uVar14 >> 0x18);
        bVar103 = (byte)uVar18;
        bVar104 = (byte)((uint)uVar18 >> 8);
        bVar105 = (byte)((uint)uVar18 >> 0x10);
        bVar107 = (byte)((uint)uVar18 >> 0x18);
        bVar108 = (byte)uVar22;
        bVar109 = (byte)((uint)uVar22 >> 8);
        bVar111 = (byte)((uint)uVar22 >> 0x10);
        bVar112 = (byte)((uint)uVar22 >> 0x18);
        bVar113 = (byte)uVar26;
        bVar115 = (byte)((uint)uVar26 >> 8);
        bVar116 = (byte)((uint)uVar26 >> 0x10);
        bVar117 = (byte)((uint)uVar26 >> 0x18);
        bVar134 = (byte)uVar32;
        bVar135 = (byte)((uint)uVar32 >> 8);
        bVar136 = (byte)((uint)uVar32 >> 0x10);
        bVar137 = (byte)((uint)uVar32 >> 0x18);
        bVar138 = (byte)uVar40;
        bVar139 = (byte)((uint)uVar40 >> 8);
        bVar140 = (byte)((uint)uVar40 >> 0x10);
        bVar141 = (byte)((uint)uVar40 >> 0x18);
        *puVar2 = CONCAT13(bVar91 & ~bVar12,
                           CONCAT12(bVar89 & ~bVar11,CONCAT11(bVar88 & ~bVar9,bVar7 & ~bVar8)));
        puVar2[1] = CONCAT13(bVar96 & ~bVar17,
                             CONCAT12(bVar95 & ~bVar16,CONCAT11(bVar93 & ~bVar15,bVar92 & ~bVar13)))
        ;
        puVar2[2] = CONCAT13(bVar101 & ~bVar23,
                             CONCAT12(bVar100 & ~bVar21,CONCAT11(bVar99 & ~bVar20,bVar97 & ~bVar19))
                            );
        puVar2[3] = CONCAT13(bVar107 & ~bVar28,
                             CONCAT12(bVar105 & ~bVar27,
                                      CONCAT11(bVar104 & ~bVar25,bVar103 & ~bVar24)));
        puVar2[4] = CONCAT13(bVar112 & ~bVar38,
                             CONCAT12(bVar111 & ~bVar36,
                                      CONCAT11(bVar109 & ~bVar34,bVar108 & ~bVar30)));
        puVar2[5] = CONCAT13(bVar117 & ~bVar29,
                             CONCAT12(bVar116 & ~bVar46,
                                      CONCAT11(bVar115 & ~bVar44,bVar113 & ~bVar42)));
        puVar2[6] = CONCAT13(bVar137 & ~bVar37,
                             CONCAT12(bVar136 & ~bVar35,
                                      CONCAT11(bVar135 & ~bVar33,bVar134 & ~bVar31)));
        puVar2[7] = CONCAT13(bVar141 & ~bVar45,
                             CONCAT12(bVar140 & ~bVar43,
                                      CONCAT11(bVar139 & ~bVar41,bVar138 & ~bVar39)));
        *puVar3 = CONCAT13(bVar91 & ~bVar51 & bVar12,
                           CONCAT12(bVar89 & ~bVar50 & bVar11,
                                    CONCAT11(bVar88 & ~bVar49 & bVar9,bVar7 & ~bVar47 & bVar8)));
        puVar3[1] = CONCAT13(bVar96 & ~bVar56 & bVar17,
                             CONCAT12(bVar95 & ~bVar55 & bVar16,
                                      CONCAT11(bVar93 & ~bVar54 & bVar15,bVar92 & ~bVar52 & bVar13))
                            );
        puVar3[2] = CONCAT13(bVar101 & ~bVar61 & bVar23,
                             CONCAT12(bVar100 & ~bVar60 & bVar21,
                                      CONCAT11(bVar99 & ~bVar59 & bVar20,bVar97 & ~bVar57 & bVar19))
                            );
        puVar3[3] = CONCAT13(bVar107 & ~bVar66 & bVar28,
                             CONCAT12(bVar105 & ~bVar65 & bVar27,
                                      CONCAT11(bVar104 & ~bVar64 & bVar25,bVar103 & ~bVar62 & bVar24
                                              )));
        puVar3[4] = CONCAT13(bVar112 & ~bVar71 & bVar38,
                             CONCAT12(bVar111 & ~bVar70 & bVar36,
                                      CONCAT11(bVar109 & ~bVar69 & bVar34,bVar108 & ~bVar67 & bVar30
                                              )));
        puVar3[5] = CONCAT13(bVar117 & ~bVar76 & bVar29,
                             CONCAT12(bVar116 & ~bVar75 & bVar46,
                                      CONCAT11(bVar115 & ~bVar74 & bVar44,bVar113 & ~bVar72 & bVar42
                                              )));
        puVar3[6] = CONCAT13(bVar137 & ~bVar81 & bVar37,
                             CONCAT12(bVar136 & ~bVar80 & bVar35,
                                      CONCAT11(bVar135 & ~bVar79 & bVar33,bVar134 & ~bVar77 & bVar31
                                              )));
        puVar3[7] = CONCAT13(bVar141 & ~bVar86 & bVar45,
                             CONCAT12(bVar140 & ~bVar85 & bVar43,
                                      CONCAT11(bVar139 & ~bVar84 & bVar41,bVar138 & ~bVar82 & bVar39
                                              )));
        uVar48 = CONCAT13(bVar51 | bVar12 & bVar91,
                          CONCAT12(bVar50 | bVar11 & bVar89,
                                   CONCAT11(bVar49 | bVar9 & bVar88,bVar47 | bVar8 & bVar7)));
        uVar53 = CONCAT13(bVar56 | bVar17 & bVar96,
                          CONCAT12(bVar55 | bVar16 & bVar95,
                                   CONCAT11(bVar54 | bVar15 & bVar93,bVar52 | bVar13 & bVar92)));
        uVar58 = CONCAT13(bVar61 | bVar23 & bVar101,
                          CONCAT12(bVar60 | bVar21 & bVar100,
                                   CONCAT11(bVar59 | bVar20 & bVar99,bVar57 | bVar19 & bVar97)));
        uVar63 = CONCAT13(bVar66 | bVar28 & bVar107,
                          CONCAT12(bVar65 | bVar27 & bVar105,
                                   CONCAT11(bVar64 | bVar25 & bVar104,bVar62 | bVar24 & bVar103)));
        uVar68 = CONCAT13(bVar71 | bVar38 & bVar112,
                          CONCAT12(bVar70 | bVar36 & bVar111,
                                   CONCAT11(bVar69 | bVar34 & bVar109,bVar67 | bVar30 & bVar108)));
        uVar73 = CONCAT13(bVar76 | bVar29 & bVar117,
                          CONCAT12(bVar75 | bVar46 & bVar116,
                                   CONCAT11(bVar74 | bVar44 & bVar115,bVar72 | bVar42 & bVar113)));
        uVar78 = CONCAT13(bVar81 | bVar37 & bVar137,
                          CONCAT12(bVar80 | bVar35 & bVar136,
                                   CONCAT11(bVar79 | bVar33 & bVar135,bVar77 | bVar31 & bVar134)));
        uVar83 = CONCAT13(bVar86 | bVar45 & bVar141,
                          CONCAT12(bVar85 | bVar43 & bVar140,
                                   CONCAT11(bVar84 | bVar41 & bVar139,bVar82 | bVar39 & bVar138)));
        uVar6 = CONCAT13(bVar12 | bVar91,
                         CONCAT12(bVar11 | bVar89,CONCAT11(bVar9 | bVar88,bVar8 | bVar7)));
        uVar10 = CONCAT13(bVar17 | bVar96,
                          CONCAT12(bVar16 | bVar95,CONCAT11(bVar15 | bVar93,bVar13 | bVar92)));
        uVar14 = CONCAT13(bVar23 | bVar101,
                          CONCAT12(bVar21 | bVar100,CONCAT11(bVar20 | bVar99,bVar19 | bVar97)));
        uVar18 = CONCAT13(bVar28 | bVar107,
                          CONCAT12(bVar27 | bVar105,CONCAT11(bVar25 | bVar104,bVar24 | bVar103)));
        uVar22 = CONCAT13(bVar38 | bVar112,
                          CONCAT12(bVar36 | bVar111,CONCAT11(bVar34 | bVar109,bVar30 | bVar108)));
        uVar26 = CONCAT13(bVar29 | bVar117,
                          CONCAT12(bVar46 | bVar116,CONCAT11(bVar44 | bVar115,bVar42 | bVar113)));
        uVar32 = CONCAT13(bVar37 | bVar137,
                          CONCAT12(bVar35 | bVar136,CONCAT11(bVar33 | bVar135,bVar31 | bVar134)));
        uVar40 = CONCAT13(bVar45 | bVar141,
                          CONCAT12(bVar43 | bVar140,CONCAT11(bVar41 | bVar139,bVar39 | bVar138)));
        uVar4 = uVar4 - 1;
        pbVar5 = pbVar5 + 1;
        if (uVar4 == 0) goto priority_encode_double_complete;
      }
      puVar1 = (undefined4 *)(param_2 + (ulong)bVar7 * 0x20);
      uVar6 = *puVar1;
      uVar10 = puVar1[1];
      uVar14 = puVar1[2];
      uVar18 = puVar1[3];
      uVar22 = puVar1[4];
      uVar26 = puVar1[5];
      uVar32 = puVar1[6];
      uVar40 = puVar1[7];
      bVar7 = (byte)((uint)uVar87 >> 8);
      bVar88 = (byte)((uint)uVar87 >> 0x10);
      bVar89 = (byte)((uint)uVar87 >> 0x18);
      bVar91 = (byte)((uint)uVar90 >> 8);
      bVar92 = (byte)((uint)uVar90 >> 0x10);
      bVar93 = (byte)((uint)uVar90 >> 0x18);
      bVar95 = (byte)((uint)uVar94 >> 8);
      bVar96 = (byte)((uint)uVar94 >> 0x10);
      bVar97 = (byte)((uint)uVar94 >> 0x18);
      bVar99 = (byte)((uint)uVar98 >> 8);
      bVar100 = (byte)((uint)uVar98 >> 0x10);
      bVar101 = (byte)((uint)uVar98 >> 0x18);
      bVar134 = (byte)uVar6 & ~(byte)uVar87;
      bVar135 = (byte)((uint)uVar6 >> 8) & ~bVar7;
      bVar136 = (byte)((uint)uVar6 >> 0x10) & ~bVar88;
      bVar137 = (byte)((uint)uVar6 >> 0x18) & ~bVar89;
      bVar138 = (byte)uVar10 & ~(byte)uVar90;
      bVar139 = (byte)((uint)uVar10 >> 8) & ~bVar91;
      bVar140 = (byte)((uint)uVar10 >> 0x10) & ~bVar92;
      bVar141 = (byte)((uint)uVar10 >> 0x18) & ~bVar93;
      bVar142 = (byte)uVar14 & ~(byte)uVar94;
      bVar143 = (byte)((uint)uVar14 >> 8) & ~bVar95;
      bVar144 = (byte)((uint)uVar14 >> 0x10) & ~bVar96;
      bVar145 = (byte)((uint)uVar14 >> 0x18) & ~bVar97;
      bVar146 = (byte)uVar18 & ~(byte)uVar98;
      bVar147 = (byte)((uint)uVar18 >> 8) & ~bVar99;
      bVar148 = (byte)((uint)uVar18 >> 0x10) & ~bVar100;
      bVar149 = (byte)((uint)uVar18 >> 0x18) & ~bVar101;
      bVar103 = (byte)((uint)uVar102 >> 8);
      bVar104 = (byte)((uint)uVar102 >> 0x10);
      bVar105 = (byte)((uint)uVar102 >> 0x18);
      bVar107 = (byte)((uint)uVar106 >> 8);
      bVar108 = (byte)((uint)uVar106 >> 0x10);
      bVar109 = (byte)((uint)uVar106 >> 0x18);
      bVar111 = (byte)((uint)uVar110 >> 8);
      bVar112 = (byte)((uint)uVar110 >> 0x10);
      bVar113 = (byte)((uint)uVar110 >> 0x18);
      bVar115 = (byte)((uint)uVar114 >> 8);
      bVar116 = (byte)((uint)uVar114 >> 0x10);
      bVar117 = (byte)((uint)uVar114 >> 0x18);
      bVar150 = (byte)uVar22 & ~(byte)uVar102;
      bVar151 = (byte)((uint)uVar22 >> 8) & ~bVar103;
      bVar152 = (byte)((uint)uVar22 >> 0x10) & ~bVar104;
      bVar153 = (byte)((uint)uVar22 >> 0x18) & ~bVar105;
      bVar154 = (byte)uVar26 & ~(byte)uVar106;
      bVar155 = (byte)((uint)uVar26 >> 8) & ~bVar107;
      bVar156 = (byte)((uint)uVar26 >> 0x10) & ~bVar108;
      bVar157 = (byte)((uint)uVar26 >> 0x18) & ~bVar109;
      bVar158 = (byte)uVar32 & ~(byte)uVar110;
      bVar159 = (byte)((uint)uVar32 >> 8) & ~bVar111;
      bVar160 = (byte)((uint)uVar32 >> 0x10) & ~bVar112;
      bVar161 = (byte)((uint)uVar32 >> 0x18) & ~bVar113;
      bVar162 = (byte)uVar40 & ~(byte)uVar114;
      bVar163 = (byte)((uint)uVar40 >> 8) & ~bVar115;
      bVar164 = (byte)((uint)uVar40 >> 0x10) & ~bVar116;
      bVar165 = (byte)((uint)uVar40 >> 0x18) & ~bVar117;
      uVar118 = CONCAT13((byte)((uint)uVar118 >> 0x18) | bVar137 & ~bVar12,
                         CONCAT12((byte)((uint)uVar118 >> 0x10) | bVar136 & ~bVar11,
                                  CONCAT11((byte)((uint)uVar118 >> 8) | bVar135 & ~bVar9,
                                           (byte)uVar118 | bVar134 & ~bVar8)));
      uVar119 = CONCAT13((byte)((uint)uVar119 >> 0x18) | bVar141 & ~bVar17,
                         CONCAT12((byte)((uint)uVar119 >> 0x10) | bVar140 & ~bVar16,
                                  CONCAT11((byte)((uint)uVar119 >> 8) | bVar139 & ~bVar15,
                                           (byte)uVar119 | bVar138 & ~bVar13)));
      uVar120 = CONCAT13((byte)((uint)uVar120 >> 0x18) | bVar145 & ~bVar23,
                         CONCAT12((byte)((uint)uVar120 >> 0x10) | bVar144 & ~bVar21,
                                  CONCAT11((byte)((uint)uVar120 >> 8) | bVar143 & ~bVar20,
                                           (byte)uVar120 | bVar142 & ~bVar19)));
      uVar121 = CONCAT13((byte)((uint)uVar121 >> 0x18) | bVar149 & ~bVar28,
                         CONCAT12((byte)((uint)uVar121 >> 0x10) | bVar148 & ~bVar27,
                                  CONCAT11((byte)((uint)uVar121 >> 8) | bVar147 & ~bVar25,
                                           (byte)uVar121 | bVar146 & ~bVar24)));
      uVar122 = CONCAT13((byte)((uint)uVar122 >> 0x18) | bVar153 & ~bVar38,
                         CONCAT12((byte)((uint)uVar122 >> 0x10) | bVar152 & ~bVar36,
                                  CONCAT11((byte)((uint)uVar122 >> 8) | bVar151 & ~bVar34,
                                           (byte)uVar122 | bVar150 & ~bVar30)));
      uVar123 = CONCAT13((byte)((uint)uVar123 >> 0x18) | bVar157 & ~bVar29,
                         CONCAT12((byte)((uint)uVar123 >> 0x10) | bVar156 & ~bVar46,
                                  CONCAT11((byte)((uint)uVar123 >> 8) | bVar155 & ~bVar44,
                                           (byte)uVar123 | bVar154 & ~bVar42)));
      uVar124 = CONCAT13((byte)((uint)uVar124 >> 0x18) | bVar161 & ~bVar37,
                         CONCAT12((byte)((uint)uVar124 >> 0x10) | bVar160 & ~bVar35,
                                  CONCAT11((byte)((uint)uVar124 >> 8) | bVar159 & ~bVar33,
                                           (byte)uVar124 | bVar158 & ~bVar31)));
      uVar125 = CONCAT13((byte)((uint)uVar125 >> 0x18) | bVar165 & ~bVar45,
                         CONCAT12((byte)((uint)uVar125 >> 0x10) | bVar164 & ~bVar43,
                                  CONCAT11((byte)((uint)uVar125 >> 8) | bVar163 & ~bVar41,
                                           (byte)uVar125 | bVar162 & ~bVar39)));
      uVar126 = CONCAT13((byte)((uint)uVar126 >> 0x18) | bVar137 & ~bVar51 & bVar12,
                         CONCAT12((byte)((uint)uVar126 >> 0x10) | bVar136 & ~bVar50 & bVar11,
                                  CONCAT11((byte)((uint)uVar126 >> 8) | bVar135 & ~bVar49 & bVar9,
                                           (byte)uVar126 | bVar134 & ~bVar47 & bVar8)));
      uVar127 = CONCAT13((byte)((uint)uVar127 >> 0x18) | bVar141 & ~bVar56 & bVar17,
                         CONCAT12((byte)((uint)uVar127 >> 0x10) | bVar140 & ~bVar55 & bVar16,
                                  CONCAT11((byte)((uint)uVar127 >> 8) | bVar139 & ~bVar54 & bVar15,
                                           (byte)uVar127 | bVar138 & ~bVar52 & bVar13)));
      uVar128 = CONCAT13((byte)((uint)uVar128 >> 0x18) | bVar145 & ~bVar61 & bVar23,
                         CONCAT12((byte)((uint)uVar128 >> 0x10) | bVar144 & ~bVar60 & bVar21,
                                  CONCAT11((byte)((uint)uVar128 >> 8) | bVar143 & ~bVar59 & bVar20,
                                           (byte)uVar128 | bVar142 & ~bVar57 & bVar19)));
      uVar129 = CONCAT13((byte)((uint)uVar129 >> 0x18) | bVar149 & ~bVar66 & bVar28,
                         CONCAT12((byte)((uint)uVar129 >> 0x10) | bVar148 & ~bVar65 & bVar27,
                                  CONCAT11((byte)((uint)uVar129 >> 8) | bVar147 & ~bVar64 & bVar25,
                                           (byte)uVar129 | bVar146 & ~bVar62 & bVar24)));
      uVar130 = CONCAT13((byte)((uint)uVar130 >> 0x18) | bVar153 & ~bVar71 & bVar38,
                         CONCAT12((byte)((uint)uVar130 >> 0x10) | bVar152 & ~bVar70 & bVar36,
                                  CONCAT11((byte)((uint)uVar130 >> 8) | bVar151 & ~bVar69 & bVar34,
                                           (byte)uVar130 | bVar150 & ~bVar67 & bVar30)));
      uVar131 = CONCAT13((byte)((uint)uVar131 >> 0x18) | bVar157 & ~bVar76 & bVar29,
                         CONCAT12((byte)((uint)uVar131 >> 0x10) | bVar156 & ~bVar75 & bVar46,
                                  CONCAT11((byte)((uint)uVar131 >> 8) | bVar155 & ~bVar74 & bVar44,
                                           (byte)uVar131 | bVar154 & ~bVar72 & bVar42)));
      uVar132 = CONCAT13((byte)((uint)uVar132 >> 0x18) | bVar161 & ~bVar81 & bVar37,
                         CONCAT12((byte)((uint)uVar132 >> 0x10) | bVar160 & ~bVar80 & bVar35,
                                  CONCAT11((byte)((uint)uVar132 >> 8) | bVar159 & ~bVar79 & bVar33,
                                           (byte)uVar132 | bVar158 & ~bVar77 & bVar31)));
      uVar133 = CONCAT13((byte)((uint)uVar133 >> 0x18) | bVar165 & ~bVar86 & bVar45,
                         CONCAT12((byte)((uint)uVar133 >> 0x10) | bVar164 & ~bVar85 & bVar43,
                                  CONCAT11((byte)((uint)uVar133 >> 8) | bVar163 & ~bVar84 & bVar41,
                                           (byte)uVar133 | bVar162 & ~bVar82 & bVar39)));
      uVar48 = CONCAT13(bVar51 | bVar12 & bVar137,
                        CONCAT12(bVar50 | bVar11 & bVar136,
                                 CONCAT11(bVar49 | bVar9 & bVar135,bVar47 | bVar8 & bVar134)));
      uVar53 = CONCAT13(bVar56 | bVar17 & bVar141,
                        CONCAT12(bVar55 | bVar16 & bVar140,
                                 CONCAT11(bVar54 | bVar15 & bVar139,bVar52 | bVar13 & bVar138)));
      uVar58 = CONCAT13(bVar61 | bVar23 & bVar145,
                        CONCAT12(bVar60 | bVar21 & bVar144,
                                 CONCAT11(bVar59 | bVar20 & bVar143,bVar57 | bVar19 & bVar142)));
      uVar63 = CONCAT13(bVar66 | bVar28 & bVar149,
                        CONCAT12(bVar65 | bVar27 & bVar148,
                                 CONCAT11(bVar64 | bVar25 & bVar147,bVar62 | bVar24 & bVar146)));
      uVar68 = CONCAT13(bVar71 | bVar38 & bVar153,
                        CONCAT12(bVar70 | bVar36 & bVar152,
                                 CONCAT11(bVar69 | bVar34 & bVar151,bVar67 | bVar30 & bVar150)));
      uVar73 = CONCAT13(bVar76 | bVar29 & bVar157,
                        CONCAT12(bVar75 | bVar46 & bVar156,
                                 CONCAT11(bVar74 | bVar44 & bVar155,bVar72 | bVar42 & bVar154)));
      uVar78 = CONCAT13(bVar81 | bVar37 & bVar161,
                        CONCAT12(bVar80 | bVar35 & bVar160,
                                 CONCAT11(bVar79 | bVar33 & bVar159,bVar77 | bVar31 & bVar158)));
      uVar83 = CONCAT13(bVar86 | bVar45 & bVar165,
                        CONCAT12(bVar85 | bVar43 & bVar164,
                                 CONCAT11(bVar84 | bVar41 & bVar163,bVar82 | bVar39 & bVar162)));
      uVar6 = CONCAT13(bVar12 | bVar137,
                       CONCAT12(bVar11 | bVar136,CONCAT11(bVar9 | bVar135,bVar8 | bVar134)));
      uVar10 = CONCAT13(bVar17 | bVar141,
                        CONCAT12(bVar16 | bVar140,CONCAT11(bVar15 | bVar139,bVar13 | bVar138)));
      uVar14 = CONCAT13(bVar23 | bVar145,
                        CONCAT12(bVar21 | bVar144,CONCAT11(bVar20 | bVar143,bVar19 | bVar142)));
      uVar18 = CONCAT13(bVar28 | bVar149,
                        CONCAT12(bVar27 | bVar148,CONCAT11(bVar25 | bVar147,bVar24 | bVar146)));
      uVar22 = CONCAT13(bVar38 | bVar153,
                        CONCAT12(bVar36 | bVar152,CONCAT11(bVar34 | bVar151,bVar30 | bVar150)));
      uVar26 = CONCAT13(bVar29 | bVar157,
                        CONCAT12(bVar46 | bVar156,CONCAT11(bVar44 | bVar155,bVar42 | bVar154)));
      uVar32 = CONCAT13(bVar37 | bVar161,
                        CONCAT12(bVar35 | bVar160,CONCAT11(bVar33 | bVar159,bVar31 | bVar158)));
      uVar40 = CONCAT13(bVar45 | bVar165,
                        CONCAT12(bVar43 | bVar164,CONCAT11(bVar41 | bVar163,bVar39 | bVar162)));
      uVar87 = CONCAT13(bVar89 | bVar137,
                        CONCAT12(bVar88 | bVar136,CONCAT11(bVar7 | bVar135,(byte)uVar87 | bVar134)))
      ;
      uVar90 = CONCAT13(bVar93 | bVar141,
                        CONCAT12(bVar92 | bVar140,CONCAT11(bVar91 | bVar139,(byte)uVar90 | bVar138))
                       );
      uVar94 = CONCAT13(bVar97 | bVar145,
                        CONCAT12(bVar96 | bVar144,CONCAT11(bVar95 | bVar143,(byte)uVar94 | bVar142))
                       );
      uVar98 = CONCAT13(bVar101 | bVar149,
                        CONCAT12(bVar100 | bVar148,CONCAT11(bVar99 | bVar147,(byte)uVar98 | bVar146)
                                ));
      uVar102 = CONCAT13(bVar105 | bVar153,
                         CONCAT12(bVar104 | bVar152,
                                  CONCAT11(bVar103 | bVar151,(byte)uVar102 | bVar150)));
      uVar106 = CONCAT13(bVar109 | bVar157,
                         CONCAT12(bVar108 | bVar156,
                                  CONCAT11(bVar107 | bVar155,(byte)uVar106 | bVar154)));
      uVar110 = CONCAT13(bVar113 | bVar161,
                         CONCAT12(bVar112 | bVar160,
                                  CONCAT11(bVar111 | bVar159,(byte)uVar110 | bVar158)));
      uVar114 = CONCAT13(bVar117 | bVar165,
                         CONCAT12(bVar116 | bVar164,
                                  CONCAT11(bVar115 | bVar163,(byte)uVar114 | bVar162)));
      uVar4 = uVar4 - 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0);
  }
priority_encode_double_complete:
  bVar7 = (byte)((uint)uVar6 >> 8);
  bVar8 = (byte)((uint)uVar6 >> 0x10);
  bVar9 = (byte)((uint)uVar6 >> 0x18);
  bVar11 = (byte)((uint)uVar10 >> 8);
  bVar12 = (byte)((uint)uVar10 >> 0x10);
  bVar13 = (byte)((uint)uVar10 >> 0x18);
  bVar15 = (byte)((uint)uVar14 >> 8);
  bVar16 = (byte)((uint)uVar14 >> 0x10);
  bVar17 = (byte)((uint)uVar14 >> 0x18);
  bVar19 = (byte)((uint)uVar18 >> 8);
  bVar20 = (byte)((uint)uVar18 >> 0x10);
  bVar21 = (byte)((uint)uVar18 >> 0x18);
  bVar23 = (byte)((uint)uVar22 >> 8);
  bVar24 = (byte)((uint)uVar22 >> 0x10);
  bVar25 = (byte)((uint)uVar22 >> 0x18);
  bVar27 = (byte)((uint)uVar26 >> 8);
  bVar28 = (byte)((uint)uVar26 >> 0x10);
  bVar30 = (byte)((uint)uVar26 >> 0x18);
  bVar34 = (byte)((uint)uVar32 >> 8);
  bVar36 = (byte)((uint)uVar32 >> 0x10);
  bVar38 = (byte)((uint)uVar32 >> 0x18);
  bVar42 = (byte)((uint)uVar40 >> 8);
  bVar44 = (byte)((uint)uVar40 >> 0x10);
  bVar46 = (byte)((uint)uVar40 >> 0x18);
  *(uint *)(param_3 + 0xa0) = CONCAT13(~bVar9,CONCAT12(~bVar8,CONCAT11(~bVar7,~(byte)uVar6)));
  *(uint *)(param_3 + 0xa4) = CONCAT13(~bVar13,CONCAT12(~bVar12,CONCAT11(~bVar11,~(byte)uVar10)));
  *(uint *)(param_3 + 0xa8) = CONCAT13(~bVar17,CONCAT12(~bVar16,CONCAT11(~bVar15,~(byte)uVar14)));
  *(uint *)(param_3 + 0xac) = CONCAT13(~bVar21,CONCAT12(~bVar20,CONCAT11(~bVar19,~(byte)uVar18)));
  *(uint *)(param_3 + 0xb0) = CONCAT13(~bVar25,CONCAT12(~bVar24,CONCAT11(~bVar23,~(byte)uVar22)));
  *(uint *)(param_3 + 0xb4) = CONCAT13(~bVar30,CONCAT12(~bVar28,CONCAT11(~bVar27,~(byte)uVar26)));
  *(uint *)(param_3 + 0xb8) = CONCAT13(~bVar38,CONCAT12(~bVar36,CONCAT11(~bVar34,~(byte)uVar32)));
  *(uint *)(param_3 + 0xbc) = CONCAT13(~bVar46,CONCAT12(~bVar44,CONCAT11(~bVar42,~(byte)uVar40)));
  *(uint *)(param_4 + 0xa0) =
       CONCAT13(bVar9 & ~(byte)((uint)uVar48 >> 0x18),
                CONCAT12(bVar8 & ~(byte)((uint)uVar48 >> 0x10),
                         CONCAT11(bVar7 & ~(byte)((uint)uVar48 >> 8),(byte)uVar6 & ~(byte)uVar48)));
  *(uint *)(param_4 + 0xa4) =
       CONCAT13(bVar13 & ~(byte)((uint)uVar53 >> 0x18),
                CONCAT12(bVar12 & ~(byte)((uint)uVar53 >> 0x10),
                         CONCAT11(bVar11 & ~(byte)((uint)uVar53 >> 8),(byte)uVar10 & ~(byte)uVar53))
               );
  *(uint *)(param_4 + 0xa8) =
       CONCAT13(bVar17 & ~(byte)((uint)uVar58 >> 0x18),
                CONCAT12(bVar16 & ~(byte)((uint)uVar58 >> 0x10),
                         CONCAT11(bVar15 & ~(byte)((uint)uVar58 >> 8),(byte)uVar14 & ~(byte)uVar58))
               );
  *(uint *)(param_4 + 0xac) =
       CONCAT13(bVar21 & ~(byte)((uint)uVar63 >> 0x18),
                CONCAT12(bVar20 & ~(byte)((uint)uVar63 >> 0x10),
                         CONCAT11(bVar19 & ~(byte)((uint)uVar63 >> 8),(byte)uVar18 & ~(byte)uVar63))
               );
  *(uint *)(param_4 + 0xb0) =
       CONCAT13(bVar25 & ~(byte)((uint)uVar68 >> 0x18),
                CONCAT12(bVar24 & ~(byte)((uint)uVar68 >> 0x10),
                         CONCAT11(bVar23 & ~(byte)((uint)uVar68 >> 8),(byte)uVar22 & ~(byte)uVar68))
               );
  *(uint *)(param_4 + 0xb4) =
       CONCAT13(bVar30 & ~(byte)((uint)uVar73 >> 0x18),
                CONCAT12(bVar28 & ~(byte)((uint)uVar73 >> 0x10),
                         CONCAT11(bVar27 & ~(byte)((uint)uVar73 >> 8),(byte)uVar26 & ~(byte)uVar73))
               );
  *(uint *)(param_4 + 0xb8) =
       CONCAT13(bVar38 & ~(byte)((uint)uVar78 >> 0x18),
                CONCAT12(bVar36 & ~(byte)((uint)uVar78 >> 0x10),
                         CONCAT11(bVar34 & ~(byte)((uint)uVar78 >> 8),(byte)uVar32 & ~(byte)uVar78))
               );
  *(uint *)(param_4 + 0xbc) =
       CONCAT13(bVar46 & ~(byte)((uint)uVar83 >> 0x18),
                CONCAT12(bVar44 & ~(byte)((uint)uVar83 >> 0x10),
                         CONCAT11(bVar42 & ~(byte)((uint)uVar83 >> 8),(byte)uVar40 & ~(byte)uVar83))
               );
  *(undefined4 *)(param_3 + 0x80) = uVar118;
  *(undefined4 *)(param_3 + 0x84) = uVar119;
  *(undefined4 *)(param_3 + 0x88) = uVar120;
  *(undefined4 *)(param_3 + 0x8c) = uVar121;
  *(undefined4 *)(param_3 + 0x90) = uVar122;
  *(undefined4 *)(param_3 + 0x94) = uVar123;
  *(undefined4 *)(param_3 + 0x98) = uVar124;
  *(undefined4 *)(param_3 + 0x9c) = uVar125;
  *(undefined4 *)(param_4 + 0x80) = uVar126;
  *(undefined4 *)(param_4 + 0x84) = uVar127;
  *(undefined4 *)(param_4 + 0x88) = uVar128;
  *(undefined4 *)(param_4 + 0x8c) = uVar129;
  *(undefined4 *)(param_4 + 0x90) = uVar130;
  *(undefined4 *)(param_4 + 0x94) = uVar131;
  *(undefined4 *)(param_4 + 0x98) = uVar132;
  *(undefined4 *)(param_4 + 0x9c) = uVar133;
  return;
}


