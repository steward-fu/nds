/*
 * Ghidra decompilation
 *
 * Function : render_scanline_color_convert_shade_16_2x
 * Address  : 080bf570
 * Program  : drastic
 */


undefined8
render_scanline_color_convert_shade_16_2x
          (undefined8 *param_1,undefined8 *param_2,undefined *param_3,undefined param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined auVar13 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  
  uVar4 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
  uVar1 = CONCAT44(uVar4,uVar4);
  puVar6 = param_1 + 0x20;
  puVar7 = param_2 + 0x20;
  puVar5 = param_1 + 0x40;
  puVar9 = param_2 + 0x40;
  iVar8 = 0x20;
  do {
    uVar12 = *puVar5;
    puVar5 = puVar5 + 1;
    uVar17 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar15 = *param_1;
    param_1 = param_1 + 1;
    uVar14 = *puVar9;
    puVar9 = puVar9 + 1;
    uVar18 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar16 = *param_2;
    param_2 = param_2 + 1;
    auVar19 = VectorMultiplyAccumulate(uVar12,uVar1,1,1);
    auVar21 = VectorMultiplyAccumulate(uVar17,uVar1,1,1);
    auVar20 = VectorMultiplyAccumulate(uVar15,uVar1,1,1);
    auVar22 = VectorMultiplyAccumulate(uVar14,uVar1,1,1);
    auVar24 = VectorMultiplyAccumulate(uVar18,uVar1,1,1);
    auVar23 = VectorMultiplyAccumulate(uVar16,uVar1,1,1);
    auVar13._0_8_ = VectorShiftNarrowRight(auVar19,6);
    auVar13._8_8_ = VectorShiftNarrowRight(auVar22,6);
    uVar12 = VectorShiftNarrowRight(auVar21,5);
    uVar14 = VectorShiftNarrowRight(auVar24,5);
    auVar21._0_8_ = VectorShiftNarrowRight(auVar20,5);
    auVar21._8_8_ = VectorShiftNarrowRight(auVar23,5);
    auVar21 = VectorShiftLeft(auVar21,2,8,0);
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = uVar12;
    auVar19 = VectorShiftLeftInsert(auVar13,auVar19,5);
    auVar20._8_8_ = uVar14;
    auVar20._0_8_ = uVar12;
    auVar20 = VectorShiftRightInsert(auVar21,auVar20,3);
    auVar19 = VectorZip(auVar19,1);
    VectorZip(auVar20,1);
    puVar2 = (undefined *)0x300;
    puVar3 = (undefined *)0x310;
    lVar11 = 8;
    puVar10 = param_3;
    while( true ) {
      *puVar10 = *puVar2;
      puVar10[1] = *puVar3;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined *)0x308;
    puVar3 = (undefined *)0x318;
    lVar11 = 8;
    while( true ) {
      *puVar10 = *puVar2;
      puVar10[1] = *puVar3;
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 0x20;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return auVar19._0_8_;
}


