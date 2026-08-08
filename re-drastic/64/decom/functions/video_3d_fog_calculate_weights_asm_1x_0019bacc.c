/*
 * Ghidra decompilation
 *
 * Function : video_3d_fog_calculate_weights_asm_1x
 * Address  : 0019bacc
 * Program  : drastic64
 */


void video_3d_fog_calculate_weights_asm_1x
               (undefined (*param_1) [16],char *param_2,undefined (*param_3) [16],undefined4 param_4
               )

{
  undefined4 uVar1;
  undefined6 uVar2;
  undefined4 uVar3;
  undefined6 uVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined2 uVar19;
  undefined2 uVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
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
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  
  auVar13 = *param_3;
  auVar11 = *param_3;
  auVar14 = param_3[1];
  auVar12 = param_3[1];
  uVar20 = (undefined2)((uint)param_4 >> 0x10);
  auVar17 = param_3[2];
  auVar15 = param_3[2];
  auVar18 = param_3[3];
  auVar16 = param_3[3];
  uVar19 = (undefined2)param_4;
  iVar21 = 0x100;
  do {
    auVar41 = *param_1;
    auVar40 = param_1[1];
    auVar44 = param_1[2];
    auVar47 = param_1[3];
    auVar50 = param_1[4];
    auVar38 = param_1[5];
    auVar9 = param_1[6];
    auVar10 = param_1[7];
    param_1 = param_1 + 8;
    uVar26 = auVar40._4_4_ >> 9;
    uVar27 = auVar40._8_4_ >> 9;
    uVar28 = auVar40._12_4_ >> 9;
    uVar22 = (ushort)(auVar40._0_4_ >> 9);
    uVar1 = CONCAT13((char)(uVar26 >> 8),CONCAT12((char)uVar26,uVar22));
    uVar2 = CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,uVar1));
    uVar26 = auVar47._4_4_ >> 9;
    uVar27 = auVar47._8_4_ >> 9;
    uVar29 = auVar47._12_4_ >> 9;
    uVar23 = (ushort)(auVar47._0_4_ >> 9);
    uVar3 = CONCAT13((char)(uVar26 >> 8),CONCAT12((char)uVar26,uVar23));
    uVar4 = CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,uVar3));
    uVar26 = auVar38._4_4_ >> 9;
    uVar27 = auVar38._8_4_ >> 9;
    uVar30 = auVar38._12_4_ >> 9;
    uVar24 = (ushort)(auVar38._0_4_ >> 9);
    uVar5 = CONCAT13((char)(uVar26 >> 8),CONCAT12((char)uVar26,uVar24));
    uVar6 = CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,uVar5));
    uVar26 = auVar10._4_4_ >> 9;
    uVar27 = auVar10._8_4_ >> 9;
    uVar31 = auVar10._12_4_ >> 9;
    uVar25 = (ushort)(auVar10._0_4_ >> 9);
    uVar7 = CONCAT13((char)(uVar26 >> 8),CONCAT12((char)uVar26,uVar25));
    uVar8 = CONCAT15((char)(uVar27 >> 8),CONCAT14((char)uVar27,uVar7));
    auVar39._0_8_ =
         CONCAT26((short)(auVar41._12_4_ >> 9),
                  CONCAT24((short)(auVar41._8_4_ >> 9),
                           CONCAT22((short)(auVar41._4_4_ >> 9),(short)(auVar41._0_4_ >> 9)))) &
         0x7fff7fff7fff7fff;
    auVar39._8_2_ = uVar22 & 0x7fff;
    auVar39._10_2_ = (ushort)((uint)uVar1 >> 0x10) & 0x7fff;
    auVar39._12_2_ = (ushort)((uint6)uVar2 >> 0x20) & 0x7fff;
    auVar39._14_2_ =
         (ushort)(CONCAT17((char)(uVar28 >> 8),CONCAT16((char)uVar28,uVar2)) >> 0x30) & 0x7fff;
    auVar43._0_8_ =
         CONCAT26((short)(auVar44._12_4_ >> 9),
                  CONCAT24((short)(auVar44._8_4_ >> 9),
                           CONCAT22((short)(auVar44._4_4_ >> 9),(short)(auVar44._0_4_ >> 9)))) &
         0x7fff7fff7fff7fff;
    auVar43._8_2_ = uVar23 & 0x7fff;
    auVar43._10_2_ = (ushort)((uint)uVar3 >> 0x10) & 0x7fff;
    auVar43._12_2_ = (ushort)((uint6)uVar4 >> 0x20) & 0x7fff;
    auVar43._14_2_ =
         (ushort)(CONCAT17((char)(uVar29 >> 8),CONCAT16((char)uVar29,uVar4)) >> 0x30) & 0x7fff;
    auVar46._0_8_ =
         CONCAT26((short)(auVar50._12_4_ >> 9),
                  CONCAT24((short)(auVar50._8_4_ >> 9),
                           CONCAT22((short)(auVar50._4_4_ >> 9),(short)(auVar50._0_4_ >> 9)))) &
         0x7fff7fff7fff7fff;
    auVar46._8_2_ = uVar24 & 0x7fff;
    auVar46._10_2_ = (ushort)((uint)uVar5 >> 0x10) & 0x7fff;
    auVar46._12_2_ = (ushort)((uint6)uVar6 >> 0x20) & 0x7fff;
    auVar46._14_2_ =
         (ushort)(CONCAT17((char)(uVar30 >> 8),CONCAT16((char)uVar30,uVar6)) >> 0x30) & 0x7fff;
    auVar49._0_8_ =
         CONCAT26((short)(auVar9._12_4_ >> 9),
                  CONCAT24((short)(auVar9._8_4_ >> 9),
                           CONCAT22((short)(auVar9._4_4_ >> 9),(short)(auVar9._0_4_ >> 9)))) &
         0x7fff7fff7fff7fff;
    auVar49._8_2_ = uVar25 & 0x7fff;
    auVar49._10_2_ = (ushort)((uint)uVar7 >> 0x10) & 0x7fff;
    auVar49._12_2_ = (ushort)((uint6)uVar8 >> 0x20) & 0x7fff;
    auVar49._14_2_ =
         (ushort)(CONCAT17((char)(uVar31 >> 8),CONCAT16((char)uVar31,uVar8)) >> 0x30) & 0x7fff;
    auVar50._2_2_ = uVar20;
    auVar50._0_2_ = uVar20;
    auVar50._4_2_ = uVar20;
    auVar50._6_2_ = uVar20;
    auVar50._8_2_ = uVar20;
    auVar50._10_2_ = uVar20;
    auVar50._12_2_ = uVar20;
    auVar50._14_2_ = uVar20;
    auVar40 = NEON_uqsub(auVar39,auVar50,2);
    auVar38._2_2_ = uVar20;
    auVar38._0_2_ = uVar20;
    auVar38._4_2_ = uVar20;
    auVar38._6_2_ = uVar20;
    auVar38._8_2_ = uVar20;
    auVar38._10_2_ = uVar20;
    auVar38._12_2_ = uVar20;
    auVar38._14_2_ = uVar20;
    auVar44 = NEON_uqsub(auVar43,auVar38,2);
    auVar9._2_2_ = uVar20;
    auVar9._0_2_ = uVar20;
    auVar9._4_2_ = uVar20;
    auVar9._6_2_ = uVar20;
    auVar9._8_2_ = uVar20;
    auVar9._10_2_ = uVar20;
    auVar9._12_2_ = uVar20;
    auVar9._14_2_ = uVar20;
    auVar47 = NEON_uqsub(auVar46,auVar9,2);
    auVar10._2_2_ = uVar20;
    auVar10._0_2_ = uVar20;
    auVar10._4_2_ = uVar20;
    auVar10._6_2_ = uVar20;
    auVar10._8_2_ = uVar20;
    auVar10._10_2_ = uVar20;
    auVar10._12_2_ = uVar20;
    auVar10._14_2_ = uVar20;
    auVar50 = NEON_uqsub(auVar49,auVar10,2);
    auVar41._2_2_ = uVar19;
    auVar41._0_2_ = uVar19;
    auVar41._4_2_ = uVar19;
    auVar41._6_2_ = uVar19;
    auVar41._8_2_ = uVar19;
    auVar41._10_2_ = uVar19;
    auVar41._12_2_ = uVar19;
    auVar41._14_2_ = uVar19;
    auVar41 = NEON_sqshl(auVar40,auVar41,2);
    auVar40._2_2_ = uVar19;
    auVar40._0_2_ = uVar19;
    auVar40._4_2_ = uVar19;
    auVar40._6_2_ = uVar19;
    auVar40._8_2_ = uVar19;
    auVar40._10_2_ = uVar19;
    auVar40._12_2_ = uVar19;
    auVar40._14_2_ = uVar19;
    auVar40 = NEON_sqshl(auVar44,auVar40,2);
    auVar44._2_2_ = uVar19;
    auVar44._0_2_ = uVar19;
    auVar44._4_2_ = uVar19;
    auVar44._6_2_ = uVar19;
    auVar44._8_2_ = uVar19;
    auVar44._10_2_ = uVar19;
    auVar44._12_2_ = uVar19;
    auVar44._14_2_ = uVar19;
    auVar44 = NEON_sqshl(auVar47,auVar44,2);
    auVar47._2_2_ = uVar19;
    auVar47._0_2_ = uVar19;
    auVar47._4_2_ = uVar19;
    auVar47._6_2_ = uVar19;
    auVar47._8_2_ = uVar19;
    auVar47._10_2_ = uVar19;
    auVar47._12_2_ = uVar19;
    auVar47._14_2_ = uVar19;
    auVar47 = NEON_sqshl(auVar50,auVar47,2);
    auVar42._0_8_ = auVar41._0_8_ & 0x3ff03ff03ff03ff;
    auVar42._8_2_ = auVar41._8_2_ & 0x3ff;
    auVar42._10_2_ = auVar41._10_2_ & 0x3ff;
    auVar42._12_2_ = auVar41._12_2_ & 0x3ff;
    auVar42._14_2_ = auVar41._14_2_ & 0x3ff;
    auVar45._0_8_ = auVar40._0_8_ & 0x3ff03ff03ff03ff;
    auVar45._8_2_ = auVar40._8_2_ & 0x3ff;
    auVar45._10_2_ = auVar40._10_2_ & 0x3ff;
    auVar45._12_2_ = auVar40._12_2_ & 0x3ff;
    auVar45._14_2_ = auVar40._14_2_ & 0x3ff;
    auVar32[0] = auVar41[1] >> 2;
    auVar32[1] = auVar41[3] >> 2;
    auVar32[2] = auVar41[5] >> 2;
    auVar32[3] = auVar41[7] >> 2;
    auVar32[4] = auVar41[9] >> 2;
    auVar32[5] = auVar41[11] >> 2;
    auVar32[6] = auVar41[13] >> 2;
    auVar32[7] = auVar41[15] >> 2;
    auVar32[8] = auVar40[1] >> 2;
    auVar32[9] = auVar40[3] >> 2;
    auVar32[10] = auVar40[5] >> 2;
    auVar32[11] = auVar40[7] >> 2;
    auVar32[12] = auVar40[9] >> 2;
    auVar32[13] = auVar40[11] >> 2;
    auVar32[14] = auVar40[13] >> 2;
    auVar32[15] = auVar40[15] >> 2;
    auVar33[0] = auVar44[1] >> 2;
    auVar33[1] = auVar44[3] >> 2;
    auVar33[2] = auVar44[5] >> 2;
    auVar33[3] = auVar44[7] >> 2;
    auVar33[4] = auVar44[9] >> 2;
    auVar33[5] = auVar44[11] >> 2;
    auVar33[6] = auVar44[13] >> 2;
    auVar33[7] = auVar44[15] >> 2;
    auVar33[8] = auVar47[1] >> 2;
    auVar33[9] = auVar47[3] >> 2;
    auVar33[10] = auVar47[5] >> 2;
    auVar33[11] = auVar47[7] >> 2;
    auVar33[12] = auVar47[9] >> 2;
    auVar33[13] = auVar47[11] >> 2;
    auVar33[14] = auVar47[13] >> 2;
    auVar33[15] = auVar47[15] >> 2;
    auVar48._0_8_ = auVar44._0_8_ & 0x3ff03ff03ff03ff;
    auVar48._8_2_ = auVar44._8_2_ & 0x3ff;
    auVar48._10_2_ = auVar44._10_2_ & 0x3ff;
    auVar48._12_2_ = auVar44._12_2_ & 0x3ff;
    auVar48._14_2_ = auVar44._14_2_ & 0x3ff;
    auVar51._0_8_ = auVar47._0_8_ & 0x3ff03ff03ff03ff;
    auVar51._8_2_ = auVar47._8_2_ & 0x3ff;
    auVar51._10_2_ = auVar47._10_2_ & 0x3ff;
    auVar51._12_2_ = auVar47._12_2_ & 0x3ff;
    auVar51._14_2_ = auVar47._14_2_ & 0x3ff;
    auVar50 = a64_TBL(ZEXT816(0),auVar11,auVar12,auVar32);
    auVar38 = a64_TBL(ZEXT816(0),auVar13,auVar14,auVar33);
    auVar41 = a64_TBL(ZEXT816(0),auVar15,auVar16,auVar32);
    auVar40 = a64_TBL(ZEXT816(0),auVar17,auVar18,auVar33);
    auVar34._0_2_ = (short)auVar41[0] << 5;
    auVar34._2_2_ = (short)auVar41[1] << 5;
    auVar34._4_2_ = (short)auVar41[2] << 5;
    auVar34._6_2_ = (short)auVar41[3] << 5;
    auVar34._8_2_ = (short)auVar41[4] << 5;
    auVar34._10_2_ = (short)auVar41[5] << 5;
    auVar34._12_2_ = (short)auVar41[6] << 5;
    auVar34._14_2_ = (short)auVar41[7] << 5;
    auVar36._0_2_ = (short)auVar40[0] << 5;
    auVar36._2_2_ = (short)auVar40[1] << 5;
    auVar36._4_2_ = (short)auVar40[2] << 5;
    auVar36._6_2_ = (short)auVar40[3] << 5;
    auVar36._8_2_ = (short)auVar40[4] << 5;
    auVar36._10_2_ = (short)auVar40[5] << 5;
    auVar36._12_2_ = (short)auVar40[6] << 5;
    auVar36._14_2_ = (short)auVar40[7] << 5;
    auVar35._0_2_ = (short)auVar41[8] << 5;
    auVar35._2_2_ = (short)auVar41[9] << 5;
    auVar35._4_2_ = (short)auVar41[10] << 5;
    auVar35._6_2_ = (short)auVar41[11] << 5;
    auVar35._8_2_ = (short)auVar41[12] << 5;
    auVar35._10_2_ = (short)auVar41[13] << 5;
    auVar35._12_2_ = (short)auVar41[14] << 5;
    auVar35._14_2_ = (short)auVar41[15] << 5;
    auVar37._0_2_ = (short)auVar40[8] << 5;
    auVar37._2_2_ = (short)auVar40[9] << 5;
    auVar37._4_2_ = (short)auVar40[10] << 5;
    auVar37._6_2_ = (short)auVar40[11] << 5;
    auVar37._8_2_ = (short)auVar40[12] << 5;
    auVar37._10_2_ = (short)auVar40[13] << 5;
    auVar37._12_2_ = (short)auVar40[14] << 5;
    auVar37._14_2_ = (short)auVar40[15] << 5;
    auVar41 = NEON_sqdmulh(auVar34,auVar42,2);
    auVar40 = NEON_sqdmulh(auVar35,auVar45,2);
    auVar44 = NEON_sqdmulh(auVar36,auVar48,2);
    auVar47 = NEON_sqdmulh(auVar37,auVar51,2);
    *param_2 = auVar50[0] + auVar41[0];
    param_2[1] = auVar50[1] + auVar41[2];
    param_2[2] = auVar50[2] + auVar41[4];
    param_2[3] = auVar50[3] + auVar41[6];
    param_2[4] = auVar50[4] + auVar41[8];
    param_2[5] = auVar50[5] + auVar41[10];
    param_2[6] = auVar50[6] + auVar41[12];
    param_2[7] = auVar50[7] + auVar41[14];
    param_2[8] = auVar50[8] + auVar40[0];
    param_2[9] = auVar50[9] + auVar40[2];
    param_2[10] = auVar50[10] + auVar40[4];
    param_2[0xb] = auVar50[11] + auVar40[6];
    param_2[0xc] = auVar50[12] + auVar40[8];
    param_2[0xd] = auVar50[13] + auVar40[10];
    param_2[0xe] = auVar50[14] + auVar40[12];
    param_2[0xf] = auVar50[15] + auVar40[14];
    param_2[0x10] = auVar38[0] + auVar44[0];
    param_2[0x11] = auVar38[1] + auVar44[2];
    param_2[0x12] = auVar38[2] + auVar44[4];
    param_2[0x13] = auVar38[3] + auVar44[6];
    param_2[0x14] = auVar38[4] + auVar44[8];
    param_2[0x15] = auVar38[5] + auVar44[10];
    param_2[0x16] = auVar38[6] + auVar44[12];
    param_2[0x17] = auVar38[7] + auVar44[14];
    param_2[0x18] = auVar38[8] + auVar47[0];
    param_2[0x19] = auVar38[9] + auVar47[2];
    param_2[0x1a] = auVar38[10] + auVar47[4];
    param_2[0x1b] = auVar38[11] + auVar47[6];
    param_2[0x1c] = auVar38[12] + auVar47[8];
    param_2[0x1d] = auVar38[13] + auVar47[10];
    param_2[0x1e] = auVar38[14] + auVar47[12];
    param_2[0x1f] = auVar38[15] + auVar47[14];
    param_2 = param_2 + 0x20;
    iVar21 = iVar21 + -0x20;
  } while (iVar21 != 0);
  return;
}


