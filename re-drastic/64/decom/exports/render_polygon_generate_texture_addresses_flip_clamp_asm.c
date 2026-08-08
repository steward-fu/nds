/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_flip_clamp_asm
 * Address  : 0019a5e4
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_flip_clamp_asm
               (int *param_1,undefined2 *param_2,int param_3,uint param_4,short param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined6 uVar5;
  uint3 uVar6;
  uint uVar7;
  undefined6 uVar8;
  undefined2 uVar9;
  undefined auVar10 [16];
  undefined7 uVar11;
  short sVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint3 uVar34;
  undefined auVar40 [16];
  undefined auVar41 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined auVar47 [16];
  byte bVar48;
  uint uVar35;
  undefined6 uVar36;
  undefined8 uVar37;
  undefined auVar38 [12];
  undefined auVar39 [14];
  undefined auVar42 [16];
  
  bVar45 = (byte)param_4;
  bVar46 = (byte)(param_4 >> 8);
  sVar12 = (short)param_4 + -1;
  bVar43 = (byte)sVar12;
  bVar44 = (byte)((ushort)sVar12 >> 8);
  param_5 = param_5 + -1;
  do {
    uVar9 = *param_2;
    auVar40._0_2_ = param_2[1];
    bVar20 = (byte)param_2[2];
    bVar21 = (byte)((ushort)param_2[2] >> 8);
    auVar40._2_2_ = param_2[3];
    bVar22 = (byte)param_2[4];
    bVar23 = (byte)((ushort)param_2[4] >> 8);
    auVar40._4_2_ = param_2[5];
    bVar24 = (byte)param_2[6];
    bVar25 = (byte)((ushort)param_2[6] >> 8);
    auVar40._6_2_ = param_2[7];
    bVar26 = (byte)param_2[8];
    bVar27 = (byte)((ushort)param_2[8] >> 8);
    auVar40._8_2_ = param_2[9];
    bVar28 = (byte)param_2[10];
    bVar29 = (byte)((ushort)param_2[10] >> 8);
    auVar40._10_2_ = param_2[0xb];
    bVar30 = (byte)param_2[0xc];
    bVar31 = (byte)((ushort)param_2[0xc] >> 8);
    auVar40._12_2_ = param_2[0xd];
    bVar32 = (byte)param_2[0xe];
    bVar33 = (byte)((ushort)param_2[0xe] >> 8);
    auVar40._14_2_ = param_2[0xf];
    param_2 = param_2 + 0x10;
    uVar11 = *param_6;
    bVar48 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    auVar41[2] = bVar20;
    auVar41._0_2_ = uVar9;
    auVar41[3] = bVar21;
    auVar41[4] = bVar22;
    auVar41[5] = bVar23;
    auVar41[6] = bVar24;
    auVar41[7] = bVar25;
    auVar41[8] = bVar26;
    auVar41[9] = bVar27;
    auVar41[10] = bVar28;
    auVar41[11] = bVar29;
    auVar41[12] = bVar30;
    auVar41[13] = bVar31;
    auVar41[14] = bVar32;
    auVar41[15] = bVar33;
    auVar47[1] = bVar46 & ~bVar44;
    auVar47[0] = bVar45 & ~bVar43;
    auVar47[2] = bVar45 & ~bVar43;
    auVar47[3] = bVar46 & ~bVar44;
    auVar47[4] = bVar45 & ~bVar43;
    auVar47[5] = bVar46 & ~bVar44;
    auVar47[6] = bVar45 & ~bVar43;
    auVar47[7] = bVar46 & ~bVar44;
    auVar47[8] = bVar45 & ~bVar43;
    auVar47[9] = bVar46 & ~bVar44;
    auVar47[10] = bVar45 & ~bVar43;
    auVar47[11] = bVar46 & ~bVar44;
    auVar47[12] = bVar45 & ~bVar43;
    auVar47[13] = bVar46 & ~bVar44;
    auVar47[14] = bVar45 & ~bVar43;
    auVar47[15] = bVar46 & ~bVar44;
    auVar47 = NEON_cmtst(auVar41,auVar47,2);
    auVar41 = NEON_smax(ZEXT816(0),auVar40,2);
    bVar13 = (byte)uVar11;
    bVar14 = (byte)((uint7)uVar11 >> 8);
    bVar15 = (byte)((uint7)uVar11 >> 0x10);
    bVar16 = (byte)((uint7)uVar11 >> 0x18);
    bVar17 = (byte)((uint7)uVar11 >> 0x20);
    bVar18 = (byte)((uint7)uVar11 >> 0x28);
    bVar19 = (byte)((uint7)uVar11 >> 0x30);
    auVar10._2_2_ = param_5;
    auVar10._0_2_ = param_5;
    auVar10._4_2_ = param_5;
    auVar10._6_2_ = param_5;
    auVar10._8_2_ = param_5;
    auVar10._10_2_ = param_5;
    auVar10._12_2_ = param_5;
    auVar10._14_2_ = param_5;
    auVar41 = NEON_smin(auVar41,auVar10,2);
    uVar34 = CONCAT12(auVar41[2] & bVar14,
                      CONCAT11(auVar41[1] & (char)bVar13 >> 7,auVar41[0] & bVar13));
    uVar35 = CONCAT13(auVar41[3] & (char)bVar14 >> 7,uVar34);
    uVar36 = CONCAT15(auVar41[5] & (char)bVar15 >> 7,CONCAT14(auVar41[4] & bVar15,uVar35));
    uVar37 = CONCAT17(auVar41[7] & (char)bVar16 >> 7,CONCAT16(auVar41[6] & bVar16,uVar36));
    auVar38._0_10_ = CONCAT19(auVar41[9] & (char)bVar17 >> 7,CONCAT18(auVar41[8] & bVar17,uVar37));
    auVar38[10] = auVar41[10] & bVar18;
    auVar38[11] = auVar41[11] & (char)bVar18 >> 7;
    auVar39[12] = auVar41[12] & bVar19;
    auVar39._0_12_ = auVar38;
    auVar39[13] = auVar41[13] & (char)bVar19 >> 7;
    auVar42[14] = auVar41[14] & bVar48;
    auVar42._0_14_ = auVar39;
    auVar42[15] = auVar41[15] & (char)bVar48 >> 7;
    uVar3 = CONCAT12((bVar20 ^ auVar47[2]) & bVar43 & bVar14,
                     CONCAT11(((byte)((ushort)uVar9 >> 8) ^ auVar47[1]) & bVar44 & (char)bVar13 >> 7
                              ,((byte)uVar9 ^ auVar47[0]) & bVar43 & bVar13));
    uVar4 = CONCAT13((bVar21 ^ auVar47[3]) & bVar44 & (char)bVar14 >> 7,uVar3);
    uVar5 = CONCAT15((bVar23 ^ auVar47[5]) & bVar44 & (char)bVar15 >> 7,
                     CONCAT14((bVar22 ^ auVar47[4]) & bVar43 & bVar15,uVar4));
    uVar6 = CONCAT12((bVar28 ^ auVar47[10]) & bVar43 & bVar18,
                     CONCAT11((bVar27 ^ auVar47[9]) & bVar44 & (char)bVar17 >> 7,
                              (bVar26 ^ auVar47[8]) & bVar43 & bVar17));
    uVar7 = CONCAT13((bVar29 ^ auVar47[11]) & bVar44 & (char)bVar18 >> 7,uVar6);
    uVar8 = CONCAT15((bVar31 ^ auVar47[13]) & bVar44 & (char)bVar19 >> 7,
                     CONCAT14((bVar30 ^ auVar47[12]) & bVar43 & bVar19,uVar7));
    *param_1 = (uVar3 & 0xffff) + (uVar34 & 0xffff) * (param_4 & 0xffff);
    param_1[1] = (uVar4 >> 0x10) + (uVar35 >> 0x10) * (param_4 & 0xffff);
    param_1[2] = (uint)(ushort)((uint6)uVar5 >> 0x20) +
                 (uint)(ushort)((uint6)uVar36 >> 0x20) * (param_4 & 0xffff);
    param_1[3] = (uint)(ushort)(CONCAT17((bVar25 ^ auVar47[7]) & bVar44 & (char)bVar16 >> 7,
                                         CONCAT16((bVar24 ^ auVar47[6]) & bVar43 & bVar16,uVar5)) >>
                               0x30) + (uint)(ushort)((ulong)uVar37 >> 0x30) * (param_4 & 0xffff);
    param_1[4] = (uVar6 & 0xffff) +
                 (uint)(ushort)((unkuint10)auVar38._0_10_ >> 0x40) * (param_4 & 0xffff);
    param_1[5] = (uVar7 >> 0x10) + (uint)auVar38._10_2_ * (param_4 & 0xffff);
    param_1[6] = (uint)(ushort)((uint6)uVar8 >> 0x20) + (uint)auVar39._12_2_ * (param_4 & 0xffff);
    param_1[7] = (uint)(ushort)(CONCAT17((bVar33 ^ auVar47[15]) & bVar44 & (char)bVar48 >> 7,
                                         CONCAT16((bVar32 ^ auVar47[14]) & bVar43 & bVar48,uVar8))
                               >> 0x30) + (uint)auVar42._14_2_ * (param_4 & 0xffff);
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


