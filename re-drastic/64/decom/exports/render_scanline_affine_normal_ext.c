/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_normal_ext
 * Address  : 001a4730
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_affine_normal_ext(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  int iVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  byte bVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  ulong uVar53;
  undefined auVar54 [16];
  byte bVar55;
  int iVar56;
  int iVar57;
  undefined auStack_590 [256];
  undefined8 auStack_490 [72];
  undefined auStack_250 [288];
  undefined auStack_130 [296];
  long local_8;
  uint uVar32;
  uint uVar33;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  
  sVar4 = *(short *)(param_1 + 0x9e);
  local_8 = ___stack_chk_guard;
  sVar5 = *(short *)(param_1 + 0xa0);
  lVar1 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x3c);
  uVar3 = *(ushort *)(param_1 + 0x98);
  iVar6 = *(int *)(param_1 + 0x90);
  uVar53 = (ulong)*(uint *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0xae) != '\0') {
    uVar53 = (ulong)*(uint *)(param_1 + 0x94);
    render_scanline_update_affine_variables();
  }
  if ((uVar3 >> 0xd & 1) == 0) {
    lVar17 = *(long *)(param_1 + 0x58);
    lVar16 = *(long *)(param_1 + 0x70);
    uVar10 = (uint)((ulong)lVar17 >> 0x20);
    uVar19 = (uint)((ulong)lVar16 >> 0x20);
    if ((int)uVar19 <= (int)uVar10) {
      uVar19 = uVar10;
    }
    uVar10 = (uint)((ulong)(lVar17 + *(long *)(param_1 + 0x60)) >> 0x20);
    uVar14 = (uint)((ulong)(lVar16 + *(long *)(param_1 + 0x78)) >> 0x20);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68) + lVar17;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80) + lVar16;
    if ((int)uVar14 < (int)uVar10) {
      uVar10 = uVar14;
    }
    if ((-1 < (int)uVar10) && ((int)uVar19 < 0x100)) {
      if ((int)uVar19 < 0) {
        uVar19 = 0;
      }
      if (0xff < (int)uVar10) {
        uVar10 = 0xff;
      }
      iVar18 = uVar10 - uVar19;
      if (-1 < iVar18) {
        uVar11 = render_scanline_affine_setup_arrays_normal
                           (param_1,auStack_250,auStack_490,lVar1,auStack_590,auStack_130,
                            iVar6 + (int)sVar4 * uVar19,(int)uVar53 + (int)sVar5 * uVar19,iVar18);
        lVar1 = param_2 + 0x100 + (long)(int)uVar19;
        render_scanline_affine_render_tiles_normal_normal_asm
                  (lVar1,auStack_590,auStack_250,auStack_490,uVar11,lVar2);
        render_scanline_set_visibility_8bpp_asm(param_3,param_2 + 0x100);
        render_scanline_palette_lookup_8bpp_asm
                  (param_2 + (long)(int)uVar19 * 2,lVar1,uVar15,iVar18 + 1);
        auVar41._0_4_ = uVar19 >> 5;
        auVar28._0_4_ = uVar10 >> 5;
        auVar41._4_4_ = auVar41._0_4_;
        auVar41._8_4_ = auVar41._0_4_;
        auVar41._12_4_ = auVar41._0_4_;
        auVar28._4_4_ = auVar28._0_4_;
        auVar28._8_4_ = auVar28._0_4_;
        auVar28._12_4_ = auVar28._0_4_;
        iVar6 = -1 << (ulong)(uVar19 & 0x1f);
        auVar27 = NEON_cmhi(_DAT_0021dca0,auVar41,4);
        auVar42._12_4_ = 7;
        auVar42._0_12_ = _DAT_00228150;
        auVar46 = NEON_cmhi(auVar42,auVar41,4);
        auVar42 = NEON_cmhi(auVar28,_DAT_0021dca0,4);
        auVar48._12_4_ = 7;
        auVar48._0_12_ = _DAT_00228150;
        auVar23 = NEON_cmhi(auVar28,auVar48,4);
        auVar40._0_5_ = CONCAT14(auVar27[4],(uint)(auVar27[0] & 1)) & 0x1ffffffff;
        auVar40._5_3_ = 0;
        auVar40[8] = auVar27[8] & 1;
        auVar40._9_3_ = 0;
        auVar40[12] = auVar27[12] & 1;
        auVar40._13_3_ = 0;
        auVar47._0_5_ = CONCAT14(auVar46[4],(uint)(auVar46[0] & 1)) & 0x1ffffffff;
        auVar47._5_3_ = 0;
        auVar47[8] = auVar46[8] & 1;
        auVar47._9_3_ = 0;
        auVar47[12] = auVar46[12] & 1;
        auVar47._13_3_ = 0;
        auVar43._0_5_ = CONCAT14(auVar42[4],(uint)(auVar42[0] & 1)) & 0x1ffffffff;
        auVar43._5_3_ = 0;
        auVar43[8] = auVar42[8] & 1;
        auVar43._9_3_ = 0;
        auVar43[12] = auVar42[12] & 1;
        auVar43._13_3_ = 0;
        iVar18 = -2 << (ulong)(uVar10 & 0x1f);
        auVar31._0_8_ =
             (ulong)(CONCAT14(auVar23[4],(uint)auVar23[0]) & 0x1ffffffff) & 0xffffffffffffff01;
        auVar31[8] = auVar23[8] & 1;
        auVar31._9_3_ = 0;
        auVar31[12] = auVar23[12] & 1;
        auVar31._13_3_ = 0;
        uVar49 = (undefined)iVar6;
        uVar50 = (undefined)((uint)iVar6 >> 8);
        uVar51 = (undefined)((uint)iVar6 >> 0x10);
        uVar52 = (undefined)((uint)iVar6 >> 0x18);
        auVar54 = NEON_neg(auVar40,4);
        auVar48 = NEON_neg(auVar47,4);
        auVar27 = NEON_cmeq(auVar41,_DAT_0021dca0,4);
        auVar39._0_4_ =
             CONCAT13(~(byte)((uint)iVar18 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar18 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)));
        auVar46._12_4_ = 7;
        auVar46._0_12_ = _DAT_00228150;
        auVar42 = NEON_cmeq(auVar41,auVar46,4);
        auVar46 = NEON_cmeq(auVar28,_DAT_0021dca0,4);
        auVar23[4] = uVar49;
        auVar23._0_4_ = iVar6;
        auVar23[5] = uVar50;
        auVar23[6] = uVar51;
        auVar23[7] = uVar52;
        auVar23[8] = uVar49;
        auVar23[9] = uVar50;
        auVar23[10] = uVar51;
        auVar23[11] = uVar52;
        auVar23[12] = uVar49;
        auVar23[13] = uVar50;
        auVar23[14] = uVar51;
        auVar23[15] = uVar52;
        auVar41 = NEON_bsl(auVar27,auVar23,auVar54,1);
        auVar39._4_4_ = auVar39._0_4_;
        auVar39._8_4_ = auVar39._0_4_;
        auVar39._12_4_ = auVar39._0_4_;
        auVar27[4] = uVar49;
        auVar27._0_4_ = iVar6;
        auVar27[5] = uVar50;
        auVar27[6] = uVar51;
        auVar27[7] = uVar52;
        auVar27[8] = uVar49;
        auVar27[9] = uVar50;
        auVar27[10] = uVar51;
        auVar27[11] = uVar52;
        auVar27[12] = uVar49;
        auVar27[13] = uVar50;
        auVar27[14] = uVar51;
        auVar27[15] = uVar52;
        auVar27 = NEON_bsl(auVar42,auVar27,auVar48,1);
        auVar44 = NEON_neg(auVar43,4);
        auVar54._12_4_ = 7;
        auVar54._0_12_ = _DAT_00228150;
        auVar42 = NEON_cmeq(auVar28,auVar54,4);
        auVar48 = NEON_neg(auVar31,4);
        uVar7 = param_3[1];
        uVar15 = *param_3;
        auVar23 = *(undefined (*) [16])(param_3 + 2);
        auVar46 = NEON_bsl(auVar46,auVar39,auVar44,1);
        auVar42 = NEON_bsl(auVar42,auVar39,auVar48,1);
        auVar44._0_8_ =
             CONCAT17(auVar27[7] & auVar23[7] & auVar42[7],
                      CONCAT16(auVar27[6] & auVar23[6] & auVar42[6],
                               CONCAT15(auVar27[5] & auVar23[5] & auVar42[5],
                                        CONCAT14(auVar27[4] & auVar23[4] & auVar42[4],
                                                 CONCAT13(auVar27[3] & auVar23[3] & auVar42[3],
                                                          CONCAT12(auVar27[2] & auVar23[2] &
                                                                   auVar42[2],
                                                                   CONCAT11(auVar27[1] & auVar23[1]
                                                                            & auVar42[1],
                                                                            auVar27[0] & auVar23[0]
                                                                            & auVar42[0])))))));
        auVar44[8] = auVar27[8] & auVar23[8] & auVar42[8];
        auVar44[9] = auVar27[9] & auVar23[9] & auVar42[9];
        auVar44[10] = auVar27[10] & auVar23[10] & auVar42[10];
        auVar44[11] = auVar27[11] & auVar23[11] & auVar42[11];
        auVar44[12] = auVar27[12] & auVar23[12] & auVar42[12];
        auVar44[13] = auVar27[13] & auVar23[13] & auVar42[13];
        auVar44[14] = auVar27[14] & auVar23[14] & auVar42[14];
        auVar44[15] = auVar27[15] & auVar23[15] & auVar42[15];
        *(byte *)(param_3 + 2) = auVar41[8] & (byte)uVar7 & auVar46[8];
        *(byte *)((long)param_3 + 0x11) = auVar41[9] & (byte)((ulong)uVar7 >> 8) & auVar46[9];
        *(byte *)((long)param_3 + 0x12) = auVar41[10] & (byte)((ulong)uVar7 >> 0x10) & auVar46[10];
        *(byte *)((long)param_3 + 0x13) = auVar41[11] & (byte)((ulong)uVar7 >> 0x18) & auVar46[11];
        *(byte *)((long)param_3 + 0x14) = auVar41[12] & (byte)((ulong)uVar7 >> 0x20) & auVar46[12];
        *(byte *)((long)param_3 + 0x15) = auVar41[13] & (byte)((ulong)uVar7 >> 0x28) & auVar46[13];
        *(byte *)((long)param_3 + 0x16) = auVar41[14] & (byte)((ulong)uVar7 >> 0x30) & auVar46[14];
        *(byte *)((long)param_3 + 0x17) = auVar41[15] & (byte)((ulong)uVar7 >> 0x38) & auVar46[15];
        *(byte *)param_3 = auVar41[0] & (byte)uVar15 & auVar46[0];
        *(byte *)((long)param_3 + 1) = auVar41[1] & (byte)((ulong)uVar15 >> 8) & auVar46[1];
        *(byte *)((long)param_3 + 2) = auVar41[2] & (byte)((ulong)uVar15 >> 0x10) & auVar46[2];
        *(byte *)((long)param_3 + 3) = auVar41[3] & (byte)((ulong)uVar15 >> 0x18) & auVar46[3];
        *(byte *)((long)param_3 + 4) = auVar41[4] & (byte)((ulong)uVar15 >> 0x20) & auVar46[4];
        *(byte *)((long)param_3 + 5) = auVar41[5] & (byte)((ulong)uVar15 >> 0x28) & auVar46[5];
        *(byte *)((long)param_3 + 6) = auVar41[6] & (byte)((ulong)uVar15 >> 0x30) & auVar46[6];
        *(byte *)((long)param_3 + 7) = auVar41[7] & (byte)((ulong)uVar15 >> 0x38) & auVar46[7];
        param_3[3] = auVar44._8_8_;
        param_3[2] = auVar44._0_8_;
        goto LAB_001a4af0;
      }
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  else {
    sVar4 = *(short *)(param_1 + 0x9e);
    sVar5 = *(short *)(param_1 + 0xa0);
    if ((((int)sVar4 + 0x7ffU & 0xffff) < 0xfff) && (((int)sVar5 + 0x7ffU & 0xffff) < 0xfff)) {
      uVar11 = render_scanline_affine_setup_arrays_normal
                         (param_1,auStack_250,auStack_490,lVar1,auStack_590,auStack_130,iVar6,
                          uVar53 & 0xffffffff,0xff);
    }
    else {
      memset(auStack_250,1,0x100);
      iVar20 = iVar6 + sVar4;
      iVar18 = (int)sVar4;
      iVar25 = iVar18 + iVar20;
      auVar34._4_4_ = iVar20;
      auVar34._0_4_ = iVar6;
      iVar20 = (int)sVar5;
      bVar45 = *(byte *)(param_1 + 0xab);
      iVar21 = (int)uVar53 + iVar20;
      auVar34._8_4_ = iVar25;
      bVar55 = *(byte *)(param_1 + 0xac);
      auVar29._4_4_ = iVar21;
      auVar29._0_4_ = (int)uVar53;
      iVar21 = sVar5 + iVar21;
      auVar29._8_4_ = iVar21;
      iVar57 = iVar20 * 8;
      iVar56 = iVar20 * 4;
      auVar34._12_4_ = iVar18 + iVar25;
      auVar29._12_4_ = iVar20 + iVar21;
      iVar25 = iVar18 * 8;
      iVar21 = iVar18 * 4;
      puVar12 = auStack_490;
      do {
        uVar19 = auVar29._0_4_;
        auVar30._0_4_ = uVar19 + iVar57;
        uVar10 = auVar29._4_4_;
        auVar30._4_4_ = uVar10 + iVar57;
        uVar14 = auVar29._8_4_;
        uVar32 = auVar29._12_4_;
        auVar30._8_4_ = uVar14 + iVar57;
        auVar30._12_4_ = uVar32 + iVar57;
        uVar33 = auVar34._0_4_;
        auVar35._0_4_ = uVar33 + iVar25;
        uVar36 = auVar34._4_4_;
        auVar35._4_4_ = uVar36 + iVar25;
        uVar37 = auVar34._8_4_;
        uVar38 = auVar34._12_4_;
        auVar35._8_4_ = uVar37 + iVar25;
        auVar35._12_4_ = uVar38 + iVar25;
        auVar22[0] = (byte)(uVar19 >> 0xb) & bVar45;
        auVar22._1_3_ = 0;
        auVar22[4] = (byte)(uVar10 >> 0xb) & bVar45;
        auVar22._5_3_ = 0;
        auVar22[8] = (byte)(uVar14 >> 0xb) & bVar45;
        auVar22._9_3_ = 0;
        auVar22[12] = (byte)(uVar32 >> 0xb) & bVar45;
        auVar22._13_3_ = 0;
        auVar26[0] = (byte)(iVar56 + uVar19 >> 0xb) & bVar45;
        auVar26._1_3_ = 0;
        auVar26[4] = (byte)(iVar56 + uVar10 >> 0xb) & bVar45;
        auVar26._5_3_ = 0;
        auVar26[8] = (byte)(iVar56 + uVar14 >> 0xb) & bVar45;
        auVar26._9_3_ = 0;
        auVar26[12] = (byte)(iVar56 + uVar32 >> 0xb) & bVar45;
        auVar26._13_3_ = 0;
        auVar8[4] = bVar55;
        auVar8._0_4_ = CONCAT31(0,bVar55);
        auVar8._5_3_ = 0;
        auVar8[8] = bVar55;
        auVar8._9_3_ = 0;
        auVar8[12] = bVar55;
        auVar8._13_3_ = 0;
        auVar23 = NEON_sshl(auVar22,auVar8,4);
        auVar9[4] = bVar55;
        auVar9._0_4_ = CONCAT31(0,bVar55);
        auVar9._5_3_ = 0;
        auVar9[8] = bVar55;
        auVar9._9_3_ = 0;
        auVar9[12] = bVar55;
        auVar9._13_3_ = 0;
        auVar27 = NEON_sshl(auVar26,auVar9,4);
        auVar24._0_8_ =
             CONCAT26(auVar23._12_2_ + (ushort)((byte)(uVar38 >> 0xb) & bVar45),
                      CONCAT24(auVar23._8_2_ + (ushort)((byte)(uVar37 >> 0xb) & bVar45),
                               CONCAT22(auVar23._4_2_ + (ushort)((byte)(uVar36 >> 0xb) & bVar45),
                                        auVar23._0_2_ + (ushort)((byte)(uVar33 >> 0xb) & bVar45))));
        auVar24._8_2_ = auVar27._0_2_ + (ushort)((byte)(iVar21 + uVar33 >> 0xb) & bVar45);
        auVar24._10_2_ = auVar27._4_2_ + (ushort)((byte)(iVar21 + uVar36 >> 0xb) & bVar45);
        auVar24._12_2_ = auVar27._8_2_ + (ushort)((byte)(iVar21 + uVar37 >> 0xb) & bVar45);
        auVar24._14_2_ = auVar27._12_2_ + (ushort)((byte)(iVar21 + uVar38 >> 0xb) & bVar45);
        puVar13 = puVar12 + 2;
        puVar12[1] = auVar24._8_8_;
        *puVar12 = auVar24._0_8_;
        puVar12 = puVar13;
        auVar29 = auVar30;
        auVar34 = auVar35;
      } while (auStack_490 + 0x40 != puVar13);
      render_scanline_affine_setup_tile_offsets_asm
                (auStack_590,iVar6,uVar53 & 0xffffffff,iVar18,iVar20,0x100);
      render_scanline_affine_load_tile_map_entries_normal_asm(auStack_490,lVar1,0xff);
      uVar11 = 0x100;
    }
    lVar1 = param_2 + 0x100;
    render_scanline_affine_render_tiles_normal_normal_asm
              (lVar1,auStack_590,auStack_250,auStack_490,uVar11,lVar2);
    render_scanline_set_visibility_8bpp_asm(param_3,lVar1);
    render_scanline_palette_lookup_8bpp_asm(param_2,lVar1,uVar15,0x100);
  }
LAB_001a4af0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


