/*
 * Ghidra decompilation
 *
 * Function : FUN_00156d8c
 * Address  : 00156d8c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156d8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint5 uVar21;
  int iVar22;
  int iVar23;
  uint5 uVar24;
  int iVar25;
  int iVar26;
  uint5 uVar27;
  int iVar28;
  uint5 uVar29;
  int iVar30;
  int iVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  long lVar57;
  uint *puVar58;
  undefined8 *puVar70;
  uint uVar71;
  undefined8 *puVar72;
  undefined8 *puVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  undefined8 *puVar77;
  long lVar78;
  undefined8 *puVar79;
  byte bVar80;
  undefined uVar81;
  undefined uVar82;
  undefined uVar83;
  byte bVar84;
  byte bVar85;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  int iVar96;
  uint5 uVar97;
  uint5 uVar98;
  int iVar102;
  int iVar103;
  byte bVar104;
  undefined auVar99 [16];
  undefined auVar100 [16];
  byte bVar105;
  int iVar106;
  undefined auVar101 [16];
  int iVar107;
  int iVar109;
  int iVar110;
  undefined auVar108 [16];
  int iVar111;
  int iVar112;
  int iVar115;
  int iVar116;
  undefined auVar113 [16];
  undefined auVar114 [16];
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  int iVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  int iVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  int iVar137;
  uint uVar138;
  uint uVar139;
  int iVar140;
  uint uVar141;
  uint uVar142;
  int iVar143;
  uint uVar144;
  int iVar145;
  uint uVar146;
  uint uVar147;
  int iVar148;
  uint uVar149;
  uint uVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  uint uVar156;
  uint uVar157;
  int iVar158;
  uint uVar159;
  int iVar160;
  uint uVar161;
  uint uVar162;
  int iVar163;
  uint uVar164;
  uint uVar165;
  int iVar166;
  uint uVar167;
  uint uVar168;
  uint uVar169;
  uint uVar170;
  uint uVar171;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  uint uVar176;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  int iVar180;
  uint uVar181;
  int iVar182;
  uint uVar183;
  int iVar184;
  uint uVar185;
  int iVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  uint uVar191;
  int iVar192;
  uint uVar193;
  int iVar194;
  uint uVar195;
  int iVar196;
  uint uVar197;
  int iVar198;
  byte bVar199;
  uint uVar200;
  int iVar201;
  uint5 uVar202;
  byte bVar203;
  uint uVar204;
  byte bVar205;
  uint uVar206;
  byte bVar207;
  uint uVar208;
  byte bVar209;
  byte bVar212;
  uint5 uVar210;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  undefined auVar211 [16];
  byte bVar220;
  undefined auVar219 [16];
  byte bVar221;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  undefined auVar222 [16];
  undefined auVar223 [16];
  byte bVar231;
  byte bVar235;
  uint5 uVar232;
  byte bVar237;
  byte bVar240;
  byte bVar243;
  undefined auVar233 [16];
  byte bVar236;
  byte bVar238;
  byte bVar239;
  byte bVar241;
  byte bVar242;
  undefined auVar234 [16];
  undefined *puVar59;
  undefined *puVar60;
  uint *puVar61;
  undefined *puVar62;
  uint *puVar63;
  undefined *puVar64;
  uint *puVar65;
  undefined *puVar66;
  undefined8 *puVar67;
  undefined8 *puVar68;
  undefined8 *puVar69;
  
  lVar57 = ___stack_chk_guard;
  puVar79 = param_1 + 0x80;
  uVar1 = (uint)param_4 & 0x3f;
  uVar75 = (uint)((ulong)param_4 >> 8) & 0x3f;
  uVar76 = (uint)((ulong)param_4 >> 0x10) & 0x3f;
  uVar74 = (uint)((ulong)param_4 >> 0x18) & 0x1f;
  if (param_1 < (undefined8 *)((long)param_2 + 0x7fcU) && param_2 < puVar79 ||
      param_1 < (undefined8 *)((long)param_3 + 0x1ffU) && param_3 < puVar79) {
    lVar78 = 0;
    do {
      uVar136 = *(uint *)((long)param_2 + lVar78 * 4);
      uVar128 = (uint)*(byte *)((long)param_3 + lVar78);
      uVar142 = uVar136 >> 8 & 0x3f;
      if (uVar128 == 0x7f) {
        uVar128 = 0x80;
      }
      uVar147 = uVar136 >> 0x18 & 0x7f;
      uVar157 = uVar136 >> 0x10 & 0x3f;
      if ((int)uVar136 < 0) {
        uVar71 = (uVar1 - (uVar136 & 0x3f)) * uVar128 >> 7;
        uVar130 = (uVar75 - uVar142) * uVar128 >> 7;
        uVar127 = (uVar76 - uVar157) * uVar128 >> 7;
        uVar128 = (uVar74 - uVar147) * uVar128 >> 7;
      }
      else {
        uVar128 = 0;
        uVar127 = 0;
        uVar130 = 0;
        uVar71 = 0;
      }
      *(uint *)((long)param_1 + lVar78 * 2) =
           (uVar157 + uVar127) * 0x10000 | (uVar142 + uVar130) * 0x100 |
           (uVar136 & 0x3f) + uVar71 | (uVar147 + uVar128) * 0x1000000;
      lVar78 = lVar78 + 2;
    } while (lVar78 != 0x200);
  }
  else {
    auVar101._8_4_ = 0x80;
    auVar101._0_8_ = 0x8000000080;
    auVar101._12_4_ = 0x80;
    puVar72 = param_1;
    puVar73 = param_2;
    puVar77 = param_3;
    do {
      bVar80 = *(byte *)puVar77;
      uVar81 = *(undefined *)((long)puVar77 + 2);
      puVar58 = (uint *)((long)puVar77 + 4);
      puVar59 = (undefined *)((long)puVar77 + 6);
      puVar67 = puVar77 + 1;
      puVar60 = (undefined *)((long)puVar77 + 10);
      puVar61 = (uint *)((long)puVar77 + 0xc);
      puVar62 = (undefined *)((long)puVar77 + 0xe);
      puVar68 = puVar77 + 2;
      uVar82 = *(undefined *)((long)puVar77 + 0x12);
      puVar63 = (uint *)((long)puVar77 + 0x14);
      puVar64 = (undefined *)((long)puVar77 + 0x16);
      puVar69 = puVar77 + 3;
      uVar83 = *(undefined *)((long)puVar77 + 0x1a);
      puVar65 = (uint *)((long)puVar77 + 0x1c);
      puVar66 = (undefined *)((long)puVar77 + 0x1e);
      puVar77 = puVar77 + 4;
      uVar132 = *(uint *)(puVar73 + 0xc);
      uVar135 = *(uint *)(puVar73 + 0xd);
      uVar139 = *(uint *)(puVar73 + 0xe);
      uVar141 = *(uint *)(puVar73 + 0xf);
      uVar200 = *(uint *)puVar73;
      uVar204 = *(uint *)(puVar73 + 1);
      uVar206 = *(uint *)(puVar73 + 2);
      uVar208 = *(uint *)(puVar73 + 3);
      puVar70 = puVar73 + 0x10;
      uVar144 = *(uint *)(puVar73 + 8);
      uVar146 = *(uint *)(puVar73 + 9);
      uVar150 = *(uint *)(puVar73 + 10);
      uVar156 = *(uint *)(puVar73 + 0xb);
      uVar97 = CONCAT14((char)(uVar135 >> 8),(uint)((byte)(uVar132 >> 8) & 0x3f)) & 0x3fffffffff;
      bVar104 = (byte)(uVar141 >> 8) & 0x3f;
      uVar159 = *(uint *)(puVar73 + 4);
      uVar149 = *(uint *)(puVar73 + 5);
      uVar162 = *(uint *)(puVar73 + 6);
      uVar191 = *(uint *)(puVar73 + 7);
      auVar86._1_3_ = 0;
      auVar86[0] = *(byte *)puVar67;
      auVar86[4] = *puVar60;
      auVar86._5_3_ = 0;
      auVar86[8] = *(undefined *)puVar61;
      auVar86._9_3_ = 0;
      auVar86[12] = *puVar62;
      auVar86._13_3_ = 0;
      uVar195 = (uint)((byte)(uVar200 >> 8) & 0x3f);
      uVar161 = (uint)((byte)(uVar206 >> 8) & 0x3f);
      uVar168 = (uint)((byte)(uVar200 >> 0x10) & 0x3f);
      uVar172 = (uint)((byte)(uVar206 >> 0x10) & 0x3f);
      uVar126 = (uint)((byte)(uVar144 >> 0x10) & 0x3f);
      uVar134 = (uint)((byte)(uVar150 >> 0x10) & 0x3f);
      uVar210 = CONCAT14((char)uVar146,(uint)((byte)uVar144 & 0x3f)) & 0x3fffffffff;
      bVar216 = (byte)uVar156 & 0x3f;
      auVar99._5_3_ = 0;
      auVar99._0_5_ = CONCAT14(uVar81,(uint)CONCAT12(uVar81,(ushort)bVar80)) & 0xff0000ffff;
      auVar99[8] = *(undefined *)puVar58;
      auVar99._9_3_ = 0;
      auVar99[12] = *puVar59;
      auVar99._13_3_ = 0;
      auVar40[8] = 0x7f;
      auVar40._0_8_ = 0x7f0000007f;
      auVar40._9_3_ = 0;
      auVar40[12] = 0x7f;
      auVar40._13_3_ = 0;
      auVar113 = NEON_cmeq(auVar99,auVar40,4);
      auVar108._5_3_ = 0;
      auVar108._0_5_ =
           CONCAT14(uVar82,(uint)CONCAT12(uVar82,(ushort)*(byte *)puVar68)) & 0xff0000ffff;
      auVar108[8] = *(undefined *)puVar63;
      auVar108._9_3_ = 0;
      auVar108[12] = *puVar64;
      auVar108._13_3_ = 0;
      auVar41[8] = 0x7f;
      auVar41._0_8_ = 0x7f0000007f;
      auVar41._9_3_ = 0;
      auVar41[12] = 0x7f;
      auVar41._13_3_ = 0;
      auVar108 = NEON_cmeq(auVar108,auVar41,4);
      uVar24 = CONCAT14((char)(uVar141 >> 0x10),(uint)((byte)(uVar139 >> 0x10) & 0x3f)) &
               0x3fffffffff;
      uVar21 = CONCAT14((char)(uVar135 >> 0x10),(uint)((byte)(uVar132 >> 0x10) & 0x3f)) &
               0x3fffffffff;
      auVar114._5_3_ = 0;
      auVar114._0_5_ =
           CONCAT14(uVar83,(uint)CONCAT12(uVar83,(ushort)*(byte *)puVar69)) & 0xff0000ffff;
      auVar114[8] = *(undefined *)puVar65;
      auVar114._9_3_ = 0;
      auVar114[12] = *puVar66;
      auVar114._13_3_ = 0;
      auVar42[8] = 0x7f;
      auVar42._0_8_ = 0x7f0000007f;
      auVar42._9_3_ = 0;
      auVar42[12] = 0x7f;
      auVar42._13_3_ = 0;
      auVar99 = NEON_cmeq(auVar114,auVar42,4);
      auVar100._5_3_ = 0;
      auVar100._0_5_ = CONCAT14(uVar81,(uint)CONCAT12(uVar81,(ushort)bVar80)) & 0xff0000ffff;
      auVar100[8] = *(undefined *)puVar58;
      auVar100._9_3_ = 0;
      auVar100[12] = *puVar59;
      auVar100._13_3_ = 0;
      auVar114 = NEON_bsl(auVar113,auVar101,auVar100,1);
      auVar113._5_3_ = 0;
      auVar113._0_5_ =
           CONCAT14(uVar82,(uint)CONCAT12(uVar82,(ushort)*(byte *)puVar68)) & 0xff0000ffff;
      auVar113[8] = *(undefined *)puVar63;
      auVar113._9_3_ = 0;
      auVar113[12] = *puVar64;
      auVar113._13_3_ = 0;
      auVar108 = NEON_bsl(auVar108,auVar101,auVar113,1);
      auVar14._5_3_ = 0;
      auVar14._0_5_ =
           CONCAT14(uVar83,(uint)CONCAT12(uVar83,(ushort)*(byte *)puVar69)) & 0xff0000ffff;
      auVar14[8] = *(undefined *)puVar65;
      auVar14._9_3_ = 0;
      auVar14[12] = *puVar66;
      auVar14._13_3_ = 0;
      auVar100 = NEON_bsl(auVar99,auVar101,auVar14,1);
      uVar170 = (uint)((byte)(uVar204 >> 0x10) & 0x3f);
      uVar174 = (uint)((byte)(uVar208 >> 0x10) & 0x3f);
      uVar197 = (uint)((byte)(uVar204 >> 8) & 0x3f);
      uVar164 = (uint)((byte)(uVar208 >> 8) & 0x3f);
      uVar131 = (uint)((byte)(uVar146 >> 0x10) & 0x3f);
      uVar138 = (uint)((byte)(uVar156 >> 0x10) & 0x3f);
      uVar175 = (uint)((byte)(uVar159 >> 8) & 0x3f);
      uVar177 = (uint)((byte)(uVar162 >> 8) & 0x3f);
      auVar43[8] = 0x7f;
      auVar43._0_8_ = 0x7f0000007f;
      auVar43._9_3_ = 0;
      auVar43[12] = 0x7f;
      auVar43._13_3_ = 0;
      auVar99 = NEON_cmeq(auVar86,auVar43,4);
      iVar107 = auVar108._0_4_;
      uVar179 = (uVar76 - uVar126) * iVar107;
      iVar109 = auVar108._4_4_;
      uVar181 = (uVar76 - uVar131) * iVar109;
      iVar110 = auVar108._8_4_;
      uVar183 = (uVar76 - uVar134) * iVar110;
      iVar111 = auVar108._12_4_;
      uVar185 = (uVar76 - uVar138) * iVar111;
      iVar112 = auVar114._0_4_;
      iVar115 = auVar114._4_4_;
      iVar116 = auVar114._8_4_;
      iVar117 = auVar114._12_4_;
      bVar122 = (byte)(uVar200 >> 0x18);
      bVar123 = (byte)(uVar204 >> 0x18);
      auVar211._0_5_ = CONCAT14(bVar123,(uint)(bVar122 & 0x80)) & 0x80ffffffff;
      auVar211._5_3_ = 0;
      bVar124 = (byte)(uVar206 >> 0x18);
      auVar211[8] = bVar124 & 0x80;
      auVar211._9_3_ = 0;
      bVar125 = (byte)(uVar208 >> 0x18);
      auVar211[12] = bVar125 & 0x80;
      auVar211._13_3_ = 0;
      auVar99 = NEON_bsl(auVar99,auVar101,auVar86,1);
      uVar167 = (uint)((byte)(uVar159 >> 0x10) & 0x3f);
      uVar171 = (uint)((byte)(uVar162 >> 0x10) & 0x3f);
      auVar108 = NEON_cmeq(auVar211,0,2);
      uVar176 = (uint)((byte)(uVar149 >> 8) & 0x3f);
      uVar178 = (uint)((byte)(uVar191 >> 8) & 0x3f);
      uVar128 = (uVar76 - uVar168) * iVar112 >> 7;
      uVar136 = (uVar76 - uVar170) * iVar115 >> 7;
      uVar142 = (uVar76 - uVar172) * iVar116 >> 7;
      uVar147 = (uVar76 - uVar174) * iVar117 >> 7;
      uVar157 = (uVar75 - uVar195) * iVar112 >> 7;
      uVar71 = (uVar75 - uVar197) * iVar115 >> 7;
      uVar130 = (uVar75 - uVar161) * iVar116 >> 7;
      uVar127 = (uVar75 - uVar164) * iVar117 >> 7;
      uVar169 = (uint)((byte)(uVar149 >> 0x10) & 0x3f);
      uVar173 = (uint)((byte)(uVar191 >> 0x10) & 0x3f);
      bVar80 = (byte)(uVar159 >> 0x18);
      uVar81 = (undefined)(uVar149 >> 0x18);
      auVar87._0_8_ = (ulong)CONCAT14(uVar81,(uint)bVar80) & 0xffffff80ffffff80;
      bVar237 = (byte)(uVar162 >> 0x18);
      auVar87[8] = bVar237 & 0x80;
      auVar87._9_3_ = 0;
      bVar240 = (byte)(uVar191 >> 0x18);
      auVar87[12] = bVar240 & 0x80;
      auVar87._13_3_ = 0;
      iVar118 = auVar99._0_4_;
      iVar119 = auVar99._4_4_;
      iVar120 = auVar99._8_4_;
      iVar121 = auVar99._12_4_;
      bVar209 = auVar108[0];
      bVar212 = auVar108[1];
      bVar213 = auVar108[4];
      bVar214 = auVar108[5];
      bVar215 = auVar108[8];
      bVar220 = auVar108[9];
      bVar217 = auVar108[12];
      bVar218 = auVar108[13];
      auVar99 = NEON_cmeq(auVar87,0,2);
      uVar165 = (uint)((byte)(uVar144 >> 8) & 0x3f);
      uVar193 = (uint)((byte)(uVar150 >> 8) & 0x3f);
      uVar202 = CONCAT14((char)uVar204,(uint)((byte)uVar200 & 0x3f)) & 0x3fffffffff;
      uVar98 = CONCAT14((char)uVar208,(uint)((byte)uVar206 & 0x3f)) & 0x3fffffffff;
      iVar17 = CONCAT12((byte)(uVar157 >> 0x10) & ~auVar108[2],
                        CONCAT11((byte)(uVar157 >> 8) & ~bVar212,(byte)uVar157 & ~bVar209)) +
               uVar195;
      iVar18 = CONCAT12((byte)(uVar71 >> 0x10) & ~auVar108[6],
                        CONCAT11((byte)(uVar71 >> 8) & ~bVar214,(byte)uVar71 & ~bVar213)) + uVar197;
      iVar19 = CONCAT12((byte)(uVar130 >> 0x10) & ~auVar108[10],
                        CONCAT11((byte)(uVar130 >> 8) & ~bVar220,(byte)uVar130 & ~bVar215)) +
               uVar161;
      iVar20 = CONCAT12((byte)(uVar127 >> 0x10) & ~auVar108[14],
                        CONCAT11((byte)(uVar127 >> 8) & ~bVar218,(byte)uVar127 & ~bVar217)) +
               uVar164;
      iVar4 = CONCAT11((byte)(uVar128 >> 8) & ~bVar212,(byte)uVar128 & ~bVar209) + uVar168;
      iVar5 = CONCAT11((byte)(uVar136 >> 8) & ~bVar214,(byte)uVar136 & ~bVar213) + uVar170;
      iVar6 = CONCAT11((byte)(uVar142 >> 8) & ~bVar220,(byte)uVar142 & ~bVar215) + uVar172;
      iVar7 = CONCAT11((byte)(uVar147 >> 8) & ~bVar218,(byte)uVar147 & ~bVar217) + uVar174;
      uVar157 = (uVar75 - uVar175) * iVar118 >> 7;
      uVar71 = (uVar75 - uVar176) * iVar119 >> 7;
      uVar130 = (uVar75 - uVar177) * iVar120 >> 7;
      uVar127 = (uVar75 - uVar178) * iVar121 >> 7;
      uVar232 = CONCAT14(uVar81,(uint)(bVar80 & 0x7f)) & 0x7fffffffff;
      bVar237 = bVar237 & 0x7f;
      bVar240 = bVar240 & 0x7f;
      uVar128 = (uVar76 - uVar167) * iVar118 >> 7;
      uVar136 = (uVar76 - uVar169) * iVar119 >> 7;
      uVar142 = (uVar76 - uVar171) * iVar120 >> 7;
      uVar147 = (uVar76 - uVar173) * iVar121 >> 7;
      bVar84 = auVar99[0];
      bVar90 = auVar99[1];
      bVar91 = auVar99[4];
      bVar92 = auVar99[5];
      bVar93 = auVar99[8];
      bVar94 = auVar99[9];
      bVar95 = auVar99[12];
      bVar105 = auVar99[13];
      uVar29 = CONCAT14((char)uVar191,(uint)((byte)uVar162 & 0x3f)) & 0x3fffffffff;
      uVar27 = CONCAT14((char)uVar149,(uint)((byte)uVar159 & 0x3f)) & 0x3fffffffff;
      uVar159 = (uint)((byte)(uVar146 >> 8) & 0x3f);
      uVar149 = (uint)((byte)(uVar156 >> 8) & 0x3f);
      iVar22 = CONCAT12((byte)(uVar157 >> 0x10) & ~auVar99[2],
                        CONCAT11((byte)(uVar157 >> 8) & ~bVar90,(byte)uVar157 & ~bVar84)) + uVar175;
      iVar23 = CONCAT12((byte)(uVar71 >> 0x10) & ~auVar99[6],
                        CONCAT11((byte)(uVar71 >> 8) & ~bVar92,(byte)uVar71 & ~bVar91)) + uVar176;
      iVar25 = CONCAT12((byte)(uVar130 >> 0x10) & ~auVar99[10],
                        CONCAT11((byte)(uVar130 >> 8) & ~bVar94,(byte)uVar130 & ~bVar93)) + uVar177;
      iVar26 = CONCAT12((byte)(uVar127 >> 0x10) & ~auVar99[14],
                        CONCAT11((byte)(uVar127 >> 8) & ~bVar105,(byte)uVar127 & ~bVar95)) + uVar178
      ;
      bVar199 = (byte)(uVar144 >> 0x18);
      bVar203 = (byte)(uVar146 >> 0x18);
      auVar222._0_5_ = CONCAT14(bVar203,(uint)(bVar199 & 0x80)) & 0x80ffffffff;
      auVar222._5_3_ = 0;
      bVar205 = (byte)(uVar150 >> 0x18);
      auVar222[8] = bVar205 & 0x80;
      auVar222._9_3_ = 0;
      bVar207 = (byte)(uVar156 >> 0x18);
      auVar222[12] = bVar207 & 0x80;
      auVar222._13_3_ = 0;
      auVar113 = NEON_cmeq(auVar222,0,2);
      iVar10 = CONCAT11((byte)(uVar128 >> 8) & ~bVar90,(byte)uVar128 & ~bVar84) + uVar167;
      iVar11 = CONCAT11((byte)(uVar136 >> 8) & ~bVar92,(byte)uVar136 & ~bVar91) + uVar169;
      iVar12 = CONCAT11((byte)(uVar142 >> 8) & ~bVar94,(byte)uVar142 & ~bVar93) + uVar171;
      iVar13 = CONCAT11((byte)(uVar147 >> 8) & ~bVar105,(byte)uVar147 & ~bVar95) + uVar173;
      bVar85 = (byte)(uVar232 >> 0x20);
      iVar152 = (int)uVar27;
      bVar80 = (byte)(uVar27 >> 0x20);
      iVar154 = (int)uVar29;
      bVar48 = (byte)(uVar29 >> 0x20);
      uVar128 = (uVar75 - uVar165) * iVar107 >> 7;
      uVar136 = (uVar75 - uVar159) * iVar109 >> 7;
      uVar142 = (uVar75 - uVar193) * iVar110 >> 7;
      uVar147 = (uVar75 - uVar149) * iVar111 >> 7;
      uVar168 = (uVar1 - iVar152) * iVar118;
      uVar170 = (uVar1 - bVar80) * iVar119;
      uVar172 = (uVar1 - iVar154) * iVar120;
      uVar174 = (uVar1 - bVar48) * iVar121;
      bVar199 = bVar199 & 0x7f;
      bVar203 = bVar203 & 0x7f;
      bVar205 = bVar205 & 0x7f;
      bVar207 = bVar207 & 0x7f;
      iVar201 = (int)uVar97;
      bVar49 = (byte)(uVar97 >> 0x20);
      uVar157 = (uint)((byte)(uVar139 >> 8) & 0x3f);
      bVar187 = (byte)(uVar132 >> 0x18);
      bVar188 = (byte)(uVar135 >> 0x18);
      bVar189 = (byte)(uVar139 >> 0x18);
      bVar190 = (byte)(uVar141 >> 0x18);
      bVar221 = auVar113[0];
      bVar224 = auVar113[1];
      bVar225 = auVar113[4];
      bVar226 = auVar113[5];
      bVar227 = auVar113[8];
      bVar228 = auVar113[9];
      bVar229 = auVar113[12];
      bVar230 = auVar113[13];
      bVar122 = bVar122 & 0x7f;
      bVar123 = bVar123 & 0x7f;
      bVar124 = bVar124 & 0x7f;
      bVar125 = bVar125 & 0x7f;
      iVar36 = CONCAT12((byte)(uVar128 >> 0x10) & ~auVar113[2],
                        CONCAT11((byte)(uVar128 >> 8) & ~bVar224,(byte)uVar128 & ~bVar221)) +
               uVar165;
      iVar37 = CONCAT12((byte)(uVar136 >> 0x10) & ~auVar113[6],
                        CONCAT11((byte)(uVar136 >> 8) & ~bVar226,(byte)uVar136 & ~bVar225)) +
               uVar159;
      iVar38 = CONCAT12((byte)(uVar142 >> 0x10) & ~auVar113[10],
                        CONCAT11((byte)(uVar142 >> 8) & ~bVar228,(byte)uVar142 & ~bVar227)) +
               uVar193;
      iVar39 = CONCAT12((byte)(uVar147 >> 0x10) & ~auVar113[14],
                        CONCAT11((byte)(uVar147 >> 8) & ~bVar230,(byte)uVar147 & ~bVar229)) +
               uVar149;
      uVar71 = uVar168 >> 7;
      uVar130 = uVar172 >> 7;
      iVar158 = (int)uVar210;
      bVar50 = (byte)(uVar210 >> 0x20);
      uVar149 = (uint)((byte)uVar150 & 0x3f);
      uVar29 = CONCAT14((char)uVar141,(uint)((byte)uVar139 & 0x3f)) & 0x3fffffffff;
      uVar27 = CONCAT14((char)uVar135,(uint)((byte)uVar132 & 0x3f)) & 0x3fffffffff;
      iVar96 = auVar100._0_4_;
      iVar102 = auVar100._4_4_;
      iVar103 = auVar100._8_4_;
      iVar106 = auVar100._12_4_;
      auVar233._0_5_ = CONCAT14(bVar188,(uint)(bVar187 & 0x80)) & 0x80ffffffff;
      auVar233._5_3_ = 0;
      auVar233[8] = bVar189 & 0x80;
      auVar233._9_3_ = 0;
      auVar233[12] = bVar190 & 0x80;
      auVar233._13_3_ = 0;
      uVar156 = (uVar1 - iVar158) * iVar107;
      uVar159 = (uVar1 - bVar50) * iVar109;
      uVar162 = (uVar1 - uVar149) * iVar110;
      uVar165 = (uVar1 - bVar216) * iVar111;
      iVar143 = (int)uVar202;
      bVar51 = (byte)(uVar202 >> 0x20);
      iVar148 = (int)uVar98;
      bVar52 = (byte)(uVar98 >> 0x20);
      iVar192 = (int)uVar21;
      bVar53 = (byte)(uVar21 >> 0x20);
      iVar196 = (int)uVar24;
      bVar54 = (byte)(uVar24 >> 0x20);
      auVar100 = NEON_cmeq(auVar233,0,2);
      bVar187 = bVar187 & 0x7f;
      bVar188 = bVar188 & 0x7f;
      bVar189 = bVar189 & 0x7f;
      bVar190 = bVar190 & 0x7f;
      uVar141 = (uVar1 - iVar143) * iVar112;
      uVar144 = (uVar1 - bVar51) * iVar115;
      uVar146 = (uVar1 - iVar148) * iVar116;
      uVar150 = (uVar1 - bVar52) * iVar117;
      iVar129 = (int)uVar27;
      bVar55 = (byte)(uVar27 >> 0x20);
      iVar137 = (int)uVar29;
      bVar56 = (byte)(uVar29 >> 0x20);
      uVar128 = (uVar75 - iVar201) * iVar96 >> 7;
      uVar136 = (uVar75 - bVar49) * iVar102 >> 7;
      uVar142 = (uVar75 - uVar157) * iVar103 >> 7;
      uVar147 = (uVar75 - bVar104) * iVar106 >> 7;
      uVar191 = (uVar76 - iVar192) * iVar96 >> 7;
      uVar193 = (uVar76 - bVar53) * iVar102 >> 7;
      uVar195 = (uVar76 - iVar196) * iVar103 >> 7;
      uVar197 = (uVar76 - bVar54) * iVar106 >> 7;
      iVar180 = CONCAT11((byte)(uint3)(uVar179 >> 0xf) & ~bVar224,(byte)(uVar179 >> 7) & ~bVar221) +
                uVar126;
      iVar182 = CONCAT11((byte)(uint3)(uVar181 >> 0xf) & ~bVar226,(byte)(uVar181 >> 7) & ~bVar225) +
                uVar131;
      iVar184 = CONCAT11((byte)(uint3)(uVar183 >> 0xf) & ~bVar228,(byte)(uVar183 >> 7) & ~bVar227) +
                uVar134;
      iVar186 = CONCAT11((byte)(uint3)(uVar185 >> 0xf) & ~bVar230,(byte)(uVar185 >> 7) & ~bVar229) +
                uVar138;
      uVar127 = (uVar1 - iVar129) * iVar96;
      uVar132 = (uVar1 - bVar55) * iVar102;
      uVar135 = (uVar1 - iVar137) * iVar103;
      uVar139 = (uVar1 - bVar56) * iVar106;
      bVar231 = auVar100[0];
      bVar235 = auVar100[1];
      bVar236 = auVar100[4];
      bVar239 = auVar100[5];
      bVar238 = auVar100[8];
      bVar242 = auVar100[9];
      bVar241 = auVar100[12];
      bVar243 = auVar100[13];
      uVar191 = (uint)CONCAT11((byte)(uVar191 >> 8) & ~bVar235,(byte)uVar191 & ~bVar231);
      uVar126 = (uint)CONCAT11((byte)(uVar195 >> 8) & ~bVar242,(byte)uVar195 & ~bVar238);
      iVar201 = (uint)CONCAT12((byte)(uVar128 >> 0x10) & ~auVar100[2],
                               CONCAT11((byte)(uVar128 >> 8) & ~bVar235,(byte)uVar128 & ~bVar231)) +
                iVar201;
      iVar28 = (uint)CONCAT12((byte)(uVar136 >> 0x10) & ~auVar100[6],
                              CONCAT11((byte)(uVar136 >> 8) & ~bVar239,(byte)uVar136 & ~bVar236)) +
               (uint)bVar49;
      iVar30 = CONCAT12((byte)(uVar142 >> 0x10) & ~auVar100[10],
                        CONCAT11((byte)(uVar142 >> 8) & ~bVar242,(byte)uVar142 & ~bVar238)) +
               uVar157;
      iVar31 = (uint)CONCAT12((byte)(uVar147 >> 0x10) & ~auVar100[14],
                              CONCAT11((byte)(uVar147 >> 8) & ~bVar243,(byte)uVar147 & ~bVar241)) +
               (uint)bVar104;
      uVar142 = uVar141 >> 7;
      uVar147 = uVar146 >> 7;
      iVar192 = uVar191 + iVar192;
      iVar194 = (uint)(ushort)(CONCAT15((byte)(uVar193 >> 8) & ~bVar239,
                                        CONCAT14((byte)uVar193 & ~bVar236,uVar191)) >> 0x20) +
                (uint)bVar53;
      iVar196 = uVar126 + iVar196;
      iVar198 = (uint)(ushort)(CONCAT15((byte)(uVar197 >> 8) & ~bVar243,
                                        CONCAT14((byte)uVar197 & ~bVar241,uVar126)) >> 0x20) +
                (uint)bVar54;
      uVar157 = uVar156 >> 7;
      uVar191 = uVar162 >> 7;
      uVar128 = uVar127 >> 7;
      uVar136 = uVar135 >> 7;
      iVar153 = CONCAT13((byte)(uVar168 >> 0x1f) & ~auVar99[3],
                         CONCAT12((byte)(uVar71 >> 0x10) & ~auVar99[2],
                                  CONCAT11((byte)(uVar71 >> 8) & ~bVar90,(byte)uVar71 & ~bVar84)));
      iVar155 = CONCAT13((byte)(uVar172 >> 0x1f) & ~auVar99[11],
                         CONCAT12((byte)(uVar130 >> 0x10) & ~auVar99[10],
                                  CONCAT11((byte)(uVar130 >> 8) & ~bVar94,(byte)uVar130 & ~bVar93)))
      ;
      iVar145 = CONCAT13((byte)(uVar141 >> 0x1f) & ~auVar108[3],
                         CONCAT12((byte)(uVar142 >> 0x10) & ~auVar108[2],
                                  CONCAT11((byte)(uVar142 >> 8) & ~bVar212,(byte)uVar142 & ~bVar209)
                                 ));
      iVar151 = CONCAT13((byte)(uVar146 >> 0x1f) & ~auVar108[11],
                         CONCAT12((byte)(uVar147 >> 0x10) & ~auVar108[10],
                                  CONCAT11((byte)(uVar147 >> 8) & ~bVar220,(byte)uVar147 & ~bVar215)
                                 ));
      iVar133 = CONCAT13((byte)(uVar127 >> 0x1f) & ~auVar100[3],
                         CONCAT12((byte)(uVar128 >> 0x10) & ~auVar100[2],
                                  CONCAT11((byte)(uVar128 >> 8) & ~bVar235,(byte)uVar128 & ~bVar231)
                                 ));
      iVar140 = CONCAT13((byte)(uVar135 >> 0x1f) & ~auVar100[11],
                         CONCAT12((byte)(uVar136 >> 0x10) & ~auVar100[10],
                                  CONCAT11((byte)(uVar136 >> 8) & ~bVar242,(byte)uVar136 & ~bVar238)
                                 ));
      iVar160 = CONCAT13((byte)(uVar156 >> 0x1f) & ~auVar113[3],
                         CONCAT12((byte)(uVar157 >> 0x10) & ~auVar113[2],
                                  CONCAT11((byte)(uVar157 >> 8) & ~bVar224,(byte)uVar157 & ~bVar221)
                                 ));
      iVar166 = CONCAT13((byte)(uVar162 >> 0x1f) & ~auVar113[11],
                         CONCAT12((byte)(uVar191 >> 0x10) & ~auVar113[10],
                                  CONCAT11((byte)(uVar191 >> 8) & ~bVar228,(byte)uVar191 & ~bVar227)
                                 ));
      iVar143 = iVar145 + iVar143;
      iVar145 = (int)(CONCAT17((byte)(uVar144 >> 0x1f) & ~auVar108[7],
                               CONCAT16((byte)((uint3)(uVar144 >> 0xf) >> 8) & ~auVar108[6],
                                        CONCAT15((byte)((uVar144 >> 7) >> 8) & ~bVar214,
                                                 CONCAT14((byte)(uVar144 >> 7) & ~bVar213,iVar145)))
                              ) >> 0x20) + (uint)bVar51;
      iVar148 = iVar151 + iVar148;
      iVar151 = (int)(CONCAT17((byte)(uVar150 >> 0x1f) & ~auVar108[15],
                               CONCAT16((byte)((uint3)(uVar150 >> 0xf) >> 8) & ~auVar108[14],
                                        CONCAT15((byte)((uVar150 >> 7) >> 8) & ~bVar218,
                                                 CONCAT14((byte)(uVar150 >> 7) & ~bVar217,iVar151)))
                              ) >> 0x20) + (uint)bVar52;
      iVar158 = iVar160 + iVar158;
      iVar160 = (int)(CONCAT17((byte)(uVar159 >> 0x1f) & ~auVar113[7],
                               CONCAT16((byte)((uint3)(uVar159 >> 0xf) >> 8) & ~auVar113[6],
                                        CONCAT15((byte)((uVar159 >> 7) >> 8) & ~bVar226,
                                                 CONCAT14((byte)(uVar159 >> 7) & ~bVar225,iVar160)))
                              ) >> 0x20) + (uint)bVar50;
      iVar163 = iVar166 + uVar149;
      iVar166 = (int)(CONCAT17((byte)(uVar165 >> 0x1f) & ~auVar113[15],
                               CONCAT16((byte)((uint3)(uVar165 >> 0xf) >> 8) & ~auVar113[14],
                                        CONCAT15((byte)((uVar165 >> 7) >> 8) & ~bVar230,
                                                 CONCAT14((byte)(uVar165 >> 7) & ~bVar229,iVar166)))
                              ) >> 0x20) + (uint)bVar216;
      iVar152 = iVar153 + iVar152;
      iVar153 = (int)(CONCAT17((byte)(uVar170 >> 0x1f) & ~auVar99[7],
                               CONCAT16((byte)((uint3)(uVar170 >> 0xf) >> 8) & ~auVar99[6],
                                        CONCAT15((byte)((uVar170 >> 7) >> 8) & ~bVar92,
                                                 CONCAT14((byte)(uVar170 >> 7) & ~bVar91,iVar153))))
                     >> 0x20) + (uint)bVar80;
      iVar154 = iVar155 + iVar154;
      iVar155 = (int)(CONCAT17((byte)(uVar174 >> 0x1f) & ~auVar99[15],
                               CONCAT16((byte)((uint3)(uVar174 >> 0xf) >> 8) & ~auVar99[14],
                                        CONCAT15((byte)((uVar174 >> 7) >> 8) & ~bVar105,
                                                 CONCAT14((byte)(uVar174 >> 7) & ~bVar95,iVar155))))
                     >> 0x20) + (uint)bVar48;
      iVar129 = iVar133 + iVar129;
      iVar133 = (int)(CONCAT17((byte)(uVar132 >> 0x1f) & ~auVar100[7],
                               CONCAT16((byte)((uint3)(uVar132 >> 0xf) >> 8) & ~auVar100[6],
                                        CONCAT15((byte)((uVar132 >> 7) >> 8) & ~bVar239,
                                                 CONCAT14((byte)(uVar132 >> 7) & ~bVar236,iVar133)))
                              ) >> 0x20) + (uint)bVar55;
      iVar137 = iVar140 + iVar137;
      iVar140 = (int)(CONCAT17((byte)(uVar139 >> 0x1f) & ~auVar100[15],
                               CONCAT16((byte)((uint3)(uVar139 >> 0xf) >> 8) & ~auVar100[14],
                                        CONCAT15((byte)((uVar139 >> 7) >> 8) & ~bVar243,
                                                 CONCAT14((byte)(uVar139 >> 7) & ~bVar241,iVar140)))
                              ) >> 0x20) + (uint)bVar56;
      puVar72[1] = CONCAT17((byte)((uint)iVar20 >> 0x10) | (byte)((uint)iVar7 >> 8) |
                            (byte)((uint)iVar151 >> 0x18) |
                            ((byte)((uVar74 - bVar125) * iVar117 >> 7) & ~bVar217) + bVar125,
                            CONCAT16((byte)((uint)iVar20 >> 8) | (byte)iVar7 |
                                     (byte)((uint)iVar151 >> 0x10),
                                     CONCAT15((byte)iVar20 | (byte)((uint)iVar151 >> 8),
                                              CONCAT14((char)iVar151,
                                                       CONCAT13((byte)((uint)iVar19 >> 0x10) |
                                                                (byte)((uint)iVar6 >> 8) |
                                                                (byte)((uint)iVar148 >> 0x18) |
                                                                ((byte)((uVar74 - bVar124) * iVar116
                                                                       >> 7) & ~bVar215) + bVar124,
                                                                CONCAT12((byte)((uint)iVar19 >> 8) |
                                                                         (byte)iVar6 |
                                                                         (byte)((uint)iVar148 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar19 |
                                                                                  (byte)((uint)
                                                  iVar148 >> 8),(char)iVar148)))))));
      *puVar72 = CONCAT17((byte)((uint)iVar18 >> 0x10) | (byte)((uint)iVar5 >> 8) |
                          (byte)((uint)iVar145 >> 0x18) |
                          ((byte)((uVar74 - bVar123) * iVar115 >> 7) & ~bVar213) + bVar123,
                          CONCAT16((byte)((uint)iVar18 >> 8) | (byte)iVar5 |
                                   (byte)((uint)iVar145 >> 0x10),
                                   CONCAT15((byte)iVar18 | (byte)((uint)iVar145 >> 8),
                                            CONCAT14((char)iVar145,
                                                     CONCAT13((byte)((uint)iVar17 >> 0x10) |
                                                              (byte)((uint)iVar4 >> 8) |
                                                              (byte)((uint)iVar143 >> 0x18) |
                                                              ((byte)((uVar74 - bVar122) * iVar112
                                                                     >> 7) & ~bVar209) + bVar122,
                                                              CONCAT12((byte)((uint)iVar17 >> 8) |
                                                                       (byte)iVar4 |
                                                                       (byte)((uint)iVar143 >> 0x10)
                                                                       ,CONCAT11((byte)iVar17 |
                                                                                 (byte)((uint)
                                                  iVar143 >> 8),(char)iVar143)))))));
      puVar72[3] = CONCAT17((byte)((uint)iVar26 >> 0x10) | (byte)((uint)iVar13 >> 8) |
                            (byte)((uint)iVar155 >> 0x18) |
                            ((byte)((uVar74 - bVar240) * iVar121 >> 7) & ~bVar95) + bVar240,
                            CONCAT16((byte)((uint)iVar26 >> 8) | (byte)iVar13 |
                                     (byte)((uint)iVar155 >> 0x10),
                                     CONCAT15((byte)iVar26 | (byte)((uint)iVar155 >> 8),
                                              CONCAT14((char)iVar155,
                                                       CONCAT13((byte)((uint)iVar25 >> 0x10) |
                                                                (byte)((uint)iVar12 >> 8) |
                                                                (byte)((uint)iVar154 >> 0x18) |
                                                                ((byte)((uVar74 - bVar237) * iVar120
                                                                       >> 7) & ~bVar93) + bVar237,
                                                                CONCAT12((byte)((uint)iVar25 >> 8) |
                                                                         (byte)iVar12 |
                                                                         (byte)((uint)iVar154 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar25 |
                                                                                  (byte)((uint)
                                                  iVar154 >> 8),(char)iVar154)))))));
      puVar72[2] = CONCAT17((byte)((uint)iVar23 >> 0x10) | (byte)((uint)iVar11 >> 8) |
                            (byte)((uint)iVar153 >> 0x18) |
                            ((byte)((uVar74 - bVar85) * iVar119 >> 7) & ~bVar91) + bVar85,
                            CONCAT16((byte)((uint)iVar23 >> 8) | (byte)iVar11 |
                                     (byte)((uint)iVar153 >> 0x10),
                                     CONCAT15((byte)iVar23 | (byte)((uint)iVar153 >> 8),
                                              CONCAT14((char)iVar153,
                                                       CONCAT13((byte)((uint)iVar22 >> 0x10) |
                                                                (byte)((uint)iVar10 >> 8) |
                                                                (byte)((uint)iVar152 >> 0x18) |
                                                                ((byte)((uVar74 - (int)uVar232) *
                                                                        iVar118 >> 7) & ~bVar84) +
                                                                (char)uVar232,
                                                                CONCAT12((byte)((uint)iVar22 >> 8) |
                                                                         (byte)iVar10 |
                                                                         (byte)((uint)iVar152 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar22 |
                                                                                  (byte)((uint)
                                                  iVar152 >> 8),(char)iVar152)))))));
      puVar72[5] = CONCAT17((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar186 >> 8) |
                            (byte)((uint)iVar166 >> 0x18) |
                            ((byte)((uVar74 - bVar207) * iVar111 >> 7) & ~bVar229) + bVar207,
                            CONCAT16((byte)((uint)iVar39 >> 8) | (byte)iVar186 |
                                     (byte)((uint)iVar166 >> 0x10),
                                     CONCAT15((byte)iVar39 | (byte)((uint)iVar166 >> 8),
                                              CONCAT14((char)iVar166,
                                                       CONCAT13((byte)((uint)iVar38 >> 0x10) |
                                                                (byte)((uint)iVar184 >> 8) |
                                                                (byte)((uint)iVar163 >> 0x18) |
                                                                ((byte)((uVar74 - bVar205) * iVar110
                                                                       >> 7) & ~bVar227) + bVar205,
                                                                CONCAT12((byte)((uint)iVar38 >> 8) |
                                                                         (byte)iVar184 |
                                                                         (byte)((uint)iVar163 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar38 |
                                                                                  (byte)((uint)
                                                  iVar163 >> 8),(char)iVar163)))))));
      puVar72[4] = CONCAT17((byte)((uint)iVar37 >> 0x10) | (byte)((uint)iVar182 >> 8) |
                            (byte)((uint)iVar160 >> 0x18) |
                            ((byte)((uVar74 - bVar203) * iVar109 >> 7) & ~bVar225) + bVar203,
                            CONCAT16((byte)((uint)iVar37 >> 8) | (byte)iVar182 |
                                     (byte)((uint)iVar160 >> 0x10),
                                     CONCAT15((byte)iVar37 | (byte)((uint)iVar160 >> 8),
                                              CONCAT14((char)iVar160,
                                                       CONCAT13((byte)((uint)iVar36 >> 0x10) |
                                                                (byte)((uint)iVar180 >> 8) |
                                                                (byte)((uint)iVar158 >> 0x18) |
                                                                ((byte)((uVar74 - bVar199) * iVar107
                                                                       >> 7) & ~bVar221) + bVar199,
                                                                CONCAT12((byte)((uint)iVar36 >> 8) |
                                                                         (byte)iVar180 |
                                                                         (byte)((uint)iVar158 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar36 |
                                                                                  (byte)((uint)
                                                  iVar158 >> 8),(char)iVar158)))))));
      puVar72[7] = CONCAT17((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar198 >> 8) |
                            (byte)((uint)iVar140 >> 0x18) |
                            ((byte)((uVar74 - bVar190) * iVar106 >> 7) & ~bVar241) + bVar190,
                            CONCAT16((byte)((uint)iVar31 >> 8) | (byte)iVar198 |
                                     (byte)((uint)iVar140 >> 0x10),
                                     CONCAT15((byte)iVar31 | (byte)((uint)iVar140 >> 8),
                                              CONCAT14((char)iVar140,
                                                       CONCAT13((byte)((uint)iVar30 >> 0x10) |
                                                                (byte)((uint)iVar196 >> 8) |
                                                                (byte)((uint)iVar137 >> 0x18) |
                                                                ((byte)((uVar74 - bVar189) * iVar103
                                                                       >> 7) & ~bVar238) + bVar189,
                                                                CONCAT12((byte)((uint)iVar30 >> 8) |
                                                                         (byte)iVar196 |
                                                                         (byte)((uint)iVar137 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar30 |
                                                                                  (byte)((uint)
                                                  iVar137 >> 8),(char)iVar137)))))));
      puVar72[6] = CONCAT17((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar194 >> 8) |
                            (byte)((uint)iVar133 >> 0x18) |
                            ((byte)((uVar74 - bVar188) * iVar102 >> 7) & ~bVar236) + bVar188,
                            CONCAT16((byte)((uint)iVar28 >> 8) | (byte)iVar194 |
                                     (byte)((uint)iVar133 >> 0x10),
                                     CONCAT15((byte)iVar28 | (byte)((uint)iVar133 >> 8),
                                              CONCAT14((char)iVar133,
                                                       CONCAT13((byte)((uint)iVar201 >> 0x10) |
                                                                (byte)((uint)iVar192 >> 8) |
                                                                (byte)((uint)iVar129 >> 0x18) |
                                                                ((byte)((uVar74 - bVar187) * iVar96
                                                                       >> 7) & ~bVar231) + bVar187,
                                                                CONCAT12((byte)((uint)iVar201 >> 8)
                                                                         | (byte)iVar192 |
                                                                         (byte)((uint)iVar129 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar201 |
                                                                                  (byte)((uint)
                                                  iVar129 >> 8),(char)iVar129)))))));
      puVar72 = puVar72 + 8;
      puVar73 = puVar70;
    } while (param_2 + 0xf0 != puVar70);
    lVar78 = 0x1e0;
    do {
      uVar136 = *(uint *)((long)param_2 + lVar78 * 4);
      uVar128 = (uint)*(byte *)((long)param_3 + lVar78);
      if (uVar128 == 0x7f) {
        uVar128 = 0x80;
      }
      uVar142 = uVar136 >> 0x18 & 0x7f;
      uVar147 = uVar136 >> 8 & 0x3f;
      uVar157 = uVar136 >> 0x10 & 0x3f;
      if ((int)uVar136 < 0) {
        uVar71 = (uVar75 - uVar147) * uVar128 >> 7;
        uVar130 = (uVar1 - (uVar136 & 0x3f)) * uVar128 >> 7;
        uVar127 = (uVar76 - uVar157) * uVar128 >> 7;
        uVar128 = (uVar74 - uVar142) * uVar128 >> 7;
      }
      else {
        uVar128 = 0;
        uVar127 = 0;
        uVar71 = 0;
        uVar130 = 0;
      }
      *(uint *)((long)param_1 + lVar78 * 2) =
           (uVar157 + uVar127) * 0x10000 | (uVar147 + uVar71) * 0x100 |
           (uVar136 & 0x3f) + uVar130 | (uVar142 + uVar128) * 0x1000000;
      lVar78 = lVar78 + 2;
    } while (lVar78 != 0x200);
  }
  puVar72 = (undefined8 *)((long)param_3 + 1);
  if (puVar79 < param_3 + 0x40 && puVar72 < param_1 + 0x100 ||
      puVar79 < param_2 + 0x100 && (undefined8 *)((long)param_2 + 4U) < param_1 + 0x100) {
    lVar78 = 1;
    do {
      uVar136 = *(uint *)((long)param_2 + lVar78 * 4);
      uVar128 = (uint)*(byte *)((long)param_3 + lVar78);
      uVar142 = uVar136 >> 8 & 0x3f;
      if (uVar128 == 0x7f) {
        uVar128 = 0x80;
      }
      uVar147 = uVar136 >> 0x18 & 0x7f;
      uVar157 = uVar136 >> 0x10 & 0x3f;
      if ((int)uVar136 < 0) {
        uVar71 = (uVar1 - (uVar136 & 0x3f)) * uVar128 >> 7;
        uVar130 = (uVar75 - uVar142) * uVar128 >> 7;
        uVar127 = (uVar76 - uVar157) * uVar128 >> 7;
        uVar128 = (uVar74 - uVar147) * uVar128 >> 7;
      }
      else {
        uVar128 = 0;
        uVar127 = 0;
        uVar130 = 0;
        uVar71 = 0;
      }
      *(uint *)puVar79 =
           (uVar136 & 0x3f) + uVar71 | (uVar147 + uVar128) * 0x1000000 |
           (uVar157 + uVar127) * 0x10000 | (uVar142 + uVar130) * 0x100;
      lVar78 = lVar78 + 2;
      puVar79 = (undefined8 *)((long)puVar79 + 4);
    } while (lVar78 != 0x201);
  }
  else {
    puVar73 = (undefined8 *)((long)param_2 + 4U);
    do {
      bVar80 = *(byte *)puVar72;
      uVar81 = *(undefined *)((long)puVar72 + 2);
      puVar58 = (uint *)((long)puVar72 + 4);
      puVar59 = (undefined *)((long)puVar72 + 6);
      puVar70 = puVar72 + 1;
      puVar60 = (undefined *)((long)puVar72 + 10);
      puVar61 = (uint *)((long)puVar72 + 0xc);
      puVar62 = (undefined *)((long)puVar72 + 0xe);
      puVar67 = puVar72 + 2;
      uVar82 = *(undefined *)((long)puVar72 + 0x12);
      puVar63 = (uint *)((long)puVar72 + 0x14);
      puVar64 = (undefined *)((long)puVar72 + 0x16);
      puVar68 = puVar72 + 3;
      uVar83 = *(undefined *)((long)puVar72 + 0x1a);
      puVar65 = (uint *)((long)puVar72 + 0x1c);
      puVar66 = (undefined *)((long)puVar72 + 0x1e);
      puVar72 = puVar72 + 4;
      uVar132 = *(uint *)(puVar73 + 0xc);
      uVar135 = *(uint *)(puVar73 + 0xd);
      uVar139 = *(uint *)(puVar73 + 0xe);
      uVar141 = *(uint *)(puVar73 + 0xf);
      uVar144 = *(uint *)puVar73;
      uVar146 = *(uint *)(puVar73 + 1);
      uVar150 = *(uint *)(puVar73 + 2);
      uVar156 = *(uint *)(puVar73 + 3);
      puVar77 = puVar73 + 0x10;
      uVar200 = *(uint *)(puVar73 + 8);
      uVar204 = *(uint *)(puVar73 + 9);
      uVar206 = *(uint *)(puVar73 + 10);
      uVar208 = *(uint *)(puVar73 + 0xb);
      uVar98 = CONCAT14((char)(uVar135 >> 8),(uint)((byte)(uVar132 >> 8) & 0x3f)) & 0x3fffffffff;
      bVar105 = (byte)(uVar141 >> 8) & 0x3f;
      uVar159 = *(uint *)(puVar73 + 4);
      uVar149 = *(uint *)(puVar73 + 5);
      uVar162 = *(uint *)(puVar73 + 6);
      uVar191 = *(uint *)(puVar73 + 7);
      auVar88._1_3_ = 0;
      auVar88[0] = *(byte *)puVar70;
      auVar88[4] = *puVar60;
      auVar88._5_3_ = 0;
      auVar88[8] = *(undefined *)puVar61;
      auVar88._9_3_ = 0;
      auVar88[12] = *puVar62;
      auVar88._13_3_ = 0;
      uVar195 = (uint)((byte)(uVar144 >> 8) & 0x3f);
      uVar161 = (uint)((byte)(uVar150 >> 8) & 0x3f);
      uVar168 = (uint)((byte)(uVar144 >> 0x10) & 0x3f);
      uVar172 = (uint)((byte)(uVar150 >> 0x10) & 0x3f);
      uVar126 = (uint)((byte)(uVar200 >> 0x10) & 0x3f);
      uVar134 = (uint)((byte)(uVar206 >> 0x10) & 0x3f);
      uVar210 = CONCAT14((char)uVar204,(uint)((byte)uVar200 & 0x3f)) & 0x3fffffffff;
      bVar220 = (byte)uVar208 & 0x3f;
      auVar2._5_3_ = 0;
      auVar2._0_5_ = CONCAT14(uVar81,(uint)CONCAT12(uVar81,(ushort)bVar80)) & 0xff0000ffff;
      auVar2[8] = *(undefined *)puVar58;
      auVar2._9_3_ = 0;
      auVar2[12] = *puVar59;
      auVar2._13_3_ = 0;
      auVar44[8] = 0x7f;
      auVar44._0_8_ = 0x7f0000007f;
      auVar44._9_3_ = 0;
      auVar44[12] = 0x7f;
      auVar44._13_3_ = 0;
      auVar100 = NEON_cmeq(auVar2,auVar44,4);
      auVar8._5_3_ = 0;
      auVar8._0_5_ = CONCAT14(uVar82,(uint)CONCAT12(uVar82,(ushort)*(byte *)puVar67)) & 0xff0000ffff
      ;
      auVar8[8] = *(undefined *)puVar63;
      auVar8._9_3_ = 0;
      auVar8[12] = *puVar64;
      auVar8._13_3_ = 0;
      auVar45[8] = 0x7f;
      auVar45._0_8_ = 0x7f0000007f;
      auVar45._9_3_ = 0;
      auVar45[12] = 0x7f;
      auVar45._13_3_ = 0;
      auVar99 = NEON_cmeq(auVar8,auVar45,4);
      uVar24 = CONCAT14((char)(uVar141 >> 0x10),(uint)((byte)(uVar139 >> 0x10) & 0x3f)) &
               0x3fffffffff;
      uVar21 = CONCAT14((char)(uVar135 >> 0x10),(uint)((byte)(uVar132 >> 0x10) & 0x3f)) &
               0x3fffffffff;
      auVar15._5_3_ = 0;
      auVar15._0_5_ =
           CONCAT14(uVar83,(uint)CONCAT12(uVar83,(ushort)*(byte *)puVar68)) & 0xff0000ffff;
      auVar15[8] = *(undefined *)puVar65;
      auVar15._9_3_ = 0;
      auVar15[12] = *puVar66;
      auVar15._13_3_ = 0;
      auVar46[8] = 0x7f;
      auVar46._0_8_ = 0x7f0000007f;
      auVar46._9_3_ = 0;
      auVar46[12] = 0x7f;
      auVar46._13_3_ = 0;
      auVar101 = NEON_cmeq(auVar15,auVar46,4);
      auVar3._5_3_ = 0;
      auVar3._0_5_ = CONCAT14(uVar81,(uint)CONCAT12(uVar81,(ushort)bVar80)) & 0xff0000ffff;
      auVar3[8] = *(undefined *)puVar58;
      auVar3._9_3_ = 0;
      auVar3[12] = *puVar59;
      auVar3._13_3_ = 0;
      auVar32[8] = 0x80;
      auVar32._0_8_ = 0x8000000080;
      auVar32._9_3_ = 0;
      auVar32[12] = 0x80;
      auVar32._13_3_ = 0;
      auVar108 = NEON_bsl(auVar100,auVar32,auVar3,1);
      auVar9._5_3_ = 0;
      auVar9._0_5_ = CONCAT14(uVar82,(uint)CONCAT12(uVar82,(ushort)*(byte *)puVar67)) & 0xff0000ffff
      ;
      auVar9[8] = *(undefined *)puVar63;
      auVar9._9_3_ = 0;
      auVar9[12] = *puVar64;
      auVar9._13_3_ = 0;
      auVar33[8] = 0x80;
      auVar33._0_8_ = 0x8000000080;
      auVar33._9_3_ = 0;
      auVar33[12] = 0x80;
      auVar33._13_3_ = 0;
      auVar100 = NEON_bsl(auVar99,auVar33,auVar9,1);
      auVar16._5_3_ = 0;
      auVar16._0_5_ =
           CONCAT14(uVar83,(uint)CONCAT12(uVar83,(ushort)*(byte *)puVar68)) & 0xff0000ffff;
      auVar16[8] = *(undefined *)puVar65;
      auVar16._9_3_ = 0;
      auVar16[12] = *puVar66;
      auVar16._13_3_ = 0;
      auVar34[8] = 0x80;
      auVar34._0_8_ = 0x8000000080;
      auVar34._9_3_ = 0;
      auVar34[12] = 0x80;
      auVar34._13_3_ = 0;
      auVar99 = NEON_bsl(auVar101,auVar34,auVar16,1);
      uVar170 = (uint)((byte)(uVar146 >> 0x10) & 0x3f);
      uVar174 = (uint)((byte)(uVar156 >> 0x10) & 0x3f);
      uVar197 = (uint)((byte)(uVar146 >> 8) & 0x3f);
      uVar164 = (uint)((byte)(uVar156 >> 8) & 0x3f);
      uVar131 = (uint)((byte)(uVar204 >> 0x10) & 0x3f);
      uVar138 = (uint)((byte)(uVar208 >> 0x10) & 0x3f);
      uVar175 = (uint)((byte)(uVar159 >> 8) & 0x3f);
      uVar177 = (uint)((byte)(uVar162 >> 8) & 0x3f);
      auVar47[8] = 0x7f;
      auVar47._0_8_ = 0x7f0000007f;
      auVar47._9_3_ = 0;
      auVar47[12] = 0x7f;
      auVar47._13_3_ = 0;
      auVar101 = NEON_cmeq(auVar88,auVar47,4);
      iVar107 = auVar100._0_4_;
      uVar179 = (uVar76 - uVar126) * iVar107;
      iVar109 = auVar100._4_4_;
      uVar181 = (uVar76 - uVar131) * iVar109;
      iVar110 = auVar100._8_4_;
      uVar183 = (uVar76 - uVar134) * iVar110;
      iVar111 = auVar100._12_4_;
      uVar185 = (uVar76 - uVar138) * iVar111;
      iVar112 = auVar108._0_4_;
      iVar115 = auVar108._4_4_;
      iVar116 = auVar108._8_4_;
      iVar117 = auVar108._12_4_;
      bVar104 = (byte)(uVar144 >> 0x18);
      bVar122 = (byte)(uVar146 >> 0x18);
      auVar219._0_5_ = CONCAT14(bVar122,(uint)(bVar104 & 0x80)) & 0x80ffffffff;
      auVar219._5_3_ = 0;
      bVar123 = (byte)(uVar150 >> 0x18);
      auVar219[8] = bVar123 & 0x80;
      auVar219._9_3_ = 0;
      bVar124 = (byte)(uVar156 >> 0x18);
      auVar219[12] = bVar124 & 0x80;
      auVar219._13_3_ = 0;
      auVar35[8] = 0x80;
      auVar35._0_8_ = 0x8000000080;
      auVar35._9_3_ = 0;
      auVar35[12] = 0x80;
      auVar35._13_3_ = 0;
      auVar101 = NEON_bsl(auVar101,auVar35,auVar88,1);
      uVar167 = (uint)((byte)(uVar159 >> 0x10) & 0x3f);
      uVar171 = (uint)((byte)(uVar162 >> 0x10) & 0x3f);
      auVar100 = NEON_cmeq(auVar219,0,2);
      uVar176 = (uint)((byte)(uVar149 >> 8) & 0x3f);
      uVar178 = (uint)((byte)(uVar191 >> 8) & 0x3f);
      uVar128 = (uVar76 - uVar168) * iVar112 >> 7;
      uVar136 = (uVar76 - uVar170) * iVar115 >> 7;
      uVar142 = (uVar76 - uVar172) * iVar116 >> 7;
      uVar147 = (uVar76 - uVar174) * iVar117 >> 7;
      uVar157 = (uVar75 - uVar195) * iVar112 >> 7;
      uVar71 = (uVar75 - uVar197) * iVar115 >> 7;
      uVar130 = (uVar75 - uVar161) * iVar116 >> 7;
      uVar127 = (uVar75 - uVar164) * iVar117 >> 7;
      uVar169 = (uint)((byte)(uVar149 >> 0x10) & 0x3f);
      uVar173 = (uint)((byte)(uVar191 >> 0x10) & 0x3f);
      bVar80 = (byte)(uVar159 >> 0x18);
      uVar81 = (undefined)(uVar149 >> 0x18);
      auVar89._0_5_ = CONCAT14(uVar81,(uint)(bVar80 & 0x80)) & 0x80ffffffff;
      auVar89._5_3_ = 0;
      bVar239 = (byte)(uVar162 >> 0x18);
      auVar89[8] = bVar239 & 0x80;
      auVar89._9_3_ = 0;
      bVar242 = (byte)(uVar191 >> 0x18);
      auVar89[12] = bVar242 & 0x80;
      auVar89._13_3_ = 0;
      iVar118 = auVar101._0_4_;
      iVar119 = auVar101._4_4_;
      iVar120 = auVar101._8_4_;
      iVar121 = auVar101._12_4_;
      bVar207 = auVar100[0];
      bVar209 = auVar100[1];
      bVar212 = auVar100[4];
      bVar213 = auVar100[5];
      bVar214 = auVar100[8];
      bVar215 = auVar100[9];
      bVar216 = auVar100[12];
      bVar217 = auVar100[13];
      auVar101 = NEON_cmeq(auVar89,0,2);
      uVar165 = (uint)((byte)(uVar200 >> 8) & 0x3f);
      uVar193 = (uint)((byte)(uVar206 >> 8) & 0x3f);
      iVar17 = CONCAT12((byte)(uVar157 >> 0x10) & ~auVar100[2],
                        CONCAT11((byte)(uVar157 >> 8) & ~bVar209,(byte)uVar157 & ~bVar207)) +
               uVar195;
      iVar18 = CONCAT12((byte)(uVar71 >> 0x10) & ~auVar100[6],
                        CONCAT11((byte)(uVar71 >> 8) & ~bVar213,(byte)uVar71 & ~bVar212)) + uVar197;
      iVar19 = CONCAT12((byte)(uVar130 >> 0x10) & ~auVar100[10],
                        CONCAT11((byte)(uVar130 >> 8) & ~bVar215,(byte)uVar130 & ~bVar214)) +
               uVar161;
      iVar20 = CONCAT12((byte)(uVar127 >> 0x10) & ~auVar100[14],
                        CONCAT11((byte)(uVar127 >> 8) & ~bVar217,(byte)uVar127 & ~bVar216)) +
               uVar164;
      iVar4 = CONCAT11((byte)(uVar128 >> 8) & ~bVar209,(byte)uVar128 & ~bVar207) + uVar168;
      iVar5 = CONCAT11((byte)(uVar136 >> 8) & ~bVar213,(byte)uVar136 & ~bVar212) + uVar170;
      iVar6 = CONCAT11((byte)(uVar142 >> 8) & ~bVar215,(byte)uVar142 & ~bVar214) + uVar172;
      iVar7 = CONCAT11((byte)(uVar147 >> 8) & ~bVar217,(byte)uVar147 & ~bVar216) + uVar174;
      uVar157 = (uVar75 - uVar175) * iVar118 >> 7;
      uVar71 = (uVar75 - uVar176) * iVar119 >> 7;
      uVar130 = (uVar75 - uVar177) * iVar120 >> 7;
      uVar127 = (uVar75 - uVar178) * iVar121 >> 7;
      uVar232 = CONCAT14(uVar81,(uint)(bVar80 & 0x7f)) & 0x7fffffffff;
      bVar239 = bVar239 & 0x7f;
      bVar242 = bVar242 & 0x7f;
      uVar128 = (uVar76 - uVar167) * iVar118 >> 7;
      uVar136 = (uVar76 - uVar169) * iVar119 >> 7;
      uVar142 = (uVar76 - uVar171) * iVar120 >> 7;
      uVar147 = (uVar76 - uVar173) * iVar121 >> 7;
      bVar85 = auVar101[0];
      bVar84 = auVar101[1];
      bVar90 = auVar101[4];
      bVar91 = auVar101[5];
      bVar92 = auVar101[8];
      bVar93 = auVar101[9];
      bVar94 = auVar101[12];
      bVar95 = auVar101[13];
      uVar202 = CONCAT14((char)uVar156,(uint)((byte)uVar150 & 0x3f)) & 0x3fffffffff;
      uVar97 = CONCAT14((char)uVar146,(uint)((byte)uVar144 & 0x3f)) & 0x3fffffffff;
      uVar29 = CONCAT14((char)uVar191,(uint)((byte)uVar162 & 0x3f)) & 0x3fffffffff;
      uVar27 = CONCAT14((char)uVar149,(uint)((byte)uVar159 & 0x3f)) & 0x3fffffffff;
      bVar190 = (byte)(uVar200 >> 0x18);
      bVar199 = (byte)(uVar204 >> 0x18);
      bVar203 = (byte)(uVar206 >> 0x18);
      bVar205 = (byte)(uVar208 >> 0x18);
      uVar144 = (uint)((byte)(uVar204 >> 8) & 0x3f);
      uVar146 = (uint)((byte)(uVar208 >> 8) & 0x3f);
      iVar22 = CONCAT12((byte)(uVar157 >> 0x10) & ~auVar101[2],
                        CONCAT11((byte)(uVar157 >> 8) & ~bVar84,(byte)uVar157 & ~bVar85)) + uVar175;
      iVar23 = CONCAT12((byte)(uVar71 >> 0x10) & ~auVar101[6],
                        CONCAT11((byte)(uVar71 >> 8) & ~bVar91,(byte)uVar71 & ~bVar90)) + uVar176;
      iVar25 = CONCAT12((byte)(uVar130 >> 0x10) & ~auVar101[10],
                        CONCAT11((byte)(uVar130 >> 8) & ~bVar93,(byte)uVar130 & ~bVar92)) + uVar177;
      iVar26 = CONCAT12((byte)(uVar127 >> 0x10) & ~auVar101[14],
                        CONCAT11((byte)(uVar127 >> 8) & ~bVar95,(byte)uVar127 & ~bVar94)) + uVar178;
      auVar223._0_5_ = CONCAT14(bVar199,(uint)(bVar190 & 0x80)) & 0x80ffffffff;
      auVar223._5_3_ = 0;
      auVar223[8] = bVar203 & 0x80;
      auVar223._9_3_ = 0;
      auVar223[12] = bVar205 & 0x80;
      auVar223._13_3_ = 0;
      auVar108 = NEON_cmeq(auVar223,0,2);
      iVar10 = CONCAT11((byte)(uVar128 >> 8) & ~bVar84,(byte)uVar128 & ~bVar85) + uVar167;
      iVar11 = CONCAT11((byte)(uVar136 >> 8) & ~bVar91,(byte)uVar136 & ~bVar90) + uVar169;
      iVar12 = CONCAT11((byte)(uVar142 >> 8) & ~bVar93,(byte)uVar142 & ~bVar92) + uVar171;
      iVar13 = CONCAT11((byte)(uVar147 >> 8) & ~bVar95,(byte)uVar147 & ~bVar94) + uVar173;
      bVar55 = (byte)(uVar232 >> 0x20);
      iVar152 = (int)uVar27;
      bVar80 = (byte)(uVar27 >> 0x20);
      iVar154 = (int)uVar29;
      bVar48 = (byte)(uVar29 >> 0x20);
      uVar128 = (uVar75 - uVar165) * iVar107 >> 7;
      uVar136 = (uVar75 - uVar144) * iVar109 >> 7;
      uVar142 = (uVar75 - uVar193) * iVar110 >> 7;
      uVar147 = (uVar75 - uVar146) * iVar111 >> 7;
      uVar168 = (uVar1 - iVar152) * iVar118;
      uVar170 = (uVar1 - bVar80) * iVar119;
      uVar172 = (uVar1 - iVar154) * iVar120;
      uVar174 = (uVar1 - bVar48) * iVar121;
      bVar190 = bVar190 & 0x7f;
      bVar199 = bVar199 & 0x7f;
      bVar203 = bVar203 & 0x7f;
      bVar205 = bVar205 & 0x7f;
      iVar201 = (int)uVar98;
      bVar49 = (byte)(uVar98 >> 0x20);
      uVar156 = (uint)((byte)(uVar139 >> 8) & 0x3f);
      bVar218 = auVar108[0];
      bVar221 = auVar108[1];
      bVar224 = auVar108[4];
      bVar225 = auVar108[5];
      bVar226 = auVar108[8];
      bVar227 = auVar108[9];
      bVar228 = auVar108[12];
      bVar229 = auVar108[13];
      bVar104 = bVar104 & 0x7f;
      bVar122 = bVar122 & 0x7f;
      bVar123 = bVar123 & 0x7f;
      bVar124 = bVar124 & 0x7f;
      iVar36 = CONCAT12((byte)(uVar128 >> 0x10) & ~auVar108[2],
                        CONCAT11((byte)(uVar128 >> 8) & ~bVar221,(byte)uVar128 & ~bVar218)) +
               uVar165;
      iVar37 = CONCAT12((byte)(uVar136 >> 0x10) & ~auVar108[6],
                        CONCAT11((byte)(uVar136 >> 8) & ~bVar225,(byte)uVar136 & ~bVar224)) +
               uVar144;
      iVar38 = CONCAT12((byte)(uVar142 >> 0x10) & ~auVar108[10],
                        CONCAT11((byte)(uVar142 >> 8) & ~bVar227,(byte)uVar142 & ~bVar226)) +
               uVar193;
      iVar39 = CONCAT12((byte)(uVar147 >> 0x10) & ~auVar108[14],
                        CONCAT11((byte)(uVar147 >> 8) & ~bVar229,(byte)uVar147 & ~bVar228)) +
               uVar146;
      uVar157 = uVar168 >> 7;
      uVar71 = uVar172 >> 7;
      iVar158 = (int)uVar210;
      bVar50 = (byte)(uVar210 >> 0x20);
      uVar149 = (uint)((byte)uVar206 & 0x3f);
      uVar29 = CONCAT14((char)uVar141,(uint)((byte)uVar139 & 0x3f)) & 0x3fffffffff;
      uVar27 = CONCAT14((char)uVar135,(uint)((byte)uVar132 & 0x3f)) & 0x3fffffffff;
      iVar96 = auVar99._0_4_;
      iVar102 = auVar99._4_4_;
      iVar103 = auVar99._8_4_;
      iVar106 = auVar99._12_4_;
      bVar125 = (byte)(uVar132 >> 0x18);
      bVar187 = (byte)(uVar135 >> 0x18);
      auVar234._0_5_ = CONCAT14(bVar187,(uint)(bVar125 & 0x80)) & 0x80ffffffff;
      auVar234._5_3_ = 0;
      bVar188 = (byte)(uVar139 >> 0x18);
      auVar234[8] = bVar188 & 0x80;
      auVar234._9_3_ = 0;
      bVar189 = (byte)(uVar141 >> 0x18);
      auVar234[12] = bVar189 & 0x80;
      auVar234._13_3_ = 0;
      uVar150 = (uVar1 - iVar158) * iVar107;
      uVar159 = (uVar1 - bVar50) * iVar109;
      uVar162 = (uVar1 - uVar149) * iVar110;
      uVar165 = (uVar1 - bVar220) * iVar111;
      iVar143 = (int)uVar97;
      bVar51 = (byte)(uVar97 >> 0x20);
      iVar148 = (int)uVar202;
      bVar52 = (byte)(uVar202 >> 0x20);
      iVar192 = (int)uVar21;
      bVar56 = (byte)(uVar21 >> 0x20);
      iVar196 = (int)uVar24;
      auVar99 = NEON_cmeq(auVar234,0,2);
      bVar125 = bVar125 & 0x7f;
      bVar187 = bVar187 & 0x7f;
      bVar188 = bVar188 & 0x7f;
      bVar189 = bVar189 & 0x7f;
      uVar139 = (uVar1 - iVar143) * iVar112;
      uVar141 = (uVar1 - bVar51) * iVar115;
      uVar144 = (uVar1 - iVar148) * iVar116;
      uVar146 = (uVar1 - bVar52) * iVar117;
      iVar129 = (int)uVar27;
      bVar53 = (byte)(uVar27 >> 0x20);
      iVar137 = (int)uVar29;
      bVar54 = (byte)(uVar29 >> 0x20);
      uVar128 = (uVar75 - iVar201) * iVar96 >> 7;
      uVar136 = (uVar75 - bVar49) * iVar102 >> 7;
      uVar142 = (uVar75 - uVar156) * iVar103 >> 7;
      uVar147 = (uVar75 - bVar105) * iVar106 >> 7;
      uVar191 = (uVar76 - iVar192) * iVar96 >> 7;
      uVar193 = (uVar76 - bVar56) * iVar102 >> 7;
      uVar195 = (uVar76 - iVar196) * iVar103 >> 7;
      iVar180 = CONCAT11((byte)(uint3)(uVar179 >> 0xf) & ~bVar221,(byte)(uVar179 >> 7) & ~bVar218) +
                uVar126;
      iVar182 = CONCAT11((byte)(uint3)(uVar181 >> 0xf) & ~bVar225,(byte)(uVar181 >> 7) & ~bVar224) +
                uVar131;
      iVar184 = CONCAT11((byte)(uint3)(uVar183 >> 0xf) & ~bVar227,(byte)(uVar183 >> 7) & ~bVar226) +
                uVar134;
      iVar186 = CONCAT11((byte)(uint3)(uVar185 >> 0xf) & ~bVar229,(byte)(uVar185 >> 7) & ~bVar228) +
                uVar138;
      uVar130 = (uVar1 - iVar129) * iVar96;
      uVar127 = (uVar1 - bVar53) * iVar102;
      uVar132 = (uVar1 - iVar137) * iVar103;
      uVar135 = (uVar1 - bVar54) * iVar106;
      bVar230 = auVar99[0];
      bVar231 = auVar99[1];
      bVar235 = auVar99[4];
      bVar236 = auVar99[5];
      bVar237 = auVar99[8];
      bVar238 = auVar99[9];
      bVar240 = auVar99[12];
      uVar191 = (uint)CONCAT11((byte)(uVar191 >> 8) & ~bVar231,(byte)uVar191 & ~bVar230);
      iVar201 = (uint)CONCAT12((byte)(uVar128 >> 0x10) & ~auVar99[2],
                               CONCAT11((byte)(uVar128 >> 8) & ~bVar231,(byte)uVar128 & ~bVar230)) +
                iVar201;
      iVar28 = (uint)CONCAT12((byte)(uVar136 >> 0x10) & ~auVar99[6],
                              CONCAT11((byte)(uVar136 >> 8) & ~bVar236,(byte)uVar136 & ~bVar235)) +
               (uint)bVar49;
      iVar30 = CONCAT12((byte)(uVar142 >> 0x10) & ~auVar99[10],
                        CONCAT11((byte)(uVar142 >> 8) & ~bVar238,(byte)uVar142 & ~bVar237)) +
               uVar156;
      iVar31 = (uint)CONCAT12((byte)(uVar147 >> 0x10) & ~auVar99[14],
                              CONCAT11((byte)(uVar147 >> 8) & ~auVar99[13],(byte)uVar147 & ~bVar240)
                             ) + (uint)bVar105;
      uVar142 = uVar139 >> 7;
      uVar147 = uVar144 >> 7;
      iVar192 = uVar191 + iVar192;
      iVar194 = (uint)(ushort)(CONCAT15((byte)(uVar193 >> 8) & ~bVar236,
                                        CONCAT14((byte)uVar193 & ~bVar235,uVar191)) >> 0x20) +
                (uint)bVar56;
      iVar196 = (uint)CONCAT11((byte)(uVar195 >> 8) & ~bVar238,(byte)uVar195 & ~bVar237) + iVar196;
      uVar156 = uVar150 >> 7;
      uVar191 = uVar162 >> 7;
      uVar128 = uVar130 >> 7;
      uVar136 = uVar132 >> 7;
      iVar153 = CONCAT13((byte)(uVar168 >> 0x1f) & ~auVar101[3],
                         CONCAT12((byte)(uVar157 >> 0x10) & ~auVar101[2],
                                  CONCAT11((byte)(uVar157 >> 8) & ~bVar84,(byte)uVar157 & ~bVar85)))
      ;
      iVar155 = CONCAT13((byte)(uVar172 >> 0x1f) & ~auVar101[11],
                         CONCAT12((byte)(uVar71 >> 0x10) & ~auVar101[10],
                                  CONCAT11((byte)(uVar71 >> 8) & ~bVar93,(byte)uVar71 & ~bVar92)));
      iVar145 = CONCAT13((byte)(uVar139 >> 0x1f) & ~auVar100[3],
                         CONCAT12((byte)(uVar142 >> 0x10) & ~auVar100[2],
                                  CONCAT11((byte)(uVar142 >> 8) & ~bVar209,(byte)uVar142 & ~bVar207)
                                 ));
      iVar151 = CONCAT13((byte)(uVar144 >> 0x1f) & ~auVar100[11],
                         CONCAT12((byte)(uVar147 >> 0x10) & ~auVar100[10],
                                  CONCAT11((byte)(uVar147 >> 8) & ~bVar215,(byte)uVar147 & ~bVar214)
                                 ));
      iVar133 = CONCAT13((byte)(uVar130 >> 0x1f) & ~auVar99[3],
                         CONCAT12((byte)(uVar128 >> 0x10) & ~auVar99[2],
                                  CONCAT11((byte)(uVar128 >> 8) & ~bVar231,(byte)uVar128 & ~bVar230)
                                 ));
      iVar140 = CONCAT13((byte)(uVar132 >> 0x1f) & ~auVar99[11],
                         CONCAT12((byte)(uVar136 >> 0x10) & ~auVar99[10],
                                  CONCAT11((byte)(uVar136 >> 8) & ~bVar238,(byte)uVar136 & ~bVar237)
                                 ));
      iVar160 = CONCAT13((byte)(uVar150 >> 0x1f) & ~auVar108[3],
                         CONCAT12((byte)(uVar156 >> 0x10) & ~auVar108[2],
                                  CONCAT11((byte)(uVar156 >> 8) & ~bVar221,(byte)uVar156 & ~bVar218)
                                 ));
      iVar166 = CONCAT13((byte)(uVar162 >> 0x1f) & ~auVar108[11],
                         CONCAT12((byte)(uVar191 >> 0x10) & ~auVar108[10],
                                  CONCAT11((byte)(uVar191 >> 8) & ~bVar227,(byte)uVar191 & ~bVar226)
                                 ));
      iVar143 = iVar145 + iVar143;
      iVar145 = (int)(CONCAT17((byte)(uVar141 >> 0x1f) & ~auVar100[7],
                               CONCAT16((byte)((uint3)(uVar141 >> 0xf) >> 8) & ~auVar100[6],
                                        CONCAT15((byte)((uVar141 >> 7) >> 8) & ~bVar213,
                                                 CONCAT14((byte)(uVar141 >> 7) & ~bVar212,iVar145)))
                              ) >> 0x20) + (uint)bVar51;
      iVar148 = iVar151 + iVar148;
      iVar151 = (int)(CONCAT17((byte)(uVar146 >> 0x1f) & ~auVar100[15],
                               CONCAT16((byte)((uint3)(uVar146 >> 0xf) >> 8) & ~auVar100[14],
                                        CONCAT15((byte)((uVar146 >> 7) >> 8) & ~bVar217,
                                                 CONCAT14((byte)(uVar146 >> 7) & ~bVar216,iVar151)))
                              ) >> 0x20) + (uint)bVar52;
      iVar158 = iVar160 + iVar158;
      iVar160 = (int)(CONCAT17((byte)(uVar159 >> 0x1f) & ~auVar108[7],
                               CONCAT16((byte)((uint3)(uVar159 >> 0xf) >> 8) & ~auVar108[6],
                                        CONCAT15((byte)((uVar159 >> 7) >> 8) & ~bVar225,
                                                 CONCAT14((byte)(uVar159 >> 7) & ~bVar224,iVar160)))
                              ) >> 0x20) + (uint)bVar50;
      iVar163 = iVar166 + uVar149;
      iVar166 = (int)(CONCAT17((byte)(uVar165 >> 0x1f) & ~auVar108[15],
                               CONCAT16((byte)((uint3)(uVar165 >> 0xf) >> 8) & ~auVar108[14],
                                        CONCAT15((byte)((uVar165 >> 7) >> 8) & ~bVar229,
                                                 CONCAT14((byte)(uVar165 >> 7) & ~bVar228,iVar166)))
                              ) >> 0x20) + (uint)bVar220;
      iVar152 = iVar153 + iVar152;
      iVar153 = (int)(CONCAT17((byte)(uVar170 >> 0x1f) & ~auVar101[7],
                               CONCAT16((byte)((uint3)(uVar170 >> 0xf) >> 8) & ~auVar101[6],
                                        CONCAT15((byte)((uVar170 >> 7) >> 8) & ~bVar91,
                                                 CONCAT14((byte)(uVar170 >> 7) & ~bVar90,iVar153))))
                     >> 0x20) + (uint)bVar80;
      iVar154 = iVar155 + iVar154;
      iVar155 = (int)(CONCAT17((byte)(uVar174 >> 0x1f) & ~auVar101[15],
                               CONCAT16((byte)((uint3)(uVar174 >> 0xf) >> 8) & ~auVar101[14],
                                        CONCAT15((byte)((uVar174 >> 7) >> 8) & ~bVar95,
                                                 CONCAT14((byte)(uVar174 >> 7) & ~bVar94,iVar155))))
                     >> 0x20) + (uint)bVar48;
      iVar129 = iVar133 + iVar129;
      iVar133 = (int)(CONCAT17((byte)(uVar127 >> 0x1f) & ~auVar99[7],
                               CONCAT16((byte)((uint3)(uVar127 >> 0xf) >> 8) & ~auVar99[6],
                                        CONCAT15((byte)((uVar127 >> 7) >> 8) & ~bVar236,
                                                 CONCAT14((byte)(uVar127 >> 7) & ~bVar235,iVar133)))
                              ) >> 0x20) + (uint)bVar53;
      iVar137 = iVar140 + iVar137;
      iVar140 = (int)(CONCAT17((byte)(uVar135 >> 0x1f) & ~auVar99[15],
                               CONCAT16((byte)((uint3)(uVar135 >> 0xf) >> 8) & ~auVar99[14],
                                        CONCAT15((byte)((uVar135 >> 7) >> 8) & ~auVar99[13],
                                                 CONCAT14((byte)(uVar135 >> 7) & ~bVar240,iVar140)))
                              ) >> 0x20) + (uint)bVar54;
      puVar79[1] = CONCAT17((byte)((uint)iVar20 >> 0x10) | (byte)((uint)iVar7 >> 8) |
                            (byte)((uint)iVar151 >> 0x18) |
                            ((byte)((uVar74 - bVar124) * iVar117 >> 7) & ~bVar216) + bVar124,
                            CONCAT16((byte)((uint)iVar20 >> 8) | (byte)iVar7 |
                                     (byte)((uint)iVar151 >> 0x10),
                                     CONCAT15((byte)iVar20 | (byte)((uint)iVar151 >> 8),
                                              CONCAT14((char)iVar151,
                                                       CONCAT13((byte)((uint)iVar19 >> 0x10) |
                                                                (byte)((uint)iVar6 >> 8) |
                                                                (byte)((uint)iVar148 >> 0x18) |
                                                                ((byte)((uVar74 - bVar123) * iVar116
                                                                       >> 7) & ~bVar214) + bVar123,
                                                                CONCAT12((byte)((uint)iVar19 >> 8) |
                                                                         (byte)iVar6 |
                                                                         (byte)((uint)iVar148 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar19 |
                                                                                  (byte)((uint)
                                                  iVar148 >> 8),(char)iVar148)))))));
      *puVar79 = CONCAT17((byte)((uint)iVar18 >> 0x10) | (byte)((uint)iVar5 >> 8) |
                          (byte)((uint)iVar145 >> 0x18) |
                          ((byte)((uVar74 - bVar122) * iVar115 >> 7) & ~bVar212) + bVar122,
                          CONCAT16((byte)((uint)iVar18 >> 8) | (byte)iVar5 |
                                   (byte)((uint)iVar145 >> 0x10),
                                   CONCAT15((byte)iVar18 | (byte)((uint)iVar145 >> 8),
                                            CONCAT14((char)iVar145,
                                                     CONCAT13((byte)((uint)iVar17 >> 0x10) |
                                                              (byte)((uint)iVar4 >> 8) |
                                                              (byte)((uint)iVar143 >> 0x18) |
                                                              ((byte)((uVar74 - bVar104) * iVar112
                                                                     >> 7) & ~bVar207) + bVar104,
                                                              CONCAT12((byte)((uint)iVar17 >> 8) |
                                                                       (byte)iVar4 |
                                                                       (byte)((uint)iVar143 >> 0x10)
                                                                       ,CONCAT11((byte)iVar17 |
                                                                                 (byte)((uint)
                                                  iVar143 >> 8),(char)iVar143)))))));
      puVar79[3] = CONCAT17((byte)((uint)iVar26 >> 0x10) | (byte)((uint)iVar13 >> 8) |
                            (byte)((uint)iVar155 >> 0x18) |
                            ((byte)((uVar74 - bVar242) * iVar121 >> 7) & ~bVar94) + bVar242,
                            CONCAT16((byte)((uint)iVar26 >> 8) | (byte)iVar13 |
                                     (byte)((uint)iVar155 >> 0x10),
                                     CONCAT15((byte)iVar26 | (byte)((uint)iVar155 >> 8),
                                              CONCAT14((char)iVar155,
                                                       CONCAT13((byte)((uint)iVar25 >> 0x10) |
                                                                (byte)((uint)iVar12 >> 8) |
                                                                (byte)((uint)iVar154 >> 0x18) |
                                                                ((byte)((uVar74 - bVar239) * iVar120
                                                                       >> 7) & ~bVar92) + bVar239,
                                                                CONCAT12((byte)((uint)iVar25 >> 8) |
                                                                         (byte)iVar12 |
                                                                         (byte)((uint)iVar154 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar25 |
                                                                                  (byte)((uint)
                                                  iVar154 >> 8),(char)iVar154)))))));
      puVar79[2] = CONCAT17((byte)((uint)iVar23 >> 0x10) | (byte)((uint)iVar11 >> 8) |
                            (byte)((uint)iVar153 >> 0x18) |
                            ((byte)((uVar74 - bVar55) * iVar119 >> 7) & ~bVar90) + bVar55,
                            CONCAT16((byte)((uint)iVar23 >> 8) | (byte)iVar11 |
                                     (byte)((uint)iVar153 >> 0x10),
                                     CONCAT15((byte)iVar23 | (byte)((uint)iVar153 >> 8),
                                              CONCAT14((char)iVar153,
                                                       CONCAT13((byte)((uint)iVar22 >> 0x10) |
                                                                (byte)((uint)iVar10 >> 8) |
                                                                (byte)((uint)iVar152 >> 0x18) |
                                                                ((byte)((uVar74 - (int)uVar232) *
                                                                        iVar118 >> 7) & ~bVar85) +
                                                                (char)uVar232,
                                                                CONCAT12((byte)((uint)iVar22 >> 8) |
                                                                         (byte)iVar10 |
                                                                         (byte)((uint)iVar152 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar22 |
                                                                                  (byte)((uint)
                                                  iVar152 >> 8),(char)iVar152)))))));
      puVar79[5] = CONCAT17((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar186 >> 8) |
                            (byte)((uint)iVar166 >> 0x18) |
                            ((byte)((uVar74 - bVar205) * iVar111 >> 7) & ~bVar228) + bVar205,
                            CONCAT16((byte)((uint)iVar39 >> 8) | (byte)iVar186 |
                                     (byte)((uint)iVar166 >> 0x10),
                                     CONCAT15((byte)iVar39 | (byte)((uint)iVar166 >> 8),
                                              CONCAT14((char)iVar166,
                                                       CONCAT13((byte)((uint)iVar38 >> 0x10) |
                                                                (byte)((uint)iVar184 >> 8) |
                                                                (byte)((uint)iVar163 >> 0x18) |
                                                                ((byte)((uVar74 - bVar203) * iVar110
                                                                       >> 7) & ~bVar226) + bVar203,
                                                                CONCAT12((byte)((uint)iVar38 >> 8) |
                                                                         (byte)iVar184 |
                                                                         (byte)((uint)iVar163 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar38 |
                                                                                  (byte)((uint)
                                                  iVar163 >> 8),(char)iVar163)))))));
      puVar79[4] = CONCAT17((byte)((uint)iVar37 >> 0x10) | (byte)((uint)iVar182 >> 8) |
                            (byte)((uint)iVar160 >> 0x18) |
                            ((byte)((uVar74 - bVar199) * iVar109 >> 7) & ~bVar224) + bVar199,
                            CONCAT16((byte)((uint)iVar37 >> 8) | (byte)iVar182 |
                                     (byte)((uint)iVar160 >> 0x10),
                                     CONCAT15((byte)iVar37 | (byte)((uint)iVar160 >> 8),
                                              CONCAT14((char)iVar160,
                                                       CONCAT13((byte)((uint)iVar36 >> 0x10) |
                                                                (byte)((uint)iVar180 >> 8) |
                                                                (byte)((uint)iVar158 >> 0x18) |
                                                                ((byte)((uVar74 - bVar190) * iVar107
                                                                       >> 7) & ~bVar218) + bVar190,
                                                                CONCAT12((byte)((uint)iVar36 >> 8) |
                                                                         (byte)iVar180 |
                                                                         (byte)((uint)iVar158 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar36 |
                                                                                  (byte)((uint)
                                                  iVar158 >> 8),(char)iVar158)))))));
      puVar79[7] = CONCAT17((byte)((uint)iVar31 >> 0x10) | (byte)((uint)iVar140 >> 0x18) |
                            ((byte)((uVar74 - bVar189) * iVar106 >> 7) & ~bVar240) + bVar189,
                            CONCAT16((byte)((uint)iVar31 >> 8) | (byte)(uVar24 >> 0x20) |
                                     (byte)((uint)iVar140 >> 0x10),
                                     CONCAT15((byte)iVar31 | (byte)((uint)iVar140 >> 8),
                                              CONCAT14((char)iVar140,
                                                       CONCAT13((byte)((uint)iVar30 >> 0x10) |
                                                                (byte)((uint)iVar196 >> 8) |
                                                                (byte)((uint)iVar137 >> 0x18) |
                                                                ((byte)((uVar74 - bVar188) * iVar103
                                                                       >> 7) & ~bVar237) + bVar188,
                                                                CONCAT12((byte)((uint)iVar30 >> 8) |
                                                                         (byte)iVar196 |
                                                                         (byte)((uint)iVar137 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar30 |
                                                                                  (byte)((uint)
                                                  iVar137 >> 8),(char)iVar137)))))));
      puVar79[6] = CONCAT17((byte)((uint)iVar28 >> 0x10) | (byte)((uint)iVar194 >> 8) |
                            (byte)((uint)iVar133 >> 0x18) |
                            ((byte)((uVar74 - bVar187) * iVar102 >> 7) & ~bVar235) + bVar187,
                            CONCAT16((byte)((uint)iVar28 >> 8) | (byte)iVar194 |
                                     (byte)((uint)iVar133 >> 0x10),
                                     CONCAT15((byte)iVar28 | (byte)((uint)iVar133 >> 8),
                                              CONCAT14((char)iVar133,
                                                       CONCAT13((byte)((uint)iVar201 >> 0x10) |
                                                                (byte)((uint)iVar192 >> 8) |
                                                                (byte)((uint)iVar129 >> 0x18) |
                                                                ((byte)((uVar74 - bVar125) * iVar96
                                                                       >> 7) & ~bVar230) + bVar125,
                                                                CONCAT12((byte)((uint)iVar201 >> 8)
                                                                         | (byte)iVar192 |
                                                                         (byte)((uint)iVar129 >>
                                                                               0x10),
                                                                         CONCAT11((byte)iVar201 |
                                                                                  (byte)((uint)
                                                  iVar129 >> 8),(char)iVar129)))))));
      puVar73 = puVar77;
      puVar79 = puVar79 + 8;
    } while (puVar77 != (undefined8 *)((long)param_2 + 0x784U));
    lVar78 = 0x1e1;
    puVar79 = param_1 + 0xf8;
    do {
      uVar136 = *(uint *)((long)param_2 + lVar78 * 4);
      uVar128 = (uint)*(byte *)((long)param_3 + lVar78);
      if (uVar128 == 0x7f) {
        uVar128 = 0x80;
      }
      uVar142 = uVar136 >> 0x18 & 0x7f;
      uVar147 = uVar136 >> 8 & 0x3f;
      uVar157 = uVar136 >> 0x10 & 0x3f;
      if ((int)uVar136 < 0) {
        uVar71 = (uVar1 - (uVar136 & 0x3f)) * uVar128 >> 7;
        uVar130 = (uVar75 - uVar147) * uVar128 >> 7;
        uVar127 = (uVar76 - uVar157) * uVar128 >> 7;
        uVar128 = (uVar74 - uVar142) * uVar128 >> 7;
      }
      else {
        uVar128 = 0;
        uVar127 = 0;
        uVar130 = 0;
        uVar71 = 0;
      }
      *(uint *)puVar79 =
           (uVar157 + uVar127) * 0x10000 | (uVar147 + uVar130) * 0x100 |
           (uVar136 & 0x3f) + uVar71 | (uVar142 + uVar128) * 0x1000000;
      lVar78 = lVar78 + 2;
      puVar79 = (undefined8 *)((long)puVar79 + 4);
    } while (lVar78 != 0x201);
  }
  if (lVar57 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar57 - ___stack_chk_guard,0);
}


