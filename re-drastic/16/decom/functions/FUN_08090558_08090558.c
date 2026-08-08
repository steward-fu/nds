/*
 * Ghidra decompilation
 *
 * Function : FUN_08090558
 * Address  : 08090558
 * Program  : drastic16
 */


void FUN_08090558(int *param_1,undefined (*param_2) [16])

{
  undefined8 *puVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  uint uVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
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
  undefined auVar21 [16];
  
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  puVar1 = (undefined8 *)*param_1;
  pauVar3 = param_2 + 0x10;
  pauVar6 = param_2 + 0x20;
  do {
    pauVar2 = param_2 + 1;
    pauVar4 = pauVar3 + 1;
    pauVar7 = pauVar6 + 1;
    auVar8 = VectorShiftRight(*param_2,1);
    param_2 = param_2 + 2;
    auVar10 = VectorShiftRight(*pauVar3,1);
    pauVar3 = pauVar3 + 2;
    auVar12 = VectorShiftRight(*pauVar6,1);
    pauVar6 = pauVar6 + 2;
    auVar9 = VectorShiftRight(*pauVar2,1);
    auVar11 = VectorShiftRight(*pauVar4,1);
    auVar13 = VectorShiftRight(*pauVar7,1);
    auVar18 = VectorShiftLongLeft(auVar10._0_8_,5);
    auVar20 = VectorShiftLongLeft(auVar10._8_8_,5);
    auVar10 = VectorShiftLongLeft(auVar11._0_8_,5);
    auVar11 = VectorShiftLongLeft(auVar11._8_8_,5);
    auVar14 = VectorCopyLong(auVar12._0_8_,1,1);
    auVar15 = VectorCopyLong(auVar12._8_8_,1,1);
    auVar16 = VectorCopyLong(auVar13._0_8_,1,1);
    auVar17 = VectorCopyLong(auVar13._8_8_,1,1);
    auVar19 = VectorAdd(auVar18,auVar8._0_8_,1,1);
    auVar21 = VectorAdd(auVar20,auVar8._8_8_,1,1);
    auVar12 = VectorAdd(auVar10,auVar9._0_8_,1,1);
    auVar18 = VectorAdd(auVar11,auVar9._8_8_,1,1);
    auVar20 = VectorShiftLeft(auVar14,10,0x10,0);
    auVar15 = VectorShiftLeft(auVar15,10,0x10,0);
    auVar13 = VectorShiftLeft(auVar16,10,0x10,0);
    auVar14 = VectorShiftLeft(auVar17,10,0x10,0);
    auVar8 = SIMDExpandImmediate(0,0xb,0x80);
    auVar9 = SIMDExpandImmediate(0,0xb,0x80);
    auVar10 = SIMDExpandImmediate(0,0xb,0x80);
    auVar11 = SIMDExpandImmediate(0,0xb,0x80);
    auVar20 = auVar19 | auVar8 | auVar20;
    auVar15 = auVar21 | auVar9 | auVar15;
    auVar13 = auVar12 | auVar10 | auVar13;
    auVar14 = auVar18 | auVar11 | auVar14;
    *puVar1 = auVar20._0_8_;
    puVar1[1] = auVar20._8_8_;
    uVar5 = uVar5 - 0x20;
    puVar1[2] = auVar15._0_8_;
    puVar1[3] = auVar15._8_8_;
    puVar1[4] = auVar13._0_8_;
    puVar1[5] = auVar13._8_8_;
    puVar1[6] = auVar14._0_8_;
    puVar1[7] = auVar14._8_8_;
    puVar1 = puVar1 + 8;
  } while (uVar5 != 0);
  return;
}


