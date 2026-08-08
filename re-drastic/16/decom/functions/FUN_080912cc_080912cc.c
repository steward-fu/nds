/*
 * Ghidra decompilation
 *
 * Function : FUN_080912cc
 * Address  : 080912cc
 * Program  : drastic16
 */


void FUN_080912cc(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  puVar3 = param_2 + 0xfc;
  do {
    auVar2._4_4_ = *param_2;
    auVar2._0_4_ = *param_2;
    auVar2._8_8_ = 0;
    auVar2 = auVar2 & auVar2 << 0x40;
    uVar4 = (uint)*(ushort *)puVar3;
    do {
      uVar7 = *param_3;
      puVar6 = param_3 + 1;
      param_3 = param_3 + 2;
      auVar8 = VectorCopyLong(uVar7,2,0);
      auVar9 = VectorCopyLong(*puVar6,2,0);
      auVar10 = VectorMultiply(0,auVar8._0_8_,4,0);
      auVar11 = VectorMultiply(0,auVar8._8_8_,4,0);
      auVar12 = VectorMultiply(0,auVar9._0_8_,4,0);
      auVar8 = VectorMultiply(0,auVar9._8_8_,4,0);
      auVar9._0_8_ = VectorShiftNarrowRight(auVar10,0xf);
      auVar9._8_8_ = VectorShiftNarrowRight(auVar11,0xf);
      auVar10._0_8_ = VectorShiftNarrowRight(auVar12,0xf);
      auVar10._8_8_ = VectorShiftNarrowRight(auVar8,0xf);
      auVar8 = VectorAdd(auVar9,auVar2,4);
      auVar9 = VectorAdd(auVar10,auVar2,4);
      *param_1 = auVar8._0_8_;
      param_1[1] = auVar8._8_8_;
      param_1[2] = auVar9._0_8_;
      param_1[3] = auVar9._8_8_;
      param_1 = param_1 + 4;
      uVar5 = uVar4 - 8;
      bVar1 = 7 < (int)uVar4;
      uVar4 = uVar5;
    } while (uVar5 != 0 && bVar1);
    param_3 = (undefined8 *)((int)param_3 + uVar5 * 2);
    param_1 = (undefined8 *)((int)param_1 + uVar5 * 4);
    param_4 = param_4 + -1;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  } while (param_4 != 0);
  return;
}


