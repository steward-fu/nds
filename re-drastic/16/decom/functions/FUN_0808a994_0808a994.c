/*
 * Ghidra decompilation
 *
 * Function : FUN_0808a994
 * Address  : 0808a994
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0808b33c) */
/* WARNING: Removing unreachable block (ram,0x0808aa98) */
/* WARNING: Removing unreachable block (ram,0x0808ae38) */
/* WARNING: Removing unreachable block (ram,0x0808b508) */

void FUN_0808a994(int param_1,int param_2,undefined8 *param_3)

{
  short sVar1;
  uint *puVar2;
  byte bVar3;
  sbyte sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined *unaff_r7;
  uint *puVar24;
  uint *puVar25;
  undefined4 uVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined *__s;
  undefined4 uVar29;
  uint *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined4 uVar34;
  bool bVar35;
  undefined uVar36;
  longlong lVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined in_q8 [16];
  undefined in_q9 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined auVar47 [16];
  undefined in_q12 [16];
  undefined auVar48 [16];
  undefined in_q13 [16];
  undefined in_q14 [16];
  undefined auVar49 [16];
  undefined in_q15 [16];
  uint local_820;
  uint local_810;
  undefined auStack_7f0 [288];
  undefined auStack_6d0 [296];
  undefined auStack_5a8 [8];
  undefined auStack_5a0 [1404];
  
  bVar35 = ((uint)auStack_5a8 & 8) != 0;
  if (bVar35) {
    unaff_r7 = auStack_5a0;
  }
  iVar8 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x18);
  if (!bVar35) {
    unaff_r7 = auStack_5a8;
  }
  iVar12 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x14);
  puVar28 = (undefined8 *)(unaff_r7 + 0x100);
  uVar9 = *(uint *)(param_1 + 0x68);
  uVar13 = *(uint *)(param_1 + 0x6c);
  puVar24 = (uint *)(unaff_r7 + 0x430);
  __s = unaff_r7 + 0x310;
  sVar5 = *(short *)(param_1 + 0x76);
  sVar6 = *(short *)(param_1 + 0x78);
  uVar26 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(ushort *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_0802b5a8(param_1);
  }
  if ((uVar7 & 0x2000) != 0) {
    if (*(char *)(param_1 + 0x85) == '\0') {
      sVar5 = *(short *)(param_1 + 0x76);
      sVar6 = *(short *)(param_1 + 0x78);
      if (((ushort)(sVar5 + 0x7ffU) < 0xfff) && ((ushort)(sVar6 + 0x7ffU) < 0xfff)) {
        iVar22 = (int)sVar5;
        uVar34 = *(undefined4 *)(param_1 + 0x2c);
        iVar20 = (int)sVar6;
        uVar29 = FUN_0808d138(iVar22,uVar9,0xff,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
        uVar34 = FUN_0808d138(iVar20,uVar13,0xff,auStack_6d0,uVar34);
        uVar29 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar29,uVar34);
        FUN_0808d430(__s,puVar28,uVar29,uVar9,uVar13,iVar22,iVar20,*(undefined *)(param_1 + 0x83),
                     *(undefined *)(param_1 + 0x84));
        FUN_0808d5c4(__s,uVar29,0xff);
        FUN_0808d630(unaff_r7,uVar9,uVar13,iVar22,iVar20,0xff);
      }
      else {
        memset(__s,1,0x100);
        bVar3 = *(byte *)(param_1 + 0x83);
        sVar4 = *(sbyte *)(param_1 + 0x84);
        unaff_r7[0x410] = 0;
        sVar1 = (((ushort)bVar3 & (ushort)(uVar9 >> 0xb)) +
                (short)(((uint)bVar3 & uVar13 >> 0xb) << sVar4)) * 2;
        uVar29 = CONCAT22(sVar1,sVar1);
        auVar39._4_4_ = uVar29;
        auVar39._0_4_ = uVar29;
        auVar39._8_8_ = 0;
        in_q8 = auVar39 & auVar39 << 0x40;
        puVar19 = puVar28;
        do {
          *puVar19 = 0;
          puVar19[1] = in_q8._8_8_;
          puVar19 = puVar19 + 2;
        } while (puVar19 != (undefined8 *)(unaff_r7 + 0x300));
        FUN_0808d630(unaff_r7,uVar9,uVar13,(int)sVar5,(int)sVar6,0x100);
      }
      FUN_0808e084(param_2,unaff_r7,__s,puVar28,puVar24,iVar12,iVar8);
      FUN_0808c8b0(param_2,param_2,uVar26,0xff);
      auVar39 = SIMDExpandImmediate(0,0xe,0xf);
      auVar40 = SIMDExpandImmediate(0,0xe,0xf0);
      puVar28 = param_3 + 4;
      auVar41 = SIMDExpandImmediate(0,0xe,0x11);
      do {
        puVar11 = puVar24 + 0x10;
        puVar30 = (uint *)0x3c0;
        puVar2 = (uint *)0x3d0;
        lVar37 = 2;
        puVar25 = puVar24;
        puVar14 = puVar24;
        while( true ) {
          *puVar30 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar30 = (uint *)0x3c8;
        puVar2 = (uint *)0x3d8;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar10 = puVar24 + 8;
        puVar14 = puVar25 + 0x18;
        puVar24 = puVar25 + 0x20;
        puVar30 = (uint *)0x3a0;
        puVar2 = (uint *)0x3b0;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar30 = (uint *)0x3a8;
        puVar2 = (uint *)0x3b8;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = *puVar11;
          puVar11 = puVar11 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar44 = VectorShiftRight(in_q12,4);
        puVar30 = (uint *)0x3e0;
        puVar2 = (uint *)0x3f0;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar30 = (uint *)0x3e8;
        puVar2 = (uint *)0x3f8;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar42 = VectorShiftRight(in_q10,4);
        puVar30 = (uint *)0x380;
        puVar2 = (uint *)0x390;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar30 = (uint *)0x388;
        puVar2 = (uint *)0x398;
        lVar37 = 2;
        while( true ) {
          *puVar30 = *puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar37 = lVar37 + -1;
          if (lVar37 == 0) break;
          puVar30 = puVar30 + 1;
          puVar2 = puVar2 + 1;
        }
        auVar38 = VectorShiftRight(in_q14,4);
        auVar45 = VectorShiftLeft(in_q15,4,0x20,0);
        auVar43 = VectorShiftLeft(in_q13,4,0x20,0);
        auVar46 = VectorShiftRight(in_q8,4);
        auVar49 = VectorShiftLeft(in_q11,4,0x20,0);
        auVar48 = VectorShiftLeft(in_q9,4,0x20,0);
        auVar47 = (auVar38 | in_q14) & auVar39 | (auVar45 | in_q15) & auVar40;
        auVar45 = (auVar44 | in_q12) & auVar39 | (auVar43 | in_q13) & auVar40;
        auVar38 = (auVar42 | in_q10) & auVar39 | (auVar49 | in_q11) & auVar40;
        auVar44 = (auVar46 | in_q8) & auVar39 | (auVar48 | in_q9) & auVar40;
        auVar48 = VectorShiftRight(auVar47,2);
        auVar46 = VectorShiftRight(auVar45,2);
        auVar43 = VectorShiftRight(auVar38,2);
        auVar42 = VectorShiftRight(auVar44,2);
        auVar48 = auVar48 | auVar47;
        auVar46 = auVar46 | auVar45;
        auVar43 = auVar43 | auVar38;
        auVar42 = auVar42 | auVar44;
        auVar47 = VectorShiftRight(auVar48,1);
        auVar45 = VectorShiftRight(auVar46,1);
        auVar38 = VectorShiftRight(auVar43,1);
        auVar44 = VectorShiftRight(auVar42,1);
        auVar47 = (auVar47 | auVar48) & auVar41;
        auVar45 = (auVar45 | auVar46) & auVar41;
        auVar38 = (auVar38 | auVar43) & auVar41;
        auVar44 = (auVar44 | auVar42) & auVar41;
        in_q11 = VectorShiftRight(auVar47,7);
        auVar43 = VectorShiftRight(auVar45,7);
        in_q9 = VectorShiftRight(auVar38,7);
        auVar42 = VectorShiftRight(auVar44,7);
        in_q11 = in_q11 | auVar47;
        auVar43 = auVar43 | auVar45;
        in_q9 = in_q9 | auVar38;
        auVar42 = auVar42 | auVar44;
        in_q15 = VectorShiftRight(in_q11,0xe);
        auVar44 = VectorShiftRight(auVar42,0xe);
        in_q14 = VectorShiftRight(auVar43,0xe);
        in_q13 = VectorShiftRight(in_q9,0xe);
        in_q11 = in_q15 | in_q11;
        in_q9 = in_q13 | in_q9;
        in_q12._0_8_ = VectorCopyNarrow(in_q14 | auVar43,4);
        in_q12._8_8_ = VectorCopyNarrow(in_q11,4);
        in_q10._0_8_ = VectorCopyNarrow(in_q9,4);
        in_q10._8_8_ = VectorCopyNarrow(auVar44 | auVar42,4);
        in_q8._0_8_ = VectorCopyNarrow(in_q12,2);
        in_q8._8_8_ = VectorCopyNarrow(in_q10,2);
        *param_3 = in_q8._0_8_;
        param_3[1] = in_q8._8_8_;
        param_3 = param_3 + 2;
      } while (param_3 != puVar28);
      return;
    }
    iVar20 = *(int *)(param_1 + 0xc);
    if (iVar20 == 0) {
      return;
    }
    sVar5 = *(short *)(param_1 + 0x76);
    sVar6 = *(short *)(param_1 + 0x78);
    if (((ushort)(sVar5 + 0x7ffU) < 0xfff) && ((ushort)(sVar6 + 0x7ffU) < 0xfff)) {
      uVar29 = *(undefined4 *)(param_1 + 0x2c);
      iVar27 = (int)sVar5;
      iVar22 = (int)sVar6;
      uVar26 = FUN_0808d138(iVar27,uVar9,0xff,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
      uVar29 = FUN_0808d138(iVar22,uVar13,0xff,auStack_6d0,uVar29);
      uVar26 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar26,uVar29);
      FUN_0808d430(__s,puVar28,uVar26,uVar9,uVar13,iVar27,iVar22,*(undefined *)(param_1 + 0x83),
                   *(undefined *)(param_1 + 0x84));
      FUN_0808d5c4(__s,uVar26,0xff);
      FUN_0808d630(unaff_r7,uVar9,uVar13,iVar27,iVar22,0xff);
    }
    else {
      memset(__s,1,0x100);
      bVar3 = *(byte *)(param_1 + 0x83);
      sVar4 = *(sbyte *)(param_1 + 0x84);
      unaff_r7[0x410] = 0;
      sVar1 = (((ushort)bVar3 & (ushort)(uVar9 >> 0xb)) +
              (short)(((uint)bVar3 & uVar13 >> 0xb) << sVar4)) * 2;
      uVar26 = CONCAT22(sVar1,sVar1);
      auVar40._4_4_ = uVar26;
      auVar40._0_4_ = uVar26;
      auVar40._8_8_ = 0;
      in_q8 = auVar40 & auVar40 << 0x40;
      puVar19 = puVar28;
      do {
        *puVar19 = 0;
        puVar19[1] = in_q8._8_8_;
        puVar19 = puVar19 + 2;
      } while (puVar19 != (undefined8 *)(unaff_r7 + 0x300));
      FUN_0808d630(unaff_r7,uVar9,uVar13,(int)sVar5,(int)sVar6,0x100);
    }
    FUN_0808e4c4(param_2,unaff_r7,__s,puVar28,puVar24,iVar12,iVar8);
    FUN_0808c8b0(param_2,param_2,iVar20,0xff);
    auVar39 = SIMDExpandImmediate(0,0xe,0xf);
    auVar40 = SIMDExpandImmediate(0,0xe,0xf0);
    puVar30 = (uint *)(unaff_r7 + 0x530);
    auVar41 = SIMDExpandImmediate(0,0xe,0x11);
    do {
      puVar10 = puVar24 + 0x10;
      puVar2 = (uint *)0x3c0;
      puVar25 = (uint *)0x3d0;
      lVar37 = 2;
      puVar14 = puVar24;
      puVar11 = puVar24;
      while( true ) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar25 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar2 = (uint *)0x3c8;
      puVar25 = (uint *)0x3d8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar25 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar16 = puVar24 + 8;
      puVar11 = puVar14 + 0x18;
      puVar24 = puVar14 + 0x20;
      puVar2 = (uint *)0x3a0;
      puVar25 = (uint *)0x3b0;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar25 = *puVar10;
        puVar10 = puVar10 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar2 = (uint *)0x3a8;
      puVar25 = (uint *)0x3b8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar25 = *puVar10;
        puVar10 = puVar10 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      uVar36 = puVar24 == puVar30;
      auVar44 = VectorShiftRight(in_q12,4);
      puVar2 = (uint *)0x3e0;
      puVar25 = (uint *)0x3f0;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar25 = *puVar16;
        puVar16 = puVar16 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar2 = (uint *)0x3e8;
      puVar25 = (uint *)0x3f8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar25 = *puVar16;
        puVar16 = puVar16 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      auVar42 = VectorShiftRight(in_q10,4);
      puVar2 = (uint *)0x380;
      puVar25 = (uint *)0x390;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar25 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      puVar2 = (uint *)0x388;
      puVar25 = (uint *)0x398;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar25 = *puVar11;
        puVar11 = puVar11 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar25 = puVar25 + 1;
      }
      auVar38 = VectorShiftRight(in_q14,4);
      auVar45 = VectorShiftLeft(in_q15,4,0x20,0);
      auVar43 = VectorShiftLeft(in_q13,4,0x20,0);
      auVar46 = VectorShiftRight(in_q8,4);
      auVar49 = VectorShiftLeft(in_q11,4,0x20,0);
      auVar48 = VectorShiftLeft(in_q9,4,0x20,0);
      auVar47 = (auVar38 | in_q14) & auVar39 | (auVar45 | in_q15) & auVar40;
      auVar45 = (auVar44 | in_q12) & auVar39 | (auVar43 | in_q13) & auVar40;
      auVar38 = (auVar42 | in_q10) & auVar39 | (auVar49 | in_q11) & auVar40;
      auVar44 = (auVar46 | in_q8) & auVar39 | (auVar48 | in_q9) & auVar40;
      auVar48 = VectorShiftRight(auVar47,2);
      auVar46 = VectorShiftRight(auVar45,2);
      auVar43 = VectorShiftRight(auVar38,2);
      auVar42 = VectorShiftRight(auVar44,2);
      auVar48 = auVar48 | auVar47;
      auVar46 = auVar46 | auVar45;
      auVar43 = auVar43 | auVar38;
      auVar42 = auVar42 | auVar44;
      auVar47 = VectorShiftRight(auVar48,1);
      auVar45 = VectorShiftRight(auVar46,1);
      auVar38 = VectorShiftRight(auVar43,1);
      auVar44 = VectorShiftRight(auVar42,1);
      auVar47 = (auVar47 | auVar48) & auVar41;
      auVar45 = (auVar45 | auVar46) & auVar41;
      auVar38 = (auVar38 | auVar43) & auVar41;
      auVar44 = (auVar44 | auVar42) & auVar41;
      in_q11 = VectorShiftRight(auVar47,7);
      auVar43 = VectorShiftRight(auVar45,7);
      in_q9 = VectorShiftRight(auVar38,7);
      auVar42 = VectorShiftRight(auVar44,7);
      in_q11 = in_q11 | auVar47;
      auVar43 = auVar43 | auVar45;
      in_q9 = in_q9 | auVar38;
      auVar42 = auVar42 | auVar44;
      in_q15 = VectorShiftRight(in_q11,0xe);
      auVar44 = VectorShiftRight(auVar42,0xe);
      in_q14 = VectorShiftRight(auVar43,0xe);
      in_q13 = VectorShiftRight(in_q9,0xe);
      in_q11 = in_q15 | in_q11;
      in_q9 = in_q13 | in_q9;
      in_q12._0_8_ = VectorCopyNarrow(in_q14 | auVar43,4);
      in_q12._8_8_ = VectorCopyNarrow(in_q11,4);
      in_q10._0_8_ = VectorCopyNarrow(in_q9,4);
      in_q10._8_8_ = VectorCopyNarrow(auVar44 | auVar42,4);
      in_q8._0_8_ = VectorCopyNarrow(in_q12,2);
      in_q8._8_8_ = VectorCopyNarrow(in_q10,2);
      *param_3 = in_q8._0_8_;
      param_3[1] = in_q8._8_8_;
      param_3 = param_3 + 2;
    } while (!(bool)uVar36);
    return;
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    uVar21 = *(uint *)(param_1 + 0x30);
    uVar23 = *(uint *)(param_1 + 0x34);
    uVar15 = *(uint *)(param_1 + 0x48);
    uVar17 = *(uint *)(param_1 + 0x4c);
    uVar18 = uVar23 + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar21,*(uint *)(param_1 + 0x38));
    local_820 = uVar17 + *(int *)(param_1 + 0x54) + (uint)CARRY4(uVar15,*(uint *)(param_1 + 0x50));
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x40) + uVar21;
    *(uint *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x44) + uVar23 + (uint)CARRY4(*(uint *)(param_1 + 0x40),uVar21);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x58) + uVar15;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x5c) + uVar17 + (uint)CARRY4(*(uint *)(param_1 + 0x58),uVar15);
    if ((int)uVar18 <= (int)local_820) {
      local_820 = uVar18;
    }
    memset(param_3,0,0x20);
    if ((int)local_820 < 0) {
      return;
    }
    if ((int)uVar17 < (int)uVar23) {
      uVar17 = uVar23;
    }
    uVar17 = uVar17 & ~((int)uVar17 >> 0x1f);
    if (0xff < (int)uVar17) {
      return;
    }
    if (0xfe < (int)local_820) {
      local_820 = 0xff;
    }
    iVar20 = local_820 - uVar17;
    if (iVar20 < 0) {
      return;
    }
    iVar27 = (int)sVar5 * uVar17 + uVar9;
    iVar31 = (int)sVar6 * uVar17 + uVar13;
    iVar22 = (int)*(short *)(param_1 + 0x78);
    uVar34 = *(undefined4 *)(param_1 + 0x2c);
    iVar32 = (int)*(short *)(param_1 + 0x76);
    uVar29 = FUN_0808d138(iVar32,iVar27,iVar20,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
    param_2 = param_2 + uVar17 * 2;
    uVar34 = FUN_0808d138(iVar22,iVar31,iVar20,auStack_6d0,uVar34);
    local_810 = uVar17 & 7;
    uVar29 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar29,uVar34);
    FUN_0808d430(__s,puVar28,uVar29,iVar27,iVar31,iVar32,iVar22,*(undefined *)(param_1 + 0x83),
                 *(undefined *)(param_1 + 0x84));
    FUN_0808d5c4(__s,uVar29,iVar20);
    FUN_0808d630(unaff_r7,iVar27,iVar31,iVar32,iVar22,iVar20);
    FUN_0808e084(param_2,unaff_r7,__s,puVar28,(int)puVar24 + local_810,iVar12,iVar8);
    FUN_0808c8b0(param_2,param_2,uVar26,iVar20);
    for (uVar9 = (int)uVar17 >> 3; uVar9 <= (uint)((int)local_820 >> 3); uVar9 = uVar9 + 1) {
      uVar13 = (puVar24[1] | puVar24[1] << 4) & 0xf0f0f0f0 | (*puVar24 | *puVar24 >> 4) & 0xf0f0f0f;
      puVar24 = puVar24 + 2;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = (uVar13 | uVar13 >> 1) & 0x11111111;
      uVar13 = uVar13 | uVar13 >> 7;
      *(byte *)((int)param_3 + uVar9) = (byte)uVar13 | (byte)(uVar13 >> 0xe);
    }
  }
  else {
    iVar20 = *(int *)(param_1 + 0xc);
    if (iVar20 == 0) {
      return;
    }
    uVar21 = *(uint *)(param_1 + 0x30);
    uVar23 = *(uint *)(param_1 + 0x34);
    uVar15 = *(uint *)(param_1 + 0x48);
    uVar17 = *(uint *)(param_1 + 0x4c);
    uVar18 = uVar23 + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar21,*(uint *)(param_1 + 0x38));
    local_820 = uVar17 + *(int *)(param_1 + 0x54) + (uint)CARRY4(uVar15,*(uint *)(param_1 + 0x50));
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x40) + uVar21;
    *(uint *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x44) + uVar23 + (uint)CARRY4(*(uint *)(param_1 + 0x40),uVar21);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x58) + uVar15;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x5c) + uVar17 + (uint)CARRY4(*(uint *)(param_1 + 0x58),uVar15);
    if ((int)uVar18 <= (int)local_820) {
      local_820 = uVar18;
    }
    memset(param_3,uVar7 & 0x2000,0x20);
    if ((int)local_820 < 0) {
      return;
    }
    if ((int)uVar17 < (int)uVar23) {
      uVar17 = uVar23;
    }
    uVar17 = uVar17 & ~((int)uVar17 >> 0x1f);
    if (0xff < (int)uVar17) {
      return;
    }
    if (0xfe < (int)local_820) {
      local_820 = 0xff;
    }
    iVar22 = local_820 - uVar17;
    if (iVar22 < 0) {
      return;
    }
    iVar31 = uVar17 * (int)sVar5 + uVar9;
    iVar32 = uVar17 * (int)sVar6 + uVar13;
    iVar27 = (int)*(short *)(param_1 + 0x78);
    uVar29 = *(undefined4 *)(param_1 + 0x2c);
    iVar33 = (int)*(short *)(param_1 + 0x76);
    uVar26 = FUN_0808d138(iVar33,iVar31,iVar22,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
    param_2 = param_2 + uVar17 * 2;
    uVar29 = FUN_0808d138(iVar27,iVar32,iVar22,auStack_6d0,uVar29);
    local_810 = uVar17 & 7;
    uVar26 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar26,uVar29);
    FUN_0808d430(__s,puVar28,uVar26,iVar31,iVar32,iVar33,iVar27,*(undefined *)(param_1 + 0x83),
                 *(undefined *)(param_1 + 0x84));
    FUN_0808d5c4(__s,uVar26,iVar22);
    FUN_0808d630(unaff_r7,iVar31,iVar32,iVar33,iVar27,iVar22);
    FUN_0808e4c4(param_2,unaff_r7,__s,puVar28,(int)puVar24 + local_810,iVar12,iVar8);
    FUN_0808c8b0(param_2,param_2,iVar20,iVar22);
    for (uVar9 = (int)uVar17 >> 3; uVar9 <= (uint)((int)local_820 >> 3); uVar9 = uVar9 + 1) {
      uVar13 = (puVar24[1] | puVar24[1] << 4) & 0xf0f0f0f0 | (*puVar24 | *puVar24 >> 4) & 0xf0f0f0f;
      puVar24 = puVar24 + 2;
      uVar13 = uVar13 | uVar13 >> 2;
      uVar13 = (uVar13 | uVar13 >> 1) & 0x11111111;
      uVar13 = uVar13 | uVar13 >> 7;
      *(byte *)((int)param_3 + uVar9) = (byte)uVar13 | (byte)(uVar13 >> 0xe);
    }
  }
  *(byte *)((int)param_3 + ((int)uVar17 >> 3)) =
       *(byte *)((int)param_3 + ((int)uVar17 >> 3)) & (byte)(0xff << local_810);
  *(byte *)((int)param_3 + ((int)local_820 >> 3)) =
       *(byte *)((int)param_3 + ((int)local_820 >> 3)) & ~(byte)(0xfe << (local_820 & 7));
  return;
}


