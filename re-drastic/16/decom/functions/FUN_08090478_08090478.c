/*
 * Ghidra decompilation
 *
 * Function : FUN_08090478
 * Address  : 08090478
 * Program  : drastic16
 */


void FUN_08090478(undefined *param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined in_q9 [16];
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  
  uVar14 = 0x8040201008040201;
  uVar15 = 0x8040201008040201;
  uVar10 = SIMDExpandImmediate(0,0xe,0xff);
  uVar5 = CONCAT11(param_4 + -0x40,param_4 + -0x40);
  uVar8 = CONCAT22(uVar5,uVar5);
  uVar11 = CONCAT44(uVar8,uVar8);
  uVar8 = SignedSaturate(param_3,8);
  SignedDoesSaturate(param_3,8);
  puVar1 = (undefined *)0x380;
  puVar2 = (undefined *)0x390;
  lVar9 = 8;
  while( true ) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined *)0x388;
  puVar2 = (undefined *)0x398;
  lVar9 = 8;
  while( true ) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  uVar3 = SignedSaturate(param_3 + -0x40,8);
  SignedDoesSaturate(param_3 + -0x40,8);
  auVar13 = VectorShiftRight(in_q9,7);
  uVar5 = CONCAT11((char)uVar8,(char)uVar8);
  uVar6 = CONCAT22(uVar5,uVar5);
  auVar4._8_8_ = uVar15;
  auVar4._0_8_ = uVar14;
  uVar5 = CONCAT11((char)uVar3,(char)uVar3);
  uVar7 = CONCAT22(uVar5,uVar5);
  uVar14 = VectorPairwiseAdd(SUB168(auVar13 & auVar4,0),SUB168(auVar13 & auVar4,8),1);
  uVar8 = SignedSaturate(param_3 + -0x80,8);
  SignedDoesSaturate(param_3 + -0x80,8);
  uVar3 = SignedSaturate(param_3 + -0xc0,8);
  SignedDoesSaturate(param_3 + -0xc0,8);
  uVar14 = VectorPairwiseAdd(uVar14,uVar14,1);
  uVar16 = VectorShiftLeft(uVar10,uVar11,8,1);
  uVar12 = VectorPairwiseAdd(uVar14,uVar14,1);
  uVar5 = CONCAT11((char)uVar8,(char)uVar8);
  uVar8 = CONCAT22(uVar5,uVar5);
  uVar12 = uVar12 & uVar16;
  uVar5 = CONCAT11((char)uVar3,(char)uVar3);
  uVar3 = CONCAT22(uVar5,uVar5);
  uVar10 = VectorShiftLeft(uVar12,CONCAT44(uVar6,uVar6),8,1);
  uVar11 = VectorShiftLeft(uVar12,CONCAT44(uVar7,uVar7),8,1);
  uVar14 = VectorShiftLeft(uVar12,CONCAT44(uVar8,uVar8),8,1);
  uVar15 = VectorShiftLeft(uVar12,CONCAT44(uVar3,uVar3),8,1);
  *param_2 = uVar10;
  param_2[1] = uVar11;
  param_2[2] = uVar14;
  param_2[3] = uVar15;
  return;
}


