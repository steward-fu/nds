/*
 * Ghidra decompilation
 *
 * Function : FUN_080911b8
 * Address  : 080911b8
 * Program  : drastic16
 */


void FUN_080911b8(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined in_q0 [16];
  undefined8 in_d2;
  undefined8 in_d3;
  undefined in_q2 [16];
  undefined in_q3 [16];
  undefined in_q4 [16];
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined in_q6 [16];
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  do {
    puVar1 = (undefined4 *)0x300;
    puVar2 = (undefined4 *)0x310;
    lVar6 = 2;
    iVar4 = param_3;
    puVar5 = param_2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x308;
    puVar2 = (undefined4 *)0x318;
    lVar6 = 2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    puVar1 = (undefined4 *)0x320;
    puVar2 = (undefined4 *)0x330;
    lVar6 = 2;
    puVar5 = param_2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x328;
    puVar2 = (undefined4 *)0x338;
    lVar6 = 2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    puVar1 = (undefined4 *)0x340;
    puVar2 = (undefined4 *)0x350;
    lVar6 = 2;
    puVar5 = param_2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x348;
    puVar2 = (undefined4 *)0x358;
    lVar6 = 2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    auVar7._8_8_ = in_d3;
    auVar7._0_8_ = in_d2;
    auVar7 = VectorReciprocalEstimate(auVar7,1);
    puVar1 = (undefined4 *)0x360;
    puVar2 = (undefined4 *)0x370;
    lVar6 = 2;
    puVar5 = param_2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x368;
    puVar2 = (undefined4 *)0x378;
    lVar6 = 2;
    while( true ) {
      *puVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_2 = param_2 + 8;
    auVar8 = VectorReciprocalEstimate(in_q3,1);
    auVar9._8_8_ = unaff_d11;
    auVar9._0_8_ = unaff_d10;
    auVar9 = VectorReciprocalEstimate(auVar9,1);
    auVar12._8_8_ = unaff_d15;
    auVar12._0_8_ = unaff_d14;
    auVar10 = VectorReciprocalEstimate(auVar12,1);
    auVar11._8_8_ = in_d3;
    auVar11._0_8_ = in_d2;
    auVar11 = VectorReciprocalStep(auVar7,auVar11);
    auVar12 = VectorReciprocalStep(auVar8,in_q3);
    auVar13._8_8_ = unaff_d11;
    auVar13._0_8_ = unaff_d10;
    auVar13 = VectorReciprocalStep(auVar9,auVar13);
    auVar14._8_8_ = unaff_d15;
    auVar14._0_8_ = unaff_d14;
    auVar14 = VectorReciprocalStep(auVar10,auVar14);
    auVar7 = FloatVectorMult(auVar7,auVar11,2,0x20);
    auVar11 = FloatVectorMult(auVar8,auVar12,2,0x20);
    auVar9 = FloatVectorMult(auVar9,auVar13,2,0x20);
    auVar13 = FloatVectorMult(auVar10,auVar14,2,0x20);
    auVar8._8_8_ = in_d3;
    auVar8._0_8_ = in_d2;
    auVar8 = VectorReciprocalStep(auVar7,auVar8);
    auVar12 = VectorReciprocalStep(auVar11,in_q3);
    auVar10._8_8_ = unaff_d11;
    auVar10._0_8_ = unaff_d10;
    auVar10 = VectorReciprocalStep(auVar9,auVar10);
    auVar3._8_8_ = unaff_d15;
    auVar3._0_8_ = unaff_d14;
    auVar14 = VectorReciprocalStep(auVar13,auVar3);
    auVar7 = FloatVectorMult(auVar7,auVar8,2,0x20);
    auVar11 = FloatVectorMult(auVar11,auVar12,2,0x20);
    auVar8 = FloatVectorMult(auVar9,auVar10,2,0x20);
    auVar9 = FloatVectorMult(auVar13,auVar14,2,0x20);
    auVar7 = FloatVectorMult(in_q0,auVar7,2,0x20);
    auVar11 = FloatVectorMult(in_q2,auVar11,2,0x20);
    auVar8 = FloatVectorMult(in_q4,auVar8,2,0x20);
    auVar9 = FloatVectorMult(in_q6,auVar9,2,0x20);
    auVar7 = FPToFixed(auVar7,0x20,0x20,0xf,0,3);
    in_q2 = FPToFixed(auVar11,0x20,0x20,0xf,0,3);
    in_q4 = FPToFixed(auVar8,0x20,0x20,0xf,0,3);
    in_q6 = FPToFixed(auVar9,0x20,0x20,0xf,0,3);
    in_q0._0_8_ = VectorCopyNarrow(auVar7,4);
    in_q0._8_8_ = VectorCopyNarrow(in_q2,4);
    in_d2 = VectorCopyNarrow(in_q4,4);
    in_d3 = VectorCopyNarrow(in_q6,4);
    *param_1 = in_q0._0_8_;
    param_1[1] = in_q0._8_8_;
    param_1[2] = in_d2;
    param_1[3] = in_d3;
    param_1 = param_1 + 4;
    param_3 = iVar4 + -0x10;
  } while (param_3 != 0 && 0xf < iVar4);
  return;
}


