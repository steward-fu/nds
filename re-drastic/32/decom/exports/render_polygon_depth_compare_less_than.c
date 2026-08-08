/*
 * Ghidra decompilation
 *
 * Function : render_polygon_depth_compare_less_than
 * Address  : 080c2058
 * Program  : drastic
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 *
render_polygon_depth_compare_less_than
          (undefined8 *param_1,undefined (*param_2) [16],undefined (*param_3) [16],int param_4,
          undefined4 *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  int iVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = 0;
  pauVar5 = param_3 + 2;
  pauVar4 = param_2 + 2;
  auVar10 = SIMDExpandImmediate(1,7,0xff);
  auVar11 = SIMDExpandImmediate(1,7,0xff);
  auVar10 = VectorCompareGreaterThan(*param_3 & ~auVar10,*param_2,4);
  auVar11 = VectorCompareGreaterThan(param_3[1] & ~auVar11,param_2[1],4);
  uVar12 = VectorCopyNarrow(auVar10,4);
  uVar13 = VectorCopyNarrow(auVar11,4);
  iVar6 = param_4 + -8;
  iVar7 = iVar6;
  if (iVar6 != 0 && 7 < param_4) {
    do {
      auVar2 = *pauVar5;
      pauVar8 = pauVar5 + 1;
      pauVar5 = pauVar5 + 2;
      auVar3 = *pauVar4;
      pauVar9 = pauVar4 + 1;
      pauVar4 = pauVar4 + 2;
      auVar10 = SIMDExpandImmediate(1,7,0xff);
      auVar11._8_8_ = uVar13;
      auVar11._0_8_ = uVar12;
      uVar12 = VectorCopyNarrow(auVar11,2);
      auVar11 = SIMDExpandImmediate(1,7,0xff);
      uVar14 = VectorSub(uVar14,uVar12,1);
      auVar10 = VectorCompareGreaterThan(auVar2 & ~auVar10,auVar3,4);
      auVar11 = VectorCompareGreaterThan(*pauVar8 & ~auVar11,*pauVar9,4);
      *param_1 = uVar12;
      param_1 = param_1 + 1;
      uVar12 = VectorCopyNarrow(auVar10,4);
      uVar13 = VectorCopyNarrow(auVar11,4);
      iVar6 = iVar7 + -8;
      bVar1 = 7 < iVar7;
      iVar7 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  auVar10._8_8_ = uVar13;
  auVar10._0_8_ = uVar12;
  uVar13 = VectorCopyNarrow(auVar10,2);
  uVar12 = VectorShiftLeft(uVar13,CONCAT44(iVar6 * -8,iVar6 * -8),8,1);
  *param_1 = uVar13;
  uVar12 = VectorSub(uVar14,uVar12,1);
  uVar12 = VectorPairwiseAddLong(uVar12,1);
  uVar12 = VectorPairwiseAddLong(uVar12,2);
  uVar12 = VectorPairwiseAdd(uVar12,uVar12,4);
  *param_5 = (int)uVar12;
  return param_1 + 1;
}


