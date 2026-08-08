/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_arrays_b_normal
 * Address  : 001a45d0
 * Program  : drastic64
 */


undefined8
render_scanline_affine_setup_arrays_b_normal
          (long param_1,void *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  
  memset(param_2,1,0x100);
  iVar1 = (int)*(short *)(param_1 + 0x9e);
  iVar2 = (int)*(short *)(param_1 + 0xa0);
  uVar13 = iVar1 + param_7 + iVar1;
  iVar23 = iVar1 * 8;
  uVar12 = iVar2 + param_8 + iVar2;
  iVar22 = iVar2 * 8;
  iVar9 = iVar1 * 4;
  iVar5 = iVar2 * 4;
  bVar20 = *(byte *)(param_1 + 0xab);
  bVar21 = *(byte *)(param_1 + 0xac);
  puVar3 = param_3;
  uVar19 = iVar1 + uVar13;
  uVar16 = iVar2 + uVar12;
  uVar14 = param_8;
  uVar15 = param_8 + iVar2;
  uVar17 = param_7;
  uVar18 = param_7 + iVar1;
  do {
    auVar6[0] = (byte)(uVar14 >> 0xb) & bVar20;
    auVar6._1_3_ = 0;
    auVar6[4] = (byte)(uVar15 >> 0xb) & bVar20;
    auVar6._5_3_ = 0;
    auVar6[8] = (byte)(uVar12 >> 0xb) & bVar20;
    auVar6._9_3_ = 0;
    auVar6[12] = (byte)(uVar16 >> 0xb) & bVar20;
    auVar6._13_3_ = 0;
    auVar10[0] = (byte)(iVar5 + uVar14 >> 0xb) & bVar20;
    auVar10._1_3_ = 0;
    auVar10[4] = (byte)(iVar5 + uVar15 >> 0xb) & bVar20;
    auVar10._5_3_ = 0;
    auVar10[8] = (byte)(iVar5 + uVar12 >> 0xb) & bVar20;
    auVar10._9_3_ = 0;
    auVar10[12] = (byte)(iVar5 + uVar16 >> 0xb) & bVar20;
    auVar10._13_3_ = 0;
    auVar7[4] = bVar21;
    auVar7._0_4_ = CONCAT31(0,bVar21);
    auVar7._5_3_ = 0;
    auVar7[8] = bVar21;
    auVar7._9_3_ = 0;
    auVar7[12] = bVar21;
    auVar7._13_3_ = 0;
    auVar7 = NEON_sshl(auVar6,auVar7,4);
    auVar11[4] = bVar21;
    auVar11._0_4_ = CONCAT31(0,bVar21);
    auVar11._5_3_ = 0;
    auVar11[8] = bVar21;
    auVar11._9_3_ = 0;
    auVar11[12] = bVar21;
    auVar11._13_3_ = 0;
    auVar11 = NEON_sshl(auVar10,auVar11,4);
    auVar8._0_8_ = CONCAT26(auVar7._12_2_ + (ushort)((byte)(uVar19 >> 0xb) & bVar20),
                            CONCAT24(auVar7._8_2_ + (ushort)((byte)(uVar13 >> 0xb) & bVar20),
                                     CONCAT22(auVar7._4_2_ +
                                              (ushort)((byte)(uVar18 >> 0xb) & bVar20),
                                              auVar7._0_2_ +
                                              (ushort)((byte)(uVar17 >> 0xb) & bVar20))));
    auVar8._8_2_ = auVar11._0_2_ + (ushort)((byte)(iVar9 + uVar17 >> 0xb) & bVar20);
    auVar8._10_2_ = auVar11._4_2_ + (ushort)((byte)(iVar9 + uVar18 >> 0xb) & bVar20);
    auVar8._12_2_ = auVar11._8_2_ + (ushort)((byte)(iVar9 + uVar13 >> 0xb) & bVar20);
    auVar8._14_2_ = auVar11._12_2_ + (ushort)((byte)(iVar9 + uVar19 >> 0xb) & bVar20);
    puVar4 = puVar3 + 2;
    puVar3[1] = auVar8._8_8_;
    *puVar3 = auVar8._0_8_;
    puVar3 = puVar4;
    uVar13 = uVar13 + iVar23;
    uVar19 = uVar19 + iVar23;
    uVar12 = uVar12 + iVar22;
    uVar16 = uVar16 + iVar22;
    uVar14 = uVar14 + iVar22;
    uVar15 = uVar15 + iVar22;
    uVar17 = uVar17 + iVar23;
    uVar18 = uVar18 + iVar23;
  } while (param_3 + 0x40 != puVar4);
  render_scanline_affine_setup_tile_offsets_asm
            (param_5,param_7,param_8,(long)*(short *)(param_1 + 0x9e),
             (long)*(short *)(param_1 + 0xa0),0x100);
  render_scanline_affine_load_tile_map_entries_normal_asm(param_3,param_4,0xff);
  return 0x100;
}


