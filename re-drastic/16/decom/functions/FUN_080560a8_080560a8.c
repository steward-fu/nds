/*
 * Ghidra decompilation
 *
 * Function : FUN_080560a8
 * Address  : 080560a8
 * Program  : drastic16
 */


void FUN_080560a8(int param_1,undefined (*param_2) [16])

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined *puVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  undefined (*pauVar8) [16];
  int iVar9;
  ushort *puVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  pauVar6 = *(undefined (**) [16])(param_1 + 0x10);
  if (pauVar6 == (undefined (*) [16])0x0) {
    pauVar6 = (undefined (*) [16])malloc(0x400);
    *(undefined (**) [16])(param_1 + 0x10) = pauVar6;
  }
  pauVar8 = pauVar6 + 2;
  iVar9 = 0;
  auVar2 = SIMDExpandImmediate(0,8,0x1f);
  auVar3 = SIMDExpandImmediate(0,0,0x1f);
  pauVar11 = pauVar8;
  while( true ) {
    uVar1 = iVar9 << 0x18;
    if (param_2 < pauVar8 && pauVar6 < param_2 + 1) {
      puVar10 = (ushort *)(param_2[-1] + 0xe);
      do {
        puVar10 = puVar10 + 1;
        uVar7 = (uint)*puVar10;
        uVar7 = ((uVar7 << 0x16) >> 0x1b) << 8 | ((uVar7 << 0x11) >> 0x1b) << 0x10 | uVar7 & 0x1f;
        puVar5 = *pauVar6;
        *(uint *)*pauVar6 = uVar1 | (uVar7 + 0x1f1f1f >> 5 & 0x10101) + uVar7 * 2;
        pauVar6 = (undefined (*) [16])(puVar5 + 4);
      } while (pauVar8 != (undefined (*) [16])(puVar5 + 4));
    }
    else {
      auVar16 = *param_2;
      auVar17 = VectorCopyLong(auVar16._0_8_,2,1);
      auVar4._4_4_ = uVar1;
      auVar4._0_4_ = uVar1;
      auVar4._8_8_ = 0;
      auVar4 = auVar4 & auVar4 << 0x40;
      auVar14 = VectorCopyLong(auVar16._8_8_,2,1);
      auVar13 = VectorCopyLong(SUB168(auVar16 & auVar2,0),2,1);
      auVar15 = VectorShiftRight(auVar17,5);
      auVar12 = VectorShiftRight(auVar14,5);
      auVar17 = VectorShiftRight(auVar17,10);
      auVar14 = VectorShiftRight(auVar14,10);
      auVar17 = VectorShiftLeft(auVar17 & auVar3,0x10,0x20,0);
      auVar15 = VectorShiftLeft(auVar15 & auVar3,8,0x20,0);
      auVar12 = VectorShiftLeft(auVar12 & auVar3,8,0x20,0);
      auVar14 = VectorShiftLeft(auVar14 & auVar3,0x10,0x20,0);
      auVar16 = VectorCopyLong(SUB168(auVar16 & auVar2,8),2,1);
      auVar13 = auVar15 | auVar17 | auVar13;
      auVar16 = auVar12 | auVar14 | auVar16;
      auVar14._8_8_ = 0x1f1f1f001f1f1f;
      auVar14._0_8_ = 0x1f1f1f001f1f1f;
      auVar14 = VectorAdd(auVar13,auVar14,4);
      auVar15._8_8_ = 0x1f1f1f001f1f1f;
      auVar15._0_8_ = 0x1f1f1f001f1f1f;
      auVar12 = VectorAdd(auVar16,auVar15,4);
      auVar15 = VectorShiftLeft(auVar13,1,0x20,0);
      auVar17 = VectorShiftRight(auVar14,5);
      auVar13 = VectorShiftRight(auVar12,5);
      auVar14 = VectorShiftLeft(auVar16,1,0x20,0);
      auVar16._8_8_ = 0x1010100010101;
      auVar16._0_8_ = 0x1010100010101;
      auVar12._8_8_ = 0x1010100010101;
      auVar12._0_8_ = 0x1010100010101;
      auVar15 = VectorAdd(auVar17 & auVar16,auVar15,4);
      auVar16 = VectorAdd(auVar13 & auVar12,auVar14,4);
      auVar15 = auVar15 | auVar4;
      auVar16 = auVar16 | auVar4;
      *(longlong *)*pauVar6 = auVar15._0_8_;
      *(longlong *)(*pauVar6 + 8) = auVar15._8_8_;
      *(longlong *)pauVar6[1] = auVar16._0_8_;
      *(longlong *)(pauVar6[1] + 8) = auVar16._8_8_;
    }
    iVar9 = iVar9 + 1;
    pauVar8 = pauVar8 + 2;
    if (iVar9 == 0x20) break;
    pauVar6 = pauVar11;
    pauVar11 = pauVar11 + 2;
  }
  return;
}


