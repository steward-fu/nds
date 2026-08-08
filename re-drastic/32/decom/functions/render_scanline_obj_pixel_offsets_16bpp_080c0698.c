/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_pixel_offsets_16bpp
 * Address  : 080c0698
 * Program  : drastic
 */


undefined8
render_scanline_obj_pixel_offsets_16bpp
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  int unaff_s30;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar7;
  
  auVar9._4_4_ = CONCAT22(param_4,param_4);
  auVar9._0_4_ = CONCAT22(param_4,param_4);
  auVar9._8_8_ = 0;
  uVar4 = CONCAT22((short)param_3,(short)param_3);
  auVar11._4_4_ = uVar4;
  auVar11._0_4_ = uVar4;
  auVar11._8_8_ = 0;
  auVar11 = auVar11 & auVar11 << 0x40;
  uVar3 = (undefined2)((uint)param_3 >> 0x10);
  uVar4 = CONCAT22(uVar3,uVar3);
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  auVar13._8_8_ = 0;
  auVar13 = auVar13 & auVar13 << 0x40;
  auVar8._8_8_ = 0x7000600050004;
  auVar8._0_8_ = 0x3000200010000;
  auVar8 = VectorMultiplyAccumulate(auVar11,auVar8,2,0);
  auVar10._8_8_ = 0x7000600050004;
  auVar10._0_8_ = 0x3000200010000;
  auVar10 = VectorMultiplyAccumulate(auVar13,auVar10,2,0);
  uVar20 = VectorShiftNarrowRight(auVar9 & auVar9 << 0x40,2);
  auVar12 = VectorShiftLeft(auVar11,3,0x10,0);
  auVar13 = VectorShiftLeft(auVar13,3,0x10,0);
  auVar14 = VectorAdd(auVar12,auVar12,2);
  auVar15 = VectorAdd(auVar13,auVar13,2);
  uVar2 = SIMDExpandImmediate(0,0xe,2);
  uVar16 = VectorShiftNarrowRight(auVar8,8);
  auVar19._0_8_ = VectorShiftNarrowRight(auVar10,8);
  uVar17 = VectorAddReturnHigh(auVar8,auVar12,2);
  auVar19._8_8_ = VectorAddReturnHigh(auVar10,auVar13,2);
  auVar9 = VectorAdd(auVar8,auVar14,2);
  uVar7 = auVar9._0_8_;
  auVar11 = VectorAdd(auVar10,auVar15,2);
  auVar8 = VectorShiftLeft(auVar19,2,8,0);
  VectorMultiply(uVar16,uVar2,1,1);
  auVar10 = VectorMultiplyAccumulate(auVar8._0_8_,uVar20,1,1);
  VectorMultiply(uVar17,uVar2,1,1);
  auVar8 = VectorMultiplyAccumulate(auVar8._8_8_,uVar20,1,1);
  iVar5 = unaff_s30 + -0x10;
  if (unaff_s30 + -0x10 != 0 && 0xf < unaff_s30) {
    do {
      uVar16 = VectorShiftNarrowRight(auVar9,8);
      auVar18._0_8_ = VectorShiftNarrowRight(auVar11,8);
      uVar17 = VectorAddReturnHigh(auVar9,auVar12,2);
      auVar18._8_8_ = VectorAddReturnHigh(auVar11,auVar13,2);
      auVar9 = VectorAdd(auVar9,auVar14,2);
      uVar7 = auVar9._0_8_;
      *param_1 = auVar10._0_8_;
      param_1[1] = auVar10._8_8_;
      auVar11 = VectorAdd(auVar11,auVar15,2);
      auVar19 = VectorShiftLeft(auVar18,2,8,0);
      param_1[2] = auVar8._0_8_;
      param_1[3] = auVar8._8_8_;
      param_1 = param_1 + 4;
      VectorMultiply(uVar16,uVar2,1,1);
      auVar10 = VectorMultiplyAccumulate(auVar19._0_8_,uVar20,1,1);
      VectorMultiply(uVar17,uVar2,1,1);
      auVar8 = VectorMultiplyAccumulate(auVar19._8_8_,uVar20,1,1);
      iVar6 = iVar5 + -0x10;
      bVar1 = 0xf < iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  *param_1 = auVar10._0_8_;
  param_1[1] = auVar10._8_8_;
  param_1[2] = auVar8._0_8_;
  param_1[3] = auVar8._8_8_;
  return uVar7;
}


