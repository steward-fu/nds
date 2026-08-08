/*
 * Ghidra decompilation
 *
 * Function : FUN_080771e4
 * Address  : 080771e4
 * Program  : drastic16
 */


void FUN_080771e4(undefined (*param_1) [16],undefined4 param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  uint uVar4;
  int iVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  uint *puVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  pauVar3 = (undefined (*) [16])FUN_0807b384(param_2);
  uVar4 = FUN_0807b3b0(param_2);
  if (pauVar3 == (undefined (*) [16])0x0) {
    memset(param_1,0,0x18000);
    return;
  }
  iVar5 = FUN_0807b3d4();
  if (iVar5 != 2) {
    auVar1 = SIMDExpandImmediate(0,8,0x1f);
    auVar2 = SIMDExpandImmediate(0,8,0x3f);
    pauVar6 = pauVar3 + 0x40;
    pauVar11 = param_1;
    do {
      pauVar10 = pauVar11 + 0x20;
      pauVar8 = pauVar3;
      if (pauVar11 < pauVar6 && pauVar3 < pauVar10) {
        iVar5 = 0;
        puVar12 = (uint *)(pauVar3[-1] + 0xc);
        do {
          puVar12 = puVar12 + 1;
          uVar7 = *puVar12;
          *(ushort *)(*pauVar11 + iVar5) =
               (ushort)((uVar7 << 0x18) >> 0x1b) | (ushort)((uVar7 >> 0x13) << 0xb) |
               (ushort)(((uVar7 << 0x10) >> 0x1a) << 5);
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0x200);
      }
      else {
        do {
          pauVar9 = pauVar8 + 2;
          auVar15 = *pauVar8;
          auVar16 = pauVar8[1];
          auVar20 = VectorShiftRight(auVar15,10);
          auVar14 = VectorShiftRight(auVar16,0x13);
          auVar17 = VectorShiftRight(auVar16,10);
          auVar13 = VectorShiftRight(auVar15,0x13);
          auVar18 = VectorShiftRight(auVar16,3);
          auVar19 = VectorShiftRight(auVar15,3);
          auVar16._0_8_ = VectorCopyNarrow(auVar20,4);
          auVar16._8_8_ = VectorCopyNarrow(auVar17,4);
          auVar15._0_8_ = VectorCopyNarrow(auVar13,4);
          auVar15._8_8_ = VectorCopyNarrow(auVar14,4);
          auVar13._0_8_ = VectorCopyNarrow(auVar19,4);
          auVar13._8_8_ = VectorCopyNarrow(auVar18,4);
          auVar15 = VectorShiftLeft(auVar15,0xb,0x10,0);
          auVar16 = VectorShiftLeft(auVar16 & auVar2,5,0x10,0);
          auVar16 = auVar15 | auVar13 & auVar1 | auVar16;
          *(longlong *)*pauVar11 = auVar16._0_8_;
          *(longlong *)(*pauVar11 + 8) = auVar16._8_8_;
          pauVar11 = pauVar11 + 1;
          pauVar8 = pauVar9;
        } while (pauVar6 != pauVar9);
      }
      pauVar3 = (undefined (*) [16])(*pauVar3 + (uVar4 & 0xfffffffc));
      pauVar6 = (undefined (*) [16])(*pauVar6 + (uVar4 & 0xfffffffc));
      pauVar11 = pauVar10;
    } while (pauVar10 != param_1 + 0x1800);
    return;
  }
  pauVar11 = param_1 + 0x1800;
  do {
    pauVar6 = pauVar3;
    pauVar8 = param_1;
    if (pauVar3 < param_1 + 1 && param_1 < pauVar3 + 1) {
      iVar5 = 0;
      do {
        *(undefined2 *)(*param_1 + iVar5) = *(undefined2 *)(*pauVar3 + iVar5);
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0x200);
    }
    else {
      do {
        auVar1 = *pauVar6;
        *(longlong *)*pauVar8 = auVar1._0_8_;
        *(longlong *)(*pauVar8 + 8) = auVar1._8_8_;
        pauVar8 = pauVar8 + 1;
        pauVar6 = pauVar6 + 1;
      } while (param_1 + 0x20 != pauVar8);
    }
    param_1 = param_1 + 0x20;
    pauVar3 = (undefined (*) [16])(*pauVar3 + (uVar4 & 0xfffffffe));
  } while (param_1 != pauVar11);
  return;
}


