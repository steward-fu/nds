/*
 * Ghidra decompilation
 *
 * Function : FUN_08091348
 * Address  : 08091348
 * Program  : drastic16
 */


void FUN_08091348(undefined8 *param_1,int param_2,int param_3)

{
  bool bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = SIMDExpandImmediate(1,6,0xc0);
  puVar8 = (undefined4 *)(param_2 + 0x150);
  puVar4 = (undefined4 *)(param_2 + 0xe0);
  puVar7 = (ushort *)(param_2 + 0x3f0);
  do {
    uVar13 = CONCAT44(*puVar8,*puVar8);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    uVar3 = *puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    uVar9 = VectorCompareGreaterThan(0,uVar13,4);
    auVar11 = VectorShiftLongLeft(CONCAT44(uVar3,uVar3),0x1e);
    VectorCopyLong(uVar9 & uVar2,4,1);
    auVar10 = VectorMultiplyAccumulate
                        (uVar13,CONCAT44(*(undefined4 *)(&DAT_0aaec110 + (uint)*puVar7 * 4),
                                         *(undefined4 *)(&DAT_0aaec110 + (uint)*puVar7 * 4)),4,0);
    auVar12 = VectorAdd(auVar10,auVar10,8);
    auVar11._8_8_ = VectorAdd(auVar11._0_8_,auVar10._0_8_,8);
    auVar10 = VectorAdd(auVar11,auVar12,8);
    auVar12 = VectorAdd(auVar12,auVar12,8);
    uVar5 = (uint)*puVar7;
    do {
      uVar13 = VectorShiftNarrowRight(auVar11,0x1e);
      uVar14 = VectorShiftNarrowRight(auVar10,0x1e);
      auVar11 = VectorAdd(auVar11,auVar12,8);
      auVar10 = VectorAdd(auVar10,auVar12,8);
      *param_1 = uVar13;
      param_1[1] = uVar14;
      param_1 = param_1 + 2;
      uVar6 = uVar5 - 4;
      bVar1 = 3 < (int)uVar5;
      uVar5 = uVar6;
    } while (uVar6 != 0 && bVar1);
    param_1 = (undefined8 *)((int)param_1 + uVar6 * 4);
    param_3 = param_3 + -1;
    puVar7 = puVar7 + 2;
  } while (param_3 != 0);
  return;
}


