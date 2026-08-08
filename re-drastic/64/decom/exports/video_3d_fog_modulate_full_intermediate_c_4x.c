/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_modulate_full_intermediate_c_4x
 * Address  : 001567c0
 * Program  : drastic64
 */


void video_3d_fog_modulate_full_intermediate_c_4x
               (undefined (*param_1) [16],undefined8 *param_2,undefined (*param_3) [16],
               undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint5 uVar17;
  int iVar18;
  int iVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  ulong uVar41;
  long lVar42;
  undefined uVar44;
  undefined uVar45;
  ushort uVar43;
  uint uVar46;
  int iVar47;
  byte bVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  byte bVar53;
  uint uVar54;
  int iVar55;
  byte bVar56;
  byte bVar60;
  uint uVar57;
  uint uVar58;
  byte bVar61;
  byte bVar63;
  uint uVar62;
  byte bVar64;
  byte bVar66;
  uint uVar65;
  byte bVar67;
  byte bVar68;
  undefined auVar59 [16];
  byte bVar69;
  int iVar70;
  byte bVar74;
  uint5 uVar71;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined auVar72 [16];
  undefined auVar73 [16];
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar88;
  int iVar89;
  undefined auVar87 [16];
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar98;
  int iVar99;
  undefined auVar96 [16];
  undefined auVar97 [16];
  int iVar100;
  byte bVar101;
  uint5 uVar102;
  byte bVar103;
  byte bVar104;
  uint5 uVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  int iVar115;
  int iVar116;
  uint uVar117;
  int iVar118;
  int iVar119;
  uint uVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  uint uVar124;
  int iVar125;
  uint uVar126;
  int iVar127;
  uint uVar128;
  int iVar129;
  uint uVar130;
  uint uVar131;
  int iVar132;
  uint uVar133;
  uint uVar134;
  int iVar135;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  int iVar139;
  uint uVar140;
  uint uVar141;
  int iVar142;
  uint uVar143;
  uint uVar144;
  uint uVar145;
  uint uVar146;
  int iVar147;
  uint uVar148;
  uint uVar149;
  uint uVar150;
  int iVar151;
  uint uVar152;
  int iVar153;
  uint uVar154;
  int iVar155;
  uint uVar156;
  int iVar157;
  uint uVar158;
  int iVar159;
  uint5 uVar160;
  undefined8 uVar161;
  uint uVar162;
  int iVar163;
  uint uVar164;
  int iVar165;
  uint5 uVar166;
  undefined8 uVar167;
  uint uVar168;
  int iVar169;
  byte bVar170;
  byte bVar174;
  uint5 uVar171;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  undefined auVar172 [16];
  undefined auVar173 [16];
  byte bVar182;
  byte bVar185;
  uint5 uVar183;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  undefined auVar184 [16];
  uint5 uVar193;
  undefined8 uVar194;
  uint5 uVar196;
  undefined8 uVar197;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar195;
  byte bVar198;
  
  uVar41 = (long)param_1 + (0x3f - (long)param_2);
  uVar2 = (uint)param_4 & 0x3f;
  uVar35 = (uint)((ulong)param_4 >> 8) & 0x3f;
  uVar36 = (uint)((ulong)param_4 >> 0x10) & 0x3f;
  uVar37 = (uint)((ulong)param_4 >> 0x18) & 0x1f;
  if (((param_1 >= param_3 + 0x20 || param_1 + 0x80 <= param_3) && 0x7d < uVar41) &&
      (param_1 < param_3 + 0x20 && param_1 + 0x80 > param_3 || uVar41 != 0x7e)) {
    puVar1 = param_2 + 0x100;
    do {
      auVar29 = *param_3;
      uVar197 = param_2[1];
      uVar194 = *param_2;
      auVar59 = *(undefined (*) [16])(param_2 + 2);
      uVar44 = auVar29[1];
      uVar117 = (uint)CONCAT12(uVar44,(ushort)auVar29[0]);
      uVar45 = auVar29[9];
      uVar57 = (uint)CONCAT12(uVar45,(ushort)auVar29[8]);
      auVar34 = *(undefined (*) [16])(param_2 + 4);
      uVar167 = param_2[7];
      uVar161 = param_2[6];
      param_2 = param_2 + 8;
      uVar43 = CONCAT11(0,auVar29[4]);
      uVar131 = (uint)(auVar34[1] & 0x3f);
      uVar136 = (uint)(auVar34[9] & 0x3f);
      auVar97._5_3_ = 0;
      auVar97._0_5_ = CONCAT14(uVar44,uVar117) & 0xff0000ffff;
      auVar97[8] = auVar29[2];
      auVar97._9_3_ = 0;
      auVar97[12] = auVar29[3];
      auVar97._13_3_ = 0;
      auVar30[8] = 0x7f;
      auVar30._0_8_ = 0x7f0000007f;
      auVar30._9_3_ = 0;
      auVar30[12] = 0x7f;
      auVar30._13_3_ = 0;
      auVar96 = NEON_cmeq(auVar97,auVar30,4);
      auVar20._5_3_ = 0;
      auVar20._0_5_ = CONCAT14(uVar45,uVar57) & 0xff0000ffff;
      auVar20[8] = auVar29[10];
      auVar20._9_3_ = 0;
      auVar20[12] = auVar29[11];
      auVar20._13_3_ = 0;
      auVar31[8] = 0x7f;
      auVar31._0_8_ = 0x7f0000007f;
      auVar31._9_3_ = 0;
      auVar31[12] = 0x7f;
      auVar31._13_3_ = 0;
      auVar87 = NEON_cmeq(auVar20,auVar31,4);
      bVar101 = (byte)((ulong)uVar161 >> 0x18);
      bVar103 = (byte)((ulong)uVar161 >> 0x38);
      bVar104 = (byte)((ulong)uVar167 >> 0x18);
      bVar106 = (byte)((ulong)uVar167 >> 0x38);
      uVar152 = (uint)((byte)((ulong)uVar194 >> 8) & 0x3f);
      uVar156 = (uint)((byte)((ulong)uVar197 >> 8) & 0x3f);
      auVar10._5_3_ = 0;
      auVar10._0_5_ = CONCAT14(uVar44,uVar117) & 0xff0000ffff;
      auVar10[8] = auVar29[2];
      auVar10._9_3_ = 0;
      auVar10[12] = auVar29[3];
      auVar10._13_3_ = 0;
      auVar26[8] = 0x80;
      auVar26._0_8_ = 0x8000000080;
      auVar26._9_3_ = 0;
      auVar26[12] = 0x80;
      auVar26._13_3_ = 0;
      auVar97 = NEON_bsl(auVar96,auVar26,auVar10,1);
      auVar21._5_3_ = 0;
      auVar21._0_5_ = CONCAT14(uVar45,uVar57) & 0xff0000ffff;
      auVar21[8] = auVar29[10];
      auVar21._9_3_ = 0;
      auVar21[12] = auVar29[11];
      auVar21._13_3_ = 0;
      auVar27[8] = 0x80;
      auVar27._0_8_ = 0x8000000080;
      auVar27._9_3_ = 0;
      auVar27[12] = 0x80;
      auVar27._13_3_ = 0;
      auVar87 = NEON_bsl(auVar87,auVar27,auVar21,1);
      uVar71 = CONCAT14(auVar34[6],(uint)(auVar34[2] & 0x3f)) & 0x3fffffffff;
      bVar77 = auVar34[10] & 0x3f;
      bVar80 = auVar34[14] & 0x3f;
      bVar48 = (byte)((ulong)uVar161 >> 0x28);
      uVar158 = (uint)((byte)((ulong)uVar161 >> 8) & 0x3f);
      uVar102 = CONCAT14(bVar48,uVar158) & 0x3fffffffff;
      bVar53 = (byte)((ulong)uVar167 >> 0x28);
      uVar162 = (uint)((byte)((ulong)uVar167 >> 8) & 0x3f);
      uVar105 = CONCAT14(bVar53,uVar162) & 0x3fffffffff;
      uVar144 = (uint)((byte)((ulong)uVar194 >> 0x10) & 0x3f);
      uVar143 = (uint)((byte)((ulong)uVar197 >> 0x10) & 0x3f);
      bVar195 = (byte)((ulong)uVar194 >> 0x20);
      uVar193 = CONCAT14(bVar195,(uint)((byte)uVar194 & 0x3f)) & 0x3fffffffff;
      bVar200 = (byte)((ulong)uVar194 >> 0x38);
      bVar198 = (byte)((ulong)uVar197 >> 0x20);
      uVar196 = CONCAT14(bVar198,(uint)((byte)uVar197 & 0x3f)) & 0x3fffffffff;
      bVar202 = (byte)((ulong)uVar197 >> 0x38);
      auVar73._2_2_ = 0;
      auVar73._0_2_ = uVar43;
      auVar73[4] = auVar29[5];
      auVar73._5_3_ = 0;
      auVar73[8] = auVar29[6];
      auVar73._9_3_ = 0;
      auVar73[12] = auVar29[7];
      auVar73._13_3_ = 0;
      auVar32[8] = 0x7f;
      auVar32._0_8_ = 0x7f0000007f;
      auVar32._9_3_ = 0;
      auVar32[12] = 0x7f;
      auVar32._13_3_ = 0;
      auVar96 = NEON_cmeq(auVar73,auVar32,4);
      uVar154 = (uint)((byte)((ulong)uVar194 >> 0x28) & 0x3f);
      uVar134 = (uint)(auVar34[5] & 0x3f);
      uVar140 = (uint)(auVar34[13] & 0x3f);
      uVar183 = CONCAT14(auVar59[4],(uint)(auVar59[0] & 0x3f)) & 0x3fffffffff;
      bVar190 = auVar59[12] & 0x3f;
      uVar171 = CONCAT14(auVar34[4],(uint)(auVar34[0] & 0x3f)) & 0x3fffffffff;
      bVar179 = auVar34[12] & 0x3f;
      auVar173._2_2_ = 0;
      auVar173._0_2_ = uVar43;
      auVar173[4] = auVar29[5];
      auVar173._5_3_ = 0;
      auVar173[8] = auVar29[6];
      auVar173._9_3_ = 0;
      auVar173[12] = auVar29[7];
      auVar173._13_3_ = 0;
      auVar28[8] = 0x80;
      auVar28._0_8_ = 0x8000000080;
      auVar28._9_3_ = 0;
      auVar28[12] = 0x80;
      auVar28._13_3_ = 0;
      auVar96 = NEON_bsl(auVar96,auVar28,auVar173,1);
      uVar126 = (uint)(auVar59[1] & 0x3f);
      uVar128 = (uint)(auVar59[5] & 0x3f);
      uVar130 = (uint)(auVar59[9] & 0x3f);
      uVar133 = (uint)(auVar59[13] & 0x3f);
      iVar70 = (int)uVar71;
      bVar38 = (byte)(uVar71 >> 0x20);
      iVar95 = auVar97._0_4_;
      iVar98 = auVar97._4_4_;
      iVar99 = auVar97._8_4_;
      iVar100 = auVar97._12_4_;
      iVar86 = auVar87._0_4_;
      iVar88 = auVar87._4_4_;
      iVar89 = auVar87._8_4_;
      iVar90 = auVar87._12_4_;
      auVar184._0_5_ = CONCAT14(auVar34[7],(uint)(auVar34[3] & 0x80)) & 0x80ffffffff;
      auVar184._5_3_ = 0;
      auVar184[8] = auVar34[11] & 0x80;
      auVar184._9_3_ = 0;
      auVar184[12] = auVar34[15] & 0x80;
      auVar184._13_3_ = 0;
      uVar17 = CONCAT14((char)((ulong)uVar167 >> 0x30),(uint)((byte)((ulong)uVar167 >> 0x10) & 0x3f)
                       ) & 0x3fffffffff;
      uVar71 = CONCAT14((char)((ulong)uVar161 >> 0x30),(uint)((byte)((ulong)uVar161 >> 0x10) & 0x3f)
                       ) & 0x3fffffffff;
      uVar149 = (uint)((byte)((ulong)uVar194 >> 0x30) & 0x3f);
      uVar148 = (uint)((byte)((ulong)uVar197 >> 0x30) & 0x3f);
      bVar199 = (byte)((ulong)uVar194 >> 0x18);
      auVar72._0_5_ = CONCAT14(bVar200,(uint)(bVar199 & 0x80)) & 0x80ffffffff;
      auVar72._5_3_ = 0;
      bVar201 = (byte)((ulong)uVar197 >> 0x18);
      auVar72[8] = bVar201 & 0x80;
      auVar72._9_3_ = 0;
      auVar72[12] = bVar202 & 0x80;
      auVar72._13_3_ = 0;
      auVar97 = NEON_cmeq(auVar184,0,2);
      uVar120 = (uint)(auVar59[2] & 0x3f);
      uVar164 = (uint)(auVar59[6] & 0x3f);
      uVar168 = (uint)(auVar59[10] & 0x3f);
      uVar124 = (uint)(auVar59[14] & 0x3f);
      auVar73 = NEON_cmeq(auVar72,0,2);
      uVar57 = (uVar35 - uVar152) * iVar95 >> 7;
      uVar62 = (uVar35 - uVar154) * iVar98 >> 7;
      uVar65 = (uVar35 - uVar156) * iVar99 >> 7;
      uVar141 = (uVar35 - uVar131) * iVar86 >> 7;
      uVar145 = (uVar35 - uVar134) * iVar88 >> 7;
      uVar146 = (uVar35 - uVar136) * iVar89 >> 7;
      uVar150 = (uVar35 - uVar140) * iVar90 >> 7;
      uVar43 = CONCAT11(0,auVar29[12]);
      bVar69 = auVar73[0];
      bVar74 = auVar73[1];
      bVar75 = auVar73[4];
      bVar76 = auVar73[5];
      bVar78 = auVar73[8];
      bVar79 = auVar73[9];
      bVar81 = auVar73[12];
      uVar58 = (uint)CONCAT12((byte)(uVar57 >> 0x10) & ~auVar73[2],
                              CONCAT11((byte)(uVar57 >> 8) & ~bVar74,(byte)uVar57 & ~bVar69));
      iVar91 = auVar96._0_4_;
      uVar46 = (uVar35 - uVar126) * iVar91;
      iVar92 = auVar96._4_4_;
      uVar49 = (uVar35 - uVar128) * iVar92;
      iVar93 = auVar96._8_4_;
      uVar51 = (uVar35 - uVar130) * iVar93;
      iVar94 = auVar96._12_4_;
      uVar54 = (uVar35 - uVar133) * iVar94;
      auVar172._0_5_ = CONCAT14(auVar59[7],(uint)(auVar59[3] & 0x80)) & 0x80ffffffff;
      auVar172._5_3_ = 0;
      auVar172[8] = auVar59[11] & 0x80;
      auVar172._9_3_ = 0;
      auVar172[12] = auVar59[15] & 0x80;
      auVar172._13_3_ = 0;
      bVar182 = auVar97[0];
      bVar185 = auVar97[1];
      bVar186 = auVar97[4];
      bVar187 = auVar97[5];
      bVar188 = auVar97[8];
      bVar189 = auVar97[9];
      bVar191 = auVar97[12];
      bVar192 = auVar97[13];
      uVar57 = (uVar36 - uVar144) * iVar95 >> 7;
      uVar117 = (uVar36 - uVar149) * iVar98 >> 7;
      uVar137 = (uVar36 - uVar143) * iVar99 >> 7;
      uVar138 = (uVar36 - uVar148) * iVar100 >> 7;
      iVar153 = uVar58 + uVar152;
      iVar155 = (uint3)(CONCAT16((byte)(uVar62 >> 0x10) & ~auVar73[6],
                                 CONCAT15((byte)(uVar62 >> 8) & ~bVar76,
                                          CONCAT14((byte)uVar62 & ~bVar75,uVar58))) >> 0x20) +
                uVar154;
      iVar157 = CONCAT12((byte)(uVar65 >> 0x10) & ~auVar73[10],
                         CONCAT11((byte)(uVar65 >> 8) & ~bVar79,(byte)uVar65 & ~bVar78)) + uVar156;
      auVar173 = NEON_cmeq(auVar172,0,2);
      auVar87._2_2_ = 0;
      auVar87._0_2_ = uVar43;
      auVar87[4] = auVar29[13];
      auVar87._5_3_ = 0;
      auVar87[8] = auVar29[14];
      auVar87._9_3_ = 0;
      auVar87[12] = auVar29[15];
      auVar87._13_3_ = 0;
      auVar33[8] = 0x7f;
      auVar33._0_8_ = 0x7f0000007f;
      auVar33._9_3_ = 0;
      auVar33[12] = 0x7f;
      auVar33._13_3_ = 0;
      auVar87 = NEON_cmeq(auVar87,auVar33,4);
      bVar111 = auVar59[3] & 0x7f;
      bVar112 = auVar59[7] & 0x7f;
      bVar113 = auVar59[11] & 0x7f;
      bVar114 = auVar59[15] & 0x7f;
      iVar22 = CONCAT12((byte)(uVar141 >> 0x10) & ~auVar97[2],
                        CONCAT11((byte)(uVar141 >> 8) & ~bVar185,(byte)uVar141 & ~bVar182)) +
               uVar131;
      iVar23 = CONCAT12((byte)(uVar145 >> 0x10) & ~auVar97[6],
                        CONCAT11((byte)(uVar145 >> 8) & ~bVar187,(byte)uVar145 & ~bVar186)) +
               uVar134;
      iVar24 = CONCAT12((byte)(uVar146 >> 0x10) & ~auVar97[10],
                        CONCAT11((byte)(uVar146 >> 8) & ~bVar189,(byte)uVar146 & ~bVar188)) +
               uVar136;
      iVar25 = CONCAT12((byte)(uVar150 >> 0x10) & ~auVar97[14],
                        CONCAT11((byte)(uVar150 >> 8) & ~bVar192,(byte)uVar150 & ~bVar191)) +
               uVar140;
      auVar96._2_2_ = 0;
      auVar96._0_2_ = uVar43;
      auVar96[4] = auVar29[13];
      auVar96._5_3_ = 0;
      auVar96[8] = auVar29[14];
      auVar96._9_3_ = 0;
      auVar96[12] = auVar29[15];
      auVar96._13_3_ = 0;
      auVar29[8] = 0x80;
      auVar29._0_8_ = 0x8000000080;
      auVar29._9_3_ = 0;
      auVar29[12] = 0x80;
      auVar29._13_3_ = 0;
      auVar87 = NEON_bsl(auVar87,auVar29,auVar96,1);
      bVar199 = bVar199 & 0x7f;
      bVar200 = bVar200 & 0x7f;
      bVar201 = bVar201 & 0x7f;
      bVar202 = bVar202 & 0x7f;
      iVar15 = CONCAT11((byte)(uVar57 >> 8) & ~bVar74,(byte)uVar57 & ~bVar69) + uVar144;
      iVar16 = CONCAT11((byte)(uVar117 >> 8) & ~bVar76,(byte)uVar117 & ~bVar75) + uVar149;
      iVar18 = CONCAT11((byte)(uVar137 >> 8) & ~bVar79,(byte)uVar137 & ~bVar78) + uVar143;
      iVar19 = CONCAT11((byte)(uVar138 >> 8) & ~auVar73[13],(byte)uVar138 & ~bVar81) + uVar148;
      iVar121 = (int)uVar193;
      iVar123 = (int)uVar196;
      uVar160 = CONCAT14((char)((ulong)uVar161 >> 0x20),(uint)((byte)uVar161 & 0x3f)) & 0x3fffffffff
      ;
      uVar166 = CONCAT14((char)((ulong)uVar167 >> 0x20),(uint)((byte)uVar167 & 0x3f)) & 0x3fffffffff
      ;
      uVar57 = (uVar36 - uVar120) * iVar91 >> 7;
      uVar117 = (uVar36 - uVar164) * iVar92 >> 7;
      uVar137 = (uVar36 - uVar168) * iVar93 >> 7;
      uVar138 = (uVar36 - uVar124) * iVar94 >> 7;
      bVar170 = auVar173[0];
      bVar174 = auVar173[1];
      bVar175 = auVar173[4];
      bVar176 = auVar173[5];
      bVar177 = auVar173[8];
      bVar178 = auVar173[9];
      bVar180 = auVar173[12];
      bVar181 = auVar173[13];
      iVar115 = (int)uVar183;
      bVar39 = (byte)(uVar183 >> 0x20);
      uVar58 = (uint)(auVar59[8] & 0x3f);
      uVar136 = (uVar2 - iVar121) * iVar95;
      uVar140 = (uVar2 - (bVar195 & 0x3f)) * iVar98;
      uVar144 = (uVar2 - iVar123) * iVar99;
      uVar149 = (uVar2 - (bVar198 & 0x3f)) * iVar100;
      bVar107 = auVar34[3] & 0x7f;
      bVar108 = auVar34[7] & 0x7f;
      bVar109 = auVar34[11] & 0x7f;
      bVar110 = auVar34[15] & 0x7f;
      iVar47 = CONCAT12((byte)(ushort)(uVar46 >> 0x17) & ~auVar173[2],
                        CONCAT11((byte)(uint3)(uVar46 >> 0xf) & ~bVar174,
                                 (byte)(uVar46 >> 7) & ~bVar170)) + uVar126;
      iVar50 = CONCAT12((byte)(ushort)(uVar49 >> 0x17) & ~auVar173[6],
                        CONCAT11((byte)(uint3)(uVar49 >> 0xf) & ~bVar176,
                                 (byte)(uVar49 >> 7) & ~bVar175)) + uVar128;
      iVar52 = CONCAT12((byte)(ushort)(uVar51 >> 0x17) & ~auVar173[10],
                        CONCAT11((byte)(uint3)(uVar51 >> 0xf) & ~bVar178,
                                 (byte)(uVar51 >> 7) & ~bVar177)) + uVar130;
      iVar55 = CONCAT12((byte)(ushort)(uVar54 >> 0x17) & ~auVar173[14],
                        CONCAT11((byte)(uint3)(uVar54 >> 0xf) & ~bVar181,
                                 (byte)(uVar54 >> 7) & ~bVar180)) + uVar133;
      uVar46 = (uVar2 - iVar115) * iVar91;
      uVar49 = (uVar2 - bVar39) * iVar92;
      uVar51 = (uVar2 - uVar58) * iVar93;
      uVar54 = (uVar2 - bVar190) * iVar94;
      iVar82 = auVar87._0_4_;
      iVar83 = auVar87._4_4_;
      iVar84 = auVar87._8_4_;
      iVar85 = auVar87._12_4_;
      auVar59._0_5_ = CONCAT14(bVar103,(uint)(bVar101 & 0x80)) & 0x80ffffffff;
      auVar59._5_3_ = 0;
      auVar59[8] = bVar104 & 0x80;
      auVar59._9_3_ = 0;
      auVar59[12] = bVar106 & 0x80;
      auVar59._13_3_ = 0;
      iVar11 = CONCAT11((byte)(uVar57 >> 8) & ~bVar174,(byte)uVar57 & ~bVar170) + uVar120;
      iVar12 = CONCAT11((byte)(uVar117 >> 8) & ~bVar176,(byte)uVar117 & ~bVar175) + uVar164;
      iVar13 = CONCAT11((byte)(uVar137 >> 8) & ~bVar178,(byte)uVar137 & ~bVar177) + uVar168;
      iVar14 = CONCAT11((byte)(uVar138 >> 8) & ~bVar181,(byte)uVar138 & ~bVar180) + uVar124;
      iVar127 = (int)uVar171;
      bVar195 = (byte)(uVar171 >> 0x20);
      uVar120 = (uint)(auVar34[8] & 0x3f);
      iVar159 = (int)uVar71;
      bVar198 = (byte)(uVar71 >> 0x20);
      iVar165 = (int)uVar17;
      bVar40 = (byte)(uVar17 >> 0x20);
      auVar87 = NEON_cmeq(auVar59,0,2);
      uVar62 = (uVar2 - iVar127) * iVar86;
      uVar65 = (uVar2 - bVar195) * iVar88;
      uVar131 = (uVar2 - uVar120) * iVar89;
      uVar134 = (uVar2 - bVar179) * iVar90;
      uVar141 = (uVar36 - iVar70) * iVar86 >> 7;
      uVar145 = (uVar36 - bVar38) * iVar88 >> 7;
      uVar146 = (uVar36 - bVar77) * iVar89 >> 7;
      uVar150 = (uVar36 - bVar80) * iVar90 >> 7;
      uVar57 = (uVar35 - uVar158) * iVar82 >> 7;
      uVar117 = (uVar35 - (bVar48 & 0x3f)) * iVar83 >> 7;
      uVar137 = (uVar35 - uVar162) * iVar84 >> 7;
      uVar138 = (uVar35 - (bVar53 & 0x3f)) * iVar85 >> 7;
      bVar101 = bVar101 & 0x7f;
      bVar103 = bVar103 & 0x7f;
      bVar104 = bVar104 & 0x7f;
      bVar106 = bVar106 & 0x7f;
      iVar139 = (int)uVar160;
      bVar48 = (byte)(uVar160 >> 0x20);
      iVar147 = (int)uVar166;
      bVar53 = (byte)(uVar166 >> 0x20);
      bVar56 = auVar87[0];
      bVar60 = auVar87[1];
      bVar61 = auVar87[4];
      bVar63 = auVar87[5];
      bVar64 = auVar87[8];
      bVar66 = auVar87[9];
      bVar67 = auVar87[12];
      bVar68 = auVar87[13];
      uVar158 = (uVar36 - iVar159) * iVar82 >> 7;
      uVar162 = (uVar36 - bVar198) * iVar83 >> 7;
      uVar164 = (uVar36 - iVar165) * iVar84 >> 7;
      uVar168 = (uVar36 - bVar40) * iVar85 >> 7;
      iVar3 = (uint)CONCAT12((byte)(uVar57 >> 0x10) & ~auVar87[2],
                             CONCAT11((byte)(uVar57 >> 8) & ~bVar60,(byte)uVar57 & ~bVar56)) +
              (int)uVar102;
      iVar4 = (uint)CONCAT12((byte)(uVar117 >> 0x10) & ~auVar87[6],
                             CONCAT11((byte)(uVar117 >> 8) & ~bVar63,(byte)uVar117 & ~bVar61)) +
              (uint)(byte)(uVar102 >> 0x20);
      iVar5 = (uint)CONCAT12((byte)(uVar137 >> 0x10) & ~auVar87[10],
                             CONCAT11((byte)(uVar137 >> 8) & ~bVar66,(byte)uVar137 & ~bVar64)) +
              (int)uVar105;
      iVar6 = (uint)CONCAT12((byte)(uVar138 >> 0x10) & ~auVar87[14],
                             CONCAT11((byte)(uVar138 >> 8) & ~bVar68,(byte)uVar138 & ~bVar67)) +
              (uint)(byte)(uVar105 >> 0x20);
      uVar57 = (uint)CONCAT11((byte)(uVar158 >> 8) & ~bVar60,(byte)uVar158 & ~bVar56);
      uVar117 = (uint)CONCAT11((byte)(uVar164 >> 8) & ~bVar66,(byte)uVar164 & ~bVar64);
      iVar70 = (uint)CONCAT11((byte)(uVar141 >> 8) & ~bVar185,(byte)uVar141 & ~bVar182) + iVar70;
      iVar7 = (uint)CONCAT11((byte)(uVar145 >> 8) & ~bVar187,(byte)uVar145 & ~bVar186) +
              (uint)bVar38;
      iVar8 = (uint)CONCAT11((byte)(uVar146 >> 8) & ~bVar189,(byte)uVar146 & ~bVar188) +
              (uint)bVar77;
      iVar9 = (uint)CONCAT11((byte)(uVar150 >> 8) & ~bVar192,(byte)uVar150 & ~bVar191) +
              (uint)bVar80;
      uVar137 = (uVar2 - iVar139) * iVar82;
      uVar141 = (uVar2 - bVar48) * iVar83;
      uVar145 = (uVar2 - iVar147) * iVar84;
      uVar150 = (uVar2 - bVar53) * iVar85;
      iVar159 = uVar57 + iVar159;
      iVar163 = (uint)(ushort)(CONCAT15((byte)(uVar162 >> 8) & ~bVar63,
                                        CONCAT14((byte)uVar162 & ~bVar61,uVar57)) >> 0x20) +
                (uint)bVar198;
      iVar165 = uVar117 + iVar165;
      iVar169 = (uint)(ushort)(CONCAT15((byte)(uVar168 >> 8) & ~bVar68,
                                        CONCAT14((byte)uVar168 & ~bVar67,uVar117)) >> 0x20) +
                (uint)bVar40;
      uVar57 = uVar46 >> 7;
      uVar117 = uVar51 >> 7;
      uVar138 = uVar137 >> 7;
      uVar146 = uVar145 >> 7;
      iVar122 = CONCAT13((byte)(uVar137 >> 0x1f) & ~auVar87[3],
                         CONCAT12((byte)(uVar138 >> 0x10) & ~auVar87[2],
                                  CONCAT11((byte)(uVar138 >> 8) & ~bVar60,(byte)uVar138 & ~bVar56)))
      ;
      iVar125 = CONCAT13((byte)(uVar145 >> 0x1f) & ~auVar87[11],
                         CONCAT12((byte)(uVar146 >> 0x10) & ~auVar87[10],
                                  CONCAT11((byte)(uVar146 >> 8) & ~bVar66,(byte)uVar146 & ~bVar64)))
      ;
      iVar116 = CONCAT13((byte)(uVar46 >> 0x1f) & ~auVar173[3],
                         CONCAT12((byte)(uVar57 >> 0x10) & ~auVar173[2],
                                  CONCAT11((byte)(uVar57 >> 8) & ~bVar174,(byte)uVar57 & ~bVar170)))
      ;
      iVar119 = CONCAT13((byte)(uVar51 >> 0x1f) & ~auVar173[11],
                         CONCAT12((byte)(uVar117 >> 0x10) & ~auVar173[10],
                                  CONCAT11((byte)(uVar117 >> 8) & ~bVar178,(byte)uVar117 & ~bVar177)
                                 ));
      iVar115 = iVar116 + iVar115;
      iVar116 = (int)(CONCAT17((byte)(uVar49 >> 0x1f) & ~auVar173[7],
                               CONCAT16((byte)((uint3)(uVar49 >> 0xf) >> 8) & ~auVar173[6],
                                        CONCAT15((byte)((uVar49 >> 7) >> 8) & ~bVar176,
                                                 CONCAT14((byte)(uVar49 >> 7) & ~bVar175,iVar116))))
                     >> 0x20) + (uint)bVar39;
      iVar118 = iVar119 + uVar58;
      iVar119 = (int)(CONCAT17((byte)(uVar54 >> 0x1f) & ~auVar173[15],
                               CONCAT16((byte)((uint3)(uVar54 >> 0xf) >> 8) & ~auVar173[14],
                                        CONCAT15((byte)((uVar54 >> 7) >> 8) & ~bVar181,
                                                 CONCAT14((byte)(uVar54 >> 7) & ~bVar180,iVar119))))
                     >> 0x20) + (uint)bVar190;
      iVar139 = iVar122 + iVar139;
      iVar142 = (int)(CONCAT17((byte)(uVar141 >> 0x1f) & ~auVar87[7],
                               CONCAT16((byte)((uint3)(uVar141 >> 0xf) >> 8) & ~auVar87[6],
                                        CONCAT15((byte)((uVar141 >> 7) >> 8) & ~bVar63,
                                                 CONCAT14((byte)(uVar141 >> 7) & ~bVar61,iVar122))))
                     >> 0x20) + (uint)bVar48;
      iVar147 = iVar125 + iVar147;
      iVar151 = (int)(CONCAT17((byte)(uVar150 >> 0x1f) & ~auVar87[15],
                               CONCAT16((byte)((uint3)(uVar150 >> 0xf) >> 8) & ~auVar87[14],
                                        CONCAT15((byte)((uVar150 >> 7) >> 8) & ~bVar68,
                                                 CONCAT14((byte)(uVar150 >> 7) & ~bVar67,iVar125))))
                     >> 0x20) + (uint)bVar53;
      iVar121 = CONCAT13((byte)(uVar136 >> 0x1f) & ~auVar73[3],
                         CONCAT12((byte)(ushort)(uVar136 >> 0x17) & ~auVar73[2],
                                  CONCAT11((byte)(uint3)(uVar136 >> 0xf) & ~bVar74,
                                           (byte)(uVar136 >> 7) & ~bVar69))) + iVar121;
      iVar122 = CONCAT13((byte)(uVar140 >> 0x1f) & ~auVar73[7],
                         CONCAT12((byte)(ushort)(uVar140 >> 0x17) & ~auVar73[6],
                                  CONCAT11((byte)(uint3)(uVar140 >> 0xf) & ~bVar76,
                                           (byte)(uVar140 >> 7) & ~bVar75))) +
                (uint)(byte)(uVar193 >> 0x20);
      iVar123 = CONCAT13((byte)(uVar144 >> 0x1f) & ~auVar73[11],
                         CONCAT12((byte)(ushort)(uVar144 >> 0x17) & ~auVar73[10],
                                  CONCAT11((byte)(uint3)(uVar144 >> 0xf) & ~bVar79,
                                           (byte)(uVar144 >> 7) & ~bVar78))) + iVar123;
      iVar125 = CONCAT13((byte)(uVar149 >> 0x1f) & ~auVar73[15],
                         CONCAT12((byte)(ushort)(uVar149 >> 0x17) & ~auVar73[14],
                                  CONCAT11((byte)(uint3)(uVar149 >> 0xf) & ~auVar73[13],
                                           (byte)(uVar149 >> 7) & ~bVar81))) +
                (uint)(byte)(uVar196 >> 0x20);
      iVar127 = CONCAT13((byte)(uVar62 >> 0x1f) & ~auVar97[3],
                         CONCAT12((byte)(ushort)(uVar62 >> 0x17) & ~auVar97[2],
                                  CONCAT11((byte)(uint3)(uVar62 >> 0xf) & ~bVar185,
                                           (byte)(uVar62 >> 7) & ~bVar182))) + iVar127;
      iVar129 = CONCAT13((byte)(uVar65 >> 0x1f) & ~auVar97[7],
                         CONCAT12((byte)(ushort)(uVar65 >> 0x17) & ~auVar97[6],
                                  CONCAT11((byte)(uint3)(uVar65 >> 0xf) & ~bVar187,
                                           (byte)(uVar65 >> 7) & ~bVar186))) + (uint)bVar195;
      iVar132 = CONCAT13((byte)(uVar131 >> 0x1f) & ~auVar97[11],
                         CONCAT12((byte)(ushort)(uVar131 >> 0x17) & ~auVar97[10],
                                  CONCAT11((byte)(uint3)(uVar131 >> 0xf) & ~bVar189,
                                           (byte)(uVar131 >> 7) & ~bVar188))) + uVar120;
      iVar135 = CONCAT13((byte)(uVar134 >> 0x1f) & ~auVar97[15],
                         CONCAT12((byte)(ushort)(uVar134 >> 0x17) & ~auVar97[14],
                                  CONCAT11((byte)(uint3)(uVar134 >> 0xf) & ~bVar192,
                                           (byte)(uVar134 >> 7) & ~bVar191))) + (uint)bVar179;
      *(ulong *)(*param_1 + 8) =
           CONCAT17((byte)((uint)iVar19 >> 8) | (byte)((uint)iVar125 >> 0x18) |
                    ((byte)((uVar37 - bVar202) * iVar100 >> 7) & ~bVar81) + bVar202,
                    CONCAT16((byte)iVar19 | (byte)((uint)iVar125 >> 0x10),
                             CONCAT15((byte)((ulong)uVar197 >> 0x28) & 0x3f |
                                      (byte)((uint)iVar125 >> 8),
                                      CONCAT14((char)iVar125,
                                               CONCAT13((byte)((uint)iVar157 >> 0x10) |
                                                        (byte)((uint)iVar18 >> 8) |
                                                        (byte)((uint)iVar123 >> 0x18) |
                                                        ((byte)((uVar37 - bVar201) * iVar99 >> 7) &
                                                        ~bVar78) + bVar201,
                                                        CONCAT12((byte)((uint)iVar157 >> 8) |
                                                                 (byte)iVar18 |
                                                                 (byte)((uint)iVar123 >> 0x10),
                                                                 CONCAT11((byte)iVar157 |
                                                                          (byte)((uint)iVar123 >> 8)
                                                                          ,(char)iVar123)))))));
      *(ulong *)*param_1 =
           CONCAT17((byte)((uint)iVar155 >> 0x10) | (byte)((uint)iVar16 >> 8) |
                    (byte)((uint)iVar122 >> 0x18) |
                    ((byte)((uVar37 - bVar200) * iVar98 >> 7) & ~bVar75) + bVar200,
                    CONCAT16((byte)((uint)iVar155 >> 8) | (byte)iVar16 |
                             (byte)((uint)iVar122 >> 0x10),
                             CONCAT15((byte)iVar155 | (byte)((uint)iVar122 >> 8),
                                      CONCAT14((char)iVar122,
                                               CONCAT13((byte)((uint)iVar153 >> 0x10) |
                                                        (byte)((uint)iVar15 >> 8) |
                                                        (byte)((uint)iVar121 >> 0x18) |
                                                        ((byte)((uVar37 - bVar199) * iVar95 >> 7) &
                                                        ~bVar69) + bVar199,
                                                        CONCAT12((byte)((uint)iVar153 >> 8) |
                                                                 (byte)iVar15 |
                                                                 (byte)((uint)iVar121 >> 0x10),
                                                                 CONCAT11((byte)iVar153 |
                                                                          (byte)((uint)iVar121 >> 8)
                                                                          ,(char)iVar121)))))));
      *(ulong *)(param_1[1] + 8) =
           CONCAT17((byte)((uint)iVar55 >> 0x10) | (byte)((uint)iVar14 >> 8) |
                    (byte)((uint)iVar119 >> 0x18) |
                    ((byte)((uVar37 - bVar114) * iVar94 >> 7) & ~bVar180) + bVar114,
                    CONCAT16((byte)((uint)iVar55 >> 8) | (byte)iVar14 |
                             (byte)((uint)iVar119 >> 0x10),
                             CONCAT15((byte)iVar55 | (byte)((uint)iVar119 >> 8),
                                      CONCAT14((char)iVar119,
                                               CONCAT13((byte)((uint)iVar52 >> 0x10) |
                                                        (byte)((uint)iVar13 >> 8) |
                                                        (byte)((uint)iVar118 >> 0x18) |
                                                        ((byte)((uVar37 - bVar113) * iVar93 >> 7) &
                                                        ~bVar177) + bVar113,
                                                        CONCAT12((byte)((uint)iVar52 >> 8) |
                                                                 (byte)iVar13 |
                                                                 (byte)((uint)iVar118 >> 0x10),
                                                                 CONCAT11((byte)iVar52 |
                                                                          (byte)((uint)iVar118 >> 8)
                                                                          ,(char)iVar118)))))));
      *(ulong *)param_1[1] =
           CONCAT17((byte)((uint)iVar50 >> 0x10) | (byte)((uint)iVar12 >> 8) |
                    (byte)((uint)iVar116 >> 0x18) |
                    ((byte)((uVar37 - bVar112) * iVar92 >> 7) & ~bVar175) + bVar112,
                    CONCAT16((byte)((uint)iVar50 >> 8) | (byte)iVar12 |
                             (byte)((uint)iVar116 >> 0x10),
                             CONCAT15((byte)iVar50 | (byte)((uint)iVar116 >> 8),
                                      CONCAT14((char)iVar116,
                                               CONCAT13((byte)((uint)iVar47 >> 0x10) |
                                                        (byte)((uint)iVar11 >> 8) |
                                                        (byte)((uint)iVar115 >> 0x18) |
                                                        ((byte)((uVar37 - bVar111) * iVar91 >> 7) &
                                                        ~bVar170) + bVar111,
                                                        CONCAT12((byte)((uint)iVar47 >> 8) |
                                                                 (byte)iVar11 |
                                                                 (byte)((uint)iVar115 >> 0x10),
                                                                 CONCAT11((byte)iVar47 |
                                                                          (byte)((uint)iVar115 >> 8)
                                                                          ,(char)iVar115)))))));
      *(ulong *)(param_1[2] + 8) =
           CONCAT17((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar9 >> 8) |
                    (byte)((uint)iVar135 >> 0x18) |
                    ((byte)((uVar37 - bVar110) * iVar90 >> 7) & ~bVar191) + bVar110,
                    CONCAT16((byte)((uint)iVar25 >> 8) | (byte)iVar9 | (byte)((uint)iVar135 >> 0x10)
                             ,CONCAT15((byte)iVar25 | (byte)((uint)iVar135 >> 8),
                                       CONCAT14((char)iVar135,
                                                CONCAT13((byte)((uint)iVar24 >> 0x10) |
                                                         (byte)((uint)iVar8 >> 8) |
                                                         (byte)((uint)iVar132 >> 0x18) |
                                                         ((byte)((uVar37 - bVar109) * iVar89 >> 7) &
                                                         ~bVar188) + bVar109,
                                                         CONCAT12((byte)((uint)iVar24 >> 8) |
                                                                  (byte)iVar8 |
                                                                  (byte)((uint)iVar132 >> 0x10),
                                                                  CONCAT11((byte)iVar24 |
                                                                           (byte)((uint)iVar132 >> 8
                                                                                 ),(char)iVar132))))
                                      )));
      *(ulong *)param_1[2] =
           CONCAT17((byte)((uint)iVar23 >> 0x10) | (byte)((uint)iVar7 >> 8) |
                    (byte)((uint)iVar129 >> 0x18) |
                    ((byte)((uVar37 - bVar108) * iVar88 >> 7) & ~bVar186) + bVar108,
                    CONCAT16((byte)((uint)iVar23 >> 8) | (byte)iVar7 | (byte)((uint)iVar129 >> 0x10)
                             ,CONCAT15((byte)iVar23 | (byte)((uint)iVar129 >> 8),
                                       CONCAT14((char)iVar129,
                                                CONCAT13((byte)((uint)iVar22 >> 0x10) |
                                                         (byte)((uint)iVar70 >> 8) |
                                                         (byte)((uint)iVar127 >> 0x18) |
                                                         ((byte)((uVar37 - bVar107) * iVar86 >> 7) &
                                                         ~bVar182) + bVar107,
                                                         CONCAT12((byte)((uint)iVar22 >> 8) |
                                                                  (byte)iVar70 |
                                                                  (byte)((uint)iVar127 >> 0x10),
                                                                  CONCAT11((byte)iVar22 |
                                                                           (byte)((uint)iVar127 >> 8
                                                                                 ),(char)iVar127))))
                                      )));
      *(ulong *)(param_1[3] + 8) =
           CONCAT17((byte)((uint)iVar6 >> 0x10) | (byte)((uint)iVar169 >> 8) |
                    (byte)((uint)iVar151 >> 0x18) |
                    ((byte)((uVar37 - bVar106) * iVar85 >> 7) & ~bVar67) + bVar106,
                    CONCAT16((byte)((uint)iVar6 >> 8) | (byte)iVar169 |
                             (byte)((uint)iVar151 >> 0x10),
                             CONCAT15((byte)iVar6 | (byte)((uint)iVar151 >> 8),
                                      CONCAT14((char)iVar151,
                                               CONCAT13((byte)((uint)iVar5 >> 0x10) |
                                                        (byte)((uint)iVar165 >> 8) |
                                                        (byte)((uint)iVar147 >> 0x18) |
                                                        ((byte)((uVar37 - bVar104) * iVar84 >> 7) &
                                                        ~bVar64) + bVar104,
                                                        CONCAT12((byte)((uint)iVar5 >> 8) |
                                                                 (byte)iVar165 |
                                                                 (byte)((uint)iVar147 >> 0x10),
                                                                 CONCAT11((byte)iVar5 |
                                                                          (byte)((uint)iVar147 >> 8)
                                                                          ,(char)iVar147)))))));
      *(ulong *)param_1[3] =
           CONCAT17((byte)((uint)iVar4 >> 0x10) | (byte)((uint)iVar163 >> 8) |
                    (byte)((uint)iVar142 >> 0x18) |
                    ((byte)((uVar37 - bVar103) * iVar83 >> 7) & ~bVar61) + bVar103,
                    CONCAT16((byte)((uint)iVar4 >> 8) | (byte)iVar163 |
                             (byte)((uint)iVar142 >> 0x10),
                             CONCAT15((byte)iVar4 | (byte)((uint)iVar142 >> 8),
                                      CONCAT14((char)iVar142,
                                               CONCAT13((byte)((uint)iVar3 >> 0x10) |
                                                        (byte)((uint)iVar159 >> 8) |
                                                        (byte)((uint)iVar139 >> 0x18) |
                                                        ((byte)((uVar37 - bVar101) * iVar82 >> 7) &
                                                        ~bVar56) + bVar101,
                                                        CONCAT12((byte)((uint)iVar3 >> 8) |
                                                                 (byte)iVar159 |
                                                                 (byte)((uint)iVar139 >> 0x10),
                                                                 CONCAT11((byte)iVar3 |
                                                                          (byte)((uint)iVar139 >> 8)
                                                                          ,(char)iVar139)))))));
      param_1 = param_1 + 4;
      param_3 = param_3 + 1;
    } while (param_2 != puVar1);
    return;
  }
  lVar42 = 0;
  do {
    uVar137 = *(uint *)((long)param_2 + lVar42 * 4);
    uVar138 = uVar137 >> 8 & 0x3f;
    uVar117 = (uint)(byte)(*param_3)[lVar42];
    uVar57 = uVar137 >> 0x18 & 0x7f;
    if (uVar117 == 0x7f) {
      uVar117 = 0x80;
    }
    uVar46 = uVar137 >> 0x10 & 0x3f;
    uVar150 = 0;
    uVar146 = 0;
    uVar145 = 0;
    uVar141 = 0;
    if ((int)uVar137 < 0) {
      uVar141 = (uVar2 - (uVar137 & 0x3f)) * uVar117 >> 7;
      uVar145 = (uVar35 - uVar138) * uVar117 >> 7;
      uVar146 = (uVar36 - uVar46) * uVar117 >> 7;
      uVar150 = (uVar37 - uVar57) * uVar117 >> 7;
    }
    *(uint *)(*param_1 + lVar42 * 4) =
         (uVar46 + uVar146) * 0x10000 | (uVar138 + uVar145) * 0x100 |
         (uVar137 & 0x3f) + uVar141 | (uVar57 + uVar150) * 0x1000000;
    lVar42 = lVar42 + 1;
  } while (lVar42 != 0x200);
  return;
}


