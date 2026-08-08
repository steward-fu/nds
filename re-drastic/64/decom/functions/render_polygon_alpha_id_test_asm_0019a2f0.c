/*
 * Ghidra decompilation
 *
 * Function : render_polygon_alpha_id_test_asm
 * Address  : 0019a2f0
 * Program  : drastic64
 */


void render_polygon_alpha_id_test_asm
               (byte *param_1,undefined (*param_2) [16],undefined (*param_3) [16],int param_4,
               undefined param_5)

{
  bool bVar1;
  int iVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  do {
    auVar6 = *param_2;
    pauVar3 = param_2 + 1;
    param_2 = param_2 + 2;
    auVar8 = *param_3;
    pauVar4 = param_3 + 1;
    param_3 = param_3 + 2;
    auVar5[1] = param_5;
    auVar5[0] = param_5;
    auVar5[2] = param_5;
    auVar5[3] = param_5;
    auVar5[4] = param_5;
    auVar5[5] = param_5;
    auVar5[6] = param_5;
    auVar5[7] = param_5;
    auVar5[8] = param_5;
    auVar5[9] = param_5;
    auVar5[10] = param_5;
    auVar5[11] = param_5;
    auVar5[12] = param_5;
    auVar5[13] = param_5;
    auVar5[14] = param_5;
    auVar5[15] = param_5;
    auVar5 = NEON_cmeq(auVar6,auVar5,1);
    auVar6[1] = param_5;
    auVar6[0] = param_5;
    auVar6[2] = param_5;
    auVar6[3] = param_5;
    auVar6[4] = param_5;
    auVar6[5] = param_5;
    auVar6[6] = param_5;
    auVar6[7] = param_5;
    auVar6[8] = param_5;
    auVar6[9] = param_5;
    auVar6[10] = param_5;
    auVar6[11] = param_5;
    auVar6[12] = param_5;
    auVar6[13] = param_5;
    auVar6[14] = param_5;
    auVar6[15] = param_5;
    auVar6 = NEON_cmeq(*pauVar3,auVar6,1);
    auVar7[8] = 0x1f;
    auVar7._0_8_ = 0x1f1f1f1f1f1f1f1f;
    auVar7[9] = 0x1f;
    auVar7[10] = 0x1f;
    auVar7[11] = 0x1f;
    auVar7[12] = 0x1f;
    auVar7[13] = 0x1f;
    auVar7[14] = 0x1f;
    auVar7[15] = 0x1f;
    auVar7 = NEON_cmeq(auVar8,auVar7,1);
    auVar8[8] = 0x1f;
    auVar8._0_8_ = 0x1f1f1f1f1f1f1f1f;
    auVar8[9] = 0x1f;
    auVar8[10] = 0x1f;
    auVar8[11] = 0x1f;
    auVar8[12] = 0x1f;
    auVar8[13] = 0x1f;
    auVar8[14] = 0x1f;
    auVar8[15] = 0x1f;
    auVar8 = NEON_cmeq(*pauVar4,auVar8,1);
    *param_1 = *param_1 & ~(auVar5[0] & ~auVar7[0]);
    param_1[1] = param_1[1] & ~(auVar5[1] & ~auVar7[1]);
    param_1[2] = param_1[2] & ~(auVar5[2] & ~auVar7[2]);
    param_1[3] = param_1[3] & ~(auVar5[3] & ~auVar7[3]);
    param_1[4] = param_1[4] & ~(auVar5[4] & ~auVar7[4]);
    param_1[5] = param_1[5] & ~(auVar5[5] & ~auVar7[5]);
    param_1[6] = param_1[6] & ~(auVar5[6] & ~auVar7[6]);
    param_1[7] = param_1[7] & ~(auVar5[7] & ~auVar7[7]);
    param_1[8] = param_1[8] & ~(auVar5[8] & ~auVar7[8]);
    param_1[9] = param_1[9] & ~(auVar5[9] & ~auVar7[9]);
    param_1[10] = param_1[10] & ~(auVar5[10] & ~auVar7[10]);
    param_1[0xb] = param_1[0xb] & ~(auVar5[11] & ~auVar7[11]);
    param_1[0xc] = param_1[0xc] & ~(auVar5[12] & ~auVar7[12]);
    param_1[0xd] = param_1[0xd] & ~(auVar5[13] & ~auVar7[13]);
    param_1[0xe] = param_1[0xe] & ~(auVar5[14] & ~auVar7[14]);
    param_1[0xf] = param_1[0xf] & ~(auVar5[15] & ~auVar7[15]);
    param_1[0x10] = param_1[0x10] & ~(auVar6[0] & ~auVar8[0]);
    param_1[0x11] = param_1[0x11] & ~(auVar6[1] & ~auVar8[1]);
    param_1[0x12] = param_1[0x12] & ~(auVar6[2] & ~auVar8[2]);
    param_1[0x13] = param_1[0x13] & ~(auVar6[3] & ~auVar8[3]);
    param_1[0x14] = param_1[0x14] & ~(auVar6[4] & ~auVar8[4]);
    param_1[0x15] = param_1[0x15] & ~(auVar6[5] & ~auVar8[5]);
    param_1[0x16] = param_1[0x16] & ~(auVar6[6] & ~auVar8[6]);
    param_1[0x17] = param_1[0x17] & ~(auVar6[7] & ~auVar8[7]);
    param_1[0x18] = param_1[0x18] & ~(auVar6[8] & ~auVar8[8]);
    param_1[0x19] = param_1[0x19] & ~(auVar6[9] & ~auVar8[9]);
    param_1[0x1a] = param_1[0x1a] & ~(auVar6[10] & ~auVar8[10]);
    param_1[0x1b] = param_1[0x1b] & ~(auVar6[11] & ~auVar8[11]);
    param_1[0x1c] = param_1[0x1c] & ~(auVar6[12] & ~auVar8[12]);
    param_1[0x1d] = param_1[0x1d] & ~(auVar6[13] & ~auVar8[13]);
    param_1[0x1e] = param_1[0x1e] & ~(auVar6[14] & ~auVar8[14]);
    param_1[0x1f] = param_1[0x1f] & ~(auVar6[15] & ~auVar8[15]);
    param_1 = param_1 + 0x20;
    iVar2 = param_4 + -0x20;
    bVar1 = 0x1f < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


