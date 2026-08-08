/*
 * Ghidra decompilation
 *
 * Function : FUN_08091488
 * Address  : 08091488
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_08091488(undefined8 *param_1,undefined (*param_2) [16],undefined (*param_3) [16],int param_4,
            undefined4 *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = 0;
  auVar10 = SIMDExpandImmediate(0,2,1);
  iVar4 = param_4 + -8;
  iVar5 = iVar4;
  if (iVar4 != 0 && 7 < param_4) {
    do {
      auVar3 = *param_2;
      pauVar6 = param_2 + 1;
      param_2 = param_2 + 2;
      auVar2 = *param_3;
      pauVar7 = param_3 + 1;
      param_3 = param_3 + 2;
      auVar8 = SIMDExpandImmediate(1,7,0xff);
      auVar9 = SIMDExpandImmediate(1,7,0xff);
      auVar8 = VectorSub(auVar3,auVar2 & ~auVar8,4);
      auVar9 = VectorSub(*pauVar6,*pauVar7 & ~auVar9,4);
      auVar8 = VectorAbsolute(auVar8,4);
      auVar9 = VectorAbsolute(auVar9,4);
      auVar8 = VectorCompareGreaterThan(auVar10,auVar8,4);
      auVar9 = VectorCompareGreaterThan(auVar10,auVar9,4);
      uVar11 = VectorCopyNarrow(auVar8,4);
      uVar12 = VectorCopyNarrow(auVar9,4);
      auVar8._8_8_ = uVar12;
      auVar8._0_8_ = uVar11;
      uVar11 = VectorCopyNarrow(auVar8,2);
      uVar13 = VectorSub(uVar13,uVar11,1);
      *param_1 = uVar11;
      param_1 = param_1 + 1;
      iVar4 = iVar5 + -8;
      bVar1 = 7 < iVar5;
      iVar5 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  auVar8 = SIMDExpandImmediate(1,7,0xff);
  auVar9 = SIMDExpandImmediate(1,7,0xff);
  auVar8 = VectorSub(*param_2,*param_3 & ~auVar8,4);
  auVar9 = VectorSub(param_2[1],param_3[1] & ~auVar9,4);
  auVar8 = VectorAbsolute(auVar8,4);
  auVar9 = VectorAbsolute(auVar9,4);
  auVar8 = VectorCompareGreaterThan(auVar10,auVar8,4);
  auVar10 = VectorCompareGreaterThan(auVar10,auVar9,4);
  uVar11 = VectorCopyNarrow(auVar8,4);
  uVar12 = VectorCopyNarrow(auVar10,4);
  auVar10._8_8_ = uVar12;
  auVar10._0_8_ = uVar11;
  uVar11 = VectorCopyNarrow(auVar10,2);
  *param_1 = uVar11;
  uVar11 = VectorShiftLeft(uVar11,CONCAT44(iVar4 * -8,iVar4 * -8),8,1);
  uVar13 = VectorSub(uVar13,uVar11,1);
  uVar13 = VectorPairwiseAdd(uVar13,uVar13,1);
  uVar13 = VectorPairwiseAddLong(uVar13,1);
  uVar13 = VectorPairwiseAddLong(uVar13,2);
  *param_5 = (int)uVar13;
  return CONCAT44(param_2 + 2,param_1 + 1);
}


