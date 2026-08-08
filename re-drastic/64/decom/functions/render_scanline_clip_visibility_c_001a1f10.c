/*
 * Ghidra decompilation
 *
 * Function : render_scanline_clip_visibility_c
 * Address  : 001a1f10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_scanline_clip_visibility_c(undefined8 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  
  auVar4._0_4_ = param_3 >> 5;
  auVar6._0_4_ = param_2 >> 5;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  auVar6._4_4_ = auVar6._0_4_;
  auVar6._8_4_ = auVar6._0_4_;
  auVar6._12_4_ = auVar6._0_4_;
  auVar11 = NEON_cmhi(auVar4,_DAT_0021dca0,4);
  auVar15 = NEON_cmhi(auVar4,_DAT_00228150,4);
  iVar1 = -2 << (ulong)(param_3 & 0x1f);
  auVar13._0_5_ = CONCAT14(auVar11[4],(uint)(auVar11[0] & 1)) & 0x1ffffffff;
  auVar13._5_3_ = 0;
  auVar13[8] = auVar11[8] & 1;
  auVar13._9_3_ = 0;
  auVar13[12] = auVar11[12] & 1;
  auVar13._13_3_ = 0;
  auVar11 = NEON_cmhi(_DAT_0021dca0,auVar6,4);
  auVar17 = NEON_cmhi(_DAT_00228150,auVar6,4);
  auVar12._0_5_ = CONCAT14(auVar15[4],(uint)(auVar15[0] & 1)) & 0x1ffffffff;
  auVar12._5_3_ = 0;
  auVar12[8] = auVar15[8] & 1;
  auVar12._9_3_ = 0;
  auVar12[12] = auVar15[12] & 1;
  auVar12._13_3_ = 0;
  bVar7 = ~(byte)iVar1;
  bVar8 = ~(byte)((uint)iVar1 >> 8);
  bVar9 = ~(byte)((uint)iVar1 >> 0x10);
  bVar10 = ~(byte)((uint)iVar1 >> 0x18);
  auVar13 = NEON_neg(auVar13,4);
  auVar14._0_5_ = CONCAT14(auVar11[4],(uint)(auVar11[0] & 1)) & 0x1ffffffff;
  auVar14._5_3_ = 0;
  auVar14[8] = auVar11[8] & 1;
  auVar14._9_3_ = 0;
  auVar14[12] = auVar11[12] & 1;
  auVar14._13_3_ = 0;
  auVar15 = NEON_cmeq(auVar4,_DAT_0021dca0,4);
  auVar4 = NEON_cmeq(auVar4,_DAT_00228150,4);
  auVar16 = NEON_neg(auVar12,4);
  auVar5._0_8_ = (ulong)(CONCAT14(auVar17[4],(uint)auVar17[0]) & 0x1ffffffff) & 0xffffffffffffff01;
  auVar5[8] = auVar17[8] & 1;
  auVar5._9_3_ = 0;
  auVar5[12] = auVar17[12] & 1;
  auVar5._13_3_ = 0;
  iVar1 = -1 << (ulong)(param_2 & 0x1f);
  auVar11[2] = bVar9;
  auVar11._0_2_ = CONCAT11(bVar8,bVar7);
  auVar11[3] = bVar10;
  auVar11[4] = bVar7;
  auVar11[5] = bVar8;
  auVar11[6] = bVar9;
  auVar11[7] = bVar10;
  auVar11[8] = bVar7;
  auVar11[9] = bVar8;
  auVar11[10] = bVar9;
  auVar11[11] = bVar10;
  auVar11[12] = bVar7;
  auVar11[13] = bVar8;
  auVar11[14] = bVar9;
  auVar11[15] = bVar10;
  auVar12 = NEON_bsl(auVar15,auVar11,auVar13,1);
  auVar14 = NEON_neg(auVar14,4);
  auVar17._4_4_ = iVar1;
  auVar17._0_4_ = iVar1;
  auVar17._8_4_ = iVar1;
  auVar17._12_4_ = iVar1;
  auVar13 = NEON_cmeq(auVar6,_DAT_0021dca0,4);
  auVar15[2] = bVar9;
  auVar15._0_2_ = CONCAT11(bVar8,bVar7);
  auVar15[3] = bVar10;
  auVar15[4] = bVar7;
  auVar15[5] = bVar8;
  auVar15[6] = bVar9;
  auVar15[7] = bVar10;
  auVar15[8] = bVar7;
  auVar15[9] = bVar8;
  auVar15[10] = bVar9;
  auVar15[11] = bVar10;
  auVar15[12] = bVar7;
  auVar15[13] = bVar8;
  auVar15[14] = bVar9;
  auVar15[15] = bVar10;
  auVar15 = NEON_bsl(auVar4,auVar15,auVar16,1);
  auVar5 = NEON_neg(auVar5,4);
  auVar4 = NEON_cmeq(auVar6,_DAT_00228150,4);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  auVar11 = *(undefined (*) [16])(param_1 + 2);
  auVar6 = NEON_bsl(auVar13,auVar17,auVar14,1);
  auVar4 = NEON_bsl(auVar4,auVar17,auVar5,1);
  *(byte *)(param_1 + 2) = auVar12[8] & (byte)uVar3 & auVar6[8];
  *(byte *)((long)param_1 + 0x11) = auVar12[9] & (byte)((ulong)uVar3 >> 8) & auVar6[9];
  *(byte *)((long)param_1 + 0x12) = auVar12[10] & (byte)((ulong)uVar3 >> 0x10) & auVar6[10];
  *(byte *)((long)param_1 + 0x13) = auVar12[11] & (byte)((ulong)uVar3 >> 0x18) & auVar6[11];
  *(byte *)((long)param_1 + 0x14) = auVar12[12] & (byte)((ulong)uVar3 >> 0x20) & auVar6[12];
  *(byte *)((long)param_1 + 0x15) = auVar12[13] & (byte)((ulong)uVar3 >> 0x28) & auVar6[13];
  *(byte *)((long)param_1 + 0x16) = auVar12[14] & (byte)((ulong)uVar3 >> 0x30) & auVar6[14];
  *(byte *)((long)param_1 + 0x17) = auVar12[15] & (byte)((ulong)uVar3 >> 0x38) & auVar6[15];
  *(byte *)param_1 = auVar12[0] & (byte)uVar2 & auVar6[0];
  *(byte *)((long)param_1 + 1) = auVar12[1] & (byte)((ulong)uVar2 >> 8) & auVar6[1];
  *(byte *)((long)param_1 + 2) = auVar12[2] & (byte)((ulong)uVar2 >> 0x10) & auVar6[2];
  *(byte *)((long)param_1 + 3) = auVar12[3] & (byte)((ulong)uVar2 >> 0x18) & auVar6[3];
  *(byte *)((long)param_1 + 4) = auVar12[4] & (byte)((ulong)uVar2 >> 0x20) & auVar6[4];
  *(byte *)((long)param_1 + 5) = auVar12[5] & (byte)((ulong)uVar2 >> 0x28) & auVar6[5];
  *(byte *)((long)param_1 + 6) = auVar12[6] & (byte)((ulong)uVar2 >> 0x30) & auVar6[6];
  *(byte *)((long)param_1 + 7) = auVar12[7] & (byte)((ulong)uVar2 >> 0x38) & auVar6[7];
  *(byte *)(param_1 + 4) = auVar15[8] & auVar11[8] & auVar4[8];
  *(byte *)((long)param_1 + 0x21) = auVar15[9] & auVar11[9] & auVar4[9];
  *(byte *)((long)param_1 + 0x22) = auVar15[10] & auVar11[10] & auVar4[10];
  *(byte *)((long)param_1 + 0x23) = auVar15[11] & auVar11[11] & auVar4[11];
  *(byte *)((long)param_1 + 0x24) = auVar15[12] & auVar11[12] & auVar4[12];
  *(byte *)((long)param_1 + 0x25) = auVar15[13] & auVar11[13] & auVar4[13];
  *(byte *)((long)param_1 + 0x26) = auVar15[14] & auVar11[14] & auVar4[14];
  *(byte *)((long)param_1 + 0x27) = auVar15[15] & auVar11[15] & auVar4[15];
  *(byte *)(param_1 + 2) = auVar15[0] & auVar11[0] & auVar4[0];
  *(byte *)((long)param_1 + 0x11) = auVar15[1] & auVar11[1] & auVar4[1];
  *(byte *)((long)param_1 + 0x12) = auVar15[2] & auVar11[2] & auVar4[2];
  *(byte *)((long)param_1 + 0x13) = auVar15[3] & auVar11[3] & auVar4[3];
  *(byte *)((long)param_1 + 0x14) = auVar15[4] & auVar11[4] & auVar4[4];
  *(byte *)((long)param_1 + 0x15) = auVar15[5] & auVar11[5] & auVar4[5];
  *(byte *)((long)param_1 + 0x16) = auVar15[6] & auVar11[6] & auVar4[6];
  *(byte *)((long)param_1 + 0x17) = auVar15[7] & auVar11[7] & auVar4[7];
  return;
}


