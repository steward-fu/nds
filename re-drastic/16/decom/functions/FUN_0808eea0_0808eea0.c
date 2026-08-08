/*
 * Ghidra decompilation
 *
 * Function : FUN_0808eea0
 * Address  : 0808eea0
 * Program  : drastic16
 */


undefined8 FUN_0808eea0(undefined4 param_1,undefined (*param_2) [16],undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  int iVar7;
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
  
  pauVar8 = param_2 + 0x10;
  pauVar4 = param_2 + 0x20;
  iVar7 = 4;
  do {
    auVar12 = VectorShiftRight(*pauVar4,1);
    auVar13 = VectorShiftLeft(*param_2,2,8,0);
    auVar14 = VectorShiftRight(pauVar4[1],1);
    pauVar5 = pauVar4 + 3;
    auVar15 = VectorShiftLeft(param_2[1],2,8,0);
    pauVar6 = param_2 + 3;
    auVar16 = VectorShiftRight(pauVar4[2],1);
    pauVar4 = pauVar4 + 4;
    auVar17 = VectorShiftLeft(param_2[2],2,8,0);
    param_2 = param_2 + 4;
    auVar18 = VectorShiftRight(*pauVar5,1);
    auVar3 = *pauVar8;
    pauVar5 = pauVar8 + 1;
    auVar19 = VectorShiftLeft(*pauVar6,2,8,0);
    pauVar6 = pauVar8 + 2;
    auVar12 = VectorShiftLeftInsert(auVar12,*pauVar8,5);
    pauVar9 = pauVar8 + 3;
    VectorShiftLeftInsert(auVar14,*pauVar5,5);
    pauVar8 = pauVar8 + 4;
    VectorShiftLeftInsert(auVar16,*pauVar6,5);
    VectorShiftLeftInsert(auVar18,*pauVar9,5);
    VectorShiftRightInsert(auVar13,auVar3,3);
    VectorShiftRightInsert(auVar15,*pauVar5,3);
    VectorShiftRightInsert(auVar17,*pauVar6,3);
    VectorShiftRightInsert(auVar19,*pauVar9,3);
    puVar1 = (undefined *)0x300;
    puVar2 = (undefined *)0x310;
    lVar11 = 8;
    puVar10 = param_3;
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
    puVar10 = param_3 + 0x20;
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
    puVar10 = param_3 + 0x40;
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
    puVar10 = param_3 + 0x60;
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
    param_3 = param_3 + 0x80;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return auVar12._0_8_;
}


