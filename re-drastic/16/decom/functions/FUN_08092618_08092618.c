/*
 * Ghidra decompilation
 *
 * Function : FUN_08092618
 * Address  : 08092618
 * Program  : drastic16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08092618(int *param_1,int param_2,undefined8 *param_3,byte *param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined auVar8 [16];
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined auVar20 [16];
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  ulonglong uVar25;
  
  auVar8 = _DAT_08092600;
  puVar14 = (undefined2 *)(param_2 + 0x1c0);
  puVar10 = (undefined2 *)(param_2 + 0x2a0);
  puVar9 = (undefined2 *)(param_2 + 0x380);
  uVar3 = SIMDExpandImmediate(0,10,8);
  do {
    iVar11 = *param_1;
    piVar2 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar4 = *(undefined2 *)(iVar11 + 10);
    uVar5 = CONCAT22(uVar4,uVar4);
    auVar17._4_4_ = uVar5;
    auVar17._0_4_ = uVar5;
    uVar4 = *(undefined2 *)(*piVar2 + 10);
    uVar5 = CONCAT22(uVar4,uVar4);
    auVar17._12_4_ = uVar5;
    auVar17._8_4_ = uVar5;
    uVar5 = *(undefined4 *)(iVar11 + 0xb);
    uVar18 = CONCAT44(uVar5,uVar5);
    uVar5 = *(undefined4 *)(*piVar2 + 0xb);
    auVar20._8_8_ = 0x7c0003e0001f;
    auVar20._0_8_ = 0x7c0003e0001f;
    auVar17 = auVar17 & auVar20;
    uVar19 = VectorSub(CONCAT44(uVar5,uVar5),uVar18,2);
    auVar20 = VectorCompareGreaterThan(auVar17,0,2);
    uVar25 = VectorCompareGreaterThan(uVar19,0,2);
    auVar22._0_8_ = VectorShiftLeft(auVar17._0_8_,0xfff7fffc0001,2,0);
    auVar22._8_8_ = VectorShiftLeft(auVar17._8_8_,0xfff7fffc0001,2,0);
    auVar17 = VectorShiftLongLeft(uVar18,0xf);
    auVar20 = VectorSub(auVar22,auVar20,2);
    uVar18 = VectorSub(auVar20._8_8_,auVar20._0_8_,2);
    auVar20 = VectorShiftLongLeft(auVar20._0_8_,0xf);
    uVar18 = VectorShiftLeft(uVar18,3,0x10,0);
    auVar20 = VectorShiftLeft(auVar20,3,0x20,0);
    VectorAdd(auVar17,uVar25 & uVar3,2,1);
    VectorAdd(auVar20,auVar8,4);
    uVar12 = (uint)*param_4;
    do {
      uVar21 = *param_3;
      param_3 = param_3 + 1;
      uVar5 = VectorGetElement(uVar19,0,2,0);
      auVar20 = VectorMultiplyAccumulate(uVar21,uVar5,2,0);
      uVar5 = VectorGetElement(uVar19,1,2,0);
      auVar17 = VectorMultiplyAccumulate(uVar21,uVar5,2,0);
      uVar5 = VectorGetElement(uVar18,0,2,0);
      auVar22 = VectorMultiplyAccumulate(uVar21,uVar5,2,0);
      uVar5 = VectorGetElement(uVar18,1,2,0);
      auVar23 = VectorMultiplyAccumulate(uVar21,uVar5,2,0);
      uVar5 = VectorGetElement(uVar18,2,2,0);
      auVar24 = VectorMultiplyAccumulate(uVar21,uVar5,2,0);
      VectorShiftNarrowRight(auVar20,0xf);
      VectorShiftNarrowRight(auVar17,0xf);
      VectorShiftNarrowRight(auVar22,0xf);
      VectorShiftNarrowRight(auVar23,0xf);
      VectorShiftNarrowRight(auVar24,0xf);
      puVar6 = (undefined2 *)0x390;
      puVar7 = (undefined2 *)0x398;
      lVar16 = 4;
      puVar15 = puVar14;
      while( true ) {
        *puVar15 = *puVar6;
        puVar15[1] = *puVar7;
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar14 = puVar14 + 8;
      puVar6 = (undefined2 *)0x3a0;
      puVar7 = (undefined2 *)0x3a8;
      lVar16 = 4;
      puVar15 = puVar10;
      while( true ) {
        *puVar15 = *puVar6;
        puVar15[1] = *puVar7;
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar10 = puVar10 + 8;
      puVar6 = (undefined2 *)0x3b0;
      puVar7 = (undefined2 *)0x3b8;
      lVar16 = 4;
      puVar15 = puVar9;
      while( true ) {
        *puVar15 = *puVar6;
        puVar15[1] = *puVar7;
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar9 = puVar9 + 8;
      uVar13 = uVar12 - 4;
      bVar1 = 3 < (int)uVar12;
      uVar12 = uVar13;
    } while (uVar13 != 0 && bVar1);
    puVar14 = puVar14 + uVar13 * 2;
    puVar10 = puVar10 + uVar13 * 2;
    puVar9 = puVar9 + uVar13 * 2;
    param_3 = (undefined8 *)((int)param_3 + uVar13 * 2);
    param_5 = param_5 + -1;
    param_4 = param_4 + 1;
  } while (param_5 != 0);
  return;
}


