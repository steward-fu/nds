/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_modulate_alpha_resolve_c_4x
 * Address  : 00157740
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void video_3d_fog_modulate_alpha_resolve_c_4x
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  byte bVar33;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  byte bVar40;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  byte bVar47;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  byte bVar55;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined auVar81 [16];
  undefined auVar82 [16];
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  byte bVar87;
  byte bVar88;
  uint uVar89;
  uint uVar90;
  byte bVar91;
  byte bVar92;
  uint uVar93;
  uint uVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  uint *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  
  lVar11 = ___stack_chk_guard;
  puVar32 = param_1 + 0x80;
  uVar10 = (uint)((ulong)param_4 >> 0x18) & 0x1f;
  if (param_1 < (undefined8 *)((long)param_2 + 0x7fcU) && param_2 < puVar32 ||
      param_1 < (undefined8 *)((long)param_3 + 0x1ffU) && param_3 < puVar32) {
    lVar28 = 0;
    do {
      uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
      uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
      if (*(byte *)((long)param_3 + lVar28) == 0x7f) {
        uVar69 = 0x80;
      }
      while (uVar71 = uVar70 >> 0x18 & 0x7f, (int)uVar70 < 0) {
        lVar9 = lVar28 * 2;
        lVar28 = lVar28 + 2;
        *(uint *)((long)param_1 + lVar9) =
             uVar70 & 0xffffff | (uVar71 + ((uVar10 - uVar71) * uVar69 >> 7)) * 0x1000000;
        if (lVar28 == 0x200) goto LAB_00157928;
        uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
        uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
        if (uVar69 == 0x7f) {
          uVar69 = 0x80;
        }
      }
      *(uint *)((long)param_1 + lVar28 * 2) = uVar70 & 0xffffff | uVar71 << 0x18;
      lVar28 = lVar28 + 2;
    } while (lVar28 != 0x200);
  }
  else {
    auVar66._8_4_ = 0x7f;
    auVar66._0_8_ = 0x7f0000007f;
    auVar66._12_4_ = 0x7f;
    puVar29 = param_1;
    puVar30 = param_2;
    puVar31 = param_3;
    do {
      bVar33 = *(byte *)puVar31;
      puVar12 = (undefined *)((long)puVar31 + 2);
      puVar13 = (uint *)((long)puVar31 + 4);
      puVar14 = (undefined *)((long)puVar31 + 6);
      puVar24 = puVar31 + 1;
      puVar15 = (undefined *)((long)puVar31 + 10);
      puVar16 = (uint *)((long)puVar31 + 0xc);
      puVar17 = (undefined *)((long)puVar31 + 0xe);
      puVar25 = puVar31 + 2;
      puVar18 = (undefined *)((long)puVar31 + 0x12);
      puVar19 = (uint *)((long)puVar31 + 0x14);
      puVar20 = (undefined *)((long)puVar31 + 0x16);
      puVar26 = puVar31 + 3;
      puVar21 = (undefined *)((long)puVar31 + 0x1a);
      puVar22 = (uint *)((long)puVar31 + 0x1c);
      puVar23 = (undefined *)((long)puVar31 + 0x1e);
      puVar31 = puVar31 + 4;
      puVar27 = puVar30 + 0x10;
      auVar102._1_3_ = 0;
      auVar102[0] = *(byte *)puVar26;
      auVar102[4] = *puVar21;
      auVar102._5_3_ = 0;
      auVar102[8] = *(undefined *)puVar22;
      auVar102._9_3_ = 0;
      auVar102[12] = *puVar23;
      auVar102._13_3_ = 0;
      auVar105._1_3_ = 0;
      auVar105[0] = *(byte *)puVar24;
      auVar105[4] = *puVar15;
      auVar105._5_3_ = 0;
      auVar105[8] = *(undefined *)puVar16;
      auVar105._9_3_ = 0;
      auVar105[12] = *puVar17;
      auVar105._13_3_ = 0;
      auVar63._6_2_ = 0;
      auVar63._0_6_ =
           (uint6)CONCAT14(*puVar12,(uint)CONCAT12(*puVar12,(ushort)bVar33)) & 0xffff0000ffff;
      auVar63[8] = *(undefined *)puVar13;
      auVar63._9_3_ = 0;
      auVar63[12] = *puVar14;
      auVar63._13_3_ = 0;
      auVar81._6_2_ = 0;
      auVar81._0_6_ =
           (uint6)CONCAT14(*puVar18,(uint)CONCAT12(*puVar18,(ushort)*(byte *)puVar25)) &
           0xffff0000ffff;
      auVar81[8] = *(undefined *)puVar19;
      auVar81._9_3_ = 0;
      auVar81[12] = *puVar20;
      auVar81._13_3_ = 0;
      auVar65 = NEON_cmeq(auVar102,auVar66,4);
      auVar99 = NEON_cmeq(auVar63,auVar66,4);
      bVar55 = (byte)(*(uint *)(puVar30 + 4) >> 0x18);
      uVar93 = (uint)(bVar55 & 0x7f);
      bVar60 = (byte)(*(uint *)(puVar30 + 5) >> 0x18);
      uVar94 = (uint)(bVar60 & 0x7f);
      bVar61 = (byte)(*(uint *)(puVar30 + 6) >> 0x18);
      bVar95 = bVar61 & 0x7f;
      bVar62 = (byte)(*(uint *)(puVar30 + 7) >> 0x18);
      bVar97 = bVar62 & 0x7f;
      bVar47 = (byte)(*(uint *)puVar30 >> 0x18);
      uVar89 = bVar47 & 0xffffff7f;
      bVar52 = (byte)(*(uint *)(puVar30 + 1) >> 0x18);
      uVar90 = bVar52 & 0xffffff7f;
      bVar53 = (byte)(*(uint *)(puVar30 + 2) >> 0x18);
      uVar73 = bVar53 & 0xffffff7f;
      bVar54 = (byte)(*(uint *)(puVar30 + 3) >> 0x18);
      uVar74 = bVar54 & 0xffffff7f;
      bVar40 = (byte)(*(uint *)(puVar30 + 8) >> 0x18);
      uVar85 = bVar40 & 0xffffff7f;
      bVar44 = (byte)(*(uint *)(puVar30 + 9) >> 0x18);
      uVar86 = bVar44 & 0xffffff7f;
      bVar45 = (byte)(*(uint *)(puVar30 + 10) >> 0x18);
      uVar71 = bVar45 & 0xffffff7f;
      bVar46 = (byte)(*(uint *)(puVar30 + 0xb) >> 0x18);
      uVar72 = bVar46 & 0xffffff7f;
      bVar33 = (byte)(*(uint *)(puVar30 + 0xc) >> 0x18);
      uVar83 = bVar33 & 0xffffff7f;
      bVar37 = (byte)(*(uint *)(puVar30 + 0xd) >> 0x18);
      uVar84 = bVar37 & 0xffffff7f;
      bVar38 = (byte)(*(uint *)(puVar30 + 0xe) >> 0x18);
      uVar69 = bVar38 & 0xffffff7f;
      bVar39 = (byte)(*(uint *)(puVar30 + 0xf) >> 0x18);
      uVar70 = bVar39 & 0xffffff7f;
      auVar68 = NEON_cmeq(auVar105,auVar66,4);
      auVar67 = NEON_cmeq(auVar81,auVar66,4);
      auVar34[8] = 0x80;
      auVar34._0_8_ = 0x8000000080;
      auVar34._9_3_ = 0;
      auVar34[12] = 0x80;
      auVar34._13_3_ = 0;
      auVar100 = NEON_bsl(auVar99,auVar34,auVar63,1);
      auVar99[8] = 0x80;
      auVar99._0_8_ = 0x8000000080;
      auVar99._9_3_ = 0;
      auVar99[12] = 0x80;
      auVar99._13_3_ = 0;
      auVar105 = NEON_bit(auVar105,auVar99,auVar68,1);
      auVar68[8] = 0x80;
      auVar68._0_8_ = 0x8000000080;
      auVar68._9_3_ = 0;
      auVar68[12] = 0x80;
      auVar68._13_3_ = 0;
      auVar81 = NEON_bit(auVar81,auVar68,auVar67,1);
      auVar67[8] = 0x80;
      auVar67._0_8_ = 0x8000000080;
      auVar67._9_3_ = 0;
      auVar67[12] = 0x80;
      auVar67._13_3_ = 0;
      auVar63 = NEON_bsl(auVar65,auVar67,auVar102,1);
      auVar56._0_5_ = CONCAT14(bVar60,(uint)(bVar55 & 0x80)) & 0x80ffffffff;
      auVar56._5_3_ = 0;
      auVar56[8] = bVar61 & 0x80;
      auVar56._9_3_ = 0;
      auVar56[12] = bVar62 & 0x80;
      auVar56._13_3_ = 0;
      auVar48._0_5_ = CONCAT14(bVar52,(uint)(bVar47 & 0x80)) & 0x80ffffffff;
      auVar48._5_3_ = 0;
      auVar48[8] = bVar53 & 0x80;
      auVar48._9_3_ = 0;
      auVar48[12] = bVar54 & 0x80;
      auVar48._13_3_ = 0;
      auVar104._0_5_ = CONCAT14(bVar44,(uint)(bVar40 & 0x80)) & 0x80ffffffff;
      auVar104._5_3_ = 0;
      auVar104[8] = bVar45 & 0x80;
      auVar104._9_3_ = 0;
      auVar104[12] = bVar46 & 0x80;
      auVar104._13_3_ = 0;
      auVar65._0_5_ = CONCAT14(bVar37,(uint)(bVar33 & 0x80)) & 0x80ffffffff;
      auVar65._5_3_ = 0;
      auVar65[8] = bVar38 & 0x80;
      auVar65._9_3_ = 0;
      auVar65[12] = bVar39 & 0x80;
      auVar65._13_3_ = 0;
      auVar67 = NEON_cmeq(auVar56,0,2);
      auVar68 = NEON_cmeq(auVar48,0,2);
      auVar99 = NEON_cmeq(auVar104,0,2);
      auVar34 = NEON_cmeq(auVar65,0,2);
      auVar57[11] = ((byte)(auVar105._8_4_ * (uVar10 - bVar95) >> 7) & ~auVar67[8]) + bVar95;
      auVar57[15] = ((byte)(auVar105._12_4_ * (uVar10 - bVar97) >> 7) & ~auVar67[12]) + bVar97;
      auVar49[11] = ((byte)(auVar100._8_4_ * (uVar10 - uVar73) >> 7) & ~auVar68[8]) + (char)uVar73;
      auVar49[15] = ((byte)(auVar100._12_4_ * (uVar10 - uVar74) >> 7) & ~auVar68[12]) + (char)uVar74
      ;
      auVar41[11] = ((byte)(auVar81._8_4_ * (uVar10 - uVar71) >> 7) & ~auVar99[8]) + (char)uVar71;
      auVar41[15] = ((byte)(auVar81._12_4_ * (uVar10 - uVar72) >> 7) & ~auVar99[12]) + (char)uVar72;
      auVar101[11] = ((byte)(auVar63._8_4_ * (uVar10 - uVar69) >> 7) & ~auVar34[8]) + (char)uVar69;
      auVar101[15] = ((byte)(auVar63._12_4_ * (uVar10 - uVar70) >> 7) & ~auVar34[12]) + (char)uVar70
      ;
      uVar78 = *(uint *)(puVar30 + 5) & 0xffffff;
      uVar79 = *(uint *)(puVar30 + 6) & 0xffffff;
      uVar80 = *(uint *)(puVar30 + 7) & 0xffffff;
      uVar75 = *(uint *)(puVar30 + 1) & 0xffffff;
      uVar76 = *(uint *)(puVar30 + 2) & 0xffffff;
      uVar77 = *(uint *)(puVar30 + 3) & 0xffffff;
      uVar72 = *(uint *)(puVar30 + 9) & 0xffffff;
      uVar73 = *(uint *)(puVar30 + 10) & 0xffffff;
      uVar74 = *(uint *)(puVar30 + 0xb) & 0xffffff;
      uVar69 = *(uint *)(puVar30 + 0xd) & 0xffffff;
      uVar70 = *(uint *)(puVar30 + 0xe) & 0xffffff;
      uVar71 = *(uint *)(puVar30 + 0xf) & 0xffffff;
      uVar5 = CONCAT17((char)(((byte)((byte)(auVar105._4_4_ * (uVar10 - uVar94) >> 7) & ~auVar67[4])
                              + uVar94) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar78 >> 0x10),
                                CONCAT15((char)(uVar78 >> 8),
                                         CONCAT14((char)uVar78,
                                                  CONCAT13((char)(((byte)((byte)(auVar105._0_4_ *
                                                                                 (uVar10 - uVar93)
                                                                                >> 7) & ~auVar67[0])
                                                                  + uVar93) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar30 + 4))))));
      auVar57[8] = (char)uVar79;
      auVar57._0_8_ = uVar5;
      auVar57[9] = (char)(uVar79 >> 8);
      auVar57[10] = (char)(uVar79 >> 0x10);
      auVar57[12] = (char)uVar80;
      auVar57[13] = (char)(uVar80 >> 8);
      auVar57[14] = (char)(uVar80 >> 0x10);
      uVar6 = CONCAT17((char)(((byte)((byte)(auVar100._4_4_ * (uVar10 - uVar90) >> 7) & ~auVar68[4])
                              + uVar90) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar75 >> 0x10),
                                CONCAT15((char)(uVar75 >> 8),
                                         CONCAT14((char)uVar75,
                                                  CONCAT13((char)(((byte)((byte)(auVar100._0_4_ *
                                                                                 (uVar10 - uVar89)
                                                                                >> 7) & ~auVar68[0])
                                                                  + uVar89) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)puVar30)))));
      auVar49[8] = (char)uVar76;
      auVar49._0_8_ = uVar6;
      auVar49[9] = (char)(uVar76 >> 8);
      auVar49[10] = (char)(uVar76 >> 0x10);
      auVar49[12] = (char)uVar77;
      auVar49[13] = (char)(uVar77 >> 8);
      auVar49[14] = (char)(uVar77 >> 0x10);
      uVar7 = CONCAT17((char)(((byte)((byte)(auVar81._4_4_ * (uVar10 - uVar86) >> 7) & ~auVar99[4])
                              + uVar86) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar72 >> 0x10),
                                CONCAT15((char)(uVar72 >> 8),
                                         CONCAT14((char)uVar72,
                                                  CONCAT13((char)(((byte)((byte)(auVar81._0_4_ *
                                                                                 (uVar10 - uVar85)
                                                                                >> 7) & ~auVar99[0])
                                                                  + uVar85) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar30 + 8))))));
      auVar41[8] = (char)uVar73;
      auVar41._0_8_ = uVar7;
      auVar41[9] = (char)(uVar73 >> 8);
      auVar41[10] = (char)(uVar73 >> 0x10);
      auVar41[12] = (char)uVar74;
      auVar41[13] = (char)(uVar74 >> 8);
      auVar41[14] = (char)(uVar74 >> 0x10);
      uVar8 = CONCAT17((char)(((byte)((byte)(auVar63._4_4_ * (uVar10 - uVar84) >> 7) & ~auVar34[4])
                              + uVar84) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar69 >> 0x10),
                                CONCAT15((char)(uVar69 >> 8),
                                         CONCAT14((char)uVar69,
                                                  CONCAT13((char)(((byte)((byte)(auVar63._0_4_ *
                                                                                 (uVar10 - uVar83)
                                                                                >> 7) & ~auVar34[0])
                                                                  + uVar83) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar30 + 0xc))))));
      auVar101[8] = (char)uVar70;
      auVar101._0_8_ = uVar8;
      auVar101[9] = (char)(uVar70 >> 8);
      auVar101[10] = (char)(uVar70 >> 0x10);
      auVar101[12] = (char)uVar71;
      auVar101[13] = (char)(uVar71 >> 8);
      auVar101[14] = (char)(uVar71 >> 0x10);
      puVar29[1] = auVar49._8_8_;
      *puVar29 = uVar6;
      puVar29[3] = auVar57._8_8_;
      puVar29[2] = uVar5;
      puVar29[5] = auVar41._8_8_;
      puVar29[4] = uVar7;
      puVar29[7] = auVar101._8_8_;
      puVar29[6] = uVar8;
      puVar29 = puVar29 + 8;
      puVar30 = puVar27;
    } while (param_2 + 0xf0 != puVar27);
    lVar28 = 0x1e0;
    do {
      while( true ) {
        uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
        uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
        if (uVar69 == 0x7f) {
          uVar69 = 0x80;
        }
        uVar71 = uVar70 >> 0x18 & 0x7f;
        if ((int)uVar70 < 0) break;
        *(uint *)((long)param_1 + lVar28 * 2) = uVar70 & 0xffffff | uVar71 << 0x18;
        lVar28 = lVar28 + 2;
        if (lVar28 == 0x200) goto LAB_00157928;
      }
      lVar9 = lVar28 * 2;
      lVar28 = lVar28 + 2;
      *(uint *)((long)param_1 + lVar9) =
           uVar70 & 0xffffff | (uVar71 + ((uVar10 - uVar71) * uVar69 >> 7)) * 0x1000000;
    } while (lVar28 != 0x200);
  }
