/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_4bpp_c
 * Address  : 001a10e0
 * Program  : drastic64
 */


/* WARNING: Removing unreachable block (ram,0x001a1360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_set_visibility_4bpp_c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [11];
  undefined auVar16 [16];
  undefined auVar17 [16];
  uint uVar18;
  uint7 uVar19;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  uint uVar25;
  uint7 uVar26;
  uint uVar32;
  undefined auVar27 [11];
  uint uVar33;
  uint uVar34;
  undefined auVar31 [16];
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint7 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint7 uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  byte bVar46;
  uint uVar47;
  byte bVar48;
  uint7 uVar49;
  uint uVar50;
  byte bVar52;
  undefined8 uVar51;
  byte bVar53;
  uint3 uVar54;
  byte bVar57;
  undefined8 uVar55;
  uint uVar58;
  byte bVar59;
  ulong uVar56;
  uint uVar60;
  uint uVar61;
  uint uVar63;
  ulong uVar62;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined8 uVar65;
  byte bVar72;
  byte bVar73;
  byte bVar78;
  uint uVar74;
  byte bVar76;
  byte bVar77;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined8 uVar75;
  byte bVar82;
  byte bVar83;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined8 uVar84;
  byte bVar91;
  byte bVar92;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  ulong uVar94;
  byte bVar101;
  byte bVar102;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined8 uVar103;
  byte bVar110;
  byte bVar111;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined8 uVar112;
  byte bVar119;
  byte bVar120;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  undefined8 uVar121;
  byte bVar128;
  byte bVar129;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  undefined8 uVar130;
  byte bVar138;
  ulong uVar131;
  byte bVar139;
  byte bVar144;
  uint uVar140;
  byte bVar142;
  byte bVar143;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  undefined8 uVar141;
  byte bVar148;
  byte bVar149;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  ulong uVar151;
  byte bVar159;
  ulong uVar152;
  byte bVar160;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  undefined8 uVar162;
  byte bVar169;
  byte bVar170;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  ulong uVar172;
  byte bVar181;
  ulong uVar174;
  byte bVar182;
  byte bVar189;
  uint uVar184;
  byte bVar187;
  byte bVar188;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  undefined8 uVar185;
  byte bVar193;
  byte bVar194;
  byte bVar200;
  uint uVar195;
  byte bVar198;
  byte bVar199;
  byte bVar201;
  byte bVar203;
  byte bVar204;
  ulong uVar196;
  byte bVar205;
  uint uVar202;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined auVar15 [15];
  undefined auVar20 [12];
  undefined auVar21 [16];
  undefined auVar28 [12];
  undefined auVar29 [15];
  undefined auVar30 [16];
  uint7 uVar93;
  uint7 uVar150;
  uint uVar161;
  uint7 uVar171;
  undefined8 uVar173;
  uint uVar183;
  undefined8 uVar186;
  undefined8 uVar197;
  uint uVar211;
  uint uVar220;
  
  uVar55 = param_2[1];
  uVar51 = *param_2;
  uVar196 = param_2[3];
  uVar185 = param_2[2];
  uVar11 = NEON_neg((ulong)param_3,4);
  uVar172 = param_2[5];
  uVar162 = param_2[4];
  uVar151 = param_2[7];
  uVar141 = param_2[6];
  uVar130 = param_2[9];
  uVar121 = param_2[8];
  uVar112 = param_2[0xb];
  uVar103 = param_2[10];
  iVar1 = 0x20 - param_3;
  uVar94 = param_2[0xd];
  uVar84 = param_2[0xc];
  uVar75 = param_2[0xf];
  uVar65 = param_2[0xe];
  uVar45 = (uint)uVar185 >> 2;
  uVar47 = (uint)((ulong)uVar185 >> 0x22);
  uVar140 = (uint)(uVar196 >> 2) & 0x3fffffff;
  uVar50 = (uint)(uVar196 >> 0x22);
  uVar40 = (uint)uVar162 >> 2;
  uVar41 = (uint)((ulong)uVar162 >> 0x22);
  uVar58 = (uint)(uVar172 >> 2) & 0x3fffffff;
  uVar43 = (uint)(uVar172 >> 0x22);
  uVar35 = (uint)uVar141 >> 2;
  uVar36 = (uint)((ulong)uVar141 >> 0x22);
  uVar44 = (uint)(uVar151 >> 2) & 0x3fffffff;
  uVar39 = (uint)(uVar151 >> 0x22);
  uVar25 = (uint)uVar121 >> 2;
  uVar32 = (uint)((ulong)uVar121 >> 0x22);
  uVar33 = (uint)uVar130 >> 2;
  uVar34 = (uint)((ulong)uVar130 >> 0x22);
  uVar6 = (uint)uVar103 >> 2;
  bVar106 = (byte)((ulong)uVar103 >> 0x18);
  uVar74 = (uint)((ulong)uVar103 >> 0x22);
  bVar110 = (byte)((ulong)uVar103 >> 0x38);
  uVar7 = (uint)uVar112 >> 2;
  bVar115 = (byte)((ulong)uVar112 >> 0x18);
  uVar37 = (uint)((ulong)uVar112 >> 0x22);
  bVar119 = (byte)((ulong)uVar112 >> 0x38);
  uVar60 = (uint)uVar84 >> 2;
  uVar61 = (uint)((ulong)uVar84 >> 0x22);
  uVar184 = (uint)(uVar94 >> 2) & 0x3fffffff;
  uVar63 = (uint)(uVar94 >> 0x22);
  uVar18 = (uint)uVar65 >> 2;
  bVar68 = (byte)((ulong)uVar65 >> 0x18);
  uVar3 = (uint)((ulong)uVar65 >> 0x22);
  bVar72 = (byte)((ulong)uVar65 >> 0x38);
  uVar4 = (uint)uVar75 >> 2;
  bVar78 = (byte)((ulong)uVar75 >> 0x18);
  uVar5 = (uint)((ulong)uVar75 >> 0x22);
  bVar82 = (byte)((ulong)uVar75 >> 0x38);
  bVar206 = (byte)((uint)uVar51 >> 2) | (byte)uVar51;
  bVar207 = (byte)((uint3)((ulong)uVar51 >> 8) >> 2) | (byte)((ulong)uVar51 >> 8);
  bVar209 = (byte)((ulong)uVar51 >> 0x18);
  bVar208 = (byte)((ushort)((ulong)uVar51 >> 0x10) >> 2) | (byte)((ulong)uVar51 >> 0x10);
  bVar209 = bVar209 >> 2 | bVar209;
  bVar210 = (byte)(uint)((ulong)uVar51 >> 0x22) | (byte)((ulong)uVar51 >> 0x20);
  bVar212 = (byte)(uint3)((ulong)uVar51 >> 0x2a) | (byte)((ulong)uVar51 >> 0x28);
  bVar214 = (byte)((ulong)uVar51 >> 0x38);
  bVar213 = (byte)(ushort)((ulong)uVar51 >> 0x32) | (byte)((ulong)uVar51 >> 0x30);
  bVar214 = bVar214 >> 2 | bVar214;
  uVar211 = CONCAT13(bVar214,CONCAT12(bVar213,CONCAT11(bVar212,bVar210)));
  bVar215 = (byte)((uint)uVar55 >> 2) | (byte)uVar55;
  bVar216 = (byte)((uint3)((ulong)uVar55 >> 8) >> 2) | (byte)((ulong)uVar55 >> 8);
  bVar218 = (byte)((ulong)uVar55 >> 0x18);
  bVar217 = (byte)((ushort)((ulong)uVar55 >> 0x10) >> 2) | (byte)((ulong)uVar55 >> 0x10);
  bVar218 = bVar218 >> 2 | bVar218;
  bVar219 = (byte)(uint)((ulong)uVar55 >> 0x22) | (byte)((ulong)uVar55 >> 0x20);
  bVar221 = (byte)(uint3)((ulong)uVar55 >> 0x2a) | (byte)((ulong)uVar55 >> 0x28);
  bVar223 = (byte)((ulong)uVar55 >> 0x38);
  bVar222 = (byte)(ushort)((ulong)uVar55 >> 0x32) | (byte)((ulong)uVar55 >> 0x30);
  bVar223 = bVar223 >> 2 | bVar223;
  uVar220 = CONCAT13(bVar223,CONCAT12(bVar222,CONCAT11(bVar221,bVar219)));
  bVar182 = (byte)uVar45 | (byte)uVar185;
  bVar187 = (byte)(uVar45 >> 8) | (byte)((ulong)uVar185 >> 8);
  bVar188 = (byte)(uVar45 >> 0x10) | (byte)((ulong)uVar185 >> 0x10);
  bVar189 = (byte)((ulong)uVar185 >> 0x18);
  bVar189 = bVar189 >> 2 | bVar189;
  uVar183 = CONCAT13(bVar189,CONCAT12(bVar188,CONCAT11(bVar187,bVar182)));
  bVar190 = (byte)uVar47 | (byte)((ulong)uVar185 >> 0x20);
  bVar191 = (byte)(uVar47 >> 8) | (byte)((ulong)uVar185 >> 0x28);
  bVar193 = (byte)((ulong)uVar185 >> 0x38);
  bVar192 = (byte)(uVar47 >> 0x10) | (byte)((ulong)uVar185 >> 0x30);
  bVar193 = bVar193 >> 2 | bVar193;
  uVar186 = CONCAT17(bVar193,CONCAT16(bVar192,CONCAT15(bVar191,CONCAT14(bVar190,uVar183))));
  bVar194 = (byte)uVar140 | (byte)uVar196;
  bVar198 = (byte)(uVar140 >> 8) | (byte)(uVar196 >> 8);
  bVar199 = (byte)(uVar140 >> 0x10) | (byte)(uVar196 >> 0x10);
  bVar200 = (byte)(uVar140 >> 0x18) | (byte)(uVar196 >> 0x18);
  bVar201 = (byte)uVar50 | (byte)(uVar196 >> 0x20);
  bVar203 = (byte)(uVar50 >> 8) | (byte)(uVar196 >> 0x28);
  bVar205 = (byte)(uVar196 >> 0x38);
  bVar204 = (byte)(uVar50 >> 0x10) | (byte)(uVar196 >> 0x30);
  uVar19 = CONCAT16(bVar204,CONCAT15(bVar203,CONCAT14(bVar201,CONCAT13(bVar200,CONCAT12(bVar199,
                                                  CONCAT11(bVar198,bVar194))))));
  bVar205 = bVar205 >> 2 | bVar205;
  uVar197 = CONCAT17(bVar205,uVar19);
  bVar160 = (byte)uVar40 | (byte)uVar162;
  bVar163 = (byte)(uVar40 >> 8) | (byte)((ulong)uVar162 >> 8);
  bVar164 = (byte)(uVar40 >> 0x10) | (byte)((ulong)uVar162 >> 0x10);
  bVar165 = (byte)((ulong)uVar162 >> 0x18);
  bVar165 = bVar165 >> 2 | bVar165;
  uVar161 = CONCAT13(bVar165,CONCAT12(bVar164,CONCAT11(bVar163,bVar160)));
  bVar166 = (byte)uVar41 | (byte)((ulong)uVar162 >> 0x20);
  bVar167 = (byte)(uVar41 >> 8) | (byte)((ulong)uVar162 >> 0x28);
  bVar169 = (byte)((ulong)uVar162 >> 0x38);
  bVar168 = (byte)(uVar41 >> 0x10) | (byte)((ulong)uVar162 >> 0x30);
  bVar169 = bVar169 >> 2 | bVar169;
  uVar185 = CONCAT17(bVar169,CONCAT16(bVar168,CONCAT15(bVar167,CONCAT14(bVar166,uVar161))));
  bVar170 = (byte)uVar58 | (byte)uVar172;
  bVar175 = (byte)(uVar58 >> 8) | (byte)(uVar172 >> 8);
  bVar176 = (byte)(uVar58 >> 0x10) | (byte)(uVar172 >> 0x10);
  bVar177 = (byte)(uVar58 >> 0x18) | (byte)(uVar172 >> 0x18);
  bVar178 = (byte)uVar43 | (byte)(uVar172 >> 0x20);
  bVar179 = (byte)(uVar43 >> 8) | (byte)(uVar172 >> 0x28);
  bVar181 = (byte)(uVar172 >> 0x38);
  bVar180 = (byte)(uVar43 >> 0x10) | (byte)(uVar172 >> 0x30);
  uVar171 = CONCAT16(bVar180,CONCAT15(bVar179,CONCAT14(bVar178,CONCAT13(bVar177,CONCAT12(bVar176,
                                                  CONCAT11(bVar175,bVar170))))));
  bVar181 = bVar181 >> 2 | bVar181;
  uVar173 = CONCAT17(bVar181,uVar171);
  bVar139 = (byte)uVar35 | (byte)uVar141;
  bVar142 = (byte)(uVar35 >> 8) | (byte)((ulong)uVar141 >> 8);
  bVar143 = (byte)(uVar35 >> 0x10) | (byte)((ulong)uVar141 >> 0x10);
  bVar144 = (byte)((ulong)uVar141 >> 0x18);
  bVar144 = bVar144 >> 2 | bVar144;
  uVar202 = CONCAT13(bVar144,CONCAT12(bVar143,CONCAT11(bVar142,bVar139)));
  bVar145 = (byte)uVar36 | (byte)((ulong)uVar141 >> 0x20);
  bVar146 = (byte)(uVar36 >> 8) | (byte)((ulong)uVar141 >> 0x28);
  bVar148 = (byte)((ulong)uVar141 >> 0x38);
  bVar147 = (byte)(uVar36 >> 0x10) | (byte)((ulong)uVar141 >> 0x30);
  bVar148 = bVar148 >> 2 | bVar148;
  uVar141 = CONCAT17(bVar148,CONCAT16(bVar147,CONCAT15(bVar146,CONCAT14(bVar145,uVar202))));
  bVar149 = (byte)uVar44 | (byte)uVar151;
  bVar153 = (byte)(uVar44 >> 8) | (byte)(uVar151 >> 8);
  bVar154 = (byte)(uVar44 >> 0x10) | (byte)(uVar151 >> 0x10);
  bVar155 = (byte)(uVar44 >> 0x18) | (byte)(uVar151 >> 0x18);
  bVar156 = (byte)uVar39 | (byte)(uVar151 >> 0x20);
  bVar157 = (byte)(uVar39 >> 8) | (byte)(uVar151 >> 0x28);
  bVar159 = (byte)(uVar151 >> 0x38);
  bVar158 = (byte)(uVar39 >> 0x10) | (byte)(uVar151 >> 0x30);
  uVar150 = CONCAT16(bVar158,CONCAT15(bVar157,CONCAT14(bVar156,CONCAT13(bVar155,CONCAT12(bVar154,
                                                  CONCAT11(bVar153,bVar149))))));
  bVar159 = bVar159 >> 2 | bVar159;
  uVar162 = CONCAT17(bVar159,uVar150);
  bVar120 = (byte)uVar25 | (byte)uVar121;
  bVar122 = (byte)(uVar25 >> 8) | (byte)((ulong)uVar121 >> 8);
  bVar123 = (byte)(uVar25 >> 0x10) | (byte)((ulong)uVar121 >> 0x10);
  bVar124 = (byte)((ulong)uVar121 >> 0x18);
  bVar124 = bVar124 >> 2 | bVar124;
  uVar195 = CONCAT13(bVar124,CONCAT12(bVar123,CONCAT11(bVar122,bVar120)));
  bVar125 = (byte)uVar32 | (byte)((ulong)uVar121 >> 0x20);
  bVar126 = (byte)(uVar32 >> 8) | (byte)((ulong)uVar121 >> 0x28);
  bVar128 = (byte)((ulong)uVar121 >> 0x38);
  bVar127 = (byte)(uVar32 >> 0x10) | (byte)((ulong)uVar121 >> 0x30);
  bVar128 = bVar128 >> 2 | bVar128;
  bVar129 = (byte)uVar33 | (byte)uVar130;
  bVar132 = (byte)(uVar33 >> 8) | (byte)((ulong)uVar130 >> 8);
  bVar133 = (byte)(uVar33 >> 0x10) | (byte)((ulong)uVar130 >> 0x10);
  bVar134 = (byte)((ulong)uVar130 >> 0x18);
  bVar134 = bVar134 >> 2 | bVar134;
  uVar33 = CONCAT13(bVar134,CONCAT12(bVar133,CONCAT11(bVar132,bVar129)));
  bVar135 = (byte)uVar34 | (byte)((ulong)uVar130 >> 0x20);
  bVar136 = (byte)(uVar34 >> 8) | (byte)((ulong)uVar130 >> 0x28);
  bVar138 = (byte)((ulong)uVar130 >> 0x38);
  bVar137 = (byte)(uVar34 >> 0x10) | (byte)((ulong)uVar130 >> 0x30);
  bVar138 = bVar138 >> 2 | bVar138;
  uVar121 = CONCAT17(bVar138,CONCAT16(bVar137,CONCAT15(bVar136,CONCAT14(bVar135,uVar33))));
  bVar102 = (byte)uVar6 | (byte)uVar103;
  bVar104 = (byte)(uVar6 >> 8) | (byte)((ulong)uVar103 >> 8);
  bVar105 = (byte)(uVar6 >> 0x10) | (byte)((ulong)uVar103 >> 0x10);
  bVar106 = bVar106 >> 2 | bVar106;
  uVar43 = CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar102)));
  bVar107 = (byte)uVar74 | (byte)((ulong)uVar103 >> 0x20);
  bVar108 = (byte)(uVar74 >> 8) | (byte)((ulong)uVar103 >> 0x28);
  bVar109 = (byte)(uVar74 >> 0x10) | (byte)((ulong)uVar103 >> 0x30);
  bVar110 = bVar110 >> 2 | bVar110;
  bVar111 = (byte)uVar7 | (byte)uVar112;
  bVar113 = (byte)(uVar7 >> 8) | (byte)((ulong)uVar112 >> 8);
  bVar114 = (byte)(uVar7 >> 0x10) | (byte)((ulong)uVar112 >> 0x10);
  bVar115 = bVar115 >> 2 | bVar115;
  uVar50 = CONCAT13(bVar115,CONCAT12(bVar114,CONCAT11(bVar113,bVar111)));
  bVar116 = (byte)uVar37 | (byte)((ulong)uVar112 >> 0x20);
  bVar117 = (byte)(uVar37 >> 8) | (byte)((ulong)uVar112 >> 0x28);
  bVar118 = (byte)(uVar37 >> 0x10) | (byte)((ulong)uVar112 >> 0x30);
  bVar119 = bVar119 >> 2 | bVar119;
  bVar83 = (byte)uVar60 | (byte)uVar84;
  bVar85 = (byte)(uVar60 >> 8) | (byte)((ulong)uVar84 >> 8);
  bVar86 = (byte)(uVar60 >> 0x10) | (byte)((ulong)uVar84 >> 0x10);
  bVar87 = (byte)((ulong)uVar84 >> 0x18);
  bVar87 = bVar87 >> 2 | bVar87;
  uVar140 = CONCAT13(bVar87,CONCAT12(bVar86,CONCAT11(bVar85,bVar83)));
  bVar88 = (byte)uVar61 | (byte)((ulong)uVar84 >> 0x20);
  bVar89 = (byte)(uVar61 >> 8) | (byte)((ulong)uVar84 >> 0x28);
  bVar91 = (byte)((ulong)uVar84 >> 0x38);
  bVar90 = (byte)(uVar61 >> 0x10) | (byte)((ulong)uVar84 >> 0x30);
  bVar91 = bVar91 >> 2 | bVar91;
  uVar51 = CONCAT17(bVar91,CONCAT16(bVar90,CONCAT15(bVar89,CONCAT14(bVar88,uVar140))));
  bVar92 = (byte)uVar184 | (byte)uVar94;
  bVar95 = (byte)(uVar184 >> 8) | (byte)(uVar94 >> 8);
  bVar96 = (byte)(uVar184 >> 0x10) | (byte)(uVar94 >> 0x10);
  bVar97 = (byte)(uVar184 >> 0x18) | (byte)(uVar94 >> 0x18);
  bVar98 = (byte)uVar63 | (byte)(uVar94 >> 0x20);
  bVar99 = (byte)(uVar63 >> 8) | (byte)(uVar94 >> 0x28);
  bVar101 = (byte)(uVar94 >> 0x38);
  bVar100 = (byte)(uVar63 >> 0x10) | (byte)(uVar94 >> 0x30);
  uVar93 = CONCAT16(bVar100,CONCAT15(bVar99,CONCAT14(bVar98,CONCAT13(bVar97,CONCAT12(bVar96,CONCAT11
                                                  (bVar95,bVar92))))));
  bVar101 = bVar101 >> 2 | bVar101;
  uVar55 = CONCAT17(bVar101,uVar93);
  bVar64 = (byte)uVar18 | (byte)uVar65;
  bVar66 = (byte)(uVar18 >> 8) | (byte)((ulong)uVar65 >> 8);
  bVar67 = (byte)(uVar18 >> 0x10) | (byte)((ulong)uVar65 >> 0x10);
  bVar68 = bVar68 >> 2 | bVar68;
  uVar45 = CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar64)));
  bVar69 = (byte)uVar3 | (byte)((ulong)uVar65 >> 0x20);
  bVar70 = (byte)(uVar3 >> 8) | (byte)((ulong)uVar65 >> 0x28);
  bVar71 = (byte)(uVar3 >> 0x10) | (byte)((ulong)uVar65 >> 0x30);
  bVar72 = bVar72 >> 2 | bVar72;
  bVar73 = (byte)uVar4 | (byte)uVar75;
  bVar76 = (byte)(uVar4 >> 8) | (byte)((ulong)uVar75 >> 8);
  bVar77 = (byte)(uVar4 >> 0x10) | (byte)((ulong)uVar75 >> 0x10);
  bVar78 = bVar78 >> 2 | bVar78;
  uVar47 = CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar73)));
  bVar79 = (byte)uVar5 | (byte)((ulong)uVar75 >> 0x20);
  bVar80 = (byte)(uVar5 >> 8) | (byte)((ulong)uVar75 >> 0x28);
  bVar81 = (byte)(uVar5 >> 0x10) | (byte)((ulong)uVar75 >> 0x30);
  bVar82 = bVar82 >> 2 | bVar82;
  uVar39 = CONCAT13(bVar209,CONCAT12(bVar208,CONCAT11(bVar207,bVar206))) >> 1;
  uVar40 = uVar211 >> 1;
  uVar41 = CONCAT13(bVar218,CONCAT12(bVar217,CONCAT11(bVar216,bVar215))) >> 1;
  uVar58 = uVar220 >> 1;
  uVar172 = ((ulong)uVar19 & 0xfffffffe) >> 1;
  uVar36 = (uint)((ulong)uVar197 >> 0x21);
  uVar151 = ((ulong)uVar171 & 0xfffffffe) >> 1;
  uVar44 = (uint)((ulong)uVar173 >> 0x21);
  uVar94 = ((ulong)uVar150 & 0xfffffffe) >> 1;
  uVar35 = (uint)((ulong)uVar162 >> 0x21);
  uVar25 = uVar195 >> 1;
  uVar32 = (uint)(CONCAT17(bVar128,CONCAT16(bVar127,CONCAT15(bVar126,CONCAT14(bVar125,uVar195)))) >>
                 0x21);
  uVar33 = uVar33 >> 1;
  uVar34 = (uint)((ulong)uVar121 >> 0x21);
  uVar6 = uVar43 >> 1;
  uVar74 = (uint)(CONCAT17(bVar110,CONCAT16(bVar109,CONCAT15(bVar108,CONCAT14(bVar107,uVar43)))) >>
                 0x21);
  uVar7 = uVar50 >> 1;
  uVar37 = (uint)(CONCAT17(bVar119,CONCAT16(bVar118,CONCAT15(bVar117,CONCAT14(bVar116,uVar50)))) >>
                 0x21);
  uVar62 = ((ulong)uVar93 & 0xfffffffe) >> 1;
  uVar43 = (uint)((ulong)uVar55 >> 0x21);
  uVar18 = uVar45 >> 1;
  uVar3 = (uint)(CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar69,uVar45)))) >> 0x21)
  ;
  uVar4 = uVar47 >> 1;
  uVar5 = (uint)(CONCAT17(bVar82,CONCAT16(bVar81,CONCAT15(bVar80,CONCAT14(bVar79,uVar47)))) >> 0x21)
  ;
  bVar206 = (byte)uVar39 | bVar206;
  bVar207 = (byte)(uVar39 >> 8) | bVar207;
  bVar208 = (byte)(uVar39 >> 0x10) | bVar208;
  bVar209 = bVar209 >> 1 | bVar209;
  bVar210 = (byte)uVar40 | bVar210;
  bVar212 = (byte)(uVar40 >> 8) | bVar212;
  bVar213 = (byte)((uint3)(uVar211 >> 9) >> 8) | bVar213;
  bVar214 = bVar214 >> 1 | bVar214;
  bVar215 = (byte)uVar41 | bVar215;
  bVar216 = (byte)(uVar41 >> 8) | bVar216;
  bVar217 = (byte)(uVar41 >> 0x10) | bVar217;
  bVar218 = bVar218 >> 1 | bVar218;
  bVar219 = (byte)uVar58 | bVar219;
  bVar221 = (byte)(uVar58 >> 8) | bVar221;
  bVar222 = (byte)((uint3)(uVar220 >> 9) >> 8) | bVar222;
  bVar223 = bVar223 >> 1 | bVar223;
  bVar182 = (byte)(uVar183 >> 1) | bVar182;
  bVar187 = (byte)(uint3)(uVar183 >> 9) | bVar187;
  bVar188 = (byte)(ushort)(uVar183 >> 0x11) | bVar188;
  bVar189 = bVar189 >> 1 | bVar189;
  bVar190 = (byte)(uint)((ulong)uVar186 >> 0x21) | bVar190;
  bVar191 = (byte)(uint3)((ulong)uVar186 >> 0x29) | bVar191;
  bVar192 = (byte)(ushort)((ulong)uVar186 >> 0x31) | bVar192;
  bVar193 = bVar193 >> 1 | bVar193;
  bVar68 = bVar68 >> 1 | bVar68;
  bVar72 = bVar72 >> 1 | bVar72;
  bVar160 = (byte)(uVar161 >> 1) | bVar160;
  bVar163 = (byte)(uint3)(uVar161 >> 9) | bVar163;
  bVar164 = (byte)(ushort)(uVar161 >> 0x11) | bVar164;
  bVar165 = bVar165 >> 1 | bVar165;
  bVar166 = (byte)(uint)((ulong)uVar185 >> 0x21) | bVar166;
  bVar167 = (byte)(uint3)((ulong)uVar185 >> 0x29) | bVar167;
  bVar168 = (byte)(ushort)((ulong)uVar185 >> 0x31) | bVar168;
  bVar169 = bVar169 >> 1 | bVar169;
  bVar139 = (byte)(uVar202 >> 1) | bVar139;
  bVar142 = (byte)(uint3)(uVar202 >> 9) | bVar142;
  bVar143 = (byte)(ushort)(uVar202 >> 0x11) | bVar143;
  bVar144 = bVar144 >> 1 | bVar144;
  bVar145 = (byte)(uint)((ulong)uVar141 >> 0x21) | bVar145;
  bVar146 = (byte)(uint3)((ulong)uVar141 >> 0x29) | bVar146;
  bVar147 = (byte)(ushort)((ulong)uVar141 >> 0x31) | bVar147;
  bVar148 = bVar148 >> 1 | bVar148;
  bVar124 = bVar124 >> 1 | bVar124;
  bVar128 = bVar128 >> 1 | bVar128;
  bVar102 = (byte)uVar6 | bVar102;
  bVar104 = (byte)(uVar6 >> 8) | bVar104;
  bVar105 = (byte)(uVar6 >> 0x10) | bVar105;
  bVar106 = bVar106 >> 1 | bVar106;
  bVar107 = (byte)uVar74 | bVar107;
  bVar108 = (byte)(uVar74 >> 8) | bVar108;
  bVar109 = (byte)(uVar74 >> 0x10) | bVar109;
  bVar110 = bVar110 >> 1 | bVar110;
  bVar111 = (byte)uVar7 | bVar111;
  bVar113 = (byte)(uVar7 >> 8) | bVar113;
  bVar114 = (byte)(uVar7 >> 0x10) | bVar114;
  bVar115 = bVar115 >> 1 | bVar115;
  bVar116 = (byte)uVar37 | bVar116;
  bVar117 = (byte)(uVar37 >> 8) | bVar117;
  bVar118 = (byte)(uVar37 >> 0x10) | bVar118;
  bVar119 = bVar119 >> 1 | bVar119;
  bVar83 = (byte)(uVar140 >> 1) | bVar83;
  bVar85 = (byte)(uint3)(uVar140 >> 9) | bVar85;
  bVar86 = (byte)(ushort)(uVar140 >> 0x11) | bVar86;
  bVar87 = bVar87 >> 1 | bVar87;
  bVar88 = (byte)(uint)((ulong)uVar51 >> 0x21) | bVar88;
  bVar89 = (byte)(uint3)((ulong)uVar51 >> 0x29) | bVar89;
  bVar90 = (byte)(ushort)((ulong)uVar51 >> 0x31) | bVar90;
  bVar91 = bVar91 >> 1 | bVar91;
  bVar52 = bVar209 & 0x11;
  uVar74 = CONCAT13(bVar209,CONCAT12(bVar208,CONCAT11(bVar207,bVar206)));
  bVar53 = bVar214 & 0x11;
  uVar196 = CONCAT17(bVar214,CONCAT16(bVar213,CONCAT15(bVar212,CONCAT14(bVar210,uVar74)))) &
            0x1111111111111111;
  bVar57 = bVar218 & 0x11;
  uVar6 = CONCAT13(bVar218,CONCAT12(bVar217,CONCAT11(bVar216,bVar215)));
  bVar59 = bVar223 & 0x11;
  uVar56 = CONCAT17(bVar223,CONCAT16(bVar222,CONCAT15(bVar221,CONCAT14(bVar219,uVar6)))) &
           0x1111111111111111;
  bVar46 = bVar189 & 0x11;
  bVar48 = bVar193 & 0x11;
  uVar39 = CONCAT13(bVar193,CONCAT12(bVar192,CONCAT11(bVar191,bVar190))) & 0x11111111;
  uVar172 = CONCAT17(bVar205 >> 1 | bVar205,
                     CONCAT16((byte)((uint3)((ulong)uVar197 >> 0x29) >> 8) | bVar204,
                              CONCAT15((byte)(uVar36 >> 8) | bVar203,
                                       CONCAT14((byte)uVar36 | bVar201,
                                                CONCAT13((byte)(uVar172 >> 0x18) | bVar200,
                                                         CONCAT12((byte)(uVar172 >> 0x10) | bVar199,
                                                                  CONCAT11((byte)(uVar172 >> 8) |
                                                                           bVar198,(byte)uVar172 |
                                                                                   bVar194))))))) &
            0x1111111111111111;
  bVar194 = bVar165 & 0x11;
  bVar198 = bVar169 & 0x11;
  uVar36 = CONCAT13(bVar169,CONCAT12(bVar168,CONCAT11(bVar167,bVar166))) & 0x11111111;
  uVar151 = CONCAT17(bVar181 >> 1 | bVar181,
                     CONCAT16((byte)((uint3)((ulong)uVar173 >> 0x29) >> 8) | bVar180,
                              CONCAT15((byte)(uVar44 >> 8) | bVar179,
                                       CONCAT14((byte)uVar44 | bVar178,
                                                CONCAT13((byte)(uVar151 >> 0x18) | bVar177,
                                                         CONCAT12((byte)(uVar151 >> 0x10) | bVar176,
                                                                  CONCAT11((byte)(uVar151 >> 8) |
                                                                           bVar175,(byte)uVar151 |
                                                                                   bVar170))))))) &
            0x1111111111111111;
  bVar169 = bVar144 & 0x11;
  bVar193 = bVar148 & 0x11;
  uVar37 = CONCAT13(bVar148,CONCAT12(bVar147,CONCAT11(bVar146,bVar145))) & 0x11111111;
  uVar94 = CONCAT17(bVar159 >> 1 | bVar159,
                    CONCAT16((byte)((uint3)((ulong)uVar162 >> 0x29) >> 8) | bVar158,
                             CONCAT15((byte)(uVar35 >> 8) | bVar157,
                                      CONCAT14((byte)uVar35 | bVar156,
                                               CONCAT13((byte)(uVar94 >> 0x18) | bVar155,
                                                        CONCAT12((byte)(uVar94 >> 0x10) | bVar154,
                                                                 CONCAT11((byte)(uVar94 >> 8) |
                                                                          bVar153,(byte)uVar94 |
                                                                                  bVar149))))))) &
           0x1111111111111111;
  uVar93 = CONCAT16((byte)(uVar32 >> 0x10) | bVar127,
                    CONCAT15((byte)(uVar32 >> 8) | bVar126,
                             CONCAT14((byte)uVar32 | bVar125,
                                      CONCAT13(bVar124,CONCAT12((byte)(uVar25 >> 0x10) | bVar123,
                                                                CONCAT11((byte)(uVar25 >> 8) |
                                                                         bVar122,(byte)uVar25 |
                                                                                 bVar120))))));
  uVar26 = uVar93 & 0x11111111111111;
  bVar148 = bVar128 & 0x11;
  auVar28._0_8_ = CONCAT17(bVar128,uVar93) & 0x1111111111111111;
  auVar28[8] = ((byte)uVar33 | bVar129) & 0x11;
  auVar28[9] = ((byte)(uVar33 >> 8) | bVar132) & 0x11;
  auVar28[10] = ((byte)(uVar33 >> 0x10) | bVar133) & 0x11;
  auVar28[11] = (bVar134 >> 1 | bVar134) & 0x11;
  auVar30[12] = ((byte)uVar34 | bVar135) & 0x11;
  auVar30._0_12_ = auVar28;
  auVar30[13] = ((byte)(uVar34 >> 8) | bVar136) & 0x11;
  auVar30[14] = ((byte)((uint3)((ulong)uVar121 >> 0x29) >> 8) | bVar137) & 0x11;
  auVar30[15] = (bVar138 >> 1 | bVar138) & 0x11;
  bVar214 = bVar106 & 0x11;
  bVar218 = bVar110 & 0x11;
  bVar223 = bVar115 & 0x11;
  bVar134 = bVar87 & 0x11;
  bVar128 = bVar91 & 0x11;
  uVar62 = CONCAT17(bVar101 >> 1 | bVar101,
                    CONCAT16((byte)((uint3)((ulong)uVar55 >> 0x29) >> 8) | bVar100,
                             CONCAT15((byte)(uVar43 >> 8) | bVar99,
                                      CONCAT14((byte)uVar43 | bVar98,
                                               CONCAT13((byte)(uVar62 >> 0x18) | bVar97,
                                                        CONCAT12((byte)(uVar62 >> 0x10) | bVar96,
                                                                 CONCAT11((byte)(uVar62 >> 8) |
                                                                          bVar95,(byte)uVar62 |
                                                                                 bVar92))))))) &
           0x1111111111111111;
  uVar93 = CONCAT16((byte)(uVar3 >> 0x10) | bVar71,
                    CONCAT15((byte)(uVar3 >> 8) | bVar70,
                             CONCAT14((byte)uVar3 | bVar69,
                                      CONCAT13(bVar68,CONCAT12((byte)(uVar18 >> 0x10) | bVar67,
                                                               CONCAT11((byte)(uVar18 >> 8) | bVar66
                                                                        ,(byte)uVar18 | bVar64))))))
  ;
  uVar19 = uVar93 & 0x11111111111111;
  bVar209 = bVar72 & 0x11;
  auVar20._0_8_ = CONCAT17(bVar72,uVar93) & 0x1111111111111111;
  auVar20[8] = ((byte)uVar4 | bVar73) & 0x11;
  auVar20[9] = ((byte)(uVar4 >> 8) | bVar76) & 0x11;
  auVar20[10] = ((byte)(uVar4 >> 0x10) | bVar77) & 0x11;
  auVar20[11] = (bVar78 >> 1 | bVar78) & 0x11;
  auVar21[12] = ((byte)uVar5 | bVar79) & 0x11;
  auVar21._0_12_ = auVar20;
  auVar21[13] = ((byte)(uVar5 >> 8) | bVar80) & 0x11;
  auVar21[14] = ((byte)(uVar5 >> 0x10) | bVar81) & 0x11;
  auVar21[15] = (bVar82 >> 1 | bVar82) & 0x11;
  uVar184 = (uVar74 & 0x11111111) >> 3;
  uVar63 = (uint)(uVar196 >> 0x23);
  uVar195 = (uVar6 & 0x11111111) >> 3;
  uVar202 = (uint)(uVar56 >> 0x23);
  uVar60 = (CONCAT13(bVar189,CONCAT12(bVar188,CONCAT11(bVar187,bVar182))) & 0x11111111) >> 3;
  uVar61 = uVar39 >> 3;
  uVar174 = CONCAT44((uint)(uVar172 >> 0x23),(int)(uVar172 >> 3)) & 0xffffffff1fffffff;
  uVar140 = (CONCAT13(bVar165,CONCAT12(bVar164,CONCAT11(bVar163,bVar160))) & 0x11111111) >> 3;
  uVar50 = uVar36 >> 3;
  uVar152 = CONCAT44((uint)(uVar151 >> 0x23),(int)(uVar151 >> 3)) & 0xffffffff1fffffff;
  uVar45 = (CONCAT13(bVar144,CONCAT12(bVar143,CONCAT11(bVar142,bVar139))) & 0x11111111) >> 3;
  uVar47 = uVar37 >> 3;
  uVar131 = CONCAT44((uint)(uVar94 >> 0x23),(int)(uVar94 >> 3)) & 0xffffffff1fffffff;
  uVar44 = (uint)uVar26 >> 3;
  uVar58 = (uint)(auVar28._0_8_ >> 0x23);
  uVar35 = auVar28._8_4_ >> 3;
  uVar43 = auVar30._12_4_ >> 3;
  uVar32 = (CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar102))) & 0x11111111) >> 3;
  uVar3 = CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) & 0x11111111;
  uVar41 = uVar3 >> 3;
  uVar33 = (CONCAT13(bVar115,CONCAT12(bVar114,CONCAT11(bVar113,bVar111))) & 0x11111111) >> 3;
  uVar7 = CONCAT13(bVar119,CONCAT12(bVar118,CONCAT11(bVar117,bVar116))) & 0x11111111;
  uVar18 = (CONCAT13(bVar87,CONCAT12(bVar86,CONCAT11(bVar85,bVar83))) & 0x11111111) >> 3;
  uVar4 = (CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar88))) & 0x11111111) >> 3;
  uVar5 = (uint)uVar62 >> 3;
  bVar106 = (byte)(uVar62 >> 0x18);
  uVar6 = (uint)(uVar62 >> 0x23);
  bVar110 = (byte)(uVar62 >> 0x38);
  uVar34 = (uint)uVar19 >> 3;
  uVar40 = (uint)(auVar20._0_8_ >> 0x23);
  uVar74 = auVar20._8_4_ >> 3;
  uVar25 = auVar21._12_4_ >> 3;
  bVar91 = (byte)uVar184 | bVar206 & 0x11;
  bVar64 = (byte)(uVar184 >> 0x10) | bVar208 & 0x11;
  bVar66 = (byte)uVar63 | bVar210 & 0x11;
  bVar67 = (byte)((uint3)(uVar196 >> 0x2b) >> 8) | bVar213 & 0x11;
  uVar38 = CONCAT16(bVar67,CONCAT15((byte)(uVar63 >> 8) | bVar212 & 0x11,
                                    CONCAT14(bVar66,CONCAT13(bVar52 >> 3 | bVar52,
                                                             CONCAT12(bVar64,CONCAT11((byte)(uVar184
                                                                                            >> 8) |
                                                                                      bVar207 & 0x11
                                                                                      ,bVar91))))));
  uVar103 = CONCAT17(bVar53 >> 3 | bVar53,uVar38);
  bVar69 = (byte)uVar195 | bVar215 & 0x11;
  bVar70 = (byte)(uVar195 >> 0x10) | bVar217 & 0x11;
  bVar71 = (byte)uVar202 | bVar219 & 0x11;
  bVar222 = (byte)((uint3)(uVar56 >> 0x2b) >> 8) | bVar222 & 0x11;
  uVar42 = CONCAT16(bVar222,CONCAT15((byte)(uVar202 >> 8) | bVar221 & 0x11,
                                     CONCAT14(bVar71,CONCAT13(bVar57 >> 3 | bVar57,
                                                              CONCAT12(bVar70,CONCAT11((byte)(
                                                  uVar195 >> 8) | bVar216 & 0x11,bVar69))))));
  uVar112 = CONCAT17(bVar59 >> 3 | bVar59,uVar42);
  bVar213 = (byte)uVar60 | bVar182 & 0x11;
  bVar53 = (byte)(uVar60 >> 0x10) | bVar188 & 0x11;
  uVar60 = CONCAT13(bVar46 >> 3 | bVar46,
                    CONCAT12(bVar53,CONCAT11((byte)(uVar60 >> 8) | bVar187 & 0x11,bVar213)));
  bVar215 = (byte)((uint3)(uVar39 >> 0xb) >> 8) | bVar192 & 0x11;
  uVar8 = CONCAT12(bVar48 >> 3 | bVar48,CONCAT11(bVar215,(byte)(uVar61 >> 8) | bVar191 & 0x11));
  bVar216 = (byte)(uVar172 >> 3) | (byte)uVar172;
  bVar217 = (byte)(uVar174 >> 0x10) | (byte)(uVar172 >> 0x10);
  bVar57 = (byte)(uVar174 >> 0x20) | (byte)(uVar172 >> 0x20);
  bVar219 = (byte)(uVar174 >> 0x30) | (byte)(uVar172 >> 0x30);
  uVar171 = CONCAT16(bVar219,CONCAT15((byte)(uVar174 >> 0x28) | (byte)(uVar172 >> 0x28),
                                      CONCAT14(bVar57,CONCAT13((byte)(uVar174 >> 0x18) |
                                                               (byte)(uVar172 >> 0x18),
                                                               CONCAT12(bVar217,CONCAT11((byte)(
                                                  uVar174 >> 8) | (byte)(uVar172 >> 8),bVar216))))))
  ;
  uVar84 = CONCAT17((byte)(uVar174 >> 0x38) | (byte)(uVar172 >> 0x38),uVar171);
  bVar48 = (byte)uVar140 | bVar160 & 0x11;
  bVar206 = (byte)(uVar140 >> 0x10) | bVar164 & 0x11;
  uVar140 = CONCAT13(bVar194 >> 3 | bVar194,
                     CONCAT12(bVar206,CONCAT11((byte)(uVar140 >> 8) | bVar163 & 0x11,bVar48)));
  bVar207 = (byte)((uint3)(uVar36 >> 0xb) >> 8) | bVar168 & 0x11;
  uVar9 = CONCAT12(bVar198 >> 3 | bVar198,CONCAT11(bVar207,(byte)(uVar50 >> 8) | bVar167 & 0x11));
  bVar208 = (byte)(uVar151 >> 3) | (byte)uVar151;
  bVar52 = (byte)(uVar152 >> 0x10) | (byte)(uVar151 >> 0x10);
  bVar210 = (byte)(uVar152 >> 0x20) | (byte)(uVar151 >> 0x20);
  bVar212 = (byte)(uVar152 >> 0x30) | (byte)(uVar151 >> 0x30);
  uVar150 = CONCAT16(bVar212,CONCAT15((byte)(uVar152 >> 0x28) | (byte)(uVar151 >> 0x28),
                                      CONCAT14(bVar210,CONCAT13((byte)(uVar152 >> 0x18) |
                                                                (byte)(uVar151 >> 0x18),
                                                                CONCAT12(bVar52,CONCAT11((byte)(
                                                  uVar152 >> 8) | (byte)(uVar151 >> 8),bVar208))))))
  ;
  uVar75 = CONCAT17((byte)(uVar152 >> 0x38) | (byte)(uVar151 >> 0x38),uVar150);
  bVar198 = (byte)uVar45 | bVar139 & 0x11;
  bVar182 = (byte)(uVar45 >> 0x10) | bVar143 & 0x11;
  uVar45 = CONCAT13(bVar169 >> 3 | bVar169,
                    CONCAT12(bVar182,CONCAT11((byte)(uVar45 >> 8) | bVar142 & 0x11,bVar198)));
  bVar187 = (byte)((uint3)(uVar37 >> 0xb) >> 8) | bVar147 & 0x11;
  uVar10 = CONCAT12(bVar193 >> 3 | bVar193,CONCAT11(bVar187,(byte)(uVar47 >> 8) | bVar146 & 0x11));
  bVar188 = (byte)(uVar94 >> 3) | (byte)uVar94;
  bVar46 = (byte)(uVar131 >> 0x10) | (byte)(uVar94 >> 0x10);
  bVar191 = (byte)(uVar131 >> 0x20) | (byte)(uVar94 >> 0x20);
  bVar192 = (byte)(uVar131 >> 0x30) | (byte)(uVar94 >> 0x30);
  uVar93 = CONCAT16(bVar192,CONCAT15((byte)(uVar131 >> 0x28) | (byte)(uVar94 >> 0x28),
                                     CONCAT14(bVar191,CONCAT13((byte)(uVar131 >> 0x18) |
                                                               (byte)(uVar94 >> 0x18),
                                                               CONCAT12(bVar46,CONCAT11((byte)(
                                                  uVar131 >> 8) | (byte)(uVar94 >> 8),bVar188))))));
  uVar65 = CONCAT17((byte)(uVar131 >> 0x38) | (byte)(uVar94 >> 0x38),uVar93);
  bVar163 = (byte)uVar44 | (byte)uVar26;
  bVar164 = (byte)(uVar44 >> 0x10) | (byte)(uVar26 >> 0x10);
  bVar194 = (byte)((uint3)(auVar28._0_8_ >> 0x2b) >> 8) | (byte)(uVar26 >> 0x30);
  bVar115 = (byte)uVar35 | auVar28[8];
  bVar167 = (byte)(uVar35 >> 0x10) | auVar28[10];
  uVar39 = CONCAT13(auVar28[11] >> 3 | auVar28[11],
                    CONCAT12(bVar167,CONCAT11((byte)(uVar35 >> 8) | auVar28[9],bVar115)));
  bVar72 = (byte)uVar43 | auVar30[12];
  bVar168 = (byte)((uint3)(auVar30._13_3_ >> 3) >> 8) | auVar30[14];
  uVar55 = CONCAT17(auVar30[15] >> 3 | auVar30[15],
                    CONCAT16(bVar168,CONCAT15((byte)(uVar43 >> 8) | auVar30[13],
                                              CONCAT14(bVar72,uVar39))));
  bVar143 = (byte)uVar32 | bVar102 & 0x11;
  bVar169 = (byte)(uVar32 >> 0x10) | bVar105 & 0x11;
  bVar146 = (byte)((uint3)(uVar3 >> 0xb) >> 8) | bVar109 & 0x11;
  bVar147 = (byte)uVar33 | bVar111 & 0x11;
  bVar193 = (byte)(uVar33 >> 0x10) | bVar114 & 0x11;
  bVar160 = (byte)((uint3)(uVar7 >> 0xb) >> 8) | bVar118 & 0x11;
  bVar78 = (byte)uVar18 | bVar83 & 0x11;
  bVar82 = (byte)(uVar18 >> 0x10) | bVar86 & 0x11;
  bVar189 = (byte)uVar4 | bVar88 & 0x11;
  bVar165 = (byte)(uVar4 >> 0x10) | bVar90 & 0x11;
  bVar144 = (byte)uVar5 | (byte)uVar62;
  bVar87 = (byte)(uVar5 >> 0x10) | (byte)(uVar62 >> 0x10);
  bVar102 = (byte)(uVar6 >> 0x10) | (byte)(uVar62 >> 0x30);
  bVar105 = (byte)uVar34 | (byte)uVar19;
  bVar109 = (byte)(uVar34 >> 0x10) | (byte)(uVar19 >> 0x10);
  bVar111 = (byte)((uint3)(auVar20._0_8_ >> 0x2b) >> 8) | (byte)(uVar19 >> 0x30);
  bVar114 = (byte)uVar74 | auVar20[8];
  bVar118 = (byte)(uVar74 >> 0x10) | auVar20[10];
  uVar35 = CONCAT13(auVar20[11] >> 3 | auVar20[11],
                    CONCAT12(bVar118,CONCAT11((byte)(uVar74 >> 8) | auVar20[9],bVar114)));
  bVar139 = (byte)uVar25 | auVar21[12];
  bVar142 = (byte)((uint3)(auVar21._13_3_ >> 3) >> 8) | auVar21[14];
  uVar51 = CONCAT17(auVar21[15] >> 3 | auVar21[15],
                    CONCAT16(bVar142,CONCAT15((byte)(uVar25 >> 8) | auVar21[13],
                                              CONCAT14(bVar139,uVar35))));
  uVar196 = ((ulong)uVar38 & 0xffffffc0) >> 6;
  uVar56 = ((ulong)uVar42 & 0xffffffc0) >> 6;
  uVar172 = ((ulong)uVar171 & 0xffffffc0) >> 6;
  uVar151 = ((ulong)uVar150 & 0xffffffc0) >> 6;
  uVar94 = ((ulong)uVar93 & 0xffffffc0) >> 6;
  uVar36 = CONCAT13((bVar124 & 0x11) >> 3 | (byte)(uVar26 >> 0x18),
                    CONCAT12(bVar164,CONCAT11((byte)(uVar44 >> 8) | (byte)(uVar26 >> 8),bVar163)))
           >> 6;
  uVar44 = (uint)(((ulong)CONCAT12(bVar148 >> 3 | bVar148,
                                   CONCAT11(bVar194,(byte)(uVar58 >> 8) | (byte)(uVar26 >> 0x28)))
                  << 0x28) >> 0x26);
  uVar39 = uVar39 >> 6;
  uVar37 = CONCAT13(bVar214 >> 3 | bVar214,
                    CONCAT12(bVar169,CONCAT11((byte)(uVar32 >> 8) | bVar104 & 0x11,bVar143))) >> 6;
  uVar25 = (uint)(((ulong)CONCAT12(bVar218 >> 3 | bVar218,
                                   CONCAT11(bVar146,(byte)(uVar41 >> 8) | bVar108 & 0x11)) << 0x28)
                 >> 0x26);
  uVar32 = CONCAT13(bVar223 >> 3 | bVar223,
                    CONCAT12(bVar193,CONCAT11((byte)(uVar33 >> 8) | bVar113 & 0x11,bVar147))) >> 6;
  uVar33 = (uint)(((ulong)CONCAT12((byte)(uVar7 >> 0x1b) | bVar119 & 0x11,
                                   CONCAT11(bVar160,(byte)((uVar7 >> 3) >> 8) | bVar117 & 0x11)) <<
                  0x28) >> 0x26);
  uVar3 = CONCAT13(bVar134 >> 3 | bVar134,
                   CONCAT12(bVar82,CONCAT11((byte)(uVar18 >> 8) | bVar85 & 0x11,bVar78))) >> 6;
  uVar4 = CONCAT13(bVar128 >> 3 | bVar128,
                   CONCAT12(bVar165,CONCAT11((byte)(uVar4 >> 8) | bVar89 & 0x11,bVar189))) >> 6;
  uVar5 = CONCAT13(bVar106 >> 3 | bVar106,
                   CONCAT12(bVar87,CONCAT11((byte)(uVar5 >> 8) | (byte)(uVar62 >> 8),bVar144))) >> 6
  ;
  uVar74 = (uint)(((ulong)CONCAT12(bVar110 >> 3 | bVar110,
                                   CONCAT11(bVar102,(byte)(uVar6 >> 8) | (byte)(uVar62 >> 0x28))) <<
                  0x28) >> 0x26);
  uVar18 = CONCAT13((bVar68 & 0x11) >> 3 | (byte)(uVar19 >> 0x18),
                    CONCAT12(bVar109,CONCAT11((byte)(uVar34 >> 8) | (byte)(uVar19 >> 8),bVar105)))
           >> 6;
  uVar34 = (uint)(((ulong)CONCAT12(bVar209 >> 3 | bVar209,
                                   CONCAT11(bVar111,(byte)(uVar40 >> 8) | (byte)(uVar19 >> 0x28)))
                  << 0x28) >> 0x26);
  uVar35 = uVar35 >> 6;
  bVar115 = (byte)uVar39 | bVar115;
  bVar72 = (byte)(uint)((ulong)uVar55 >> 0x26) | bVar72;
  uVar54 = CONCAT12((byte)(uVar56 >> 0x10) | bVar70,(ushort)(((byte)uVar56 | bVar69) & 0xf)) &
           0xf00ff;
  uVar93 = CONCAT16((byte)((uint3)((ulong)uVar84 >> 0x2e) >> 8) | bVar219,
                    (uint6)(CONCAT14((byte)(uint)((ulong)uVar84 >> 0x26) | bVar57,
                                     (uint)(CONCAT12((byte)(uVar172 >> 0x10) | bVar217,
                                                     (ushort)(((byte)uVar172 | bVar216) & 0xf)) &
                                           0xf00ff)) & 0xf00ffffff));
  uVar49 = uVar93 & 0xf00ffffffffff;
  uVar150 = CONCAT16((byte)((uint3)((ulong)uVar75 >> 0x2e) >> 8) | bVar212,
                     (uint6)(CONCAT14((byte)(uint)((ulong)uVar75 >> 0x26) | bVar210,
                                      (uint)(CONCAT12((byte)(uVar151 >> 0x10) | bVar52,
                                                      (ushort)(((byte)uVar151 | bVar208) & 0xf)) &
                                            0xf00ff)) & 0xf00ffffff));
  uVar42 = uVar150 & 0xf00ffffffffff;
  uVar171 = CONCAT16((byte)((uint3)((ulong)uVar65 >> 0x2e) >> 8) | bVar192,
                     (uint6)(CONCAT14((byte)(uint)((ulong)uVar65 >> 0x26) | bVar191,
                                      (uint)(CONCAT12((byte)(uVar94 >> 0x10) | bVar46,
                                                      (ushort)(((byte)uVar94 | bVar188) & 0xf)) &
                                            0xf00ff)) & 0xf00ffffff));
  uVar38 = uVar171 & 0xf00ffffffffff;
  uVar26 = CONCAT16((byte)(uVar44 >> 0x10) | bVar194,
                    (uint6)(CONCAT14((byte)uVar44 | (byte)uVar58 | (byte)(uVar26 >> 0x20),
                                     (uint)(CONCAT12((byte)(uVar36 >> 0x10) | bVar164,
                                                     (ushort)(((byte)uVar36 | bVar163) & 0xf)) &
                                           0xf00ff)) & 0xf00ffffff)) & 0xf00ffffffffff;
  auVar27._0_10_ = (unkuint10)(bVar115 & 0xf) << 0x40;
  auVar27[10] = ((byte)(uVar39 >> 0x10) | bVar167) & 0xf;
  auVar29[11] = 0;
  auVar29._0_11_ = auVar27;
  auVar29[12] = bVar72 & 0xf;
  auVar29[13] = 0;
  auVar29[14] = ((byte)((uint3)((ulong)uVar55 >> 0x2e) >> 8) | bVar168) & 0xf;
  auVar14._0_8_ =
       (ulong)(CONCAT16((byte)(uVar34 >> 0x10) | bVar111,
                        (uint6)(CONCAT14((byte)uVar34 | (byte)uVar40 | (byte)(uVar19 >> 0x20),
                                         (uint)(CONCAT12((byte)(uVar18 >> 0x10) | bVar109,
                                                         (ushort)(byte)((byte)uVar18 | bVar105)) &
                                               0xf00ff)) & 0xf00ffffff)) & 0xf00ffffffffff) &
       0xffffffffff000f;
  auVar14[8] = ((byte)uVar35 | bVar114) & 0xf;
  auVar14[9] = 0;
  auVar14[10] = ((byte)(uVar35 >> 0x10) | bVar118) & 0xf;
  auVar15[11] = 0;
  auVar15._0_11_ = auVar14;
  auVar15[12] = ((byte)(uint)((ulong)uVar51 >> 0x26) | bVar139) & 0xf;
  auVar15[13] = 0;
  auVar15[14] = ((byte)((uint3)((ulong)uVar51 >> 0x2e) >> 8) | bVar142) & 0xf;
  uVar18 = *(uint *)(param_2 + 0x10) | *(uint *)(param_2 + 0x10) >> 2;
  uVar18 = (uVar18 | uVar18 >> 1) & 0x11111111;
  uVar19 = CONCAT16((byte)uVar74 | (byte)uVar6 | (byte)(uVar62 >> 0x20),
                    (uint6)(CONCAT14((byte)uVar5 | bVar144,
                                     (uint)(CONCAT12((byte)uVar4 | bVar189,
                                                     (ushort)(((byte)uVar3 | bVar78) & 0xf)) &
                                           0xfffff)) & 0xf00ff00ff)) & 0xf00ffffffffff;
  uVar94 = CONCAT17((byte)uVar33 | (byte)(uVar7 >> 3) | bVar116 & 0x11,
                    CONCAT16((byte)uVar32 | bVar147,
                             CONCAT15((byte)uVar25 | (byte)uVar41 | bVar107 & 0x11,
                                      CONCAT14((byte)uVar37 | bVar143,
                                               CONCAT13(bVar72,CONCAT12(bVar115,CONCAT11((char)(
                                                  uVar26 >> 0x20),(char)uVar26))))))) &
           0xf0f0f0f0f0fffff;
  uVar18 = uVar18 | uVar18 >> 3;
  auVar16._0_8_ =
       CONCAT17((byte)(((uint3)(uVar93 >> 0x20) & 0xf00ff) >> 0xc) | (byte)(uVar49 >> 0x20),
                CONCAT16((byte)((uint)uVar49 >> 0xc) | (byte)uVar49,
                         CONCAT15((byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar8 >> 0xe) |
                                                                bVar215) & 0xf) << 0x10) >> 0xc) |
                                  ((byte)(uint)(((ulong)uVar8 << 0x28) >> 0x26) |
                                  (byte)uVar61 | bVar190 & 0x11) & 0xf,
                                  CONCAT14((byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar60 >>
                                                                                        0x16) |
                                                                         bVar53) & 0xf) << 0x10) >>
                                                         0xc) |
                                           ((byte)(uVar60 >> 6) | bVar213) & 0xf,
                                           CONCAT13((byte)(((uint3)(((uint7)(byte)((byte)((uint3)((
                                                  ulong)uVar112 >> 0x2e) >> 8) | bVar222) << 0x30)
                                                  >> 0x20) & 0xfffff) >> 0xc) |
                                                  ((byte)(uint)((ulong)uVar112 >> 0x26) | bVar71) &
                                                  0xf,CONCAT12((byte)(uVar54 >> 0xc) | (byte)uVar54,
                                                               CONCAT11((byte)(((uint3)(((uint7)(
                                                  byte)((byte)((uint3)((ulong)uVar103 >> 0x2e) >> 8)
                                                       | bVar67) << 0x30) >> 0x20) & 0xf00ff) >> 0xc
                                                  ) | ((byte)(uint)((ulong)uVar103 >> 0x26) | bVar66
                                                      ) & 0xf,
                                                  (byte)((uint3)(((byte)((byte)(uVar196 >> 0x10) |
                                                                        bVar64) & 0xf) << 0x10) >>
                                                        0xc) | ((byte)uVar196 | bVar91) & 0xf)))))))
  ;
  auVar16[8] = (byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar140 >> 0x16) | bVar206) & 0xf) <<
                                     0x10) >> 0xc) | ((byte)(uVar140 >> 6) | bVar48) & 0xf;
  auVar16[9] = (byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar9 >> 0xe) | bVar207) & 0xf) << 0x10
                                     ) >> 0xc) |
               ((byte)(uint)(((ulong)uVar9 << 0x28) >> 0x26) | (byte)uVar50 | bVar166 & 0x11) & 0xf;
  auVar16[10] = (byte)((uint)uVar42 >> 0xc) | (byte)uVar42;
  auVar16[11] = (byte)(((uint3)(uVar150 >> 0x20) & 0xf00ff) >> 0xc) | (byte)(uVar42 >> 0x20);
  auVar16[12] = (byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar45 >> 0x16) | bVar182) & 0xf) <<
                                      0x10) >> 0xc) | ((byte)(uVar45 >> 6) | bVar198) & 0xf;
  auVar16[13] = (byte)(ushort)((uint3)(((byte)((byte)(ushort)(uVar10 >> 0xe) | bVar187) & 0xf) <<
                                      0x10) >> 0xc) |
                ((byte)(uint)(((ulong)uVar10 << 0x28) >> 0x26) | (byte)uVar47 | bVar145 & 0x11) &
                0xf;
  auVar16[14] = (byte)((uint)uVar38 >> 0xc) | (byte)uVar38;
  auVar16[15] = (byte)(((uint3)(uVar171 >> 0x20) & 0xf00ff) >> 0xc) | (byte)(uVar38 >> 0x20);
  bVar106 = (byte)((uint3)(((byte)((byte)(uVar3 >> 0x10) | bVar82) & 0xf) << 0x10) >> 0xc) |
            (byte)uVar19;
  bVar110 = (byte)((uint3)(((byte)((byte)(uVar4 >> 0x10) | bVar165) & 0xf) << 0x10) >> 0xc) |
            (byte)(uVar19 >> 0x10);
  bVar115 = (byte)((uint3)(((byte)((byte)(uVar5 >> 0x10) | bVar87) & 0xf) << 0x10) >> 0xc) |
            (byte)(uVar19 >> 0x20);
  bVar119 = (byte)((uint3)(((byte)((byte)(uVar74 >> 0x10) | bVar102) & 0xf) << 0x10) >> 0xc) |
            (byte)(uVar19 >> 0x30);
  bVar68 = (byte)((uint)auVar14._0_8_ >> 0xc) | (byte)auVar14._0_8_;
  bVar72 = (byte)(uint)(auVar14._0_8_ >> 0x2c) | (byte)(auVar14._0_8_ >> 0x20);
  bVar78 = (byte)(auVar14._8_3_ >> 0xc) | auVar14[8];
  bVar82 = (byte)(auVar15._12_3_ >> 0xc) | auVar15[12];
  uVar18 = (uVar18 | uVar18 >> 6) & 0xf000f;
  auVar22._4_4_ = iVar1;
  auVar22._0_4_ = iVar1;
  auVar22._8_4_ = iVar1;
  auVar22._12_4_ = iVar1;
  auVar12._0_4_ = (undefined4)uVar11;
  auVar12._4_4_ = auVar12._0_4_;
  auVar12._8_4_ = auVar12._0_4_;
  auVar12._12_4_ = auVar12._0_4_;
  uStack_2c = (undefined4)((ulong)auVar16._0_8_ >> 0x20);
  auVar23[5] = bVar110;
  auVar23[4] = bVar106;
  auVar23[6] = bVar115;
  auVar23[7] = bVar119;
  uVar2 = CONCAT13((byte)(auVar29._12_3_ >> 0xc) | (byte)(uVar94 >> 0x18),
                   CONCAT12((byte)(auVar27._8_3_ >> 0xc) | (byte)(uVar94 >> 0x10),
                            CONCAT11((byte)(uint3)(uVar26 >> 0x2c) | (byte)(uVar94 >> 8),
                                     (byte)((uint)uVar26 >> 0xc) | (byte)uVar94)));
  uStack_1c = (undefined4)
              (CONCAT17((byte)((uint3)(((byte)((byte)(uVar33 >> 0x10) | bVar160) & 0xf) << 0x10) >>
                              0xc) | (byte)(uVar94 >> 0x38),
                        CONCAT16((byte)((uint3)(((byte)((byte)(uVar32 >> 0x10) | bVar193) & 0xf) <<
                                               0x10) >> 0xc) | (byte)(uVar94 >> 0x30),
                                 CONCAT15((byte)((uint3)(((byte)((byte)(uVar25 >> 0x10) | bVar146) &
                                                         0xf) << 0x10) >> 0xc) |
                                          (byte)(uVar94 >> 0x28),
                                          CONCAT14((byte)((uint3)(((byte)((byte)(uVar37 >> 0x10) |
                                                                         bVar169) & 0xf) << 0x10) >>
                                                         0xc) | (byte)(uVar94 >> 0x20),uVar2)))) >>
              0x20);
  auVar31._4_8_ = auVar16._8_8_;
  auVar31._0_4_ = uStack_2c;
  auVar31._12_4_ = uVar2;
  auVar13._4_4_ = uStack_1c;
  auVar13._0_4_ = uVar2;
  auVar13[8] = bVar106;
  auVar23._0_4_ = uStack_1c;
  auVar23[8] = bVar68;
  auVar16 = NEON_ushl(auVar16,auVar12,4);
  auVar31 = NEON_sshl(auVar31,auVar22,4);
  auVar13[9] = bVar110;
  auVar13[10] = bVar115;
  auVar13[11] = bVar119;
  auVar13[12] = bVar68;
  auVar13[13] = bVar72;
  auVar13[14] = bVar78;
  auVar13[15] = bVar82;
  auVar13 = NEON_ushl(auVar13,auVar12,4);
  auVar23[9] = bVar72;
  auVar23[10] = bVar78;
  auVar23[11] = bVar82;
  auVar23[12] = (byte)uVar18 | (byte)(uVar18 >> 0xc);
  auVar23[13] = (char)((uint)local_10 >> 8);
  auVar23[14] = (char)((uint)local_10 >> 0x10);
  auVar23[15] = (char)((uint)local_10 >> 0x18);
  auVar23 = NEON_sshl(auVar23,auVar22,4);
  auVar17._0_8_ =
       CONCAT17(auVar16[7] | auVar31[7],
                CONCAT16(auVar16[6] | auVar31[6],
                         CONCAT15(auVar16[5] | auVar31[5],
                                  CONCAT14(auVar16[4] | auVar31[4],
                                           CONCAT13(auVar16[3] | auVar31[3],
                                                    CONCAT12(auVar16[2] | auVar31[2],
                                                             CONCAT11(auVar16[1] | auVar31[1],
                                                                      auVar16[0] | auVar31[0])))))))
  ;
  auVar17[8] = auVar16[8] | auVar31[8];
  auVar17[9] = auVar16[9] | auVar31[9];
  auVar17[10] = auVar16[10] | auVar31[10];
  auVar17[11] = auVar16[11] | auVar31[11];
  auVar17[12] = auVar16[12] | auVar31[12];
  auVar17[13] = auVar16[13] | auVar31[13];
  auVar17[14] = auVar16[14] | auVar31[14];
  auVar17[15] = auVar16[15] | auVar31[15];
  auVar24._0_8_ =
       CONCAT17(auVar23[7] | auVar13[7],
                CONCAT16(auVar23[6] | auVar13[6],
                         CONCAT15(auVar23[5] | auVar13[5],
                                  CONCAT14(auVar23[4] | auVar13[4],
                                           CONCAT13(auVar23[3] | auVar13[3],
                                                    CONCAT12(auVar23[2] | auVar13[2],
                                                             CONCAT11(auVar23[1] | auVar13[1],
                                                                      auVar23[0] | auVar13[0])))))))
  ;
  auVar24[8] = auVar23[8] | auVar13[8];
  auVar24[9] = auVar23[9] | auVar13[9];
  auVar24[10] = auVar23[10] | auVar13[10];
  auVar24[11] = auVar23[11] | auVar13[11];
  auVar24[12] = auVar23[12] | auVar13[12];
  auVar24[13] = auVar23[13] | auVar13[13];
  auVar24[14] = auVar23[14] | auVar13[14];
  auVar24[15] = auVar23[15] | auVar13[15];
  param_1[1] = auVar17._8_8_;
  *param_1 = auVar17._0_8_;
  param_1[3] = auVar24._8_8_;
  param_1[2] = auVar24._0_8_;
  return;
}


