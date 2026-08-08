/*
 * Ghidra decompilation
 *
 * Function : FUN_08094220
 * Address  : 08094220
 * Program  : drastic16
 */


void FUN_08094220(undefined8 *param_1,undefined (*param_2) [16],int param_3)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  int iVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  do {
    auVar2 = *param_2;
    pauVar5 = param_2 + 1;
    pauVar3 = param_2 + 2;
    pauVar6 = param_2 + 3;
    param_2 = param_2 + 4;
    uVar7 = VectorShiftRightNarrow(auVar2,0xc,2,0);
    uVar7 = SatQ(uVar7,2,0);
    uVar8 = VectorShiftRightNarrow(*pauVar5,0xc,2,0);
    uVar8 = SatQ(uVar8,2,0);
    uVar9 = VectorShiftRightNarrow(*pauVar3,0xc,2,0);
    uVar9 = SatQ(uVar9,2,0);
    uVar10 = VectorShiftRightNarrow(*pauVar6,0xc,2,0);
    uVar10 = SatQ(uVar10,2,0);
    *param_1 = uVar7;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_1 = param_1 + 4;
    iVar4 = param_3 + -0x10;
    bVar1 = 0xf < param_3;
    param_3 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


