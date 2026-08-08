/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_12bpp_c
 * Address  : 001a1710
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_set_visibility_12bpp_c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint6 uVar2;
  uint6 uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar14;
  byte bVar15;
  ulong uVar7;
  byte bVar16;
  ulong uVar8;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  ulong uVar18;
  byte bVar26;
  byte bVar27;
  byte bVar30;
  byte bVar31;
  uint uVar28;
  byte bVar32;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  uint uVar34;
  ulong uVar29;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  ulong uVar39;
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
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  ulong uVar57;
  byte bVar65;
  byte bVar66;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar75;
  byte bVar76;
  undefined8 uVar67;
  uint uVar74;
  ulong uVar68;
  byte bVar77;
  byte bVar78;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar86;
  byte bVar87;
  undefined8 uVar79;
  ulong uVar80;
  byte bVar88;
  uint uVar89;
  uint7 uVar90;
  undefined8 uVar91;
  ulong uVar92;
  uint7 uVar93;
  undefined8 uVar94;
  ulong uVar95;
  uint uVar96;
  ushort uVar97;
  uint7 uVar98;
  undefined8 uVar99;
  uint uVar100;
  ushort uVar101;
  uint7 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  uint uVar105;
  int iVar106;
  uint uVar107;
  undefined8 uVar108;
  int iVar110;
  ulong uVar109;
  uint uVar111;
  int iVar112;
  uint7 uVar113;
  undefined8 uVar114;
  int iVar116;
  ulong uVar115;
  uint uVar117;
  int iVar118;
  uint7 uVar119;
  undefined8 uVar120;
  int iVar121;
  uint uVar122;
  int iVar123;
  uint7 uVar124;
  undefined8 uVar125;
  int iVar126;
  uint uVar127;
  int iVar128;
  undefined8 uVar129;
  int iVar130;
  int iVar131;
  undefined8 uVar132;
  int iVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  undefined8 uVar145;
  undefined8 uVar146;
  undefined8 uVar147;
  byte bVar150;
  undefined8 uVar148;
  ulong uVar149;
  byte bVar153;
  undefined8 uVar151;
  ulong uVar152;
  undefined8 uVar154;
  undefined8 uVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar169;
  undefined8 uVar168;
  byte bVar171;
  undefined8 uVar170;
  byte bVar172;
  byte bVar173;
  byte bVar175;
  byte bVar176;
  undefined8 uVar174;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  undefined8 uVar193;
  undefined8 uVar194;
  undefined8 uVar195;
  undefined8 uVar196;
  uint uVar13;
  uint uVar23;
  uint uVar44;
  uint uVar62;
  undefined8 uVar69;
  uint uVar85;
  
  lVar4 = ___stack_chk_guard;
  puVar1 = param_2 + 0x40;
  if (param_2 < param_1 + 4 && param_1 < puVar1) {
    do {
      uVar67 = *param_2;
      uVar79 = param_2[1];
      param_2 = param_2 + 2;
      uVar89 = ((uint)((ulong)uVar67 >> 0x20) & 0xff) << 0x10 |
               ((uint)((ulong)uVar67 >> 0x10) & 0xff) << 8 |
               (uint)uVar67 & 0xff | (uint)(ushort)((ulong)uVar67 >> 0x30) << 0x18;
      uVar13 = ((uint)((ulong)uVar79 >> 0x20) & 0xff) << 0x10 |
               ((uint)((ulong)uVar79 >> 0x10) & 0xff) << 8 |
               (uint)uVar79 & 0xff | (uint)(ushort)((ulong)uVar79 >> 0x30) << 0x18;
      uVar89 = (uVar13 | uVar13 << 4) & 0xf0f0f0f0 | (uVar89 | uVar89 >> 4) & 0xf0f0f0f;
      uVar89 = uVar89 | uVar89 >> 2;
      uVar89 = (uVar89 | uVar89 >> 1) & 0x11111111;
      uVar89 = uVar89 | uVar89 >> 7;
      *(byte *)param_1 = (byte)uVar89 | (byte)(uVar89 >> 0xe);
      param_1 = (undefined8 *)((long)param_1 + 1);
    } while (puVar1 != param_2);
  }
  else {
    lVar5 = 0;
    do {
      uVar142 = *param_2;
      uVar146 = param_2[1];
      uVar144 = param_2[2];
      uVar147 = param_2[3];
      uVar138 = param_2[8];
      uVar140 = param_2[9];
      uVar139 = param_2[10];
      uVar141 = param_2[0xb];
      uVar148 = param_2[4];
      uVar154 = param_2[5];
      uVar151 = param_2[6];
      uVar155 = param_2[7];
      uVar134 = param_2[0xc];
      uVar136 = param_2[0xd];
      uVar135 = param_2[0xe];
      uVar137 = param_2[0xf];
      bVar27 = (byte)((ulong)uVar142 >> 0x30);
      bVar30 = (byte)((ulong)uVar144 >> 0x30);
      bVar31 = (byte)((ulong)uVar148 >> 0x30);
      bVar32 = (byte)((ulong)uVar151 >> 0x30);
      uVar120 = param_2[0x10];
      uVar129 = param_2[0x11];
      uVar125 = param_2[0x12];
      uVar132 = param_2[0x13];
      uVar99 = param_2[0x14];
      uVar108 = param_2[0x15];
      uVar103 = param_2[0x16];
      uVar114 = param_2[0x17];
      bVar185 = (byte)((ulong)uVar146 >> 0x30);
      bVar186 = (byte)((ulong)uVar147 >> 0x30);
      bVar187 = (byte)((ulong)uVar154 >> 0x30);
      bVar188 = (byte)((ulong)uVar155 >> 0x30);
      bVar177 = (byte)((ulong)uVar138 >> 0x30);
      bVar178 = (byte)((ulong)uVar139 >> 0x30);
      bVar179 = (byte)((ulong)uVar134 >> 0x30);
      bVar180 = (byte)((ulong)uVar135 >> 0x30);
      uVar67 = param_2[0x18];
      uVar91 = param_2[0x19];
      uVar79 = param_2[0x1a];
      uVar94 = param_2[0x1b];
      uVar193 = param_2[0x1c];
      uVar195 = param_2[0x1d];
      uVar194 = param_2[0x1e];
      uVar196 = param_2[0x1f];
      bVar164 = (byte)((ulong)uVar140 >> 0x30);
      bVar165 = (byte)((ulong)uVar141 >> 0x30);
      bVar166 = (byte)((ulong)uVar136 >> 0x30);
      bVar167 = (byte)((ulong)uVar137 >> 0x30);
      bVar73 = (byte)((ulong)uVar140 >> 0x10);
      bVar150 = (byte)((ulong)uVar141 >> 0x10);
      bVar76 = (byte)((ulong)uVar136 >> 0x10);
      bVar153 = (byte)((ulong)uVar137 >> 0x10);
      bVar181 = (byte)((ulong)uVar120 >> 0x30);
      bVar182 = (byte)((ulong)uVar125 >> 0x30);
      bVar183 = (byte)((ulong)uVar99 >> 0x30);
      bVar184 = (byte)((ulong)uVar103 >> 0x30);
      uVar2 = CONCAT15((char)((ulong)uVar144 >> 0x10),
                       (uint5)(uint)((int)((ulong)uVar142 >> 0x10) << 8)) & 0xffff0000ffff;
      uVar3 = CONCAT15((char)((ulong)uVar151 >> 0x10),
                       (uint5)(uint)((int)((ulong)uVar148 >> 0x10) << 8)) & 0xffff0000ffff;
      bVar20 = (byte)(uVar2 >> 8);
      bVar21 = (byte)(uVar2 >> 0x28);
      bVar24 = (byte)(uVar3 >> 8);
      bVar25 = (byte)(uVar3 >> 0x28);
      bVar15 = (byte)((ulong)uVar146 >> 0x10);
      bVar16 = (byte)((ulong)uVar154 >> 0x10);
      bVar17 = (byte)((ulong)uVar147 >> 0x10);
      bVar19 = (byte)((ulong)uVar155 >> 0x10);
      bVar160 = (byte)((ulong)uVar129 >> 0x30);
      bVar161 = (byte)((ulong)uVar132 >> 0x30);
      bVar162 = (byte)((ulong)uVar108 >> 0x30);
      bVar163 = (byte)((ulong)uVar114 >> 0x30);
      bVar66 = (byte)((ulong)uVar67 >> 0x30);
      bVar70 = (byte)((ulong)uVar79 >> 0x30);
      bVar71 = (byte)((ulong)uVar193 >> 0x30);
      bVar72 = (byte)((ulong)uVar194 >> 0x30);
      bVar169 = (byte)((ulong)uVar139 >> 0x10);
      bVar10 = (byte)((ulong)uVar138 >> 0x10);
      bVar171 = (byte)((ulong)uVar135 >> 0x10);
      bVar11 = (byte)((ulong)uVar134 >> 0x10);
      bVar172 = (byte)((ulong)uVar120 >> 0x10);
      bVar173 = (byte)((ulong)uVar125 >> 0x10);
      bVar175 = (byte)((ulong)uVar99 >> 0x10);
      bVar176 = (byte)((ulong)uVar103 >> 0x10);
      bVar75 = (byte)((ulong)uVar132 >> 0x10);
      bVar12 = (byte)((ulong)uVar129 >> 0x10);
      bVar77 = (byte)((ulong)uVar114 >> 0x10);
      bVar14 = (byte)((ulong)uVar108 >> 0x10);
      bVar22 = (byte)((ulong)uVar79 >> 0x10);
      bVar6 = (byte)((ulong)uVar67 >> 0x10);
      bVar26 = (byte)((ulong)uVar194 >> 0x10);
      bVar9 = (byte)((ulong)uVar193 >> 0x10);
      uVar2 = CONCAT15((char)((ulong)uVar94 >> 0x10),
                       (uint5)(uint)((int)((ulong)uVar91 >> 0x10) << 8)) & 0xffff0000ffff;
      uVar3 = CONCAT15((char)((ulong)uVar196 >> 0x10),
                       (uint5)(uint)((int)((ulong)uVar195 >> 0x10) << 8)) & 0xffff0000ffff;
      bVar78 = (byte)((ulong)uVar91 >> 0x30);
      bVar81 = (byte)((ulong)uVar94 >> 0x30);
      bVar82 = (byte)((ulong)uVar195 >> 0x30);
      bVar83 = (byte)((ulong)uVar196 >> 0x30);
      bVar84 = (byte)((ulong)uVar146 >> 0x20);
      bVar86 = (byte)((ulong)uVar147 >> 0x20);
      bVar87 = (byte)((ulong)uVar154 >> 0x20);
      bVar88 = (byte)((ulong)uVar155 >> 0x20);
      bVar43 = (byte)((ulong)uVar129 >> 0x20);
      bVar45 = (byte)((ulong)uVar132 >> 0x20);
      bVar46 = (byte)((ulong)uVar108 >> 0x20);
      bVar47 = (byte)((ulong)uVar114 >> 0x20);
      bVar38 = (byte)((ulong)uVar91 >> 0x20);
      bVar40 = (byte)((ulong)uVar94 >> 0x20);
      bVar41 = (byte)((ulong)uVar195 >> 0x20);
      bVar42 = (byte)((ulong)uVar196 >> 0x20);
      bVar60 = (byte)((ulong)uVar142 >> 0x20);
      bVar61 = (byte)((ulong)uVar144 >> 0x20);
      bVar63 = (byte)((ulong)uVar148 >> 0x20);
      bVar65 = (byte)((ulong)uVar151 >> 0x20);
      bVar50 = (byte)((ulong)uVar138 >> 0x20);
      bVar54 = (byte)((ulong)uVar139 >> 0x20);
      bVar48 = (byte)((ulong)uVar134 >> 0x20);
      bVar49 = (byte)((ulong)uVar135 >> 0x20);
      bVar56 = (byte)((ulong)uVar140 >> 0x20);
      bVar58 = (byte)((ulong)uVar141 >> 0x20);
      bVar59 = (byte)((ulong)uVar136 >> 0x20);
      bVar64 = (byte)((ulong)uVar137 >> 0x20);
      bVar51 = (byte)((ulong)uVar120 >> 0x20);
      bVar52 = (byte)((ulong)uVar125 >> 0x20);
      bVar53 = (byte)((ulong)uVar99 >> 0x20);
      bVar55 = (byte)((ulong)uVar103 >> 0x20);
      bVar33 = (byte)((ulong)uVar67 >> 0x20);
      bVar35 = (byte)((ulong)uVar79 >> 0x20);
      bVar36 = (byte)((ulong)uVar193 >> 0x20);
      bVar37 = (byte)((ulong)uVar194 >> 0x20);
      bVar189 = (byte)(uVar2 >> 8);
      bVar190 = (byte)(uVar2 >> 0x28);
      bVar191 = (byte)(uVar3 >> 8);
      bVar192 = (byte)(uVar3 >> 0x28);
      uVar98 = CONCAT16(bVar61,CONCAT15(bVar21,CONCAT14((byte)uVar144,
                                                        CONCAT13(bVar27,CONCAT12(bVar60,CONCAT11(
                                                  bVar20,(byte)uVar142))))));
      uVar143 = CONCAT17(bVar30,uVar98);
      uVar102 = CONCAT16(bVar65,CONCAT15(bVar25,CONCAT14((byte)uVar151,
                                                         CONCAT13(bVar31,CONCAT12(bVar63,CONCAT11(
                                                  bVar24,(byte)uVar148))))));
      uVar145 = CONCAT17(bVar32,uVar102);
      uVar90 = CONCAT16(bVar35,CONCAT15(bVar22,CONCAT14((byte)uVar79,
                                                        CONCAT13(bVar66,CONCAT12(bVar33,CONCAT11(
                                                  bVar6,(byte)uVar67))))));
      uVar69 = CONCAT17(bVar70,uVar90);
      uVar93 = CONCAT16(bVar37,CONCAT15(bVar26,CONCAT14((byte)uVar194,
                                                        CONCAT13(bVar71,CONCAT12(bVar36,CONCAT11(
                                                  bVar9,(byte)uVar193))))));
      uVar104 = CONCAT17(bVar72,uVar93);
      iVar128 = CONCAT13(bVar185,CONCAT12(bVar84,CONCAT11(bVar15,(byte)uVar146)));
      iVar131 = CONCAT13(bVar187,CONCAT12(bVar87,CONCAT11(bVar16,(byte)uVar154)));
      iVar106 = CONCAT13(bVar160,CONCAT12(bVar43,CONCAT11(bVar12,(byte)uVar129)));
      iVar112 = CONCAT13(bVar162,CONCAT12(bVar46,CONCAT11(bVar14,(byte)uVar108)));
      uVar96 = CONCAT13(bVar177,CONCAT12(bVar50,CONCAT11(bVar10,(byte)uVar138)));
      uVar168 = CONCAT17(bVar178,CONCAT16(bVar54,CONCAT15(bVar169,CONCAT14((byte)uVar139,uVar96))));
      uVar113 = CONCAT16(bVar49,CONCAT15(bVar171,CONCAT14((byte)uVar135,
                                                          CONCAT13(bVar179,CONCAT12(bVar48,CONCAT11(
                                                  bVar11,(byte)uVar134))))));
      uVar170 = CONCAT17(bVar180,uVar113);
      iVar110 = CONCAT13(bVar78,CONCAT12(bVar38,CONCAT11(bVar189,(byte)uVar91)));
      iVar116 = CONCAT13(bVar82,CONCAT12(bVar41,CONCAT11(bVar191,(byte)uVar195)));
      iVar130 = CONCAT13(bVar164,CONCAT12(bVar56,CONCAT11(bVar73,(byte)uVar140)));
      iVar133 = CONCAT13(bVar166,CONCAT12(bVar59,CONCAT11(bVar76,(byte)uVar136)));
      uVar89 = CONCAT13(bVar182,CONCAT12(bVar52,CONCAT11(bVar173,(byte)uVar125)));
      uVar119 = CONCAT16(bVar55,CONCAT15(bVar176,CONCAT14((byte)uVar103,
                                                          CONCAT13(bVar183,CONCAT12(bVar53,CONCAT11(
                                                  bVar175,(byte)uVar99))))));
      uVar174 = CONCAT17(bVar184,uVar119);
      iVar118 = iVar106 << 4;
      iVar121 = (int)(CONCAT17(bVar161,CONCAT16(bVar45,CONCAT15(bVar75,CONCAT14((byte)uVar132,
                                                                                iVar106)))) >> 0x20)
                << 4;
      iVar123 = iVar112 << 4;
      iVar126 = (int)(CONCAT17(bVar163,CONCAT16(bVar47,CONCAT15(bVar77,CONCAT14((byte)uVar114,
                                                                                iVar112)))) >> 0x20)
                << 4;
      uVar7 = ((ulong)uVar90 & 0xfffffff0) >> 4;
      uVar13 = (uint)((ulong)uVar69 >> 0x24);
      uVar18 = ((ulong)uVar93 & 0xfffffff0) >> 4;
      uVar23 = (uint)((ulong)uVar104 >> 0x24);
      iVar106 = iVar110 << 4;
      iVar110 = (int)(CONCAT17(bVar81,CONCAT16(bVar40,CONCAT15(bVar190,CONCAT14((byte)uVar94,iVar110
                                                                               )))) >> 0x20) << 4;
      iVar112 = iVar116 << 4;
      iVar116 = (int)(CONCAT17(bVar83,CONCAT16(bVar42,CONCAT15(bVar192,CONCAT14((byte)uVar196,
                                                                                iVar116)))) >> 0x20)
                << 4;
      iVar156 = iVar128 << 4;
      iVar157 = (int)(CONCAT17(bVar186,CONCAT16(bVar86,CONCAT15(bVar17,CONCAT14((byte)uVar147,
                                                                                iVar128)))) >> 0x20)
                << 4;
      iVar158 = iVar131 << 4;
      iVar159 = (int)(CONCAT17(bVar188,CONCAT16(bVar88,CONCAT15(bVar19,CONCAT14((byte)uVar155,
                                                                                iVar131)))) >> 0x20)
                << 4;
      uVar57 = ((ulong)uVar113 & 0xfffffff0) >> 4;
      uVar62 = (uint)((ulong)uVar170 >> 0x24);
      uVar29 = ((ulong)uVar98 & 0xfffffff0) >> 4;
      uVar74 = (uint)((ulong)uVar143 >> 0x24);
      uVar80 = ((ulong)uVar102 & 0xfffffff0) >> 4;
      uVar85 = (uint)((ulong)uVar145 >> 0x24);
      iVar128 = iVar130 << 4;
      iVar130 = (int)(CONCAT17(bVar165,CONCAT16(bVar58,CONCAT15(bVar150,CONCAT14((byte)uVar141,
                                                                                 iVar130)))) >> 0x20
                     ) << 4;
      iVar131 = iVar133 << 4;
      iVar133 = (int)(CONCAT17(bVar167,CONCAT16(bVar64,CONCAT15(bVar153,CONCAT14((byte)uVar137,
                                                                                 iVar133)))) >> 0x20
                     ) << 4;
      uVar28 = CONCAT13(bVar181,CONCAT12(bVar51,CONCAT11(bVar172,(byte)uVar120))) >> 4;
      uVar34 = uVar89 >> 4;
      uVar39 = ((ulong)uVar119 & 0xfffffff0) >> 4;
      uVar44 = (uint)((ulong)uVar174 >> 0x24);
      uVar97 = CONCAT11((byte)((uint)iVar128 >> 8) | bVar73,(byte)iVar128 | (byte)uVar140) & 0xf0f0;
      uVar101 = CONCAT11((byte)((uint)iVar131 >> 8) | bVar76,(byte)iVar131 | (byte)uVar136) & 0xf0f0
      ;
      uVar109 = CONCAT17((byte)((uint)iVar157 >> 0x18) | bVar186,
                         CONCAT16((byte)((uint)iVar157 >> 0x10) | bVar86,
                                  CONCAT15((byte)((uint)iVar157 >> 8) | bVar17,
                                           CONCAT14((byte)iVar157 | (byte)uVar147,
                                                    CONCAT13((byte)((uint)iVar156 >> 0x18) | bVar185
                                                             ,CONCAT12((byte)((uint)iVar156 >> 0x10)
                                                                       | bVar84,CONCAT11((byte)((
                                                  uint)iVar156 >> 8) | bVar15,
                                                  (byte)iVar156 | (byte)uVar146))))))) &
                0xf0f0f0f0f0f0f0f0;
      uVar115 = CONCAT17((byte)((uint)iVar159 >> 0x18) | bVar188,
                         CONCAT16((byte)((uint)iVar159 >> 0x10) | bVar88,
                                  CONCAT15((byte)((uint)iVar159 >> 8) | bVar19,
                                           CONCAT14((byte)iVar159 | (byte)uVar155,
                                                    CONCAT13((byte)((uint)iVar158 >> 0x18) | bVar187
                                                             ,CONCAT12((byte)((uint)iVar158 >> 0x10)
                                                                       | bVar87,CONCAT11((byte)((
                                                  uint)iVar158 >> 8) | bVar16,
                                                  (byte)iVar158 | (byte)uVar154))))))) &
                0xf0f0f0f0f0f0f0f0;
      uVar8 = (ulong)CONCAT14((byte)((uint3)((ulong)uVar170 >> 0x2c) >> 8) | bVar49,
                              CONCAT13((byte)(uVar62 >> 8) | bVar171,
                                       CONCAT12((byte)uVar62 | (byte)uVar135,
                                                CONCAT11((byte)(uVar57 >> 0x18) | bVar179,
                                                         (byte)(uVar57 >> 0x10) | bVar48)))) &
              0xf0f0f0f0f0f;
      uVar7 = CONCAT17(bVar70 >> 4 | bVar70,
                       CONCAT16((byte)((uint3)((ulong)uVar69 >> 0x2c) >> 8) | bVar35,
                                CONCAT15((byte)(uVar13 >> 8) | bVar22,
                                         CONCAT14((byte)uVar13 | (byte)uVar79,
                                                  CONCAT13((byte)(uVar7 >> 0x18) | bVar66,
                                                           CONCAT12((byte)(uVar7 >> 0x10) | bVar33,
                                                                    CONCAT11((byte)(uVar7 >> 8) |
                                                                             bVar6,(byte)uVar7 |
                                                                                   (byte)uVar67)))))
                               )) & 0xf0f0f0f0f0f0f0f;
      uVar18 = CONCAT17(bVar72 >> 4 | bVar72,
                        CONCAT16((byte)((uint3)((ulong)uVar104 >> 0x2c) >> 8) | bVar37,
                                 CONCAT15((byte)(uVar23 >> 8) | bVar26,
                                          CONCAT14((byte)uVar23 | (byte)uVar194,
                                                   CONCAT13((byte)(uVar18 >> 0x18) | bVar71,
                                                            CONCAT12((byte)(uVar18 >> 0x10) | bVar36
                                                                     ,CONCAT11((byte)(uVar18 >> 8) |
                                                                               bVar9,(byte)uVar18 |
                                                                                     (byte)uVar193))
                                                           ))))) & 0xf0f0f0f0f0f0f0f;
      uVar68 = CONCAT17(bVar30 >> 4 | bVar30,
                        CONCAT16((byte)((uint3)((ulong)uVar143 >> 0x2c) >> 8) | bVar61,
                                 CONCAT15((byte)(uVar74 >> 8) | bVar21,
                                          CONCAT14((byte)uVar74 | (byte)uVar144,
                                                   CONCAT13((byte)(uVar29 >> 0x18) | bVar27,
                                                            CONCAT12((byte)(uVar29 >> 0x10) | bVar60
                                                                     ,CONCAT11((byte)(uVar29 >> 8) |
                                                                               bVar20,(byte)uVar29 |
                                                                                      (byte)uVar142)
                                                                    )))))) & 0xf0f0f0f0f0f0f0f;
      uVar80 = CONCAT17(bVar32 >> 4 | bVar32,
                        CONCAT16((byte)((uint3)((ulong)uVar145 >> 0x2c) >> 8) | bVar65,
                                 CONCAT15((byte)(uVar85 >> 8) | bVar25,
                                          CONCAT14((byte)uVar85 | (byte)uVar151,
                                                   CONCAT13((byte)(uVar80 >> 0x18) | bVar31,
                                                            CONCAT12((byte)(uVar80 >> 0x10) | bVar63
                                                                     ,CONCAT11((byte)(uVar80 >> 8) |
                                                                               bVar24,(byte)uVar80 |
                                                                                      (byte)uVar148)
                                                                    )))))) & 0xf0f0f0f0f0f0f0f;
      uVar29 = CONCAT17(bVar182 >> 4 | bVar182,
                        CONCAT16((byte)((uint3)(uVar89 >> 0xc) >> 8) | bVar52,
                                 CONCAT15((byte)(uVar34 >> 8) | bVar173,
                                          CONCAT14((byte)uVar34 | (byte)uVar125,
                                                   CONCAT13(bVar181 >> 4 | bVar181,
                                                            CONCAT12((byte)(uVar28 >> 0x10) | bVar51
                                                                     ,CONCAT11((byte)(uVar28 >> 8) |
                                                                               bVar172,(byte)uVar28
                                                                                       | (byte)
                                                  uVar120))))))) & 0xf0f0f0f0f0f0f0f;
      uVar39 = CONCAT17(bVar184 >> 4 | bVar184,
                        CONCAT16((byte)((uint3)((ulong)uVar174 >> 0x2c) >> 8) | bVar55,
                                 CONCAT15((byte)(uVar44 >> 8) | bVar176,
                                          CONCAT14((byte)uVar44 | (byte)uVar103,
                                                   CONCAT13((byte)(uVar39 >> 0x18) | bVar183,
                                                            CONCAT12((byte)(uVar39 >> 0x10) | bVar53
                                                                     ,CONCAT11((byte)(uVar39 >> 8) |
                                                                               bVar175,(byte)uVar39
                                                                                       | (byte)
                                                  uVar99))))))) & 0xf0f0f0f0f0f0f0f;
      uVar92 = CONCAT17((byte)((uint)iVar110 >> 0x18) | bVar81,
                        CONCAT16((byte)((uint)iVar110 >> 0x10) | bVar40,
                                 CONCAT15((byte)((uint)iVar110 >> 8) | bVar190,
                                          CONCAT14((byte)iVar110 | (byte)uVar94,
                                                   CONCAT13((byte)((uint)iVar106 >> 0x18) | bVar78,
                                                            CONCAT12((byte)((uint)iVar106 >> 0x10) |
                                                                     bVar38,CONCAT11((byte)((uint)
                                                  iVar106 >> 8) | bVar189,
                                                  (byte)iVar106 | (byte)uVar91))))))) &
               0xf0f0f0f0f0f0f0f0;
      uVar95 = CONCAT17((byte)((uint)iVar116 >> 0x18) | bVar83,
                        CONCAT16((byte)((uint)iVar116 >> 0x10) | bVar42,
                                 CONCAT15((byte)((uint)iVar116 >> 8) | bVar192,
                                          CONCAT14((byte)iVar116 | (byte)uVar196,
                                                   CONCAT13((byte)((uint)iVar112 >> 0x18) | bVar82,
                                                            CONCAT12((byte)((uint)iVar112 >> 0x10) |
                                                                     bVar41,CONCAT11((byte)((uint)
                                                  iVar112 >> 8) | bVar191,
                                                  (byte)iVar112 | (byte)uVar195))))))) &
               0xf0f0f0f0f0f0f0f0;
      uVar149 = CONCAT17((byte)((uint)iVar121 >> 0x18) | bVar161,
                         CONCAT16((byte)((uint)iVar121 >> 0x10) | bVar45,
                                  CONCAT15((byte)((uint)iVar121 >> 8) | bVar75,
                                           CONCAT14((byte)iVar121 | (byte)uVar132,
                                                    CONCAT13((byte)((uint)iVar118 >> 0x18) | bVar160
                                                             ,CONCAT12((byte)((uint)iVar118 >> 0x10)
                                                                       | bVar43,CONCAT11((byte)((
                                                  uint)iVar118 >> 8) | bVar12,
                                                  (byte)iVar118 | (byte)uVar129))))))) &
                0xf0f0f0f0f0f0f0f0;
      uVar152 = CONCAT17((byte)((uint)iVar126 >> 0x18) | bVar163,
                         CONCAT16((byte)((uint)iVar126 >> 0x10) | bVar47,
                                  CONCAT15((byte)((uint)iVar126 >> 8) | bVar77,
                                           CONCAT14((byte)iVar126 | (byte)uVar114,
                                                    CONCAT13((byte)((uint)iVar123 >> 0x18) | bVar162
                                                             ,CONCAT12((byte)((uint)iVar123 >> 0x10)
                                                                       | bVar46,CONCAT11((byte)((
                                                  uint)iVar123 >> 8) | bVar14,
                                                  (byte)iVar123 | (byte)uVar108))))))) &
                0xf0f0f0f0f0f0f0f0;
      bVar66 = (byte)uVar68 | (byte)uVar109;
      bVar70 = (byte)(uVar68 >> 8) | (byte)(uVar109 >> 8);
      bVar71 = (byte)(uVar68 >> 0x10) | (byte)(uVar109 >> 0x10);
      bVar72 = (byte)(uVar68 >> 0x18) | (byte)(uVar109 >> 0x18);
      uVar62 = CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,bVar66)));
      bVar73 = (byte)(uVar68 >> 0x20) | (byte)(uVar109 >> 0x20);
      bVar75 = (byte)(uVar68 >> 0x28) | (byte)(uVar109 >> 0x28);
      bVar76 = (byte)(uVar68 >> 0x30) | (byte)(uVar109 >> 0x30);
      bVar77 = (byte)(uVar68 >> 0x38) | (byte)(uVar109 >> 0x38);
      uVar69 = CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar73,uVar62))));
      bVar78 = (byte)uVar80 | (byte)uVar115;
      bVar81 = (byte)(uVar80 >> 8) | (byte)(uVar115 >> 8);
      bVar82 = (byte)(uVar80 >> 0x10) | (byte)(uVar115 >> 0x10);
      bVar83 = (byte)(uVar80 >> 0x18) | (byte)(uVar115 >> 0x18);
      uVar74 = CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar78)));
      bVar84 = (byte)(uVar80 >> 0x20) | (byte)(uVar115 >> 0x20);
      bVar86 = (byte)(uVar80 >> 0x28) | (byte)(uVar115 >> 0x28);
      bVar87 = (byte)(uVar80 >> 0x30) | (byte)(uVar115 >> 0x30);
      bVar88 = (byte)(uVar80 >> 0x38) | (byte)(uVar115 >> 0x38);
      uVar103 = CONCAT17(bVar88,CONCAT16(bVar87,CONCAT15(bVar86,CONCAT14(bVar84,uVar74))));
      bVar48 = ((byte)(uVar96 >> 4) | (byte)uVar138) & 0xf | (byte)uVar97;
      bVar49 = ((byte)(uint3)(uVar96 >> 0xc) | bVar10) & 0xf | (byte)(uVar97 >> 8);
      bVar50 = ((byte)(ushort)(uVar96 >> 0x14) | bVar50) & 0xf |
               ((byte)((uint)iVar128 >> 0x10) | bVar56) & 0xf0;
      bVar51 = bVar177 >> 4 | bVar177 & 0xf | ((byte)((uint)iVar128 >> 0x18) | bVar164) & 0xf0;
      bVar52 = ((byte)(uint)((ulong)uVar168 >> 0x24) | (byte)uVar139) & 0xf |
               (byte)iVar130 | (byte)uVar141 & 0xf0;
      bVar53 = ((byte)(uint3)((ulong)uVar168 >> 0x2c) | bVar169) & 0xf |
               ((byte)((uint)iVar130 >> 8) | bVar150) & 0xf0;
      bVar54 = ((byte)(ushort)((ulong)uVar168 >> 0x34) | bVar54) & 0xf |
               ((byte)((uint)iVar130 >> 0x10) | bVar58) & 0xf0;
      bVar55 = bVar178 >> 4 | bVar178 & 0xf | ((byte)((uint)iVar130 >> 0x18) | bVar165) & 0xf0;
      uVar34 = CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52)));
      bVar56 = ((byte)uVar57 | (byte)uVar134) & 0xf | (byte)uVar101;
      bVar58 = ((byte)(uVar57 >> 8) | bVar11) & 0xf | (byte)(uVar101 >> 8);
      bVar59 = (byte)uVar8 | ((byte)((uint)iVar131 >> 0x10) | bVar59) & 0xf0;
      bVar60 = (byte)(uVar8 >> 8) | ((byte)((uint)iVar131 >> 0x18) | bVar166) & 0xf0;
      uVar44 = CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar56)));
      bVar61 = (byte)(uVar8 >> 0x10) | (byte)iVar133 | (byte)uVar137 & 0xf0;
      bVar63 = (byte)(uVar8 >> 0x18) | ((byte)((uint)iVar133 >> 8) | bVar153) & 0xf0;
      bVar64 = (byte)(uVar8 >> 0x20) | ((byte)((uint)iVar133 >> 0x10) | bVar64) & 0xf0;
      bVar65 = bVar180 >> 4 | bVar180 & 0xf | ((byte)((uint)iVar133 >> 0x18) | bVar167) & 0xf0;
      uVar99 = CONCAT17(bVar65,CONCAT16(bVar64,CONCAT15(bVar63,CONCAT14(bVar61,uVar44))));
      bVar6 = (byte)uVar7 | (byte)uVar92;
      bVar9 = (byte)(uVar7 >> 8) | (byte)(uVar92 >> 8);
      bVar10 = (byte)(uVar7 >> 0x10) | (byte)(uVar92 >> 0x10);
      bVar11 = (byte)(uVar7 >> 0x18) | (byte)(uVar92 >> 0x18);
      uVar89 = CONCAT13(bVar11,CONCAT12(bVar10,CONCAT11(bVar9,bVar6)));
      bVar12 = (byte)(uVar7 >> 0x20) | (byte)(uVar92 >> 0x20);
      bVar14 = (byte)(uVar7 >> 0x28) | (byte)(uVar92 >> 0x28);
      bVar15 = (byte)(uVar7 >> 0x30) | (byte)(uVar92 >> 0x30);
      bVar16 = (byte)(uVar7 >> 0x38) | (byte)(uVar92 >> 0x38);
      uVar67 = CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar12,uVar89))));
      bVar17 = (byte)uVar18 | (byte)uVar95;
      bVar19 = (byte)(uVar18 >> 8) | (byte)(uVar95 >> 8);
      bVar20 = (byte)(uVar18 >> 0x10) | (byte)(uVar95 >> 0x10);
      bVar21 = (byte)(uVar18 >> 0x18) | (byte)(uVar95 >> 0x18);
      uVar13 = CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar17)));
      bVar22 = (byte)(uVar18 >> 0x20) | (byte)(uVar95 >> 0x20);
      bVar24 = (byte)(uVar18 >> 0x28) | (byte)(uVar95 >> 0x28);
      bVar25 = (byte)(uVar18 >> 0x30) | (byte)(uVar95 >> 0x30);
      bVar26 = (byte)(uVar18 >> 0x38) | (byte)(uVar95 >> 0x38);
      uVar79 = CONCAT17(bVar26,CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar22,uVar13))));
      bVar27 = (byte)uVar29 | (byte)uVar149;
      bVar30 = (byte)(uVar29 >> 8) | (byte)(uVar149 >> 8);
      bVar31 = (byte)(uVar29 >> 0x10) | (byte)(uVar149 >> 0x10);
      bVar32 = (byte)(uVar29 >> 0x18) | (byte)(uVar149 >> 0x18);
      uVar23 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar27)));
      bVar33 = (byte)(uVar29 >> 0x20) | (byte)(uVar149 >> 0x20);
      bVar35 = (byte)(uVar29 >> 0x28) | (byte)(uVar149 >> 0x28);
      bVar36 = (byte)(uVar29 >> 0x30) | (byte)(uVar149 >> 0x30);
      bVar37 = (byte)(uVar29 >> 0x38) | (byte)(uVar149 >> 0x38);
      uVar91 = CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar33,uVar23))));
      bVar38 = (byte)uVar39 | (byte)uVar152;
      bVar40 = (byte)(uVar39 >> 8) | (byte)(uVar152 >> 8);
      bVar41 = (byte)(uVar39 >> 0x10) | (byte)(uVar152 >> 0x10);
      bVar42 = (byte)(uVar39 >> 0x18) | (byte)(uVar152 >> 0x18);
      uVar28 = CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar38)));
      bVar43 = (byte)(uVar39 >> 0x20) | (byte)(uVar152 >> 0x20);
      bVar45 = (byte)(uVar39 >> 0x28) | (byte)(uVar152 >> 0x28);
      bVar46 = (byte)(uVar39 >> 0x30) | (byte)(uVar152 >> 0x30);
      bVar47 = (byte)(uVar39 >> 0x38) | (byte)(uVar152 >> 0x38);
      uVar94 = CONCAT17(bVar47,CONCAT16(bVar46,CONCAT15(bVar45,CONCAT14(bVar43,uVar28))));
      uVar62 = uVar62 >> 2;
      uVar122 = (uint)((ulong)uVar69 >> 0x22);
      uVar74 = uVar74 >> 2;
      uVar127 = (uint)((ulong)uVar103 >> 0x22);
      uVar107 = CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) >> 2;
      uVar111 = uVar34 >> 2;
      uVar44 = uVar44 >> 2;
      uVar117 = (uint)((ulong)uVar99 >> 0x22);
      uVar89 = uVar89 >> 2;
      uVar85 = (uint)((ulong)uVar67 >> 0x22);
      uVar13 = uVar13 >> 2;
      uVar96 = (uint)((ulong)uVar79 >> 0x22);
      uVar23 = uVar23 >> 2;
      uVar100 = (uint)((ulong)uVar91 >> 0x22);
      uVar28 = uVar28 >> 2;
      uVar105 = (uint)((ulong)uVar94 >> 0x22);
      bVar66 = (byte)uVar62 | bVar66;
      bVar70 = (byte)(uVar62 >> 8) | bVar70;
      bVar71 = (byte)(uVar62 >> 0x10) | bVar71;
      bVar72 = bVar72 >> 2 | bVar72;
      bVar73 = (byte)uVar122 | bVar73;
      bVar75 = (byte)(uVar122 >> 8) | bVar75;
      bVar76 = (byte)((uint3)((ulong)uVar69 >> 0x2a) >> 8) | bVar76;
      uVar119 = CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar73,CONCAT13(bVar72,CONCAT12(bVar71,
                                                  CONCAT11(bVar70,bVar66))))));
      bVar77 = bVar77 >> 2 | bVar77;
      uVar104 = CONCAT17(bVar77,uVar119);
      bVar78 = (byte)uVar74 | bVar78;
      bVar81 = (byte)(uVar74 >> 8) | bVar81;
      bVar82 = (byte)(uVar74 >> 0x10) | bVar82;
      bVar83 = bVar83 >> 2 | bVar83;
      bVar84 = (byte)uVar127 | bVar84;
      bVar86 = (byte)(uVar127 >> 8) | bVar86;
      bVar87 = (byte)((uint3)((ulong)uVar103 >> 0x2a) >> 8) | bVar87;
      uVar124 = CONCAT16(bVar87,CONCAT15(bVar86,CONCAT14(bVar84,CONCAT13(bVar83,CONCAT12(bVar82,
                                                  CONCAT11(bVar81,bVar78))))));
      bVar88 = bVar88 >> 2 | bVar88;
      uVar103 = CONCAT17(bVar88,uVar124);
      bVar48 = (byte)uVar107 | bVar48;
      bVar49 = (byte)(uVar107 >> 8) | bVar49;
      bVar50 = (byte)(uVar107 >> 0x10) | bVar50;
      bVar51 = bVar51 >> 2 | bVar51;
      uVar107 = CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)));
      bVar52 = (byte)uVar111 | bVar52;
      bVar53 = (byte)(uVar111 >> 8) | bVar53;
      bVar54 = (byte)((uint3)(uVar34 >> 10) >> 8) | bVar54;
      bVar55 = bVar55 >> 2 | bVar55;
      uVar69 = CONCAT17(bVar55,CONCAT16(bVar54,CONCAT15(bVar53,CONCAT14(bVar52,uVar107))));
      bVar56 = (byte)uVar44 | bVar56;
      bVar58 = (byte)(uVar44 >> 8) | bVar58;
      bVar59 = (byte)(uVar44 >> 0x10) | bVar59;
      bVar60 = bVar60 >> 2 | bVar60;
      bVar61 = (byte)uVar117 | bVar61;
      bVar63 = (byte)(uVar117 >> 8) | bVar63;
      bVar64 = (byte)((uint3)((ulong)uVar99 >> 0x2a) >> 8) | bVar64;
      uVar113 = CONCAT16(bVar64,CONCAT15(bVar63,CONCAT14(bVar61,CONCAT13(bVar60,CONCAT12(bVar59,
                                                  CONCAT11(bVar58,bVar56))))));
      bVar65 = bVar65 >> 2 | bVar65;
      uVar99 = CONCAT17(bVar65,uVar113);
      bVar6 = (byte)uVar89 | bVar6;
      bVar9 = (byte)(uVar89 >> 8) | bVar9;
      bVar10 = (byte)(uVar89 >> 0x10) | bVar10;
      bVar11 = bVar11 >> 2 | bVar11;
      bVar12 = (byte)uVar85 | bVar12;
      bVar14 = (byte)(uVar85 >> 8) | bVar14;
      bVar15 = (byte)((uint3)((ulong)uVar67 >> 0x2a) >> 8) | bVar15;
      uVar90 = CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar12,CONCAT13(bVar11,CONCAT12(bVar10,
                                                  CONCAT11(bVar9,bVar6))))));
      bVar16 = bVar16 >> 2 | bVar16;
      uVar67 = CONCAT17(bVar16,uVar90);
      bVar17 = (byte)uVar13 | bVar17;
      bVar19 = (byte)(uVar13 >> 8) | bVar19;
      bVar20 = (byte)(uVar13 >> 0x10) | bVar20;
      bVar21 = bVar21 >> 2 | bVar21;
      bVar22 = (byte)uVar96 | bVar22;
      bVar24 = (byte)(uVar96 >> 8) | bVar24;
      bVar25 = (byte)((uint3)((ulong)uVar79 >> 0x2a) >> 8) | bVar25;
      uVar93 = CONCAT16(bVar25,CONCAT15(bVar24,CONCAT14(bVar22,CONCAT13(bVar21,CONCAT12(bVar20,
                                                  CONCAT11(bVar19,bVar17))))));
      bVar26 = bVar26 >> 2 | bVar26;
      uVar79 = CONCAT17(bVar26,uVar93);
      bVar27 = (byte)uVar23 | bVar27;
      bVar30 = (byte)(uVar23 >> 8) | bVar30;
      bVar31 = (byte)(uVar23 >> 0x10) | bVar31;
      bVar32 = bVar32 >> 2 | bVar32;
      bVar33 = (byte)uVar100 | bVar33;
      bVar35 = (byte)(uVar100 >> 8) | bVar35;
      bVar36 = (byte)((uint3)((ulong)uVar91 >> 0x2a) >> 8) | bVar36;
      uVar98 = CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar33,CONCAT13(bVar32,CONCAT12(bVar31,
                                                  CONCAT11(bVar30,bVar27))))));
      bVar37 = bVar37 >> 2 | bVar37;
      uVar91 = CONCAT17(bVar37,uVar98);
      bVar38 = (byte)uVar28 | bVar38;
      bVar40 = (byte)(uVar28 >> 8) | bVar40;
      bVar41 = (byte)(uVar28 >> 0x10) | bVar41;
      bVar42 = bVar42 >> 2 | bVar42;
      bVar43 = (byte)uVar105 | bVar43;
      bVar45 = (byte)(uVar105 >> 8) | bVar45;
      bVar46 = (byte)((uint3)((ulong)uVar94 >> 0x2a) >> 8) | bVar46;
      uVar102 = CONCAT16(bVar46,CONCAT15(bVar45,CONCAT14(bVar43,CONCAT13(bVar42,CONCAT12(bVar41,
                                                  CONCAT11(bVar40,bVar38))))));
      bVar47 = bVar47 >> 2 | bVar47;
      uVar94 = CONCAT17(bVar47,uVar102);
      uVar57 = ((ulong)uVar119 & 0xfffffffe) >> 1;
      uVar13 = (uint)((ulong)uVar104 >> 0x21);
      uVar68 = ((ulong)uVar124 & 0xfffffffe) >> 1;
      uVar62 = (uint)((ulong)uVar103 >> 0x21);
      uVar39 = ((ulong)uVar113 & 0xfffffffe) >> 1;
      uVar74 = (uint)((ulong)uVar99 >> 0x21);
      uVar8 = ((ulong)uVar90 & 0xfffffffe) >> 1;
      uVar23 = (uint)((ulong)uVar67 >> 0x21);
      uVar7 = ((ulong)uVar93 & 0xfffffffe) >> 1;
      uVar28 = (uint)((ulong)uVar79 >> 0x21);
      uVar18 = ((ulong)uVar98 & 0xfffffffe) >> 1;
      uVar34 = (uint)((ulong)uVar91 >> 0x21);
      uVar29 = ((ulong)uVar102 & 0xfffffffe) >> 1;
      uVar44 = (uint)((ulong)uVar94 >> 0x21);
      bVar66 = (byte)uVar57 | bVar66;
      bVar77 = bVar77 >> 1 | bVar77;
      bVar78 = (byte)uVar68 | bVar78;
      bVar88 = bVar88 >> 1 | bVar88;
      bVar48 = (byte)(uVar107 >> 1) | bVar48;
      bVar50 = (byte)(ushort)(uVar107 >> 0x11) | bVar50;
      bVar51 = bVar51 >> 1 | bVar51;
      uVar89 = CONCAT13((byte)(uVar57 >> 0x18) | bVar72,
                        CONCAT12((byte)(uVar57 >> 0x10) | bVar71,
                                 CONCAT11((byte)(uVar57 >> 8) | bVar70,bVar66)));
      uVar57 = CONCAT17(bVar77,CONCAT16((byte)((uint3)((ulong)uVar104 >> 0x29) >> 8) | bVar76,
                                        CONCAT15((byte)(uVar13 >> 8) | bVar75,
                                                 CONCAT14((byte)uVar13 | bVar73,uVar89)))) &
               0x1111111111111111;
      uVar13 = CONCAT13((byte)(uVar68 >> 0x18) | bVar83,
                        CONCAT12((byte)(uVar68 >> 0x10) | bVar82,
                                 CONCAT11((byte)(uVar68 >> 8) | bVar81,bVar78)));
      uVar68 = CONCAT17(bVar88,CONCAT16((byte)((uint3)((ulong)uVar103 >> 0x29) >> 8) | bVar87,
                                        CONCAT15((byte)(uVar62 >> 8) | bVar86,
                                                 CONCAT14((byte)uVar62 | bVar84,uVar13)))) &
               0x1111111111111111;
      uVar62 = CONCAT13(bVar55 >> 1 | bVar55,
                        CONCAT12((byte)(ushort)((ulong)uVar69 >> 0x31) | bVar54,
                                 CONCAT11((byte)(uint3)((ulong)uVar69 >> 0x29) | bVar53,
                                          (byte)(uint)((ulong)uVar69 >> 0x21) | bVar52))) &
               0x11111111;
      uVar39 = CONCAT17(bVar65 >> 1 | bVar65,
                        CONCAT16((byte)((uint3)((ulong)uVar99 >> 0x29) >> 8) | bVar64,
                                 CONCAT15((byte)(uVar74 >> 8) | bVar63,
                                          CONCAT14((byte)uVar74 | bVar61,
                                                   CONCAT13((byte)(uVar39 >> 0x18) | bVar60,
                                                            CONCAT12((byte)(uVar39 >> 0x10) | bVar59
                                                                     ,CONCAT11((byte)(uVar39 >> 8) |
                                                                               bVar58,(byte)uVar39 |
                                                                                      bVar56)))))))
               & 0x1111111111111111;
      uVar18 = CONCAT17(bVar37 >> 1 | bVar37,
                        CONCAT16((byte)((uint3)((ulong)uVar91 >> 0x29) >> 8) | bVar36,
                                 CONCAT15((byte)(uVar34 >> 8) | bVar35,
                                          CONCAT14((byte)uVar34 | bVar33,
                                                   CONCAT13((byte)(uVar18 >> 0x18) | bVar32,
                                                            CONCAT12((byte)(uVar18 >> 0x10) | bVar31
                                                                     ,CONCAT11((byte)(uVar18 >> 8) |
                                                                               bVar30,(byte)uVar18 |
                                                                                      bVar27)))))))
               & 0x1111111111111111;
      uVar29 = CONCAT17(bVar47 >> 1 | bVar47,
                        CONCAT16((byte)((uint3)((ulong)uVar94 >> 0x29) >> 8) | bVar46,
                                 CONCAT15((byte)(uVar44 >> 8) | bVar45,
                                          CONCAT14((byte)uVar44 | bVar43,
                                                   CONCAT13((byte)(uVar29 >> 0x18) | bVar42,
                                                            CONCAT12((byte)(uVar29 >> 0x10) | bVar41
                                                                     ,CONCAT11((byte)(uVar29 >> 8) |
                                                                               bVar40,(byte)uVar29 |
                                                                                      bVar38)))))))
               & 0x1111111111111111;
      uVar8 = CONCAT17(bVar16 >> 1 | bVar16,
                       CONCAT16((byte)((uint3)((ulong)uVar67 >> 0x29) >> 8) | bVar15,
                                CONCAT15((byte)(uVar23 >> 8) | bVar14,
                                         CONCAT14((byte)uVar23 | bVar12,
                                                  CONCAT13((byte)(uVar8 >> 0x18) | bVar11,
                                                           CONCAT12((byte)(uVar8 >> 0x10) | bVar10,
                                                                    CONCAT11((byte)(uVar8 >> 8) |
                                                                             bVar9,(byte)uVar8 |
                                                                                   bVar6))))))) &
              0x1111111111111111;
      uVar7 = CONCAT17(bVar26 >> 1 | bVar26,
                       CONCAT16((byte)((uint3)((ulong)uVar79 >> 0x29) >> 8) | bVar25,
                                CONCAT15((byte)(uVar28 >> 8) | bVar24,
                                         CONCAT14((byte)uVar28 | bVar22,
                                                  CONCAT13((byte)(uVar7 >> 0x18) | bVar21,
                                                           CONCAT12((byte)(uVar7 >> 0x10) | bVar20,
                                                                    CONCAT11((byte)(uVar7 >> 8) |
                                                                             bVar19,(byte)uVar7 |
                                                                                    bVar17))))))) &
              0x1111111111111111;
      uVar111 = (uVar89 & 0x11111111) >> 7;
      uVar117 = (uint)(uVar57 >> 0x27);
      uVar122 = (uVar13 & 0x11111111) >> 7;
      uVar127 = (uint)(uVar68 >> 0x27);
      uVar96 = (CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11((byte)(uint3)(uVar107 >> 9) | bVar49,bVar48
                                                        ))) & 0x11111111) >> 7;
      uVar100 = (uint)(uVar39 >> 7) & 0x1ffffff;
      uVar105 = (uint)(uVar39 >> 0x27);
      uVar34 = (uint)(uVar18 >> 7) & 0x1ffffff;
      uVar44 = (uint)(uVar18 >> 0x27);
      uVar74 = (uint)(uVar29 >> 7) & 0x1ffffff;
      uVar85 = (uint)(uVar29 >> 0x27);
      uVar89 = (uint)(uVar8 >> 7) & 0x1ffffff;
      uVar13 = (uint)(uVar8 >> 0x27);
      uVar23 = (uint)(uVar7 >> 7) & 0x1ffffff;
      uVar28 = (uint)(uVar7 >> 0x27);
      ((undefined8 *)((long)param_1 + lVar5))[1] =
           CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar28 >> 0x10) | (byte)(uVar7 >> 0x30)) <<
                                  0x30) >> 0x2e) | (byte)uVar28 | (byte)(uVar7 >> 0x20),
                    CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar23 >> 0x10) |
                                                         (byte)(uVar7 >> 0x10)) << 0x10) >> 0xe) |
                             (byte)uVar23 | (byte)uVar7,
                             CONCAT15((byte)(uint3)(((uint7)(byte)((byte)(uVar13 >> 0x10) |
                                                                  (byte)(uVar8 >> 0x30)) << 0x30) >>
                                                   0x2e) | (byte)uVar13 | (byte)(uVar8 >> 0x20),
                                      CONCAT14((byte)((uint3)((uint3)(byte)((byte)(uVar89 >> 0x10) |
                                                                           (byte)(uVar8 >> 0x10)) <<
                                                             0x10) >> 0xe) |
                                               (byte)uVar89 | (byte)uVar8,
                                               CONCAT13((byte)(uint3)(((uint7)(byte)((byte)(uVar85 
                                                  >> 0x10) | (byte)(uVar29 >> 0x30)) << 0x30) >>
                                                  0x2e) | (byte)uVar85 | (byte)(uVar29 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar74 >> 0x10) | (byte)(uVar29 >> 0x10)) << 0x10)
                                                  >> 0xe) | (byte)uVar74 | (byte)uVar29,
                                                  CONCAT11((byte)(uint3)(((uint7)(byte)((byte)(
                                                  uVar44 >> 0x10) | (byte)(uVar18 >> 0x30)) << 0x30)
                                                  >> 0x2e) | (byte)uVar44 | (byte)(uVar18 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar34 >> 0x10
                                                                                     ) |
                                                                              (byte)(uVar18 >> 0x10)
                                                                              ) << 0x10) >> 0xe) |
                                                  (byte)uVar34 | (byte)uVar18)))))));
      *(undefined8 *)((long)param_1 + lVar5) =
           CONCAT17((byte)(uint3)(((uint7)(byte)((byte)(uVar105 >> 0x10) | (byte)(uVar39 >> 0x30))
                                  << 0x30) >> 0x2e) | (byte)uVar105 | (byte)(uVar39 >> 0x20),
                    CONCAT16((byte)((uint3)((uint3)(byte)((byte)(uVar100 >> 0x10) |
                                                         (byte)(uVar39 >> 0x10)) << 0x10) >> 0xe) |
                             (byte)uVar100 | (byte)uVar39,
                             CONCAT15((byte)((uint3)((uint3)(byte)((byte)((uVar62 >> 7) >> 0x10) |
                                                                  (byte)(uVar62 >> 0x10)) << 0x10)
                                            >> 0xe) | (byte)(uVar62 >> 7) | (byte)uVar62,
                                      CONCAT14((byte)(((CONCAT11(bVar51,(byte)(uVar96 >> 0x10) |
                                                                        bVar50 & 0x11) & 0x11ff) <<
                                                      0x10) >> 0xe) | (byte)uVar96 | bVar48 & 0x11,
                                               CONCAT13((byte)(((uint)(((ulong)CONCAT11(bVar88,(byte
                                                  )(uVar127 >> 0x10) | (byte)(uVar68 >> 0x30)) <<
                                                  0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                                  (byte)uVar127 | (byte)(uVar68 >> 0x20),
                                                  CONCAT12((byte)((uint3)((uint3)(byte)((byte)(
                                                  uVar122 >> 0x10) | (byte)(uVar68 >> 0x10)) << 0x10
                                                  ) >> 0xe) | (byte)uVar122 | bVar78 & 0x11,
                                                  CONCAT11((byte)(((uint)(((ulong)CONCAT11(bVar77,(
                                                  byte)(uVar117 >> 0x10) | (byte)(uVar57 >> 0x30))
                                                  << 0x30) >> 0x20) & 0x11ffffff) >> 0xe) |
                                                  (byte)uVar117 | (byte)(uVar57 >> 0x20),
                                                  (byte)((uint3)((uint3)(byte)((byte)(uVar111 >>
                                                                                     0x10) |
                                                                              (byte)(uVar57 >> 0x10)
                                                                              ) << 0x10) >> 0xe) |
                                                  (byte)uVar111 | bVar66 & 0x11)))))));
      lVar5 = lVar5 + 0x10;
      param_2 = param_2 + 0x20;
    } while (lVar5 != 0x20);
  }
  if (lVar4 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 - ___stack_chk_guard,0);
}


