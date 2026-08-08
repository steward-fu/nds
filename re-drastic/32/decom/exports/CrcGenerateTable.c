/*
 * Ghidra decompilation
 *
 * Function : CrcGenerateTable
 * Address  : 080c9a08
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x080c9a4c) */
/* WARNING: Removing unreachable block (ram,0x080c9a28) */
/* WARNING: Removing unreachable block (ram,0x080c9a38) */
/* WARNING: Removing unreachable block (ram,0x080c9d08) */
/* WARNING: Removing unreachable block (ram,0x080c9d14) */
/* WARNING: Removing unreachable block (ram,0x080c9a60) */
/* WARNING: Removing unreachable block (ram,0x080c9b68) */
/* WARNING: Removing unreachable block (ram,0x080c9bd8) */
/* WARNING: Removing unreachable block (ram,0x080c9c48) */
/* WARNING: Unknown calling convention */

void CrcGenerateTable(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  UInt32 *pUVar8;
  UInt32 r;
  uint uVar9;
  UInt32 *pUVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  
  auVar15._8_8_ = 0x300000002;
  auVar15._0_8_ = 0x100000000;
  auVar1 = SIMDExpandImmediate(0,0,4);
  auVar2 = SIMDExpandImmediate(0,0,1);
  uVar9 = 0;
  auVar15 = VectorAdd(ZEXT816(0) & ZEXT816(0) << 0x40,auVar15,4);
  puVar11 = (undefined8 *)g_CrcTable;
  do {
    auVar12 = auVar15 & auVar2;
    auVar14 = VectorShiftRight(auVar15,1);
    uVar9 = uVar9 + 1;
    auVar15 = VectorAdd(auVar15,auVar1,4);
    auVar13 = FloatVectorNeg(auVar12,1,4);
    auVar12._8_8_ = 0xedb88320edb88320;
    auVar12._0_8_ = 0xedb88320edb88320;
    auVar14 = auVar13 & auVar12 ^ auVar14;
    auVar12 = VectorShiftRight(auVar14,1);
    auVar14 = FloatVectorNeg(auVar14 & auVar2,1,4);
    auVar13._8_8_ = 0xedb88320edb88320;
    auVar13._0_8_ = 0xedb88320edb88320;
    auVar12 = auVar14 & auVar13 ^ auVar12;
    auVar13 = VectorShiftRight(auVar12,1);
    auVar12 = FloatVectorNeg(auVar12 & auVar2,1,4);
    auVar14._8_8_ = 0xedb88320edb88320;
    auVar14._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar12 & auVar14 ^ auVar13;
    auVar12 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar3._8_8_ = 0xedb88320edb88320;
    auVar3._0_8_ = 0xedb88320edb88320;
    auVar12 = auVar13 & auVar3 ^ auVar12;
    auVar13 = VectorShiftRight(auVar12,1);
    auVar12 = FloatVectorNeg(auVar12 & auVar2,1,4);
    auVar4._8_8_ = 0xedb88320edb88320;
    auVar4._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar12 & auVar4 ^ auVar13;
    auVar12 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar5._8_8_ = 0xedb88320edb88320;
    auVar5._0_8_ = 0xedb88320edb88320;
    auVar12 = auVar13 & auVar5 ^ auVar12;
    auVar13 = VectorShiftRight(auVar12,1);
    auVar12 = FloatVectorNeg(auVar12 & auVar2,1,4);
    auVar6._8_8_ = 0xedb88320edb88320;
    auVar6._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar12 & auVar6 ^ auVar13;
    auVar12 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar7._8_8_ = 0xedb88320edb88320;
    auVar7._0_8_ = 0xedb88320edb88320;
    auVar12 = auVar13 & auVar7 ^ auVar12;
    *puVar11 = auVar12._0_8_;
    puVar11[1] = auVar12._8_8_;
    puVar11 = puVar11 + 2;
  } while (uVar9 < 0x40);
  pUVar10 = (UInt32 *)(signal_handler_stack + 0x3ffc);
  pUVar8 = g_CrcTable + 0xff;
  do {
    pUVar10 = pUVar10 + 1;
    pUVar8 = pUVar8 + 1;
    *pUVar8 = g_CrcTable[*pUVar10 & 0xff] ^ *pUVar10 >> 8;
  } while (pUVar10 != g_CrcTable + 0x6ff);
  g_CrcUpdate = CrcUpdateT4;
  return;
}


