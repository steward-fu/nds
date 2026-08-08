/*
 * Ghidra decompilation
 *
 * Function : _Z9InitCRC32Pj
 * Address  : 080e0558
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void InitCRC32(uint *CRCTab)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  
  if (CRCTab[1] != 0) {
    return;
  }
  uVar10 = ((int)CRCTab << 0x1d) >> 0x1f & 3;
  uVar12 = uVar10;
  if (uVar10 == 0) {
    iVar13 = 0x100;
    uVar15 = 0x40;
    iVar14 = iVar13;
    iVar16 = iVar13;
  }
  else {
    *CRCTab = 0;
    if (uVar10 == 1) {
      iVar13 = 0xff;
    }
    else {
      CRCTab[1] = 0x77073096;
      if (uVar10 == 2) {
        iVar13 = 0xfe;
      }
      else {
        iVar13 = 0xfd;
        CRCTab[2] = 0xee0e612c;
        uVar12 = 3;
      }
    }
    uVar15 = 0x3f;
    iVar14 = 0x100 - uVar10;
    iVar16 = 0xfc;
  }
  auVar21._4_4_ = uVar12;
  auVar21._0_4_ = uVar12;
  auVar21._8_8_ = 0;
  auVar18._8_8_ = 0x300000002;
  auVar18._0_8_ = 0x100000000;
  auVar2 = SIMDExpandImmediate(0,0,4);
  auVar3 = SIMDExpandImmediate(0,0,1);
  auVar1 = ZEXT816(0);
  uVar10 = 0;
  auVar21 = VectorAdd(auVar21 & auVar21 << 0x40,auVar18,4);
  puVar11 = (undefined8 *)(CRCTab + uVar10);
  do {
    auVar18 = auVar21 & auVar3;
    auVar20 = VectorShiftRight(auVar21,1);
    uVar10 = uVar10 + 1;
    auVar21 = VectorAdd(auVar21,auVar2,4);
    auVar18 = VectorCompareEqual(auVar18,auVar1,4);
    auVar19._8_8_ = 0xedb88320edb88320;
    auVar19._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar20,auVar20 ^ auVar19);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar20._8_8_ = 0xedb88320edb88320;
    auVar20._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar20);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar4._8_8_ = 0xedb88320edb88320;
    auVar4._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar4);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar5._8_8_ = 0xedb88320edb88320;
    auVar5._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar5);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar6._8_8_ = 0xedb88320edb88320;
    auVar6._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar6);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar7._8_8_ = 0xedb88320edb88320;
    auVar7._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar7);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar8._8_8_ = 0xedb88320edb88320;
    auVar8._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseSelect(auVar18,auVar19,auVar19 ^ auVar8);
    auVar19 = VectorShiftRight(auVar18,1);
    auVar18 = VectorCompareEqual(auVar18 & auVar3,auVar1,4);
    auVar9._8_8_ = 0xedb88320edb88320;
    auVar9._0_8_ = 0xedb88320edb88320;
    auVar18 = VectorBitwiseInsertIfFalse(auVar19,auVar19 ^ auVar9,auVar18);
    *puVar11 = auVar18._0_8_;
    puVar11[1] = auVar18._8_8_;
    puVar11 = puVar11 + 2;
  } while (uVar10 < uVar15);
  uVar12 = uVar12 + iVar16;
  if (iVar14 != iVar16) {
    uVar15 = uVar12 + 1;
    uVar10 = uVar12 >> 1 ^ 0xedb88320;
    if ((uVar12 & 1) == 0) {
      uVar10 = uVar12 >> 1;
    }
    uVar17 = uVar10 >> 1;
    if ((uVar10 & 1) != 0) {
      uVar17 = uVar10 >> 1 ^ 0xedb88320;
    }
    uVar10 = uVar17 >> 1;
    if ((uVar17 & 1) != 0) {
      uVar10 = uVar17 >> 1 ^ 0xedb88320;
    }
    uVar17 = uVar10 >> 1;
    if ((uVar10 & 1) != 0) {
      uVar17 = uVar10 >> 1 ^ 0xedb88320;
    }
    uVar10 = uVar17 >> 1;
    if ((uVar17 & 1) != 0) {
      uVar10 = uVar17 >> 1 ^ 0xedb88320;
    }
    uVar17 = uVar10 >> 1;
    if ((uVar10 & 1) != 0) {
      uVar17 = uVar10 >> 1 ^ 0xedb88320;
    }
    uVar10 = uVar17 >> 1;
    if ((uVar17 & 1) != 0) {
      uVar10 = uVar17 >> 1 ^ 0xedb88320;
    }
    uVar17 = uVar10 >> 1;
    if ((uVar10 & 1) != 0) {
      uVar17 = uVar10 >> 1 ^ 0xedb88320;
    }
    CRCTab[uVar12] = uVar17;
    if (iVar13 - iVar16 != 1) {
      uVar12 = uVar12 + 2;
      uVar10 = uVar15 >> 1;
      if ((uVar15 & 1) != 0) {
        uVar10 = uVar15 >> 1 ^ 0xedb88320;
      }
      uVar17 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        uVar17 = uVar10 >> 1 ^ 0xedb88320;
      }
      uVar10 = uVar17 >> 1;
      if ((uVar17 & 1) != 0) {
        uVar10 = uVar17 >> 1 ^ 0xedb88320;
      }
      uVar17 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        uVar17 = uVar10 >> 1 ^ 0xedb88320;
      }
      uVar10 = uVar17 >> 1;
      if ((uVar17 & 1) != 0) {
        uVar10 = uVar17 >> 1 ^ 0xedb88320;
      }
      uVar17 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        uVar17 = uVar10 >> 1 ^ 0xedb88320;
      }
      uVar10 = uVar17 >> 1;
      if ((uVar17 & 1) != 0) {
        uVar10 = uVar17 >> 1 ^ 0xedb88320;
      }
      uVar17 = uVar10 >> 1;
      if ((uVar10 & 1) != 0) {
        uVar17 = uVar10 >> 1 ^ 0xedb88320;
      }
      CRCTab[uVar15] = uVar17;
      if (iVar13 - iVar16 != 2) {
        uVar10 = uVar12 >> 1;
        if ((uVar12 & 1) != 0) {
          uVar10 = uVar12 >> 1 ^ 0xedb88320;
        }
        uVar15 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          uVar15 = uVar10 >> 1 ^ 0xedb88320;
        }
        uVar10 = uVar15 >> 1;
        if ((uVar15 & 1) != 0) {
          uVar10 = uVar15 >> 1 ^ 0xedb88320;
        }
        uVar15 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          uVar15 = uVar10 >> 1 ^ 0xedb88320;
        }
        uVar10 = uVar15 >> 1;
        if ((uVar15 & 1) != 0) {
          uVar10 = uVar15 >> 1 ^ 0xedb88320;
        }
        uVar15 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          uVar15 = uVar10 >> 1 ^ 0xedb88320;
        }
        uVar10 = uVar15 >> 1;
        if ((uVar15 & 1) != 0) {
          uVar10 = uVar15 >> 1 ^ 0xedb88320;
        }
        uVar15 = uVar10 >> 1;
        if ((uVar10 & 1) != 0) {
          uVar15 = uVar10 >> 1 ^ 0xedb88320;
        }
        CRCTab[uVar12] = uVar15;
      }
    }
  }
  return;
}


