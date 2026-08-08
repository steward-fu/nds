/*
 * Ghidra decompilation
 *
 * Function : _GLOBAL__sub_I__Z9InitCRC32Pj
 * Address  : 080e0a48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__Z9InitCRC32Pj(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint C;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  if (crc_tables[0][1] == 0) {
    auVar16._8_8_ = 0x300000002;
    auVar16._0_8_ = 0x100000000;
    auVar2 = SIMDExpandImmediate(0,0,4);
    auVar3 = SIMDExpandImmediate(0,0,1);
    auVar1 = ZEXT816(0);
    puVar11 = crc_tables[0];
    do {
      auVar13 = auVar16 & auVar3;
      auVar15 = VectorShiftRight(auVar16,1);
      puVar12 = puVar11 + 4;
      auVar16 = VectorAdd(auVar16,auVar2,4);
      auVar14 = VectorCompareEqual(auVar13,auVar1,4);
      auVar13._8_8_ = 0xedb88320edb88320;
      auVar13._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar14,auVar15,auVar15 ^ auVar13);
      auVar15 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar14._8_8_ = 0xedb88320edb88320;
      auVar14._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar15,auVar15 ^ auVar14);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar15._8_8_ = 0xedb88320edb88320;
      auVar15._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar15);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar4._8_8_ = 0xedb88320edb88320;
      auVar4._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar4);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar5._8_8_ = 0xedb88320edb88320;
      auVar5._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar5);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar6._8_8_ = 0xedb88320edb88320;
      auVar6._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar6);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar7._8_8_ = 0xedb88320edb88320;
      auVar7._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar7);
      auVar14 = VectorShiftRight(auVar13,1);
      auVar13 = VectorCompareEqual(auVar13 & auVar3,auVar1,4);
      auVar8._8_8_ = 0xedb88320edb88320;
      auVar8._0_8_ = 0xedb88320edb88320;
      auVar13 = VectorBitwiseInsertIfFalse(auVar14,auVar14 ^ auVar8,auVar13);
      *(longlong *)puVar11 = auVar13._0_8_;
      *(longlong *)(puVar11 + 2) = auVar13._8_8_;
      puVar11 = puVar12;
    } while ((uint (*) [256])puVar12 != crc_tables + 1);
  }
  puVar11 = &GetRnd::lexical_block_0::Count;
  puVar12 = crc_tables[3] + 0xff;
  do {
    puVar10 = puVar11 + 1;
    uVar9 = crc_tables[0][*puVar10 & 0xff] ^ *puVar10 >> 8;
    puVar11[0x101] = uVar9;
    uVar9 = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar11[0x201] = uVar9;
    uVar9 = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar11[0x301] = uVar9;
    uVar9 = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar12[1] = uVar9;
    uVar9 = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar12[0x101] = uVar9;
    uVar9 = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar12[0x201] = uVar9;
    puVar12[0x301] = crc_tables[0][uVar9 & 0xff] ^ uVar9 >> 8;
    puVar11 = puVar10;
    puVar12 = puVar12 + 1;
  } while (puVar10 != crc_tables[0] + 0xff);
  return;
}


