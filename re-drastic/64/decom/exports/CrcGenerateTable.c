/*
 * Ghidra decompilation
 *
 * Function : CrcGenerateTable
 * Address  : 001a80f0
 * Program  : drastic64
 */


void CrcGenerateTable(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined auVar3 [12];
  undefined auVar6 [12];
  undefined auVar7 [16];
  undefined auVar9 [16];
  undefined auVar4 [12];
  undefined auVar11 [16];
  undefined auVar5 [12];
  undefined auVar13 [16];
  uint uVar18;
  undefined auVar19 [12];
  uint uVar30;
  uint uVar32;
  uint uVar33;
  undefined auVar22 [16];
  undefined auVar24 [16];
  undefined auVar20 [12];
  undefined auVar26 [16];
  undefined auVar21 [12];
  undefined auVar28 [16];
  undefined8 uVar34;
  uint uVar35;
  undefined8 uVar36;
  uint uVar37;
  undefined auVar8 [16];
  undefined auVar10 [16];
  undefined auVar12 [16];
  undefined auVar14 [16];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined auVar23 [16];
  undefined auVar25 [16];
  undefined auVar27 [16];
  byte bVar29;
  byte bVar31;
  
  pbVar1 = g_CrcTable;
  uVar34 = 0x100000000;
  uVar36 = 0x300000002;
  do {
    uVar35 = (uint)((ulong)uVar34 >> 0x20);
    uVar37 = (uint)((ulong)uVar36 >> 0x20);
    auVar7._0_5_ = ((uint5)(byte)((ulong)uVar34 >> 0x20) & 1) << 0x20;
    auVar7._5_7_ = 0;
    auVar7[12] = (byte)((ulong)uVar36 >> 0x20) & 1;
    auVar7._13_3_ = 0;
    uVar18 = (uint)uVar34 >> 1;
    uVar30 = uVar35 >> 1;
    uVar32 = (uint)uVar36 >> 1;
    uVar33 = uVar37 >> 1;
    auVar7 = NEON_neg(auVar7,4);
    bVar15 = auVar7[3] & 0xed ^ (byte)((ulong)uVar34 >> 0x18) >> 1;
    uVar18 = CONCAT13(bVar15,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),
                                               auVar7[0] & 0x20 ^ (byte)uVar18)));
    bVar16 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar17 = auVar7[7] & 0xed ^ (byte)((ulong)uVar34 >> 0x39);
    auVar3._0_8_ = CONCAT17(bVar17,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                            CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                                     CONCAT14(bVar16,uVar18))));
    auVar3[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar3[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar3[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar3[11] = auVar7[11] & 0xed ^ (byte)((ulong)uVar36 >> 0x18) >> 1;
    auVar8[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar8._0_12_ = auVar3;
    auVar8[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar8[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar8[15] = auVar7[15] & 0xed ^ (byte)((ulong)uVar36 >> 0x39);
    auVar22._0_5_ = ((uint5)bVar16 & 1) << 0x20;
    auVar22._5_3_ = 0;
    auVar22[8] = auVar3[8] & 1;
    auVar22._9_3_ = 0;
    auVar22[12] = auVar8[12] & 1;
    auVar22._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar3._0_8_ >> 0x21);
    uVar32 = auVar3._8_4_ >> 1;
    uVar33 = auVar8._12_4_ >> 1;
    auVar7 = NEON_neg(auVar22,4);
    bVar16 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar29 = auVar7[3] & 0xed ^ bVar15 >> 1;
    uVar18 = CONCAT13(bVar29,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar16)));
    bVar15 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar31 = auVar7[7] & 0xed ^ bVar17 >> 1;
    auVar19._0_8_ =
         CONCAT17(bVar31,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                  CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                           CONCAT14(bVar15,uVar18))));
    auVar19[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar19[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar19[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar19[11] = auVar7[11] & 0xed ^ auVar3[11] >> 1;
    auVar23[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar23._0_12_ = auVar19;
    auVar23[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar23[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar23[15] = auVar7[15] & 0xed ^ auVar8[15] >> 1;
    auVar9._0_5_ = CONCAT14(bVar15,(uint)(bVar16 & 1)) & 0x1ffffffff;
    auVar9._5_3_ = 0;
    auVar9[8] = auVar19[8] & 1;
    auVar9._9_3_ = 0;
    auVar9[12] = auVar23[12] & 1;
    auVar9._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar19._0_8_ >> 0x21);
    uVar32 = auVar19._8_4_ >> 1;
    uVar33 = auVar23._12_4_ >> 1;
    auVar7 = NEON_neg(auVar9,4);
    bVar15 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar16 = auVar7[3] & 0xed ^ bVar29 >> 1;
    uVar18 = CONCAT13(bVar16,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar15)));
    bVar17 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar29 = auVar7[7] & 0xed ^ bVar31 >> 1;
    auVar4._0_8_ = CONCAT17(bVar29,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                            CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                                     CONCAT14(bVar17,uVar18))));
    auVar4[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar4[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar4[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar4[11] = auVar7[11] & 0xed ^ auVar19[11] >> 1;
    auVar10[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar10._0_12_ = auVar4;
    auVar10[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar10[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar10[15] = auVar7[15] & 0xed ^ auVar23[15] >> 1;
    auVar24._0_5_ = CONCAT14(bVar17,(uint)(bVar15 & 1)) & 0x1ffffffff;
    auVar24._5_3_ = 0;
    auVar24[8] = auVar4[8] & 1;
    auVar24._9_3_ = 0;
    auVar24[12] = auVar10[12] & 1;
    auVar24._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar4._0_8_ >> 0x21);
    uVar32 = auVar4._8_4_ >> 1;
    uVar33 = auVar10._12_4_ >> 1;
    auVar7 = NEON_neg(auVar24,4);
    bVar15 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar16 = auVar7[3] & 0xed ^ bVar16 >> 1;
    uVar18 = CONCAT13(bVar16,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar15)));
    bVar17 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar29 = auVar7[7] & 0xed ^ bVar29 >> 1;
    auVar20._0_8_ =
         CONCAT17(bVar29,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                  CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                           CONCAT14(bVar17,uVar18))));
    auVar20[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar20[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar20[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar20[11] = auVar7[11] & 0xed ^ auVar4[11] >> 1;
    auVar25[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar25._0_12_ = auVar20;
    auVar25[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar25[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar25[15] = auVar7[15] & 0xed ^ auVar10[15] >> 1;
    auVar11._0_5_ = CONCAT14(bVar17,(uint)(bVar15 & 1)) & 0x1ffffffff;
    auVar11._5_3_ = 0;
    auVar11[8] = auVar20[8] & 1;
    auVar11._9_3_ = 0;
    auVar11[12] = auVar25[12] & 1;
    auVar11._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar20._0_8_ >> 0x21);
    uVar32 = auVar20._8_4_ >> 1;
    uVar33 = auVar25._12_4_ >> 1;
    auVar7 = NEON_neg(auVar11,4);
    bVar15 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar16 = auVar7[3] & 0xed ^ bVar16 >> 1;
    uVar18 = CONCAT13(bVar16,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar15)));
    bVar17 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar29 = auVar7[7] & 0xed ^ bVar29 >> 1;
    auVar5._0_8_ = CONCAT17(bVar29,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                            CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                                     CONCAT14(bVar17,uVar18))));
    auVar5[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar5[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar5[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar5[11] = auVar7[11] & 0xed ^ auVar20[11] >> 1;
    auVar12[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar12._0_12_ = auVar5;
    auVar12[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar12[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar12[15] = auVar7[15] & 0xed ^ auVar25[15] >> 1;
    auVar26._0_5_ = CONCAT14(bVar17,(uint)(bVar15 & 1)) & 0x1ffffffff;
    auVar26._5_3_ = 0;
    auVar26[8] = auVar5[8] & 1;
    auVar26._9_3_ = 0;
    auVar26[12] = auVar12[12] & 1;
    auVar26._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar5._0_8_ >> 0x21);
    uVar32 = auVar5._8_4_ >> 1;
    uVar33 = auVar12._12_4_ >> 1;
    auVar7 = NEON_neg(auVar26,4);
    bVar15 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar16 = auVar7[3] & 0xed ^ bVar16 >> 1;
    uVar18 = CONCAT13(bVar16,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar15)));
    bVar17 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar29 = auVar7[7] & 0xed ^ bVar29 >> 1;
    auVar21._0_8_ =
         CONCAT17(bVar29,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                  CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                           CONCAT14(bVar17,uVar18))));
    auVar21[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar21[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar21[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar21[11] = auVar7[11] & 0xed ^ auVar5[11] >> 1;
    auVar27[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar27._0_12_ = auVar21;
    auVar27[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar27[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar27[15] = auVar7[15] & 0xed ^ auVar12[15] >> 1;
    auVar13._0_5_ = CONCAT14(bVar17,(uint)(bVar15 & 1)) & 0x1ffffffff;
    auVar13._5_3_ = 0;
    auVar13[8] = auVar21[8] & 1;
    auVar13._9_3_ = 0;
    auVar13[12] = auVar27[12] & 1;
    auVar13._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar21._0_8_ >> 0x21);
    uVar32 = auVar21._8_4_ >> 1;
    uVar33 = auVar27._12_4_ >> 1;
    auVar7 = NEON_neg(auVar13,4);
    bVar15 = auVar7[0] & 0x20 ^ (byte)uVar18;
    bVar16 = auVar7[3] & 0xed ^ bVar16 >> 1;
    uVar18 = CONCAT13(bVar16,CONCAT12(auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10),
                                      CONCAT11(auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8),bVar15)));
    bVar17 = auVar7[4] & 0x20 ^ (byte)uVar30;
    bVar29 = auVar7[7] & 0xed ^ bVar29 >> 1;
    auVar6._0_8_ = CONCAT17(bVar29,CONCAT16(auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10),
                                            CONCAT15(auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8),
                                                     CONCAT14(bVar17,uVar18))));
    auVar6[8] = auVar7[8] & 0x20 ^ (byte)uVar32;
    auVar6[9] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    auVar6[10] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    auVar6[11] = auVar7[11] & 0xed ^ auVar21[11] >> 1;
    auVar14[12] = auVar7[12] & 0x20 ^ (byte)uVar33;
    auVar14._0_12_ = auVar6;
    auVar14[13] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar14[14] = auVar7[14] & 0xb8 ^ (byte)(uVar33 >> 0x10);
    auVar14[15] = auVar7[15] & 0xed ^ auVar27[15] >> 1;
    auVar28._0_5_ = CONCAT14(bVar17,(uint)(bVar15 & 1)) & 0x1ffffffff;
    auVar28._5_3_ = 0;
    auVar28[8] = auVar6[8] & 1;
    auVar28._9_3_ = 0;
    auVar28[12] = auVar14[12] & 1;
    auVar28._13_3_ = 0;
    uVar18 = uVar18 >> 1;
    uVar30 = (uint)((ulong)auVar6._0_8_ >> 0x21);
    uVar32 = auVar6._8_4_ >> 1;
    uVar33 = auVar14._12_4_ >> 1;
    auVar7 = NEON_neg(auVar28,4);
    pbVar2 = pbVar1 + 0x10;
    pbVar1[0x10] = auVar7[8] & 0x20 ^ (byte)uVar32;
    pbVar1[0x11] = auVar7[9] & 0x83 ^ (byte)(uVar32 >> 8);
    pbVar1[0x12] = auVar7[10] & 0xb8 ^ (byte)(uVar32 >> 0x10);
    pbVar1[0x13] = auVar7[11] & 0xed ^ auVar6[11] >> 1;
    pbVar1[0x14] = auVar7[12] & 0x20 ^ (byte)uVar33;
    pbVar1[0x15] = auVar7[13] & 0x83 ^ (byte)(uVar33 >> 8);
    pbVar1[0x16] = auVar7[14] & 0xb8 ^ (byte)((uint3)(auVar14._13_3_ >> 1) >> 8);
    pbVar1[0x17] = auVar7[15] & 0xed ^ auVar14[15] >> 1;
    *pbVar1 = auVar7[0] & 0x20 ^ (byte)uVar18;
    pbVar1[1] = auVar7[1] & 0x83 ^ (byte)(uVar18 >> 8);
    pbVar1[2] = auVar7[2] & 0xb8 ^ (byte)(uVar18 >> 0x10);
    pbVar1[3] = auVar7[3] & 0xed ^ bVar16 >> 1;
    pbVar1[4] = auVar7[4] & 0x20 ^ (byte)uVar30;
    pbVar1[5] = auVar7[5] & 0x83 ^ (byte)(uVar30 >> 8);
    pbVar1[6] = auVar7[6] & 0xb8 ^ (byte)(uVar30 >> 0x10);
    pbVar1[7] = auVar7[7] & 0xed ^ bVar29 >> 1;
    pbVar1 = pbVar2;
    uVar34 = CONCAT44(uVar35 + 4,(uint)uVar34 + 4);
    uVar36 = CONCAT44(uVar37 + 4,(uint)uVar36 + 4);
  } while (pbVar2 != &__end__);
  g_CrcUpdate = CrcUpdateT1;
  return;
}


