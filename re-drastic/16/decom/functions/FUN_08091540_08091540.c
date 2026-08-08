/*
 * Ghidra decompilation
 *
 * Function : FUN_08091540
 * Address  : 08091540
 * Program  : drastic16
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 *
FUN_08091540(undefined8 *param_1,undefined4 param_2,undefined (*param_3) [16],int param_4,
            undefined4 *param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_8_ = 0;
  auVar7 = auVar7 & auVar7 << 0x40;
  uVar12 = 0;
  auVar9 = SIMDExpandImmediate(0,2,1);
  iVar3 = param_4 + -8;
  iVar4 = iVar3;
  if (iVar3 != 0 && 7 < param_4) {
    do {
      auVar2 = *param_3;
      pauVar5 = param_3 + 1;
      param_3 = param_3 + 2;
      auVar6 = SIMDExpandImmediate(1,7,0xff);
      auVar8 = SIMDExpandImmediate(1,7,0xff);
      auVar6 = VectorSub(auVar7,auVar2 & ~auVar6,4);
      auVar8 = VectorSub(auVar7,*pauVar5 & ~auVar8,4);
      auVar6 = VectorAbsolute(auVar6,4);
      auVar8 = VectorAbsolute(auVar8,4);
      auVar6 = VectorCompareGreaterThan(auVar9,auVar6,4);
      auVar8 = VectorCompareGreaterThan(auVar9,auVar8,4);
      uVar10 = VectorCopyNarrow(auVar6,4);
      uVar11 = VectorCopyNarrow(auVar8,4);
      auVar6._8_8_ = uVar11;
      auVar6._0_8_ = uVar10;
      uVar10 = VectorCopyNarrow(auVar6,2);
      uVar12 = VectorSub(uVar12,uVar10,1);
      *param_1 = uVar10;
      param_1 = param_1 + 1;
      iVar3 = iVar4 + -8;
      bVar1 = 7 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  auVar6 = SIMDExpandImmediate(1,7,0xff);
  auVar8 = SIMDExpandImmediate(1,7,0xff);
  auVar6 = VectorSub(auVar7,*param_3 & ~auVar6,4);
  auVar8 = VectorSub(auVar7,param_3[1] & ~auVar8,4);
  auVar7 = VectorAbsolute(auVar6,4);
  auVar6 = VectorAbsolute(auVar8,4);
  auVar7 = VectorCompareGreaterThan(auVar9,auVar7,4);
  auVar9 = VectorCompareGreaterThan(auVar9,auVar6,4);
  uVar10 = VectorCopyNarrow(auVar7,4);
  uVar11 = VectorCopyNarrow(auVar9,4);
  auVar9._8_8_ = uVar11;
  auVar9._0_8_ = uVar10;
  uVar10 = VectorCopyNarrow(auVar9,2);
  *param_1 = uVar10;
  uVar10 = VectorShiftLeft(uVar10,CONCAT44(iVar3 * -8,iVar3 * -8),8,1);
  uVar12 = VectorSub(uVar12,uVar10,1);
  uVar12 = VectorPairwiseAdd(uVar12,uVar12,1);
  uVar12 = VectorPairwiseAddLong(uVar12,1);
  uVar12 = VectorPairwiseAddLong(uVar12,2);
  *param_5 = (int)uVar12;
  return param_1 + 1;
}


