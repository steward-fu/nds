/*
 * Ghidra decompilation
 *
 * Function : FUN_08055f00
 * Address  : 08055f00
 * Program  : drastic16
 */


void FUN_08055f00(int param_1,undefined (*param_2) [16])

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined *puVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  ushort *puVar10;
  undefined (*pauVar11) [16];
  uint uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  pauVar6 = *(undefined (**) [16])(param_1 + 0x10);
  if (pauVar6 == (undefined (*) [16])0x0) {
    pauVar6 = (undefined (*) [16])malloc(0x400);
    *(undefined (**) [16])(param_1 + 0x10) = pauVar6;
  }
  pauVar11 = pauVar6 + 8;
  auVar2 = SIMDExpandImmediate(0,8,0x1f);
  auVar3 = SIMDExpandImmediate(0,0,0x1f);
  uVar12 = 0;
  pauVar8 = pauVar11;
  while( true ) {
    uVar1 = (uVar12 * 4 + (uVar12 >> 1)) * 0x1000000;
    if (param_2 < pauVar11 && pauVar6 < param_2 + 4) {
      puVar10 = (ushort *)(param_2[-1] + 0xe);
      do {
        puVar10 = puVar10 + 1;
        uVar7 = (uint)*puVar10;
        uVar7 = ((uVar7 << 0x16) >> 0x1b) << 8 | ((uVar7 << 0x11) >> 0x1b) << 0x10 | uVar7 & 0x1f;
        puVar5 = *pauVar6;
        *(uint *)*pauVar6 = uVar1 | (uVar7 + 0x1f1f1f >> 5 & 0x10101) + uVar7 * 2;
        pauVar6 = (undefined (*) [16])(puVar5 + 4);
      } while (pauVar11 != (undefined (*) [16])(puVar5 + 4));
    }
    else {
      auVar4._4_4_ = uVar1;
      auVar4._0_4_ = uVar1;
      auVar4._8_8_ = 0;
      auVar4 = auVar4 & auVar4 << 0x40;
      pauVar9 = param_2;
      do {
        auVar17 = *pauVar9;
        pauVar9 = pauVar9 + 1;
        auVar18 = VectorCopyLong(auVar17._0_8_,2,1);
        auVar15 = VectorCopyLong(auVar17._8_8_,2,1);
        auVar14 = VectorCopyLong(SUB168(auVar17 & auVar2,0),2,1);
        auVar16 = VectorShiftRight(auVar18,10);
        auVar13 = VectorShiftRight(auVar15,10);
        auVar18 = VectorShiftRight(auVar18,5);
        auVar15 = VectorShiftRight(auVar15,5);
        auVar18 = VectorShiftLeft(auVar18 & auVar3,8,0x20,0);
        auVar16 = VectorShiftLeft(auVar16 & auVar3,0x10,0x20,0);
        auVar13 = VectorShiftLeft(auVar13 & auVar3,0x10,0x20,0);
        auVar15 = VectorShiftLeft(auVar15 & auVar3,8,0x20,0);
        auVar17 = VectorCopyLong(SUB168(auVar17 & auVar2,8),2,1);
        auVar14 = auVar16 | auVar18 | auVar14;
        auVar17 = auVar13 | auVar15 | auVar17;
        auVar15._8_8_ = 0x1f1f1f001f1f1f;
        auVar15._0_8_ = 0x1f1f1f001f1f1f;
        auVar15 = VectorAdd(auVar14,auVar15,4);
        auVar16._8_8_ = 0x1f1f1f001f1f1f;
        auVar16._0_8_ = 0x1f1f1f001f1f1f;
        auVar13 = VectorAdd(auVar17,auVar16,4);
        auVar16 = VectorShiftLeft(auVar14,1,0x20,0);
        auVar18 = VectorShiftRight(auVar15,5);
        auVar14 = VectorShiftRight(auVar13,5);
        auVar15 = VectorShiftLeft(auVar17,1,0x20,0);
        auVar17._8_8_ = 0x1010100010101;
        auVar17._0_8_ = 0x1010100010101;
        auVar13._8_8_ = 0x1010100010101;
        auVar13._0_8_ = 0x1010100010101;
        auVar16 = VectorAdd(auVar18 & auVar17,auVar16,4);
        auVar17 = VectorAdd(auVar14 & auVar13,auVar15,4);
        auVar16 = auVar16 | auVar4;
        auVar17 = auVar17 | auVar4;
        *(longlong *)*pauVar6 = auVar16._0_8_;
        *(longlong *)(*pauVar6 + 8) = auVar16._8_8_;
        *(longlong *)pauVar6[1] = auVar17._0_8_;
        *(longlong *)(pauVar6[1] + 8) = auVar17._8_8_;
        pauVar6 = pauVar6 + 2;
      } while (pauVar9 != param_2 + 4);
    }
    uVar12 = uVar12 + 1;
    pauVar11 = pauVar11 + 8;
    if (uVar12 == 8) break;
    pauVar6 = pauVar8;
    pauVar8 = pauVar8 + 8;
  }
  return;
}


