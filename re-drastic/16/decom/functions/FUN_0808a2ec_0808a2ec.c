/*
 * Ghidra decompilation
 *
 * Function : FUN_0808a2ec
 * Address  : 0808a2ec
 * Program  : drastic16
 */


/* WARNING: Removing unreachable block (ram,0x0808a5f0) */
/* WARNING: Removing unreachable block (ram,0x0808a7cc) */

void FUN_0808a2ec(int param_1,int param_2,undefined8 *param_3)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  sbyte sVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  undefined *__s;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined *puVar29;
  uint *puVar30;
  uint *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
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
  undefined auStack_7f0 [288];
  undefined auStack_6d0 [296];
  undefined auStack_5a8 [8];
  undefined auStack_5a0 [1404];
  
  puVar29 = auStack_5a8;
  if (((uint)puVar29 & 8) != 0) {
    puVar29 = auStack_5a0;
  }
  iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x18);
  sVar6 = *(short *)(param_1 + 0x76);
  iVar12 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x14);
  sVar7 = *(short *)(param_1 + 0x78);
  puVar30 = (uint *)(puVar29 + 0x430);
  uVar32 = *(undefined4 *)(param_1 + 8);
  puVar20 = (undefined8 *)(puVar29 + 0x100);
  __s = puVar29 + 0x310;
  uVar27 = *(uint *)(param_1 + 0x68);
  uVar28 = *(uint *)(param_1 + 0x6c);
  uVar8 = *(ushort *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_0802b5a8(param_1);
  }
  if ((uVar8 & 0x2000) == 0) {
    uVar22 = *(uint *)(param_1 + 0x30);
    uVar24 = *(uint *)(param_1 + 0x34);
    uVar15 = *(uint *)(param_1 + 0x48);
    uVar18 = *(uint *)(param_1 + 0x4c);
    uVar19 = uVar24 + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar22,*(uint *)(param_1 + 0x38));
    uVar25 = uVar18 + *(int *)(param_1 + 0x54) + (uint)CARRY4(uVar15,*(uint *)(param_1 + 0x50));
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x40) + uVar22;
    *(uint *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x44) + uVar24 + (uint)CARRY4(*(uint *)(param_1 + 0x40),uVar22);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x58) + uVar15;
    *(uint *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x5c) + uVar18 + (uint)CARRY4(*(uint *)(param_1 + 0x58),uVar15);
    if ((int)uVar19 <= (int)uVar25) {
      uVar25 = uVar19;
    }
    memset(param_3,uVar8 & 0x2000,0x20);
    if (-1 < (int)uVar25) {
      if ((int)uVar18 < (int)uVar24) {
        uVar18 = uVar24;
      }
      uVar18 = uVar18 & ~((int)uVar18 >> 0x1f);
      if ((int)uVar18 < 0x100) {
        if (0xfe < (int)uVar25) {
          uVar25 = 0xff;
        }
        iVar21 = uVar25 - uVar18;
        if (-1 < iVar21) {
          iVar34 = (int)sVar6 * uVar18 + uVar27;
          iVar26 = (int)*(short *)(param_1 + 0x76);
          iVar23 = (int)sVar7 * uVar18 + uVar28;
          uVar33 = *(undefined4 *)(param_1 + 0x2c);
          iVar35 = (int)*(short *)(param_1 + 0x78);
          uVar11 = FUN_0808d138(iVar26,iVar34,iVar21,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
          param_2 = param_2 + uVar18 * 2;
          uVar33 = FUN_0808d138(iVar35,iVar23,iVar21,auStack_6d0,uVar33);
          uVar11 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar11,uVar33);
          FUN_0808d2a0(__s,puVar20,uVar11,iVar34,iVar23,iVar26,iVar35,*(undefined *)(param_1 + 0x83)
                       ,*(undefined *)(param_1 + 0x84));
          FUN_0808d5c4(__s,uVar11,iVar21);
          FUN_0808d630(puVar29,iVar34,iVar23,iVar26,iVar35,iVar21);
          FUN_0808dc3c(param_2,puVar29,__s,puVar20,(int)puVar30 + (uVar18 & 7),iVar12,iVar9);
          FUN_0808c8b0(param_2,param_2,uVar32,iVar21);
          uVar28 = (int)uVar25 >> 3;
          uVar27 = (int)uVar18 >> 3;
          for (uVar15 = uVar27; uVar15 <= uVar28; uVar15 = uVar15 + 1) {
            uVar19 = (puVar30[1] | puVar30[1] << 4) & 0xf0f0f0f0 |
                     (*puVar30 | *puVar30 >> 4) & 0xf0f0f0f;
            puVar30 = puVar30 + 2;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = (uVar19 | uVar19 >> 1) & 0x11111111;
            uVar19 = uVar19 | uVar19 >> 7;
            *(byte *)((int)param_3 + uVar15) = (byte)uVar19 | (byte)(uVar19 >> 0xe);
          }
          *(byte *)((int)param_3 + uVar27) =
               *(byte *)((int)param_3 + uVar27) & (byte)(0xff << (uVar18 & 7));
          *(byte *)((int)param_3 + uVar28) =
               *(byte *)((int)param_3 + uVar28) & ~(byte)(0xfe << (uVar25 & 7));
        }
      }
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 0x76);
    sVar7 = *(short *)(param_1 + 0x78);
    if (((ushort)(sVar6 + 0x7ffU) < 0xfff) && ((ushort)(sVar7 + 0x7ffU) < 0xfff)) {
      iVar23 = (int)sVar6;
      uVar33 = *(undefined4 *)(param_1 + 0x2c);
      iVar21 = (int)sVar7;
      uVar11 = FUN_0808d138(iVar23,uVar27,0xff,auStack_7f0,*(undefined4 *)(param_1 + 0x28));
      uVar33 = FUN_0808d138(iVar21,uVar28,0xff,auStack_6d0,uVar33);
      uVar11 = FUN_0808d1d4(auStack_7f0,auStack_6d0,__s,uVar11,uVar33);
      FUN_0808d2a0(__s,puVar20,uVar11,uVar27,uVar28,iVar23,iVar21,*(undefined *)(param_1 + 0x83),
                   *(undefined *)(param_1 + 0x84));
      FUN_0808d5c4(__s,uVar11,0xff);
      FUN_0808d630(puVar29,uVar27,uVar28,iVar23,iVar21,0xff);
    }
    else {
      memset(__s,1,0x100);
      bVar4 = *(byte *)(param_1 + 0x83);
      sVar5 = *(sbyte *)(param_1 + 0x84);
      puVar29[0x410] = 0;
      sVar1 = ((ushort)bVar4 & (ushort)(uVar27 >> 0xb)) +
              (short)(((uint)bVar4 & uVar28 >> 0xb) << sVar5);
      uVar11 = CONCAT22(sVar1,sVar1);
      auVar39._4_4_ = uVar11;
      auVar39._0_4_ = uVar11;
      auVar39._8_8_ = 0;
      in_q8 = auVar39 & auVar39 << 0x40;
      puVar16 = puVar20;
      do {
        *puVar16 = 0;
        puVar16[1] = in_q8._8_8_;
        puVar16 = puVar16 + 2;
      } while (puVar16 != (undefined8 *)(puVar29 + 0x300));
      FUN_0808d630(puVar29,uVar27,uVar28,(int)sVar6,(int)sVar7,0x100);
    }
    FUN_0808dc3c(param_2,puVar29,__s,puVar20,puVar30,iVar12,iVar9);
    FUN_0808c8b0(param_2,param_2,uVar32,0xff);
    auVar39 = SIMDExpandImmediate(0,0xe,0xf);
    auVar40 = SIMDExpandImmediate(0,0xe,0xf0);
    puVar10 = (uint *)(puVar29 + 0x530);
    auVar41 = SIMDExpandImmediate(0,0xe,0x11);
    do {
      puVar13 = puVar30 + 0x10;
      puVar2 = (uint *)0x3c0;
      puVar3 = (uint *)0x3d0;
      lVar37 = 2;
      puVar31 = puVar30;
      puVar14 = puVar30;
      while( true ) {
        *puVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = (uint *)0x3c8;
      puVar3 = (uint *)0x3d8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar17 = puVar30 + 8;
      puVar14 = puVar31 + 0x18;
      puVar30 = puVar31 + 0x20;
      puVar2 = (uint *)0x3a0;
      puVar3 = (uint *)0x3b0;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = (uint *)0x3a8;
      puVar3 = (uint *)0x3b8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      uVar36 = puVar30 == puVar10;
      auVar44 = VectorShiftRight(in_q12,4);
      puVar2 = (uint *)0x3e0;
      puVar3 = (uint *)0x3f0;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar17;
        puVar17 = puVar17 + 1;
        *puVar3 = *puVar17;
        puVar17 = puVar17 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = (uint *)0x3e8;
      puVar3 = (uint *)0x3f8;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar17;
        puVar17 = puVar17 + 1;
        *puVar3 = *puVar17;
        puVar17 = puVar17 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      auVar42 = VectorShiftRight(in_q10,4);
      puVar2 = (uint *)0x380;
      puVar3 = (uint *)0x390;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = (uint *)0x388;
      puVar3 = (uint *)0x398;
      lVar37 = 2;
      while( true ) {
        *puVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        lVar37 = lVar37 + -1;
        if (lVar37 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
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
  }
  return;
}


