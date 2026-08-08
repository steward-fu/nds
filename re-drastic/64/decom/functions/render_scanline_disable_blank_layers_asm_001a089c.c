/*
 * Ghidra decompilation
 *
 * Function : render_scanline_disable_blank_layers_asm
 * Address  : 001a089c
 * Program  : drastic64
 */


void render_scanline_disable_blank_layers_asm(undefined (*param_1) [16],undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  uint uVar13;
  ulong uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined4 uVar17;
  
  auVar4 = *param_1;
  auVar8 = param_1[1];
  auVar12 = param_1[2];
  auVar16 = param_1[3];
  uVar17 = *param_2;
  auVar3[0] = auVar4[0] | auVar8[0];
  auVar3[1] = auVar4[1] | auVar8[1];
  auVar3[2] = auVar4[2] | auVar8[2];
  auVar3[3] = auVar4[3] | auVar8[3];
  auVar3[4] = auVar4[4] | auVar8[4];
  auVar3[5] = auVar4[5] | auVar8[5];
  auVar3[6] = auVar4[6] | auVar8[6];
  auVar3[7] = auVar4[7] | auVar8[7];
  auVar3[8] = auVar4[8] | auVar8[8];
  auVar3[9] = auVar4[9] | auVar8[9];
  auVar3[10] = auVar4[10] | auVar8[10];
  auVar3[11] = auVar4[11] | auVar8[11];
  auVar3[12] = auVar4[12] | auVar8[12];
  auVar3[13] = auVar4[13] | auVar8[13];
  auVar3[14] = auVar4[14] | auVar8[14];
  auVar3[15] = auVar4[15] | auVar8[15];
  auVar7[0] = auVar12[0] | auVar16[0];
  auVar7[1] = auVar12[1] | auVar16[1];
  auVar7[2] = auVar12[2] | auVar16[2];
  auVar7[3] = auVar12[3] | auVar16[3];
  auVar7[4] = auVar12[4] | auVar16[4];
  auVar7[5] = auVar12[5] | auVar16[5];
  auVar7[6] = auVar12[6] | auVar16[6];
  auVar7[7] = auVar12[7] | auVar16[7];
  auVar7[8] = auVar12[8] | auVar16[8];
  auVar7[9] = auVar12[9] | auVar16[9];
  auVar7[10] = auVar12[10] | auVar16[10];
  auVar7[11] = auVar12[11] | auVar16[11];
  auVar7[12] = auVar12[12] | auVar16[12];
  auVar7[13] = auVar12[13] | auVar16[13];
  auVar7[14] = auVar12[14] | auVar16[14];
  auVar7[15] = auVar12[15] | auVar16[15];
  auVar11[0] = param_1[4][0] | param_1[5][0];
  auVar11[1] = param_1[4][1] | param_1[5][1];
  auVar11[2] = param_1[4][2] | param_1[5][2];
  auVar11[3] = param_1[4][3] | param_1[5][3];
  auVar11[4] = param_1[4][4] | param_1[5][4];
  auVar11[5] = param_1[4][5] | param_1[5][5];
  auVar11[6] = param_1[4][6] | param_1[5][6];
  auVar11[7] = param_1[4][7] | param_1[5][7];
  auVar11[8] = param_1[4][8] | param_1[5][8];
  auVar11[9] = param_1[4][9] | param_1[5][9];
  auVar11[10] = param_1[4][10] | param_1[5][10];
  auVar11[11] = param_1[4][0xb] | param_1[5][0xb];
  auVar11[12] = param_1[4][0xc] | param_1[5][0xc];
  auVar11[13] = param_1[4][0xd] | param_1[5][0xd];
  auVar11[14] = param_1[4][0xe] | param_1[5][0xe];
  auVar11[15] = param_1[4][0xf] | param_1[5][0xf];
  auVar15[0] = param_1[6][0] | param_1[7][0];
  auVar15[1] = param_1[6][1] | param_1[7][1];
  auVar15[2] = param_1[6][2] | param_1[7][2];
  auVar15[3] = param_1[6][3] | param_1[7][3];
  auVar15[4] = param_1[6][4] | param_1[7][4];
  auVar15[5] = param_1[6][5] | param_1[7][5];
  auVar15[6] = param_1[6][6] | param_1[7][6];
  auVar15[7] = param_1[6][7] | param_1[7][7];
  auVar15[8] = param_1[6][8] | param_1[7][8];
  auVar15[9] = param_1[6][9] | param_1[7][9];
  auVar15[10] = param_1[6][10] | param_1[7][10];
  auVar15[11] = param_1[6][0xb] | param_1[7][0xb];
  auVar15[12] = param_1[6][0xc] | param_1[7][0xc];
  auVar15[13] = param_1[6][0xd] | param_1[7][0xd];
  auVar15[14] = param_1[6][0xe] | param_1[7][0xe];
  auVar15[15] = param_1[6][0xf] | param_1[7][0xf];
  auVar4[8] = 0xff;
  auVar4._0_8_ = 0xffffffffffffffff;
  auVar4[9] = 0xff;
  auVar4[10] = 0xff;
  auVar4[11] = 0xff;
  auVar4[12] = 0xff;
  auVar4[13] = 0xff;
  auVar4[14] = 0xff;
  auVar4[15] = 0xff;
  auVar4 = NEON_cmtst(auVar3,auVar4,4);
  auVar8[8] = 0xff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8[9] = 0xff;
  auVar8[10] = 0xff;
  auVar8[11] = 0xff;
  auVar8[12] = 0xff;
  auVar8[13] = 0xff;
  auVar8[14] = 0xff;
  auVar8[15] = 0xff;
  auVar8 = NEON_cmtst(auVar7,auVar8,4);
  auVar12[8] = 0xff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12[9] = 0xff;
  auVar12[10] = 0xff;
  auVar12[11] = 0xff;
  auVar12[12] = 0xff;
  auVar12[13] = 0xff;
  auVar12[14] = 0xff;
  auVar12[15] = 0xff;
  auVar12 = NEON_cmtst(auVar11,auVar12,4);
  auVar16[8] = 0xff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16[9] = 0xff;
  auVar16[10] = 0xff;
  auVar16[11] = 0xff;
  auVar16[12] = 0xff;
  auVar16[13] = 0xff;
  auVar16[14] = 0xff;
  auVar16[15] = 0xff;
  auVar16 = NEON_cmtst(auVar15,auVar16,4);
  uVar1 = NEON_umaxv(auVar4,4);
  uVar5 = NEON_umaxv(auVar8,4);
  uVar9 = NEON_umaxv(auVar12,4);
  uVar13 = NEON_umaxv(auVar16,4);
  uVar2 = (ulong)uVar1 & 0xfffffff1fffffff1;
  uVar6 = (ulong)uVar5 & 0xfffffff2fffffff2;
  uVar10 = (ulong)uVar9 & 0xfffffff4fffffff4;
  uVar14 = (ulong)uVar13 & 0xfffffff8fffffff8;
  *param_2 = CONCAT13((byte)((uint)uVar17 >> 0x18) &
                      ((byte)(uVar2 >> 0x18) | (byte)(uVar6 >> 0x18) |
                      (byte)(uVar10 >> 0x18) | (byte)(uVar14 >> 0x18)),
                      CONCAT12((byte)((uint)uVar17 >> 0x10) &
                               ((byte)(uVar2 >> 0x10) | (byte)(uVar6 >> 0x10) |
                               (byte)(uVar10 >> 0x10) | (byte)(uVar14 >> 0x10)),
                               CONCAT11((char)((uint)uVar17 >> 8),
                                        (byte)uVar17 &
                                        ((byte)uVar2 | (byte)uVar6 | (byte)uVar10 | (byte)uVar14 |
                                        0xf0))));
  return;
}


