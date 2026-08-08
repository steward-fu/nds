/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_16_1x
 * Address  : 080bf4e8
 * Program  : drastic
 */


undefined8
render_scanline_color_convert_shade_16_1x
          (undefined (*param_1) [16],undefined *param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  uVar4 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
  uVar1 = CONCAT44(uVar4,uVar4);
  pauVar5 = param_1 + 0x10;
  pauVar6 = param_1 + 0x20;
  iVar7 = 0x20;
  do {
    auVar15 = *pauVar6;
    pauVar6 = pauVar6 + 1;
    puVar2 = *pauVar5;
    puVar3 = *pauVar5;
    pauVar5 = pauVar5 + 1;
    auVar16 = *param_1;
    param_1 = param_1 + 1;
    auVar12 = VectorMultiplyAccumulate(auVar15._0_8_,uVar1,1,1);
    auVar14 = VectorMultiplyAccumulate(*(undefined8 *)puVar2,uVar1,1,1);
    auVar13 = VectorMultiplyAccumulate(auVar16._0_8_,uVar1,1,1);
    auVar15 = VectorMultiplyAccumulate(auVar15._8_8_,uVar1,1,1);
    auVar17 = VectorMultiplyAccumulate(*(undefined8 *)(puVar3 + 8),uVar1,1,1);
    auVar16 = VectorMultiplyAccumulate(auVar16._8_8_,uVar1,1,1);
    auVar12._0_8_ = VectorShiftNarrowRight(auVar12,6);
    auVar12._8_8_ = VectorShiftNarrowRight(auVar15,6);
    uVar10 = VectorShiftNarrowRight(auVar14,5);
    uVar11 = VectorShiftNarrowRight(auVar17,5);
    auVar13._0_8_ = VectorShiftNarrowRight(auVar13,5);
    auVar13._8_8_ = VectorShiftNarrowRight(auVar16,5);
    auVar13 = VectorShiftLeft(auVar13,2,8,0);
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = uVar10;
    auVar15 = VectorShiftLeftInsert(auVar12,auVar15,5);
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar10;
    VectorShiftRightInsert(auVar13,auVar16,3);
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x310;
    lVar9 = 8;
    puVar8 = param_2;
    while( true ) {
      *puVar8 = *puVar2;
      puVar8[1] = *puVar3;
      puVar8 = puVar8 + 2;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined *)0x308;
    puVar3 = (undefined *)0x318;
    lVar9 = 8;
    while( true ) {
      *puVar8 = *puVar2;
      puVar8[1] = *puVar3;
      puVar8 = puVar8 + 2;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x20;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return auVar15._0_8_;
}


