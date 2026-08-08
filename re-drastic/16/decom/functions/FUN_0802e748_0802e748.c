/*
 * Ghidra decompilation
 *
 * Function : FUN_0802e748
 * Address  : 0802e748
 * Program  : drastic16
 */


uint FUN_0802e748(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  undefined auVar1 [32];
  undefined auVar2 [32];
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined (*pauVar10) [16];
  undefined uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined auVar26 [16];
  undefined in_q12 [16];
  undefined auVar27 [16];
  undefined in_q13 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined in_q14 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined in_q15 [16];
  undefined auVar32 [16];
  undefined auStack_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 auStack_158 [2];
  undefined4 auStack_150 [80];
  
  pauVar10 = &auStack_1a8;
  puVar5 = auStack_158;
  auVar23 = SIMDExpandImmediate(0,0xe,0x11);
  if (((uint)puVar5 & 8) != 0) {
    puVar5 = auStack_150;
  }
  auVar22 = SIMDExpandImmediate(0,0xe,0x1f);
  FUN_08090620(puVar5);
  puVar7 = puVar5 + 0x40;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  do {
    auVar24 = SIMDExpandImmediate(0,0xe,0xf);
    puVar3 = (undefined4 *)0x3c0;
    puVar4 = (undefined4 *)0x3d0;
    lVar13 = 2;
    puVar8 = puVar5;
    puVar6 = puVar5;
    while( true ) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3c8;
    puVar4 = (undefined4 *)0x3d8;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar6 = puVar5 + 8;
    puVar12 = puVar8 + 0x10;
    puVar9 = puVar8 + 0x18;
    puVar5 = puVar8 + 0x20;
    puVar3 = (undefined4 *)0x3a0;
    puVar4 = (undefined4 *)0x3b0;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar4 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3a8;
    puVar4 = (undefined4 *)0x3b8;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar4 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    auVar17 = auVar22 ^ in_q12;
    auVar18 = auVar22 ^ in_q13;
    uVar11 = puVar5 == puVar7;
    puVar3 = (undefined4 *)0x3e0;
    puVar4 = (undefined4 *)0x3f0;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3e8;
    puVar4 = (undefined4 *)0x3f8;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    auVar14 = VectorShiftRight(in_q14,4);
    auVar15 = VectorShiftRight(auVar22 ^ in_q14,4);
    auVar16 = VectorShiftLeft(auVar22 ^ in_q15,4,0x20,0);
    auVar25 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar21 = VectorShiftLeft(in_q15,4,0x20,0);
    auVar21 = auVar21 | in_q15;
    auVar15 = (auVar16 | auVar22 ^ in_q15) & auVar25 | (auVar15 | auVar22 ^ in_q14) & auVar24;
    auVar24 = (auVar14 | in_q14) & auVar24;
    *(longlong *)pauVar10 = auVar24._0_8_;
    *(longlong *)((int)pauVar10 + 8) = auVar24._8_8_;
    *(longlong *)((int)pauVar10 + 0x30) = SUB168(auVar22 ^ in_q10,0);
    *(longlong *)((int)pauVar10 + 0x38) = SUB168(auVar22 ^ in_q10,8);
    auVar14 = VectorShiftRight(auVar15,2);
    puVar3 = (undefined4 *)0x380;
    puVar4 = (undefined4 *)0x390;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x388;
    puVar4 = (undefined4 *)0x398;
    lVar13 = 2;
    while( true ) {
      *puVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    auVar16 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar32 = VectorShiftRight(auVar17,4);
    auVar20 = VectorShiftRight(auVar14 | auVar15,1);
    auVar14 = (auVar20 | auVar14 | auVar15) & auVar23;
    auVar20 = VectorShiftRight(auVar14,7);
    auVar20 = auVar20 | auVar14;
    auVar30 = VectorShiftRight(auVar20,0xe);
    auVar14 = SIMDExpandImmediate(0,0xe,0xf);
    auVar31 = VectorShiftRight(*pauVar10 | auVar21 & auVar16,2);
    auVar31 = auVar31 | *pauVar10 | auVar21 & auVar16;
    auVar21 = VectorShiftLeft(auVar18,4,0x20,0);
    auVar16 = VectorShiftRight(auVar31,1);
    auVar15 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar31 = (auVar16 | auVar31) & auVar23;
    auVar19 = VectorShiftRight(in_q12,4);
    auVar16 = VectorShiftLeft(in_q13,4,0x20,0);
    auVar14 = (auVar21 | auVar18) & auVar15 | (auVar32 | auVar17) & auVar14;
    auVar15 = VectorShiftRight(auVar31,7);
    auVar17 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar28 = VectorShiftRight(auVar14,2);
    auVar15 = auVar15 | auVar31;
    auVar27 = VectorShiftRight(in_q10,4);
    auVar18 = SIMDExpandImmediate(0,0xe,0xf);
    auVar28 = auVar28 | auVar14;
    auVar21 = VectorShiftRight(auVar15,0xe);
    auVar14 = SIMDExpandImmediate(0,0xe,0xf);
    auVar21 = auVar21 | auVar15;
    auVar29 = VectorShiftRight(auVar28,1);
    auVar31 = VectorShiftLeft(in_q11,4,0x20,0);
    auVar15 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar32 = VectorShiftRight(auVar25,4);
    auVar26 = VectorShiftLeft(auVar24,4,0x20,0);
    auVar28 = (auVar29 | auVar28) & auVar23;
    auVar16 = (auVar19 | in_q12) & auVar18 | (auVar16 | in_q13) & auVar17;
    auVar17 = SIMDExpandImmediate(0,0xe,0xf);
    auVar27 = (auVar27 | in_q10) & auVar14 | (auVar31 | in_q11) & auVar15;
    auVar19 = VectorShiftRight(auVar28,7);
    auVar19 = auVar19 | auVar28;
    auVar14 = (auVar32 | auVar25) & auVar17 | (auVar26 | auVar24) & auVar15;
    auVar31 = VectorShiftRight(pauVar10[3],4);
    auVar28 = VectorShiftRight(auVar19,0xe);
    auVar17 = SIMDExpandImmediate(0,0xe,0xf);
    auVar29 = VectorShiftLeft(auVar22 ^ in_q11,4,0x20,0);
    auVar15 = VectorShiftRight(auVar16,2);
    auVar18 = SIMDExpandImmediate(0,0xe,0xf0);
    auVar15 = auVar15 | auVar16;
    auVar26 = VectorShiftRight(auVar22 ^ auVar25,4);
    auVar32 = VectorShiftLeft(auVar22 ^ auVar24,4,0x20,0);
    auVar29 = (auVar29 | auVar22 ^ in_q11) & auVar18 | (auVar31 | pauVar10[3]) & auVar17;
    auVar16 = VectorShiftRight(auVar15,1);
    auVar17 = SIMDExpandImmediate(0,0xe,0xf);
    auVar31 = VectorShiftRight(auVar27,2);
    auVar31 = auVar31 | auVar27;
    auVar18 = (auVar32 | auVar22 ^ auVar24) & auVar18 | (auVar26 | auVar22 ^ auVar25) & auVar17;
    auVar32 = VectorShiftRight(auVar29,2);
    auVar17 = (auVar16 | auVar15) & auVar23;
    auVar25 = VectorShiftRight(auVar14,2);
    auVar32 = auVar32 | auVar29;
    auVar15 = VectorShiftRight(auVar18,2);
    auVar25 = auVar25 | auVar14;
    auVar24 = VectorShiftRight(auVar17,7);
    auVar15 = auVar15 | auVar18;
    auVar18 = VectorShiftRight(auVar31,1);
    auVar24 = auVar24 | auVar17;
    auVar17 = VectorShiftRight(auVar25,1);
    auVar26 = VectorShiftRight(auVar32,1);
    auVar14 = (auVar18 | auVar31) & auVar23;
    auVar18 = VectorShiftRight(auVar15,1);
    auVar25 = (auVar17 | auVar25) & auVar23;
    auVar16 = VectorShiftRight(auVar14,7);
    auVar32 = (auVar26 | auVar32) & auVar23;
    auVar17 = VectorShiftRight(auVar25,7);
    auVar16 = auVar16 | auVar14;
    auVar15 = (auVar18 | auVar15) & auVar23;
    auVar14 = VectorShiftRight(auVar24,0xe);
    auVar17 = auVar17 | auVar25;
    auVar18 = VectorShiftRight(auVar32,7);
    auVar14 = auVar14 | auVar24;
    auVar31 = VectorShiftRight(auVar15,7);
    auVar18 = auVar18 | auVar32;
    auVar24 = VectorShiftRight(auVar16,0xe);
    auVar31 = auVar31 | auVar15;
    auVar15 = VectorShiftRight(auVar17,0xe);
    auVar24 = auVar24 | auVar16;
    auVar25 = VectorShiftRight(auVar18,0xe);
    auVar15 = auVar15 | auVar17;
    auVar16 = VectorShiftRight(auVar31,0xe);
    in_q13 = (auVar28 | auVar19) & auVar14;
    auVar17._0_8_ = VectorCopyNarrow(auVar14,4);
    auVar17._8_8_ = VectorCopyNarrow(auVar21,4);
    in_q14._0_8_ = VectorCopyNarrow(auVar24,4);
    in_q14._8_8_ = VectorCopyNarrow(auVar15,4);
    in_q11 = pauVar10[1];
    in_q15 = auVar24 | auVar15 | auVar21;
    in_q12._0_8_ = VectorCopyNarrow(auVar17,2);
    in_q12._8_8_ = VectorCopyNarrow(in_q14,2);
    in_q10 = pauVar10[2] |
             (auVar30 | auVar20) & auVar21 | in_q13 | (auVar25 | auVar18) & auVar24 |
             (auVar16 | auVar31) & auVar15;
    *param_1 = in_q12._0_8_;
    param_1[1] = in_q12._8_8_;
    param_1 = param_1 + 2;
    in_q11 = in_q11 | in_q15 | auVar14;
    *(longlong *)pauVar10[2] = in_q10._0_8_;
    *(longlong *)(pauVar10[2] + 8) = in_q10._8_8_;
    *(longlong *)pauVar10[1] = in_q11._0_8_;
    *(longlong *)(pauVar10[1] + 8) = in_q11._8_8_;
  } while (!(bool)uVar11);
  auVar1._16_16_ = ZEXT816(0);
  auVar1._0_16_ = pauVar10[2];
  in_q10 = auVar1._8_16_ | in_q10;
  auVar2._16_16_ = ZEXT816(0);
  auVar2._0_16_ = in_q11;
  in_q11 = auVar2._8_16_ | in_q11;
  if ((in_q10._4_4_ | in_q10._0_4_) == 0) {
    if ((in_q11._4_4_ | in_q11._0_4_) != 0) {
      param_3 = param_3 | 0x10;
    }
  }
  else {
    param_3 = param_3 | 2;
  }
  return param_3;
}


