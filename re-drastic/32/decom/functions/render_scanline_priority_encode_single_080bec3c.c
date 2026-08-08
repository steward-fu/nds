/*
 * Ghidra decompilation
 *
 * Function : render_scanline_priority_encode_single
 * Address  : 080bec3c
 * Program  : drastic
 */


void render_scanline_priority_encode_single(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
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
  
  pbVar5 = (byte *)(param_1 + 100);
  auVar7 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  for (uVar4 = (uint)*(byte *)(param_1 + 0x93); pbVar6 = pbVar5, uVar4 != 0; uVar4 = uVar4 - 1) {
    while( true ) {
      pbVar5 = pbVar6 + 1;
      uVar3 = (uint)*pbVar6;
      if ((*pbVar6 & 4) != 0) break;
      pauVar2 = (undefined (*) [16])(param_2 + uVar3 * 0x20);
      puVar1 = (undefined8 *)(param_3 + uVar3 * 0x20);
      auVar16 = *pauVar2;
      auVar12 = pauVar2[1];
      auVar13 = auVar16 & ~auVar7;
      auVar15 = auVar12 & ~auVar8;
      *puVar1 = auVar13._0_8_;
      puVar1[1] = auVar13._8_8_;
      puVar1[2] = auVar15._0_8_;
      puVar1[3] = auVar15._8_8_;
      auVar7 = auVar7 | auVar16;
      auVar8 = auVar8 | auVar12;
      uVar4 = uVar4 - 1;
      pbVar6 = pbVar5;
      if (uVar4 == 0) goto priority_encode_single_complete;
    }
    pauVar2 = (undefined (*) [16])(param_2 + uVar3 * 0x20);
    auVar16 = *pauVar2 & ~auVar11;
    auVar12 = pauVar2[1] & ~auVar14;
    auVar9 = auVar9 | auVar16 & ~auVar7;
    auVar10 = auVar10 | auVar12 & ~auVar8;
    auVar7 = auVar7 | auVar16;
    auVar8 = auVar8 | auVar12;
    auVar11 = auVar11 | auVar16;
    auVar14 = auVar14 | auVar12;
  }
priority_encode_single_complete:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = ~auVar7._0_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = ~auVar7._8_8_;
  auVar14 = auVar11 << 8 | auVar14;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = ~auVar8._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = ~auVar8._8_8_;
  auVar16 = auVar7 << 8 | auVar16;
  *(longlong *)(param_3 + 0xa0) = auVar14._0_8_;
  *(longlong *)(param_3 + 0xa8) = auVar14._8_8_;
  *(longlong *)(param_3 + 0xb0) = auVar16._0_8_;
  *(longlong *)(param_3 + 0xb8) = auVar16._8_8_;
  *(longlong *)(param_3 + 0x80) = auVar9._0_8_;
  *(longlong *)(param_3 + 0x88) = auVar9._8_8_;
  *(longlong *)(param_3 + 0x90) = auVar10._0_8_;
  *(longlong *)(param_3 + 0x98) = auVar10._8_8_;
  return;
}


