/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_c
 * Address  : 001320c0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_tiled_c(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined2 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined auVar17 [16];
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined auVar25 [16];
  byte bVar26;
  undefined2 *puVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  long lVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined4 uVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined uStack_18;
  undefined7 uStack_17;
  undefined4 uStack_10;
  long local_8;
  
  uVar10 = *(ushort *)(param_1 + 0x9a);
  uVar11 = *(ushort *)(param_1 + 0x98);
  uVar2 = (uint)*(ushort *)(param_1 + 0x9c) + param_4;
  local_8 = ___stack_chk_guard;
  puVar27 = (undefined2 *)(param_2 + ((ulong)uVar10 & 7) * -2);
  iVar7 = *(int *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x3c);
  iVar13 = (uVar2 & 0xf8) * 8;
  uVar5 = uVar10 & 7;
  lVar34 = *(long *)(param_1 + 8);
  lVar30 = *(long *)(param_1 + 0x10);
  if (((short)uVar11 < 0) && ((uVar2 >> 8 & 1) != 0)) {
    if ((uVar11 & 0x4000) == 0) {
      uVar28 = iVar7 + 0x800 + iVar13;
      uVar33 = (ulong)uVar28;
    }
    else {
      uVar28 = iVar7 + 0x1000 + iVar13;
      uVar9 = uVar28 + 0x800;
      if (0xff < uVar10) {
        uVar9 = uVar28;
        uVar28 = uVar28 + 0x800;
      }
      uVar33 = (ulong)uVar9;
    }
  }
  else {
    uVar28 = iVar7 + iVar13;
    uVar33 = (ulong)uVar28;
    if ((uVar11 & 0x4000) != 0) {
      uVar9 = uVar28 + 0x800;
      if (0xff < uVar10) {
        uVar9 = uVar28;
        uVar28 = uVar28 + 0x800;
      }
      uVar33 = (ulong)uVar9;
    }
  }
  lVar29 = lVar34 + (ulong)uVar28;
  lVar1 = lVar34 + uVar33;
  uVar33 = (ulong)(uVar10 >> 3) & 0x1f;
  uVar2 = uVar2 & 7;
  uVar31 = (ulong)(((uVar10 & 7) != 0) + 0x20);
  if ((uVar11 >> 7 & 1) == 0) {
    uVar28 = (int)(uVar2 * -4 + 0xe) >> 1;
    puVar3 = puVar27 + uVar31 * 8;
    puVar32 = &local_30;
    do {
      lVar14 = uVar33 * 2;
      uVar9 = (int)uVar33 + 1U & 0x1f;
      uVar33 = (ulong)uVar9;
      uVar11 = *(ushort *)(lVar29 + lVar14);
      if (uVar9 == 0) {
        lVar29 = lVar1;
      }
      puVar4 = (uint *)(lVar34 + (ulong)((uVar11 & 0x3ff) * 0x20 + uVar2 * 4 + iVar8));
      puVar6 = (uint *)((long)puVar4 +
                       (-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2));
      if ((uVar11 & 0x800) == 0) {
        puVar6 = puVar4;
      }
      uVar9 = *puVar6;
      lVar14 = lVar30 + (ulong)(uVar11 >> 0xc) * 0x20;
      lVar16 = ((ulong)(uVar9 >> 4) & 0xf) * 2;
      lVar19 = ((ulong)(uVar9 >> 8) & 0xf) * 2;
      lVar20 = ((ulong)(uVar9 >> 0xc) & 0xf) * 2;
      lVar21 = ((ulong)(uVar9 >> 0x10) & 0xf) * 2;
      lVar22 = ((ulong)(uVar9 >> 0x14) & 0xf) * 2;
      lVar23 = ((ulong)(uVar9 >> 0x18) & 0xf) * 2;
      lVar24 = (ulong)(uVar9 >> 0x1c) * 2;
      lVar15 = ((ulong)uVar9 & 0xf) * 2;
      if ((uVar11 >> 10 & 1) == 0) {
        *puVar27 = *(undefined2 *)(lVar14 + lVar15);
        uVar9 = uVar9 | uVar9 >> 2;
        puVar27[1] = *(undefined2 *)(lVar14 + lVar16);
        puVar27[2] = *(undefined2 *)(lVar14 + lVar19);
        uVar9 = (uVar9 | uVar9 >> 1) & 0x11111111;
        puVar27[3] = *(undefined2 *)(lVar14 + lVar20);
        uVar9 = uVar9 | uVar9 >> 3;
        puVar27[4] = *(undefined2 *)(lVar14 + lVar21);
        puVar27[5] = *(undefined2 *)(lVar14 + lVar22);
        uVar9 = (uVar9 | uVar9 >> 6) & 0xf000f;
        puVar27[6] = *(undefined2 *)(lVar14 + lVar23);
        bVar26 = (byte)uVar9 | (byte)(uVar9 >> 0xc);
        uVar12 = *(undefined2 *)(lVar14 + lVar24);
      }
      else {
        *puVar27 = *(undefined2 *)(lVar14 + lVar24);
        uVar9 = uVar9 | uVar9 << 2;
        puVar27[1] = *(undefined2 *)(lVar14 + lVar23);
        puVar27[2] = *(undefined2 *)(lVar14 + lVar22);
        uVar9 = (uVar9 | uVar9 << 1) & 0x88888888;
        puVar27[3] = *(undefined2 *)(lVar14 + lVar21);
        uVar9 = uVar9 | uVar9 >> 5;
        puVar27[4] = *(undefined2 *)(lVar14 + lVar20);
        uVar9 = uVar9 | uVar9 >> 10;
        puVar27[5] = *(undefined2 *)(lVar14 + lVar19);
        puVar27[6] = *(undefined2 *)(lVar14 + lVar16);
        bVar26 = (byte)(((uVar9 & 0xf) << 0x14) >> 0x10) | (byte)(uVar9 >> 0x10) & 0xf;
        uVar12 = *(undefined2 *)(lVar14 + lVar15);
      }
      *(byte *)puVar32 = bVar26;
      puVar27[7] = uVar12;
      puVar27 = puVar27 + 8;
      puVar32 = (undefined4 *)((long)puVar32 + 1);
    } while (puVar27 != puVar3);
  }
  else {
    iVar8 = uVar2 * 8 + iVar8;
    uVar2 = (int)(uVar2 * -8 + 0x1c) >> 1;
    if (*(char *)(param_1 + 0xad) == '\0') {
      puVar3 = puVar27 + uVar31 * 8;
      puVar32 = &local_30;
      do {
        lVar14 = uVar33 * 2;
        uVar28 = (int)uVar33 + 1U & 0x1f;
        uVar33 = (ulong)uVar28;
        uVar11 = *(ushort *)(lVar29 + lVar14);
        if (uVar28 == 0) {
          lVar29 = lVar1;
        }
        puVar4 = (uint *)(lVar34 + (ulong)((uVar11 & 0x3ff) * 0x40 + iVar8));
        puVar6 = (uint *)((long)puVar4 +
                         (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
        if ((uVar11 & 0x800) == 0) {
          puVar6 = puVar4;
        }
        uVar28 = *puVar6;
        uVar9 = puVar6[1];
        lVar16 = ((ulong)(uVar28 >> 8) & 0xff) * 2;
        lVar19 = ((ulong)(uVar28 >> 0x10) & 0xff) * 2;
        lVar20 = (ulong)(uVar28 >> 0x18) * 2;
        lVar21 = ((ulong)(uVar9 >> 8) & 0xff) * 2;
        lVar22 = ((ulong)(uVar9 >> 0x10) & 0xff) * 2;
        lVar23 = (ulong)(uVar9 >> 0x18) * 2;
        lVar14 = ((ulong)uVar28 & 0xff) * 2;
        lVar15 = ((ulong)uVar9 & 0xff) * 2;
        if ((uVar11 >> 10 & 1) == 0) {
          *puVar27 = *(undefined2 *)(lVar30 + lVar14);
          puVar27[1] = *(undefined2 *)(lVar30 + lVar16);
          puVar27[2] = *(undefined2 *)(lVar30 + lVar19);
          puVar27[3] = *(undefined2 *)(lVar30 + lVar20);
          uVar28 = (uVar9 | uVar9 << 4) & 0xf0f0f0f0 | (uVar28 | uVar28 >> 4) & 0xf0f0f0f;
          puVar27[4] = *(undefined2 *)(lVar30 + lVar15);
          uVar28 = uVar28 | uVar28 >> 2;
          puVar27[5] = *(undefined2 *)(lVar30 + lVar21);
          uVar28 = (uVar28 | uVar28 >> 1) & 0x11111111;
          uVar28 = uVar28 | uVar28 >> 7;
          puVar27[6] = *(undefined2 *)(lVar30 + lVar22);
          bVar26 = (byte)uVar28 | (byte)(uVar28 >> 0xe);
          uVar12 = *(undefined2 *)(lVar30 + lVar23);
        }
        else {
          *puVar27 = *(undefined2 *)(lVar30 + lVar23);
          puVar27[1] = *(undefined2 *)(lVar30 + lVar22);
          puVar27[2] = *(undefined2 *)(lVar30 + lVar21);
          puVar27[3] = *(undefined2 *)(lVar30 + lVar15);
          uVar28 = (uVar28 | uVar28 << 4) & 0xf0f0f0f0 | (uVar9 | uVar9 >> 4) & 0xf0f0f0f;
          puVar27[4] = *(undefined2 *)(lVar30 + lVar20);
          uVar28 = uVar28 | uVar28 << 2;
          puVar27[5] = *(undefined2 *)(lVar30 + lVar19);
          uVar28 = (uVar28 | uVar28 << 1) & 0x88888888;
          puVar27[6] = *(undefined2 *)(lVar30 + lVar16);
          uVar28 = uVar28 | uVar28 >> 9;
          uVar12 = *(undefined2 *)(lVar30 + lVar14);
          bVar26 = (byte)uVar28 | (byte)(uVar28 >> 0x12);
        }
        *(byte *)puVar32 = bVar26;
        puVar27[7] = uVar12;
        puVar27 = puVar27 + 8;
        puVar32 = (undefined4 *)((long)puVar32 + 1);
      } while (puVar3 != puVar27);
    }
    else {
      lVar30 = *(long *)(param_1 + 0x18);
      if (lVar30 == 0) goto LAB_0013231c;
      puVar3 = puVar27 + uVar31 * 8;
      puVar32 = &local_30;
      do {
        while( true ) {
          lVar14 = uVar33 * 2;
          uVar28 = (int)uVar33 + 1U & 0x1f;
          uVar33 = (ulong)uVar28;
          uVar11 = *(ushort *)(lVar29 + lVar14);
          if (uVar28 == 0) {
            lVar29 = lVar1;
          }
          puVar4 = (uint *)(lVar34 + (ulong)((uVar11 & 0x3ff) * 0x40 + iVar8));
          puVar6 = (uint *)((long)puVar4 +
                           (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
          if ((uVar11 & 0x800) == 0) {
            puVar6 = puVar4;
          }
          uVar28 = *puVar6;
          uVar9 = puVar6[1];
          lVar14 = lVar30 + (ulong)(uVar11 >> 0xc) * 0x200;
          lVar19 = ((ulong)(uVar28 >> 8) & 0xff) * 2;
          lVar20 = ((ulong)(uVar28 >> 0x10) & 0xff) * 2;
          lVar21 = (ulong)(uVar28 >> 0x18) * 2;
          lVar22 = ((ulong)(uVar9 >> 8) & 0xff) * 2;
          lVar23 = ((ulong)(uVar9 >> 0x10) & 0xff) * 2;
          lVar24 = (ulong)(uVar9 >> 0x18) * 2;
          lVar15 = ((ulong)uVar28 & 0xff) * 2;
          lVar16 = ((ulong)uVar9 & 0xff) * 2;
          if ((uVar11 >> 10 & 1) != 0) break;
          *puVar27 = *(undefined2 *)(lVar14 + lVar15);
          puVar27[1] = *(undefined2 *)(lVar14 + lVar19);
          puVar27[2] = *(undefined2 *)(lVar14 + lVar20);
          puVar27[3] = *(undefined2 *)(lVar14 + lVar21);
          uVar28 = (uVar9 | uVar9 << 4) & 0xf0f0f0f0 | (uVar28 | uVar28 >> 4) & 0xf0f0f0f;
          puVar27[4] = *(undefined2 *)(lVar14 + lVar16);
          uVar28 = uVar28 | uVar28 >> 2;
          puVar27[5] = *(undefined2 *)(lVar14 + lVar22);
          uVar28 = (uVar28 | uVar28 >> 1) & 0x11111111;
          puVar27[6] = *(undefined2 *)(lVar14 + lVar23);
          uVar28 = uVar28 | uVar28 >> 7;
          uVar12 = *(undefined2 *)(lVar14 + lVar24);
          *(byte *)puVar32 = (byte)uVar28 | (byte)(uVar28 >> 0xe);
          puVar27[7] = uVar12;
          puVar27 = puVar27 + 8;
          puVar32 = (undefined4 *)((long)puVar32 + 1);
          if (puVar3 == puVar27) goto LAB_00132300;
        }
        *puVar27 = *(undefined2 *)(lVar14 + lVar24);
        puVar27[1] = *(undefined2 *)(lVar14 + lVar23);
        puVar27[2] = *(undefined2 *)(lVar14 + lVar22);
        puVar27[3] = *(undefined2 *)(lVar14 + lVar16);
        uVar28 = (uVar28 | uVar28 << 4) & 0xf0f0f0f0 | (uVar9 | uVar9 >> 4) & 0xf0f0f0f;
        puVar27[4] = *(undefined2 *)(lVar14 + lVar21);
        uVar28 = uVar28 | uVar28 << 2;
        puVar27[5] = *(undefined2 *)(lVar14 + lVar20);
        uVar28 = (uVar28 | uVar28 << 1) & 0x88888888;
        puVar27[6] = *(undefined2 *)(lVar14 + lVar19);
        uVar28 = uVar28 | uVar28 >> 9;
        uVar12 = *(undefined2 *)(lVar14 + lVar15);
        *(byte *)puVar32 = (byte)uVar28 | (byte)(uVar28 >> 0x12);
        puVar27[7] = uVar12;
        puVar27 = puVar27 + 8;
        puVar32 = (undefined4 *)((long)puVar32 + 1);
      } while (puVar3 != puVar27);
    }
  }
LAB_00132300:
  if ((uVar10 & 7) == 0) {
    *param_3 = CONCAT44(uStack_2c,local_30);
    param_3[1] = uStack_28;
    param_3[2] = CONCAT44(uStack_1c,local_20);
    param_3[3] = CONCAT71(uStack_17,uStack_18);
  }
  else {
    uVar18 = NEON_neg((ulong)uVar5,4);
    uVar39 = (undefined4)uVar18;
    iVar8 = 0x20 - uVar5;
    auVar40._4_4_ = uStack_2c;
    auVar40._0_4_ = local_30;
    auVar40._8_8_ = uStack_28;
    auVar35._4_4_ = iVar8;
    auVar35._0_4_ = iVar8;
    auVar35._8_4_ = iVar8;
    auVar35._12_4_ = iVar8;
    auVar41._4_8_ = uStack_28;
    auVar41._0_4_ = uStack_2c;
    auVar41._12_4_ = local_20;
    auVar36._4_4_ = uStack_1c;
    auVar36._0_4_ = local_20;
    auVar36[8] = uStack_18;
    auVar25[4] = uStack_18;
    auVar25._0_4_ = uStack_1c;
    auVar25._5_7_ = uStack_17;
    auVar25._12_4_ = uStack_10;
    auVar41 = NEON_sshl(auVar41,auVar35,4);
    auVar38._4_4_ = uVar39;
    auVar38._0_4_ = uVar39;
    auVar38._8_4_ = uVar39;
    auVar38._12_4_ = uVar39;
    auVar38 = NEON_ushl(auVar40,auVar38,4);
    auVar40 = NEON_sshl(auVar25,auVar35,4);
    auVar36[9] = (char)uStack_17;
    auVar36[10] = (char)((uint7)uStack_17 >> 8);
    auVar36[11] = (char)((uint7)uStack_17 >> 0x10);
    auVar36[12] = (char)((uint7)uStack_17 >> 0x18);
    auVar36[13] = (char)((uint7)uStack_17 >> 0x20);
    auVar36[14] = (char)((uint7)uStack_17 >> 0x28);
    auVar36[15] = (char)((uint7)uStack_17 >> 0x30);
    auVar17._4_4_ = uVar39;
    auVar17._0_4_ = uVar39;
    auVar17._8_4_ = uVar39;
    auVar17._12_4_ = uVar39;
    auVar36 = NEON_ushl(auVar36,auVar17,4);
    auVar37._0_8_ =
         CONCAT17(auVar36[7] | auVar40[7],
                  CONCAT16(auVar36[6] | auVar40[6],
                           CONCAT15(auVar36[5] | auVar40[5],
                                    CONCAT14(auVar36[4] | auVar40[4],
                                             CONCAT13(auVar36[3] | auVar40[3],
                                                      CONCAT12(auVar36[2] | auVar40[2],
                                                               CONCAT11(auVar36[1] | auVar40[1],
                                                                        auVar36[0] | auVar40[0])))))
                          ));
    auVar37[8] = auVar36[8] | auVar40[8];
    auVar37[9] = auVar36[9] | auVar40[9];
    auVar37[10] = auVar36[10] | auVar40[10];
    auVar37[11] = auVar36[11] | auVar40[11];
    auVar37[12] = auVar36[12] | auVar40[12];
    auVar37[13] = auVar36[13] | auVar40[13];
    auVar37[14] = auVar36[14] | auVar40[14];
    auVar37[15] = auVar36[15] | auVar40[15];
    param_3[1] = CONCAT17(auVar38[15] | auVar41[15],
                          CONCAT16(auVar38[14] | auVar41[14],
                                   CONCAT15(auVar38[13] | auVar41[13],
                                            CONCAT14(auVar38[12] | auVar41[12],
                                                     CONCAT13(auVar38[11] | auVar41[11],
                                                              CONCAT12(auVar38[10] | auVar41[10],
                                                                       CONCAT11(auVar38[9] |
                                                                                auVar41[9],
                                                                                auVar38[8] |
                                                                                auVar41[8])))))));
    *param_3 = CONCAT17(auVar38[7] | auVar41[7],
                        CONCAT16(auVar38[6] | auVar41[6],
                                 CONCAT15(auVar38[5] | auVar41[5],
                                          CONCAT14(auVar38[4] | auVar41[4],
                                                   CONCAT13(auVar38[3] | auVar41[3],
                                                            CONCAT12(auVar38[2] | auVar41[2],
                                                                     CONCAT11(auVar38[1] |
                                                                              auVar41[1],
                                                                              auVar38[0] |
                                                                              auVar41[0])))))));
    param_3[3] = auVar37._8_8_;
    param_3[2] = auVar37._0_8_;
  }
LAB_0013231c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


