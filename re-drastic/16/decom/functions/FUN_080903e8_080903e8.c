/*
 * Ghidra decompilation
 *
 * Function : FUN_080903e8
 * Address  : 080903e8
 * Program  : drastic16
 */


void FUN_080903e8(int param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined in_q9 [16];
  undefined auVar17 [16];
  undefined in_q10 [16];
  undefined auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  
  uVar19 = 0x8040201008040201;
  uVar20 = 0x8040201008040201;
  uVar14 = SIMDExpandImmediate(0,0xe,0xff);
  uVar6 = CONCAT11(param_4 + -0x40,param_4 + -0x40);
  uVar11 = CONCAT22(uVar6,uVar6);
  uVar15 = CONCAT44(uVar11,uVar11);
  puVar9 = (undefined *)(param_1 + 0x20);
  iVar10 = -0x20;
  uVar11 = SignedSaturate(param_3,8);
  SignedDoesSaturate(param_3,8);
  puVar1 = (undefined *)0x390;
  puVar2 = (undefined *)0x3a0;
  lVar13 = 8;
  puVar12 = puVar9;
  while( true ) {
    *puVar1 = *puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar12;
    puVar12 = puVar12 + 1;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x398;
  puVar2 = (undefined *)0x3a8;
  lVar13 = 8;
  while( true ) {
    *puVar1 = *puVar12;
    puVar12 = puVar12 + 1;
    *puVar2 = *puVar12;
    puVar12 = puVar12 + 1;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar9 = puVar9 + iVar10;
  iVar10 = param_3 + -0x40;
  puVar1 = (undefined *)0x380;
  puVar2 = (undefined *)0x390;
  lVar13 = 8;
  while( true ) {
    *puVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar9;
    puVar9 = puVar9 + 1;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x388;
  puVar2 = (undefined *)0x398;
  lVar13 = 8;
  while( true ) {
    *puVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar9;
    puVar9 = puVar9 + 1;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  uVar3 = SignedSaturate(iVar10,8);
  SignedDoesSaturate(iVar10,8);
  auVar18 = VectorShiftRight(in_q10,7);
  uVar6 = CONCAT11((char)uVar11,(char)uVar11);
  uVar7 = CONCAT22(uVar6,uVar6);
  auVar17 = VectorShiftRight(in_q9,7);
  uVar6 = CONCAT11((char)uVar3,(char)uVar3);
  uVar8 = CONCAT22(uVar6,uVar6);
  auVar4._8_8_ = uVar20;
  auVar4._0_8_ = uVar19;
  auVar5._8_8_ = uVar20;
  auVar5._0_8_ = uVar19;
  uVar20 = VectorPairwiseAdd(SUB168(auVar18 & auVar4,0),SUB168(auVar18 & auVar4,8),1);
  uVar11 = SignedSaturate(param_3 + -0x80,8);
  SignedDoesSaturate(param_3 + -0x80,8);
  uVar19 = VectorPairwiseAdd(SUB168(auVar17 & auVar5,0),SUB168(auVar17 & auVar5,8),1);
  uVar3 = SignedSaturate(param_3 + -0xc0,8);
  SignedDoesSaturate(param_3 + -0xc0,8);
  uVar19 = VectorPairwiseAdd(uVar19,uVar20,1);
  uVar21 = VectorShiftLeft(uVar14,uVar15,8,1);
  uVar16 = VectorPairwiseAdd(uVar19,uVar19,1);
  uVar6 = CONCAT11((char)uVar11,(char)uVar11);
  uVar11 = CONCAT22(uVar6,uVar6);
  uVar16 = uVar16 & uVar21;
  uVar6 = CONCAT11((char)uVar3,(char)uVar3);
  uVar3 = CONCAT22(uVar6,uVar6);
  uVar14 = VectorShiftLeft(uVar16,CONCAT44(uVar7,uVar7),8,1);
  uVar15 = VectorShiftLeft(uVar16,CONCAT44(uVar8,uVar8),8,1);
  uVar19 = VectorShiftLeft(uVar16,CONCAT44(uVar11,uVar11),8,1);
  uVar20 = VectorShiftLeft(uVar16,CONCAT44(uVar3,uVar3),8,1);
  *param_2 = uVar14;
  param_2[1] = uVar15;
  param_2[2] = uVar19;
  param_2[3] = uVar20;
  return;
}


