/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_blend_c
 * Address  : 001498c0
 * Program  : drastic64
 */


void render_polygon_alpha_blend_c
               (undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  uint3 uVar15;
  uint3 uVar16;
  undefined6 uVar17;
  bool bVar18;
  bool bVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  uint uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  byte bVar40;
  undefined8 uVar39;
  uint uVar41;
  uint uVar42;
  byte bVar44;
  undefined8 uVar43;
  uint uVar45;
  uint uVar46;
  undefined8 uVar47;
  uint uVar48;
  uint uVar49;
  undefined8 uVar50;
  uint uVar51;
  char cVar52;
  char cVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar58;
  undefined8 uVar57;
  uint uVar59;
  uint uVar60;
  undefined8 uVar61;
  uint uVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  int3 iVar67;
  uint uVar68;
  int iVar70;
  undefined8 uVar69;
  uint uVar71;
  int iVar72;
  uint uVar73;
  int iVar75;
  undefined8 uVar74;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined auVar81 [16];
  undefined auVar82 [16];
  byte bVar83;
  byte bVar88;
  byte bVar90;
  uint uVar84;
  byte bVar87;
  byte bVar89;
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
  undefined auVar86 [16];
  byte bVar105;
  uint uVar106;
  uint uVar107;
  int iVar108;
  int iVar109;
  uint uVar110;
  uint uVar111;
  int iVar112;
  int3 iVar113;
  uint uVar114;
  undefined8 uVar115;
  int iVar116;
  uint uVar117;
  undefined8 uVar118;
  int3 iVar119;
  uint uVar120;
  int iVar121;
  int iVar122;
  uint uVar123;
  int iVar124;
  int3 iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  uint uVar129;
  undefined8 uVar130;
  uint uVar131;
  undefined8 uVar132;
  int3 iVar133;
  uint uVar134;
  uint uVar135;
  int iVar136;
  int iVar137;
  uint uVar138;
  uint uVar139;
  int iVar140;
  int3 iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  uint uVar145;
  uint uVar146;
  uint uVar148;
  uint uVar149;
  undefined auVar147 [16];
  uint uVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int3 iVar154;
  uint uVar155;
  int iVar157;
  undefined8 uVar156;
  uint uVar158;
  int iVar159;
  uint uVar160;
  int iVar162;
  undefined8 uVar161;
  uint uVar163;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  ushort uVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  uint uVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  int3 iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  uint uVar185;
  uint uVar186;
  uint uVar187;
  uint uVar188;
  ushort uVar189;
  ushort uVar190;
  uint uVar191;
  uint uVar192;
  uint uVar193;
  uint uVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  uint uStack_3c;
  uint uStack_34;
  undefined auVar85 [14];
  
  if (param_3 == 0) {
    return;
  }
  bVar18 = param_4 < (undefined8 *)((long)param_1 + (ulong)param_3 * 4);
  puVar22 = (undefined8 *)((long)param_4 + (ulong)param_3);
  uVar20 = (long)param_1 + (0x3f - (long)param_2);
  bVar19 = param_4 < (undefined8 *)((long)param_2 + (ulong)param_3 * 4);
  if ((((!bVar18 || puVar22 <= param_1) && 0x7d < uVar20) &&
      (bVar18 && puVar22 > param_1 || uVar20 != 0x7e)) &&
      (((!bVar19 || puVar22 <= param_2) && 0xd < param_3 - 1) &&
      (bVar19 && puVar22 > param_2 || param_3 - 1 != 0xe))) {
    puVar21 = param_1;
    puVar22 = param_2;
    puVar24 = param_4;
    do {
      bVar18 = puVar22 != param_2 + (ulong)((param_3 >> 4) - 1) * 8;
      uVar61 = puVar22[1];
      uVar57 = *puVar22;
      uVar118 = puVar22[3];
      uVar115 = puVar22[2];
      uVar132 = puVar22[5];
      uVar130 = puVar22[4];
      uVar74 = puVar22[7];
      uVar69 = puVar22[6];
      puVar22 = puVar22 + 8;
      uVar15 = CONCAT12((char)((ulong)uVar115 >> 0x38),(short)((ulong)uVar115 >> 0x18)) & 0xff00ff;
      uVar50 = puVar21[1];
      uVar47 = *puVar21;
      uVar16 = CONCAT12((char)((ulong)uVar69 >> 0x38),(short)((ulong)uVar69 >> 0x18)) & 0xff00ff;
      uVar43 = puVar21[3];
      uVar39 = puVar21[2];
      uVar36 = puVar21[5];
      uVar35 = puVar21[4];
      auVar81._0_8_ =
           CONCAT17((char)((ulong)uVar118 >> 0x38),
                    CONCAT16((char)((ulong)uVar118 >> 0x18),
                             CONCAT15((char)(uVar15 >> 0x10),
                                      CONCAT14((char)uVar15,
                                               CONCAT13((char)((ulong)uVar61 >> 0x38),
                                                        CONCAT12((char)((ulong)uVar61 >> 0x18),
                                                                 CONCAT11((char)((ulong)uVar57 >>
                                                                                0x38),
                                                                          (char)((ulong)uVar57 >>
                                                                                0x18)))))))) &
           0x1f1f1f1f1f1f1f1f;
      auVar81[8] = (byte)((ulong)uVar130 >> 0x18) & 0x1f;
      auVar81[9] = (byte)((ulong)uVar130 >> 0x38) & 0x1f;
      auVar81[10] = (byte)((ulong)uVar132 >> 0x18) & 0x1f;
      auVar81[11] = (byte)((ulong)uVar132 >> 0x38) & 0x1f;
      auVar81[12] = (byte)uVar16 & 0x1f;
      auVar81[13] = (byte)(uVar16 >> 0x10) & 0x1f;
      auVar81[14] = (byte)((ulong)uVar74 >> 0x18) & 0x1f;
      auVar81[15] = (byte)((ulong)uVar74 >> 0x38) & 0x1f;
      cVar52 = (char)((ulong)uVar39 >> 0x18);
      cVar53 = (char)((ulong)uVar39 >> 0x38);
      cVar63 = (char)((ulong)puVar21[6] >> 0x18);
      cVar64 = (char)((ulong)puVar21[6] >> 0x38);
      cVar65 = (char)((ulong)puVar21[7] >> 0x18);
      cVar66 = (char)((ulong)puVar21[7] >> 0x38);
      auVar86 = NEON_cmeq(auVar81,0,1);
      cVar5 = (char)((ulong)uVar47 >> 0x18);
      cVar6 = (char)((ulong)uVar47 >> 0x38);
      cVar7 = (char)((ulong)uVar50 >> 0x18);
      cVar8 = (char)((ulong)uVar50 >> 0x38);
      cVar9 = (char)((ulong)uVar43 >> 0x18);
      cVar10 = (char)((ulong)uVar43 >> 0x38);
      auVar147._8_8_ = 0x1f1f1f1f1f1f1f1f;
      auVar147._0_8_ = 0x1f1f1f1f1f1f1f1f;
      cVar14 = (char)((ulong)uVar35 >> 0x18);
      cVar11 = (char)((ulong)uVar35 >> 0x38);
      cVar12 = (char)((ulong)uVar36 >> 0x18);
      cVar13 = (char)((ulong)uVar36 >> 0x38);
      uVar17 = CONCAT15(cVar53,CONCAT14(cVar52,CONCAT13(cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5)))
                                       ));
      auVar82[6] = cVar9;
      auVar82._0_6_ = uVar17;
      auVar82[7] = cVar10;
      auVar82[8] = cVar14;
      auVar82[9] = cVar11;
      auVar82[10] = cVar12;
      auVar82[11] = cVar13;
      auVar82[12] = cVar63;
      auVar82[13] = cVar64;
      auVar82[14] = cVar65;
      auVar82[15] = cVar66;
      auVar147 = NEON_bif(auVar147,auVar82,auVar86,1);
      bVar83 = ~auVar86[0];
      bVar87 = ~auVar86[1];
      bVar89 = ~auVar86[2];
      bVar90 = ~auVar86[3];
      bVar91 = ~auVar86[4];
      bVar92 = ~auVar86[5];
      bVar94 = ~auVar86[6];
      bVar95 = ~auVar86[7];
      bVar96 = ~auVar86[8];
      bVar97 = ~auVar86[9];
      bVar99 = ~auVar86[10];
      bVar100 = ~auVar86[11];
      bVar101 = ~auVar86[12];
      bVar102 = ~auVar86[13];
      bVar104 = ~auVar86[14];
      bVar105 = ~auVar86[15];
      uVar1 = (uint)(byte)(0x1f - cVar8);
      uVar189 = (ushort)(byte)(0x1f - cVar52);
      uVar190 = (ushort)(byte)(0x1f - cVar10);
      uVar168 = (ushort)auVar147[7];
      uVar15 = (uint3)(byte)(0x1f - cVar5);
      uVar2 = (uint)(byte)(0x1f - cVar7);
      uVar191 = CONCAT12(auVar147[1],(ushort)auVar147[0]) & 0xffff;
      uVar193 = (uint)auVar147[2];
      uVar16 = (uint3)(byte)(0x1f - cVar14);
      uVar34 = (uint)(byte)(0x1f - cVar11);
      uVar186 = (uint)(byte)(0x1f - cVar12);
      uVar187 = (uint)(byte)(0x1f - cVar13);
      uVar29 = (ushort)(byte)(0x1f - cVar53);
      uVar31 = (ushort)(byte)(0x1f - cVar9);
      bVar40 = (byte)((ulong)uVar47 >> 0x20);
      uVar4 = (ushort)(byte)(0x1f - cVar63);
      uVar30 = (ushort)(byte)(0x1f - cVar64);
      uVar32 = (ushort)(byte)(0x1f - cVar65);
      uVar33 = (ushort)(byte)(0x1f - cVar66);
      iVar133 = (byte)uVar57 * uVar15;
      uVar58 = (uint)(byte)(0x1f - cVar6);
      iVar136 = (byte)((ulong)uVar57 >> 0x20) * uVar58;
      iVar137 = (byte)uVar61 * uVar2;
      iVar140 = (byte)((ulong)uVar61 >> 0x20) * uVar1;
      iVar141 = (byte)((ulong)uVar57 >> 8) * uVar15;
      iVar142 = (byte)((ulong)uVar57 >> 0x28) * uVar58;
      iVar143 = (byte)((ulong)uVar61 >> 8) * uVar2;
      iVar144 = (byte)((ulong)uVar61 >> 0x28) * uVar1;
      iVar154 = (byte)uVar130 * uVar16;
      iVar157 = (byte)((ulong)uVar130 >> 0x20) * uVar34;
      iVar159 = (byte)uVar132 * uVar186;
      iVar162 = (byte)((ulong)uVar132 >> 0x20) * uVar187;
      uVar192 = (uint)auVar147[1];
      uVar55 = (uint)(byte)((ulong)uVar50 >> 0x20);
      uVar194 = (uint)auVar147[3];
      iVar28 = (uint)(byte)uVar47 + uVar191 * (byte)uVar47;
      iVar27 = (uint)bVar40 + uVar192 * bVar40;
      iVar113 = (uint3)(byte)uVar115 * (uint3)uVar189;
      iVar26 = (uint)(byte)((ulong)uVar115 >> 0x20) * (uint)uVar29;
      iVar116 = (uint)(byte)uVar118 * (uint)uVar31;
      iVar3 = (uint)(byte)((ulong)uVar118 >> 0x20) * (uint)uVar190;
      iVar119 = (uint3)(byte)((ulong)uVar115 >> 8) * (uint3)uVar189;
      iVar108 = (uint)(byte)((ulong)uVar115 >> 0x28) * (uint)uVar29;
      iVar109 = (uint)(byte)((ulong)uVar118 >> 8) * (uint)uVar31;
      iVar112 = (uint)(byte)((ulong)uVar118 >> 0x28) * (uint)uVar190;
      bVar169 = (char)bVar91 >> 7;
      bVar170 = (char)bVar92 >> 7;
      bVar171 = (char)bVar94 >> 7;
      bVar172 = (char)bVar95 >> 7;
      iVar67 = (uint3)(byte)((ulong)uVar69 >> 8) * (uint3)uVar4;
      iVar70 = (uint)(byte)((ulong)uVar69 >> 0x28) * (uint)uVar30;
      iVar72 = (uint)(byte)((ulong)uVar74 >> 8) * (uint)uVar32;
      iVar75 = (uint)(byte)((ulong)uVar74 >> 0x28) * (uint)uVar33;
      uVar106 = (uint)CONCAT11((byte)((uint3)iVar119 >> 8) & bVar169,(byte)iVar119 & bVar91);
      uVar110 = (uint)CONCAT11((byte)((uint)iVar109 >> 8) & bVar171,(byte)iVar109 & bVar94);
      iVar125 = (uint3)(byte)((ulong)uVar69 >> 0x10) * (uint3)uVar4;
      iVar126 = (uint)(byte)((ulong)uVar69 >> 0x30) * (uint)uVar30;
      iVar127 = (uint)(byte)((ulong)uVar74 >> 0x10) * (uint)uVar32;
      iVar128 = (uint)(byte)((ulong)uVar74 >> 0x30) * (uint)uVar33;
      iVar181 = (uint3)(byte)uVar69 * (uint3)uVar4;
      iVar182 = (uint)(byte)((ulong)uVar69 >> 0x20) * (uint)uVar30;
      iVar183 = (uint)(byte)uVar74 * (uint)uVar32;
      iVar184 = (uint)(byte)((ulong)uVar74 >> 0x20) * (uint)uVar33;
      iVar119 = (byte)((ulong)uVar57 >> 0x10) * uVar15;
      iVar121 = (byte)((ulong)uVar57 >> 0x30) * uVar58;
      iVar122 = (byte)((ulong)uVar61 >> 0x10) * uVar2;
      iVar124 = (byte)((ulong)uVar61 >> 0x30) * uVar1;
      bVar177 = (char)bVar96 >> 7;
      bVar178 = (char)bVar97 >> 7;
      bVar179 = (char)bVar99 >> 7;
      bVar180 = (char)bVar100 >> 7;
      bVar195 = (char)bVar83 >> 7;
      bVar196 = (char)bVar87 >> 7;
      bVar197 = (char)bVar89 >> 7;
      uVar54 = (uint)CONCAT11((byte)((uint)iVar137 >> 8) & bVar197,(byte)iVar137 & bVar89);
      bVar198 = (char)bVar90 >> 7;
      uVar134 = (uint)CONCAT11((byte)((uint3)iVar141 >> 8) & bVar195,(byte)iVar141 & bVar83);
      uVar138 = (uint)CONCAT11((byte)((uint)iVar143 >> 8) & bVar197,(byte)iVar143 & bVar89);
      uVar161 = puVar21[7];
      uVar156 = puVar21[6];
      uVar2 = (uint)CONCAT11((byte)((uint)iVar116 >> 8) & bVar171,(byte)iVar116 & bVar94);
      uVar1 = (uint)CONCAT11((byte)((uint3)iVar113 >> 8) & bVar169,(byte)iVar113 & bVar91);
      bVar88 = (char)bVar101 >> 7;
      uVar135 = (uint)CONCAT11((byte)((uint3)iVar67 >> 8) & bVar88,(byte)iVar67 & bVar101);
      bVar93 = (char)bVar102 >> 7;
      bVar98 = (char)bVar104 >> 7;
      uVar139 = (uint)CONCAT11((byte)((uint)iVar72 >> 8) & bVar98,(byte)iVar72 & bVar104);
      bVar103 = (char)bVar105 >> 7;
      uVar145 = (uint)CONCAT12(auVar147[9],(ushort)auVar147[8]);
      uVar107 = (uint)CONCAT11((byte)((uint3)iVar154 >> 8) & bVar177,(byte)iVar154 & bVar96);
      uVar111 = (uint)CONCAT11((byte)((uint)iVar159 >> 8) & bVar179,(byte)iVar159 & bVar99);
      uVar61 = puVar21[7];
      uVar57 = puVar21[6];
      uVar74 = puVar21[7];
      uVar69 = puVar21[6];
      puVar24[1] = CONCAT17(cVar66,CONCAT16(cVar65,CONCAT15(cVar64,CONCAT14(cVar63,CONCAT13(cVar13,
                                                  CONCAT12(cVar12,CONCAT11(cVar11,cVar14)))))));
      *puVar24 = CONCAT17(cVar10,CONCAT16(cVar9,uVar17));
      uVar58 = (uint)CONCAT12(auVar147[5],(ushort)auVar147[4]);
      uVar30 = (ushort)auVar147[5];
      uVar32 = (ushort)auVar147[6];
      iVar141 = (byte)((ulong)uVar130 >> 8) * uVar16;
      iVar151 = (byte)((ulong)uVar130 >> 0x28) * uVar34;
      iVar152 = (byte)((ulong)uVar132 >> 8) * uVar186;
      iVar153 = (byte)((ulong)uVar132 >> 0x28) * uVar187;
      iVar113 = (uint3)(byte)((ulong)uVar115 >> 0x10) * (uint3)uVar189;
      iVar116 = (uint)(byte)((ulong)uVar115 >> 0x30) * (uint)uVar29;
      iVar72 = (uint)(byte)((ulong)uVar118 >> 0x10) * (uint)uVar31;
      iVar109 = (uint)(byte)((ulong)uVar118 >> 0x30) * (uint)uVar190;
      iVar67 = (byte)((ulong)uVar130 >> 0x10) * uVar16;
      iVar137 = (byte)((ulong)uVar130 >> 0x30) * uVar34;
      iVar143 = (byte)((ulong)uVar132 >> 0x10) * uVar186;
      iVar159 = (byte)((ulong)uVar132 >> 0x30) * uVar187;
      uVar29 = (ushort)auVar147[9];
      uVar31 = (ushort)auVar147[10];
      uVar33 = (ushort)auVar147[11];
      uVar185 = (uint)(byte)((ulong)uVar35 >> 0x20);
      uVar188 = (uint)(byte)((ulong)uVar36 >> 0x20);
      uVar146 = (uint)auVar147[12];
      bVar40 = (byte)((ulong)uVar39 >> 0x20);
      bVar44 = (byte)((ulong)uVar43 >> 0x20);
      uVar173 = (uint)(byte)((ulong)uVar47 >> 8);
      uVar174 = (uint)(byte)((ulong)uVar47 >> 0x28);
      uVar175 = (uint)(byte)((ulong)uVar50 >> 8);
      uVar176 = (uint)(byte)((ulong)uVar50 >> 0x28);
      uVar77 = (uint)(byte)((ulong)uVar39 >> 8);
      uVar78 = (uint)(byte)((ulong)uVar39 >> 0x28);
      uVar79 = (uint)(byte)((ulong)uVar43 >> 8);
      uVar80 = (uint)(byte)((ulong)uVar43 >> 0x28);
      uVar164 = (uint)(byte)((ulong)uVar35 >> 8);
      uVar165 = (uint)(byte)((ulong)uVar35 >> 0x28);
      uVar166 = (uint)(byte)((ulong)uVar36 >> 8);
      uVar167 = (uint)(byte)((ulong)uVar36 >> 0x28);
      uVar46 = (uint)(byte)((ulong)uVar47 >> 0x10);
      uVar49 = (uint)(byte)((ulong)uVar50 >> 0x10);
      uVar155 = (uint)(byte)((ulong)uVar156 >> 8);
      uVar160 = (uint)(byte)((ulong)uVar161 >> 8);
      uVar56 = (uint)(byte)uVar57;
      uVar60 = (uint)(byte)uVar61;
      uVar48 = (uint)(byte)((ulong)uVar47 >> 0x30);
      uVar51 = (uint)(byte)((ulong)uVar50 >> 0x30);
      auVar86[6] = cVar9;
      auVar86._0_6_ = uVar17;
      auVar86[7] = cVar10;
      auVar86[8] = cVar14;
      auVar86[9] = cVar11;
      auVar86[10] = cVar12;
      auVar86[11] = cVar13;
      auVar86[12] = cVar63;
      auVar86[13] = cVar64;
      auVar86[14] = cVar65;
      auVar86[15] = cVar66;
      auVar82 = NEON_umax(auVar86,auVar81,1);
      uVar120 = (uint)CONCAT11((byte)((uint3)iVar119 >> 8) & bVar195,(byte)iVar119 & bVar83);
      uVar123 = (uint)CONCAT11((byte)((uint)iVar122 >> 8) & bVar197,(byte)iVar122 & bVar89);
      uVar114 = (uint)CONCAT11((byte)((uint3)iVar113 >> 8) & bVar169,(byte)iVar113 & bVar91);
      uVar117 = (uint)CONCAT11((byte)((uint)iVar72 >> 8) & bVar171,(byte)iVar72 & bVar94);
      uVar34 = (uint)(byte)((ulong)uVar35 >> 0x10);
      uVar187 = (uint)(byte)((ulong)uVar36 >> 0x10);
      uVar38 = (uint)(byte)((ulong)uVar39 >> 0x10);
      uVar42 = (uint)(byte)((ulong)uVar43 >> 0x10);
      uVar148 = (uint)auVar147[13];
      uVar158 = (uint)(byte)((ulong)uVar156 >> 0x28);
      uVar149 = (uint)auVar147[14];
      uVar150 = (uint)auVar147[15];
      uVar163 = (uint)(byte)((ulong)uVar161 >> 0x28);
      uVar59 = (uint)(byte)((ulong)uVar57 >> 0x20);
      uVar62 = (uint)(byte)((ulong)uVar61 >> 0x20);
      uVar68 = (uint)(byte)((ulong)uVar69 >> 0x10);
      uVar73 = (uint)(byte)((ulong)uVar74 >> 0x10);
      uStack_3c = (uint)(ushort)(CONCAT15((byte)((uint)iVar142 >> 8) & bVar196,
                                          CONCAT14((byte)iVar142 & bVar87,uVar134)) >> 0x20);
      uStack_34 = (uint)(ushort)(CONCAT15((byte)((uint)iVar144 >> 8) & bVar198,
                                          CONCAT14((byte)iVar144 & bVar90,uVar138)) >> 0x20);
      uVar186 = (uint)(byte)((ulong)uVar35 >> 0x30);
      uVar37 = (uint)(byte)((ulong)uVar36 >> 0x30);
      uVar41 = (uint)(byte)((ulong)uVar39 >> 0x30);
      uVar45 = (uint)(byte)((ulong)uVar43 >> 0x30);
      uVar15 = CONCAT12(auVar82[1],auVar82._0_2_) & 0xff00ff;
      uVar84 = (uint)CONCAT11((byte)((uint3)iVar125 >> 8) & bVar88,(byte)iVar125 & bVar101);
      uVar4 = CONCAT11((byte)((uint)iVar127 >> 8) & bVar98,(byte)iVar127 & bVar104);
      auVar85._0_12_ = ZEXT212(uVar4) << 0x40;
      auVar85[12] = (byte)iVar128 & bVar105;
      auVar85[13] = (byte)((uint)iVar128 >> 8) & bVar103;
      uVar71 = (uint)(byte)((ulong)uVar69 >> 0x30);
      uVar76 = (uint)(byte)((ulong)uVar74 >> 0x30);
      uVar129 = (uint)CONCAT11((byte)((uint3)iVar67 >> 8) & bVar177,(byte)iVar67 & bVar96);
      uVar131 = (uint)CONCAT11((byte)((uint)iVar143 >> 8) & bVar179,(byte)iVar143 & bVar99);
      puVar21[1] = CONCAT17(auVar82[3],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar124 >> 8)
                                                                          & bVar198,
                                                                          CONCAT14((byte)iVar124 &
                                                                                   bVar90,uVar123))
                                                                >> 0x20) + uVar51 + uVar194 * uVar51
                                                 ) >> 5),
                                     CONCAT15((char)((int)(uStack_34 + uVar176 + uVar194 * uVar176)
                                                    >> 5),
                                              CONCAT14((char)((int)((uint)(ushort)(CONCAT15((byte)((
                                                  uint)iVar140 >> 8) & bVar198,
                                                  CONCAT14((byte)iVar140 & bVar90,uVar54)) >> 0x20)
                                                  + uVar55 + uVar194 * uVar55) >> 5),
                                                  CONCAT13(auVar82[2],
                                                           CONCAT12((char)((int)(uVar123 +
                                                                                uVar49 + uVar193 * 
                                                  uVar49) >> 5),
                                                  CONCAT11((char)((int)(uVar138 +
                                                                       uVar175 + uVar193 * uVar175)
                                                                 >> 5),
                                                           (char)((int)(uVar54 + (uint)(byte)uVar50
                                                                                 + uVar193 * (byte)
                                                  uVar50) >> 5))))))));
      *puVar21 = CONCAT17((char)(uVar15 >> 0x10),
                          CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar121 >> 8) &
                                                                        bVar196,CONCAT14((byte)
                                                  iVar121 & bVar87,uVar120)) >> 0x20) +
                                               uVar48 + uVar192 * uVar48) >> 5),
                                   CONCAT15((char)((int)(uStack_3c + uVar174 + uVar192 * uVar174) >>
                                                  5),CONCAT14((char)((int)((uint)CONCAT11((byte)((
                                                  uint)iVar136 >> 8) & bVar196,
                                                  (byte)iVar136 & bVar87) +
                                                  (uint)(uint3)(CONCAT16((char)((uint)iVar27 >> 0x10
                                                                               ),CONCAT15((char)((
                                                  uint)iVar27 >> 8),CONCAT14((char)iVar27,iVar28)))
                                                  >> 0x20)) >> 5),
                                                  CONCAT13((char)uVar15,
                                                           CONCAT12((char)((int)(uVar120 +
                                                                                uVar46 + uVar191 * 
                                                  uVar46) >> 5),
                                                  CONCAT11((char)((int)(uVar134 +
                                                                       uVar173 + uVar191 * uVar173)
                                                                 >> 5),
                                                           (char)((int)((uint)CONCAT11((byte)((uint3
                                                  )iVar133 >> 8) & bVar195,(byte)iVar133 & bVar83) +
                                                  iVar28) >> 5))))))));
      puVar21[3] = CONCAT17(auVar82[7],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar109 >> 8)
                                                                          & bVar172,
                                                                          CONCAT14((byte)iVar109 &
                                                                                   bVar95,uVar117))
                                                                >> 0x20) + uVar45 + uVar168 * uVar45
                                                 ) >> 5),
                                     CONCAT15((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)
                                                  iVar112 >> 8) & bVar172,
                                                  CONCAT14((byte)iVar112 & bVar95,uVar110)) >> 0x20)
                                                  + uVar80 + uVar168 * uVar80) >> 5),
                                              CONCAT14((char)((int)((uint)(ushort)(CONCAT15((byte)((
                                                  uint)iVar3 >> 8) & bVar172,
                                                  CONCAT14((byte)iVar3 & bVar95,uVar2)) >> 0x20) +
                                                  (uint)bVar44 + (uint)uVar168 * (uint)bVar44) >> 5)
                                                  ,CONCAT13(auVar82[6],
                                                            CONCAT12((char)((int)(uVar117 +
                                                                                 uVar42 + uVar32 * 
                                                  uVar42) >> 5),
                                                  CONCAT11((char)((int)(uVar110 +
                                                                       uVar79 + uVar32 * uVar79) >>
                                                                 5),(char)((int)(uVar2 + (uint)(byte
                                                  )uVar43 + (uint)uVar32 * (uint)(byte)uVar43) >> 5)
                                                  )))))));
      puVar21[2] = CONCAT17(auVar82[5],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar116 >> 8)
                                                                          & bVar170,
                                                                          CONCAT14((byte)iVar116 &
                                                                                   bVar92,uVar114))
                                                                >> 0x20) + uVar41 + uVar30 * uVar41)
                                           >> 5),
                                     CONCAT15((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)
                                                  iVar108 >> 8) & bVar170,
                                                  CONCAT14((byte)iVar108 & bVar92,uVar106)) >> 0x20)
                                                  + uVar78 + uVar30 * uVar78) >> 5),
                                              CONCAT14((char)((int)((uint)(ushort)(CONCAT15((byte)((
                                                  uint)iVar26 >> 8) & bVar170,
                                                  CONCAT14((byte)iVar26 & bVar92,uVar1)) >> 0x20) +
                                                  (uint)bVar40 + (uint)uVar30 * (uint)bVar40) >> 5),
                                                  CONCAT13(auVar82[4],
                                                           CONCAT12((char)((int)(uVar114 +
                                                                                uVar38 + (uVar58 & 
                                                  0xffff) * uVar38) >> 5),
                                                  CONCAT11((char)((int)(uVar106 +
                                                                       uVar77 + (uVar58 & 0xffff) *
                                                                                uVar77) >> 5),
                                                           (char)((int)(uVar1 + (uint)(byte)uVar39 +
                                                                                (uVar58 & 0xffff) *
                                                                                (uint)(byte)uVar39)
                                                                 >> 5))))))));
      puVar21[5] = CONCAT17(auVar82[11],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar159 >> 8)
                                                                          & bVar180,
                                                                          CONCAT14((byte)iVar159 &
                                                                                   bVar100,uVar131))
                                                                >> 0x20) + uVar37 + uVar33 * uVar37)
                                           >> 5),
                                     CONCAT15((char)((int)((uint)CONCAT11((byte)((uint)iVar153 >> 8)
                                                                          & bVar180,
                                                                          (byte)iVar153 & bVar100) +
                                                          uVar167 + uVar33 * uVar167) >> 5),
                                              CONCAT14((char)((int)((uint)(ushort)(CONCAT15((byte)((
                                                  uint)iVar162 >> 8) & bVar180,
                                                  CONCAT14((byte)iVar162 & bVar100,uVar111)) >> 0x20
                                                  ) + uVar188 + uVar33 * uVar188) >> 5),
                                                  CONCAT13(auVar82[10],
                                                           CONCAT12((char)((int)(uVar131 +
                                                                                uVar187 + uVar31 * 
                                                  uVar187) >> 5),
                                                  CONCAT11((char)((int)((uint)CONCAT11((byte)((uint)
                                                  iVar152 >> 8) & bVar179,(byte)iVar152 & bVar99) +
                                                  uVar166 + uVar31 * uVar166) >> 5),
                                                  (char)((int)(uVar111 +
                                                              (uint)(byte)uVar36 +
                                                              (uint)uVar31 * (uint)(byte)uVar36) >>
                                                        5))))))));
      puVar21[4] = CONCAT17(auVar82[9],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar137 >> 8)
                                                                          & bVar178,
                                                                          CONCAT14((byte)iVar137 &
                                                                                   bVar97,uVar129))
                                                                >> 0x20) +
                                                 uVar186 + uVar29 * uVar186) >> 5),
                                     CONCAT15((char)((int)((uint)CONCAT11((byte)((uint)iVar151 >> 8)
                                                                          & bVar178,
                                                                          (byte)iVar151 & bVar97) +
                                                          uVar165 + uVar29 * uVar165) >> 5),
                                              CONCAT14((char)((int)((uint)(ushort)(CONCAT15((byte)((
                                                  uint)iVar157 >> 8) & bVar178,
                                                  CONCAT14((byte)iVar157 & bVar97,uVar107)) >> 0x20)
                                                  + uVar185 + uVar29 * uVar185) >> 5),
                                                  CONCAT13(auVar82[8],
                                                           CONCAT12((char)((int)(uVar129 +
                                                                                uVar34 + (uVar145 &
                                                                                         0xffff) * 
                                                  uVar34) >> 5),
                                                  CONCAT11((char)((int)((uint)CONCAT11((byte)((uint3
                                                  )iVar141 >> 8) & bVar177,(byte)iVar141 & bVar96) +
                                                  uVar164 + (uVar145 & 0xffff) * uVar164) >> 5),
                                                  (char)((int)(uVar107 +
                                                              (uint)(byte)uVar35 +
                                                              (uVar145 & 0xffff) *
                                                              (uint)(byte)uVar35) >> 5))))))));
      puVar21[7] = CONCAT17(auVar82[15],
                            CONCAT16((char)((int)((uint)auVar85._12_2_ + uVar76 + uVar150 * uVar76)
                                           >> 5),
                                     CONCAT15((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)
                                                  iVar75 >> 8) & bVar103,
                                                  CONCAT14((byte)iVar75 & bVar105,uVar139)) >> 0x20)
                                                  + uVar163 + uVar150 * uVar163) >> 5),
                                              CONCAT14((char)((int)((uint)CONCAT11((byte)((uint)
                                                  iVar184 >> 8) & bVar103,(byte)iVar184 & bVar105) +
                                                  uVar62 + uVar150 * uVar62) >> 5),
                                                  CONCAT13(auVar82[14],
                                                           CONCAT12((char)((int)((uint)uVar4 +
                                                                                uVar73 + uVar149 * 
                                                  uVar73) >> 5),
                                                  CONCAT11((char)((int)(uVar139 +
                                                                       uVar160 + uVar149 * uVar160)
                                                                 >> 5),
                                                           (char)((int)((uint)CONCAT11((byte)((uint)
                                                  iVar183 >> 8) & bVar98,(byte)iVar183 & bVar104) +
                                                  uVar60 + uVar149 * uVar60) >> 5))))))));
      puVar21[6] = CONCAT17(auVar82[13],
                            CONCAT16((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)iVar126 >> 8)
                                                                          & bVar93,CONCAT14((byte)
                                                  iVar126 & bVar102,uVar84)) >> 0x20) +
                                                 uVar71 + uVar148 * uVar71) >> 5),
                                     CONCAT15((char)((int)((uint)(ushort)(CONCAT15((byte)((uint)
                                                  iVar70 >> 8) & bVar93,
                                                  CONCAT14((byte)iVar70 & bVar102,uVar135)) >> 0x20)
                                                  + uVar158 + uVar148 * uVar158) >> 5),
                                              CONCAT14((char)((int)((uint)CONCAT11((byte)((uint)
                                                  iVar182 >> 8) & bVar93,(byte)iVar182 & bVar102) +
                                                  uVar59 + uVar148 * uVar59) >> 5),
                                                  CONCAT13(auVar82[12],
                                                           CONCAT12((char)((int)(uVar84 + uVar68 + 
                                                  uVar146 * uVar68) >> 5),
                                                  CONCAT11((char)((int)(uVar135 +
                                                                       uVar155 + uVar146 * uVar155)
                                                                 >> 5),
                                                           (char)((int)((uint)CONCAT11((byte)((uint3
                                                  )iVar181 >> 8) & bVar88,(byte)iVar181 & bVar101) +
                                                  uVar56 + uVar146 * uVar56) >> 5))))))));
      puVar21 = puVar21 + 8;
      puVar24 = puVar24 + 2;
    } while (bVar18);
    lVar25 = ((ulong)param_3 & 0xfffffff0) * 4;
    if ((param_3 & 0xf) != 0) {
      lVar23 = 0;
      do {
        uVar58 = *(uint *)((long)param_1 + lVar23 * 4 + lVar25);
        uVar34 = *(uint *)((long)param_2 + lVar23 * 4 + lVar25);
        uVar186 = uVar58 >> 0x18;
        *(char *)((long)param_4 + lVar23 + ((ulong)param_3 & 0xfffffff0)) = (char)(uVar58 >> 0x18);
        uVar1 = 0x1f - uVar186 & 0xff;
        uVar2 = uVar34 >> 0x18 & 0x1f;
        iVar26 = 0;
        iVar27 = 0;
        iVar28 = 0;
        uVar187 = 0x1f;
        if (uVar2 != 0) {
          iVar28 = (uVar34 & 0xff) * uVar1;
          iVar27 = (uVar34 >> 8 & 0xff) * uVar1;
          iVar26 = (uVar34 >> 0x10 & 0xff) * uVar1;
          uVar187 = uVar186;
        }
        uVar1 = uVar58 >> 8 & 0xff;
        uVar34 = uVar58 >> 0x10 & 0xff;
        if (uVar2 <= uVar186) {
          uVar2 = uVar186;
        }
        *(uint *)((long)param_1 + lVar23 * 4 + lVar25) =
             ((int)(uVar1 + uVar187 * uVar1 + iVar27) >> 5 & 0xffU) << 8 |
             ((int)(uVar34 + uVar187 * uVar34 + iVar26) >> 5 & 0xffU) << 0x10 |
             (uVar58 & 0xff) + uVar187 * (uVar58 & 0xff) + iVar28 >> 5 & 0xff | uVar2 << 0x18;
        lVar23 = lVar23 + 1;
      } while ((param_3 & 0xfffffff0) + (int)lVar23 < param_3);
    }
    return;
  }
  lVar25 = 0;
  do {
    uVar58 = *(uint *)((long)param_1 + lVar25 * 4);
    uVar34 = *(uint *)((long)param_2 + lVar25 * 4);
    uVar2 = uVar58 >> 0x18;
    *(char *)((long)param_4 + lVar25) = (char)(uVar58 >> 0x18);
    uVar1 = 0x1f - uVar2 & 0xff;
    uVar186 = uVar34 >> 0x18 & 0x1f;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    uVar187 = 0x1f;
    if (uVar186 != 0) {
      iVar28 = (uVar34 & 0xff) * uVar1;
      iVar27 = (uVar34 >> 8 & 0xff) * uVar1;
      iVar26 = (uVar34 >> 0x10 & 0xff) * uVar1;
      uVar187 = uVar2;
    }
    uVar1 = uVar58 >> 8 & 0xff;
    uVar34 = uVar58 >> 0x10 & 0xff;
    if (uVar2 <= uVar186) {
      uVar2 = uVar186;
    }
    *(uint *)((long)param_1 + lVar25 * 4) =
         ((int)(uVar1 + uVar187 * uVar1 + iVar27) >> 5 & 0xffU) << 8 |
         ((int)(uVar34 + uVar34 * uVar187 + iVar26) >> 5 & 0xffU) << 0x10 |
         (uVar58 & 0xff) + uVar187 * (uVar58 & 0xff) + iVar28 >> 5 & 0xff | uVar2 << 0x18;
    lVar25 = lVar25 + 1;
  } while ((uint)lVar25 < param_3);
  return;
}


