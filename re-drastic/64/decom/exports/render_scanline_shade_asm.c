/*
 * Ghidra decompilation
 *
 * Function : render_scanline_shade_asm
 * Address  : 001a0108
 * Program  : drastic64
 */


void render_scanline_shade_asm
               (undefined param_1 [16],long param_2,undefined *param_3,byte *param_4,long param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  short sVar20;
  char cVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined auVar71 [16];
  undefined auVar72 [16];
  byte bVar80;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined auVar81 [16];
  undefined auVar82 [16];
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
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
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  
  uVar14 = (uint)*(ushort *)(param_2 + 0xa2) * 2;
  uVar1 = 0x20;
  if (*(ushort *)(param_2 + 0xa2) == 0x10 || uVar14 < 0x20) {
    uVar1 = uVar14;
  }
  cVar21 = ' ' - (char)uVar1;
  sVar20 = 0;
  if ((*(ushort *)(param_2 + 0xa0) & 0x40) == 0) {
    sVar20 = (short)uVar1;
  }
  iVar19 = 0x100;
  sVar20 = sVar20 * 0x3f + 0x10;
  puVar17 = param_3 + 0x100;
  puVar18 = param_3 + 0x200;
  pbVar15 = param_4 + 0x100;
  pbVar16 = param_4 + 0x200;
  do {
    uVar2 = *(undefined2 *)(param_5 + 2);
    auVar81._2_2_ = uVar2;
    auVar81._0_2_ = uVar2;
    auVar81._4_2_ = uVar2;
    auVar81._6_2_ = uVar2;
    auVar81._8_2_ = uVar2;
    auVar81._10_2_ = uVar2;
    auVar81._12_2_ = uVar2;
    auVar81._14_2_ = uVar2;
    param_5 = param_5 + 4;
    bVar90 = *param_4;
    bVar91 = param_4[1];
    bVar92 = param_4[2];
    bVar93 = param_4[3];
    bVar94 = param_4[4];
    bVar95 = param_4[5];
    bVar96 = param_4[6];
    bVar97 = param_4[7];
    uVar8 = *(undefined8 *)(param_4 + 8);
    bVar98 = param_4[0x10];
    bVar99 = param_4[0x11];
    bVar100 = param_4[0x12];
    bVar101 = param_4[0x13];
    bVar102 = param_4[0x14];
    bVar103 = param_4[0x15];
    bVar104 = param_4[0x16];
    bVar105 = param_4[0x17];
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    param_4 = param_4 + 0x20;
    bVar106 = *pbVar15;
    bVar107 = pbVar15[1];
    bVar108 = pbVar15[2];
    bVar109 = pbVar15[3];
    bVar110 = pbVar15[4];
    bVar111 = pbVar15[5];
    bVar112 = pbVar15[6];
    bVar113 = pbVar15[7];
    uVar10 = *(undefined8 *)(pbVar15 + 8);
    bVar114 = pbVar15[0x10];
    bVar115 = pbVar15[0x11];
    bVar116 = pbVar15[0x12];
    bVar117 = pbVar15[0x13];
    bVar118 = pbVar15[0x14];
    bVar119 = pbVar15[0x15];
    bVar120 = pbVar15[0x16];
    bVar121 = pbVar15[0x17];
    uVar11 = *(undefined8 *)(pbVar15 + 0x18);
    pbVar15 = pbVar15 + 0x20;
    bVar122 = *pbVar16;
    bVar123 = pbVar16[1];
    bVar124 = pbVar16[2];
    bVar125 = pbVar16[3];
    bVar126 = pbVar16[4];
    bVar127 = pbVar16[5];
    bVar128 = pbVar16[6];
    bVar129 = pbVar16[7];
    uVar12 = *(undefined8 *)(pbVar16 + 8);
    bVar130 = pbVar16[0x10];
    bVar131 = pbVar16[0x11];
    bVar132 = pbVar16[0x12];
    bVar133 = pbVar16[0x13];
    bVar134 = pbVar16[0x14];
    bVar135 = pbVar16[0x15];
    bVar136 = pbVar16[0x16];
    bVar137 = pbVar16[0x17];
    uVar13 = *(undefined8 *)(pbVar16 + 0x18);
    pbVar16 = pbVar16 + 0x20;
    auVar4[9] = 1;
    auVar4._0_9_ = (unkuint9)1 << 0x40;
    auVar4[10] = 1;
    auVar4[11] = 1;
    auVar4[12] = 1;
    auVar4[13] = 1;
    auVar4[14] = 1;
    auVar4[15] = 1;
    auVar71 = a64_TBL(ZEXT816(0),param_1,auVar4);
    auVar5[9] = 1;
    auVar5._0_9_ = (unkuint9)1 << 0x40;
    auVar5[10] = 1;
    auVar5[11] = 1;
    auVar5[12] = 1;
    auVar5[13] = 1;
    auVar5[14] = 1;
    auVar5[15] = 1;
    auVar82 = a64_TBL(ZEXT816(0),auVar81,auVar5);
    auVar72[8] = 1;
    auVar72._0_8_ = 0x8040201008040201;
    auVar72[9] = 2;
    auVar72[10] = 4;
    auVar72[11] = 8;
    auVar72[12] = 0x10;
    auVar72[13] = 0x20;
    auVar72[14] = 0x40;
    auVar72[15] = 0x80;
    auVar72 = NEON_cmtst(auVar71,auVar72,1);
    auVar71[8] = 1;
    auVar71._0_8_ = 0x8040201008040201;
    auVar71[9] = 2;
    auVar71[10] = 4;
    auVar71[11] = 8;
    auVar71[12] = 0x10;
    auVar71[13] = 0x20;
    auVar71[14] = 0x40;
    auVar71[15] = 0x80;
    auVar71 = NEON_cmtst(auVar82,auVar71,1);
    bVar22 = auVar72[0];
    bVar26 = auVar72[1];
    bVar30 = auVar72[2];
    bVar34 = auVar72[3];
    bVar38 = auVar72[4];
    bVar42 = auVar72[5];
    bVar46 = auVar72[6];
    bVar50 = auVar72[7];
    bVar23 = auVar71[0];
    bVar27 = auVar71[1];
    bVar31 = auVar71[2];
    bVar35 = auVar71[3];
    bVar39 = auVar71[4];
    bVar43 = auVar71[5];
    bVar47 = auVar71[6];
    bVar51 = auVar71[7];
    bVar24 = auVar72[8];
    bVar28 = auVar72[9];
    bVar32 = auVar72[10];
    bVar36 = auVar72[11];
    bVar40 = auVar72[12];
    bVar44 = auVar72[13];
    bVar48 = auVar72[14];
    bVar52 = auVar72[15];
    bVar25 = auVar71[8];
    bVar29 = auVar71[9];
    bVar33 = auVar71[10];
    bVar37 = auVar71[11];
    bVar41 = auVar71[12];
    bVar45 = auVar71[13];
    bVar49 = auVar71[14];
    bVar53 = auVar71[15];
    bVar170 = (byte)sVar20;
    bVar138 = (char)bVar22 >> 7;
    bVar171 = (byte)((ushort)sVar20 >> 8);
    bVar139 = (char)bVar26 >> 7;
    bVar140 = (char)bVar30 >> 7;
    bVar141 = (char)bVar34 >> 7;
    bVar142 = (char)bVar38 >> 7;
    bVar143 = (char)bVar42 >> 7;
    bVar144 = (char)bVar46 >> 7;
    bVar145 = (char)bVar50 >> 7;
    bVar146 = (char)bVar24 >> 7;
    bVar147 = (char)bVar28 >> 7;
    bVar148 = (char)bVar32 >> 7;
    bVar149 = (char)bVar36 >> 7;
    bVar150 = (char)bVar40 >> 7;
    bVar151 = (char)bVar44 >> 7;
    bVar152 = (char)bVar48 >> 7;
    bVar153 = (char)bVar52 >> 7;
    bVar154 = (char)bVar23 >> 7;
    bVar155 = (char)bVar27 >> 7;
    bVar156 = (char)bVar31 >> 7;
    bVar157 = (char)bVar35 >> 7;
    bVar158 = (char)bVar39 >> 7;
    bVar159 = (char)bVar43 >> 7;
    bVar160 = (char)bVar47 >> 7;
    bVar161 = (char)bVar51 >> 7;
    bVar162 = (char)bVar25 >> 7;
    bVar163 = (char)bVar29 >> 7;
    bVar164 = (char)bVar33 >> 7;
    bVar165 = (char)bVar37 >> 7;
    bVar166 = (char)bVar41 >> 7;
    bVar167 = (char)bVar45 >> 7;
    bVar168 = (char)bVar49 >> 7;
    bVar169 = (char)bVar53 >> 7;
    auVar82[1] = cVar21;
    auVar82[0] = cVar21;
    auVar82[2] = cVar21;
    auVar82[3] = cVar21;
    auVar82[4] = cVar21;
    auVar82[5] = cVar21;
    auVar82[6] = cVar21;
    auVar82[7] = cVar21;
    auVar82[8] = cVar21;
    auVar82[9] = cVar21;
    auVar82[10] = cVar21;
    auVar82[11] = cVar21;
    auVar82[12] = cVar21;
    auVar82[13] = cVar21;
    auVar82[14] = cVar21;
    auVar82[15] = cVar21;
    auVar6[8] = 0x20;
    auVar6._0_8_ = 0x2020202020202020;
    auVar6[9] = 0x20;
    auVar6[10] = 0x20;
    auVar6[11] = 0x20;
    auVar6[12] = 0x20;
    auVar6[13] = 0x20;
    auVar6[14] = 0x20;
    auVar6[15] = 0x20;
    param_1 = NEON_bsl(auVar72,auVar82,auVar6,1);
    auVar3[1] = cVar21;
    auVar3[0] = cVar21;
    auVar3[2] = cVar21;
    auVar3[3] = cVar21;
    auVar3[4] = cVar21;
    auVar3[5] = cVar21;
    auVar3[6] = cVar21;
    auVar3[7] = cVar21;
    auVar3[8] = cVar21;
    auVar3[9] = cVar21;
    auVar3[10] = cVar21;
    auVar3[11] = cVar21;
    auVar3[12] = cVar21;
    auVar3[13] = cVar21;
    auVar3[14] = cVar21;
    auVar3[15] = cVar21;
    auVar7[8] = 0x20;
    auVar7._0_8_ = 0x2020202020202020;
    auVar7[9] = 0x20;
    auVar7[10] = 0x20;
    auVar7[11] = 0x20;
    auVar7[12] = 0x20;
    auVar7[13] = 0x20;
    auVar7[14] = 0x20;
    auVar7[15] = 0x20;
    auVar72 = NEON_bsl(auVar71,auVar3,auVar7,1);
    bVar70 = param_1[0];
    bVar73 = param_1[1];
    bVar74 = param_1[2];
    bVar75 = param_1[3];
    bVar76 = param_1[4];
    bVar77 = param_1[5];
    bVar78 = param_1[6];
    bVar79 = param_1[7];
    bVar80 = auVar72[0];
    bVar83 = auVar72[1];
    bVar84 = auVar72[2];
    bVar85 = auVar72[3];
    bVar86 = auVar72[4];
    bVar87 = auVar72[5];
    bVar88 = auVar72[6];
    bVar89 = auVar72[7];
    bVar54 = param_1[8];
    bVar56 = param_1[9];
    bVar58 = param_1[10];
    bVar60 = param_1[11];
    bVar62 = param_1[12];
    bVar64 = param_1[13];
    bVar66 = param_1[14];
    bVar68 = param_1[15];
    bVar55 = auVar72[8];
    bVar57 = auVar72[9];
    bVar59 = auVar72[10];
    bVar61 = auVar72[11];
    bVar63 = auVar72[12];
    bVar65 = auVar72[13];
    bVar67 = auVar72[14];
    bVar69 = auVar72[15];
    *param_3 = (char)((ushort)(CONCAT11(bVar171 & bVar138,bVar170 & bVar22) +
                              (ushort)bVar90 * (ushort)bVar70) >> 5);
    param_3[1] = (char)((ushort)(CONCAT11(bVar171 & bVar139,bVar170 & bVar26) +
                                (ushort)bVar91 * (ushort)bVar73) >> 5);
    param_3[2] = (char)((ushort)(CONCAT11(bVar171 & bVar140,bVar170 & bVar30) +
                                (ushort)bVar92 * (ushort)bVar74) >> 5);
    param_3[3] = (char)((ushort)(CONCAT11(bVar171 & bVar141,bVar170 & bVar34) +
                                (ushort)bVar93 * (ushort)bVar75) >> 5);
    param_3[4] = (char)((ushort)(CONCAT11(bVar171 & bVar142,bVar170 & bVar38) +
                                (ushort)bVar94 * (ushort)bVar76) >> 5);
    param_3[5] = (char)((ushort)(CONCAT11(bVar171 & bVar143,bVar170 & bVar42) +
                                (ushort)bVar95 * (ushort)bVar77) >> 5);
    param_3[6] = (char)((ushort)(CONCAT11(bVar171 & bVar144,bVar170 & bVar46) +
                                (ushort)bVar96 * (ushort)bVar78) >> 5);
    param_3[7] = (char)((ushort)(CONCAT11(bVar171 & bVar145,bVar170 & bVar50) +
                                (ushort)bVar97 * (ushort)bVar79) >> 5);
    param_3[8] = (char)((ushort)(CONCAT11(bVar171 & bVar146,bVar170 & bVar24) +
                                (ushort)(byte)uVar8 * (ushort)bVar54) >> 5);
    param_3[9] = (char)((ushort)(CONCAT11(bVar171 & bVar147,bVar170 & bVar28) +
                                (ushort)(byte)((ulong)uVar8 >> 8) * (ushort)bVar56) >> 5);
    param_3[10] = (char)((ushort)(CONCAT11(bVar171 & bVar148,bVar170 & bVar32) +
                                 (ushort)(byte)((ulong)uVar8 >> 0x10) * (ushort)bVar58) >> 5);
    param_3[0xb] = (char)((ushort)(CONCAT11(bVar171 & bVar149,bVar170 & bVar36) +
                                  (ushort)(byte)((ulong)uVar8 >> 0x18) * (ushort)bVar60) >> 5);
    param_3[0xc] = (char)((ushort)(CONCAT11(bVar171 & bVar150,bVar170 & bVar40) +
                                  (ushort)(byte)((ulong)uVar8 >> 0x20) * (ushort)bVar62) >> 5);
    param_3[0xd] = (char)((ushort)(CONCAT11(bVar171 & bVar151,bVar170 & bVar44) +
                                  (ushort)(byte)((ulong)uVar8 >> 0x28) * (ushort)bVar64) >> 5);
    param_3[0xe] = (char)((ushort)(CONCAT11(bVar171 & bVar152,bVar170 & bVar48) +
                                  (ushort)(byte)((ulong)uVar8 >> 0x30) * (ushort)bVar66) >> 5);
    param_3[0xf] = (char)((ushort)(CONCAT11(bVar171 & bVar153,bVar170 & bVar52) +
                                  (ushort)(byte)((ulong)uVar8 >> 0x38) * (ushort)bVar68) >> 5);
    param_3[0x10] =
         (char)((ushort)(CONCAT11(bVar171 & bVar154,bVar170 & bVar23) +
                        (ushort)bVar98 * (ushort)bVar80) >> 5);
    param_3[0x11] =
         (char)((ushort)(CONCAT11(bVar171 & bVar155,bVar170 & bVar27) +
                        (ushort)bVar99 * (ushort)bVar83) >> 5);
    param_3[0x12] =
         (char)((ushort)(CONCAT11(bVar171 & bVar156,bVar170 & bVar31) +
                        (ushort)bVar100 * (ushort)bVar84) >> 5);
    param_3[0x13] =
         (char)((ushort)(CONCAT11(bVar171 & bVar157,bVar170 & bVar35) +
                        (ushort)bVar101 * (ushort)bVar85) >> 5);
    param_3[0x14] =
         (char)((ushort)(CONCAT11(bVar171 & bVar158,bVar170 & bVar39) +
                        (ushort)bVar102 * (ushort)bVar86) >> 5);
    param_3[0x15] =
         (char)((ushort)(CONCAT11(bVar171 & bVar159,bVar170 & bVar43) +
                        (ushort)bVar103 * (ushort)bVar87) >> 5);
    param_3[0x16] =
         (char)((ushort)(CONCAT11(bVar171 & bVar160,bVar170 & bVar47) +
                        (ushort)bVar104 * (ushort)bVar88) >> 5);
    param_3[0x17] =
         (char)((ushort)(CONCAT11(bVar171 & bVar161,bVar170 & bVar51) +
                        (ushort)bVar105 * (ushort)bVar89) >> 5);
    param_3[0x18] =
         (char)((ushort)(CONCAT11(bVar171 & bVar162,bVar170 & bVar25) +
                        (ushort)(byte)uVar9 * (ushort)bVar55) >> 5);
    param_3[0x19] =
         (char)((ushort)(CONCAT11(bVar171 & bVar163,bVar170 & bVar29) +
                        (ushort)(byte)((ulong)uVar9 >> 8) * (ushort)bVar57) >> 5);
    param_3[0x1a] =
         (char)((ushort)(CONCAT11(bVar171 & bVar164,bVar170 & bVar33) +
                        (ushort)(byte)((ulong)uVar9 >> 0x10) * (ushort)bVar59) >> 5);
    param_3[0x1b] =
         (char)((ushort)(CONCAT11(bVar171 & bVar165,bVar170 & bVar37) +
                        (ushort)(byte)((ulong)uVar9 >> 0x18) * (ushort)bVar61) >> 5);
    param_3[0x1c] =
         (char)((ushort)(CONCAT11(bVar171 & bVar166,bVar170 & bVar41) +
                        (ushort)(byte)((ulong)uVar9 >> 0x20) * (ushort)bVar63) >> 5);
    param_3[0x1d] =
         (char)((ushort)(CONCAT11(bVar171 & bVar167,bVar170 & bVar45) +
                        (ushort)(byte)((ulong)uVar9 >> 0x28) * (ushort)bVar65) >> 5);
    param_3[0x1e] =
         (char)((ushort)(CONCAT11(bVar171 & bVar168,bVar170 & bVar49) +
                        (ushort)(byte)((ulong)uVar9 >> 0x30) * (ushort)bVar67) >> 5);
    param_3[0x1f] =
         (char)((ushort)(CONCAT11(bVar171 & bVar169,bVar170 & bVar53) +
                        (ushort)(byte)((ulong)uVar9 >> 0x38) * (ushort)bVar69) >> 5);
    param_3 = param_3 + 0x20;
    *puVar17 = (char)((ushort)(CONCAT11(bVar171 & bVar138,bVar170 & bVar22) +
                              (ushort)bVar106 * (ushort)bVar70) >> 5);
    puVar17[1] = (char)((ushort)(CONCAT11(bVar171 & bVar139,bVar170 & bVar26) +
                                (ushort)bVar107 * (ushort)bVar73) >> 5);
    puVar17[2] = (char)((ushort)(CONCAT11(bVar171 & bVar140,bVar170 & bVar30) +
                                (ushort)bVar108 * (ushort)bVar74) >> 5);
    puVar17[3] = (char)((ushort)(CONCAT11(bVar171 & bVar141,bVar170 & bVar34) +
                                (ushort)bVar109 * (ushort)bVar75) >> 5);
    puVar17[4] = (char)((ushort)(CONCAT11(bVar171 & bVar142,bVar170 & bVar38) +
                                (ushort)bVar110 * (ushort)bVar76) >> 5);
    puVar17[5] = (char)((ushort)(CONCAT11(bVar171 & bVar143,bVar170 & bVar42) +
                                (ushort)bVar111 * (ushort)bVar77) >> 5);
    puVar17[6] = (char)((ushort)(CONCAT11(bVar171 & bVar144,bVar170 & bVar46) +
                                (ushort)bVar112 * (ushort)bVar78) >> 5);
    puVar17[7] = (char)((ushort)(CONCAT11(bVar171 & bVar145,bVar170 & bVar50) +
                                (ushort)bVar113 * (ushort)bVar79) >> 5);
    puVar17[8] = (char)((ushort)(CONCAT11(bVar171 & bVar146,bVar170 & bVar24) +
                                (ushort)(byte)uVar10 * (ushort)bVar54) >> 5);
    puVar17[9] = (char)((ushort)(CONCAT11(bVar171 & bVar147,bVar170 & bVar28) +
                                (ushort)(byte)((ulong)uVar10 >> 8) * (ushort)bVar56) >> 5);
    puVar17[10] = (char)((ushort)(CONCAT11(bVar171 & bVar148,bVar170 & bVar32) +
                                 (ushort)(byte)((ulong)uVar10 >> 0x10) * (ushort)bVar58) >> 5);
    puVar17[0xb] = (char)((ushort)(CONCAT11(bVar171 & bVar149,bVar170 & bVar36) +
                                  (ushort)(byte)((ulong)uVar10 >> 0x18) * (ushort)bVar60) >> 5);
    puVar17[0xc] = (char)((ushort)(CONCAT11(bVar171 & bVar150,bVar170 & bVar40) +
                                  (ushort)(byte)((ulong)uVar10 >> 0x20) * (ushort)bVar62) >> 5);
    puVar17[0xd] = (char)((ushort)(CONCAT11(bVar171 & bVar151,bVar170 & bVar44) +
                                  (ushort)(byte)((ulong)uVar10 >> 0x28) * (ushort)bVar64) >> 5);
    puVar17[0xe] = (char)((ushort)(CONCAT11(bVar171 & bVar152,bVar170 & bVar48) +
                                  (ushort)(byte)((ulong)uVar10 >> 0x30) * (ushort)bVar66) >> 5);
    puVar17[0xf] = (char)((ushort)(CONCAT11(bVar171 & bVar153,bVar170 & bVar52) +
                                  (ushort)(byte)((ulong)uVar10 >> 0x38) * (ushort)bVar68) >> 5);
    puVar17[0x10] =
         (char)((ushort)(CONCAT11(bVar171 & bVar154,bVar170 & bVar23) +
                        (ushort)bVar114 * (ushort)bVar80) >> 5);
    puVar17[0x11] =
         (char)((ushort)(CONCAT11(bVar171 & bVar155,bVar170 & bVar27) +
                        (ushort)bVar115 * (ushort)bVar83) >> 5);
    puVar17[0x12] =
         (char)((ushort)(CONCAT11(bVar171 & bVar156,bVar170 & bVar31) +
                        (ushort)bVar116 * (ushort)bVar84) >> 5);
    puVar17[0x13] =
         (char)((ushort)(CONCAT11(bVar171 & bVar157,bVar170 & bVar35) +
                        (ushort)bVar117 * (ushort)bVar85) >> 5);
    puVar17[0x14] =
         (char)((ushort)(CONCAT11(bVar171 & bVar158,bVar170 & bVar39) +
                        (ushort)bVar118 * (ushort)bVar86) >> 5);
    puVar17[0x15] =
         (char)((ushort)(CONCAT11(bVar171 & bVar159,bVar170 & bVar43) +
                        (ushort)bVar119 * (ushort)bVar87) >> 5);
    puVar17[0x16] =
         (char)((ushort)(CONCAT11(bVar171 & bVar160,bVar170 & bVar47) +
                        (ushort)bVar120 * (ushort)bVar88) >> 5);
    puVar17[0x17] =
         (char)((ushort)(CONCAT11(bVar171 & bVar161,bVar170 & bVar51) +
                        (ushort)bVar121 * (ushort)bVar89) >> 5);
    puVar17[0x18] =
         (char)((ushort)(CONCAT11(bVar171 & bVar162,bVar170 & bVar25) +
                        (ushort)(byte)uVar11 * (ushort)bVar55) >> 5);
    puVar17[0x19] =
         (char)((ushort)(CONCAT11(bVar171 & bVar163,bVar170 & bVar29) +
                        (ushort)(byte)((ulong)uVar11 >> 8) * (ushort)bVar57) >> 5);
    puVar17[0x1a] =
         (char)((ushort)(CONCAT11(bVar171 & bVar164,bVar170 & bVar33) +
                        (ushort)(byte)((ulong)uVar11 >> 0x10) * (ushort)bVar59) >> 5);
    puVar17[0x1b] =
         (char)((ushort)(CONCAT11(bVar171 & bVar165,bVar170 & bVar37) +
                        (ushort)(byte)((ulong)uVar11 >> 0x18) * (ushort)bVar61) >> 5);
    puVar17[0x1c] =
         (char)((ushort)(CONCAT11(bVar171 & bVar166,bVar170 & bVar41) +
                        (ushort)(byte)((ulong)uVar11 >> 0x20) * (ushort)bVar63) >> 5);
    puVar17[0x1d] =
         (char)((ushort)(CONCAT11(bVar171 & bVar167,bVar170 & bVar45) +
                        (ushort)(byte)((ulong)uVar11 >> 0x28) * (ushort)bVar65) >> 5);
    puVar17[0x1e] =
         (char)((ushort)(CONCAT11(bVar171 & bVar168,bVar170 & bVar49) +
                        (ushort)(byte)((ulong)uVar11 >> 0x30) * (ushort)bVar67) >> 5);
    puVar17[0x1f] =
         (char)((ushort)(CONCAT11(bVar171 & bVar169,bVar170 & bVar53) +
                        (ushort)(byte)((ulong)uVar11 >> 0x38) * (ushort)bVar69) >> 5);
    puVar17 = puVar17 + 0x20;
    *puVar18 = (char)((ushort)(CONCAT11(bVar171 & bVar138,bVar170 & bVar22) +
                              (ushort)bVar122 * (ushort)bVar70) >> 5);
    puVar18[1] = (char)((ushort)(CONCAT11(bVar171 & bVar139,bVar170 & bVar26) +
                                (ushort)bVar123 * (ushort)bVar73) >> 5);
    puVar18[2] = (char)((ushort)(CONCAT11(bVar171 & bVar140,bVar170 & bVar30) +
                                (ushort)bVar124 * (ushort)bVar74) >> 5);
    puVar18[3] = (char)((ushort)(CONCAT11(bVar171 & bVar141,bVar170 & bVar34) +
                                (ushort)bVar125 * (ushort)bVar75) >> 5);
    puVar18[4] = (char)((ushort)(CONCAT11(bVar171 & bVar142,bVar170 & bVar38) +
                                (ushort)bVar126 * (ushort)bVar76) >> 5);
    puVar18[5] = (char)((ushort)(CONCAT11(bVar171 & bVar143,bVar170 & bVar42) +
                                (ushort)bVar127 * (ushort)bVar77) >> 5);
    puVar18[6] = (char)((ushort)(CONCAT11(bVar171 & bVar144,bVar170 & bVar46) +
                                (ushort)bVar128 * (ushort)bVar78) >> 5);
    puVar18[7] = (char)((ushort)(CONCAT11(bVar171 & bVar145,bVar170 & bVar50) +
                                (ushort)bVar129 * (ushort)bVar79) >> 5);
    puVar18[8] = (char)((ushort)(CONCAT11(bVar171 & bVar146,bVar170 & bVar24) +
                                (ushort)(byte)uVar12 * (ushort)bVar54) >> 5);
    puVar18[9] = (char)((ushort)(CONCAT11(bVar171 & bVar147,bVar170 & bVar28) +
                                (ushort)(byte)((ulong)uVar12 >> 8) * (ushort)bVar56) >> 5);
    puVar18[10] = (char)((ushort)(CONCAT11(bVar171 & bVar148,bVar170 & bVar32) +
                                 (ushort)(byte)((ulong)uVar12 >> 0x10) * (ushort)bVar58) >> 5);
    puVar18[0xb] = (char)((ushort)(CONCAT11(bVar171 & bVar149,bVar170 & bVar36) +
                                  (ushort)(byte)((ulong)uVar12 >> 0x18) * (ushort)bVar60) >> 5);
    puVar18[0xc] = (char)((ushort)(CONCAT11(bVar171 & bVar150,bVar170 & bVar40) +
                                  (ushort)(byte)((ulong)uVar12 >> 0x20) * (ushort)bVar62) >> 5);
    puVar18[0xd] = (char)((ushort)(CONCAT11(bVar171 & bVar151,bVar170 & bVar44) +
                                  (ushort)(byte)((ulong)uVar12 >> 0x28) * (ushort)bVar64) >> 5);
    puVar18[0xe] = (char)((ushort)(CONCAT11(bVar171 & bVar152,bVar170 & bVar48) +
                                  (ushort)(byte)((ulong)uVar12 >> 0x30) * (ushort)bVar66) >> 5);
    puVar18[0xf] = (char)((ushort)(CONCAT11(bVar171 & bVar153,bVar170 & bVar52) +
                                  (ushort)(byte)((ulong)uVar12 >> 0x38) * (ushort)bVar68) >> 5);
    puVar18[0x10] =
         (char)((ushort)(CONCAT11(bVar171 & bVar154,bVar170 & bVar23) +
                        (ushort)bVar130 * (ushort)bVar80) >> 5);
    puVar18[0x11] =
         (char)((ushort)(CONCAT11(bVar171 & bVar155,bVar170 & bVar27) +
                        (ushort)bVar131 * (ushort)bVar83) >> 5);
    puVar18[0x12] =
         (char)((ushort)(CONCAT11(bVar171 & bVar156,bVar170 & bVar31) +
                        (ushort)bVar132 * (ushort)bVar84) >> 5);
    puVar18[0x13] =
         (char)((ushort)(CONCAT11(bVar171 & bVar157,bVar170 & bVar35) +
                        (ushort)bVar133 * (ushort)bVar85) >> 5);
    puVar18[0x14] =
         (char)((ushort)(CONCAT11(bVar171 & bVar158,bVar170 & bVar39) +
                        (ushort)bVar134 * (ushort)bVar86) >> 5);
    puVar18[0x15] =
         (char)((ushort)(CONCAT11(bVar171 & bVar159,bVar170 & bVar43) +
                        (ushort)bVar135 * (ushort)bVar87) >> 5);
    puVar18[0x16] =
         (char)((ushort)(CONCAT11(bVar171 & bVar160,bVar170 & bVar47) +
                        (ushort)bVar136 * (ushort)bVar88) >> 5);
    puVar18[0x17] =
         (char)((ushort)(CONCAT11(bVar171 & bVar161,bVar170 & bVar51) +
                        (ushort)bVar137 * (ushort)bVar89) >> 5);
    puVar18[0x18] =
         (char)((ushort)(CONCAT11(bVar171 & bVar162,bVar170 & bVar25) +
                        (ushort)(byte)uVar13 * (ushort)bVar55) >> 5);
    puVar18[0x19] =
         (char)((ushort)(CONCAT11(bVar171 & bVar163,bVar170 & bVar29) +
                        (ushort)(byte)((ulong)uVar13 >> 8) * (ushort)bVar57) >> 5);
    puVar18[0x1a] =
         (char)((ushort)(CONCAT11(bVar171 & bVar164,bVar170 & bVar33) +
                        (ushort)(byte)((ulong)uVar13 >> 0x10) * (ushort)bVar59) >> 5);
    puVar18[0x1b] =
         (char)((ushort)(CONCAT11(bVar171 & bVar165,bVar170 & bVar37) +
                        (ushort)(byte)((ulong)uVar13 >> 0x18) * (ushort)bVar61) >> 5);
    puVar18[0x1c] =
         (char)((ushort)(CONCAT11(bVar171 & bVar166,bVar170 & bVar41) +
                        (ushort)(byte)((ulong)uVar13 >> 0x20) * (ushort)bVar63) >> 5);
    puVar18[0x1d] =
         (char)((ushort)(CONCAT11(bVar171 & bVar167,bVar170 & bVar45) +
                        (ushort)(byte)((ulong)uVar13 >> 0x28) * (ushort)bVar65) >> 5);
    puVar18[0x1e] =
         (char)((ushort)(CONCAT11(bVar171 & bVar168,bVar170 & bVar49) +
                        (ushort)(byte)((ulong)uVar13 >> 0x30) * (ushort)bVar67) >> 5);
    puVar18[0x1f] =
         (char)((ushort)(CONCAT11(bVar171 & bVar169,bVar170 & bVar53) +
                        (ushort)(byte)((ulong)uVar13 >> 0x38) * (ushort)bVar69) >> 5);
    puVar18 = puVar18 + 0x20;
    iVar19 = iVar19 + -0x20;
  } while (iVar19 != 0);
  return;
}


