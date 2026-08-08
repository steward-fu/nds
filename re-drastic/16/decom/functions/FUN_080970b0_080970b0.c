/*
 * Ghidra decompilation
 *
 * Function : FUN_080970b0
 * Address  : 080970b0
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x08097468) */
/* WARNING: Removing unreachable block (ram,0x08097474) */
/* WARNING: Removing unreachable block (ram,0x0809745c) */
/* WARNING: Removing unreachable block (ram,0x080972c4) */
/* WARNING: Removing unreachable block (ram,0x08097374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080970b0(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  uint *puVar11;
  
  DAT_0aaf912c = 0;
  _DAT_0aaf9130 = 0x77073096;
  DAT_0aaf9134 = 0xee0e612c;
  auVar1 = SIMDExpandImmediate(0,0,4);
  auVar2 = SIMDExpandImmediate(0,0,1);
  puVar8 = &DAT_0aaf9138;
  uVar9 = 0;
  auVar12._8_4_ = 5;
  auVar12._0_8_ = 0x400000003;
  auVar12._12_4_ = 6;
  do {
    uVar9 = uVar9 + 1;
    auVar13 = VectorShiftRight(auVar12,1);
    auVar15 = FloatVectorNeg(auVar12 & auVar2,1,4);
    auVar12 = VectorAdd(auVar12,auVar1,4);
    auVar14._8_8_ = 0xedb88320edb88320;
    auVar14._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar15 & auVar14 ^ auVar13;
    auVar14 = VectorShiftRight(auVar13,1);
    auVar15 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar13._8_8_ = 0xedb88320edb88320;
    auVar13._0_8_ = 0xedb88320edb88320;
    auVar14 = auVar15 & auVar13 ^ auVar14;
    auVar13 = VectorShiftRight(auVar14,1);
    auVar14 = FloatVectorNeg(auVar14 & auVar2,1,4);
    auVar15._8_8_ = 0xedb88320edb88320;
    auVar15._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar14 & auVar15 ^ auVar13;
    auVar14 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar3._8_8_ = 0xedb88320edb88320;
    auVar3._0_8_ = 0xedb88320edb88320;
    auVar14 = auVar13 & auVar3 ^ auVar14;
    auVar13 = VectorShiftRight(auVar14,1);
    auVar14 = FloatVectorNeg(auVar14 & auVar2,1,4);
    auVar4._8_8_ = 0xedb88320edb88320;
    auVar4._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar14 & auVar4 ^ auVar13;
    auVar14 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar5._8_8_ = 0xedb88320edb88320;
    auVar5._0_8_ = 0xedb88320edb88320;
    auVar14 = auVar13 & auVar5 ^ auVar14;
    auVar13 = VectorShiftRight(auVar14,1);
    auVar14 = FloatVectorNeg(auVar14 & auVar2,1,4);
    auVar6._8_8_ = 0xedb88320edb88320;
    auVar6._0_8_ = 0xedb88320edb88320;
    auVar13 = auVar14 & auVar6 ^ auVar13;
    auVar14 = VectorShiftRight(auVar13,1);
    auVar13 = FloatVectorNeg(auVar13 & auVar2,1,4);
    auVar7._8_8_ = 0xedb88320edb88320;
    auVar7._0_8_ = 0xedb88320edb88320;
    auVar14 = auVar13 & auVar7 ^ auVar14;
    *puVar8 = auVar14._0_8_;
    puVar8[1] = auVar14._8_8_;
    puVar8 = puVar8 + 2;
  } while (uVar9 < 0x3f);
  DAT_0aaf9528 = 0x2d02ef8d;
  puVar10 = &DAT_0aaf9128;
  do {
    puVar11 = puVar10 + 1;
    puVar10[0x101] = (&DAT_0aaf912c)[*puVar11 & 0xff] ^ *puVar11 >> 8;
    puVar10 = puVar11;
  } while (puVar11 != (uint *)0xaafad28);
  DAT_081c5098 = &LAB_08097498;
  return;
}


