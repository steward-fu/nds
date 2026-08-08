/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_clamp_clamp_asm
 * Address  : 0019a52c
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_clamp_clamp_asm
               (int *param_1,undefined2 *param_2,int param_3,ushort param_4,short param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  undefined7 uVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint3 uVar12;
  undefined auVar18 [16];
  undefined auVar19 [16];
  uint3 uVar21;
  undefined auVar27 [16];
  undefined auVar28 [16];
  byte bVar30;
  uint uVar13;
  undefined6 uVar14;
  undefined8 uVar15;
  undefined auVar16 [12];
  undefined auVar17 [14];
  undefined auVar20 [16];
  uint uVar22;
  undefined6 uVar23;
  undefined8 uVar24;
  undefined auVar25 [12];
  undefined auVar26 [14];
  undefined auVar29 [16];
  
  sVar4 = param_4 - 1;
  param_5 = param_5 + -1;
  do {
    auVar28._0_2_ = *param_2;
    auVar27._0_2_ = param_2[1];
    auVar28._2_2_ = param_2[2];
    auVar27._2_2_ = param_2[3];
    auVar28._4_2_ = param_2[4];
    auVar27._4_2_ = param_2[5];
    auVar28._6_2_ = param_2[6];
    auVar27._6_2_ = param_2[7];
    auVar28._8_2_ = param_2[8];
    auVar27._8_2_ = param_2[9];
    auVar28._10_2_ = param_2[10];
    auVar27._10_2_ = param_2[0xb];
    auVar28._12_2_ = param_2[0xc];
    auVar27._12_2_ = param_2[0xd];
    auVar28._14_2_ = param_2[0xe];
    auVar27._14_2_ = param_2[0xf];
    param_2 = param_2 + 0x10;
    uVar3 = *param_6;
    bVar30 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    auVar18 = NEON_smax(ZEXT816(0),auVar28,2);
    auVar28 = NEON_smax(ZEXT816(0),auVar27,2);
    bVar5 = (byte)uVar3;
    bVar6 = (byte)((uint7)uVar3 >> 8);
    bVar7 = (byte)((uint7)uVar3 >> 0x10);
    bVar8 = (byte)((uint7)uVar3 >> 0x18);
    bVar9 = (byte)((uint7)uVar3 >> 0x20);
    bVar10 = (byte)((uint7)uVar3 >> 0x28);
    bVar11 = (byte)((uint7)uVar3 >> 0x30);
    auVar19._2_2_ = sVar4;
    auVar19._0_2_ = sVar4;
    auVar19._4_2_ = sVar4;
    auVar19._6_2_ = sVar4;
    auVar19._8_2_ = sVar4;
    auVar19._10_2_ = sVar4;
    auVar19._12_2_ = sVar4;
    auVar19._14_2_ = sVar4;
    auVar19 = NEON_smin(auVar18,auVar19,2);
    auVar18._2_2_ = param_5;
    auVar18._0_2_ = param_5;
    auVar18._4_2_ = param_5;
    auVar18._6_2_ = param_5;
    auVar18._8_2_ = param_5;
    auVar18._10_2_ = param_5;
    auVar18._12_2_ = param_5;
    auVar18._14_2_ = param_5;
    auVar18 = NEON_smin(auVar28,auVar18,2);
    uVar12 = CONCAT12(auVar19[2] & bVar6,CONCAT11(auVar19[1] & (char)bVar5 >> 7,auVar19[0] & bVar5))
    ;
    uVar13 = CONCAT13(auVar19[3] & (char)bVar6 >> 7,uVar12);
    uVar14 = CONCAT15(auVar19[5] & (char)bVar7 >> 7,CONCAT14(auVar19[4] & bVar7,uVar13));
    uVar15 = CONCAT17(auVar19[7] & (char)bVar8 >> 7,CONCAT16(auVar19[6] & bVar8,uVar14));
    auVar16._0_10_ = CONCAT19(auVar19[9] & (char)bVar9 >> 7,CONCAT18(auVar19[8] & bVar9,uVar15));
    auVar16[10] = auVar19[10] & bVar10;
    auVar16[11] = auVar19[11] & (char)bVar10 >> 7;
    auVar17[12] = auVar19[12] & bVar11;
    auVar17._0_12_ = auVar16;
    auVar17[13] = auVar19[13] & (char)bVar11 >> 7;
    auVar20[14] = auVar19[14] & bVar30;
    auVar20._0_14_ = auVar17;
    auVar20[15] = auVar19[15] & (char)bVar30 >> 7;
    uVar21 = CONCAT12(auVar18[2] & bVar6,CONCAT11(auVar18[1] & (char)bVar5 >> 7,auVar18[0] & bVar5))
    ;
    uVar22 = CONCAT13(auVar18[3] & (char)bVar6 >> 7,uVar21);
    uVar23 = CONCAT15(auVar18[5] & (char)bVar7 >> 7,CONCAT14(auVar18[4] & bVar7,uVar22));
    uVar24 = CONCAT17(auVar18[7] & (char)bVar8 >> 7,CONCAT16(auVar18[6] & bVar8,uVar23));
    auVar25._0_10_ = CONCAT19(auVar18[9] & (char)bVar9 >> 7,CONCAT18(auVar18[8] & bVar9,uVar24));
    auVar25[10] = auVar18[10] & bVar10;
    auVar25[11] = auVar18[11] & (char)bVar10 >> 7;
    auVar26[12] = auVar18[12] & bVar11;
    auVar26._0_12_ = auVar25;
    auVar26[13] = auVar18[13] & (char)bVar11 >> 7;
    auVar29[14] = auVar18[14] & bVar30;
    auVar29._0_14_ = auVar26;
    auVar29[15] = auVar18[15] & (char)bVar30 >> 7;
    *param_1 = (uVar12 & 0xffff) + (uVar21 & 0xffff) * (uint)param_4;
    param_1[1] = (uVar13 >> 0x10) + (uVar22 >> 0x10) * (uint)param_4;
    param_1[2] = (uint)(ushort)((uint6)uVar14 >> 0x20) +
                 (uint)(ushort)((uint6)uVar23 >> 0x20) * (uint)param_4;
    param_1[3] = (uint)(ushort)((ulong)uVar15 >> 0x30) +
                 (uint)(ushort)((ulong)uVar24 >> 0x30) * (uint)param_4;
    param_1[4] = (uint)(ushort)((unkuint10)auVar16._0_10_ >> 0x40) +
                 (uint)(ushort)((unkuint10)auVar25._0_10_ >> 0x40) * (uint)param_4;
    param_1[5] = (uint)auVar16._10_2_ + (uint)auVar25._10_2_ * (uint)param_4;
    param_1[6] = (uint)auVar17._12_2_ + (uint)auVar26._12_2_ * (uint)param_4;
    param_1[7] = (uint)auVar20._14_2_ + (uint)auVar29._14_2_ * (uint)param_4;
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


