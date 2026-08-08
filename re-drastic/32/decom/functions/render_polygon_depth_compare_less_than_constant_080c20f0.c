/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than_constant
 * Address  : 080c20f0
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 *
render_polygon_depth_compare_less_than_constant
          (undefined8 *param_1,undefined4 param_2,undefined (*param_3) [16],int param_4,
          undefined4 *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  int iVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = 0;
  pauVar4 = param_3 + 2;
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_2;
  auVar2._8_8_ = 0;
  auVar2 = auVar2 & auVar2 << 0x40;
  auVar8 = SIMDExpandImmediate(1,7,0xff);
  auVar9 = SIMDExpandImmediate(1,7,0xff);
  auVar8 = VectorCompareGreaterThan(*param_3 & ~auVar8,auVar2,4);
  auVar9 = VectorCompareGreaterThan(param_3[1] & ~auVar9,auVar2,4);
  uVar10 = VectorCopyNarrow(auVar8,4);
  uVar11 = VectorCopyNarrow(auVar9,4);
  iVar5 = param_4 + -8;
  iVar6 = iVar5;
  if (iVar5 != 0 && 7 < param_4) {
    do {
      auVar3 = *pauVar4;
      pauVar7 = pauVar4 + 1;
      pauVar4 = pauVar4 + 2;
      auVar8 = SIMDExpandImmediate(1,7,0xff);
      auVar9._8_8_ = uVar11;
      auVar9._0_8_ = uVar10;
      uVar10 = VectorCopyNarrow(auVar9,2);
      auVar9 = SIMDExpandImmediate(1,7,0xff);
      uVar12 = VectorSub(uVar12,uVar10,1);
      auVar8 = VectorCompareGreaterThan(auVar3 & ~auVar8,auVar2,4);
      auVar9 = VectorCompareGreaterThan(*pauVar7 & ~auVar9,auVar2,4);
      *param_1 = uVar10;
      param_1 = param_1 + 1;
      uVar10 = VectorCopyNarrow(auVar8,4);
      uVar11 = VectorCopyNarrow(auVar9,4);
      iVar5 = iVar6 + -8;
      bVar1 = 7 < iVar6;
      iVar6 = iVar5;
    } while (iVar5 != 0 && bVar1);
  }
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = uVar10;
  uVar11 = VectorCopyNarrow(auVar8,2);
  uVar10 = VectorShiftLeft(uVar11,CONCAT44(iVar5 * -8,iVar5 * -8),8,1);
  *param_1 = uVar11;
  uVar10 = VectorSub(uVar12,uVar10,1);
  uVar10 = VectorPairwiseAddLong(uVar10,1);
  uVar10 = VectorPairwiseAddLong(uVar10,2);
  uVar10 = VectorPairwiseAdd(uVar10,uVar10,4);
  *param_5 = (int)uVar10;
  return param_1 + 1;
}