LAB_00157928:
  puVar29 = param_1 + 0x100;
  puVar30 = (undefined8 *)((long)param_3 + 1);
  if ((param_3 + 0x40 > puVar32 && puVar30 <= puVar29) &&
      (param_3 + 0x40 <= puVar32 || puVar29 != puVar30) ||
      puVar32 < param_2 + 0x100 && (undefined8 *)((long)param_2 + 4U) < puVar29) {
    lVar28 = 1;
    do {
      uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
      uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
      puVar29 = puVar32;
      if (*(byte *)((long)param_3 + lVar28) == 0x7f) {
        uVar69 = 0x80;
      }
      while (uVar71 = uVar70 >> 0x18 & 0x7f, (int)uVar70 < 0) {
        lVar28 = lVar28 + 2;
        puVar32 = (undefined8 *)((long)puVar29 + 4);
        *(uint *)puVar29 =
             uVar70 & 0xffffff | (uVar71 + ((uVar10 - uVar71) * uVar69 >> 7)) * 0x1000000;
        if (lVar28 == 0x201) goto LAB_00157ae4;
        uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
        uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
        puVar29 = puVar32;
        if (uVar69 == 0x7f) {
          uVar69 = 0x80;
        }
      }
      puVar32 = (undefined8 *)((long)puVar29 + 4);
      *(uint *)puVar29 = uVar70 & 0xffffff | uVar71 << 0x18;
      lVar28 = lVar28 + 2;
    } while (lVar28 != 0x201);
  }
  else {
    auVar100._8_4_ = 0x80;
    auVar100._0_8_ = 0x8000000080;
    auVar100._12_4_ = 0x80;
    puVar29 = (undefined8 *)((long)param_2 + 4U);
    do {
      bVar33 = *(byte *)puVar30;
      puVar12 = (undefined *)((long)puVar30 + 2);
      puVar13 = (uint *)((long)puVar30 + 4);
      puVar14 = (undefined *)((long)puVar30 + 6);
      puVar25 = puVar30 + 1;
      puVar15 = (undefined *)((long)puVar30 + 10);
      puVar16 = (uint *)((long)puVar30 + 0xc);
      puVar17 = (undefined *)((long)puVar30 + 0xe);
      puVar27 = puVar30 + 2;
      puVar18 = (undefined *)((long)puVar30 + 0x12);
      puVar19 = (uint *)((long)puVar30 + 0x14);
      puVar20 = (undefined *)((long)puVar30 + 0x16);
      puVar24 = puVar30 + 3;
      puVar21 = (undefined *)((long)puVar30 + 0x1a);
      puVar22 = (uint *)((long)puVar30 + 0x1c);
      puVar23 = (undefined *)((long)puVar30 + 0x1e);
      puVar30 = puVar30 + 4;
      puVar31 = puVar29 + 0x10;
      auVar106._1_3_ = 0;
      auVar106[0] = *(byte *)puVar24;
      auVar106[4] = *puVar21;
      auVar106._5_3_ = 0;
      auVar106[8] = *(undefined *)puVar22;
      auVar106._9_3_ = 0;
      auVar106[12] = *puVar23;
      auVar106._13_3_ = 0;
      auVar103._1_3_ = 0;
      auVar103[0] = *(byte *)puVar25;
      auVar103[4] = *puVar15;
      auVar103._5_3_ = 0;
      auVar103[8] = *(undefined *)puVar16;
      auVar103._9_3_ = 0;
      auVar103[12] = *puVar17;
      auVar103._13_3_ = 0;
      auVar64._6_2_ = 0;
      auVar64._0_6_ =
           (uint6)CONCAT14(*puVar12,(uint)CONCAT12(*puVar12,(ushort)bVar33)) & 0xffff0000ffff;
      auVar64[8] = *(undefined *)puVar13;
      auVar64._9_3_ = 0;
      auVar64[12] = *puVar14;
      auVar64._13_3_ = 0;
      auVar82._6_2_ = 0;
      auVar82._0_6_ =
           (uint6)CONCAT14(*puVar18,(uint)CONCAT12(*puVar18,(ushort)*(byte *)puVar27)) &
           0xffff0000ffff;
      auVar82[8] = *(undefined *)puVar19;
      auVar82._9_3_ = 0;
      auVar82[12] = *puVar20;
      auVar82._13_3_ = 0;
      auVar1[8] = 0x7f;
      auVar1._0_8_ = 0x7f0000007f;
      auVar1._9_3_ = 0;
      auVar1[12] = 0x7f;
      auVar1._13_3_ = 0;
      auVar68 = NEON_cmeq(auVar64,auVar1,4);
      auVar2[8] = 0x7f;
      auVar2._0_8_ = 0x7f0000007f;
      auVar2._9_3_ = 0;
      auVar2[12] = 0x7f;
      auVar2._13_3_ = 0;
      auVar99 = NEON_cmeq(auVar106,auVar2,4);
      bVar55 = (byte)(*(uint *)(puVar29 + 4) >> 0x18);
      uVar93 = (uint)(bVar55 & 0x7f);
      bVar60 = (byte)(*(uint *)(puVar29 + 5) >> 0x18);
      uVar94 = (uint)(bVar60 & 0x7f);
      bVar61 = (byte)(*(uint *)(puVar29 + 6) >> 0x18);
      bVar96 = bVar61 & 0x7f;
      bVar62 = (byte)(*(uint *)(puVar29 + 7) >> 0x18);
      bVar98 = bVar62 & 0x7f;
      bVar47 = (byte)(*(uint *)puVar29 >> 0x18);
      uVar89 = (uint)(bVar47 & 0x7f);
      bVar52 = (byte)(*(uint *)(puVar29 + 1) >> 0x18);
      uVar90 = (uint)(bVar52 & 0x7f);
      bVar53 = (byte)(*(uint *)(puVar29 + 2) >> 0x18);
      bVar91 = bVar53 & 0x7f;
      bVar54 = (byte)(*(uint *)(puVar29 + 3) >> 0x18);
      bVar92 = bVar54 & 0x7f;
      bVar40 = (byte)(*(uint *)(puVar29 + 8) >> 0x18);
      uVar85 = (uint)(bVar40 & 0x7f);
      bVar44 = (byte)(*(uint *)(puVar29 + 9) >> 0x18);
      uVar86 = (uint)(bVar44 & 0x7f);
      bVar45 = (byte)(*(uint *)(puVar29 + 10) >> 0x18);
      bVar87 = bVar45 & 0x7f;
      bVar46 = (byte)(*(uint *)(puVar29 + 0xb) >> 0x18);
      bVar88 = bVar46 & 0x7f;
      bVar33 = (byte)(*(uint *)(puVar29 + 0xc) >> 0x18);
      uVar83 = (uint)(bVar33 & 0x7f);
      bVar37 = (byte)(*(uint *)(puVar29 + 0xd) >> 0x18);
      uVar84 = (uint)(bVar37 & 0x7f);
      bVar38 = (byte)(*(uint *)(puVar29 + 0xe) >> 0x18);
      bVar95 = bVar38 & 0x7f;
      bVar39 = (byte)(*(uint *)(puVar29 + 0xf) >> 0x18);
      bVar97 = bVar39 & 0x7f;
      auVar3[8] = 0x7f;
      auVar3._0_8_ = 0x7f0000007f;
      auVar3._9_3_ = 0;
      auVar3[12] = 0x7f;
      auVar3._13_3_ = 0;
      auVar34 = NEON_cmeq(auVar103,auVar3,4);
      auVar4[8] = 0x7f;
      auVar4._0_8_ = 0x7f0000007f;
      auVar4._9_3_ = 0;
      auVar4[12] = 0x7f;
      auVar4._13_3_ = 0;
      auVar66 = NEON_cmeq(auVar82,auVar4,4);
      auVar101 = NEON_bsl(auVar68,auVar100,auVar64,1);
      auVar104 = NEON_bit(auVar103,auVar100,auVar34,1);
      auVar65 = NEON_bit(auVar82,auVar100,auVar66,1);
      auVar67 = NEON_bsl(auVar99,auVar100,auVar106,1);
      auVar58._0_5_ = CONCAT14(bVar60,(uint)(bVar55 & 0xff80)) & 0x8000ffffff;
      auVar58._5_3_ = 0;
      auVar58[8] = bVar61 & 0x80;
      auVar58._9_3_ = 0;
      auVar58[12] = bVar62 & 0x80;
      auVar58._13_3_ = 0;
      auVar50._0_5_ = CONCAT14(bVar52,(uint)(bVar47 & 0x80)) & 0x8000ffffff;
      auVar50._5_3_ = 0;
      auVar50[8] = bVar53 & 0x80;
      auVar50._9_3_ = 0;
      auVar50[12] = bVar54 & 0x80;
      auVar50._13_3_ = 0;
      auVar42._0_5_ = CONCAT14(bVar44,(uint)(bVar40 & 0x80)) & 0x8000ffffff;
      auVar42._5_3_ = 0;
      auVar42[8] = bVar45 & 0x80;
      auVar42._9_3_ = 0;
      auVar42[12] = bVar46 & 0x80;
      auVar42._13_3_ = 0;
      auVar35._0_5_ = CONCAT14(bVar37,(uint)(bVar33 & 0x80)) & 0x8000ffffff;
      auVar35._5_3_ = 0;
      auVar35[8] = bVar38 & 0x80;
      auVar35._9_3_ = 0;
      auVar35[12] = bVar39 & 0x80;
      auVar35._13_3_ = 0;
      auVar68 = NEON_cmeq(auVar58,0,2);
      auVar99 = NEON_cmeq(auVar50,0,2);
      auVar34 = NEON_cmeq(auVar42,0,2);
      auVar66 = NEON_cmeq(auVar35,0,2);
      auVar59[11] = ((byte)(auVar104._8_4_ * (uVar10 - bVar96) >> 7) & ~auVar68[8]) + bVar96;
      auVar59[15] = ((byte)(auVar104._12_4_ * (uVar10 - bVar98) >> 7) & ~auVar68[12]) + bVar98;
      auVar51[11] = ((byte)(auVar101._8_4_ * (uVar10 - bVar91) >> 7) & ~auVar99[8]) + bVar91;
      auVar51[15] = ((byte)(auVar101._12_4_ * (uVar10 - bVar92) >> 7) & ~auVar99[12]) + bVar92;
      auVar43[11] = ((byte)(auVar65._8_4_ * (uVar10 - bVar87) >> 7) & ~auVar34[8]) + bVar87;
      auVar43[15] = ((byte)(auVar65._12_4_ * (uVar10 - bVar88) >> 7) & ~auVar34[12]) + bVar88;
      auVar36[11] = ((byte)(auVar67._8_4_ * (uVar10 - bVar95) >> 7) & ~auVar66[8]) + bVar95;
      auVar36[15] = ((byte)(auVar67._12_4_ * (uVar10 - bVar97) >> 7) & ~auVar66[12]) + bVar97;
      uVar78 = *(uint *)(puVar29 + 5) & 0xffffff;
      uVar79 = *(uint *)(puVar29 + 6) & 0xffffff;
      uVar80 = *(uint *)(puVar29 + 7) & 0xffffff;
      uVar75 = *(uint *)(puVar29 + 1) & 0xffffff;
      uVar76 = *(uint *)(puVar29 + 2) & 0xffffff;
      uVar77 = *(uint *)(puVar29 + 3) & 0xffffff;
      uVar72 = *(uint *)(puVar29 + 9) & 0xffffff;
      uVar73 = *(uint *)(puVar29 + 10) & 0xffffff;
      uVar74 = *(uint *)(puVar29 + 0xb) & 0xffffff;
      uVar69 = *(uint *)(puVar29 + 0xd) & 0xffffff;
      uVar70 = *(uint *)(puVar29 + 0xe) & 0xffffff;
      uVar71 = *(uint *)(puVar29 + 0xf) & 0xffffff;
      uVar5 = CONCAT17((char)(((byte)((byte)(auVar104._4_4_ * (uVar10 - uVar94) >> 7) & ~auVar68[4])
                              + uVar94) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar78 >> 0x10),
                                CONCAT15((char)(uVar78 >> 8),
                                         CONCAT14((char)uVar78,
                                                  CONCAT13((char)(((byte)((byte)(auVar104._0_4_ *
                                                                                 (uVar10 - uVar93)
                                                                                >> 7) & ~auVar68[0])
                                                                  + uVar93) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar29 + 4))))));
      auVar59[8] = (char)uVar79;
      auVar59._0_8_ = uVar5;
      auVar59[9] = (char)(uVar79 >> 8);
      auVar59[10] = (char)(uVar79 >> 0x10);
      auVar59[12] = (char)uVar80;
      auVar59[13] = (char)(uVar80 >> 8);
      auVar59[14] = (char)(uVar80 >> 0x10);
      uVar6 = CONCAT17((char)(((byte)((byte)(auVar101._4_4_ * (uVar10 - uVar90) >> 7) & ~auVar99[4])
                              + uVar90) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar75 >> 0x10),
                                CONCAT15((char)(uVar75 >> 8),
                                         CONCAT14((char)uVar75,
                                                  CONCAT13((char)(((byte)((byte)(auVar101._0_4_ *
                                                                                 (uVar10 - uVar89)
                                                                                >> 7) & ~auVar99[0])
                                                                  + uVar89) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)puVar29)))));
      auVar51[8] = (char)uVar76;
      auVar51._0_8_ = uVar6;
      auVar51[9] = (char)(uVar76 >> 8);
      auVar51[10] = (char)(uVar76 >> 0x10);
      auVar51[12] = (char)uVar77;
      auVar51[13] = (char)(uVar77 >> 8);
      auVar51[14] = (char)(uVar77 >> 0x10);
      uVar7 = CONCAT17((char)(((byte)((byte)(auVar65._4_4_ * (uVar10 - uVar86) >> 7) & ~auVar34[4])
                              + uVar86) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar72 >> 0x10),
                                CONCAT15((char)(uVar72 >> 8),
                                         CONCAT14((char)uVar72,
                                                  CONCAT13((char)(((byte)((byte)(auVar65._0_4_ *
                                                                                 (uVar10 - uVar85)
                                                                                >> 7) & ~auVar34[0])
                                                                  + uVar85) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar29 + 8))))));
      auVar43[8] = (char)uVar73;
      auVar43._0_8_ = uVar7;
      auVar43[9] = (char)(uVar73 >> 8);
      auVar43[10] = (char)(uVar73 >> 0x10);
      auVar43[12] = (char)uVar74;
      auVar43[13] = (char)(uVar74 >> 8);
      auVar43[14] = (char)(uVar74 >> 0x10);
      uVar8 = CONCAT17((char)(((byte)((byte)(auVar67._4_4_ * (uVar10 - uVar84) >> 7) & ~auVar66[4])
                              + uVar84) * 0x1000000 >> 0x18),
                       CONCAT16((char)(uVar69 >> 0x10),
                                CONCAT15((char)(uVar69 >> 8),
                                         CONCAT14((char)uVar69,
                                                  CONCAT13((char)(((byte)((byte)(auVar67._0_4_ *
                                                                                 (uVar10 - uVar83)
                                                                                >> 7) & ~auVar66[0])
                                                                  + uVar83) * 0x1000000 >> 0x18),
                                                           (int3)*(uint *)(puVar29 + 0xc))))));
      auVar36[8] = (char)uVar70;
      auVar36._0_8_ = uVar8;
      auVar36[9] = (char)(uVar70 >> 8);
      auVar36[10] = (char)(uVar70 >> 0x10);
      auVar36[12] = (char)uVar71;
      auVar36[13] = (char)(uVar71 >> 8);
      auVar36[14] = (char)(uVar71 >> 0x10);
      puVar32[1] = auVar51._8_8_;
      *puVar32 = uVar6;
      puVar32[3] = auVar59._8_8_;
      puVar32[2] = uVar5;
      puVar32[5] = auVar43._8_8_;
      puVar32[4] = uVar7;
      puVar32[7] = auVar36._8_8_;
      puVar32[6] = uVar8;
      puVar32 = puVar32 + 8;
      puVar29 = puVar31;
    } while (puVar31 != (undefined8 *)((long)param_2 + 0x784U));
    lVar28 = 0x1e1;
    puVar32 = param_1 + 0xf8;
    do {
      while( true ) {
        uVar70 = *(uint *)((long)param_2 + lVar28 * 4);
        uVar69 = (uint)*(byte *)((long)param_3 + lVar28);
        if (uVar69 == 0x7f) {
          uVar69 = 0x80;
        }
        uVar71 = uVar70 >> 0x18 & 0x7f;
        if ((int)uVar70 < 0) break;
        *(uint *)puVar32 = uVar70 & 0xffffff | uVar71 << 0x18;
        lVar28 = lVar28 + 2;
        puVar32 = (undefined8 *)((long)puVar32 + 4);
        if (lVar28 == 0x201) goto LAB_00157ae4;
      }
      lVar28 = lVar28 + 2;
      *(uint *)puVar32 =
           uVar70 & 0xffffff | (uVar71 + ((uVar10 - uVar71) * uVar69 >> 7)) * 0x1000000;
      puVar32 = (undefined8 *)((long)puVar32 + 4);
    } while (lVar28 != 0x201);
  }
LAB_00157ae4:
  if (lVar11 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar11 - ___stack_chk_guard,0);
  }
  return;
}


