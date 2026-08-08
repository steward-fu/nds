/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_clamp_flip_asm
 * Address  : 0019a754
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_clamp_flip_asm
               (int *param_1,undefined2 *param_2,int param_3,ushort param_4,undefined4 param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined6 uVar5;
  undefined2 uVar6;
  undefined auVar7 [16];
  undefined7 uVar8;
  short sVar9;
  short sVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint3 uVar18;
  undefined auVar24 [16];
  undefined auVar25 [16];
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined auVar45 [16];
  byte bVar46;
  uint uVar19;
  undefined6 uVar20;
  undefined8 uVar21;
  undefined auVar22 [12];
  undefined auVar23 [14];
  undefined auVar26 [16];
  
  sVar9 = param_4 - 1;
  bVar43 = (byte)param_5;
  bVar44 = (byte)((uint)param_5 >> 8);
  sVar10 = (short)param_5 + -1;
  bVar41 = (byte)sVar10;
  bVar42 = (byte)((ushort)sVar10 >> 8);
  do {
    auVar24._0_2_ = *param_2;
    uVar6 = param_2[1];
    auVar24._2_2_ = param_2[2];
    bVar27 = (byte)param_2[3];
    bVar28 = (byte)((ushort)param_2[3] >> 8);
    auVar24._4_2_ = param_2[4];
    bVar29 = (byte)param_2[5];
    bVar30 = (byte)((ushort)param_2[5] >> 8);
    auVar24._6_2_ = param_2[6];
    bVar31 = (byte)param_2[7];
    bVar32 = (byte)((ushort)param_2[7] >> 8);
    auVar24._8_2_ = param_2[8];
    bVar33 = (byte)param_2[9];
    bVar34 = (byte)((ushort)param_2[9] >> 8);
    auVar24._10_2_ = param_2[10];
    bVar35 = (byte)param_2[0xb];
    bVar36 = (byte)((ushort)param_2[0xb] >> 8);
    auVar24._12_2_ = param_2[0xc];
    bVar37 = (byte)param_2[0xd];
    bVar38 = (byte)((ushort)param_2[0xd] >> 8);
    auVar24._14_2_ = param_2[0xe];
    bVar39 = (byte)param_2[0xf];
    bVar40 = (byte)((ushort)param_2[0xf] >> 8);
    param_2 = param_2 + 0x10;
    uVar8 = *param_6;
    bVar46 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    auVar24 = NEON_smax(ZEXT816(0),auVar24,2);
    auVar25[2] = bVar27;
    auVar25._0_2_ = uVar6;
    auVar25[3] = bVar28;
    auVar25[4] = bVar29;
    auVar25[5] = bVar30;
    auVar25[6] = bVar31;
    auVar25[7] = bVar32;
    auVar25[8] = bVar33;
    auVar25[9] = bVar34;
    auVar25[10] = bVar35;
    auVar25[11] = bVar36;
    auVar25[12] = bVar37;
    auVar25[13] = bVar38;
    auVar25[14] = bVar39;
    auVar25[15] = bVar40;
    auVar45[1] = bVar44 & ~bVar42;
    auVar45[0] = bVar43 & ~bVar41;
    auVar45[2] = bVar43 & ~bVar41;
    auVar45[3] = bVar44 & ~bVar42;
    auVar45[4] = bVar43 & ~bVar41;
    auVar45[5] = bVar44 & ~bVar42;
    auVar45[6] = bVar43 & ~bVar41;
    auVar45[7] = bVar44 & ~bVar42;
    auVar45[8] = bVar43 & ~bVar41;
    auVar45[9] = bVar44 & ~bVar42;
    auVar45[10] = bVar43 & ~bVar41;
    auVar45[11] = bVar44 & ~bVar42;
    auVar45[12] = bVar43 & ~bVar41;
    auVar45[13] = bVar44 & ~bVar42;
    auVar45[14] = bVar43 & ~bVar41;
    auVar45[15] = bVar44 & ~bVar42;
    auVar45 = NEON_cmtst(auVar25,auVar45,2);
    bVar11 = (byte)uVar8;
    bVar12 = (byte)((uint7)uVar8 >> 8);
    bVar13 = (byte)((uint7)uVar8 >> 0x10);
    bVar14 = (byte)((uint7)uVar8 >> 0x18);
    bVar15 = (byte)((uint7)uVar8 >> 0x20);
    bVar16 = (byte)((uint7)uVar8 >> 0x28);
    bVar17 = (byte)((uint7)uVar8 >> 0x30);
    auVar7._2_2_ = sVar9;
    auVar7._0_2_ = sVar9;
    auVar7._4_2_ = sVar9;
    auVar7._6_2_ = sVar9;
    auVar7._8_2_ = sVar9;
    auVar7._10_2_ = sVar9;
    auVar7._12_2_ = sVar9;
    auVar7._14_2_ = sVar9;
    auVar25 = NEON_smin(auVar24,auVar7,2);
    uVar18 = CONCAT12(auVar25[2] & bVar12,
                      CONCAT11(auVar25[1] & (char)bVar11 >> 7,auVar25[0] & bVar11));
    uVar19 = CONCAT13(auVar25[3] & (char)bVar12 >> 7,uVar18);
    uVar20 = CONCAT15(auVar25[5] & (char)bVar13 >> 7,CONCAT14(auVar25[4] & bVar13,uVar19));
    uVar21 = CONCAT17(auVar25[7] & (char)bVar14 >> 7,CONCAT16(auVar25[6] & bVar14,uVar20));
    auVar22._0_10_ = CONCAT19(auVar25[9] & (char)bVar15 >> 7,CONCAT18(auVar25[8] & bVar15,uVar21));
    auVar22[10] = auVar25[10] & bVar16;
    auVar22[11] = auVar25[11] & (char)bVar16 >> 7;
    auVar23[12] = auVar25[12] & bVar17;
    auVar23._0_12_ = auVar22;
    auVar23[13] = auVar25[13] & (char)bVar17 >> 7;
    auVar26[14] = auVar25[14] & bVar46;
    auVar26._0_14_ = auVar23;
    auVar26[15] = auVar25[15] & (char)bVar46 >> 7;
    uVar3 = CONCAT12((bVar35 ^ auVar45[10]) & bVar41 & bVar16,
                     CONCAT11((bVar34 ^ auVar45[9]) & bVar42 & (char)bVar15 >> 7,
                              (bVar33 ^ auVar45[8]) & bVar41 & bVar15));
    uVar4 = CONCAT13((bVar36 ^ auVar45[11]) & bVar42 & (char)bVar16 >> 7,uVar3);
    uVar5 = CONCAT15((bVar38 ^ auVar45[13]) & bVar42 & (char)bVar17 >> 7,
                     CONCAT14((bVar37 ^ auVar45[12]) & bVar41 & bVar17,uVar4));
    *param_1 = (uVar18 & 0xffff) +
               (uint)CONCAT11(((byte)((ushort)uVar6 >> 8) ^ auVar45[1]) & bVar42 & (char)bVar11 >> 7
                              ,((byte)uVar6 ^ auVar45[0]) & bVar41 & bVar11) * (uint)param_4;
    param_1[1] = (uVar19 >> 0x10) +
                 (uint)CONCAT11((bVar28 ^ auVar45[3]) & bVar42 & (char)bVar12 >> 7,
                                (bVar27 ^ auVar45[2]) & bVar41 & bVar12) * (uint)param_4;
    param_1[2] = (uint)(ushort)((uint6)uVar20 >> 0x20) +
                 (uint)CONCAT11((bVar30 ^ auVar45[5]) & bVar42 & (char)bVar13 >> 7,
                                (bVar29 ^ auVar45[4]) & bVar41 & bVar13) * (uint)param_4;
    param_1[3] = (uint)(ushort)((ulong)uVar21 >> 0x30) +
                 (uint)CONCAT11((bVar32 ^ auVar45[7]) & bVar42 & (char)bVar14 >> 7,
                                (bVar31 ^ auVar45[6]) & bVar41 & bVar14) * (uint)param_4;
    param_1[4] = (uint)(ushort)((unkuint10)auVar22._0_10_ >> 0x40) +
                 (uVar3 & 0xffff) * (uint)param_4;
    param_1[5] = (uint)auVar22._10_2_ + (uVar4 >> 0x10) * (uint)param_4;
    param_1[6] = (uint)auVar23._12_2_ + (uint)(ushort)((uint6)uVar5 >> 0x20) * (uint)param_4;
    param_1[7] = (uint)auVar26._14_2_ +
                 (uint)(ushort)(CONCAT17((bVar40 ^ auVar45[15]) & bVar42 & (char)bVar46 >> 7,
                                         CONCAT16((bVar39 ^ auVar45[14]) & bVar41 & bVar46,uVar5))
                               >> 0x30) * (uint)param_4;
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


