/*
 * Ghidra decompilation
 *
 * Function : _GLOBAL__sub_I__Z9InitCRC32Pj
 * Address  : 0010e650
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InitCRC32(unsigned int*) */

void _GLOBAL__sub_I_InitCRC32(void)

{
  uint *puVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined8 uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint uVar36;
  byte bVar37;
  undefined uVar38;
  undefined uVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  
  if (DAT_004f4d44 == 0) {
    puVar10 = (undefined8 *)&crc_tables;
    uVar33 = 0x100000000;
    uVar35 = 0x300000002;
    do {
      uVar34 = (uint)((ulong)uVar33 >> 0x20);
      uVar36 = (uint)((ulong)uVar35 >> 0x20);
      bVar37 = (byte)((ulong)uVar33 >> 0x18) >> 1;
      uVar6 = uVar34 >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = (byte)((ulong)uVar33 >> 0x39);
      uVar7 = (uint)uVar35 >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = (byte)((ulong)uVar35 >> 0x18) >> 1;
      uVar8 = uVar36 >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = (byte)((ulong)uVar35 >> 0x39);
      auVar13._0_5_ = ((uint5)(byte)((ulong)uVar33 >> 0x20) & 1) << 0x20;
      auVar13._5_7_ = 0;
      auVar13[12] = (byte)((ulong)uVar35 >> 0x20) & 1;
      auVar13._13_3_ = 0;
      uVar9 = (undefined3)((uint)uVar33 >> 1);
      auVar27._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar27[8] = (byte)uVar7 ^ 0x20;
      auVar27[9] = bVar41 ^ 0x83;
      auVar27[10] = bVar42 ^ 0xb8;
      auVar27[11] = bVar43 ^ 0xed;
      auVar27[12] = (byte)uVar8 ^ 0x20;
      auVar27[13] = bVar44 ^ 0x83;
      auVar27[14] = bVar45 ^ 0xb8;
      auVar27[15] = bVar46 ^ 0xed;
      auVar14 = NEON_cmeq(auVar13,0,2);
      auVar15[3] = bVar37;
      auVar15._0_3_ = uVar9;
      auVar15[4] = (char)uVar6;
      auVar15[5] = uVar38;
      auVar15[6] = uVar39;
      auVar15[7] = bVar40;
      auVar15[8] = (byte)uVar7;
      auVar15[9] = bVar41;
      auVar15[10] = bVar42;
      auVar15[11] = bVar43;
      auVar15[12] = (byte)uVar8;
      auVar15[13] = bVar44;
      auVar15[14] = bVar45;
      auVar15[15] = bVar46;
      auVar15 = NEON_bsl(auVar14,auVar15,auVar27,1);
      bVar37 = auVar15[3] >> 1;
      uVar6 = auVar15._4_4_ >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = auVar15[15] >> 1;
      auVar28._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar28._5_3_ = 0;
      auVar28[8] = auVar15[8] & 1;
      auVar28._9_3_ = 0;
      auVar28[12] = auVar15[12] & 1;
      auVar28._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar21._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar21[8] = (byte)uVar7 ^ 0x20;
      auVar21[9] = bVar41 ^ 0x83;
      auVar21[10] = bVar42 ^ 0xb8;
      auVar21[11] = bVar43 ^ 0xed;
      auVar21[12] = (byte)uVar8 ^ 0x20;
      auVar21[13] = bVar44 ^ 0x83;
      auVar21[14] = bVar45 ^ 0xb8;
      auVar21[15] = bVar46 ^ 0xed;
      auVar15 = NEON_cmeq(auVar28,0,2);
      auVar14[3] = bVar37;
      auVar14._0_3_ = uVar9;
      auVar14[4] = (char)uVar6;
      auVar14[5] = uVar38;
      auVar14[6] = uVar39;
      auVar14[7] = bVar40;
      auVar14[8] = (byte)uVar7;
      auVar14[9] = bVar41;
      auVar14[10] = bVar42;
      auVar14[11] = bVar43;
      auVar14[12] = (byte)uVar8;
      auVar14[13] = bVar44;
      auVar14[14] = bVar45;
      auVar14[15] = bVar46;
      auVar15 = NEON_bsl(auVar15,auVar14,auVar21,1);
      bVar37 = auVar15[3] >> 1;
      uVar6 = auVar15._4_4_ >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = auVar15[15] >> 1;
      auVar22._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar22._5_3_ = 0;
      auVar22[8] = auVar15[8] & 1;
      auVar22._9_3_ = 0;
      auVar22[12] = auVar15[12] & 1;
      auVar22._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar16._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar16[8] = (byte)uVar7 ^ 0x20;
      auVar16[9] = bVar41 ^ 0x83;
      auVar16[10] = bVar42 ^ 0xb8;
      auVar16[11] = bVar43 ^ 0xed;
      auVar16[12] = (byte)uVar8 ^ 0x20;
      auVar16[13] = bVar44 ^ 0x83;
      auVar16[14] = bVar45 ^ 0xb8;
      auVar16[15] = bVar46 ^ 0xed;
      auVar15 = NEON_cmeq(auVar22,0,2);
      auVar2[3] = bVar37;
      auVar2._0_3_ = uVar9;
      auVar2[4] = (char)uVar6;
      auVar2[5] = uVar38;
      auVar2[6] = uVar39;
      auVar2[7] = bVar40;
      auVar2[8] = (byte)uVar7;
      auVar2[9] = bVar41;
      auVar2[10] = bVar42;
      auVar2[11] = bVar43;
      auVar2[12] = (byte)uVar8;
      auVar2[13] = bVar44;
      auVar2[14] = bVar45;
      auVar2[15] = bVar46;
      auVar15 = NEON_bsl(auVar15,auVar2,auVar16,1);
      bVar37 = auVar15[3] >> 1;
      uVar6 = auVar15._4_4_ >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = auVar15[15] >> 1;
      auVar17._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar17._5_3_ = 0;
      auVar17[8] = auVar15[8] & 1;
      auVar17._9_3_ = 0;
      auVar17[12] = auVar15[12] & 1;
      auVar17._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar29._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar29[8] = (byte)uVar7 ^ 0x20;
      auVar29[9] = bVar41 ^ 0x83;
      auVar29[10] = bVar42 ^ 0xb8;
      auVar29[11] = bVar43 ^ 0xed;
      auVar29[12] = (byte)uVar8 ^ 0x20;
      auVar29[13] = bVar44 ^ 0x83;
      auVar29[14] = bVar45 ^ 0xb8;
      auVar29[15] = bVar46 ^ 0xed;
      auVar15 = NEON_cmeq(auVar17,0,2);
      auVar3[3] = bVar37;
      auVar3._0_3_ = uVar9;
      auVar3[4] = (char)uVar6;
      auVar3[5] = uVar38;
      auVar3[6] = uVar39;
      auVar3[7] = bVar40;
      auVar3[8] = (byte)uVar7;
      auVar3[9] = bVar41;
      auVar3[10] = bVar42;
      auVar3[11] = bVar43;
      auVar3[12] = (byte)uVar8;
      auVar3[13] = bVar44;
      auVar3[14] = bVar45;
      auVar3[15] = bVar46;
      auVar15 = NEON_bsl(auVar15,auVar3,auVar29,1);
      bVar37 = auVar15[3] >> 1;
      uVar6 = auVar15._4_4_ >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = auVar15[15] >> 1;
      auVar30._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar30._5_3_ = 0;
      auVar30[8] = auVar15[8] & 1;
      auVar30._9_3_ = 0;
      auVar30[12] = auVar15[12] & 1;
      auVar30._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar23._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar23[8] = (byte)uVar7 ^ 0x20;
      auVar23[9] = bVar41 ^ 0x83;
      auVar23[10] = bVar42 ^ 0xb8;
      auVar23[11] = bVar43 ^ 0xed;
      auVar23[12] = (byte)uVar8 ^ 0x20;
      auVar23[13] = bVar44 ^ 0x83;
      auVar23[14] = bVar45 ^ 0xb8;
      auVar23[15] = bVar46 ^ 0xed;
      auVar15 = NEON_cmeq(auVar30,0,2);
      auVar4[3] = bVar37;
      auVar4._0_3_ = uVar9;
      auVar4[4] = (char)uVar6;
      auVar4[5] = uVar38;
      auVar4[6] = uVar39;
      auVar4[7] = bVar40;
      auVar4[8] = (byte)uVar7;
      auVar4[9] = bVar41;
      auVar4[10] = bVar42;
      auVar4[11] = bVar43;
      auVar4[12] = (byte)uVar8;
      auVar4[13] = bVar44;
      auVar4[14] = bVar45;
      auVar4[15] = bVar46;
      auVar15 = NEON_bsl(auVar15,auVar4,auVar23,1);
      bVar37 = auVar15[3] >> 1;
      uVar6 = auVar15._4_4_ >> 1;
      uVar38 = (undefined)(uVar6 >> 8);
      uVar39 = (undefined)(uVar6 >> 0x10);
      bVar40 = auVar15[7] >> 1;
      uVar7 = auVar15._8_4_ >> 1;
      bVar41 = (byte)(uVar7 >> 8);
      bVar42 = (byte)(uVar7 >> 0x10);
      bVar43 = auVar15[11] >> 1;
      uVar8 = auVar15._12_4_ >> 1;
      bVar44 = (byte)(uVar8 >> 8);
      bVar45 = (byte)(uVar8 >> 0x10);
      bVar46 = auVar15[15] >> 1;
      auVar24._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar24._5_3_ = 0;
      auVar24[8] = auVar15[8] & 1;
      auVar24._9_3_ = 0;
      auVar24[12] = auVar15[12] & 1;
      auVar24._13_3_ = 0;
      uVar9 = (undefined3)(auVar15._0_4_ >> 1);
      auVar18._0_8_ =
           CONCAT17(bVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14((char)uVar6,
                                                                    CONCAT13(bVar37,uVar9))))) ^
           0xedb88320edb88320;
      auVar18[8] = (byte)uVar7 ^ 0x20;
      auVar18[9] = bVar41 ^ 0x83;
      auVar18[10] = bVar42 ^ 0xb8;
      auVar18[11] = bVar43 ^ 0xed;
      auVar18[12] = (byte)uVar8 ^ 0x20;
      auVar18[13] = bVar44 ^ 0x83;
      auVar18[14] = bVar45 ^ 0xb8;
      auVar18[15] = bVar46 ^ 0xed;
      auVar15 = NEON_cmeq(auVar24,0,2);
      auVar5[3] = bVar37;
      auVar5._0_3_ = uVar9;
      auVar5[4] = (char)uVar6;
      auVar5[5] = uVar38;
      auVar5[6] = uVar39;
      auVar5[7] = bVar40;
      auVar5[8] = (byte)uVar7;
      auVar5[9] = bVar41;
      auVar5[10] = bVar42;
      auVar5[11] = bVar43;
      auVar5[12] = (byte)uVar8;
      auVar5[13] = bVar44;
      auVar5[14] = bVar45;
      auVar5[15] = bVar46;
      auVar15 = NEON_bsl(auVar15,auVar5,auVar18,1);
      auVar31._0_4_ = auVar15._0_4_ >> 1;
      auVar31._4_4_ = auVar15._4_4_ >> 1;
      auVar31._8_4_ = auVar15._8_4_ >> 1;
      auVar31._12_4_ = auVar15._12_4_ >> 1;
      auVar19._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar19._5_3_ = 0;
      auVar19[8] = auVar15[8] & 1;
      auVar19._9_3_ = 0;
      auVar19[12] = auVar15[12] & 1;
      auVar19._13_3_ = 0;
      auVar25._0_8_ =
           CONCAT17(auVar15[7] >> 1,
                    CONCAT16((char)(auVar31._4_4_ >> 0x10),
                             CONCAT15((char)(auVar31._4_4_ >> 8),
                                      CONCAT14((char)auVar31._4_4_,
                                               CONCAT13(auVar15[3] >> 1,(int3)auVar31._0_4_))))) ^
           0xedb88320edb88320;
      auVar25[8] = (byte)auVar31._8_4_ ^ 0x20;
      auVar25[9] = (byte)(auVar31._8_4_ >> 8) ^ 0x83;
      auVar25[10] = (byte)(auVar31._8_4_ >> 0x10) ^ 0xb8;
      auVar25[11] = auVar15[11] >> 1 ^ 0xed;
      auVar25[12] = (byte)auVar31._12_4_ ^ 0x20;
      auVar25[13] = (byte)(auVar31._12_4_ >> 8) ^ 0x83;
      auVar25[14] = (byte)(auVar31._12_4_ >> 0x10) ^ 0xb8;
      auVar25[15] = auVar15[15] >> 1 ^ 0xed;
      auVar15 = NEON_cmeq(auVar19,0,2);
      auVar15 = NEON_bsl(auVar15,auVar31,auVar25,1);
      auVar32._0_4_ = auVar15._0_4_ >> 1;
      auVar32._4_4_ = auVar15._4_4_ >> 1;
      auVar32._8_4_ = auVar15._8_4_ >> 1;
      auVar32._12_4_ = auVar15._12_4_ >> 1;
      auVar20._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
      auVar20._5_3_ = 0;
      auVar20[8] = auVar15[8] & 1;
      auVar20._9_3_ = 0;
      auVar20[12] = auVar15[12] & 1;
      auVar20._13_3_ = 0;
      auVar26._0_8_ =
           CONCAT17(auVar15[7] >> 1,
                    CONCAT16((char)(auVar32._4_4_ >> 0x10),
                             CONCAT15((char)(auVar32._4_4_ >> 8),
                                      CONCAT14((char)auVar32._4_4_,
                                               CONCAT13(auVar15[3] >> 1,(int3)auVar32._0_4_))))) ^
           0xedb88320edb88320;
      auVar26[8] = (byte)auVar32._8_4_ ^ 0x20;
      auVar26[9] = (byte)(auVar32._8_4_ >> 8) ^ 0x83;
      auVar26[10] = (byte)(auVar32._8_4_ >> 0x10) ^ 0xb8;
      auVar26[11] = auVar15[11] >> 1 ^ 0xed;
      auVar26[12] = (byte)auVar32._12_4_ ^ 0x20;
      auVar26[13] = (byte)(auVar32._12_4_ >> 8) ^ 0x83;
      auVar26[14] = (byte)(auVar32._12_4_ >> 0x10) ^ 0xb8;
      auVar26[15] = auVar15[15] >> 1 ^ 0xed;
      auVar15 = NEON_cmeq(auVar20,0,2);
      auVar15 = NEON_bsl(auVar15,auVar32,auVar26,1);
      puVar11 = puVar10 + 2;
      puVar10[1] = auVar15._8_8_;
      *puVar10 = auVar15._0_8_;
      puVar10 = puVar11;
      uVar33 = CONCAT44(uVar34 + 4,(uint)uVar33 + 4);
      uVar35 = CONCAT44(uVar36 + 4,(uint)uVar35 + 4);
    } while (puVar11 != (undefined8 *)&DAT_004f5140);
  }
  puVar12 = &crc_tables;
  do {
    puVar1 = puVar12 + 1;
    uVar6 = (&crc_tables)[(ulong)*puVar12 & 0xff] ^ *puVar12 >> 8;
    puVar12[0x100] = uVar6;
    uVar6 = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12[0x200] = uVar6;
    uVar6 = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12[0x300] = uVar6;
    uVar6 = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12[0x400] = uVar6;
    uVar6 = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12[0x500] = uVar6;
    uVar6 = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12[0x600] = uVar6;
    puVar12[0x700] = (&crc_tables)[(ulong)uVar6 & 0xff] ^ uVar6 >> 8;
    puVar12 = puVar1;
  } while (puVar1 != &DAT_004f5140);
  return;
}


