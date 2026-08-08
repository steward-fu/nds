/*
 * Ghidra decompilation
 *
 * Function : FUN_08092900
 * Address  : 08092900
 * Program  : drastic16
 */


void FUN_08092900(undefined (*param_1) [16],int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  longlong lVar15;
  undefined in_q0 [16];
  undefined auVar16 [16];
  undefined in_q1 [16];
  undefined in_q2 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined in_q3 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined in_q4 [16];
  undefined in_q5 [16];
  undefined auVar23 [16];
  undefined in_q6 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined in_q7 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined2 *puVar14;
  
  pauVar4 = param_1 + 0x1c;
  pauVar5 = param_1 + 0x2a;
  pauVar6 = param_1 + 0x38;
  pauVar9 = param_1 + 0xe;
  pauVar7 = param_1 + 7;
  pauVar8 = param_1 + 0x23;
  pauVar11 = param_1 + 0x31;
  pauVar12 = param_1 + 0x3f;
  pauVar10 = param_1 + 0x15;
  auVar30 = SIMDExpandImmediate(0,10,1);
  do {
    puVar1 = (undefined2 *)0x300;
    puVar2 = (undefined2 *)0x310;
    lVar15 = 4;
    iVar3 = param_2;
    pauVar13 = pauVar6;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x308;
    puVar2 = (undefined2 *)0x318;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x320;
    puVar2 = (undefined2 *)0x330;
    lVar15 = 4;
    pauVar13 = pauVar12;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x328;
    puVar2 = (undefined2 *)0x338;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar17 = SIMDExpandImmediate(1,0xb,0x80);
    auVar16 = in_q0 & ~auVar17;
    auVar17 = SIMDExpandImmediate(1,0xb,0x80);
    auVar17 = in_q2 & ~auVar17;
    puVar1 = (undefined2 *)0x340;
    puVar2 = (undefined2 *)0x350;
    lVar15 = 4;
    pauVar13 = pauVar4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x348;
    puVar2 = (undefined2 *)0x358;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x360;
    puVar2 = (undefined2 *)0x370;
    lVar15 = 4;
    pauVar13 = pauVar8;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x368;
    puVar2 = (undefined2 *)0x378;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar27 = VectorCompareGreaterThanOrEqual(auVar16,auVar17,2,1);
    auVar18 = auVar17 ^ auVar27 & (auVar16 ^ auVar17);
    auVar20 = in_q3 ^ auVar27 & (in_q1 ^ in_q3);
    auVar24 = in_q6 ^ auVar27 & (in_q4 ^ in_q6);
    auVar26 = in_q7 ^ auVar27 & (in_q5 ^ in_q7);
    auVar17 = VectorMin(auVar16 ^ auVar17 ^ auVar18,auVar30,2,1);
    auVar16 = VectorMin(auVar18,auVar30,2,1);
    auVar18 = in_q4 ^ in_q6 ^ auVar24;
    auVar23 = in_q5 ^ in_q7 ^ auVar26;
    VectorSub(auVar16,auVar17,2);
    VectorSub(auVar20,in_q1 ^ in_q3 ^ auVar20,2);
    auVar17 = VectorSub(auVar24,auVar18,2);
    auVar16 = VectorSub(auVar26,auVar23,2);
    puVar1 = (undefined2 *)0x300;
    puVar2 = (undefined2 *)0x310;
    lVar15 = 4;
    pauVar13 = pauVar6;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x308;
    puVar2 = (undefined2 *)0x318;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar6 = pauVar6 + 2;
    puVar1 = (undefined2 *)0x320;
    puVar2 = (undefined2 *)0x330;
    lVar15 = 4;
    pauVar13 = pauVar12;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x328;
    puVar2 = (undefined2 *)0x338;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar12 = pauVar12 + 2;
    puVar1 = (undefined2 *)0x340;
    puVar2 = (undefined2 *)0x350;
    lVar15 = 4;
    pauVar13 = pauVar4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x348;
    puVar2 = (undefined2 *)0x358;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar4 = pauVar4 + 2;
    puVar1 = (undefined2 *)0x360;
    puVar2 = (undefined2 *)0x370;
    lVar15 = 4;
    pauVar13 = pauVar8;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x368;
    puVar2 = (undefined2 *)0x378;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar8 = pauVar8 + 2;
    auVar20 = *param_1;
    auVar24 = param_1[1];
    auVar26 = *pauVar7;
    auVar21 = pauVar7[1];
    puVar1 = (undefined2 *)0x340;
    puVar2 = (undefined2 *)0x350;
    lVar15 = 4;
    pauVar13 = pauVar5;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x348;
    puVar2 = (undefined2 *)0x358;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x360;
    puVar2 = (undefined2 *)0x370;
    lVar15 = 4;
    pauVar13 = pauVar11;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x368;
    puVar2 = (undefined2 *)0x378;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *(undefined2 *)*pauVar13;
      puVar14 = (undefined2 *)((int)*pauVar13 + 2);
      *puVar2 = *puVar14;
      pauVar13 = (undefined (*) [16])(puVar14 + 1);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    auVar28 = VectorCopyLong(auVar27._0_8_,2,0);
    auVar29 = VectorCopyLong(auVar27._8_8_,2,0);
    auVar19 = auVar26 ^ auVar28 & (auVar20 ^ auVar26);
    auVar22 = auVar21 ^ auVar29 & (auVar24 ^ auVar21);
    auVar25 = auVar17 ^ auVar27 & (auVar18 ^ auVar17);
    auVar27 = auVar16 ^ auVar27 & (auVar23 ^ auVar16);
    auVar20 = auVar20 ^ auVar26 ^ auVar19;
    auVar24 = auVar24 ^ auVar21 ^ auVar22;
    in_q4 = auVar18 ^ auVar17 ^ auVar25;
    in_q5 = auVar23 ^ auVar16 ^ auVar27;
    auVar17 = VectorSub(auVar19,auVar20,4);
    auVar16 = VectorSub(auVar22,auVar24,4);
    in_q6 = VectorSub(auVar25,in_q4,2);
    in_q7 = VectorSub(auVar27,in_q5,2);
    *(longlong *)*param_1 = auVar20._0_8_;
    *(longlong *)(*param_1 + 8) = auVar20._8_8_;
    *(longlong *)param_1[1] = auVar24._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar24._8_8_;
    param_1 = param_1 + 2;
    *(longlong *)*pauVar7 = auVar17._0_8_;
    *(longlong *)(*pauVar7 + 8) = auVar17._8_8_;
    *(longlong *)pauVar7[1] = auVar16._0_8_;
    *(longlong *)(pauVar7[1] + 8) = auVar16._8_8_;
    pauVar7 = pauVar7 + 2;
    puVar1 = (undefined2 *)0x340;
    puVar2 = (undefined2 *)0x350;
    lVar15 = 4;
    pauVar13 = pauVar5;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x348;
    puVar2 = (undefined2 *)0x358;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar5 = pauVar5 + 2;
    puVar1 = (undefined2 *)0x360;
    puVar2 = (undefined2 *)0x370;
    lVar15 = 4;
    pauVar13 = pauVar11;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined2 *)0x368;
    puVar2 = (undefined2 *)0x378;
    lVar15 = 4;
    while( true ) {
      *(undefined2 *)*pauVar13 = *puVar1;
      *(undefined2 *)((int)*pauVar13 + 2) = *puVar2;
      pauVar13 = (undefined (*) [16])((int)*pauVar13 + 4);
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    pauVar11 = pauVar11 + 2;
    auVar17 = *pauVar9 ^ *pauVar10;
    auVar16 = pauVar9[1] ^ pauVar10[1];
    auVar18 = *pauVar10 ^ auVar28 & auVar17;
    auVar20 = pauVar10[1] ^ auVar29 & auVar16;
    in_q0 = auVar17 ^ auVar18;
    in_q1 = auVar16 ^ auVar20;
    in_q2 = VectorSub(auVar18,in_q0,4);
    in_q3 = VectorSub(auVar20,in_q1,4);
    *(longlong *)*pauVar9 = in_q0._0_8_;
    *(longlong *)(*pauVar9 + 8) = in_q0._8_8_;
    *(longlong *)pauVar9[1] = in_q1._0_8_;
    *(longlong *)(pauVar9[1] + 8) = in_q1._8_8_;
    pauVar9 = pauVar9 + 2;
    *(longlong *)*pauVar10 = in_q2._0_8_;
    *(longlong *)(*pauVar10 + 8) = in_q2._8_8_;
    *(longlong *)pauVar10[1] = in_q3._0_8_;
    *(longlong *)(pauVar10[1] + 8) = in_q3._8_8_;
    pauVar10 = pauVar10 + 2;
    param_2 = iVar3 + -8;
  } while (param_2 != 0 && 7 < iVar3);
  return;
}


