/*
 * Ghidra decompilation
 *
 * Function : FUN_08091cbc
 * Address  : 08091cbc
 * Program  : drastic16
 */


void FUN_08091cbc(undefined8 *param_1,undefined2 *param_2,int param_3,short param_4,short param_5,
                 undefined8 *param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined in_q0 [16];
  undefined auVar8 [16];
  undefined in_q1 [16];
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined in_q4 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  puVar5 = &uStack_14;
  uStack_14 = in_q4._0_8_;
  uStack_c = in_q4._8_8_;
  uVar9 = CONCAT44(CONCAT22(param_4,param_4),CONCAT22(param_4,param_4));
  auVar10 = ZEXT816(0);
  uVar3 = CONCAT22(param_4 + -1,param_4 + -1);
  auVar13._4_4_ = uVar3;
  auVar13._0_4_ = uVar3;
  auVar13._8_8_ = 0;
  auVar13 = auVar13 & auVar13 << 0x40;
  auVar15._4_4_ = CONCAT22(param_5,param_5);
  auVar15._0_4_ = CONCAT22(param_5,param_5);
  auVar15._8_8_ = 0;
  uVar3 = CONCAT22(param_5 + -1,param_5 + -1);
  auVar14._4_4_ = uVar3;
  auVar14._0_4_ = uVar3;
  auVar14._8_8_ = 0;
  auVar14 = auVar14 & auVar14 << 0x40;
  auVar15 = auVar15 & auVar15 << 0x40 & ~auVar14;
  do {
    puVar1 = (undefined2 *)0x300;
    puVar2 = (undefined2 *)0x310;
    lVar7 = 4;
    iVar4 = param_3;
    puVar6 = param_2;
    while( true ) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x308;
    puVar2 = (undefined2 *)0x318;
    lVar7 = 4;
    while( true ) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 0x10;
    uVar11 = *param_6;
    param_6 = param_6 + 1;
    auVar8 = VectorMax(auVar10,in_q0,2,0);
    auVar16 = VectorTest(in_q1,auVar15);
    auVar12 = VectorCopyLong(uVar11,1,0);
    auVar8 = VectorMin(auVar8,auVar13,2,0);
    in_q0 = auVar8 & auVar12;
    in_q1 = (in_q1 ^ auVar16) & auVar14 & auVar12;
    VectorCopyLong(in_q0._0_8_,2,1);
    VectorCopyLong(in_q0._8_8_,2,1);
    auVar8 = VectorMultiplyAccumulate(in_q1._0_8_,uVar9,2,1);
    auVar12 = VectorMultiplyAccumulate(in_q1._8_8_,uVar9,2,1);
    *param_1 = auVar8._0_8_;
    param_1[1] = auVar8._8_8_;
    param_1[2] = auVar12._0_8_;
    param_1[3] = auVar12._8_8_;
    param_1 = param_1 + 4;
    param_3 = iVar4 + -8;
  } while (param_3 != 0 && 7 < iVar4);
                    /* WARNING: Could not recover jumptable at 0x08091d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)puVar5 + 0x10))(in_q0._0_4_);
  return;
}


