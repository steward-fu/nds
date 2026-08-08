/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_vertex_block_c
 * Address  : 0015ecc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void geometry_transform_vertex_block_c(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
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
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  long lVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  ulong uVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  ulong uVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  long lVar58;
  ulong uVar59;
  uint uVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  undefined uVar84;
  undefined uVar85;
  undefined uVar86;
  undefined uVar87;
  undefined uVar88;
  undefined uVar89;
  undefined uVar90;
  undefined uVar91;
  undefined uVar92;
  undefined uVar93;
  undefined uVar94;
  undefined uVar95;
  undefined uVar96;
  undefined uVar97;
  undefined uVar98;
  undefined uVar99;
  undefined uVar100;
  undefined uVar101;
  undefined uVar102;
  undefined uVar103;
  undefined uVar104;
  undefined uVar105;
  undefined uVar106;
  undefined uVar107;
  undefined uVar108;
  undefined uVar109;
  undefined uVar110;
  undefined uVar111;
  undefined uVar112;
  undefined uVar113;
  undefined uVar114;
  undefined uVar115;
  undefined uVar116;
  undefined uVar117;
  undefined uVar118;
  undefined uVar119;
  undefined uVar120;
  undefined uVar121;
  undefined uVar122;
  undefined uVar123;
  undefined uVar124;
  undefined uVar125;
  undefined uVar126;
  undefined uVar127;
  undefined uVar128;
  undefined uVar129;
  undefined uVar130;
  undefined uVar131;
  undefined uVar132;
  undefined uVar133;
  undefined uVar134;
  undefined uVar135;
  undefined uVar136;
  int iVar137;
  int iVar139;
  int iVar140;
  undefined auVar138 [16];
  undefined uVar141;
  undefined uVar142;
  undefined uVar143;
  undefined uVar144;
  undefined uVar145;
  undefined uVar146;
  undefined uVar147;
  undefined uVar148;
  undefined uVar149;
  undefined uVar150;
  undefined uVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  int iVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  undefined auVar176 [16];
  int iVar177;
  int iVar179;
  undefined auVar178 [16];
  int iVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  undefined auVar184 [16];
  int iVar186;
  undefined auVar185 [16];
  undefined auVar187 [16];
  int iVar188;
  int iVar190;
  undefined auVar189 [16];
  undefined auVar191 [16];
  undefined auVar192 [16];
  undefined auVar193 [16];
  undefined auVar194 [16];
  undefined auVar195 [16];
  undefined auVar196 [16];
  undefined auVar197 [16];
  undefined auVar198 [16];
  undefined auVar199 [16];
  undefined auVar200 [16];
  int iVar201;
  int iVar202;
  int iVar203;
  int iVar204;
  undefined auVar205 [16];
  undefined auVar206 [16];
  undefined auVar207 [16];
  undefined auVar208 [16];
  undefined auVar209 [16];
  int iVar214;
  undefined auVar210 [16];
  undefined auVar211 [16];
  undefined auVar212 [16];
  undefined auVar213 [16];
  undefined auVar215 [16];
  undefined auVar216 [16];
  undefined auVar217 [16];
  undefined auVar218 [16];
  undefined auVar219 [16];
  undefined auVar220 [16];
  undefined auVar221 [16];
  int iVar228;
  undefined auVar222 [16];
  undefined auVar223 [16];
  undefined auVar224 [16];
  undefined auVar225 [16];
  undefined auVar226 [16];
  undefined auVar227 [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined uStack_118;
  undefined7 uStack_117;
  
  lVar48 = ___stack_chk_guard;
  uVar10 = *(uint *)(param_1 + 0x60);
  uVar60 = *(uint *)(param_1 + 0x66);
  iVar11 = *(int *)((long)param_1 + 0x97e4);
  iVar12 = *(int *)(param_1 + 0x12fd);
  uVar59 = (ulong)uVar60 & 0x3fffffff;
  iVar13 = *(int *)((long)param_1 + 0x97ec);
  iVar14 = *(int *)(param_1 + 0x12fe);
  iVar15 = *(int *)((long)param_1 + 0x97f4);
  iVar16 = *(int *)(param_1 + 0x12ff);
  iVar17 = *(int *)((long)param_1 + 0x97fc);
  iVar18 = *(int *)(param_1 + 0x1300);
  iVar19 = *(int *)((long)param_1 + 0x9804);
  iVar20 = *(int *)(param_1 + 0x1301);
  uVar55 = (ulong)uVar60;
  puVar57 = param_1 + uVar59 * 2 + 0xca;
  iVar21 = *(int *)((long)param_1 + 0x980c);
  iVar22 = *(int *)(param_1 + 0x1302);
  iVar23 = *(int *)((long)param_1 + 0x9814);
  iVar24 = *(int *)(param_1 + 0x1303);
  iVar25 = *(int *)((long)param_1 + 0x981c);
  iVar26 = *(int *)(param_1 + 0x1304);
  if (uVar10 != 0) {
    uVar52 = (ulong)uVar10;
    lVar6 = uVar55 + 0x1290;
    lVar58 = (ulong)(uVar60 << 2) + uVar52 * 4 + 0x194;
    lVar3 = uVar52 + 0x80;
    lVar4 = uVar59 * 0x10 + 0x650;
    lVar7 = uVar55 + uVar52 + 0x1290;
    bVar2 = lVar6 + lVar58 * -4 < 0 != SBORROW8(lVar6,lVar58 * 4);
    bVar49 = false;
    if (bVar2) {
      bVar49 = lVar7 - lVar4 < 0;
    }
    bVar49 = bVar49 == (bVar2 && SBORROW8(lVar7,lVar4));
    bVar50 = false;
    if ((!bVar2 || lVar7 == lVar4) || !bVar49) {
      bVar50 = lVar4 + lVar3 * -4 < 0;
    }
    bVar1 = uVar10 - 1 < 0xf;
    bVar51 = false;
    if (!bVar1) {
      bVar51 = lVar6 + lVar3 * -4 < 0;
    }
    if (bVar50 == ((bVar2 && lVar7 != lVar4) && bVar49 || SBORROW8(lVar4,lVar3 * 4)) &&
        bVar51 == (bVar1 || SBORROW8(lVar6,lVar3 * 4))) {
      uVar98 = (undefined)((uint)iVar11 >> 0x10);
      uVar112 = (undefined)((uint)iVar11 >> 0x18);
      uVar84 = (undefined)((uint)iVar11 >> 8);
      uVar85 = (undefined)((uint)iVar15 >> 8);
      uVar99 = (undefined)((uint)iVar15 >> 0x10);
      uVar113 = (undefined)((uint)iVar15 >> 0x18);
      uVar86 = (undefined)((uint)iVar19 >> 8);
      uVar100 = (undefined)((uint)iVar19 >> 0x10);
      uVar114 = (undefined)((uint)iVar19 >> 0x18);
      uVar87 = (undefined)((uint)iVar23 >> 8);
      uVar101 = (undefined)((uint)iVar23 >> 0x10);
      uVar115 = (undefined)((uint)iVar23 >> 0x18);
      uVar102 = (undefined)((uint)iVar12 >> 0x10);
      uVar116 = (undefined)((uint)iVar12 >> 0x18);
      uVar88 = (undefined)((uint)iVar12 >> 8);
      uVar89 = (undefined)((uint)iVar16 >> 8);
      uVar103 = (undefined)((uint)iVar16 >> 0x10);
      uVar117 = (undefined)((uint)iVar16 >> 0x18);
      uVar90 = (undefined)((uint)iVar20 >> 8);
      uVar104 = (undefined)((uint)iVar20 >> 0x10);
      uVar118 = (undefined)((uint)iVar20 >> 0x18);
      uVar91 = (undefined)((uint)iVar24 >> 8);
      uVar105 = (undefined)((uint)iVar24 >> 0x10);
      uVar119 = (undefined)((uint)iVar24 >> 0x18);
      uVar92 = (undefined)((uint)iVar13 >> 8);
      uVar106 = (undefined)((uint)iVar13 >> 0x10);
      uVar120 = (undefined)((uint)iVar13 >> 0x18);
      uVar93 = (undefined)((uint)iVar17 >> 8);
      uVar107 = (undefined)((uint)iVar17 >> 0x10);
      uVar121 = (undefined)((uint)iVar17 >> 0x18);
      uVar94 = (undefined)((uint)iVar21 >> 8);
      uVar108 = (undefined)((uint)iVar21 >> 0x10);
      uVar122 = (undefined)((uint)iVar21 >> 0x18);
      uVar95 = (undefined)((uint)iVar25 >> 8);
      uVar109 = (undefined)((uint)iVar25 >> 0x10);
      uVar123 = (undefined)((uint)iVar25 >> 0x18);
      uVar96 = (undefined)((uint)iVar14 >> 8);
      uVar110 = (undefined)((uint)iVar14 >> 0x10);
      uVar124 = (undefined)((uint)iVar14 >> 0x18);
      uVar97 = (undefined)((uint)iVar26 >> 8);
      uVar111 = (undefined)((uint)iVar26 >> 0x10);
      uVar125 = (undefined)((uint)iVar26 >> 0x18);
      puVar53 = param_1;
      puVar54 = param_1 + uVar59 * 2 + 0xca;
      puVar56 = (undefined8 *)((long)param_1 + lVar6);
      do {
        iVar157 = (int)puVar53[0x20];
        iVar161 = (int)((ulong)puVar53[0x20] >> 0x20);
        iVar61 = (int)puVar53[0x21];
        iVar70 = (int)((ulong)puVar53[0x21] >> 0x20);
        iVar139 = (int)(CONCAT17(uVar113,CONCAT16(uVar99,CONCAT15(uVar85,CONCAT14((char)iVar15,
                                                                                  iVar15)))) >> 0x20
                       );
        iVar79 = (int)(CONCAT17(uVar113,CONCAT16(uVar99,CONCAT15(uVar85,CONCAT14((char)iVar15,iVar15
                                                                                )))) >> 0x20);
        iVar27 = (int)puVar53[0x22];
        iVar28 = (int)((ulong)puVar53[0x22] >> 0x20);
        iVar62 = (int)puVar53[0x23];
        iVar71 = (int)((ulong)puVar53[0x23] >> 0x20);
        iVar167 = (int)puVar53[0x24];
        iVar169 = (int)((ulong)puVar53[0x24] >> 0x20);
        iVar63 = (int)puVar53[0x25];
        iVar72 = (int)((ulong)puVar53[0x25] >> 0x20);
        iVar155 = (int)puVar53[0x26];
        iVar159 = (int)((ulong)puVar53[0x26] >> 0x20);
        iVar64 = (int)puVar53[0x27];
        iVar73 = (int)((ulong)puVar53[0x27] >> 0x20);
        iVar164 = (int)puVar53[3];
        iVar165 = (int)((ulong)puVar53[3] >> 0x20);
        iVar162 = (int)puVar53[2];
        iVar163 = (int)((ulong)puVar53[2] >> 0x20);
        auVar195 = *(undefined (*) [16])(puVar53 + 4);
        iVar174 = (int)*puVar53;
        iVar175 = (int)((ulong)*puVar53 >> 0x20);
        iVar201 = (int)(CONCAT17(uVar112,CONCAT16(uVar98,CONCAT15(uVar84,CONCAT14((char)iVar11,
                                                                                  iVar11)))) >> 0x20
                       );
        iVar65 = (int)puVar53[1];
        iVar74 = (int)((ulong)puVar53[1] >> 0x20);
        iVar80 = (int)(CONCAT17(uVar112,CONCAT16(uVar98,CONCAT15(uVar84,CONCAT14((char)iVar11,iVar11
                                                                                )))) >> 0x20);
        iVar171 = (int)(CONCAT17(uVar124,CONCAT16(uVar110,CONCAT15(uVar96,CONCAT14((char)iVar14,
                                                                                   iVar14)))) >>
                       0x20);
        iVar81 = (int)(CONCAT17(uVar124,CONCAT16(uVar110,CONCAT15(uVar96,CONCAT14((char)iVar14,
                                                                                  iVar14)))) >> 0x20
                      );
        iVar152 = auVar195._0_4_;
        iVar153 = auVar195._4_4_;
        iVar66 = auVar195._8_4_;
        iVar75 = auVar195._12_4_;
        iVar29 = (int)puVar53[6];
        iVar30 = (int)((ulong)puVar53[6] >> 0x20);
        iVar67 = (int)puVar53[7];
        iVar76 = (int)((ulong)puVar53[7] >> 0x20);
        iVar170 = (int)puVar53[0x41];
        iVar172 = (int)((ulong)puVar53[0x41] >> 0x20);
        iVar166 = (int)puVar53[0x40];
        iVar168 = (int)((ulong)puVar53[0x40] >> 0x20);
        iVar158 = (int)puVar53[0x43];
        iVar160 = (int)((ulong)puVar53[0x43] >> 0x20);
        iVar154 = (int)puVar53[0x42];
        iVar156 = (int)((ulong)puVar53[0x42] >> 0x20);
        puVar5 = puVar53 + 8;
        auVar195 = *(undefined (*) [16])(puVar53 + 0x46);
        iVar228 = (int)(CONCAT17(uVar114,CONCAT16(uVar100,CONCAT15(uVar86,CONCAT14((char)iVar19,
                                                                                   iVar19)))) >>
                       0x20);
        iVar82 = (int)(CONCAT17(uVar114,CONCAT16(uVar100,CONCAT15(uVar86,CONCAT14((char)iVar19,
                                                                                  iVar19)))) >> 0x20
                      );
        iVar173 = (int)puVar53[0x44];
        iVar31 = (int)((ulong)puVar53[0x44] >> 0x20);
        iVar68 = (int)puVar53[0x45];
        iVar77 = (int)((ulong)puVar53[0x45] >> 0x20);
        iVar137 = auVar195._0_4_;
        iVar140 = auVar195._4_4_;
        iVar69 = auVar195._8_4_;
        iVar78 = auVar195._12_4_;
        iVar214 = (int)(CONCAT17(uVar117,CONCAT16(uVar103,CONCAT15(uVar89,CONCAT14((char)iVar16,
                                                                                   iVar16)))) >>
                       0x20);
        iVar180 = (int)((long)iVar27 * (long)iVar18 + (long)iVar162 * (long)iVar14 +
                        (long)iVar154 * (long)iVar22 >> 0xc) + iVar26;
        iVar202 = (int)(CONCAT17(uVar125,CONCAT16(uVar111,CONCAT15(uVar97,CONCAT14((char)iVar26,
                                                                                   iVar26)))) >>
                       0x20);
        iVar181 = (int)((long)iVar28 * (long)iVar18 + (long)iVar163 * (long)iVar171 +
                        (long)iVar156 * (long)iVar22 >> 0xc) + iVar202;
        iVar182 = (int)((long)iVar62 * (long)iVar18 + (long)iVar164 * (long)iVar14 +
                        (long)iVar158 * (long)iVar22 >> 0xc) + iVar26;
        iVar204 = (int)(CONCAT17(uVar125,CONCAT16(uVar111,CONCAT15(uVar97,CONCAT14((char)iVar26,
                                                                                   iVar26)))) >>
                       0x20);
        iVar183 = (int)((long)iVar71 * (long)iVar18 + (long)iVar165 * (long)iVar81 +
                        (long)iVar160 * (long)iVar22 >> 0xc) + iVar204;
        iVar83 = (int)(CONCAT17(uVar117,CONCAT16(uVar103,CONCAT15(uVar89,CONCAT14((char)iVar16,
                                                                                  iVar16)))) >> 0x20
                      );
        iVar188 = (int)((long)iVar155 * (long)iVar15 + (long)iVar29 * (long)iVar11 +
                        (long)iVar137 * (long)iVar19 >> 0xc) + iVar23;
        iVar203 = (int)(CONCAT17(uVar115,CONCAT16(uVar101,CONCAT15(uVar87,CONCAT14((char)iVar23,
                                                                                   iVar23)))) >>
                       0x20);
        iVar190 = (int)((long)iVar159 * (long)iVar139 + (long)iVar30 * (long)iVar201 +
                        (long)iVar140 * (long)iVar228 >> 0xc) + iVar203;
        iVar186 = (int)(CONCAT17(uVar115,CONCAT16(uVar101,CONCAT15(uVar87,CONCAT14((char)iVar23,
                                                                                   iVar23)))) >>
                       0x20);
        auVar210._0_4_ =
             (int)((long)iVar157 * (long)iVar18 + (long)iVar174 * (long)iVar14 +
                   (long)iVar166 * (long)iVar22 >> 0xc) + iVar26;
        auVar210._4_4_ =
             (int)((long)iVar161 * (long)iVar18 + (long)iVar175 * (long)iVar171 +
                   (long)iVar168 * (long)iVar22 >> 0xc) + iVar202;
        auVar210._8_4_ =
             (int)((long)iVar61 * (long)iVar18 + (long)iVar65 * (long)iVar14 +
                   (long)iVar170 * (long)iVar22 >> 0xc) + iVar26;
        auVar210._12_4_ =
             (int)((long)iVar70 * (long)iVar18 + (long)iVar74 * (long)iVar81 +
                   (long)iVar172 * (long)iVar22 >> 0xc) + iVar204;
        iVar177 = (int)((long)iVar167 * (long)iVar18 + (long)iVar152 * (long)iVar14 +
                        (long)iVar173 * (long)iVar22 >> 0xc) + iVar26;
        iVar179 = (int)((long)iVar169 * (long)iVar18 + (long)iVar153 * (long)iVar171 +
                        (long)iVar31 * (long)iVar22 >> 0xc) + iVar202;
        auVar205._0_4_ =
             (int)((long)iVar157 * (long)iVar15 + (long)iVar174 * (long)iVar11 +
                   (long)iVar166 * (long)iVar19 >> 0xc) + iVar23;
        auVar205._4_4_ =
             (int)((long)iVar161 * (long)iVar139 + (long)iVar175 * (long)iVar201 +
                   (long)iVar168 * (long)iVar228 >> 0xc) + iVar203;
        auVar205._8_4_ =
             (int)((long)iVar61 * (long)iVar15 + (long)iVar65 * (long)iVar11 +
                   (long)iVar170 * (long)iVar19 >> 0xc) + iVar23;
        auVar205._12_4_ =
             (int)((long)iVar70 * (long)iVar79 + (long)iVar74 * (long)iVar80 +
                   (long)iVar172 * (long)iVar82 >> 0xc) + iVar186;
        auVar197._0_4_ =
             (int)((long)iVar167 * (long)iVar15 + (long)iVar152 * (long)iVar11 +
                   (long)iVar173 * (long)iVar19 >> 0xc) + iVar23;
        auVar197._4_4_ =
             (int)((long)iVar169 * (long)iVar139 + (long)iVar153 * (long)iVar201 +
                   (long)iVar31 * (long)iVar228 >> 0xc) + iVar203;
        auVar197._8_4_ =
             (int)((long)iVar63 * (long)iVar15 + (long)iVar66 * (long)iVar11 +
                   (long)iVar68 * (long)iVar19 >> 0xc) + iVar23;
        auVar197._12_4_ =
             (int)((long)iVar72 * (long)iVar79 + (long)iVar75 * (long)iVar80 +
                   (long)iVar77 * (long)iVar82 >> 0xc) + iVar186;
        auVar215._0_4_ =
             (int)((long)iVar27 * (long)iVar15 + (long)iVar162 * (long)iVar11 +
                   (long)iVar154 * (long)iVar19 >> 0xc) + iVar23;
        auVar215._4_4_ =
             (int)((long)iVar28 * (long)iVar139 + (long)iVar163 * (long)iVar201 +
                   (long)iVar156 * (long)iVar228 >> 0xc) + iVar203;
        auVar215._8_4_ =
             (int)((long)iVar62 * (long)iVar15 + (long)iVar164 * (long)iVar11 +
                   (long)iVar158 * (long)iVar19 >> 0xc) + iVar23;
        auVar215._12_4_ =
             (int)((long)iVar71 * (long)iVar79 + (long)iVar165 * (long)iVar80 +
                   (long)iVar160 * (long)iVar82 >> 0xc) + iVar186;
        iVar201 = (int)((long)iVar155 * (long)iVar18 + (long)iVar29 * (long)iVar14 +
                        (long)iVar137 * (long)iVar22 >> 0xc) + iVar26;
        iVar202 = (int)((long)iVar159 * (long)iVar18 + (long)iVar30 * (long)iVar171 +
                        (long)iVar140 * (long)iVar22 >> 0xc) + iVar202;
        iVar203 = (int)((long)iVar64 * (long)iVar18 + (long)iVar67 * (long)iVar14 +
                        (long)iVar69 * (long)iVar22 >> 0xc) + iVar26;
        iVar204 = (int)((long)iVar73 * (long)iVar18 + (long)iVar76 * (long)iVar81 +
                        (long)iVar78 * (long)iVar22 >> 0xc) + iVar204;
        auVar189 = NEON_neg(auVar210,4);
        iVar82 = (int)(CONCAT17(uVar116,CONCAT16(uVar102,CONCAT15(uVar88,CONCAT14((char)iVar12,
                                                                                  iVar12)))) >> 0x20
                      );
        iVar171 = (int)(CONCAT17(uVar116,CONCAT16(uVar102,CONCAT15(uVar88,CONCAT14((char)iVar12,
                                                                                   iVar12)))) >>
                       0x20);
        auVar222 = NEON_cmgt(auVar205,auVar210,4);
        iVar139 = (int)(CONCAT17(uVar118,CONCAT16(uVar104,CONCAT15(uVar90,CONCAT14((char)iVar20,
                                                                                   iVar20)))) >>
                       0x20);
        iVar79 = (int)(CONCAT17(uVar118,CONCAT16(uVar104,CONCAT15(uVar90,CONCAT14((char)iVar20,
                                                                                  iVar20)))) >> 0x20
                      );
        auVar195 = NEON_cmge(auVar205,auVar189,4);
        auVar223._0_8_ = CONCAT35(0,CONCAT14(auVar222[4],(uint)(auVar222[0] & 1)) & 0x1ffffffff);
        auVar223[8] = auVar222[8] & 1;
        auVar223._9_3_ = 0;
        auVar223[12] = auVar222[12] & 1;
        auVar223._13_3_ = 0;
        auVar43._4_4_ = iVar179;
        auVar43._0_4_ = iVar177;
        auVar43._8_8_ = uStack_138;
        auVar45._4_4_ = iVar190;
        auVar45._0_4_ = iVar188;
        auVar45._8_8_ = uStack_128;
        uStack_118 = (undefined)auVar210._8_4_;
        uStack_117 = auVar210._9_7_;
        auVar192._0_8_ = auVar223._0_8_ | 0x200000002;
        auVar192._8_4_ = auVar223[8] | 2;
        auVar192._12_4_ = auVar223[12] | 2;
        auVar37._4_4_ = iVar202;
        auVar37._0_4_ = iVar201;
        auVar37._8_4_ = iVar203;
        auVar37._12_4_ = iVar204;
        auVar222 = NEON_cmgt(auVar45,auVar37,4);
        auVar191._4_4_ = iVar181;
        auVar191._0_4_ = iVar180;
        auVar191._8_4_ = iVar182;
        auVar191._12_4_ = iVar183;
        auVar216 = NEON_cmgt(auVar215,auVar191,4);
        auVar224 = NEON_bif(auVar223,auVar192,auVar195,1);
        auVar47._4_4_ = auVar210._4_4_;
        auVar47._0_4_ = auVar210._0_4_;
        auVar47[8] = uStack_118;
        auVar47._9_7_ = uStack_117;
        auVar196._0_4_ =
             (int)((long)iVar157 * (long)iVar16 + (long)iVar174 * (long)iVar12 +
                   (long)iVar166 * (long)iVar20 >> 0xc) + iVar24;
        iVar80 = (int)(CONCAT17(uVar119,CONCAT16(uVar105,CONCAT15(uVar91,CONCAT14((char)iVar24,
                                                                                  iVar24)))) >> 0x20
                      );
        auVar196._4_4_ =
             (int)((long)iVar161 * (long)iVar214 + (long)iVar175 * (long)iVar82 +
                   (long)iVar168 * (long)iVar139 >> 0xc) + iVar80;
        auVar196._8_4_ =
             (int)((long)iVar61 * (long)iVar16 + (long)iVar65 * (long)iVar12 +
                   (long)iVar170 * (long)iVar20 >> 0xc) + iVar24;
        iVar81 = (int)(CONCAT17(uVar119,CONCAT16(uVar105,CONCAT15(uVar91,CONCAT14((char)iVar24,
                                                                                  iVar24)))) >> 0x20
                      );
        auVar196._12_4_ =
             (int)((long)iVar70 * (long)iVar83 + (long)iVar74 * (long)iVar171 +
                   (long)iVar172 * (long)iVar79 >> 0xc) + iVar81;
        auVar217._0_8_ = CONCAT35(0,CONCAT14(auVar216[4],(uint)(auVar216[0] & 1)) & 0x1ffffffff);
        auVar217[8] = auVar216[8] & 1;
        auVar217._9_3_ = 0;
        auVar217[12] = auVar216[12] & 1;
        auVar217._13_3_ = 0;
        auVar185._0_4_ =
             (int)((long)iVar167 * (long)iVar16 + (long)iVar152 * (long)iVar12 +
                   (long)iVar173 * (long)iVar20 >> 0xc) + iVar24;
        auVar185._4_4_ =
             (int)((long)iVar169 * (long)iVar214 + (long)iVar153 * (long)iVar82 +
                   (long)iVar31 * (long)iVar139 >> 0xc) + iVar80;
        auVar185._8_4_ =
             (int)((long)iVar63 * (long)iVar16 + (long)iVar66 * (long)iVar12 +
                   (long)iVar68 * (long)iVar20 >> 0xc) + iVar24;
        auVar185._12_4_ =
             (int)((long)iVar72 * (long)iVar83 + (long)iVar75 * (long)iVar171 +
                   (long)iVar77 * (long)iVar79 >> 0xc) + iVar81;
        auVar216 = NEON_cmgt(auVar197,auVar43,4);
        auVar195 = NEON_cmge(auVar47,auVar196,4);
        auVar209._0_8_ = CONCAT35(0,CONCAT14(auVar222[4],(uint)(auVar222[0] & 1)) & 0x1ffffffff);
        auVar209[8] = auVar222[8] & 1;
        auVar209._9_3_ = 0;
        auVar209[12] = auVar222[12] & 1;
        auVar209._13_3_ = 0;
        auVar211._0_8_ = CONCAT35(0,CONCAT14(auVar216[4],(uint)(auVar216[0] & 1)) & 0x1ffffffff);
        auVar211[8] = auVar216[8] & 1;
        auVar211._9_3_ = 0;
        auVar211[12] = auVar216[12] & 1;
        auVar211._13_3_ = 0;
        auVar34._4_4_ = iVar181;
        auVar34._0_4_ = iVar180;
        auVar34._8_4_ = iVar182;
        auVar34._12_4_ = iVar183;
        auVar176 = NEON_neg(auVar34,4);
        auVar193._0_8_ = auVar224._0_8_ | 0x400000004;
        auVar193._8_4_ = auVar224._8_4_ | 4;
        auVar193._12_4_ = auVar224._12_4_ | 4;
        auVar187._0_4_ =
             (int)((long)iVar27 * (long)iVar16 + (long)iVar162 * (long)iVar12 +
                   (long)iVar154 * (long)iVar20 >> 0xc) + iVar24;
        auVar187._4_4_ =
             (int)((long)iVar28 * (long)iVar214 + (long)iVar163 * (long)iVar82 +
                   (long)iVar156 * (long)iVar139 >> 0xc) + iVar80;
        auVar187._8_4_ =
             (int)((long)iVar62 * (long)iVar16 + (long)iVar164 * (long)iVar12 +
                   (long)iVar158 * (long)iVar20 >> 0xc) + iVar24;
        auVar187._12_4_ =
             (int)((long)iVar71 * (long)iVar83 + (long)iVar165 * (long)iVar171 +
                   (long)iVar160 * (long)iVar79 >> 0xc) + iVar81;
        auVar184._0_4_ =
             (int)((long)iVar155 * (long)iVar16 + (long)iVar29 * (long)iVar12 +
                   (long)iVar137 * (long)iVar20 >> 0xc) + iVar24;
        auVar184._4_4_ =
             (int)((long)iVar159 * (long)iVar214 + (long)iVar30 * (long)iVar82 +
                   (long)iVar140 * (long)iVar139 >> 0xc) + iVar80;
        auVar184._8_4_ =
             (int)((long)iVar64 * (long)iVar16 + (long)iVar67 * (long)iVar12 +
                   (long)iVar69 * (long)iVar20 >> 0xc) + iVar24;
        auVar184._12_4_ =
             (int)((long)iVar73 * (long)iVar83 + (long)iVar76 * (long)iVar171 +
                   (long)iVar78 * (long)iVar79 >> 0xc) + iVar81;
        auVar191 = NEON_neg(auVar43,4);
        auVar38._4_4_ = iVar202;
        auVar38._0_4_ = iVar201;
        auVar38._8_4_ = iVar203;
        auVar38._12_4_ = iVar204;
        auVar178 = NEON_neg(auVar38,4);
        auVar41._4_4_ = auVar215._4_4_;
        auVar41._0_4_ = auVar215._0_4_;
        auVar41._8_4_ = auVar215._8_4_;
        auVar41._12_4_ = auVar215._12_4_;
        auVar216 = NEON_cmge(auVar41,auVar176,4);
        auVar194 = NEON_bit(auVar193,auVar224,auVar195,1);
        auVar225 = NEON_cmge(auVar196,auVar189,4);
        auVar42._8_4_ = auVar217[8] | 2;
        auVar42._0_8_ = auVar217._0_8_ | 0x200000002;
        auVar42._12_4_ = auVar217[12] | 2;
        auVar222 = NEON_cmge(auVar197,auVar191,4);
        auVar207 = NEON_bsl(auVar216,auVar217,auVar42,1);
        auVar46._4_4_ = iVar190;
        auVar46._0_4_ = iVar188;
        auVar46._8_8_ = uStack_128;
        auVar198._0_8_ = auVar209._0_8_ | 0x200000002;
        auVar198._8_4_ = auVar209[8] | 2;
        auVar198._12_4_ = auVar209[12] | 2;
        uStack_238 = (undefined4)uStack_128;
        uStack_234 = (undefined4)((ulong)uStack_128 >> 0x20);
        auVar195 = NEON_cmge(auVar46,auVar178,4);
        auVar218._0_8_ = auVar211._0_8_ | 0x200000002;
        auVar218._8_4_ = auVar211[8] | 2;
        auVar218._12_4_ = auVar211[12] | 2;
        auVar195 = NEON_bsl(auVar195,auVar209,auVar198,1);
        auVar212 = NEON_bif(auVar211,auVar218,auVar222,1);
        iVar83 = (int)(CONCAT17(uVar121,CONCAT16(uVar107,CONCAT15(uVar93,CONCAT14((char)iVar17,
                                                                                  iVar17)))) >> 0x20
                      );
        iVar80 = (int)(CONCAT17(uVar121,CONCAT16(uVar107,CONCAT15(uVar93,CONCAT14((char)iVar17,
                                                                                  iVar17)))) >> 0x20
                      );
        auVar35._4_4_ = iVar181;
        auVar35._0_4_ = iVar180;
        auVar35._8_4_ = iVar182;
        auVar35._12_4_ = iVar183;
        auVar219 = NEON_cmge(auVar35,auVar187,4);
        auVar216 = NEON_cmge(auVar187,auVar176,4);
        iVar139 = (int)(CONCAT17(uVar120,CONCAT16(uVar106,CONCAT15(uVar92,CONCAT14((char)iVar13,
                                                                                   iVar13)))) >>
                       0x20);
        iVar81 = (int)(CONCAT17(uVar120,CONCAT16(uVar106,CONCAT15(uVar92,CONCAT14((char)iVar13,
                                                                                  iVar13)))) >> 0x20
                      );
        iVar186 = (int)(CONCAT17(uVar122,CONCAT16(uVar108,CONCAT15(uVar94,CONCAT14((char)iVar21,
                                                                                   iVar21)))) >>
                       0x20);
        iVar82 = (int)(CONCAT17(uVar122,CONCAT16(uVar108,CONCAT15(uVar94,CONCAT14((char)iVar21,
                                                                                  iVar21)))) >> 0x20
                      );
        auVar39._4_4_ = iVar202;
        auVar39._0_4_ = iVar201;
        auVar39._8_4_ = iVar203;
        auVar39._12_4_ = iVar204;
        auVar224 = NEON_cmge(auVar39,auVar184,4);
        auVar44._4_4_ = iVar179;
        auVar44._0_4_ = iVar177;
        auVar44._8_8_ = uStack_138;
        auVar206 = NEON_cmge(auVar44,auVar185,4);
        auVar222 = NEON_cmge(auVar185,auVar191,4);
        auVar208[8] = auVar207[8] | 4;
        auVar208._0_8_ = auVar207._0_8_ | 0x400000004;
        auVar208[9] = auVar207[9];
        auVar208[10] = auVar207[10];
        auVar208[11] = auVar207[11];
        auVar208[12] = auVar207[12] | 4;
        auVar208[13] = auVar207[13];
        auVar208[14] = auVar207[14];
        auVar208[15] = auVar207[15];
        auVar208 = NEON_bif(auVar207,auVar208,auVar219,1);
        auVar138._0_8_ = auVar212._0_8_ | 0x400000004;
        auVar138._8_4_ = auVar212._8_4_ | 4;
        auVar138._12_4_ = auVar212._12_4_ | 4;
        auVar206 = NEON_bif(auVar212,auVar138,auVar206,1);
        auVar207[8] = auVar195[8] | 4;
        auVar207._0_8_ = auVar195._0_8_ | 0x400000004;
        auVar207[9] = auVar195[9];
        auVar207[10] = auVar195[10];
        auVar207[11] = auVar195[11];
        auVar207[12] = auVar195[12] | 4;
        auVar207[13] = auVar195[13];
        auVar207[14] = auVar195[14];
        auVar207[15] = auVar195[15];
        auVar224 = NEON_bif(auVar195,auVar207,auVar224,1);
        auVar195[8] = auVar206[8] | 8;
        auVar195._0_8_ = auVar206._0_8_ | 0x800000008;
        auVar195[9] = auVar206[9];
        auVar195[10] = auVar206[10];
        auVar195[11] = auVar206[11];
        auVar195[12] = auVar206[12] | 8;
        auVar195[13] = auVar206[13];
        auVar195[14] = auVar206[14];
        auVar195[15] = auVar206[15];
        auVar213 = NEON_bif(auVar206,auVar195,auVar222,1);
        auVar195 = NEON_cmge(auVar184,auVar178,4);
        auVar220._0_8_ = auVar208._0_8_ | 0x800000008;
        auVar220._8_4_ = auVar208._8_4_ | 8;
        auVar220._12_4_ = auVar208._12_4_ | 8;
        iVar79 = (int)((long)iVar157 * (long)iVar17 + (long)iVar174 * (long)iVar13 +
                       (long)iVar166 * (long)iVar21 >> 0xc) + iVar25;
        iVar157 = (int)(CONCAT17(uVar123,CONCAT16(uVar109,CONCAT15(uVar95,CONCAT14((char)iVar25,
                                                                                   iVar25)))) >>
                       0x20);
        iVar161 = (int)((long)iVar161 * (long)iVar83 + (long)iVar175 * (long)iVar139 +
                        (long)iVar168 * (long)iVar186 >> 0xc) + iVar157;
        uVar141 = (undefined)iVar161;
        uVar142 = (undefined)((uint)iVar161 >> 8);
        uVar143 = (undefined)((uint)iVar161 >> 0x10);
        uVar144 = (undefined)((uint)iVar161 >> 0x18);
        iVar61 = (int)((long)iVar61 * (long)iVar17 + (long)iVar65 * (long)iVar13 +
                       (long)iVar170 * (long)iVar21 >> 0xc) + iVar25;
        uVar145 = (undefined)((uint)iVar61 >> 8);
        uVar146 = (undefined)((uint)iVar61 >> 0x10);
        uVar147 = (undefined)((uint)iVar61 >> 0x18);
        iVar161 = (int)(CONCAT17(uVar123,CONCAT16(uVar109,CONCAT15(uVar95,CONCAT14((char)iVar25,
                                                                                   iVar25)))) >>
                       0x20);
        iVar171 = (int)((long)iVar70 * (long)iVar80 + (long)iVar74 * (long)iVar81 +
                        (long)iVar172 * (long)iVar82 >> 0xc) + iVar161;
        uVar148 = (undefined)iVar171;
        uVar149 = (undefined)((uint)iVar171 >> 8);
        uVar150 = (undefined)((uint)iVar171 >> 0x10);
        uVar151 = (undefined)((uint)iVar171 >> 0x18);
        iVar27 = (int)((long)iVar27 * (long)iVar17 + (long)iVar162 * (long)iVar13 +
                       (long)iVar154 * (long)iVar21 >> 0xc) + iVar25;
        iVar28 = (int)((long)iVar28 * (long)iVar83 + (long)iVar163 * (long)iVar139 +
                       (long)iVar156 * (long)iVar186 >> 0xc) + iVar157;
        uVar126 = (undefined)iVar28;
        uVar127 = (undefined)((uint)iVar28 >> 8);
        uVar128 = (undefined)((uint)iVar28 >> 0x10);
        uVar129 = (undefined)((uint)iVar28 >> 0x18);
        iVar28 = (int)((long)iVar62 * (long)iVar17 + (long)iVar164 * (long)iVar13 +
                       (long)iVar158 * (long)iVar21 >> 0xc) + iVar25;
        uVar130 = (undefined)((uint)iVar28 >> 8);
        uVar131 = (undefined)((uint)iVar28 >> 0x10);
        uVar132 = (undefined)((uint)iVar28 >> 0x18);
        iVar171 = (int)((long)iVar71 * (long)iVar80 + (long)iVar165 * (long)iVar81 +
                        (long)iVar160 * (long)iVar82 >> 0xc) + iVar161;
        uVar133 = (undefined)iVar171;
        uVar134 = (undefined)((uint)iVar171 >> 8);
        uVar135 = (undefined)((uint)iVar171 >> 0x10);
        uVar136 = (undefined)((uint)iVar171 >> 0x18);
        iVar167 = (int)((long)iVar167 * (long)iVar17 + (long)iVar152 * (long)iVar13 +
                        (long)iVar173 * (long)iVar21 >> 0xc) + iVar25;
        iVar169 = (int)((long)iVar169 * (long)iVar83 + (long)iVar153 * (long)iVar139 +
                        (long)iVar31 * (long)iVar186 >> 0xc) + iVar157;
        iVar171 = (int)((long)iVar63 * (long)iVar17 + (long)iVar66 * (long)iVar13 +
                        (long)iVar68 * (long)iVar21 >> 0xc) + iVar25;
        iVar173 = (int)((long)iVar72 * (long)iVar80 + (long)iVar75 * (long)iVar81 +
                        (long)iVar77 * (long)iVar82 >> 0xc) + iVar161;
        iVar155 = (int)((long)iVar155 * (long)iVar17 + (long)iVar29 * (long)iVar13 +
                        (long)iVar137 * (long)iVar21 >> 0xc) + iVar25;
        iVar157 = (int)((long)iVar159 * (long)iVar83 + (long)iVar30 * (long)iVar139 +
                        (long)iVar140 * (long)iVar186 >> 0xc) + iVar157;
        iVar159 = (int)((long)iVar64 * (long)iVar17 + (long)iVar67 * (long)iVar13 +
                        (long)iVar69 * (long)iVar21 >> 0xc) + iVar25;
        iVar161 = (int)((long)iVar73 * (long)iVar80 + (long)iVar76 * (long)iVar81 +
                        (long)iVar78 * (long)iVar82 >> 0xc) + iVar161;
        auVar199._0_8_ = auVar224._0_8_ | 0x800000008;
        auVar199._8_4_ = auVar224._8_4_ | 8;
        auVar199._12_4_ = auVar224._12_4_ | 8;
        auVar207 = NEON_bif(auVar208,auVar220,auVar216,1);
        auVar206 = NEON_bif(auVar224,auVar199,auVar195,1);
        auVar212._4_4_ = auVar210._4_4_;
        auVar212._0_4_ = auVar210._0_4_;
        auVar212[8] = uStack_118;
        auVar222[8] = auVar194[8] | 8;
        auVar222._0_8_ = auVar194._0_8_ | 0x800000008;
        auVar222[9] = auVar194[9];
        auVar222[10] = auVar194[10];
        auVar222[11] = auVar194[11];
        auVar222[12] = auVar194[12] | 8;
        auVar222[13] = auVar194[13];
        auVar222[14] = auVar194[14];
        auVar222[15] = auVar194[15];
        auVar208 = NEON_bif(auVar194,auVar222,auVar225,1);
        auVar219[4] = uVar141;
        auVar219._0_4_ = iVar79;
        auVar219[5] = uVar142;
        auVar219[6] = uVar143;
        auVar219[7] = uVar144;
        auVar219[8] = (char)iVar61;
        auVar219[9] = uVar145;
        auVar219[10] = uVar146;
        auVar219[11] = uVar147;
        auVar219[12] = uVar148;
        auVar219[13] = uVar149;
        auVar219[14] = uVar150;
        auVar219[15] = uVar151;
        auVar222 = NEON_cmge(auVar219,auVar189,4);
        auVar194[4] = uVar126;
        auVar194._0_4_ = iVar27;
        auVar194[5] = uVar127;
        auVar194[6] = uVar128;
        auVar194[7] = uVar129;
        auVar194[8] = (char)iVar28;
        auVar194[9] = uVar130;
        auVar194[10] = uVar131;
        auVar194[11] = uVar132;
        auVar194[12] = uVar133;
        auVar194[13] = uVar134;
        auVar194[14] = uVar135;
        auVar194[15] = uVar136;
        auVar36._4_4_ = iVar181;
        auVar36._0_4_ = iVar180;
        auVar36._8_4_ = iVar182;
        auVar36._12_4_ = iVar183;
        auVar189 = NEON_cmge(auVar36,auVar194,4);
        auVar32._4_4_ = iVar157;
        auVar32._0_4_ = iVar155;
        auVar32._8_4_ = iVar159;
        auVar32._12_4_ = iVar161;
        auVar40._4_4_ = iVar202;
        auVar40._0_4_ = iVar201;
        auVar40._8_4_ = iVar203;
        auVar40._12_4_ = iVar204;
        auVar194 = NEON_cmge(auVar40,auVar32,4);
        auVar212[9] = (char)((uint)auVar210._8_4_ >> 8);
        auVar212[10] = (char)((uint)auVar210._8_4_ >> 0x10);
        auVar212[11] = (char)((uint)auVar210._8_4_ >> 0x18);
        auVar212[12] = (char)auVar210._12_4_;
        auVar212[13] = (char)((uint)auVar210._12_4_ >> 8);
        auVar212[14] = (char)((uint)auVar210._12_4_ >> 0x10);
        auVar212[15] = (char)((uint)auVar210._12_4_ >> 0x18);
        auVar225[4] = uVar141;
        auVar225._0_4_ = iVar79;
        auVar225[5] = uVar142;
        auVar225[6] = uVar143;
        auVar225[7] = uVar144;
        auVar225[8] = (char)iVar61;
        auVar225[9] = uVar145;
        auVar225[10] = uVar146;
        auVar225[11] = uVar147;
        auVar225[12] = uVar148;
        auVar225[13] = uVar149;
        auVar225[14] = uVar150;
        auVar225[15] = uVar151;
        auVar195 = NEON_cmge(auVar212,auVar225,4);
        auVar226._0_8_ = auVar208._0_8_ | 0x1000000010;
        auVar226._8_4_ = auVar208._8_4_ | 0x10;
        auVar226._12_4_ = auVar208._12_4_ | 0x10;
        auVar33._4_4_ = iVar169;
        auVar33._0_4_ = iVar167;
        auVar33._8_4_ = iVar171;
        auVar33._12_4_ = iVar173;
        auVar216 = NEON_cmge(auVar44,auVar33,4);
        auVar224[8] = auVar207[8] | 0x10;
        auVar224._0_8_ = auVar207._0_8_ | 0x1000000010;
        auVar224[9] = auVar207[9];
        auVar224[10] = auVar207[10];
        auVar224[11] = auVar207[11];
        auVar224[12] = auVar207[12] | 0x10;
        auVar224[13] = auVar207[13];
        auVar224[14] = auVar207[14];
        auVar224[15] = auVar207[15];
        auVar207 = NEON_bif(auVar207,auVar224,auVar189,1);
        auVar189[8] = auVar213[8] | 0x10;
        auVar189._0_8_ = auVar213._0_8_ | 0x1000000010;
        auVar189[9] = auVar213[9];
        auVar189[10] = auVar213[10];
        auVar189[11] = auVar213[11];
        auVar189[12] = auVar213[12] | 0x10;
        auVar189[13] = auVar213[13];
        auVar189[14] = auVar213[14];
        auVar189[15] = auVar213[15];
        auVar212 = NEON_bif(auVar213,auVar189,auVar216,1);
        auVar216[8] = auVar206[8] | 0x10;
        auVar216._0_8_ = auVar206._0_8_ | 0x1000000010;
        auVar216[9] = auVar206[9];
        auVar216[10] = auVar206[10];
        auVar216[11] = auVar206[11];
        auVar216[12] = auVar206[12] | 0x10;
        auVar216[13] = auVar206[13];
        auVar216[14] = auVar206[14];
        auVar216[15] = auVar206[15];
        auVar189 = NEON_bif(auVar206,auVar216,auVar194,1);
        auVar194 = NEON_bif(auVar208,auVar226,auVar195,1);
        auVar206[4] = uVar126;
        auVar206._0_4_ = iVar27;
        auVar206[5] = uVar127;
        auVar206[6] = uVar128;
        auVar206[7] = uVar129;
        auVar206[8] = (char)iVar28;
        auVar206[9] = uVar130;
        auVar206[10] = uVar131;
        auVar206[11] = uVar132;
        auVar206[12] = uVar133;
        auVar206[13] = uVar134;
        auVar206[14] = uVar135;
        auVar206[15] = uVar136;
        auVar195 = NEON_cmge(auVar206,auVar176,4);
        uStack_15c = (undefined4)
                     (CONCAT17(uVar144,CONCAT16(uVar143,CONCAT15(uVar142,CONCAT14(uVar141,iVar79))))
                     >> 0x20);
        uStack_154 = (undefined4)
                     (CONCAT17(uVar151,CONCAT16(uVar150,CONCAT15(uVar149,CONCAT14(uVar148,iVar61))))
                     >> 0x20);
        *(int *)puVar54 = auVar205._0_4_;
        *(int *)((long)puVar54 + 4) = auVar196._0_4_;
        *(int *)(puVar54 + 1) = iVar79;
        *(int *)((long)puVar54 + 0xc) = auVar210._0_4_;
        *(int *)(puVar54 + 2) = auVar205._4_4_;
        *(int *)((long)puVar54 + 0x14) = auVar196._4_4_;
        *(undefined4 *)(puVar54 + 3) = uStack_15c;
        *(int *)((long)puVar54 + 0x1c) = auVar210._4_4_;
        *(int *)(puVar54 + 4) = auVar205._8_4_;
        *(int *)((long)puVar54 + 0x24) = auVar196._8_4_;
        *(int *)(puVar54 + 5) = iVar61;
        *(int *)((long)puVar54 + 0x2c) = auVar210._8_4_;
        *(int *)(puVar54 + 6) = auVar205._12_4_;
        *(int *)((long)puVar54 + 0x34) = auVar196._12_4_;
        *(undefined4 *)(puVar54 + 7) = uStack_154;
        *(int *)((long)puVar54 + 0x3c) = auVar210._12_4_;
        uStack_19c = (undefined4)
                     (CONCAT17(uVar129,CONCAT16(uVar128,CONCAT15(uVar127,CONCAT14(uVar126,iVar27))))
                     >> 0x20);
        uStack_194 = (undefined4)
                     (CONCAT17(uVar136,CONCAT16(uVar135,CONCAT15(uVar134,CONCAT14(uVar133,iVar28))))
                     >> 0x20);
        auVar213._4_4_ = iVar169;
        auVar213._0_4_ = iVar167;
        auVar213._8_4_ = iVar171;
        auVar213._12_4_ = iVar173;
        auVar224 = NEON_cmge(auVar213,auVar191,4);
        auVar221._0_8_ = auVar207._0_8_ | 0x2000000020;
        auVar221._8_4_ = auVar207._8_4_ | 0x20;
        auVar221._12_4_ = auVar207._12_4_ | 0x20;
        auVar176._4_4_ = iVar157;
        auVar176._0_4_ = iVar155;
        auVar176._8_4_ = iVar159;
        auVar176._12_4_ = iVar161;
        auVar216 = NEON_cmge(auVar176,auVar178,4);
        auVar200._0_8_ = auVar189._0_8_ | 0x2000000020;
        auVar200._8_4_ = auVar189._8_4_ | 0x20;
        auVar200._12_4_ = auVar189._12_4_ | 0x20;
        auVar227._0_8_ = auVar194._0_8_ | 0x2000000020;
        auVar227._8_4_ = auVar194._8_4_ | 0x20;
        auVar227._12_4_ = auVar194._12_4_ | 0x20;
        *(int *)(puVar54 + 8) = auVar215._0_4_;
        *(int *)((long)puVar54 + 0x44) = auVar187._0_4_;
        *(int *)(puVar54 + 9) = iVar27;
        *(int *)((long)puVar54 + 0x4c) = iVar180;
        *(int *)(puVar54 + 10) = auVar215._4_4_;
        *(int *)((long)puVar54 + 0x54) = auVar187._4_4_;
        *(undefined4 *)(puVar54 + 0xb) = uStack_19c;
        *(int *)((long)puVar54 + 0x5c) = iVar181;
        *(int *)(puVar54 + 0xc) = auVar215._8_4_;
        *(int *)((long)puVar54 + 100) = auVar187._8_4_;
        *(int *)(puVar54 + 0xd) = iVar28;
        *(int *)((long)puVar54 + 0x6c) = iVar182;
        *(int *)(puVar54 + 0xe) = auVar215._12_4_;
        *(int *)((long)puVar54 + 0x74) = auVar187._12_4_;
        *(undefined4 *)(puVar54 + 0xf) = uStack_194;
        *(int *)((long)puVar54 + 0x7c) = iVar183;
        uStack_1c8 = (undefined4)uStack_138;
        uStack_1c4 = (undefined4)((ulong)uStack_138 >> 0x20);
        auVar206 = NEON_bif(auVar207,auVar221,auVar195,1);
        auVar178._8_4_ = auVar212._8_4_ | 0x20;
        auVar178._0_8_ = auVar212._0_8_ | 0x2000000020;
        auVar178._12_4_ = auVar212._12_4_ | 0x20;
        auVar224 = NEON_bif(auVar212,auVar178,auVar224,1);
        auVar195 = NEON_bif(auVar189,auVar200,auVar216,1);
        auVar222 = NEON_bif(auVar194,auVar227,auVar222,1);
        *(int *)(puVar54 + 0x10) = auVar197._0_4_;
        *(int *)((long)puVar54 + 0x84) = auVar185._0_4_;
        *(int *)(puVar54 + 0x11) = iVar167;
        *(int *)((long)puVar54 + 0x8c) = iVar177;
        *(int *)(puVar54 + 0x12) = auVar197._4_4_;
        *(int *)((long)puVar54 + 0x94) = auVar185._4_4_;
        *(int *)(puVar54 + 0x13) = iVar169;
        *(int *)((long)puVar54 + 0x9c) = iVar179;
        *(int *)(puVar54 + 0x14) = auVar197._8_4_;
        *(int *)((long)puVar54 + 0xa4) = auVar185._8_4_;
        *(int *)(puVar54 + 0x15) = iVar171;
        *(undefined4 *)((long)puVar54 + 0xac) = uStack_1c8;
        *(int *)(puVar54 + 0x16) = auVar197._12_4_;
        *(int *)((long)puVar54 + 0xb4) = auVar185._12_4_;
        *(int *)(puVar54 + 0x17) = iVar173;
        *(undefined4 *)((long)puVar54 + 0xbc) = uStack_1c4;
        *(int *)(puVar54 + 0x18) = iVar188;
        *(int *)((long)puVar54 + 0xc4) = auVar184._0_4_;
        *(int *)(puVar54 + 0x19) = iVar155;
        *(int *)((long)puVar54 + 0xcc) = iVar201;
        *(int *)(puVar54 + 0x1a) = iVar190;
        *(int *)((long)puVar54 + 0xd4) = auVar184._4_4_;
        *(int *)(puVar54 + 0x1b) = iVar157;
        *(int *)((long)puVar54 + 0xdc) = iVar202;
        *(undefined4 *)(puVar54 + 0x1c) = uStack_238;
        *(int *)((long)puVar54 + 0xe4) = auVar184._8_4_;
        *(int *)(puVar54 + 0x1d) = iVar159;
        *(int *)((long)puVar54 + 0xec) = iVar203;
        *(undefined4 *)(puVar54 + 0x1e) = uStack_234;
        *(int *)((long)puVar54 + 0xf4) = auVar184._12_4_;
        *(int *)(puVar54 + 0x1f) = iVar161;
        *(int *)((long)puVar54 + 0xfc) = iVar204;
        puVar56[1] = CONCAT17(auVar195[12],
                              CONCAT16(auVar195[8],
                                       CONCAT15(auVar195[4],
                                                CONCAT14(auVar195[0],
                                                         CONCAT13(auVar224[12],
                                                                  CONCAT12(auVar224[8],
                                                                           CONCAT11(auVar224[4],
                                                                                    auVar224[0])))))
                                      ));
        *puVar56 = CONCAT17(auVar206[12],
                            CONCAT16(auVar206[8],
                                     CONCAT15(auVar206[4],
                                              CONCAT14(auVar206[0],
                                                       CONCAT13(auVar222[12],
                                                                CONCAT12(auVar222[8],
                                                                         CONCAT11(auVar222[4],
                                                                                  auVar222[0])))))))
        ;
        puVar53 = puVar5;
        puVar54 = puVar54 + 0x20;
        puVar56 = puVar56 + 2;
      } while (puVar5 != param_1 + (ulong)((uVar10 >> 4) - 1) * 8 + 8);
      uVar59 = (ulong)uVar10 & 0xfffffff0;
      puVar57 = puVar57 + uVar59 * 2;
      uVar60 = uVar10 & 0xfffffff0;
      if ((uVar10 & 0xf) != 0) {
        while( true ) {
          iVar157 = *(int *)((long)param_1 + uVar59 * 4 + 0x100);
          iVar161 = *(int *)((long)param_1 + uVar59 * 4);
          iVar167 = *(int *)((long)param_1 + uVar59 * 4 + 0x200);
          iVar155 = iVar26 + (int)((long)iVar18 * (long)iVar157 + (long)iVar14 * (long)iVar161 +
                                   (long)iVar22 * (long)iVar167 >> 0xc);
          iVar159 = iVar23 + (int)((long)iVar15 * (long)iVar157 + (long)iVar11 * (long)iVar161 +
                                   (long)iVar19 * (long)iVar167 >> 0xc);
          iVar169 = -iVar155;
          bVar8 = iVar155 < iVar159 | 2;
          if (iVar159 + iVar155 < 0 == SBORROW4(iVar159,iVar169)) {
            bVar8 = iVar155 < iVar159;
          }
          iVar27 = iVar24 + (int)((long)iVar16 * (long)iVar157 + (long)iVar12 * (long)iVar161 +
                                  (long)iVar20 * (long)iVar167 >> 0xc);
          bVar9 = bVar8 | 4;
          if (iVar27 <= iVar155) {
            bVar9 = bVar8;
          }
          iVar157 = iVar25 + (int)((long)iVar17 * (long)iVar157 + (long)iVar13 * (long)iVar161 +
                                   (long)iVar21 * (long)iVar167 >> 0xc);
          bVar8 = bVar9 | 8;
          if (iVar27 + iVar155 < 0 == SBORROW4(iVar27,iVar169)) {
            bVar8 = bVar9;
          }
          bVar9 = bVar8 | 0x10;
          if (iVar157 <= iVar155) {
            bVar9 = bVar8;
          }
          *(int *)puVar57 = iVar159;
          *(int *)((long)puVar57 + 4) = iVar27;
          *(int *)(puVar57 + 1) = iVar157;
          *(int *)((long)puVar57 + 0xc) = iVar155;
          bVar8 = bVar9 | 0x20;
          if (iVar157 + iVar155 < 0 == SBORROW4(iVar157,iVar169)) {
            bVar8 = bVar9;
          }
          *(byte *)((long)param_1 + uVar59 + uVar55 + 0x1290) = bVar8;
          uVar60 = uVar60 + 1;
          puVar57 = puVar57 + 2;
          if (uVar10 <= uVar60) break;
          uVar59 = (ulong)uVar60;
        }
      }
    }
    else {
      lVar58 = 0;
      do {
        iVar157 = *(int *)((long)param_1 + lVar58 * 4 + 0x100);
        iVar161 = *(int *)((long)param_1 + lVar58 * 4);
        iVar167 = *(int *)((long)param_1 + lVar58 * 4 + 0x200);
        iVar155 = iVar26 + (int)((long)iVar18 * (long)iVar157 + (long)iVar14 * (long)iVar161 +
                                 (long)iVar22 * (long)iVar167 >> 0xc);
        iVar159 = iVar23 + (int)((long)iVar15 * (long)iVar157 + (long)iVar11 * (long)iVar161 +
                                 (long)iVar19 * (long)iVar167 >> 0xc);
        iVar169 = -iVar155;
        bVar8 = iVar155 < iVar159 | 2;
        if (iVar159 + iVar155 < 0 == SBORROW4(iVar159,iVar169)) {
          bVar8 = iVar155 < iVar159;
        }
        iVar27 = iVar24 + (int)((long)iVar16 * (long)iVar157 + (long)iVar12 * (long)iVar161 +
                                (long)iVar20 * (long)iVar167 >> 0xc);
        bVar9 = bVar8 | 4;
        if (iVar27 <= iVar155) {
          bVar9 = bVar8;
        }
        iVar157 = iVar25 + (int)((long)iVar17 * (long)iVar157 + (long)iVar13 * (long)iVar161 +
                                 (long)iVar21 * (long)iVar167 >> 0xc);
        bVar8 = bVar9 | 8;
        if (iVar27 + iVar155 < 0 == SBORROW4(iVar27,iVar169)) {
          bVar8 = bVar9;
        }
        bVar9 = bVar8 | 0x10;
        if (iVar157 <= iVar155) {
          bVar9 = bVar8;
        }
        *(int *)puVar57 = iVar159;
        *(int *)((long)puVar57 + 4) = iVar27;
        *(int *)(puVar57 + 1) = iVar157;
        *(int *)((long)puVar57 + 0xc) = iVar155;
        bVar8 = bVar9 | 0x20;
        if (iVar157 + iVar155 < 0 == SBORROW4(iVar157,iVar169)) {
          bVar8 = bVar9;
        }
        *(byte *)((long)param_1 + lVar58 + lVar6) = bVar8;
        lVar58 = lVar58 + 1;
        puVar57 = puVar57 + 2;
      } while ((uint)lVar58 < uVar10);
    }
  }
  if (lVar48 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,lVar48 - ___stack_chk_guard,0);
  }
  return;
}


