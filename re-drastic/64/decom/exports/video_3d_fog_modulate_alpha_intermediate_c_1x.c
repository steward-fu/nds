/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_modulate_alpha_intermediate_c_1x
 * Address  : 00151500
 * Program  : drastic64
 */


void video_3d_fog_modulate_alpha_intermediate_c_1x
               (undefined (*param_1) [16],ulong *param_2,undefined (*param_3) [16],
               undefined8 param_4)

{
  ulong *puVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined uVar12;
  undefined uVar13;
  byte bVar14;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined auVar15 [16];
  undefined auVar16 [16];
  byte bVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined auVar21 [16];
  byte bVar25;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined auVar26 [16];
  byte bVar30;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined auVar31 [16];
  undefined auVar32 [16];
  uint uVar36;
  undefined auVar37 [16];
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  undefined auVar45 [16];
  uint uVar46;
  byte bVar47;
  byte bVar48;
  uint uVar49;
  uint uVar50;
  byte bVar51;
  byte bVar52;
  uint uVar53;
  uint uVar54;
  byte bVar55;
  byte bVar56;
  uint uVar57;
  uint uVar58;
  byte bVar59;
  byte bVar60;
  undefined auVar61 [16];
  uint uVar62;
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  uint uVar67;
  
  uVar9 = (long)param_1 + (0x3f - (long)param_2);
  uVar8 = (uint)((ulong)param_4 >> 0x18) & 0x1f;
  if ((param_3 < param_1 + 0x40 && param_1 < param_3 + 0x10 || uVar9 < 0x7e) ||
      (param_3 >= param_1 + 0x40 || param_1 >= param_3 + 0x10) && uVar9 == 0x7e) {
    lVar10 = 0;
    do {
      while( true ) {
        uVar46 = *(uint *)((long)param_2 + lVar10 * 4);
        uVar11 = (uint)(byte)(*param_3)[lVar10];
        uVar36 = uVar46 >> 0x18 & 0x7f;
        if (uVar11 == 0x7f) {
          uVar11 = 0x80;
        }
        if ((int)uVar46 < 0) break;
        *(uint *)(*param_1 + lVar10 * 4) = uVar46 & 0xffffff | uVar36 << 0x18;
        lVar10 = lVar10 + 1;
        if (lVar10 == 0x100) {
          return;
        }
      }
      *(uint *)(*param_1 + lVar10 * 4) =
           uVar46 & 0xffffff | (uVar36 + ((uVar8 - uVar36) * uVar11 >> 7)) * 0x1000000;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x100);
  }
  else {
    puVar1 = param_2 + 0x80;
    do {
      auVar32 = *param_3;
      uVar44 = param_2[1];
      uVar43 = *param_2;
      uVar42 = param_2[3];
      uVar41 = param_2[2];
      uVar12 = auVar32[1];
      uVar62 = (uint)CONCAT12(uVar12,(ushort)auVar32[0]);
      uVar13 = auVar32[9];
      uVar36 = (uint)CONCAT12(uVar13,(ushort)auVar32[8]);
      uVar40 = param_2[5];
      uVar39 = param_2[4];
      uVar38 = param_2[7];
      uVar9 = param_2[6];
      param_2 = param_2 + 8;
      uVar67 = CONCAT31(0,auVar32[4]);
      auVar37._1_3_ = 0;
      auVar37[0] = auVar32[12];
      auVar37[4] = auVar32[13];
      auVar37._5_3_ = 0;
      auVar37[8] = auVar32[14];
      auVar37._9_3_ = 0;
      auVar37[12] = auVar32[15];
      auVar37._13_3_ = 0;
      bVar30 = (byte)(uVar43 >> 0x18);
      uVar57 = (uint)(bVar30 & 0x7f);
      bVar33 = (byte)(uVar43 >> 0x38);
      uVar58 = (uint)(bVar33 & 0x7f);
      bVar34 = (byte)(uVar44 >> 0x18);
      bVar59 = bVar34 & 0x7f;
      bVar35 = (byte)(uVar44 >> 0x38);
      bVar60 = bVar35 & 0x7f;
      bVar25 = (byte)(uVar41 >> 0x18);
      uVar53 = (uint)(bVar25 & 0x7f);
      bVar27 = (byte)(uVar41 >> 0x38);
      uVar54 = (uint)(bVar27 & 0x7f);
      bVar28 = (byte)(uVar42 >> 0x18);
      bVar55 = bVar28 & 0x7f;
      bVar29 = (byte)(uVar42 >> 0x38);
      bVar56 = bVar29 & 0x7f;
      bVar20 = (byte)(uVar39 >> 0x18);
      uVar49 = (uint)(bVar20 & 0x7f);
      bVar22 = (byte)(uVar39 >> 0x38);
      uVar50 = (uint)(bVar22 & 0x7f);
      bVar23 = (byte)(uVar40 >> 0x18);
      bVar51 = bVar23 & 0x7f;
      bVar24 = (byte)(uVar40 >> 0x38);
      bVar52 = bVar24 & 0x7f;
      bVar14 = (byte)(uVar9 >> 0x18);
      uVar11 = (uint)(bVar14 & 0x7f);
      bVar17 = (byte)(uVar9 >> 0x38);
      uVar46 = (uint)(bVar17 & 0x7f);
      bVar18 = (byte)(uVar38 >> 0x18);
      bVar47 = bVar18 & 0x7f;
      bVar19 = (byte)(uVar38 >> 0x38);
      bVar48 = bVar19 & 0x7f;
      auVar45[8] = 0x7f;
      auVar45._0_8_ = 0x7f0000007f;
      auVar45._9_3_ = 0;
      auVar45[12] = 0x7f;
      auVar45._13_3_ = 0;
      auVar6._6_2_ = 0;
      auVar6._0_6_ = (uint6)CONCAT14(uVar12,uVar62) & 0xffff0000ffff;
      auVar6[8] = auVar32[2];
      auVar6._9_3_ = 0;
      auVar6[12] = auVar32[3];
      auVar6._13_3_ = 0;
      auVar65 = NEON_cmeq(auVar6,auVar45,4);
      auVar61[8] = 0x7f;
      auVar61._0_8_ = 0x7f0000007f;
      auVar61._9_3_ = 0;
      auVar61[12] = 0x7f;
      auVar61._13_3_ = 0;
      auVar2[4] = auVar32[5];
      auVar2._0_4_ = uVar67;
      auVar2._5_3_ = 0;
      auVar2[8] = auVar32[6];
      auVar2._9_3_ = 0;
      auVar2[12] = auVar32[7];
      auVar2._13_3_ = 0;
      auVar63 = NEON_cmeq(auVar2,auVar61,4);
      auVar64[8] = 0x7f;
      auVar64._0_8_ = 0x7f0000007f;
      auVar64._9_3_ = 0;
      auVar64[12] = 0x7f;
      auVar64._13_3_ = 0;
      auVar4._6_2_ = 0;
      auVar4._0_6_ = (uint6)CONCAT14(uVar13,uVar36) & 0xffff0000ffff;
      auVar4[8] = auVar32[10];
      auVar4._9_3_ = 0;
      auVar4[12] = auVar32[11];
      auVar4._13_3_ = 0;
      auVar61 = NEON_cmeq(auVar4,auVar64,4);
      auVar66[8] = 0x7f;
      auVar66._0_8_ = 0x7f0000007f;
      auVar66._9_3_ = 0;
      auVar66[12] = 0x7f;
      auVar66._13_3_ = 0;
      auVar45 = NEON_cmeq(auVar37,auVar66,4);
      auVar16[8] = 0x80;
      auVar16._0_8_ = 0x8000000080;
      auVar16._9_3_ = 0;
      auVar16[12] = 0x80;
      auVar16._13_3_ = 0;
      auVar7._6_2_ = 0;
      auVar7._0_6_ = (uint6)CONCAT14(uVar12,uVar62) & 0xffff0000ffff;
      auVar7[8] = auVar32[2];
      auVar7._9_3_ = 0;
      auVar7[12] = auVar32[3];
      auVar7._13_3_ = 0;
      auVar66 = NEON_bsl(auVar65,auVar16,auVar7,1);
      auVar65[8] = 0x80;
      auVar65._0_8_ = 0x8000000080;
      auVar65._9_3_ = 0;
      auVar65[12] = 0x80;
      auVar65._13_3_ = 0;
      auVar3[4] = auVar32[5];
      auVar3._0_4_ = uVar67;
      auVar3._5_3_ = 0;
      auVar3[8] = auVar32[6];
      auVar3._9_3_ = 0;
      auVar3[12] = auVar32[7];
      auVar3._13_3_ = 0;
      auVar64 = NEON_bsl(auVar63,auVar65,auVar3,1);
      auVar63[8] = 0x80;
      auVar63._0_8_ = 0x8000000080;
      auVar63._9_3_ = 0;
      auVar63[12] = 0x80;
      auVar63._13_3_ = 0;
      auVar5._6_2_ = 0;
      auVar5._0_6_ = (uint6)CONCAT14(uVar13,uVar36) & 0xffff0000ffff;
      auVar5[8] = auVar32[10];
      auVar5._9_3_ = 0;
      auVar5[12] = auVar32[11];
      auVar5._13_3_ = 0;
      auVar61 = NEON_bsl(auVar61,auVar63,auVar5,1);
      auVar32[8] = 0x80;
      auVar32._0_8_ = 0x8000000080;
      auVar32._9_3_ = 0;
      auVar32[12] = 0x80;
      auVar32._13_3_ = 0;
      auVar45 = NEON_bit(auVar37,auVar32,auVar45,1);
      auVar31._0_5_ = CONCAT14(bVar33,(uint)(bVar30 & 0x80)) & 0x80ffffffff;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar34 & 0x80;
      auVar31._9_3_ = 0;
      auVar31[12] = bVar35 & 0x80;
      auVar31._13_3_ = 0;
      auVar26._0_5_ = CONCAT14(bVar27,(uint)(bVar25 & 0x80)) & 0x80ffffffff;
      auVar26._5_3_ = 0;
      auVar26[8] = bVar28 & 0x80;
      auVar26._9_3_ = 0;
      auVar26[12] = bVar29 & 0x80;
      auVar26._13_3_ = 0;
      auVar21._0_5_ = CONCAT14(bVar22,(uint)(bVar20 & 0x80)) & 0x80ffffffff;
      auVar21._5_3_ = 0;
      auVar21[8] = bVar23 & 0x80;
      auVar21._9_3_ = 0;
      auVar21[12] = bVar24 & 0x80;
      auVar21._13_3_ = 0;
      auVar15._0_5_ = CONCAT14(bVar17,(uint)(bVar14 & 0x80)) & 0x80ffffffff;
      auVar15._5_3_ = 0;
      auVar15[8] = bVar18 & 0x80;
      auVar15._9_3_ = 0;
      auVar15[12] = bVar19 & 0x80;
      auVar15._13_3_ = 0;
      auVar32 = NEON_cmeq(auVar31,0,2);
      auVar63 = NEON_cmeq(auVar26,0,2);
      auVar65 = NEON_cmeq(auVar21,0,2);
      auVar16 = NEON_cmeq(auVar15,0,2);
      uVar43 = uVar43 & 0xffffff00ffffff;
      uVar44 = uVar44 & 0xffffff00ffffff;
      uVar41 = uVar41 & 0xffffff00ffffff;
      uVar42 = uVar42 & 0xffffff00ffffff;
      uVar39 = uVar39 & 0xffffff00ffffff;
      uVar40 = uVar40 & 0xffffff00ffffff;
      uVar9 = uVar9 & 0xffffff00ffffff;
      uVar38 = uVar38 & 0xffffff00ffffff;
      param_1[1][0] = (char)uVar44;
      param_1[1][1] = (char)(uVar44 >> 8);
      param_1[1][2] = (char)(uVar44 >> 0x10);
      param_1[1][3] = ((byte)(auVar66._8_4_ * (uVar8 - bVar59) >> 7) & ~auVar32[8]) + bVar59;
      param_1[1][4] = (char)(uVar44 >> 0x20);
      param_1[1][5] = (char)(uVar44 >> 0x28);
      param_1[1][6] = (char)(uVar44 >> 0x30);
      param_1[1][7] = ((byte)(auVar66._12_4_ * (uVar8 - bVar60) >> 7) & ~auVar32[12]) + bVar60;
      (*param_1)[0] = (char)uVar43;
      (*param_1)[1] = (char)(uVar43 >> 8);
      (*param_1)[2] = (char)(uVar43 >> 0x10);
      (*param_1)[3] =
           (char)(((byte)((byte)(auVar66._0_4_ * (uVar8 - uVar57) >> 7) & ~auVar32[0]) + uVar57) *
                  0x1000000 >> 0x18);
      (*param_1)[4] = (char)(uVar43 >> 0x20);
      (*param_1)[5] = (char)(uVar43 >> 0x28);
      (*param_1)[6] = (char)(uVar43 >> 0x30);
      (*param_1)[7] =
           (char)(((byte)((byte)(auVar66._4_4_ * (uVar8 - uVar58) >> 7) & ~auVar32[4]) + uVar58) *
                  0x1000000 >> 0x18);
      param_1[2][0] = (char)uVar42;
      param_1[2][1] = (char)(uVar42 >> 8);
      param_1[2][2] = (char)(uVar42 >> 0x10);
      param_1[2][3] = ((byte)(auVar64._8_4_ * (uVar8 - bVar55) >> 7) & ~auVar63[8]) + bVar55;
      param_1[2][4] = (char)(uVar42 >> 0x20);
      param_1[2][5] = (char)(uVar42 >> 0x28);
      param_1[2][6] = (char)(uVar42 >> 0x30);
      param_1[2][7] = ((byte)(auVar64._12_4_ * (uVar8 - bVar56) >> 7) & ~auVar63[12]) + bVar56;
      param_1[1][0] = (char)uVar41;
      param_1[1][1] = (char)(uVar41 >> 8);
      param_1[1][2] = (char)(uVar41 >> 0x10);
      param_1[1][3] =
           (char)(((byte)((byte)(auVar64._0_4_ * (uVar8 - uVar53) >> 7) & ~auVar63[0]) + uVar53) *
                  0x1000000 >> 0x18);
      param_1[1][4] = (char)(uVar41 >> 0x20);
      param_1[1][5] = (char)(uVar41 >> 0x28);
      param_1[1][6] = (char)(uVar41 >> 0x30);
      param_1[1][7] =
           (char)(((byte)((byte)(auVar64._4_4_ * (uVar8 - uVar54) >> 7) & ~auVar63[4]) + uVar54) *
                  0x1000000 >> 0x18);
      param_1[3][0] = (char)uVar40;
      param_1[3][1] = (char)(uVar40 >> 8);
      param_1[3][2] = (char)(uVar40 >> 0x10);
      param_1[3][3] = ((byte)(auVar61._8_4_ * (uVar8 - bVar51) >> 7) & ~auVar65[8]) + bVar51;
      param_1[3][4] = (char)(uVar40 >> 0x20);
      param_1[3][5] = (char)(uVar40 >> 0x28);
      param_1[3][6] = (char)(uVar40 >> 0x30);
      param_1[3][7] = ((byte)(auVar61._12_4_ * (uVar8 - bVar52) >> 7) & ~auVar65[12]) + bVar52;
      param_1[2][0] = (char)uVar39;
      param_1[2][1] = (char)(uVar39 >> 8);
      param_1[2][2] = (char)(uVar39 >> 0x10);
      param_1[2][3] =
           (char)(((byte)((byte)(auVar61._0_4_ * (uVar8 - uVar49) >> 7) & ~auVar65[0]) + uVar49) *
                  0x1000000 >> 0x18);
      param_1[2][4] = (char)(uVar39 >> 0x20);
      param_1[2][5] = (char)(uVar39 >> 0x28);
      param_1[2][6] = (char)(uVar39 >> 0x30);
      param_1[2][7] =
           (char)(((byte)((byte)(auVar61._4_4_ * (uVar8 - uVar50) >> 7) & ~auVar65[4]) + uVar50) *
                  0x1000000 >> 0x18);
      param_1[4][0] = (char)uVar38;
      param_1[4][1] = (char)(uVar38 >> 8);
      param_1[4][2] = (char)(uVar38 >> 0x10);
      param_1[4][3] = ((byte)(auVar45._8_4_ * (uVar8 - bVar47) >> 7) & ~auVar16[8]) + bVar47;
      param_1[4][4] = (char)(uVar38 >> 0x20);
      param_1[4][5] = (char)(uVar38 >> 0x28);
      param_1[4][6] = (char)(uVar38 >> 0x30);
      param_1[4][7] = ((byte)(auVar45._12_4_ * (uVar8 - bVar48) >> 7) & ~auVar16[12]) + bVar48;
      param_1[3][0] = (char)uVar9;
      param_1[3][1] = (char)(uVar9 >> 8);
      param_1[3][2] = (char)(uVar9 >> 0x10);
      param_1[3][3] =
           (char)(((byte)((byte)(auVar45._0_4_ * (uVar8 - uVar11) >> 7) & ~auVar16[0]) + uVar11) *
                  0x1000000 >> 0x18);
      param_1[3][4] = (char)(uVar9 >> 0x20);
      param_1[3][5] = (char)(uVar9 >> 0x28);
      param_1[3][6] = (char)(uVar9 >> 0x30);
      param_1[3][7] =
           (char)(((byte)((byte)(auVar45._4_4_ * (uVar8 - uVar46) >> 7) & ~auVar16[4]) + uVar46) *
                  0x1000000 >> 0x18);
      param_1 = param_1 + 4;
      param_3 = param_3 + 1;
    } while (puVar1 != param_2);
  }
  return;
}


