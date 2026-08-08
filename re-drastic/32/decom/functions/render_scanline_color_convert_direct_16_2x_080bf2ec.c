/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_16_2x
 * Address  : 080bf2ec
 * Program  : drastic
 */


undefined8
render_scanline_color_convert_direct_16_2x
          (undefined (*param_1) [16],undefined (*param_2) [16],undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  int iVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  undefined *puVar12;
  longlong lVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined (*pauVar7) [16];
  
  pauVar10 = param_1 + 0x10;
  pauVar11 = param_2 + 0x10;
  pauVar6 = param_1 + 0x20;
  pauVar8 = param_2 + 0x20;
  iVar5 = 8;
  do {
    pauVar7 = pauVar6 + 1;
    pauVar3 = param_1 + 1;
    auVar14 = VectorShiftRight(*pauVar6,1);
    pauVar9 = pauVar8 + 1;
    auVar16 = VectorShiftLeft(*param_1,2,8,0);
    pauVar4 = param_2 + 1;
    auVar17 = VectorShiftRight(*pauVar8,1);
    pauVar6 = pauVar6 + 2;
    auVar18 = VectorShiftLeft(*param_2,2,8,0);
    param_1 = param_1 + 2;
    auVar20 = VectorShiftRight(*pauVar7,1);
    pauVar8 = pauVar8 + 2;
    auVar21 = VectorShiftLeft(*pauVar3,2,8,0);
    param_2 = param_2 + 2;
    auVar22 = VectorShiftRight(*pauVar9,1);
    auVar15 = *pauVar10;
    pauVar3 = pauVar10 + 1;
    auVar23 = VectorShiftLeft(*pauVar4,2,8,0);
    auVar19 = *pauVar11;
    pauVar4 = pauVar11 + 1;
    VectorShiftLeftInsert(auVar14,*pauVar10,5);
    pauVar10 = pauVar10 + 2;
    auVar14 = VectorShiftLeftInsert(auVar17,*pauVar11,5);
    pauVar11 = pauVar11 + 2;
    VectorShiftLeftInsert(auVar20,*pauVar3,5);
    auVar17 = VectorShiftLeftInsert(auVar22,*pauVar4,5);
    VectorShiftRightInsert(auVar16,auVar15,3);
    auVar19 = VectorShiftRightInsert(auVar18,auVar19,3);
    VectorShiftRightInsert(auVar21,*pauVar3,3);
    auVar16 = VectorShiftRightInsert(auVar23,*pauVar4,3);
    auVar15 = VectorZip(auVar14,1);
    VectorZip(auVar19,1);
    VectorZip(auVar17,1);
    VectorZip(auVar16,1);
    puVar1 = (undefined *)0x300;
    puVar2 = (undefined *)0x310;
    lVar13 = 8;
    puVar12 = param_3;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x308;
    puVar2 = (undefined *)0x318;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar12 = param_3 + 0x20;
    puVar1 = (undefined *)0x320;
    puVar2 = (undefined *)0x330;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x328;
    puVar2 = (undefined *)0x338;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar12 = param_3 + 0x40;
    puVar1 = (undefined *)0x3c0;
    puVar2 = (undefined *)0x3d0;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3c8;
    puVar2 = (undefined *)0x3d8;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar12 = param_3 + 0x60;
    puVar1 = (undefined *)0x3e0;
    puVar2 = (undefined *)0x3f0;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3e8;
    puVar2 = (undefined *)0x3f8;
    lVar13 = 8;
    while( true ) {
      *puVar12 = *puVar1;
      puVar12[1] = *puVar2;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_3 = param_3 + 0x80;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return auVar15._0_8_;
}


