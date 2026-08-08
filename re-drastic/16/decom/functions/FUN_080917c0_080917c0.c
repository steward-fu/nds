/*
 * Ghidra decompilation
 *
 * Function : FUN_080917c0
 * Address  : 080917c0
 * Program  : drastic16
 */


void FUN_080917c0(undefined (*param_1) [16],undefined (*param_2) [16],undefined (*param_3) [16],
                 int param_4,undefined param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  auVar2 = SIMDExpandImmediate(0,0xe,0x1f);
  uVar4 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar4;
  auVar3._8_8_ = 0;
  auVar3 = auVar3 & auVar3 << 0x40;
  do {
    auVar8 = *param_2;
    pauVar6 = param_2 + 1;
    param_2 = param_2 + 2;
    auVar10 = *param_3;
    pauVar7 = param_3 + 1;
    param_3 = param_3 + 2;
    auVar8 = VectorCompareEqual(auVar8,auVar3,1);
    auVar9 = VectorCompareEqual(*pauVar6,auVar3,1);
    auVar10 = VectorCompareEqual(auVar10,auVar2,1);
    auVar11 = VectorCompareEqual(*pauVar7,auVar2,1);
    auVar8 = *param_1 & ~(auVar8 & ~auVar10);
    auVar10 = param_1[1] & ~(auVar9 & ~auVar11);
    *(longlong *)*param_1 = auVar8._0_8_;
    *(longlong *)(*param_1 + 8) = auVar8._8_8_;
    *(longlong *)param_1[1] = auVar10._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar10._8_8_;
    param_1 = param_1 + 2;
    iVar5 = param_4 + -0x20;
    bVar1 = 0x1f < param_4;
    param_4 = iVar5;
  } while (iVar5 != 0 && bVar1);
  return;
}


