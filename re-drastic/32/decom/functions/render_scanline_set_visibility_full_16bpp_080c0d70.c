/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_full_16bpp
 * Address  : 080c0d70
 * Program  : drastic
 */


void render_scanline_set_visibility_full_16bpp(undefined *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined in_q9 [16];
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined in_q11 [16];
  undefined auVar14 [16];
  undefined in_q13 [16];
  undefined auVar15 [16];
  undefined in_q15 [16];
  undefined auVar16 [16];
  
  uVar9 = 0x8040201008040201;
  uVar10 = 0x8040201008040201;
  iVar6 = 0x100;
  do {
    puVar1 = (undefined *)0x380;
    puVar2 = (undefined *)0x390;
    lVar8 = 8;
    puVar7 = param_1;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x388;
    puVar2 = (undefined *)0x398;
    lVar8 = 8;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = param_1 + 0x20;
    auVar12 = VectorShiftRight(in_q9,7);
    puVar1 = (undefined *)0x3a0;
    puVar2 = (undefined *)0x3b0;
    lVar8 = 8;
    puVar7 = param_1;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3a8;
    puVar2 = (undefined *)0x3b8;
    lVar8 = 8;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = param_1 + 0x20;
    auVar14 = VectorShiftRight(in_q11,7);
    puVar1 = (undefined *)0x3c0;
    puVar2 = (undefined *)0x3d0;
    lVar8 = 8;
    puVar7 = param_1;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3c8;
    puVar2 = (undefined *)0x3d8;
    lVar8 = 8;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = param_1 + 0x20;
    auVar15 = VectorShiftRight(in_q13,7);
    puVar1 = (undefined *)0x3e0;
    puVar2 = (undefined *)0x3f0;
    lVar8 = 8;
    puVar7 = param_1;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3e8;
    puVar2 = (undefined *)0x3f8;
    lVar8 = 8;
    while( true ) {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = param_1 + 0x20;
    auVar16 = VectorShiftRight(in_q15,7);
    auVar3._8_8_ = uVar10;
    auVar3._0_8_ = uVar9;
    auVar4._8_8_ = uVar10;
    auVar4._0_8_ = uVar9;
    auVar5._8_8_ = uVar10;
    auVar5._0_8_ = uVar9;
    in_q13 = auVar15 & auVar5;
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = uVar9;
    in_q15 = auVar16 & auVar15;
    uVar11 = VectorPairwiseAdd(SUB168(auVar12 & auVar3,0),SUB168(auVar12 & auVar3,8),1);
    uVar13 = VectorPairwiseAdd(SUB168(auVar14 & auVar4,0),SUB168(auVar14 & auVar4,8),1);
    in_q11._0_8_ = VectorPairwiseAdd(in_q13._0_8_,in_q13._8_8_,1);
    in_q11._8_8_ = VectorPairwiseAdd(in_q15._0_8_,in_q15._8_8_,1);
    uVar11 = VectorPairwiseAdd(uVar11,uVar13,1);
    in_q9._8_8_ = VectorPairwiseAdd(in_q11._0_8_,in_q11._8_8_,1);
    in_q9._0_8_ = VectorPairwiseAdd(uVar11,in_q9._8_8_,1);
    *param_2 = in_q9._0_8_;
    param_2 = param_2 + 1;
    iVar6 = iVar6 + -0x40;
  } while (iVar6 != 0);
  return;
}


