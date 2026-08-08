/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses_clamp_wrap_asm
 * Address  : 0019a64c
 * Program  : drastic64
 */


void render_polygon_generate_texture_addresses_clamp_wrap_asm
               (int *param_1,undefined2 *param_2,int param_3,ushort param_4,short param_5,
               undefined7 *param_6)

{
  bool bVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined6 uVar5;
  undefined2 uVar6;
  undefined7 uVar7;
  undefined2 *puVar8;
  short sVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint3 uVar20;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar21;
  undefined6 uVar22;
  undefined8 uVar23;
  undefined auVar24 [12];
  undefined auVar25 [14];
  undefined auVar28 [16];
  
  sVar12 = param_4 - 1;
  do {
    auVar26._0_2_ = *param_2;
    puVar8 = param_2 + 1;
    auVar26._2_2_ = param_2[2];
    uVar29 = param_2[3];
    auVar26._4_2_ = param_2[4];
    uVar30 = param_2[5];
    auVar26._6_2_ = param_2[6];
    uVar31 = param_2[7];
    auVar26._8_2_ = param_2[8];
    puVar9 = param_2 + 9;
    auVar26._10_2_ = param_2[10];
    puVar10 = param_2 + 0xb;
    auVar26._12_2_ = param_2[0xc];
    puVar11 = param_2 + 0xd;
    auVar26._14_2_ = param_2[0xe];
    uVar6 = param_2[0xf];
    param_2 = param_2 + 0x10;
    uVar7 = *param_6;
    bVar34 = *(byte *)((long)param_6 + 7);
    param_6 = param_6 + 1;
    auVar26 = NEON_smax(ZEXT816(0),auVar26,2);
    bVar32 = (byte)(param_5 + -1);
    bVar33 = (byte)((ushort)(param_5 + -1) >> 8);
    bVar13 = (byte)uVar7;
    bVar14 = (byte)((uint7)uVar7 >> 8);
    bVar15 = (byte)((uint7)uVar7 >> 0x10);
    bVar16 = (byte)((uint7)uVar7 >> 0x18);
    bVar17 = (byte)((uint7)uVar7 >> 0x20);
    bVar18 = (byte)((uint7)uVar7 >> 0x28);
    bVar19 = (byte)((uint7)uVar7 >> 0x30);
    auVar27._2_2_ = sVar12;
    auVar27._0_2_ = sVar12;
    auVar27._4_2_ = sVar12;
    auVar27._6_2_ = sVar12;
    auVar27._8_2_ = sVar12;
    auVar27._10_2_ = sVar12;
    auVar27._12_2_ = sVar12;
    auVar27._14_2_ = sVar12;
    auVar27 = NEON_smin(auVar26,auVar27,2);
    uVar20 = CONCAT12(auVar27[2] & bVar14,
                      CONCAT11(auVar27[1] & (char)bVar13 >> 7,auVar27[0] & bVar13));
    uVar21 = CONCAT13(auVar27[3] & (char)bVar14 >> 7,uVar20);
    uVar22 = CONCAT15(auVar27[5] & (char)bVar15 >> 7,CONCAT14(auVar27[4] & bVar15,uVar21));
    uVar23 = CONCAT17(auVar27[7] & (char)bVar16 >> 7,CONCAT16(auVar27[6] & bVar16,uVar22));
    auVar24._0_10_ = CONCAT19(auVar27[9] & (char)bVar17 >> 7,CONCAT18(auVar27[8] & bVar17,uVar23));
    auVar24[10] = auVar27[10] & bVar18;
    auVar24[11] = auVar27[11] & (char)bVar18 >> 7;
    auVar25[12] = auVar27[12] & bVar19;
    auVar25._0_12_ = auVar24;
    auVar25[13] = auVar27[13] & (char)bVar19 >> 7;
    auVar28[14] = auVar27[14] & bVar34;
    auVar28._0_14_ = auVar25;
    auVar28[15] = auVar27[15] & (char)bVar34 >> 7;
    uVar3 = CONCAT12((byte)*puVar10 & bVar32 & bVar18,
                     CONCAT11((byte)((ushort)*puVar9 >> 8) & bVar33 & (char)bVar17 >> 7,
                              (byte)*puVar9 & bVar32 & bVar17));
    uVar4 = CONCAT13((byte)((ushort)*puVar10 >> 8) & bVar33 & (char)bVar18 >> 7,uVar3);
    uVar5 = CONCAT15((byte)((ushort)*puVar11 >> 8) & bVar33 & (char)bVar19 >> 7,
                     CONCAT14((byte)*puVar11 & bVar32 & bVar19,uVar4));
    *param_1 = (uVar20 & 0xffff) +
               (uint)CONCAT11((byte)((ushort)*puVar8 >> 8) & bVar33 & (char)bVar13 >> 7,
                              (byte)*puVar8 & bVar32 & bVar13) * (uint)param_4;
    param_1[1] = (uVar21 >> 0x10) +
                 (uint)CONCAT11((byte)((ushort)uVar29 >> 8) & bVar33 & (char)bVar14 >> 7,
                                (byte)uVar29 & bVar32 & bVar14) * (uint)param_4;
    param_1[2] = (uint)(ushort)((uint6)uVar22 >> 0x20) +
                 (uint)CONCAT11((byte)((ushort)uVar30 >> 8) & bVar33 & (char)bVar15 >> 7,
                                (byte)uVar30 & bVar32 & bVar15) * (uint)param_4;
    param_1[3] = (uint)(ushort)((ulong)uVar23 >> 0x30) +
                 (uint)CONCAT11((byte)((ushort)uVar31 >> 8) & bVar33 & (char)bVar16 >> 7,
                                (byte)uVar31 & bVar32 & bVar16) * (uint)param_4;
    param_1[4] = (uint)(ushort)((unkuint10)auVar24._0_10_ >> 0x40) +
                 (uVar3 & 0xffff) * (uint)param_4;
    param_1[5] = (uint)auVar24._10_2_ + (uVar4 >> 0x10) * (uint)param_4;
    param_1[6] = (uint)auVar25._12_2_ + (uint)(ushort)((uint6)uVar5 >> 0x20) * (uint)param_4;
    param_1[7] = (uint)auVar28._14_2_ +
                 (uint)(ushort)(CONCAT17((byte)((ushort)uVar6 >> 8) & bVar33 & (char)bVar34 >> 7,
                                         CONCAT16((byte)uVar6 & bVar32 & bVar34,uVar5)) >> 0x30) *
                 (uint)param_4;
    param_1 = param_1 + 8;
    iVar2 = param_3 + -8;
    bVar1 = 7 < param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


