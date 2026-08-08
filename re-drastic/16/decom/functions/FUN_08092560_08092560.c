/*
 * Ghidra decompilation
 *
 * Function : FUN_08092560
 * Address  : 08092560
 * Program  : drastic16
 */


void FUN_08092560(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,
                 int param_5)

{
  bool bVar1;
  undefined auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  do {
    puVar5 = (undefined4 *)*param_1;
    param_1 = param_1 + 2;
    auVar2._4_4_ = *puVar5;
    auVar2._0_4_ = *puVar5;
    auVar2._8_8_ = 0;
    auVar2 = auVar2 & auVar2 << 0x40;
    uVar3 = (uint)*param_4;
    do {
      uVar7 = *param_3;
      puVar6 = param_3 + 1;
      param_3 = param_3 + 2;
      auVar8 = VectorCopyLong(uVar7,2,0);
      auVar9 = VectorCopyLong(*puVar6,2,0);
      auVar10 = VectorMultiply(0,auVar8._0_8_,4,0);
      auVar11 = VectorMultiply(0,auVar8._8_8_,4,0);
      auVar12 = VectorMultiply(0,auVar9._0_8_,4,0);
      auVar13 = VectorMultiply(0,auVar9._8_8_,4,0);
      auVar8._0_8_ = VectorShiftNarrowRight(auVar10,0xf);
      auVar8._8_8_ = VectorShiftNarrowRight(auVar11,0xf);
      auVar9._0_8_ = VectorShiftNarrowRight(auVar12,0xf);
      auVar9._8_8_ = VectorShiftNarrowRight(auVar13,0xf);
      auVar8 = VectorAdd(auVar8,auVar2,4);
      auVar9 = VectorAdd(auVar9,auVar2,4);
      *param_2 = auVar8._0_8_;
      param_2[1] = auVar8._8_8_;
      param_2[2] = auVar9._0_8_;
      param_2[3] = auVar9._8_8_;
      param_2 = param_2 + 4;
      uVar4 = uVar3 - 8;
      bVar1 = 7 < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_3 = (undefined8 *)((int)param_3 + uVar4 * 2);
    param_2 = (undefined8 *)((int)param_2 + uVar4 * 4);
    param_5 = param_5 + -1;
    param_4 = param_4 + 1;
  } while (param_5 != 0);
  return;
}


