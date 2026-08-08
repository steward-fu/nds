/*
 * Ghidra decompilation
 *
 * Function : FUN_0808ed90
 * Address  : 0808ed90
 * Program  : drastic16
 */


undefined8 * FUN_0808ed90(undefined8 *param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  pauVar9 = param_2 + 1;
  auVar1 = SIMDExpandImmediate(0,0xe,0x3e);
  pauVar10 = param_2 + 2;
  iVar13 = 0xf;
  auVar16 = VectorShiftRight(*param_2,9);
  auVar18 = VectorShiftRight(*pauVar9,9);
  auVar14._0_8_ = VectorCopyNarrow(*param_2,2);
  auVar15._0_8_ = VectorShiftNarrowRight(*param_2,4);
  auVar14._8_8_ = VectorCopyNarrow(*pauVar9,2);
  auVar15._8_8_ = VectorShiftNarrowRight(*pauVar9,4);
  auVar16._0_8_ = VectorCopyNarrow(auVar16,2);
  auVar14 = VectorAdd(auVar14,auVar14,1);
  auVar16._8_8_ = VectorCopyNarrow(auVar18,2);
  puVar6 = param_1 + 0x20;
  puVar7 = param_1 + 0x40;
  do {
    puVar12 = puVar7;
    puVar11 = puVar6;
    puVar8 = param_1;
    auVar3 = *pauVar10;
    auVar2 = *pauVar10;
    auVar18 = *pauVar10;
    pauVar9 = pauVar10 + 1;
    auVar5 = *pauVar9;
    auVar4 = *pauVar9;
    auVar19 = *pauVar9;
    pauVar10 = pauVar10 + 2;
    auVar17 = VectorShiftRight(auVar18,9);
    *puVar11 = SUB168(auVar15 & auVar1,0);
    puVar11[1] = SUB168(auVar15 & auVar1,8);
    auVar19 = VectorShiftRight(auVar19,9);
    *puVar8 = SUB168(auVar14 & auVar1,0);
    puVar8[1] = SUB168(auVar14 & auVar1,8);
    *puVar12 = SUB168(auVar16 & auVar1,0);
    puVar12[1] = SUB168(auVar16 & auVar1,8);
    auVar15._0_8_ = VectorShiftNarrowRight(auVar2,4);
    auVar18._0_8_ = VectorCopyNarrow(auVar3,2);
    auVar15._8_8_ = VectorShiftNarrowRight(auVar4,4);
    auVar18._8_8_ = VectorCopyNarrow(auVar5,2);
    auVar14 = VectorAdd(auVar18,auVar18,1);
    auVar16._0_8_ = VectorCopyNarrow(auVar17,2);
    iVar13 = iVar13 + -1;
    auVar16._8_8_ = VectorCopyNarrow(auVar19,2);
    param_1 = puVar8 + 2;
    puVar6 = puVar11 + 2;
    puVar7 = puVar12 + 2;
  } while (iVar13 != 0);
  puVar11[2] = SUB168(auVar15 & auVar1,0);
  puVar11[3] = SUB168(auVar15 & auVar1,8);
  puVar8[2] = SUB168(auVar14 & auVar1,0);
  puVar8[3] = SUB168(auVar14 & auVar1,8);
  puVar12[2] = SUB168(auVar16 & auVar1,0);
  puVar12[3] = SUB168(auVar16 & auVar1,8);
  return puVar8 + 4;
}


