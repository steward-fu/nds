/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_map_indexes_b_normal_c
 * Address  : 001a3030
 * Program  : drastic64
 */


void render_scanline_affine_setup_map_indexes_b_normal_c
               (short *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 param_6,
               undefined4 param_7)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  uint uVar7;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined auVar8 [16];
  undefined auVar9 [16];
  int iVar13;
  short sVar14;
  uint uVar15;
  short sVar16;
  short sVar17;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar18;
  undefined6 uVar19;
  
  iVar34 = param_4 * 8;
  iVar33 = param_5 * 8;
  uVar15 = param_4 + param_2 + param_4;
  iVar13 = param_5 + param_3 + param_5;
  iVar6 = param_4 * 4;
  iVar3 = param_5 * 4;
  psVar1 = param_1;
  uVar24 = param_3 + param_5;
  uVar26 = CONCAT44(param_5 + iVar13,iVar13);
  uVar28 = param_2 + param_4;
  uVar29 = param_4 + uVar15;
  do {
    uVar25 = (uint)uVar26;
    uVar27 = (uint)((ulong)uVar26 >> 0x20);
    uVar7 = param_3 + iVar3 >> 0xb;
    uVar10 = uVar24 + iVar3 >> 0xb;
    uVar11 = uVar25 + iVar3 >> 0xb;
    uVar12 = uVar27 + iVar3 >> 0xb;
    uVar20 = iVar6 + param_2 >> 0xb;
    uVar21 = iVar6 + uVar28 >> 0xb;
    uVar22 = iVar6 + uVar15 >> 0xb;
    uVar23 = iVar6 + uVar29 >> 0xb;
    bVar30 = (byte)param_6;
    auVar4[0] = (byte)(param_3 >> 0xb) & bVar30;
    bVar31 = (byte)((uint)param_6 >> 8);
    auVar4[1] = (byte)((param_3 >> 0xb) >> 8) & bVar31;
    bVar32 = (byte)((uint)param_6 >> 0x10);
    auVar4[2] = (byte)(param_3 >> 0x1b) & bVar32;
    auVar4[3] = 0;
    auVar4[4] = (byte)(uVar24 >> 0xb) & bVar30;
    auVar4[5] = (byte)((uVar24 >> 0xb) >> 8) & bVar31;
    auVar4[6] = (byte)(uVar24 >> 0x1b) & bVar32;
    auVar4[7] = 0;
    auVar4[8] = (byte)(uVar25 >> 0xb) & bVar30;
    auVar4[9] = (byte)((uVar25 >> 0xb) >> 8) & bVar31;
    auVar4[10] = (byte)((ulong)uVar26 >> 0x18) >> 3 & bVar32;
    auVar4[11] = 0;
    auVar4[12] = (byte)(uVar27 >> 0xb) & bVar30;
    auVar4[13] = (byte)((uVar27 >> 0xb) >> 8) & bVar31;
    auVar4[14] = (byte)((ulong)uVar26 >> 0x3b) & bVar32;
    auVar4[15] = 0;
    auVar8[0] = (byte)uVar7 & bVar30;
    auVar8[1] = (byte)(uVar7 >> 8) & bVar31;
    auVar8[2] = (byte)(param_3 + iVar3 >> 0x1b) & bVar32;
    auVar8[3] = 0;
    auVar8[4] = (byte)uVar10 & bVar30;
    auVar8[5] = (byte)(uVar10 >> 8) & bVar31;
    auVar8[6] = (byte)(uVar24 + iVar3 >> 0x1b) & bVar32;
    auVar8[7] = 0;
    auVar8[8] = (byte)uVar11 & bVar30;
    auVar8[9] = (byte)(uVar11 >> 8) & bVar31;
    auVar8[10] = (byte)(uVar25 + iVar3 >> 0x1b) & bVar32;
    auVar8[11] = 0;
    auVar8[12] = (byte)uVar12 & bVar30;
    auVar8[13] = (byte)(uVar12 >> 8) & bVar31;
    auVar8[14] = (byte)(uVar27 + iVar3 >> 0x1b) & bVar32;
    auVar8[15] = 0;
    auVar5._4_4_ = param_7;
    auVar5._0_4_ = param_7;
    auVar5._8_4_ = param_7;
    auVar5._12_4_ = param_7;
    auVar5 = NEON_sshl(auVar4,auVar5,4);
    auVar9._4_4_ = param_7;
    auVar9._0_4_ = param_7;
    auVar9._8_4_ = param_7;
    auVar9._12_4_ = param_7;
    auVar9 = NEON_sshl(auVar8,auVar9,4);
    sVar14 = CONCAT11((byte)((param_2 >> 0xb) >> 8) & bVar31,(byte)(param_2 >> 0xb) & bVar30);
    sVar16 = CONCAT11((byte)((uVar15 >> 0xb) >> 8) & bVar31,(byte)(uVar15 >> 0xb) & bVar30);
    sVar17 = CONCAT11((byte)(uVar20 >> 8) & bVar31,(byte)uVar20 & bVar30);
    uVar18 = CONCAT13((byte)(uVar21 >> 8) & bVar31,CONCAT12((byte)uVar21 & bVar30,sVar17));
    uVar19 = CONCAT15((byte)(uVar22 >> 8) & bVar31,CONCAT14((byte)uVar22 & bVar30,uVar18));
    psVar2 = psVar1 + 8;
    psVar1[8] = auVar9._0_2_ + sVar17;
    psVar1[9] = auVar9._4_2_ + (short)((uint)uVar18 >> 0x10);
    psVar1[10] = auVar9._8_2_ + (short)((uint6)uVar19 >> 0x20);
    psVar1[0xb] = auVar9._12_2_ +
                  (short)(CONCAT17((byte)(uVar23 >> 8) & bVar31,
                                   CONCAT16((byte)uVar23 & bVar30,uVar19)) >> 0x30);
    *psVar1 = auVar5._0_2_ + sVar14;
    psVar1[1] = auVar5._4_2_ +
                (short)(CONCAT13((byte)((uVar28 >> 0xb) >> 8) & bVar31,
                                 CONCAT12((byte)(uVar28 >> 0xb) & bVar30,sVar14)) >> 0x10);
    psVar1[2] = auVar5._8_2_ + sVar16;
    psVar1[3] = auVar5._12_2_ +
                (short)(CONCAT13((byte)((uVar29 >> 0xb) >> 8) & bVar31,
                                 CONCAT12((byte)(uVar29 >> 0xb) & bVar30,sVar16)) >> 0x10);
    psVar1 = psVar2;
    param_3 = param_3 + iVar33;
    uVar24 = uVar24 + iVar33;
    uVar26 = CONCAT44(uVar27 + iVar33,uVar25 + iVar33);
    param_2 = param_2 + iVar34;
    uVar28 = uVar28 + iVar34;
    uVar15 = uVar15 + iVar34;
    uVar29 = uVar29 + iVar34;
  } while (param_1 + 0x100 != psVar2);
  return;
}


