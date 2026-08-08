/*
 * Ghidra decompilation
 *
 * Function : FUN_0808e904
 * Address  : 0808e904
 * Program  : drastic16
 */


void FUN_0808e904(int param_1,int param_2,int param_3,int param_4)

{
  undefined (*pauVar1) [16];
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
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
  
  pbVar6 = (byte *)(param_1 + 100);
  auVar8 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  auVar13 = ZEXT816(0);
  auVar20 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  for (uVar5 = (uint)*(byte *)(param_1 + 0x93); pbVar7 = pbVar6, uVar5 != 0; uVar5 = uVar5 - 1) {
    while( true ) {
      pbVar6 = pbVar7 + 1;
      uVar3 = (uint)*pbVar7;
      if ((*pbVar7 & 4) != 0) break;
      pauVar1 = (undefined (*) [16])(param_2 + uVar3 * 0x20);
      puVar2 = (undefined8 *)(param_3 + uVar3 * 0x20);
      puVar4 = (undefined8 *)(param_4 + uVar3 * 0x20);
      auVar17 = *pauVar1;
      auVar19 = pauVar1[1];
      *puVar2 = SUB168(auVar17 & ~auVar8,0);
      puVar2[1] = SUB168(auVar17 & ~auVar8,8);
      puVar2[2] = SUB168(auVar19 & ~auVar9,0);
      puVar2[3] = SUB168(auVar19 & ~auVar9,8);
      auVar16 = auVar17 & ~auVar10 & auVar8;
      auVar18 = auVar19 & ~auVar11 & auVar9;
      *puVar4 = auVar16._0_8_;
      puVar4[1] = auVar16._8_8_;
      puVar4[2] = auVar18._0_8_;
      puVar4[3] = auVar18._8_8_;
      auVar10 = auVar10 | auVar8 & auVar17;
      auVar11 = auVar11 | auVar9 & auVar19;
      auVar8 = auVar8 | auVar17;
      auVar9 = auVar9 | auVar19;
      uVar5 = uVar5 - 1;
      pbVar7 = pbVar6;
      if (uVar5 == 0) goto LAB_0808e9a0;
    }
    pauVar1 = (undefined (*) [16])(param_2 + uVar3 * 0x20);
    auVar17 = *pauVar1 & ~auVar12;
    auVar19 = pauVar1[1] & ~auVar13;
    auVar20 = auVar20 | auVar17 & ~auVar8;
    auVar21 = auVar21 | auVar19 & ~auVar9;
    auVar14 = auVar14 | auVar17 & ~auVar10 & auVar8;
    auVar15 = auVar15 | auVar19 & ~auVar11 & auVar9;
    auVar10 = auVar10 | auVar8 & auVar17;
    auVar11 = auVar11 | auVar9 & auVar19;
    auVar8 = auVar8 | auVar17;
    auVar9 = auVar9 | auVar19;
    auVar12 = auVar12 | auVar17;
    auVar13 = auVar13 | auVar19;
  }
LAB_0808e9a0:
  auVar12._8_8_ = 0;
  auVar12._0_8_ = ~auVar8._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = ~auVar8._8_8_;
  auVar17 = auVar12 << 8 | auVar17;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = ~auVar9._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = ~auVar9._8_8_;
  auVar19 = auVar13 << 8 | auVar19;
  *(longlong *)(param_3 + 0xa0) = auVar17._0_8_;
  *(longlong *)(param_3 + 0xa8) = auVar17._8_8_;
  *(longlong *)(param_3 + 0xb0) = auVar19._0_8_;
  *(longlong *)(param_3 + 0xb8) = auVar19._8_8_;
  *(longlong *)(param_4 + 0xa0) = SUB168(auVar8 & ~auVar10,0);
  *(longlong *)(param_4 + 0xa8) = SUB168(auVar8 & ~auVar10,8);
  *(longlong *)(param_4 + 0xb0) = SUB168(auVar9 & ~auVar11,0);
  *(longlong *)(param_4 + 0xb8) = SUB168(auVar9 & ~auVar11,8);
  *(longlong *)(param_3 + 0x80) = auVar20._0_8_;
  *(longlong *)(param_3 + 0x88) = auVar20._8_8_;
  *(longlong *)(param_3 + 0x90) = auVar21._0_8_;
  *(longlong *)(param_3 + 0x98) = auVar21._8_8_;
  *(longlong *)(param_4 + 0x80) = auVar14._0_8_;
  *(longlong *)(param_4 + 0x88) = auVar14._8_8_;
  *(longlong *)(param_4 + 0x90) = auVar15._0_8_;
  *(longlong *)(param_4 + 0x98) = auVar15._8_8_;
  return;
}


