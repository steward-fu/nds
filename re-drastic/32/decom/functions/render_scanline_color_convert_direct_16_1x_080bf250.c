/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_direct_16_1x
 * Address  : 080bf250
 * Program  : drastic
 */


undefined8 render_scanline_color_convert_direct_16_1x(undefined (*param_1) [16],undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  int iVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined *puVar10;
  longlong lVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  pauVar6 = param_1 + 0x10;
  pauVar8 = param_1 + 0x20;
  iVar5 = 4;
  do {
    auVar12 = VectorShiftRight(*pauVar8,1);
    auVar13 = VectorShiftLeft(*param_1,2,8,0);
    auVar14 = VectorShiftRight(pauVar8[1],1);
    pauVar9 = pauVar8 + 3;
    auVar15 = VectorShiftLeft(param_1[1],2,8,0);
    pauVar4 = param_1 + 3;
    auVar16 = VectorShiftRight(pauVar8[2],1);
    pauVar8 = pauVar8 + 4;
    auVar17 = VectorShiftLeft(param_1[2],2,8,0);
    param_1 = param_1 + 4;
    auVar18 = VectorShiftRight(*pauVar9,1);
    auVar3 = *pauVar6;
    pauVar9 = pauVar6 + 1;
    auVar19 = VectorShiftLeft(*pauVar4,2,8,0);
    pauVar4 = pauVar6 + 2;
    auVar12 = VectorShiftLeftInsert(auVar12,*pauVar6,5);
    pauVar7 = pauVar6 + 3;
    VectorShiftLeftInsert(auVar14,*pauVar9,5);
    pauVar6 = pauVar6 + 4;
    VectorShiftLeftInsert(auVar16,*pauVar4,5);
    VectorShiftLeftInsert(auVar18,*pauVar7,5);
    VectorShiftRightInsert(auVar13,auVar3,3);
    VectorShiftRightInsert(auVar15,*pauVar9,3);
    VectorShiftRightInsert(auVar17,*pauVar4,3);
    VectorShiftRightInsert(auVar19,*pauVar7,3);
    puVar1 = (undefined *)0x300;
    puVar2 = (undefined *)0x310;
    lVar11 = 8;
    puVar10 = param_2;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x308;
    puVar2 = (undefined *)0x318;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar10 = param_2 + 0x20;
    puVar1 = (undefined *)0x320;
    puVar2 = (undefined *)0x330;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x328;
    puVar2 = (undefined *)0x338;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar10 = param_2 + 0x40;
    puVar1 = (undefined *)0x3c0;
    puVar2 = (undefined *)0x3d0;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3c8;
    puVar2 = (undefined *)0x3d8;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar10 = param_2 + 0x60;
    puVar1 = (undefined *)0x3e0;
    puVar2 = (undefined *)0x3f0;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined *)0x3e8;
    puVar2 = (undefined *)0x3f8;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar1;
      puVar10[1] = *puVar2;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 0x80;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return auVar12._0_8_;
}


