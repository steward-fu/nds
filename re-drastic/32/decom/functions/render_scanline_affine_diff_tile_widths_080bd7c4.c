/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_diff_tile_widths
 * Address  : 080bd7c4
 * Program  : drastic
 */


void render_scanline_affine_diff_tile_widths(undefined (*param_1) [16],int param_2,int param_3)

{
  bool bVar1;
  undefined auVar2 [32];
  undefined auVar3 [32];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined (*pauVar7) [16];
  int iVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  *(ushort *)(*param_1 + param_2) =
       (ushort)(param_3 + 1U) & 0xff | (ushort)((param_3 + 1U & 0xff) << 8);
  pauVar7 = param_1 + 1;
  auVar2._16_16_ = *param_1;
  auVar2._0_16_ = ZEXT816(0);
  auVar11 = VectorSub(*param_1,auVar2._15_16_,1);
  iVar8 = param_2 + -0xe;
  auVar10 = *param_1;
  if (param_2 + -0xe != 0 && 0xf < param_2 + 2) {
    do {
      auVar6 = *pauVar7;
      auVar5 = *pauVar7;
      auVar4 = *pauVar7;
      pauVar7 = pauVar7 + 1;
      auVar3._16_16_ = auVar4;
      auVar3._0_16_ = auVar10;
      *(longlong *)*param_1 = auVar11._0_8_;
      *(longlong *)(*param_1 + 8) = auVar11._8_8_;
      param_1 = param_1 + 1;
      auVar11 = VectorSub(auVar5,auVar3._15_16_,1);
      iVar9 = iVar8 + -0x10;
      bVar1 = 0xf < iVar8;
      iVar8 = iVar9;
      auVar10 = auVar6;
    } while (iVar9 != 0 && bVar1);
  }
  *(longlong *)*param_1 = auVar11._0_8_;
  *(longlong *)(*param_1 + 8) = auVar11._8_8_;
  return;
}


