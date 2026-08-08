/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_direct
 * Address  : 080c0b88
 * Program  : drastic
 */


void render_scanline_capture_direct(int param_1,undefined8 *param_2,undefined (*param_3) [16])

{
  uint uVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x28);
  pauVar3 = param_3 + 0x10;
  pauVar5 = param_3 + 0x20;
  do {
    pauVar2 = param_3 + 1;
    pauVar4 = pauVar3 + 1;
    pauVar6 = pauVar5 + 1;
    auVar7 = VectorShiftRight(*param_3,1);
    param_3 = param_3 + 2;
    auVar9 = VectorShiftRight(*pauVar3,1);
    pauVar3 = pauVar3 + 2;
    auVar11 = VectorShiftRight(*pauVar5,1);
    pauVar5 = pauVar5 + 2;
    auVar8 = VectorShiftRight(*pauVar2,1);
    auVar10 = VectorShiftRight(*pauVar4,1);
    auVar12 = VectorShiftRight(*pauVar6,1);
    auVar17 = VectorShiftLongLeft(auVar9._0_8_,5);
    auVar19 = VectorShiftLongLeft(auVar9._8_8_,5);
    auVar9 = VectorShiftLongLeft(auVar10._0_8_,5);
    auVar10 = VectorShiftLongLeft(auVar10._8_8_,5);
    auVar13 = VectorCopyLong(auVar11._0_8_,1,1);
    auVar14 = VectorCopyLong(auVar11._8_8_,1,1);
    auVar15 = VectorCopyLong(auVar12._0_8_,1,1);
    auVar16 = VectorCopyLong(auVar12._8_8_,1,1);
    auVar18 = VectorAdd(auVar17,auVar7._0_8_,1,1);
    auVar20 = VectorAdd(auVar19,auVar7._8_8_,1,1);
    auVar11 = VectorAdd(auVar9,auVar8._0_8_,1,1);
    auVar17 = VectorAdd(auVar10,auVar8._8_8_,1,1);
    auVar19 = VectorShiftLeft(auVar13,10,0x10,0);
    auVar14 = VectorShiftLeft(auVar14,10,0x10,0);
    auVar12 = VectorShiftLeft(auVar15,10,0x10,0);
    auVar13 = VectorShiftLeft(auVar16,10,0x10,0);
    auVar7 = SIMDExpandImmediate(0,0xb,0x80);
    auVar8 = SIMDExpandImmediate(0,0xb,0x80);
    auVar9 = SIMDExpandImmediate(0,0xb,0x80);
    auVar10 = SIMDExpandImmediate(0,0xb,0x80);
    auVar19 = auVar18 | auVar7 | auVar19;
    auVar14 = auVar20 | auVar8 | auVar14;
    auVar12 = auVar11 | auVar9 | auVar12;
    auVar13 = auVar17 | auVar10 | auVar13;
    *param_2 = auVar19._0_8_;
    param_2[1] = auVar19._8_8_;
    uVar1 = uVar1 - 0x20;
    param_2[2] = auVar14._0_8_;
    param_2[3] = auVar14._8_8_;
    param_2[4] = auVar12._0_8_;
    param_2[5] = auVar12._8_8_;
    param_2[6] = auVar13._0_8_;
    param_2[7] = auVar13._8_8_;
    param_2 = param_2 + 8;
  } while (uVar1 != 0);
  return;
}


