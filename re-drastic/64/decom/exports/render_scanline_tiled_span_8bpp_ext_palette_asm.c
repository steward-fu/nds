/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_8bpp_ext_palette_asm
 * Address  : 0019f188
 * Program  : drastic64
 */


void render_scanline_tiled_span_8bpp_ext_palette_asm
               (undefined *param_1,long param_2,ulong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  
  iVar6 = 0x20;
  do {
    puVar3 = param_1;
    puVar5 = param_4 + 1;
    uVar2 = *param_4;
    puVar4 = param_3 + 1;
    uVar7 = *param_3;
    auVar18._4_4_ = uVar2;
    auVar18._0_4_ = uVar2;
    auVar18._8_4_ = uVar2;
    auVar18._12_4_ = uVar2;
    auVar20._4_4_ = uVar2;
    auVar20._0_4_ = uVar2;
    auVar20._8_4_ = uVar2;
    auVar20._12_4_ = uVar2;
    uVar2 = uVar2 >> 4;
    uVar1 = uVar2 & 0xf0f0f0f;
    auVar19._0_8_ = CONCAT44(uVar2,uVar2) & 0xf0f0f0f0f0f0f0f;
    auVar19._8_4_ = uVar1;
    auVar19._12_4_ = uVar1;
    auVar21._0_8_ = CONCAT44(uVar2,uVar2) & 0xf0f0f0f0f0f0f0f;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    auVar11[9] = 1;
    auVar11._0_9_ = (unkuint9)1 << 0x40;
    auVar11[10] = 1;
    auVar11[11] = 1;
    auVar11[12] = 1;
    auVar11[13] = 1;
    auVar11[14] = 1;
    auVar11[15] = 1;
    auVar11 = a64_TBL(ZEXT816(0),auVar19,auVar11);
    auVar13[8] = 3;
    auVar13._0_8_ = 0x202020202020202;
    auVar13[9] = 3;
    auVar13[10] = 3;
    auVar13[11] = 3;
    auVar13[12] = 3;
    auVar13[13] = 3;
    auVar13[14] = 3;
    auVar13[15] = 3;
    auVar13 = a64_TBL(ZEXT816(0),auVar21,auVar13);
    auVar10._8_8_ = *(undefined8 *)(param_2 + (uVar7 >> 0x10 & 0xffff));
    auVar10._0_8_ = *(undefined8 *)(param_2 + (uVar7 & 0xffff));
    auVar12._8_8_ = *(undefined8 *)(param_2 + (uVar7 >> 0x30));
    auVar12._0_8_ = *(undefined8 *)(param_2 + (uVar7 >> 0x20 & 0xffff));
    auVar15._8_4_ = 0x400;
    auVar15._0_8_ = 0x400000004;
    auVar15._12_4_ = 0x400;
    auVar19 = NEON_cmtst(auVar18,auVar15,4);
    auVar16._8_4_ = 0x4000000;
    auVar16._0_8_ = 0x4000000040000;
    auVar16._12_4_ = 0x4000000;
    auVar21 = NEON_cmtst(auVar20,auVar16,4);
    auVar15 = NEON_rev64(auVar10,1);
    auVar16 = NEON_rev64(auVar12,1);
    auVar15 = NEON_bit(auVar10,auVar15,auVar19,1);
    auVar16 = NEON_bit(auVar12,auVar16,auVar21,1);
    *puVar3 = auVar15[0];
    puVar3[1] = auVar11[0];
    puVar3[2] = auVar15[1];
    puVar3[3] = auVar11[1];
    puVar3[4] = auVar15[2];
    puVar3[5] = auVar11[2];
    puVar3[6] = auVar15[3];
    puVar3[7] = auVar11[3];
    puVar3[8] = auVar15[4];
    puVar3[9] = auVar11[4];
    puVar3[10] = auVar15[5];
    puVar3[0xb] = auVar11[5];
    puVar3[0xc] = auVar15[6];
    puVar3[0xd] = auVar11[6];
    puVar3[0xe] = auVar15[7];
    puVar3[0xf] = auVar11[7];
    puVar3[0x10] = auVar15[8];
    puVar3[0x11] = auVar11[8];
    puVar3[0x12] = auVar15[9];
    puVar3[0x13] = auVar11[9];
    puVar3[0x14] = auVar15[10];
    puVar3[0x15] = auVar11[10];
    puVar3[0x16] = auVar15[11];
    puVar3[0x17] = auVar11[11];
    puVar3[0x18] = auVar15[12];
    puVar3[0x19] = auVar11[12];
    puVar3[0x1a] = auVar15[13];
    puVar3[0x1b] = auVar11[13];
    puVar3[0x1c] = auVar15[14];
    puVar3[0x1d] = auVar11[14];
    puVar3[0x1e] = auVar15[15];
    puVar3[0x1f] = auVar11[15];
    puVar3[0x20] = auVar16[0];
    puVar3[0x21] = auVar13[0];
    puVar3[0x22] = auVar16[1];
    puVar3[0x23] = auVar13[1];
    puVar3[0x24] = auVar16[2];
    puVar3[0x25] = auVar13[2];
    puVar3[0x26] = auVar16[3];
    puVar3[0x27] = auVar13[3];
    puVar3[0x28] = auVar16[4];
    puVar3[0x29] = auVar13[4];
    puVar3[0x2a] = auVar16[5];
    puVar3[0x2b] = auVar13[5];
    puVar3[0x2c] = auVar16[6];
    puVar3[0x2d] = auVar13[6];
    puVar3[0x2e] = auVar16[7];
    puVar3[0x2f] = auVar13[7];
    puVar3[0x30] = auVar16[8];
    puVar3[0x31] = auVar13[8];
    puVar3[0x32] = auVar16[9];
    puVar3[0x33] = auVar13[9];
    puVar3[0x34] = auVar16[10];
    puVar3[0x35] = auVar13[10];
    puVar3[0x36] = auVar16[11];
    puVar3[0x37] = auVar13[11];
    puVar3[0x38] = auVar16[12];
    puVar3[0x39] = auVar13[12];
    puVar3[0x3a] = auVar16[13];
    puVar3[0x3b] = auVar13[13];
    puVar3[0x3c] = auVar16[14];
    puVar3[0x3d] = auVar13[14];
    puVar3[0x3e] = auVar16[15];
    puVar3[0x3f] = auVar13[15];
    iVar6 = iVar6 + -4;
    param_1 = puVar3 + 0x40;
    param_3 = puVar4;
    param_4 = puVar5;
  } while (iVar6 != 0);
  uVar2 = *puVar5;
  uVar9 = (undefined)(uVar2 >> 4);
  uVar8 = *(undefined8 *)(param_2 + (*puVar4 & 0xffff));
  uVar17 = NEON_cmtst(CONCAT44(uVar2,uVar2),0x400000004,4);
  uVar14 = NEON_rev64(uVar8,1);
  uVar8 = NEON_bit(uVar8,uVar14,uVar17,1);
  puVar3[0x40] = (char)uVar8;
  puVar3[0x41] = uVar9;
  puVar3[0x42] = (char)((ulong)uVar8 >> 8);
  puVar3[0x43] = uVar9;
  puVar3[0x44] = (char)((ulong)uVar8 >> 0x10);
  puVar3[0x45] = uVar9;
  puVar3[0x46] = (char)((ulong)uVar8 >> 0x18);
  puVar3[0x47] = uVar9;
  puVar3[0x48] = (char)((ulong)uVar8 >> 0x20);
  puVar3[0x49] = uVar9;
  puVar3[0x4a] = (char)((ulong)uVar8 >> 0x28);
  puVar3[0x4b] = uVar9;
  puVar3[0x4c] = (char)((ulong)uVar8 >> 0x30);
  puVar3[0x4d] = uVar9;
  puVar3[0x4e] = (char)((ulong)uVar8 >> 0x38);
  puVar3[0x4f] = uVar9;
  return;
}


