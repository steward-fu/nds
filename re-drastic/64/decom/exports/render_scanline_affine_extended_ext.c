/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_extended_ext
 * Address  : 001a4b90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_affine_extended_ext(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  uint uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  undefined8 uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  int iVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar42 [13];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [13];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [13];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined uVar63;
  undefined uVar64;
  undefined uVar65;
  undefined uVar66;
  ulong uVar67;
  byte bVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  undefined auStack_590 [256];
  undefined8 auStack_490 [72];
  undefined auStack_250 [288];
  undefined auStack_130 [296];
  long local_8;
  uint uVar40;
  uint uVar41;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined auVar60 [16];
  
  sVar4 = *(short *)(param_1 + 0x9e);
  local_8 = ___stack_chk_guard;
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  sVar5 = *(short *)(param_1 + 0xa0);
  lVar1 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x3c);
  lVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x38);
  uVar3 = *(ushort *)(param_1 + 0x98);
  iVar8 = *(int *)(param_1 + 0x90);
  uVar67 = (ulong)*(uint *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0xae) != '\0') {
    uVar67 = (ulong)*(uint *)(param_1 + 0x94);
    render_scanline_update_affine_variables();
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    if (*(char *)(param_1 + 0xad) == '\0') {
      sVar4 = *(short *)(param_1 + 0x9e);
      iVar17 = (int)*(short *)(param_1 + 0xa0);
      if ((((int)sVar4 + 0x7ffU & 0xffff) < 0xfff) && ((iVar17 + 0x7ffU & 0xffff) < 0xfff)) {
        uVar13 = render_scanline_affine_setup_arrays_extended
                           (param_1,auStack_250,auStack_490,lVar2,auStack_590,auStack_130,iVar8,
                            uVar67 & 0xffffffff,0xff);
      }
      else {
        memset(auStack_250,1,0x100);
        iVar24 = iVar8 + sVar4;
        iVar23 = (int)sVar4;
        iVar32 = iVar23 + iVar24;
        auVar44._4_4_ = iVar24;
        auVar44._0_4_ = iVar8;
        iVar24 = (int)uVar67 + iVar17;
        auVar44._8_4_ = iVar32;
        bVar68 = *(byte *)(param_1 + 0xab);
        auVar62[0] = *(byte *)(param_1 + 0xac);
        auVar38._4_4_ = iVar24;
        auVar38._0_4_ = (int)uVar67;
        iVar24 = iVar24 + iVar17;
        auVar38._8_4_ = iVar24;
        iVar70 = iVar17 * 8;
        iVar69 = iVar17 * 4;
        auVar38._12_4_ = iVar24 + iVar17;
        auVar62._1_3_ = 0;
        auVar62[4] = auVar62[0];
        auVar62._5_3_ = 0;
        auVar62[8] = auVar62[0];
        auVar62._9_3_ = 0;
        auVar62[12] = auVar62[0];
        auVar62._13_3_ = 0;
        iVar71 = iVar23 * 8;
        iVar24 = iVar23 * 4;
        auVar44._12_4_ = iVar23 + iVar32;
        puVar14 = auStack_490;
        do {
          uVar20 = auVar38._0_4_;
          auVar39._0_4_ = uVar20 + iVar70;
          uVar12 = auVar38._4_4_;
          auVar39._4_4_ = uVar12 + iVar70;
          uVar16 = auVar38._8_4_;
          uVar40 = auVar38._12_4_;
          auVar39._8_4_ = uVar16 + iVar70;
          auVar39._12_4_ = uVar40 + iVar70;
          uVar41 = auVar44._0_4_;
          auVar45._0_4_ = uVar41 + iVar71;
          uVar46 = auVar44._4_4_;
          auVar45._4_4_ = uVar46 + iVar71;
          uVar47 = auVar44._8_4_;
          uVar48 = auVar44._12_4_;
          auVar45._8_4_ = uVar47 + iVar71;
          auVar45._12_4_ = uVar48 + iVar71;
          auVar30[0] = (byte)(uVar20 >> 0xb) & bVar68;
          auVar30._1_3_ = 0;
          auVar30[4] = (byte)(uVar12 >> 0xb) & bVar68;
          auVar30._5_3_ = 0;
          auVar30[8] = (byte)(uVar16 >> 0xb) & bVar68;
          auVar30._9_3_ = 0;
          auVar30[12] = (byte)(uVar40 >> 0xb) & bVar68;
          auVar30._13_3_ = 0;
          auVar35[0] = (byte)(uVar20 + iVar69 >> 0xb) & bVar68;
          auVar35._1_3_ = 0;
          auVar35[4] = (byte)(uVar12 + iVar69 >> 0xb) & bVar68;
          auVar35._5_3_ = 0;
          auVar35[8] = (byte)(uVar16 + iVar69 >> 0xb) & bVar68;
          auVar35._9_3_ = 0;
          auVar35[12] = (byte)(uVar40 + iVar69 >> 0xb) & bVar68;
          auVar35._13_3_ = 0;
          auVar26 = NEON_sshl(auVar30,auVar62,4);
          auVar34 = NEON_sshl(auVar35,auVar62,4);
          auVar31._0_8_ =
               CONCAT26((auVar26._12_2_ + (ushort)((byte)(uVar48 >> 0xb) & bVar68)) * 2,
                        CONCAT24((auVar26._8_2_ + (ushort)((byte)(uVar47 >> 0xb) & bVar68)) * 2,
                                 CONCAT22((auVar26._4_2_ + (ushort)((byte)(uVar46 >> 0xb) & bVar68))
                                          * 2,(auVar26._0_2_ +
                                              (ushort)((byte)(uVar41 >> 0xb) & bVar68)) * 2)));
          auVar31._8_2_ = (auVar34._0_2_ + (ushort)((byte)(iVar24 + uVar41 >> 0xb) & bVar68)) * 2;
          auVar31._10_2_ = (auVar34._4_2_ + (ushort)((byte)(iVar24 + uVar46 >> 0xb) & bVar68)) * 2;
          auVar31._12_2_ = (auVar34._8_2_ + (ushort)((byte)(iVar24 + uVar47 >> 0xb) & bVar68)) * 2;
          auVar31._14_2_ = (auVar34._12_2_ + (ushort)((byte)(iVar24 + uVar48 >> 0xb) & bVar68)) * 2;
          puVar15 = puVar14 + 2;
          puVar14[1] = auVar31._8_8_;
          *puVar14 = auVar31._0_8_;
          puVar14 = puVar15;
          auVar38 = auVar39;
          auVar44 = auVar45;
        } while (auStack_490 + 0x40 != puVar15);
        render_scanline_affine_setup_tile_offsets_asm
                  (auStack_590,iVar8,uVar67 & 0xffffffff,iVar23,iVar17,0x100);
        render_scanline_affine_load_tile_map_entries_extended_asm(auStack_490,lVar2,0xff);
        render_scanline_affine_setup_flip_masks_asm(auStack_130,auStack_490,0xff);
        uVar13 = 0x100;
      }
      lVar2 = param_2 + 0x100;
      render_scanline_affine_render_tiles_extended_normal_asm
                (lVar2,auStack_590,auStack_250,auStack_490,auStack_130,uVar13,lVar1);
      render_scanline_set_visibility_8bpp_asm(param_3,lVar2);
      render_scanline_palette_lookup_8bpp_asm(param_2,lVar2,uVar21,0x100);
    }
    else {
      lVar22 = *(long *)(param_1 + 0x18);
      if (lVar22 != 0) {
        sVar4 = *(short *)(param_1 + 0x9e);
        iVar17 = (int)*(short *)(param_1 + 0xa0);
        if ((((int)sVar4 + 0x7ffU & 0xffff) < 0xfff) && ((iVar17 + 0x7ffU & 0xffff) < 0xfff)) {
          uVar13 = render_scanline_affine_setup_arrays_extended
                             (param_1,auStack_250,auStack_490,lVar2,auStack_590,auStack_130,iVar8,
                              uVar67 & 0xffffffff,0xff);
        }
        else {
          memset(auStack_250,1,0x100);
          iVar24 = iVar8 + sVar4;
          iVar23 = (int)sVar4;
          iVar32 = iVar23 + iVar24;
          auVar54._4_4_ = iVar24;
          auVar54._0_4_ = iVar8;
          iVar24 = (int)uVar67 + iVar17;
          auVar54._8_4_ = iVar32;
          bVar68 = *(byte *)(param_1 + 0xab);
          auVar58[0] = *(byte *)(param_1 + 0xac);
          auVar49._4_4_ = iVar24;
          auVar49._0_4_ = (int)uVar67;
          iVar24 = iVar17 + iVar24;
          auVar49._8_4_ = iVar24;
          iVar70 = iVar17 * 8;
          iVar69 = iVar17 * 4;
          auVar49._12_4_ = iVar17 + iVar24;
          auVar58._1_3_ = 0;
          auVar58[4] = auVar58[0];
          auVar58._5_3_ = 0;
          auVar58[8] = auVar58[0];
          auVar58._9_3_ = 0;
          auVar58[12] = auVar58[0];
          auVar58._13_3_ = 0;
          iVar71 = iVar23 * 8;
          iVar24 = iVar23 * 4;
          auVar54._12_4_ = iVar23 + iVar32;
          puVar14 = auStack_490;
          do {
            uVar20 = auVar49._0_4_;
            auVar50._0_4_ = uVar20 + iVar70;
            uVar12 = auVar49._4_4_;
            auVar50._4_4_ = uVar12 + iVar70;
            uVar16 = auVar49._8_4_;
            uVar40 = auVar49._12_4_;
            auVar50._8_4_ = uVar16 + iVar70;
            auVar50._12_4_ = uVar40 + iVar70;
            uVar41 = auVar54._0_4_;
            auVar55._0_4_ = uVar41 + iVar71;
            uVar46 = auVar54._4_4_;
            auVar55._4_4_ = uVar46 + iVar71;
            uVar47 = auVar54._8_4_;
            uVar48 = auVar54._12_4_;
            auVar55._8_4_ = uVar47 + iVar71;
            auVar55._12_4_ = uVar48 + iVar71;
            auVar25[0] = (byte)(uVar20 >> 0xb) & bVar68;
            auVar25._1_3_ = 0;
            auVar25[4] = (byte)(uVar12 >> 0xb) & bVar68;
            auVar25._5_3_ = 0;
            auVar25[8] = (byte)(uVar16 >> 0xb) & bVar68;
            auVar25._9_3_ = 0;
            auVar25[12] = (byte)(uVar40 >> 0xb) & bVar68;
            auVar25._13_3_ = 0;
            auVar33[0] = (byte)(iVar69 + uVar20 >> 0xb) & bVar68;
            auVar33._1_3_ = 0;
            auVar33[4] = (byte)(iVar69 + uVar12 >> 0xb) & bVar68;
            auVar33._5_3_ = 0;
            auVar33[8] = (byte)(iVar69 + uVar16 >> 0xb) & bVar68;
            auVar33._9_3_ = 0;
            auVar33[12] = (byte)(iVar69 + uVar40 >> 0xb) & bVar68;
            auVar33._13_3_ = 0;
            auVar26 = NEON_sshl(auVar25,auVar58,4);
            auVar34 = NEON_sshl(auVar33,auVar58,4);
            auVar27._0_8_ =
                 CONCAT26((auVar26._12_2_ + (ushort)((byte)(uVar48 >> 0xb) & bVar68)) * 2,
                          CONCAT24((auVar26._8_2_ + (ushort)((byte)(uVar47 >> 0xb) & bVar68)) * 2,
                                   CONCAT22((auVar26._4_2_ +
                                            (ushort)((byte)(uVar46 >> 0xb) & bVar68)) * 2,
                                            (auVar26._0_2_ +
                                            (ushort)((byte)(uVar41 >> 0xb) & bVar68)) * 2)));
            auVar27._8_2_ = (auVar34._0_2_ + (ushort)((byte)(iVar24 + uVar41 >> 0xb) & bVar68)) * 2;
            auVar27._10_2_ = (auVar34._4_2_ + (ushort)((byte)(iVar24 + uVar46 >> 0xb) & bVar68)) * 2
            ;
            auVar27._12_2_ = (auVar34._8_2_ + (ushort)((byte)(iVar24 + uVar47 >> 0xb) & bVar68)) * 2
            ;
            auVar27._14_2_ =
                 (auVar34._12_2_ + (ushort)((byte)(iVar24 + uVar48 >> 0xb) & bVar68)) * 2;
            puVar15 = puVar14 + 2;
            puVar14[1] = auVar27._8_8_;
            *puVar14 = auVar27._0_8_;
            puVar14 = puVar15;
            auVar49 = auVar50;
            auVar54 = auVar55;
          } while (auStack_490 + 0x40 != puVar15);
          render_scanline_affine_setup_tile_offsets_asm
                    (auStack_590,iVar8,uVar67 & 0xffffffff,iVar23,iVar17,0x100);
          render_scanline_affine_load_tile_map_entries_extended_asm(auStack_490,lVar2,0xff);
          render_scanline_affine_setup_flip_masks_asm(auStack_130,auStack_490,0xff);
          uVar13 = 0x100;
        }
        render_scanline_affine_render_tiles_extended_extended_asm
                  (param_2,auStack_590,auStack_250,auStack_490,auStack_130,uVar13,lVar1);
        render_scanline_set_visibility_12bpp_asm(param_3,param_2);
        render_scanline_palette_lookup_12bpp_asm(param_2,param_2,lVar22,0x100);
      }
    }
    goto LAB_001a5294;
  }
  if (*(char *)(param_1 + 0xad) == '\0') {
    lVar18 = *(long *)(param_1 + 0x58);
    lVar22 = *(long *)(param_1 + 0x70);
    uVar20 = (uint)((ulong)lVar22 >> 0x20);
    uVar12 = (uint)((ulong)lVar18 >> 0x20);
    if ((int)uVar20 <= (int)uVar12) {
      uVar20 = uVar12;
    }
    uVar12 = (uint)((ulong)(lVar18 + *(long *)(param_1 + 0x60)) >> 0x20);
    uVar16 = (uint)((ulong)(lVar22 + *(long *)(param_1 + 0x78)) >> 0x20);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68) + lVar18;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80) + lVar22;
    if ((int)uVar16 < (int)uVar12) {
      uVar12 = uVar16;
    }
    if ((-1 < (int)uVar12) && ((int)uVar20 < 0x100)) {
      if ((int)uVar20 < 0) {
        uVar20 = 0;
      }
      if (0xff < (int)uVar12) {
        uVar12 = 0xff;
      }
      iVar17 = uVar12 - uVar20;
      if (-1 < iVar17) {
        uVar13 = render_scanline_affine_setup_arrays_extended
                           (param_1,auStack_250,auStack_490,lVar2,auStack_590,auStack_130,
                            iVar8 + uVar20 * (int)sVar4,(int)uVar67 + uVar20 * (int)sVar5,iVar17);
        lVar2 = param_2 + 0x100 + (long)(int)uVar20;
        render_scanline_affine_render_tiles_extended_normal_asm
                  (lVar2,auStack_590,auStack_250,auStack_490,auStack_130,uVar13,lVar1);
        render_scanline_set_visibility_8bpp_asm(param_3,param_2 + 0x100);
        render_scanline_palette_lookup_8bpp_asm
                  (param_2 + (long)(int)uVar20 * 2,lVar2,uVar21,iVar17 + 1);
        auVar28._0_4_ = uVar20 >> 5;
        auVar37._0_4_ = uVar12 >> 5;
        auVar28._4_4_ = auVar28._0_4_;
        auVar28._8_4_ = auVar28._0_4_;
        auVar28._12_4_ = auVar28._0_4_;
        iVar8 = -1 << (ulong)(uVar20 & 0x1f);
        auVar37._4_4_ = auVar37._0_4_;
        auVar37._8_4_ = auVar37._0_4_;
        auVar37._12_4_ = auVar37._0_4_;
        auVar34 = NEON_cmhi(_DAT_0021dca0,auVar28,4);
        auVar26._9_3_ = 0;
        auVar26._0_9_ = _DAT_00228150;
        auVar26[12] = 7;
        auVar26._13_3_ = 0;
        auVar52 = NEON_cmhi(auVar26,auVar28,4);
        uVar63 = (undefined)iVar8;
        uVar64 = (undefined)((uint)iVar8 >> 8);
        uVar65 = (undefined)((uint)iVar8 >> 0x10);
        uVar66 = (undefined)((uint)iVar8 >> 0x18);
        auVar26 = NEON_cmhi(auVar37,_DAT_0021dca0,4);
        auVar53 = auVar26._0_13_;
        auVar59._0_5_ = CONCAT14(auVar34[4],(uint)(auVar34[0] & 1)) & 0x1ffffffff;
        auVar59._5_3_ = 0;
        auVar59[8] = auVar34[8] & 1;
        auVar59._9_3_ = 0;
        auVar59[12] = auVar34[12] & 1;
        auVar59._13_3_ = 0;
        auVar34._9_3_ = 0;
        auVar34._0_9_ = _DAT_00228150;
        auVar34[12] = 7;
        auVar34._13_3_ = 0;
        auVar26 = NEON_cmhi(auVar37,auVar34,4);
        auVar42 = auVar26._0_13_;
        auVar57._0_5_ = CONCAT14(auVar52[4],(uint)(auVar52[0] & 1)) & 0x1ffffffff;
        auVar57._5_3_ = 0;
        auVar57[8] = auVar52[8] & 1;
        auVar57._9_3_ = 0;
        auVar57[12] = auVar52[12] & 1;
        auVar34 = NEON_neg(auVar59,4);
        auVar26 = NEON_cmeq(auVar28,_DAT_0021dca0,4);
LAB_001a4f28:
        auVar60._13_3_ = 0;
        auVar60._0_13_ = auVar57;
        auVar56._0_5_ = CONCAT14(auVar53[4],(uint)(auVar53[0] & 1)) & 0x1ffffffff;
        auVar56._5_3_ = 0;
        auVar56[8] = auVar53[8] & 1;
        auVar56._9_3_ = 0;
        auVar56[12] = auVar53[12] & 1;
        auVar56._13_3_ = 0;
        iVar8 = -2 << (ulong)(uVar12 & 0x1f);
        auVar36._0_5_ = CONCAT14(auVar42[4],(uint)(auVar42[0] & 1)) & 0x1ffffffff;
        auVar36._5_3_ = 0;
        auVar36[8] = auVar42[8] & 1;
        auVar36._9_3_ = 0;
        auVar36[12] = auVar42[12] & 1;
        auVar36._13_3_ = 0;
        auVar61 = NEON_neg(auVar60,4);
        auVar10[8] = 6;
        auVar10._0_8_ = 0x500000004;
        auVar10._9_3_ = 0;
        auVar10[12] = 7;
        auVar10._13_3_ = 0;
        auVar28 = NEON_cmeq(auVar28,auVar10,4);
        auVar43._0_4_ =
             CONCAT13(~(byte)((uint)iVar8 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar8 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar8 >> 8),~(byte)iVar8)));
        auVar6[1] = uVar64;
        auVar6[0] = uVar63;
        auVar6[2] = uVar65;
        auVar6[3] = uVar66;
        auVar6[4] = uVar63;
        auVar6[5] = uVar64;
        auVar6[6] = uVar65;
        auVar6[7] = uVar66;
        auVar6[8] = uVar63;
        auVar6[9] = uVar64;
        auVar6[10] = uVar65;
        auVar6[11] = uVar66;
        auVar6[12] = uVar63;
        auVar6[13] = uVar64;
        auVar6[14] = uVar65;
        auVar6[15] = uVar66;
        auVar52 = NEON_bsl(auVar26,auVar6,auVar34,1);
        auVar59 = NEON_cmeq(auVar37,_DAT_0021dca0,4);
        auVar7[1] = uVar64;
        auVar7[0] = uVar63;
        auVar7[2] = uVar65;
        auVar7[3] = uVar66;
        auVar7[4] = uVar63;
        auVar7[5] = uVar64;
        auVar7[6] = uVar65;
        auVar7[7] = uVar66;
        auVar7[8] = uVar63;
        auVar7[9] = uVar64;
        auVar7[10] = uVar65;
        auVar7[11] = uVar66;
        auVar7[12] = uVar63;
        auVar7[13] = uVar64;
        auVar7[14] = uVar65;
        auVar7[15] = uVar66;
        auVar34 = NEON_bsl(auVar28,auVar7,auVar61,1);
        auVar43._4_4_ = auVar43._0_4_;
        auVar43._8_4_ = auVar43._0_4_;
        auVar43._12_4_ = auVar43._0_4_;
        auVar61 = NEON_neg(auVar56,4);
        auVar11[8] = 6;
        auVar11._0_8_ = 0x500000004;
        auVar11._9_3_ = 0;
        auVar11[12] = 7;
        auVar11._13_3_ = 0;
        auVar28 = NEON_cmeq(auVar37,auVar11,4);
        auVar37 = NEON_neg(auVar36,4);
        uVar9 = param_3[1];
        uVar21 = *param_3;
        auVar26 = *(undefined (*) [16])(param_3 + 2);
        auVar59 = NEON_bsl(auVar59,auVar43,auVar61,1);
        auVar28 = NEON_bsl(auVar28,auVar43,auVar37,1);
        auVar29._0_8_ =
             CONCAT17(auVar34[7] & auVar26[7] & auVar28[7],
                      CONCAT16(auVar34[6] & auVar26[6] & auVar28[6],
                               CONCAT15(auVar34[5] & auVar26[5] & auVar28[5],
                                        CONCAT14(auVar34[4] & auVar26[4] & auVar28[4],
                                                 CONCAT13(auVar34[3] & auVar26[3] & auVar28[3],
                                                          CONCAT12(auVar34[2] & auVar26[2] &
                                                                   auVar28[2],
                                                                   CONCAT11(auVar34[1] & auVar26[1]
                                                                            & auVar28[1],
                                                                            auVar34[0] & auVar26[0]
                                                                            & auVar28[0])))))));
        auVar29[8] = auVar34[8] & auVar26[8] & auVar28[8];
        auVar29[9] = auVar34[9] & auVar26[9] & auVar28[9];
        auVar29[10] = auVar34[10] & auVar26[10] & auVar28[10];
        auVar29[11] = auVar34[11] & auVar26[11] & auVar28[11];
        auVar29[12] = auVar34[12] & auVar26[12] & auVar28[12];
        auVar29[13] = auVar34[13] & auVar26[13] & auVar28[13];
        auVar29[14] = auVar34[14] & auVar26[14] & auVar28[14];
        auVar29[15] = auVar34[15] & auVar26[15] & auVar28[15];
        *(byte *)(param_3 + 2) = auVar52[8] & (byte)uVar9 & auVar59[8];
        *(byte *)((long)param_3 + 0x11) = auVar52[9] & (byte)((ulong)uVar9 >> 8) & auVar59[9];
        *(byte *)((long)param_3 + 0x12) = auVar52[10] & (byte)((ulong)uVar9 >> 0x10) & auVar59[10];
        *(byte *)((long)param_3 + 0x13) = auVar52[11] & (byte)((ulong)uVar9 >> 0x18) & auVar59[11];
        *(byte *)((long)param_3 + 0x14) = auVar52[12] & (byte)((ulong)uVar9 >> 0x20) & auVar59[12];
        *(byte *)((long)param_3 + 0x15) = auVar52[13] & (byte)((ulong)uVar9 >> 0x28) & auVar59[13];
        *(byte *)((long)param_3 + 0x16) = auVar52[14] & (byte)((ulong)uVar9 >> 0x30) & auVar59[14];
        *(byte *)((long)param_3 + 0x17) = auVar52[15] & (byte)((ulong)uVar9 >> 0x38) & auVar59[15];
        *(byte *)param_3 = auVar52[0] & (byte)uVar21 & auVar59[0];
        *(byte *)((long)param_3 + 1) = auVar52[1] & (byte)((ulong)uVar21 >> 8) & auVar59[1];
        *(byte *)((long)param_3 + 2) = auVar52[2] & (byte)((ulong)uVar21 >> 0x10) & auVar59[2];
        *(byte *)((long)param_3 + 3) = auVar52[3] & (byte)((ulong)uVar21 >> 0x18) & auVar59[3];
        *(byte *)((long)param_3 + 4) = auVar52[4] & (byte)((ulong)uVar21 >> 0x20) & auVar59[4];
        *(byte *)((long)param_3 + 5) = auVar52[5] & (byte)((ulong)uVar21 >> 0x28) & auVar59[5];
        *(byte *)((long)param_3 + 6) = auVar52[6] & (byte)((ulong)uVar21 >> 0x30) & auVar59[6];
        *(byte *)((long)param_3 + 7) = auVar52[7] & (byte)((ulong)uVar21 >> 0x38) & auVar59[7];
        param_3[3] = auVar29._8_8_;
        param_3[2] = auVar29._0_8_;
        goto LAB_001a5294;
      }
    }
  }
  else {
    lVar22 = *(long *)(param_1 + 0x18);
    if (lVar22 == 0) goto LAB_001a5294;
    lVar19 = *(long *)(param_1 + 0x58);
    lVar18 = *(long *)(param_1 + 0x70);
    uVar12 = (uint)((ulong)lVar19 >> 0x20);
    uVar20 = (uint)((ulong)lVar18 >> 0x20);
    if ((int)uVar20 <= (int)uVar12) {
      uVar20 = uVar12;
    }
    uVar12 = (uint)((ulong)(lVar19 + *(long *)(param_1 + 0x60)) >> 0x20);
    uVar16 = (uint)((ulong)(lVar18 + *(long *)(param_1 + 0x78)) >> 0x20);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68) + lVar19;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x80) + lVar18;
    if ((int)uVar16 < (int)uVar12) {
      uVar12 = uVar16;
    }
    if ((-1 < (int)uVar12) && ((int)uVar20 < 0x100)) {
      if ((int)uVar20 < 0) {
        uVar20 = 0;
      }
      if (0xff < (int)uVar12) {
        uVar12 = 0xff;
      }
      iVar17 = uVar12 - uVar20;
      if (-1 < iVar17) {
        lVar18 = param_2 + (long)(int)uVar20 * 2;
        uVar13 = render_scanline_affine_setup_arrays_extended
                           (param_1,auStack_250,auStack_490,lVar2,auStack_590,auStack_130,
                            iVar8 + (int)sVar4 * uVar20,(int)uVar67 + (int)sVar5 * uVar20,iVar17);
        render_scanline_affine_render_tiles_extended_extended_asm
                  (lVar18,auStack_590,auStack_250,auStack_490,auStack_130,uVar13,lVar1);
        render_scanline_set_visibility_12bpp_asm(param_3,param_2);
        render_scanline_palette_lookup_12bpp_asm(lVar18,lVar18,lVar22,iVar17 + 1);
        auVar28._0_4_ = uVar20 >> 5;
        auVar37._0_4_ = uVar12 >> 5;
        auVar28._4_4_ = auVar28._0_4_;
        auVar28._8_4_ = auVar28._0_4_;
        auVar28._12_4_ = auVar28._0_4_;
        iVar8 = -1 << (ulong)(uVar20 & 0x1f);
        auVar37._4_4_ = auVar37._0_4_;
        auVar37._8_4_ = auVar37._0_4_;
        auVar37._12_4_ = auVar37._0_4_;
        auVar26 = NEON_cmhi(_DAT_0021dca0,auVar28,4);
        auVar52._9_3_ = 0;
        auVar52._0_9_ = _DAT_00228150;
        auVar52[12] = 7;
        auVar52._13_3_ = 0;
        auVar59 = NEON_cmhi(auVar52,auVar28,4);
        uVar63 = (undefined)iVar8;
        uVar64 = (undefined)((uint)iVar8 >> 8);
        uVar65 = (undefined)((uint)iVar8 >> 0x10);
        uVar66 = (undefined)((uint)iVar8 >> 0x18);
        auVar34 = NEON_cmhi(auVar37,_DAT_0021dca0,4);
        auVar53 = auVar34._0_13_;
        auVar51._0_5_ = CONCAT14(auVar26[4],(uint)(auVar26[0] & 1)) & 0x1ffffffff;
        auVar51._5_3_ = 0;
        auVar51[8] = auVar26[8] & 1;
        auVar51._9_3_ = 0;
        auVar51[12] = auVar26[12] & 1;
        auVar51._13_3_ = 0;
        auVar61._9_3_ = 0;
        auVar61._0_9_ = _DAT_00228150;
        auVar61[12] = 7;
        auVar61._13_3_ = 0;
        auVar26 = NEON_cmhi(auVar37,auVar61,4);
        auVar42 = auVar26._0_13_;
        auVar57._0_5_ = CONCAT14(auVar59[4],(uint)(auVar59[0] & 1)) & 0x1ffffffff;
        auVar57._5_3_ = 0;
        auVar57[8] = auVar59[8] & 1;
        auVar57._9_3_ = 0;
        auVar57[12] = auVar59[12] & 1;
        auVar34 = NEON_neg(auVar51,4);
        auVar26 = NEON_cmeq(auVar28,_DAT_0021dca0,4);
        goto LAB_001a4f28;
      }
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
LAB_001a5294:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


