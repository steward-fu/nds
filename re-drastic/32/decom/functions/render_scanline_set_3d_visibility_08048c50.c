/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_3d_visibility
 * Address  : 08048c50
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x08048c88) */
/* WARNING: Unknown calling convention */

u32 render_scanline_set_3d_visibility(u8 *bg_visibility_3d,u32 *layer_buffer_3d)

{
  undefined auVar1 [32];
  undefined auVar2 [32];
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  u32 uVar6;
  u64 *puVar7;
  u64 *puVar8;
  u8 *aligned_storage;
  u64 *puVar9;
  int *piVar10;
  u64 *puVar11;
  undefined (*pauVar12) [16];
  u64 *puVar13;
  undefined uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined in_q9 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined in_q10 [16];
  undefined auVar26 [16];
  undefined in_q11 [16];
  undefined auVar27 [16];
  undefined in_q12 [16];
  undefined auVar28 [16];
  undefined in_q13 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined in_q14 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined in_q15 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auStack_190 [32];
  undefined8 local_170;
  undefined8 local_168;
  u64 _aligned_storage [33];
  
  piVar10 = &__stack_chk_guard;
  pauVar12 = (undefined (*) [16])auStack_190;
  auVar21 = SIMDExpandImmediate(0,0xe,0xf0);
  puVar9 = _aligned_storage;
  auVar20 = SIMDExpandImmediate(0,0xe,0xf);
  auVar19 = SIMDExpandImmediate(0,0xe,0x1f);
  render_scanline_gather_3d_alpha(puVar9);
  auVar18 = ZEXT816(0);
  puVar13 = _aligned_storage + 0x20;
  local_170 = 0;
  local_168 = 0;
  auVar17 = auVar18;
  do {
    puVar11 = puVar9 + 4;
    puVar8 = puVar9 + 0xc;
    puVar3 = (undefined4 *)0x3c0;
    puVar4 = (undefined4 *)0x3d0;
    lVar16 = 2;
    puVar7 = puVar9;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar7;
      puVar15 = (undefined4 *)((int)puVar7 + 4);
      *puVar4 = *puVar15;
      puVar7 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3c8;
    puVar4 = (undefined4 *)0x3d8;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar7;
      puVar15 = (undefined4 *)((int)puVar7 + 4);
      *puVar4 = *puVar15;
      puVar7 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar7 = puVar9 + 8;
    puVar9 = puVar9 + 0x10;
    puVar3 = (undefined4 *)0x3e0;
    puVar4 = (undefined4 *)0x3f0;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar11;
      puVar15 = (undefined4 *)((int)puVar11 + 4);
      *puVar4 = *puVar15;
      puVar11 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3e8;
    puVar4 = (undefined4 *)0x3f8;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar11;
      puVar15 = (undefined4 *)((int)puVar11 + 4);
      *puVar4 = *puVar15;
      puVar11 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar14 = puVar13 == puVar9;
    puVar3 = (undefined4 *)0x380;
    puVar4 = (undefined4 *)0x390;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar8;
      puVar15 = (undefined4 *)((int)puVar8 + 4);
      *puVar4 = *puVar15;
      puVar8 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x388;
    puVar4 = (undefined4 *)0x398;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar8;
      puVar15 = (undefined4 *)((int)puVar8 + 4);
      *puVar4 = *puVar15;
      puVar8 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3a0;
    puVar4 = (undefined4 *)0x3b0;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar7;
      puVar15 = (undefined4 *)((int)puVar7 + 4);
      *puVar4 = *puVar15;
      puVar7 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)0x3a8;
    puVar4 = (undefined4 *)0x3b8;
    lVar16 = 2;
    while( true ) {
      *puVar3 = *(undefined4 *)puVar7;
      puVar15 = (undefined4 *)((int)puVar7 + 4);
      *puVar4 = *puVar15;
      puVar7 = (u64 *)(puVar15 + 1);
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(longlong *)*pauVar12 = auVar17._0_8_;
    *(longlong *)(*pauVar12 + 8) = auVar17._8_8_;
    *(longlong *)pauVar12[1] = in_q9._0_8_;
    *(longlong *)(pauVar12[1] + 8) = in_q9._8_8_;
    auVar23 = VectorShiftRight(auVar19 ^ in_q14,4);
    auVar22 = VectorShiftLeft(auVar19 ^ in_q15,4,0x20,0);
    auVar17 = VectorShiftLeft(in_q15,4,0x20,0);
    auVar23 = (auVar23 | auVar19 ^ in_q14) & auVar20 | (auVar22 | auVar19 ^ in_q15) & auVar21;
    auVar24 = VectorShiftRight(in_q14,4);
    auVar22 = VectorShiftRight(auVar23,2);
    auVar32 = VectorShiftRight(auVar19 ^ in_q12,4);
    auVar22 = auVar22 | auVar23;
    auVar33 = VectorShiftLeft(in_q13,4,0x20,0);
    auVar35 = VectorShiftRight(auVar22,1);
    auVar23 = (auVar17 | in_q15) & auVar21 | (auVar24 | in_q14) & auVar20;
    auVar17 = SIMDExpandImmediate(0,0xe,0x11);
    auVar24 = VectorShiftLeft(auVar19 ^ in_q13,4,0x20,0);
    auVar17 = (auVar35 | auVar22) & auVar17;
    auVar36 = VectorShiftRight(auVar17,7);
    auVar36 = auVar36 | auVar17;
    auVar24 = (auVar32 | auVar19 ^ in_q12) & auVar20 | (auVar24 | auVar19 ^ in_q13) & auVar21;
    auVar17 = VectorShiftRight(in_q12,4);
    auVar25 = VectorShiftRight(auVar36,0xe);
    auVar22 = VectorShiftRight(auVar23,2);
    auVar22 = auVar22 | auVar23;
    auVar34 = (auVar33 | in_q13) & auVar21 | (auVar17 | in_q12) & auVar20;
    auVar32 = VectorShiftRight(auVar19 ^ in_q10,4);
    auVar23 = VectorShiftRight(auVar22,1);
    auVar33 = VectorShiftLeft(auVar19 ^ in_q11,4,0x20,0);
    auVar17 = SIMDExpandImmediate(0,0xe,0x11);
    auVar29 = VectorShiftLeft(in_q11,4,0x20,0);
    auVar17 = (auVar23 | auVar22) & auVar17;
    auVar23 = VectorShiftRight(auVar17,7);
    auVar22 = (auVar32 | auVar19 ^ in_q10) & auVar20 | (auVar33 | auVar19 ^ in_q11) & auVar21;
    auVar32 = VectorShiftRight(in_q10,4);
    auVar23 = auVar23 | auVar17;
    auVar35 = VectorShiftRight(auVar23,0xe);
    auVar35 = auVar35 | auVar23;
    auVar33 = VectorShiftRight(auVar24,2);
    auVar29 = (auVar29 | in_q11) & auVar21 | (auVar32 | in_q10) & auVar20;
    auVar33 = auVar33 | auVar24;
    auVar23 = VectorShiftRight(auVar19 ^ *pauVar12,4);
    auVar24 = VectorShiftLeft(auVar19 ^ pauVar12[1],4,0x20,0);
    auVar32 = VectorShiftRight(auVar33,1);
    auVar17 = SIMDExpandImmediate(0,0xe,0x11);
    auVar17 = (auVar32 | auVar33) & auVar17;
    auVar27 = (auVar23 | auVar19 ^ *pauVar12) & auVar20 |
              (auVar24 | auVar19 ^ pauVar12[1]) & auVar21;
    auVar23 = VectorShiftRight(auVar34,2);
    auVar33 = VectorShiftLeft(pauVar12[1],4,0x20,0);
    auVar23 = auVar23 | auVar34;
    auVar34 = VectorShiftRight(auVar17,7);
    auVar24 = VectorShiftRight(auVar23,1);
    auVar32 = VectorShiftRight(*pauVar12,4);
    auVar34 = auVar34 | auVar17;
    auVar28 = VectorShiftRight(auVar34,0xe);
    auVar26 = VectorShiftRight(auVar29,2);
    auVar17 = (auVar33 | pauVar12[1]) & auVar21 | (auVar32 | *pauVar12) & auVar20;
    auVar33 = VectorShiftRight(auVar22,2);
    auVar26 = auVar26 | auVar29;
    auVar33 = auVar33 | auVar22;
    auVar30 = VectorShiftRight(auVar17,2);
    auVar29 = VectorShiftRight(auVar27,2);
    auVar32 = VectorShiftRight(auVar26,1);
    auVar30 = auVar30 | auVar17;
    auVar31 = VectorShiftRight(auVar33,1);
    auVar29 = auVar29 | auVar27;
    auVar17 = SIMDExpandImmediate(0,0xe,0x11);
    auVar22 = SIMDExpandImmediate(0,0xe,0x11);
    auVar17 = (auVar24 | auVar23) & auVar17;
    auVar24 = VectorShiftRight(auVar29,1);
    auVar22 = (auVar31 | auVar33) & auVar22;
    auVar23 = SIMDExpandImmediate(0,0xe,0x11);
    auVar27 = VectorShiftRight(auVar30,1);
    auVar33 = VectorShiftRight(auVar17,7);
    auVar26 = (auVar32 | auVar26) & auVar23;
    auVar23 = (auVar24 | auVar29) & auVar23;
    auVar32 = VectorShiftRight(auVar22,7);
    auVar24 = SIMDExpandImmediate(0,0xe,0x11);
    auVar33 = auVar33 | auVar17;
    auVar24 = (auVar27 | auVar30) & auVar24;
    auVar32 = auVar32 | auVar22;
    auVar22 = VectorShiftRight(auVar26,7);
    in_q14 = VectorShiftRight(auVar33,0xe);
    auVar27 = VectorShiftRight(auVar23,7);
    auVar22 = auVar22 | auVar26;
    auVar29 = VectorShiftRight(auVar24,7);
    in_q14 = in_q14 | auVar33;
    auVar17 = VectorShiftRight(auVar32,0xe);
    auVar27 = auVar27 | auVar23;
    auVar29 = auVar29 | auVar24;
    auVar24 = VectorShiftRight(auVar22,0xe);
    auVar23 = VectorShiftRight(auVar27,0xe);
    auVar24 = auVar24 | auVar22;
    in_q11 = VectorShiftRight(auVar29,0xe);
    in_q15._0_8_ = VectorCopyNarrow(in_q14,4);
    in_q15._8_8_ = VectorCopyNarrow(auVar35,4);
    in_q11 = in_q11 | auVar29;
    in_q10 = auVar35 | in_q14 | auVar24;
    auVar22._0_8_ = VectorCopyNarrow(auVar24,4);
    auVar22._8_8_ = VectorCopyNarrow(in_q11,4);
    in_q12 = (auVar23 | auVar27) & in_q11;
    in_q13._0_8_ = VectorCopyNarrow(in_q15,2);
    in_q13._8_8_ = VectorCopyNarrow(auVar22,2);
    *(undefined8 *)bg_visibility_3d = in_q13._0_8_;
    *(undefined8 *)((int)bg_visibility_3d + 8) = in_q13._8_8_;
    bg_visibility_3d = (u8 *)((int)bg_visibility_3d + 0x10);
    auVar18 = auVar18 | in_q10 | in_q11;
    in_q9 = pauVar12[2];
    auVar17 = in_q9 | (auVar28 | auVar34) & in_q14 | (auVar25 | auVar36) & auVar35 |
                      (auVar17 | auVar32) & auVar24 | in_q12;
    *(longlong *)pauVar12[2] = auVar17._0_8_;
    *(longlong *)(pauVar12[2] + 8) = auVar17._8_8_;
  } while (!(bool)uVar14);
  auVar1._16_16_ = ZEXT816(0);
  auVar1._0_16_ = auVar17;
  auVar2._16_16_ = ZEXT816(0);
  auVar2._0_16_ = auVar18;
  auVar17 = auVar17 | auVar1._8_16_;
  auVar18 = auVar18 | auVar2._8_16_;
  if ((auVar17._0_4_ | auVar17._4_4_) == 0) {
    if ((auVar18._0_4_ | auVar18._4_4_) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x10;
    }
  }
  else {
    uVar5 = 2;
  }
  if (*(int *)(pauVar12[0x13] + 0xc) != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x08048ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(pauVar12[0x18] + 0xc))();
  return uVar6;
}


