/*
 * Ghidra decompilation
 *
 * Function : FUN_08090330
 * Address  : 08090330
 * Program  : drastic16
 */


void FUN_08090330(int param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined in_q9 [16];
  undefined auVar18 [16];
  undefined in_q10 [16];
  undefined auVar19 [16];
  undefined in_q11 [16];
  undefined auVar20 [16];
  undefined8 uVar21;
  ulonglong uVar22;
  undefined in_q12 [16];
  undefined auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  
  uVar25 = 0x8040201008040201;
  uVar26 = 0x8040201008040201;
  uVar16 = SIMDExpandImmediate(0,0xe,0xff);
  uVar7 = CONCAT11(param_4 + -0x40,param_4 + -0x40);
  uVar13 = CONCAT22(uVar7,uVar7);
  uVar17 = CONCAT44(uVar13,uVar13);
  puVar10 = (undefined *)(param_1 + 0x60);
  iVar11 = -0x20;
  puVar1 = (undefined *)0x3b0;
  puVar2 = (undefined *)0x3c0;
  lVar15 = 8;
  puVar14 = puVar10;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x3b8;
  puVar2 = (undefined *)0x3c8;
  lVar15 = 8;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar10 = puVar10 + iVar11;
  puVar1 = (undefined *)0x3a0;
  puVar2 = (undefined *)0x3b0;
  lVar15 = 8;
  puVar14 = puVar10;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x3a8;
  puVar2 = (undefined *)0x3b8;
  lVar15 = 8;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar10 = puVar10 + iVar11;
  auVar23 = VectorShiftRight(in_q12,7);
  uVar13 = SignedSaturate(param_3,8);
  SignedDoesSaturate(param_3,8);
  puVar1 = (undefined *)0x390;
  puVar2 = (undefined *)0x3a0;
  lVar15 = 8;
  puVar14 = puVar10;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x398;
  puVar2 = (undefined *)0x3a8;
  lVar15 = 8;
  while( true ) {
    *puVar1 = *puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar14;
    puVar14 = puVar14 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar10 = puVar10 + iVar11;
  auVar20 = VectorShiftRight(in_q11,7);
  uVar12 = SignedSaturate(param_3 + -0x40,8);
  SignedDoesSaturate(param_3 + -0x40,8);
  puVar1 = (undefined *)0x380;
  puVar2 = (undefined *)0x390;
  lVar15 = 8;
  while( true ) {
    *puVar1 = *puVar10;
    puVar10 = puVar10 + 1;
    *puVar2 = *puVar10;
    puVar10 = puVar10 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x388;
  puVar2 = (undefined *)0x398;
  lVar15 = 8;
  while( true ) {
    *puVar1 = *puVar10;
    puVar10 = puVar10 + 1;
    *puVar2 = *puVar10;
    puVar10 = puVar10 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  auVar19 = VectorShiftRight(in_q10,7);
  uVar7 = CONCAT11((char)uVar13,(char)uVar13);
  uVar8 = CONCAT22(uVar7,uVar7);
  auVar18 = VectorShiftRight(in_q9,7);
  uVar7 = CONCAT11((char)uVar12,(char)uVar12);
  uVar9 = CONCAT22(uVar7,uVar7);
  auVar3._8_8_ = uVar26;
  auVar3._0_8_ = uVar25;
  auVar4._8_8_ = uVar26;
  auVar4._0_8_ = uVar25;
  auVar5._8_8_ = uVar26;
  auVar5._0_8_ = uVar25;
  uVar13 = SignedSaturate(param_3 + -0x80,8);
  SignedDoesSaturate(param_3 + -0x80,8);
  auVar6._8_8_ = uVar26;
  auVar6._0_8_ = uVar25;
  uVar12 = SignedSaturate(param_3 + -0xc0,8);
  SignedDoesSaturate(param_3 + -0xc0,8);
  uVar24 = VectorPairwiseAdd(SUB168(auVar23 & auVar3,0),SUB168(auVar23 & auVar3,8),1);
  uVar21 = VectorPairwiseAdd(SUB168(auVar20 & auVar4,0),SUB168(auVar20 & auVar4,8),1);
  uVar26 = VectorPairwiseAdd(SUB168(auVar19 & auVar5,0),SUB168(auVar19 & auVar5,8),1);
  uVar25 = VectorPairwiseAdd(SUB168(auVar18 & auVar6,0),SUB168(auVar18 & auVar6,8),1);
  uVar21 = VectorPairwiseAdd(uVar21,uVar24,1);
  uVar25 = VectorPairwiseAdd(uVar25,uVar26,1);
  uVar27 = VectorShiftLeft(uVar16,uVar17,8,1);
  uVar22 = VectorPairwiseAdd(uVar25,uVar21,1);
  uVar7 = CONCAT11((char)uVar13,(char)uVar13);
  uVar13 = CONCAT22(uVar7,uVar7);
  uVar22 = uVar22 & uVar27;
  uVar7 = CONCAT11((char)uVar12,(char)uVar12);
  uVar12 = CONCAT22(uVar7,uVar7);
  uVar16 = VectorShiftLeft(uVar22,CONCAT44(uVar8,uVar8),8,1);
  uVar17 = VectorShiftLeft(uVar22,CONCAT44(uVar9,uVar9),8,1);
  uVar25 = VectorShiftLeft(uVar22,CONCAT44(uVar13,uVar13),8,1);
  uVar26 = VectorShiftLeft(uVar22,CONCAT44(uVar12,uVar12),8,1);
  *param_2 = uVar16;
  param_2[1] = uVar17;
  param_2[2] = uVar25;
  param_2[3] = uVar26;
  return;
}


