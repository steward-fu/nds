/*
 * Ghidra decompilation
 *
 * Function : render_polygon_decal_c
 * Address  : 001486c0
 * Program  : drastic64
 */


void render_polygon_decal_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               byte param_5,uint param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  int iVar61;
  ulong uVar62;
  undefined8 *puVar63;
  undefined8 *puVar64;
  undefined8 *puVar65;
  ulong uVar66;
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
  uint uVar79;
  undefined8 uVar80;
  uint uVar81;
  uint uVar82;
  undefined8 uVar83;
  uint uVar84;
  uint uVar85;
  undefined8 uVar86;
  uint uVar87;
  uint uVar88;
  undefined8 uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  undefined8 uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  undefined8 uVar98;
  uint uVar99;
  uint uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  int iVar109;
  int iVar112;
  int iVar113;
  undefined auVar110 [16];
  undefined auVar111 [16];
  int iVar114;
  int iVar115;
  int iVar118;
  int iVar119;
  undefined auVar116 [16];
  undefined auVar117 [16];
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  uint uVar130;
  int iVar133;
  uint uVar134;
  int iVar135;
  uint uVar136;
  undefined auVar131 [16];
  undefined auVar132 [16];
  int iVar137;
  uint uVar138;
  int iVar139;
  int iVar142;
  int iVar143;
  undefined auVar140 [16];
  undefined auVar141 [16];
  int iVar144;
  int iVar145;
  uint uVar146;
  int iVar148;
  uint uVar149;
  int iVar150;
  uint uVar151;
  undefined auVar147 [16];
  int iVar152;
  uint uVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  uint uVar158;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  uint uVar169;
  
  uVar62 = param_4 & 0xffffffff;
  puVar2 = (undefined8 *)((long)param_3 + uVar62);
  puVar3 = (undefined8 *)((long)puVar2 + uVar62);
  if (param_6 == 0) {
    return;
  }
  uVar66 = (ulong)param_6;
  puVar59 = (undefined8 *)((long)param_1 + (ulong)param_6 * 4);
  bVar1 = 0x7e < (ulong)((long)param_1 + (0x3f - (long)param_2));
  if (((undefined8 *)((long)param_3 + uVar66 + (param_4 & 0xffffffff) * 2) <= param_1 ||
      puVar59 <= puVar3) &&
      (((bVar1 && 0xd < param_6 - 1) && (!bVar1 || param_6 - 1 != 0xe)) &&
      (((undefined8 *)((long)param_3 + uVar62 + uVar66) <= param_1 || puVar59 <= puVar2) &&
      ((undefined8 *)((long)param_3 + uVar66) <= param_1 || puVar59 <= param_3)))) {
    puVar59 = param_2;
    puVar60 = param_1;
    puVar63 = puVar3;
    puVar64 = puVar2;
    puVar65 = param_3;
    do {
      uVar108 = puVar59[1];
      uVar107 = *puVar59;
      uVar106 = puVar59[3];
      uVar105 = puVar59[2];
      uVar104 = puVar59[5];
      uVar103 = puVar59[4];
      uVar102 = puVar59[7];
      uVar101 = puVar59[6];
      puVar59 = puVar59 + 8;
      uVar158 = (uint)uVar105 >> 0x18;
      uVar159 = (uint)((ulong)uVar105 >> 0x38);
      uVar160 = (uint)uVar106 >> 0x18;
      uVar161 = (uint)((ulong)uVar106 >> 0x38);
      bVar162 = (byte)((ulong)uVar107 >> 0x18);
      bVar163 = (byte)((ulong)uVar107 >> 0x38);
      bVar164 = (byte)((ulong)uVar108 >> 0x18);
      bVar165 = (byte)((ulong)uVar108 >> 0x38);
      bVar71 = (byte)((ulong)uVar101 >> 0x18);
      bVar72 = (byte)((ulong)uVar101 >> 0x38);
      bVar77 = (byte)((ulong)uVar102 >> 0x18);
      bVar78 = (byte)((ulong)uVar102 >> 0x38);
      bVar154 = (byte)((ulong)uVar103 >> 0x18);
      bVar155 = (byte)((ulong)uVar103 >> 0x38);
      bVar156 = (byte)((ulong)uVar104 >> 0x18);
      bVar157 = (byte)((ulong)uVar104 >> 0x38);
      auVar116._0_4_ = 0x1f - uVar158;
      auVar116._4_4_ = 0x1f - uVar159;
      auVar116._8_4_ = 0x1f - uVar160;
      auVar116._12_4_ = 0x1f - uVar161;
      auVar36._4_4_ = uVar159;
      auVar36._0_4_ = uVar158;
      auVar36._8_4_ = uVar160;
      auVar36._12_4_ = uVar161;
      auVar140 = NEON_cmeq(auVar36,0,2);
      iVar113 = 0x1f - (uint)bVar72;
      iVar114 = 0x1f - (uint)bVar77;
      iVar115 = 0x1f - (uint)bVar78;
      auVar141._1_3_ = 0;
      auVar141[0] = bVar71;
      auVar141[4] = bVar72;
      auVar141._5_3_ = 0;
      auVar141[8] = bVar77;
      auVar141._9_3_ = 0;
      auVar141[12] = bVar78;
      auVar141._13_3_ = 0;
      auVar110 = NEON_cmeq(auVar141,0,2);
      uVar83 = puVar64[1];
      uVar80 = *puVar64;
      uVar98 = puVar65[1];
      uVar93 = *puVar65;
      auVar117._8_4_ = 0x20;
      auVar117._0_8_ = 0x2000000020;
      auVar117._12_4_ = 0x20;
      auVar141 = NEON_bsl(auVar140,auVar117,auVar116,1);
      bVar67 = (byte)((ulong)uVar80 >> 8);
      bVar73 = (byte)((ulong)uVar80 >> 0x28);
      bVar68 = (byte)((ulong)uVar93 >> 8);
      bVar74 = (byte)((ulong)uVar93 >> 0x28);
      iVar7 = 0x1f - (uint)bVar163;
      iVar109 = 0x1f - (uint)bVar164;
      iVar112 = 0x1f - (uint)bVar165;
      iVar61 = 0x1f - (uint)bVar155;
      iVar4 = 0x1f - (uint)bVar156;
      iVar5 = 0x1f - (uint)bVar157;
      auVar111[4] = (char)iVar113;
      auVar111._0_4_ = 0x1f - (uint)bVar71;
      auVar111[5] = (char)((uint)iVar113 >> 8);
      auVar111[6] = (char)((uint)iVar113 >> 0x10);
      auVar111[7] = (char)((uint)iVar113 >> 0x18);
      auVar111[8] = (char)iVar114;
      auVar111[9] = (char)((uint)iVar114 >> 8);
      auVar111[10] = (char)((uint)iVar114 >> 0x10);
      auVar111[11] = (char)((uint)iVar114 >> 0x18);
      auVar111[12] = (char)iVar115;
      auVar111[13] = (char)((uint)iVar115 >> 8);
      auVar111[14] = (char)((uint)iVar115 >> 0x10);
      auVar111[15] = (char)((uint)iVar115 >> 0x18);
      auVar131._8_4_ = 0x20;
      auVar131._0_8_ = 0x2000000020;
      auVar131._12_4_ = 0x20;
      auVar111 = NEON_bsl(auVar110,auVar131,auVar111,1);
      bVar69 = (byte)((ulong)uVar83 >> 8);
      bVar75 = (byte)((ulong)uVar83 >> 0x28);
      bVar70 = (byte)((ulong)uVar98 >> 8);
      bVar76 = (byte)((ulong)uVar98 >> 0x28);
      auVar39._1_3_ = 0;
      auVar39[0] = bVar162;
      auVar39[4] = bVar163;
      auVar39._5_3_ = 0;
      auVar39[8] = bVar164;
      auVar39._9_3_ = 0;
      auVar39[12] = bVar165;
      auVar39._13_3_ = 0;
      auVar110 = NEON_cmeq(auVar39,0,2);
      auVar147._1_3_ = 0;
      auVar147[0] = bVar154;
      auVar147[4] = bVar155;
      auVar147._5_3_ = 0;
      auVar147[8] = bVar156;
      auVar147._9_3_ = 0;
      auVar147[12] = bVar157;
      auVar147._13_3_ = 0;
      auVar131 = NEON_cmeq(auVar147,0,2);
      auVar34._1_3_ = 0;
      auVar34[0] = bVar154;
      auVar34[4] = bVar155;
      auVar34._5_3_ = 0;
      auVar34[8] = bVar156;
      auVar34._9_3_ = 0;
      auVar34[12] = bVar157;
      auVar34._13_3_ = 0;
      auVar50._8_4_ = 0x1f;
      auVar50._0_8_ = 0x1f0000001f;
      auVar50._12_4_ = 0x1f;
      auVar117 = NEON_cmeq(auVar34,auVar50,4);
      auVar140[4] = (char)iVar7;
      auVar140._0_4_ = 0x1f - (uint)bVar162;
      auVar140[5] = (char)((uint)iVar7 >> 8);
      auVar140[6] = (char)((uint)iVar7 >> 0x10);
      auVar140[7] = (char)((uint)iVar7 >> 0x18);
      auVar140[8] = (char)iVar109;
      auVar140[9] = (char)((uint)iVar109 >> 8);
      auVar140[10] = (char)((uint)iVar109 >> 0x10);
      auVar140[11] = (char)((uint)iVar109 >> 0x18);
      auVar140[12] = (char)iVar112;
      auVar140[13] = (char)((uint)iVar112 >> 8);
      auVar140[14] = (char)((uint)iVar112 >> 0x10);
      auVar140[15] = (char)((uint)iVar112 >> 0x18);
      auVar132._8_4_ = 0x20;
      auVar132._0_8_ = 0x2000000020;
      auVar132._12_4_ = 0x20;
      auVar147 = NEON_bsl(auVar110,auVar132,auVar140,1);
      auVar110[4] = (char)iVar61;
      auVar110._0_4_ = 0x1f - (uint)bVar154;
      auVar110[5] = (char)((uint)iVar61 >> 8);
      auVar110[6] = (char)((uint)iVar61 >> 0x10);
      auVar110[7] = (char)((uint)iVar61 >> 0x18);
      auVar110[8] = (char)iVar4;
      auVar110[9] = (char)((uint)iVar4 >> 8);
      auVar110[10] = (char)((uint)iVar4 >> 0x10);
      auVar110[11] = (char)((uint)iVar4 >> 0x18);
      auVar110[12] = (char)iVar5;
      auVar110[13] = (char)((uint)iVar5 >> 8);
      auVar110[14] = (char)((uint)iVar5 >> 0x10);
      auVar110[15] = (char)((uint)iVar5 >> 0x18);
      auVar27._8_4_ = 0x20;
      auVar27._0_8_ = 0x2000000020;
      auVar27._12_4_ = 0x20;
      auVar132 = NEON_bsl(auVar131,auVar27,auVar110,1);
      auVar28._8_4_ = 0x20;
      auVar28._0_8_ = 0x2000000020;
      auVar28._12_4_ = 0x20;
      auVar35._1_3_ = 0;
      auVar35[0] = bVar154;
      auVar35[4] = bVar155;
      auVar35._5_3_ = 0;
      auVar35[8] = bVar156;
      auVar35._9_3_ = 0;
      auVar35[12] = bVar157;
      auVar35._13_3_ = 0;
      auVar140 = NEON_bsl(auVar117,auVar28,auVar35,1);
      auVar40._1_3_ = 0;
      auVar40[0] = bVar162;
      auVar40[4] = bVar163;
      auVar40._5_3_ = 0;
      auVar40[8] = bVar164;
      auVar40._9_3_ = 0;
      auVar40[12] = bVar165;
      auVar40._13_3_ = 0;
      auVar51._8_4_ = 0x1f;
      auVar51._0_8_ = 0x1f0000001f;
      auVar51._12_4_ = 0x1f;
      auVar131 = NEON_cmeq(auVar40,auVar51,4);
      auVar37._4_4_ = uVar159;
      auVar37._0_4_ = uVar158;
      auVar37._8_4_ = uVar160;
      auVar37._12_4_ = uVar161;
      auVar52._8_4_ = 0x1f;
      auVar52._0_8_ = 0x1f0000001f;
      auVar52._12_4_ = 0x1f;
      auVar117 = NEON_cmeq(auVar37,auVar52,4);
      auVar32._1_3_ = 0;
      auVar32[0] = bVar71;
      auVar32[4] = bVar72;
      auVar32._5_3_ = 0;
      auVar32[8] = bVar77;
      auVar32._9_3_ = 0;
      auVar32[12] = bVar78;
      auVar32._13_3_ = 0;
      auVar53._8_4_ = 0x1f;
      auVar53._0_8_ = 0x1f0000001f;
      auVar53._12_4_ = 0x1f;
      auVar110 = NEON_cmeq(auVar32,auVar53,4);
      uVar89 = puVar63[1];
      uVar86 = *puVar63;
      auVar29._8_4_ = 0x20;
      auVar29._0_8_ = 0x2000000020;
      auVar29._12_4_ = 0x20;
      auVar41._1_3_ = 0;
      auVar41[0] = bVar162;
      auVar41[4] = bVar163;
      auVar41._5_3_ = 0;
      auVar41[8] = bVar164;
      auVar41._9_3_ = 0;
      auVar41[12] = bVar165;
      auVar41._13_3_ = 0;
      auVar131 = NEON_bsl(auVar131,auVar29,auVar41,1);
      auVar30._8_4_ = 0x20;
      auVar30._0_8_ = 0x2000000020;
      auVar30._12_4_ = 0x20;
      auVar38._4_4_ = uVar159;
      auVar38._0_4_ = uVar158;
      auVar38._8_4_ = uVar160;
      auVar38._12_4_ = uVar161;
      auVar117 = NEON_bsl(auVar117,auVar30,auVar38,1);
      auVar31._8_4_ = 0x20;
      auVar31._0_8_ = 0x2000000020;
      auVar31._12_4_ = 0x20;
      auVar33._1_3_ = 0;
      auVar33[0] = bVar71;
      auVar33[4] = bVar72;
      auVar33._5_3_ = 0;
      auVar33[8] = bVar77;
      auVar33._9_3_ = 0;
      auVar33[12] = bVar78;
      auVar33._13_3_ = 0;
      auVar110 = NEON_bsl(auVar110,auVar31,auVar33,1);
      bVar71 = (byte)((ulong)uVar86 >> 8);
      bVar77 = (byte)((ulong)uVar86 >> 0x28);
      bVar72 = (byte)((ulong)uVar89 >> 8);
      bVar78 = (byte)((ulong)uVar89 >> 0x28);
      iVar145 = auVar147._0_4_;
      iVar148 = auVar147._4_4_;
      iVar150 = auVar147._8_4_;
      iVar152 = auVar147._12_4_;
      iVar61 = auVar111._0_4_;
      iVar4 = auVar111._4_4_;
      iVar5 = auVar111._8_4_;
      iVar7 = auVar111._12_4_;
      iVar139 = auVar141._0_4_;
      iVar142 = auVar141._4_4_;
      iVar143 = auVar141._8_4_;
      iVar144 = auVar141._12_4_;
      iVar129 = auVar132._0_4_;
      iVar133 = auVar132._4_4_;
      iVar135 = auVar132._8_4_;
      iVar137 = auVar132._12_4_;
      iVar125 = auVar131._0_4_;
      iVar126 = auVar131._4_4_;
      iVar127 = auVar131._8_4_;
      iVar128 = auVar131._12_4_;
      uVar19 = (CONCAT12(bVar68,(ushort)(byte)uVar93) & 0xffff) * iVar145 +
               (uint)(byte)uVar107 * iVar125;
      uVar21 = (uint)bVar68 * iVar148 + (uint)(byte)((ulong)uVar107 >> 0x20) * iVar126;
      uVar23 = (uint)(byte)((ulong)uVar93 >> 0x10) * iVar150 + (uint)(byte)uVar108 * iVar127;
      uVar25 = (uint)(byte)((ulong)uVar93 >> 0x18) * iVar152 +
               (uint)(byte)((ulong)uVar108 >> 0x20) * iVar128;
      iVar121 = auVar117._0_4_;
      iVar122 = auVar117._4_4_;
      iVar123 = auVar117._8_4_;
      iVar124 = auVar117._12_4_;
      uVar42 = (CONCAT12(bVar74,(ushort)(byte)((ulong)uVar93 >> 0x20)) & 0xffff) * iVar139 +
               (uint)(byte)uVar105 * iVar121;
      uVar44 = (uint)bVar74 * iVar142 + (uint)(byte)((ulong)uVar105 >> 0x20) * iVar122;
      uVar46 = (uint)(byte)((ulong)uVar93 >> 0x30) * iVar143 + (uint)(byte)uVar106 * iVar123;
      uVar48 = (uint)(byte)((ulong)uVar93 >> 0x38) * iVar144 +
               (uint)(byte)((ulong)uVar106 >> 0x20) * iVar124;
      iVar115 = auVar140._0_4_;
      iVar118 = auVar140._4_4_;
      iVar119 = auVar140._8_4_;
      iVar120 = auVar140._12_4_;
      uVar11 = ((CONCAT12(bVar70,(short)uVar98) & 0xff00ff) & 0xffff) * iVar129 +
               (uint)(byte)uVar103 * iVar115;
      uVar13 = (uint)bVar70 * iVar133 + (uint)(byte)((ulong)uVar103 >> 0x20) * iVar118;
      uVar15 = (uint)(byte)((ulong)uVar98 >> 0x10) * iVar135 + (uint)(byte)uVar104 * iVar119;
      uVar17 = (uint)(byte)((ulong)uVar98 >> 0x18) * iVar137 +
               (uint)(byte)((ulong)uVar104 >> 0x20) * iVar120;
      iVar109 = auVar110._0_4_;
      iVar112 = auVar110._4_4_;
      iVar113 = auVar110._8_4_;
      iVar114 = auVar110._12_4_;
      uVar91 = (CONCAT12(bVar76,(ushort)(byte)((ulong)uVar98 >> 0x20)) & 0xffff) * iVar61 +
               (uint)(byte)uVar101 * iVar109;
      uVar94 = (uint)bVar76 * iVar4 + (uint)(byte)((ulong)uVar101 >> 0x20) * iVar112;
      uVar96 = (uint)(byte)((ulong)uVar98 >> 0x30) * iVar5 + (uint)(byte)uVar102 * iVar113;
      uVar99 = (uint)(byte)((ulong)uVar98 >> 0x38) * iVar7 +
               (uint)(byte)((ulong)uVar102 >> 0x20) * iVar114;
      uVar166 = (CONCAT12(bVar67,(ushort)(byte)uVar80) & 0xffff) * iVar145 +
                (uint)(byte)((ulong)uVar107 >> 8) * iVar125 >> 5;
      uVar167 = (uint)bVar67 * iVar148 + (uint)(byte)((ulong)uVar107 >> 0x28) * iVar126 >> 5;
      uVar168 = (uint)(byte)((ulong)uVar80 >> 0x10) * iVar150 +
                (uint)(byte)((ulong)uVar108 >> 8) * iVar127 >> 5;
      uVar169 = (uint)(byte)((ulong)uVar80 >> 0x18) * iVar152 +
                (uint)(byte)((ulong)uVar108 >> 0x28) * iVar128 >> 5;
      uVar54 = (CONCAT12(bVar73,(ushort)(byte)((ulong)uVar80 >> 0x20)) & 0xffff) * iVar139 +
               (uint)(byte)((ulong)uVar105 >> 8) * iVar121 >> 5;
      uVar55 = (uint)bVar73 * iVar142 + (uint)(byte)((ulong)uVar105 >> 0x28) * iVar122 >> 5;
      uVar56 = (uint)(byte)((ulong)uVar80 >> 0x30) * iVar143 +
               (uint)(byte)((ulong)uVar106 >> 8) * iVar123 >> 5;
      uVar57 = (uint)(byte)((ulong)uVar80 >> 0x38) * iVar144 +
               (uint)(byte)((ulong)uVar106 >> 0x28) * iVar124 >> 5;
      uVar92 = uVar91 >> 5;
      uVar95 = uVar94 >> 5;
      uVar97 = uVar96 >> 5;
      uVar100 = uVar99 >> 5;
      uVar158 = ((CONCAT12(bVar69,(short)uVar83) & 0xff00ff) & 0xffff) * iVar129 +
                (uint)(byte)((ulong)uVar103 >> 8) * iVar115 >> 5;
      uVar159 = (uint)bVar69 * iVar133 + (uint)(byte)((ulong)uVar103 >> 0x28) * iVar118 >> 5;
      uVar160 = (uint)(byte)((ulong)uVar83 >> 0x10) * iVar135 +
                (uint)(byte)((ulong)uVar104 >> 8) * iVar119 >> 5;
      uVar161 = (uint)(byte)((ulong)uVar83 >> 0x18) * iVar137 +
                (uint)(byte)((ulong)uVar104 >> 0x28) * iVar120 >> 5;
      uVar12 = uVar11 >> 5;
      uVar14 = uVar13 >> 5;
      uVar16 = uVar15 >> 5;
      uVar18 = uVar17 >> 5;
      uVar20 = uVar19 >> 5;
      uVar22 = uVar21 >> 5;
      uVar24 = uVar23 >> 5;
      uVar26 = uVar25 >> 5;
      uVar43 = uVar42 >> 5;
      uVar45 = uVar44 >> 5;
      uVar47 = uVar46 >> 5;
      uVar49 = uVar48 >> 5;
      uVar79 = (CONCAT12(bVar75,(ushort)(byte)((ulong)uVar83 >> 0x20)) & 0xffff) * iVar61 +
               (uint)(byte)((ulong)uVar101 >> 8) * iVar109 >> 5;
      uVar81 = (uint)bVar75 * iVar4 + (uint)(byte)((ulong)uVar101 >> 0x28) * iVar112 >> 5;
      uVar82 = (uint)(byte)((ulong)uVar83 >> 0x30) * iVar5 +
               (uint)(byte)((ulong)uVar102 >> 8) * iVar113 >> 5;
      uVar84 = (uint)(byte)((ulong)uVar83 >> 0x38) * iVar7 +
               (uint)(byte)((ulong)uVar102 >> 0x28) * iVar114 >> 5;
      uVar130 = ((CONCAT12(bVar72,(short)uVar89) & 0xff00ff) & 0xffff) * iVar129 +
                (uint)(byte)((ulong)uVar103 >> 0x10) * iVar115 >> 5;
      uVar134 = (uint)bVar72 * iVar133 + (uint)(byte)((ulong)uVar103 >> 0x30) * iVar118 >> 5;
      uVar136 = (uint)(byte)((ulong)uVar89 >> 0x10) * iVar135 +
                (uint)(byte)((ulong)uVar104 >> 0x10) * iVar119 >> 5;
      uVar138 = (uint)(byte)((ulong)uVar89 >> 0x18) * iVar137 +
                (uint)(byte)((ulong)uVar104 >> 0x30) * iVar120 >> 5;
      uVar146 = (CONCAT12(bVar71,(ushort)(byte)uVar86) & 0xffff) * iVar145 +
                (uint)(byte)((ulong)uVar107 >> 0x10) * iVar125 >> 5;
      uVar149 = (uint)bVar71 * iVar148 + (uint)(byte)((ulong)uVar107 >> 0x30) * iVar126 >> 5;
      uVar151 = (uint)(byte)((ulong)uVar86 >> 0x10) * iVar150 +
                (uint)(byte)((ulong)uVar108 >> 0x10) * iVar127 >> 5;
      uVar153 = (uint)(byte)((ulong)uVar86 >> 0x18) * iVar152 +
                (uint)(byte)((ulong)uVar108 >> 0x30) * iVar128 >> 5;
      uVar6 = (CONCAT12(bVar77,(ushort)(byte)((ulong)uVar86 >> 0x20)) & 0xffff) * iVar139 +
              (uint)(byte)((ulong)uVar105 >> 0x10) * iVar121 >> 5;
      uVar8 = (uint)bVar77 * iVar142 + (uint)(byte)((ulong)uVar105 >> 0x30) * iVar122 >> 5;
      uVar9 = (uint)(byte)((ulong)uVar86 >> 0x30) * iVar143 +
              (uint)(byte)((ulong)uVar106 >> 0x10) * iVar123 >> 5;
      uVar10 = (uint)(byte)((ulong)uVar86 >> 0x38) * iVar144 +
               (uint)(byte)((ulong)uVar106 >> 0x30) * iVar124 >> 5;
      uVar85 = (CONCAT12(bVar78,(ushort)(byte)((ulong)uVar89 >> 0x20)) & 0xffff) * iVar61 +
               (uint)(byte)((ulong)uVar101 >> 0x10) * iVar109 >> 5;
      uVar87 = (uint)bVar78 * iVar4 + (uint)(byte)((ulong)uVar101 >> 0x30) * iVar112 >> 5;
      uVar88 = (uint)(byte)((ulong)uVar89 >> 0x30) * iVar5 +
               (uint)(byte)((ulong)uVar102 >> 0x10) * iVar113 >> 5;
      uVar90 = (uint)(byte)((ulong)uVar89 >> 0x38) * iVar7 +
               (uint)(byte)((ulong)uVar102 >> 0x30) * iVar114 >> 5;
      puVar60[1] = CONCAT17((byte)(uVar169 >> 0x10) | (byte)(uVar25 >> 0x1d) | param_5 |
                            (byte)(uVar153 >> 8),
                            CONCAT16((byte)(uVar169 >> 8) | (byte)(uVar26 >> 0x10) | (byte)uVar153,
                                     CONCAT15((byte)uVar169 | (byte)(uVar26 >> 8),
                                              CONCAT14((char)uVar26,
                                                       CONCAT13((byte)(uVar168 >> 0x10) |
                                                                (byte)(uVar23 >> 0x1d) | param_5 |
                                                                (byte)(uVar151 >> 8),
                                                                CONCAT12((byte)(uVar168 >> 8) |
                                                                         (byte)(uVar24 >> 0x10) |
                                                                         (byte)uVar151,
                                                                         CONCAT11((byte)uVar168 |
                                                                                  (byte)(uVar24 >> 8
                                                                                        ),(char)
                                                  uVar24)))))));
      *puVar60 = CONCAT17((byte)(uVar167 >> 0x10) | (byte)(uVar21 >> 0x1d) | param_5 |
                          (byte)(uVar149 >> 8),
                          CONCAT16((byte)(uVar167 >> 8) | (byte)(uVar22 >> 0x10) | (byte)uVar149,
                                   CONCAT15((byte)uVar167 | (byte)(uVar22 >> 8),
                                            CONCAT14((char)uVar22,
                                                     CONCAT13((byte)(uVar166 >> 0x10) |
                                                              (byte)(uVar19 >> 0x1d) | param_5 |
                                                              (byte)(uVar146 >> 8),
                                                              CONCAT12((byte)(uVar166 >> 8) |
                                                                       (byte)(uVar20 >> 0x10) |
                                                                       (byte)uVar146,
                                                                       CONCAT11((byte)uVar166 |
                                                                                (byte)(uVar20 >> 8),
                                                                                (char)uVar20)))))));
      puVar60[3] = CONCAT17((byte)(uVar57 >> 0x10) | (byte)(uVar48 >> 0x1d) | param_5 |
                            (byte)(uVar10 >> 8),
                            CONCAT16((byte)(uVar57 >> 8) | (byte)(uVar49 >> 0x10) | (byte)uVar10,
                                     CONCAT15((byte)uVar57 | (byte)(uVar49 >> 8),
                                              CONCAT14((char)uVar49,
                                                       CONCAT13((byte)(uVar56 >> 0x10) |
                                                                (byte)(uVar46 >> 0x1d) | param_5 |
                                                                (byte)(uVar9 >> 8),
                                                                CONCAT12((byte)(uVar56 >> 8) |
                                                                         (byte)(uVar47 >> 0x10) |
                                                                         (byte)uVar9,
                                                                         CONCAT11((byte)uVar56 |
                                                                                  (byte)(uVar47 >> 8
                                                                                        ),(char)
                                                  uVar47)))))));
      puVar60[2] = CONCAT17((byte)(uVar55 >> 0x10) | (byte)(uVar44 >> 0x1d) | param_5 |
                            (byte)(uVar8 >> 8),
                            CONCAT16((byte)(uVar55 >> 8) | (byte)(uVar45 >> 0x10) | (byte)uVar8,
                                     CONCAT15((byte)uVar55 | (byte)(uVar45 >> 8),
                                              CONCAT14((char)uVar45,
                                                       CONCAT13((byte)(uVar54 >> 0x10) |
                                                                (byte)(uVar42 >> 0x1d) | param_5 |
                                                                (byte)(uVar6 >> 8),
                                                                CONCAT12((byte)(uVar54 >> 8) |
                                                                         (byte)(uVar43 >> 0x10) |
                                                                         (byte)uVar6,
                                                                         CONCAT11((byte)uVar54 |
                                                                                  (byte)(uVar43 >> 8
                                                                                        ),(char)
                                                  uVar43)))))));
      puVar60[5] = CONCAT17((byte)(uVar161 >> 0x10) | (byte)(uVar17 >> 0x1d) | param_5 |
                            (byte)(uVar138 >> 8),
                            CONCAT16((byte)(uVar161 >> 8) | (byte)(uVar18 >> 0x10) | (byte)uVar138,
                                     CONCAT15((byte)uVar161 | (byte)(uVar18 >> 8),
                                              CONCAT14((char)uVar18,
                                                       CONCAT13((byte)(uVar160 >> 0x10) |
                                                                (byte)(uVar15 >> 0x1d) | param_5 |
                                                                (byte)(uVar136 >> 8),
                                                                CONCAT12((byte)(uVar160 >> 8) |
                                                                         (byte)(uVar16 >> 0x10) |
                                                                         (byte)uVar136,
                                                                         CONCAT11((byte)uVar160 |
                                                                                  (byte)(uVar16 >> 8
                                                                                        ),(char)
                                                  uVar16)))))));
      puVar60[4] = CONCAT17((byte)(uVar159 >> 0x10) | (byte)(uVar13 >> 0x1d) | param_5 |
                            (byte)(uVar134 >> 8),
                            CONCAT16((byte)(uVar159 >> 8) | (byte)(uVar14 >> 0x10) | (byte)uVar134,
                                     CONCAT15((byte)uVar159 | (byte)(uVar14 >> 8),
                                              CONCAT14((char)uVar14,
                                                       CONCAT13((byte)(uVar158 >> 0x10) |
                                                                (byte)(uVar11 >> 0x1d) | param_5 |
                                                                (byte)(uVar130 >> 8),
                                                                CONCAT12((byte)(uVar158 >> 8) |
                                                                         (byte)(uVar12 >> 0x10) |
                                                                         (byte)uVar130,
                                                                         CONCAT11((byte)uVar158 |
                                                                                  (byte)(uVar12 >> 8
                                                                                        ),(char)
                                                  uVar12)))))));
      puVar60[7] = CONCAT17((byte)(uVar84 >> 0x10) | (byte)(uVar99 >> 0x1d) | param_5 |
                            (byte)(uVar90 >> 8),
                            CONCAT16((byte)(uVar84 >> 8) | (byte)(uVar100 >> 0x10) | (byte)uVar90,
                                     CONCAT15((byte)uVar84 | (byte)(uVar100 >> 8),
                                              CONCAT14((char)uVar100,
                                                       CONCAT13((byte)(uVar82 >> 0x10) |
                                                                (byte)(uVar96 >> 0x1d) | param_5 |
                                                                (byte)(uVar88 >> 8),
                                                                CONCAT12((byte)(uVar82 >> 8) |
                                                                         (byte)(uVar97 >> 0x10) |
                                                                         (byte)uVar88,
                                                                         CONCAT11((byte)uVar82 |
                                                                                  (byte)(uVar97 >> 8
                                                                                        ),(char)
                                                  uVar97)))))));
      puVar60[6] = CONCAT17((byte)(uVar81 >> 0x10) | (byte)(uVar94 >> 0x1d) | param_5 |
                            (byte)(uVar87 >> 8),
                            CONCAT16((byte)(uVar81 >> 8) | (byte)(uVar95 >> 0x10) | (byte)uVar87,
                                     CONCAT15((byte)uVar81 | (byte)(uVar95 >> 8),
                                              CONCAT14((char)uVar95,
                                                       CONCAT13((byte)(uVar79 >> 0x10) |
                                                                (byte)(uVar91 >> 0x1d) | param_5 |
                                                                (byte)(uVar85 >> 8),
                                                                CONCAT12((byte)(uVar79 >> 8) |
                                                                         (byte)(uVar92 >> 0x10) |
                                                                         (byte)uVar85,
                                                                         CONCAT11((byte)uVar79 |
                                                                                  (byte)(uVar92 >> 8
                                                                                        ),(char)
                                                  uVar92)))))));
      puVar60 = puVar60 + 8;
      puVar63 = puVar63 + 2;
      puVar64 = puVar64 + 2;
      puVar65 = puVar65 + 2;
    } while (puVar59 != param_2 + (ulong)((param_6 >> 4) - 1) * 8 + 8);
    uVar62 = (ulong)param_6 & 0xfffffff0;
    if ((param_6 & 0xf) != 0) {
      lVar58 = 0;
      do {
        uVar158 = *(uint *)((long)param_2 + lVar58 * 4 + uVar62 * 4);
        uVar159 = uVar158 >> 0x18;
        iVar61 = 0x1f - uVar159;
        if (uVar159 == 0x1f) {
          uVar159 = 0x20;
        }
        else if (uVar159 == 0) {
          iVar61 = 0x20;
        }
        *(uint *)((long)param_1 + lVar58 * 4 + uVar62 * 4) =
             ((uint)*(byte *)((long)puVar3 + lVar58 + uVar62) * iVar61 +
              (uVar158 >> 0x10 & 0xff) * uVar159 >> 5) << 0x10 |
             ((uint)*(byte *)((long)puVar2 + lVar58 + uVar62) * iVar61 +
              (uVar158 >> 8 & 0xff) * uVar159 >> 5) << 8 |
             (uint)param_5 << 0x18 |
             (uint)*(byte *)((long)param_3 + lVar58 + uVar62) * iVar61 + (uVar158 & 0xff) * uVar159
             >> 5;
        lVar58 = lVar58 + 1;
      } while ((param_6 & 0xfffffff0) + (int)lVar58 < param_6);
    }
    return;
  }
  lVar58 = 0;
  do {
    uVar158 = *(uint *)((long)param_2 + lVar58 * 4);
    uVar159 = uVar158 >> 0x18;
    iVar61 = 0x1f - uVar159;
    if (uVar159 == 0x1f) {
      uVar159 = 0x20;
    }
    else if (uVar159 == 0) {
      iVar61 = 0x20;
    }
    *(uint *)((long)param_1 + lVar58 * 4) =
         ((uint)*(byte *)((long)puVar3 + lVar58) * iVar61 + (uVar158 >> 0x10 & 0xff) * uVar159 >> 5)
         << 0x10 | ((uint)*(byte *)((long)puVar2 + lVar58) * iVar61 +
                    (uVar158 >> 8 & 0xff) * uVar159 >> 5) << 8 |
         (uint)param_5 << 0x18 |
         (uint)*(byte *)((long)param_3 + lVar58) * iVar61 + (uVar158 & 0xff) * uVar159 >> 5;
    lVar58 = lVar58 + 1;
  } while ((uint)lVar58 < param_6);
  return;
}


