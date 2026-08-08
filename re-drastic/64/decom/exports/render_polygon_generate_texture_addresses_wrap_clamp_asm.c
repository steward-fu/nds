/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_wrap_clamp_asm
 * Address  : 0019a58c
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_wrap_clamp_asm
               (int *param_1,undefined2 *param_2,int param_3,ushort param_4,short param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined6 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint3 uVar8;
  uint uVar9;
  undefined6 uVar10;
  undefined2 uVar11;
  undefined7 uVar12;
  undefined2 *puVar13;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  uint3 uVar25;
  undefined auVar31 [16];
  undefined auVar32 [16];
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  uint uVar26;
  undefined6 uVar27;
  undefined8 uVar28;
  undefined auVar29 [12];
  undefined auVar30 [14];
  undefined auVar33 [16];
  
  param_5 = param_5 + -1;
  do {
    uVar6 = *param_2;
    auVar31._0_2_ = param_2[1];
    puVar13 = param_2 + 2;
    auVar31._2_2_ = param_2[3];
    puVar14 = param_2 + 4;
    auVar31._4_2_ = param_2[5];
    uVar7 = param_2[6];
    auVar31._6_2_ = param_2[7];
    puVar15 = param_2 + 8;
    auVar31._8_2_ = param_2[9];
    puVar16 = param_2 + 10;
    auVar31._10_2_ = param_2[0xb];
    puVar17 = param_2 + 0xc;
    auVar31._12_2_ = param_2[0xd];
    uVar11 = param_2[0xe];
    auVar31._14_2_ = param_2[0xf];
    param_2 = param_2 + 0x10;
    uVar12 = *param_6;
    bVar36 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    bVar34 = (byte)(param_4 - 1);
    bVar35 = (byte)((ushort)(param_4 - 1) >> 8);
    auVar31 = NEON_smax(ZEXT816(0),auVar31,2);
    bVar18 = (byte)uVar12;
    bVar19 = (byte)((uint7)uVar12 >> 8);
    bVar20 = (byte)((uint7)uVar12 >> 0x10);
    bVar21 = (byte)((uint7)uVar12 >> 0x18);
    bVar22 = (byte)((uint7)uVar12 >> 0x20);
    bVar23 = (byte)((uint7)uVar12 >> 0x28);
    bVar24 = (byte)((uint7)uVar12 >> 0x30);
    auVar32._2_2_ = param_5;
    auVar32._0_2_ = param_5;
    auVar32._4_2_ = param_5;
    auVar32._6_2_ = param_5;
    auVar32._8_2_ = param_5;
    auVar32._10_2_ = param_5;
    auVar32._12_2_ = param_5;
    auVar32._14_2_ = param_5;
    auVar32 = NEON_smin(auVar31,auVar32,2);
    uVar25 = CONCAT12(auVar32[2] & bVar19,
                      CONCAT11(auVar32[1] & (char)bVar18 >> 7,auVar32[0] & bVar18));
    uVar26 = CONCAT13(auVar32[3] & (char)bVar19 >> 7,uVar25);
    uVar27 = CONCAT15(auVar32[5] & (char)bVar20 >> 7,CONCAT14(auVar32[4] & bVar20,uVar26));
    uVar28 = CONCAT17(auVar32[7] & (char)bVar21 >> 7,CONCAT16(auVar32[6] & bVar21,uVar27));
    auVar29._0_10_ = CONCAT19(auVar32[9] & (char)bVar22 >> 7,CONCAT18(auVar32[8] & bVar22,uVar28));
    auVar29[10] = auVar32[10] & bVar23;
    auVar29[11] = auVar32[11] & (char)bVar23 >> 7;
    auVar30[12] = auVar32[12] & bVar24;
    auVar30._0_12_ = auVar29;
    auVar30[13] = auVar32[13] & (char)bVar24 >> 7;
    auVar33[14] = auVar32[14] & bVar36;
    auVar33._0_14_ = auVar30;
    auVar33[15] = auVar32[15] & (char)bVar36 >> 7;
    uVar3 = CONCAT12((byte)*puVar13 & bVar34 & bVar19,
                     CONCAT11((byte)((ushort)uVar6 >> 8) & bVar35 & (char)bVar18 >> 7,
                              (byte)uVar6 & bVar34 & bVar18));
    uVar4 = CONCAT13((byte)((ushort)*puVar13 >> 8) & bVar35 & (char)bVar19 >> 7,uVar3);
    uVar5 = CONCAT15((byte)((ushort)*puVar14 >> 8) & bVar35 & (char)bVar20 >> 7,
                     CONCAT14((byte)*puVar14 & bVar34 & bVar20,uVar4));
    uVar8 = CONCAT12((byte)*puVar16 & bVar34 & bVar23,
                     CONCAT11((byte)((ushort)*puVar15 >> 8) & bVar35 & (char)bVar22 >> 7,
                              (byte)*puVar15 & bVar34 & bVar22));
    uVar9 = CONCAT13((byte)((ushort)*puVar16 >> 8) & bVar35 & (char)bVar23 >> 7,uVar8);
    uVar10 = CONCAT15((byte)((ushort)*puVar17 >> 8) & bVar35 & (char)bVar24 >> 7,
                      CONCAT14((byte)*puVar17 & bVar34 & bVar24,uVar9));
    *param_1 = (uVar3 & 0xffff) + (uVar25 & 0xffff) * (uint)param_4;
    param_1[1] = (uVar4 >> 0x10) + (uVar26 >> 0x10) * (uint)param_4;
    param_1[2] = (uint)(ushort)((uint6)uVar5 >> 0x20) +
                 (uint)(ushort)((uint6)uVar27 >> 0x20) * (uint)param_4;
    param_1[3] = (uint)(ushort)(CONCAT17((byte)((ushort)uVar7 >> 8) & bVar35 & (char)bVar21 >> 7,
                                         CONCAT16((byte)uVar7 & bVar34 & bVar21,uVar5)) >> 0x30) +
                 (uint)(ushort)((ulong)uVar28 >> 0x30) * (uint)param_4;
    param_1[4] = (uVar8 & 0xffff) +
                 (uint)(ushort)((unkuint10)auVar29._0_10_ >> 0x40) * (uint)param_4;
    param_1[5] = (uVar9 >> 0x10) + (uint)auVar29._10_2_ * (uint)param_4;
    param_1[6] = (uint)(ushort)((uint6)uVar10 >> 0x20) + (uint)auVar30._12_2_ * (uint)param_4;
    param_1[7] = (uint)(ushort)(CONCAT17((byte)((ushort)uVar11 >> 8) & bVar35 & (char)bVar36 >> 7,
                                         CONCAT16((byte)uVar11 & bVar34 & bVar36,uVar10)) >> 0x30) +
                 (uint)auVar33._14_2_ * (uint)param_4;
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


