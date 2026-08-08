/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_blend_asm
 * Address  : 0019aac8
 * Program  : drastic64
 */


void render_polygon_alpha_blend_asm(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  undefined auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
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
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
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
  undefined auVar133 [16];
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
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar61 [16];
  
  do {
    bVar12 = *param_1;
    bVar28 = param_1[1];
    bVar44 = param_1[2];
    bVar60 = param_1[3];
    bVar13 = param_1[4];
    bVar29 = param_1[5];
    bVar45 = param_1[6];
    bVar62 = param_1[7];
    bVar14 = param_1[8];
    bVar30 = param_1[9];
    bVar46 = param_1[10];
    bVar63 = param_1[0xb];
    bVar15 = param_1[0xc];
    bVar31 = param_1[0xd];
    bVar47 = param_1[0xe];
    bVar64 = param_1[0xf];
    bVar16 = param_1[0x10];
    bVar32 = param_1[0x11];
    bVar48 = param_1[0x12];
    bVar65 = param_1[0x13];
    bVar17 = param_1[0x14];
    bVar33 = param_1[0x15];
    bVar49 = param_1[0x16];
    bVar66 = param_1[0x17];
    bVar18 = param_1[0x18];
    bVar34 = param_1[0x19];
    bVar50 = param_1[0x1a];
    bVar67 = param_1[0x1b];
    bVar19 = param_1[0x1c];
    bVar35 = param_1[0x1d];
    bVar51 = param_1[0x1e];
    bVar68 = param_1[0x1f];
    auVar61._0_8_ =
         CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(bVar64,CONCAT12(
                                                  bVar63,CONCAT11(bVar62,bVar60)))))));
    bVar20 = param_1[0x20];
    bVar36 = param_1[0x21];
    bVar52 = param_1[0x22];
    auVar61[8] = param_1[0x23];
    bVar21 = param_1[0x24];
    bVar37 = param_1[0x25];
    bVar53 = param_1[0x26];
    auVar61[9] = param_1[0x27];
    bVar22 = param_1[0x28];
    bVar38 = param_1[0x29];
    bVar54 = param_1[0x2a];
    auVar61[10] = param_1[0x2b];
    bVar23 = param_1[0x2c];
    bVar39 = param_1[0x2d];
    bVar55 = param_1[0x2e];
    auVar61[11] = param_1[0x2f];
    bVar24 = param_1[0x30];
    bVar40 = param_1[0x31];
    bVar56 = param_1[0x32];
    auVar61[12] = param_1[0x33];
    bVar25 = param_1[0x34];
    bVar41 = param_1[0x35];
    bVar57 = param_1[0x36];
    auVar61[13] = param_1[0x37];
    bVar26 = param_1[0x38];
    bVar42 = param_1[0x39];
    bVar58 = param_1[0x3a];
    auVar61[14] = param_1[0x3b];
    bVar27 = param_1[0x3c];
    bVar43 = param_1[0x3d];
    bVar59 = param_1[0x3e];
    auVar61[15] = param_1[0x3f];
    bVar69 = *param_2;
    bVar85 = param_2[1];
    bVar101 = param_2[2];
    bVar117 = param_2[3];
    bVar70 = param_2[4];
    bVar86 = param_2[5];
    bVar102 = param_2[6];
    bVar118 = param_2[7];
    bVar71 = param_2[8];
    bVar87 = param_2[9];
    bVar103 = param_2[10];
    bVar119 = param_2[0xb];
    bVar72 = param_2[0xc];
    bVar88 = param_2[0xd];
    bVar104 = param_2[0xe];
    bVar120 = param_2[0xf];
    bVar73 = param_2[0x10];
    bVar89 = param_2[0x11];
    bVar105 = param_2[0x12];
    bVar121 = param_2[0x13];
    bVar74 = param_2[0x14];
    bVar90 = param_2[0x15];
    bVar106 = param_2[0x16];
    bVar122 = param_2[0x17];
    bVar75 = param_2[0x18];
    bVar91 = param_2[0x19];
    bVar107 = param_2[0x1a];
    bVar123 = param_2[0x1b];
    bVar76 = param_2[0x1c];
    bVar92 = param_2[0x1d];
    bVar108 = param_2[0x1e];
    bVar124 = param_2[0x1f];
    bVar77 = param_2[0x20];
    bVar93 = param_2[0x21];
    bVar109 = param_2[0x22];
    bVar125 = param_2[0x23];
    bVar78 = param_2[0x24];
    bVar94 = param_2[0x25];
    bVar110 = param_2[0x26];
    bVar126 = param_2[0x27];
    bVar79 = param_2[0x28];
    bVar95 = param_2[0x29];
    bVar111 = param_2[0x2a];
    bVar127 = param_2[0x2b];
    bVar80 = param_2[0x2c];
    bVar96 = param_2[0x2d];
    bVar112 = param_2[0x2e];
    bVar128 = param_2[0x2f];
    bVar81 = param_2[0x30];
    bVar97 = param_2[0x31];
    bVar113 = param_2[0x32];
    bVar129 = param_2[0x33];
    bVar82 = param_2[0x34];
    bVar98 = param_2[0x35];
    bVar114 = param_2[0x36];
    bVar130 = param_2[0x37];
    bVar83 = param_2[0x38];
    bVar99 = param_2[0x39];
    bVar115 = param_2[0x3a];
    bVar131 = param_2[0x3b];
    bVar84 = param_2[0x3c];
    bVar100 = param_2[0x3d];
    bVar116 = param_2[0x3e];
    bVar132 = param_2[0x3f];
    param_2 = param_2 + 0x40;
    auVar151._8_8_ = auVar61._8_8_;
    auVar151._0_8_ = auVar61._0_8_;
    auVar133[8] = bVar125 & 0x1f;
    auVar133._0_8_ =
         CONCAT17(bVar124,CONCAT16(bVar123,CONCAT15(bVar122,CONCAT14(bVar121,CONCAT13(bVar120,
                                                  CONCAT12(bVar119,CONCAT11(bVar118,bVar117))))))) &
         0x1f1f1f1f1f1f1f1f;
    auVar133[9] = bVar126 & 0x1f;
    auVar133[10] = bVar127 & 0x1f;
    auVar133[11] = bVar128 & 0x1f;
    auVar133[12] = bVar129 & 0x1f;
    auVar133[13] = bVar130 & 0x1f;
    auVar133[14] = bVar131 & 0x1f;
    auVar133[15] = bVar132 & 0x1f;
    auVar133 = NEON_cmeq(auVar133,0,1);
    auVar3[8] = 0x1f;
    auVar3._0_8_ = 0x1f1f1f1f1f1f1f1f;
    auVar3[9] = 0x1f;
    auVar3[10] = 0x1f;
    auVar3[11] = 0x1f;
    auVar3[12] = 0x1f;
    auVar3[13] = 0x1f;
    auVar3[14] = 0x1f;
    auVar3[15] = 0x1f;
    auVar152 = NEON_bit(auVar151,auVar3,auVar133,1);
    bVar134 = 0x1f - bVar60 & ~auVar133[0];
    bVar135 = 0x1f - bVar62 & ~auVar133[1];
    bVar136 = 0x1f - bVar63 & ~auVar133[2];
    bVar137 = 0x1f - bVar64 & ~auVar133[3];
    bVar138 = 0x1f - bVar65 & ~auVar133[4];
    bVar139 = 0x1f - bVar66 & ~auVar133[5];
    bVar140 = 0x1f - bVar67 & ~auVar133[6];
    bVar141 = 0x1f - bVar68 & ~auVar133[7];
    bVar142 = 0x1f - auVar61[8] & ~auVar133[8];
    bVar143 = 0x1f - auVar61[9] & ~auVar133[9];
    bVar144 = 0x1f - auVar61[10] & ~auVar133[10];
    bVar145 = 0x1f - auVar61[11] & ~auVar133[11];
    bVar146 = 0x1f - auVar61[12] & ~auVar133[12];
    bVar147 = 0x1f - auVar61[13] & ~auVar133[13];
    bVar148 = 0x1f - auVar61[14] & ~auVar133[14];
    bVar149 = 0x1f - auVar61[15] & ~auVar133[15];
    bVar150 = auVar152[0];
    bVar153 = auVar152[1];
    bVar154 = auVar152[2];
    bVar155 = auVar152[3];
    bVar156 = auVar152[4];
    bVar157 = auVar152[5];
    bVar158 = auVar152[6];
    bVar159 = auVar152[7];
    bVar4 = auVar152[8];
    bVar5 = auVar152[9];
    bVar6 = auVar152[10];
    bVar7 = auVar152[11];
    bVar8 = auVar152[12];
    bVar9 = auVar152[13];
    bVar10 = auVar152[14];
    bVar11 = auVar152[15];
    *param_4 = bVar60;
    param_4[1] = bVar62;
    param_4[2] = bVar63;
    param_4[3] = bVar64;
    param_4[4] = bVar65;
    param_4[5] = bVar66;
    param_4[6] = bVar67;
    param_4[7] = bVar68;
    param_4[8] = auVar61[8];
    param_4[9] = auVar61[9];
    param_4[10] = auVar61[10];
    param_4[0xb] = auVar61[11];
    param_4[0xc] = auVar61[12];
    param_4[0xd] = auVar61[13];
    param_4[0xe] = auVar61[14];
    param_4[0xf] = auVar61[15];
    param_4 = param_4 + 0x10;
    auVar152[8] = bVar125 & 0x1f;
    auVar152._0_8_ =
         CONCAT17(bVar124,CONCAT16(bVar123,CONCAT15(bVar122,CONCAT14(bVar121,CONCAT13(bVar120,
                                                  CONCAT12(bVar119,CONCAT11(bVar118,bVar117))))))) &
         0x1f1f1f1f1f1f1f1f;
    auVar152[9] = bVar126 & 0x1f;
    auVar152[10] = bVar127 & 0x1f;
    auVar152[11] = bVar128 & 0x1f;
    auVar152[12] = bVar129 & 0x1f;
    auVar152[13] = bVar130 & 0x1f;
    auVar152[14] = bVar131 & 0x1f;
    auVar152[15] = bVar132 & 0x1f;
    auVar133 = NEON_umax(auVar61,auVar152,1);
    *param_1 = (byte)((ushort)((ushort)bVar12 + (ushort)bVar12 * (ushort)bVar150 +
                              (ushort)bVar69 * (ushort)bVar134) >> 5);
    param_1[1] = (byte)((ushort)((ushort)bVar28 + (ushort)bVar28 * (ushort)bVar150 +
                                (ushort)bVar85 * (ushort)bVar134) >> 5);
    param_1[2] = (byte)((ushort)((ushort)bVar44 + (ushort)bVar44 * (ushort)bVar150 +
                                (ushort)bVar101 * (ushort)bVar134) >> 5);
    param_1[3] = auVar133[0];
    param_1[4] = (byte)((ushort)((ushort)bVar13 + (ushort)bVar13 * (ushort)bVar153 +
                                (ushort)bVar70 * (ushort)bVar135) >> 5);
    param_1[5] = (byte)((ushort)((ushort)bVar29 + (ushort)bVar29 * (ushort)bVar153 +
                                (ushort)bVar86 * (ushort)bVar135) >> 5);
    param_1[6] = (byte)((ushort)((ushort)bVar45 + (ushort)bVar45 * (ushort)bVar153 +
                                (ushort)bVar102 * (ushort)bVar135) >> 5);
    param_1[7] = auVar133[1];
    param_1[8] = (byte)((ushort)((ushort)bVar14 + (ushort)bVar14 * (ushort)bVar154 +
                                (ushort)bVar71 * (ushort)bVar136) >> 5);
    param_1[9] = (byte)((ushort)((ushort)bVar30 + (ushort)bVar30 * (ushort)bVar154 +
                                (ushort)bVar87 * (ushort)bVar136) >> 5);
    param_1[10] = (byte)((ushort)((ushort)bVar46 + (ushort)bVar46 * (ushort)bVar154 +
                                 (ushort)bVar103 * (ushort)bVar136) >> 5);
    param_1[0xb] = auVar133[2];
    param_1[0xc] = (byte)((ushort)((ushort)bVar15 + (ushort)bVar15 * (ushort)bVar155 +
                                  (ushort)bVar72 * (ushort)bVar137) >> 5);
    param_1[0xd] = (byte)((ushort)((ushort)bVar31 + (ushort)bVar31 * (ushort)bVar155 +
                                  (ushort)bVar88 * (ushort)bVar137) >> 5);
    param_1[0xe] = (byte)((ushort)((ushort)bVar47 + (ushort)bVar47 * (ushort)bVar155 +
                                  (ushort)bVar104 * (ushort)bVar137) >> 5);
    param_1[0xf] = auVar133[3];
    param_1[0x10] =
         (byte)((ushort)((ushort)bVar16 + (ushort)bVar16 * (ushort)bVar156 +
                        (ushort)bVar73 * (ushort)bVar138) >> 5);
    param_1[0x11] =
         (byte)((ushort)((ushort)bVar32 + (ushort)bVar32 * (ushort)bVar156 +
                        (ushort)bVar89 * (ushort)bVar138) >> 5);
    param_1[0x12] =
         (byte)((ushort)((ushort)bVar48 + (ushort)bVar48 * (ushort)bVar156 +
                        (ushort)bVar105 * (ushort)bVar138) >> 5);
    param_1[0x13] = auVar133[4];
    param_1[0x14] =
         (byte)((ushort)((ushort)bVar17 + (ushort)bVar17 * (ushort)bVar157 +
                        (ushort)bVar74 * (ushort)bVar139) >> 5);
    param_1[0x15] =
         (byte)((ushort)((ushort)bVar33 + (ushort)bVar33 * (ushort)bVar157 +
                        (ushort)bVar90 * (ushort)bVar139) >> 5);
    param_1[0x16] =
         (byte)((ushort)((ushort)bVar49 + (ushort)bVar49 * (ushort)bVar157 +
                        (ushort)bVar106 * (ushort)bVar139) >> 5);
    param_1[0x17] = auVar133[5];
    param_1[0x18] =
         (byte)((ushort)((ushort)bVar18 + (ushort)bVar18 * (ushort)bVar158 +
                        (ushort)bVar75 * (ushort)bVar140) >> 5);
    param_1[0x19] =
         (byte)((ushort)((ushort)bVar34 + (ushort)bVar34 * (ushort)bVar158 +
                        (ushort)bVar91 * (ushort)bVar140) >> 5);
    param_1[0x1a] =
         (byte)((ushort)((ushort)bVar50 + (ushort)bVar50 * (ushort)bVar158 +
                        (ushort)bVar107 * (ushort)bVar140) >> 5);
    param_1[0x1b] = auVar133[6];
    param_1[0x1c] =
         (byte)((ushort)((ushort)bVar19 + (ushort)bVar19 * (ushort)bVar159 +
                        (ushort)bVar76 * (ushort)bVar141) >> 5);
    param_1[0x1d] =
         (byte)((ushort)((ushort)bVar35 + (ushort)bVar35 * (ushort)bVar159 +
                        (ushort)bVar92 * (ushort)bVar141) >> 5);
    param_1[0x1e] =
         (byte)((ushort)((ushort)bVar51 + (ushort)bVar51 * (ushort)bVar159 +
                        (ushort)bVar108 * (ushort)bVar141) >> 5);
    param_1[0x1f] = auVar133[7];
    param_1[0x20] =
         (byte)((ushort)((ushort)bVar20 + (ushort)bVar20 * (ushort)bVar4 +
                        (ushort)bVar77 * (ushort)bVar142) >> 5);
    param_1[0x21] =
         (byte)((ushort)((ushort)bVar36 + (ushort)bVar36 * (ushort)bVar4 +
                        (ushort)bVar93 * (ushort)bVar142) >> 5);
    param_1[0x22] =
         (byte)((ushort)((ushort)bVar52 + (ushort)bVar52 * (ushort)bVar4 +
                        (ushort)bVar109 * (ushort)bVar142) >> 5);
    param_1[0x23] = auVar133[8];
    param_1[0x24] =
         (byte)((ushort)((ushort)bVar21 + (ushort)bVar21 * (ushort)bVar5 +
                        (ushort)bVar78 * (ushort)bVar143) >> 5);
    param_1[0x25] =
         (byte)((ushort)((ushort)bVar37 + (ushort)bVar37 * (ushort)bVar5 +
                        (ushort)bVar94 * (ushort)bVar143) >> 5);
    param_1[0x26] =
         (byte)((ushort)((ushort)bVar53 + (ushort)bVar53 * (ushort)bVar5 +
                        (ushort)bVar110 * (ushort)bVar143) >> 5);
    param_1[0x27] = auVar133[9];
    param_1[0x28] =
         (byte)((ushort)((ushort)bVar22 + (ushort)bVar22 * (ushort)bVar6 +
                        (ushort)bVar79 * (ushort)bVar144) >> 5);
    param_1[0x29] =
         (byte)((ushort)((ushort)bVar38 + (ushort)bVar38 * (ushort)bVar6 +
                        (ushort)bVar95 * (ushort)bVar144) >> 5);
    param_1[0x2a] =
         (byte)((ushort)((ushort)bVar54 + (ushort)bVar54 * (ushort)bVar6 +
                        (ushort)bVar111 * (ushort)bVar144) >> 5);
    param_1[0x2b] = auVar133[10];
    param_1[0x2c] =
         (byte)((ushort)((ushort)bVar23 + (ushort)bVar23 * (ushort)bVar7 +
                        (ushort)bVar80 * (ushort)bVar145) >> 5);
    param_1[0x2d] =
         (byte)((ushort)((ushort)bVar39 + (ushort)bVar39 * (ushort)bVar7 +
                        (ushort)bVar96 * (ushort)bVar145) >> 5);
    param_1[0x2e] =
         (byte)((ushort)((ushort)bVar55 + (ushort)bVar55 * (ushort)bVar7 +
                        (ushort)bVar112 * (ushort)bVar145) >> 5);
    param_1[0x2f] = auVar133[11];
    param_1[0x30] =
         (byte)((ushort)((ushort)bVar24 + (ushort)bVar24 * (ushort)bVar8 +
                        (ushort)bVar81 * (ushort)bVar146) >> 5);
    param_1[0x31] =
         (byte)((ushort)((ushort)bVar40 + (ushort)bVar40 * (ushort)bVar8 +
                        (ushort)bVar97 * (ushort)bVar146) >> 5);
    param_1[0x32] =
         (byte)((ushort)((ushort)bVar56 + (ushort)bVar56 * (ushort)bVar8 +
                        (ushort)bVar113 * (ushort)bVar146) >> 5);
    param_1[0x33] = auVar133[12];
    param_1[0x34] =
         (byte)((ushort)((ushort)bVar25 + (ushort)bVar25 * (ushort)bVar9 +
                        (ushort)bVar82 * (ushort)bVar147) >> 5);
    param_1[0x35] =
         (byte)((ushort)((ushort)bVar41 + (ushort)bVar41 * (ushort)bVar9 +
                        (ushort)bVar98 * (ushort)bVar147) >> 5);
    param_1[0x36] =
         (byte)((ushort)((ushort)bVar57 + (ushort)bVar57 * (ushort)bVar9 +
                        (ushort)bVar114 * (ushort)bVar147) >> 5);
    param_1[0x37] = auVar133[13];
    param_1[0x38] =
         (byte)((ushort)((ushort)bVar26 + (ushort)bVar26 * (ushort)bVar10 +
                        (ushort)bVar83 * (ushort)bVar148) >> 5);
    param_1[0x39] =
         (byte)((ushort)((ushort)bVar42 + (ushort)bVar42 * (ushort)bVar10 +
                        (ushort)bVar99 * (ushort)bVar148) >> 5);
    param_1[0x3a] =
         (byte)((ushort)((ushort)bVar58 + (ushort)bVar58 * (ushort)bVar10 +
                        (ushort)bVar115 * (ushort)bVar148) >> 5);
    param_1[0x3b] = auVar133[14];
    param_1[0x3c] =
         (byte)((ushort)((ushort)bVar27 + (ushort)bVar27 * (ushort)bVar11 +
                        (ushort)bVar84 * (ushort)bVar149) >> 5);
    param_1[0x3d] =
         (byte)((ushort)((ushort)bVar43 + (ushort)bVar43 * (ushort)bVar11 +
                        (ushort)bVar100 * (ushort)bVar149) >> 5);
    param_1[0x3e] =
         (byte)((ushort)((ushort)bVar59 + (ushort)bVar59 * (ushort)bVar11 +
                        (ushort)bVar116 * (ushort)bVar149) >> 5);
    param_1[0x3f] = auVar133[15];
    param_1 = param_1 + 0x40;
    iVar2 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


