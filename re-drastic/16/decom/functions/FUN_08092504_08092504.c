/*
 * Ghidra decompilation
 *
 * Function : FUN_08092504
 * Address  : 08092504
 * Program  : drastic16
 */


void FUN_08092504(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined in_q0 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined in_q3 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  do {
    puVar1 = (undefined4 *)0x300;
    puVar2 = (undefined4 *)0x310;
    lVar5 = 2;
    iVar3 = param_3;
    puVar4 = param_2;
    while( true ) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x308;
    puVar2 = (undefined4 *)0x318;
    lVar5 = 2;
    while( true ) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    puVar1 = (undefined4 *)0x320;
    puVar2 = (undefined4 *)0x330;
    lVar5 = 2;
    puVar4 = param_2;
    while( true ) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x328;
    puVar2 = (undefined4 *)0x338;
    lVar5 = 2;
    while( true ) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    auVar6 = VectorReciprocalEstimate(in_q1,1);
    auVar7 = VectorReciprocalEstimate(in_q3,1);
    auVar8 = VectorReciprocalStep(auVar6,in_q1);
    auVar9 = VectorReciprocalStep(auVar7,in_q3);
    auVar6 = FloatVectorMult(auVar6,auVar8,2,0x20);
    auVar7 = FloatVectorMult(auVar7,auVar9,2,0x20);
    auVar8 = VectorReciprocalStep(auVar6,in_q1);
    auVar9 = VectorReciprocalStep(auVar7,in_q3);
    auVar6 = FloatVectorMult(auVar6,auVar8,2,0x20);
    auVar7 = FloatVectorMult(auVar7,auVar9,2,0x20);
    auVar6 = FloatVectorMult(in_q0,auVar6,2,0x20);
    auVar7 = FloatVectorMult(in_q2,auVar7,2,0x20);
    auVar6 = FPToFixed(auVar6,0x20,0x20,0xf,0,3);
    in_q2 = FPToFixed(auVar7,0x20,0x20,0xf,0,3);
    in_q0._0_8_ = VectorCopyNarrow(auVar6,4);
    in_q0._8_8_ = VectorCopyNarrow(in_q2,4);
    *param_1 = in_q0._0_8_;
    param_1[1] = in_q0._8_8_;
    param_1 = param_1 + 2;
    param_3 = iVar3 + -8;
  } while (param_3 != 0 && 7 < iVar3);
  return;
}


