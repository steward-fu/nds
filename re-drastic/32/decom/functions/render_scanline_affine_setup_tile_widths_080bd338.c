/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_tile_widths
 * Address  : 080bd338
 * Program  : drastic
 */


int render_scanline_affine_setup_tile_widths
              (int param_1,uint param_2,int param_3,undefined8 *param_4,undefined4 param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 != 0) {
    uVar13 = CONCAT44(param_5,param_5);
    iVar4 = (int)(param_3 * param_1 + param_2) >> 0xb;
    if (param_1 < 0) {
      param_1 = (param_2 & 0x7ff) - param_1;
      iVar4 = ((int)param_2 >> 0xb) - iVar4;
    }
    else {
      param_1 = (param_1 + 0x7ff) - (param_2 & 0x7ff);
      iVar4 = iVar4 - ((int)param_2 >> 0xb);
    }
    if (iVar4 != 0) {
      auVar9 = VectorMultiply(CONCAT44(param_1,param_1),uVar13,4,1);
      uVar14 = VectorShiftLeft(uVar13,0x20,0x40,0);
      auVar7._8_8_ = uVar13;
      auVar7._0_8_ = uVar13;
      auVar7 = VectorShiftLeft(auVar7,2,0x20,0);
      auVar8._8_8_ = uVar13;
      auVar8._0_8_ = uVar13;
      auVar8 = VectorShiftLeft(auVar8,3,0x20,0);
      uVar11 = VectorShiftNarrowRight(auVar9,0xb);
      uVar15 = VectorAdd(uVar13,uVar13,4);
      auVar9._8_8_ = uVar13;
      auVar9._0_8_ = uVar13;
      auVar10 = VectorShiftLeft(auVar9,4,0x20,0);
      auVar9 = VectorAdd(auVar7,auVar8,4);
      auVar12._0_8_ = VectorAdd(uVar11,uVar14,4);
      auVar12._8_8_ = VectorAdd(auVar12._0_8_,uVar15,4);
      iVar5 = iVar4;
      do {
        uVar13 = VectorShiftNarrowRight(auVar12,0x10);
        uVar11 = VectorAddReturnHigh(auVar12,auVar7,4);
        uVar14 = VectorAddReturnHigh(auVar12,auVar8,4);
        uVar15 = VectorAddReturnHigh(auVar12,auVar9,4);
        auVar12 = VectorAdd(auVar12,auVar10,4);
        auVar2._8_8_ = uVar11;
        auVar2._0_8_ = uVar13;
        uVar13 = VectorShiftNarrowRight(auVar2,4);
        auVar3._8_8_ = uVar15;
        auVar3._0_8_ = uVar14;
        uVar11 = VectorShiftNarrowRight(auVar3,4);
        *param_4 = uVar13;
        param_4[1] = uVar11;
        param_4 = param_4 + 2;
        iVar6 = iVar5 + -0x10;
        bVar1 = 0xf < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar1);
    }
    return iVar4;
  }
  return 0;
}


