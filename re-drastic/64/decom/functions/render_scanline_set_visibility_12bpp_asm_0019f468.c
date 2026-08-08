/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_12bpp_asm
 * Address  : 0019f468
 * Program  : drastic64
 */


void render_scanline_set_visibility_12bpp_asm(char *param_1,undefined *param_2)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  iVar1 = 2;
  do {
    auVar2[0] = *param_2;
    auVar2[1] = param_2[2];
    auVar2[2] = param_2[4];
    auVar2[3] = param_2[6];
    auVar2[4] = param_2[8];
    auVar2[5] = param_2[10];
    auVar2[6] = param_2[0xc];
    auVar2[7] = param_2[0xe];
    auVar2[8] = param_2[0x10];
    auVar2[9] = param_2[0x12];
    auVar2[10] = param_2[0x14];
    auVar2[11] = param_2[0x16];
    auVar2[12] = param_2[0x18];
    auVar2[13] = param_2[0x1a];
    auVar2[14] = param_2[0x1c];
    auVar2[15] = param_2[0x1e];
    auVar3[0] = param_2[0x20];
    auVar3[1] = param_2[0x22];
    auVar3[2] = param_2[0x24];
    auVar3[3] = param_2[0x26];
    auVar3[4] = param_2[0x28];
    auVar3[5] = param_2[0x2a];
    auVar3[6] = param_2[0x2c];
    auVar3[7] = param_2[0x2e];
    auVar3[8] = param_2[0x30];
    auVar3[9] = param_2[0x32];
    auVar3[10] = param_2[0x34];
    auVar3[11] = param_2[0x36];
    auVar3[12] = param_2[0x38];
    auVar3[13] = param_2[0x3a];
    auVar3[14] = param_2[0x3c];
    auVar3[15] = param_2[0x3e];
    auVar4[0] = param_2[0x40];
    auVar4[1] = param_2[0x42];
    auVar4[2] = param_2[0x44];
    auVar4[3] = param_2[0x46];
    auVar4[4] = param_2[0x48];
    auVar4[5] = param_2[0x4a];
    auVar4[6] = param_2[0x4c];
    auVar4[7] = param_2[0x4e];
    auVar4[8] = param_2[0x50];
    auVar4[9] = param_2[0x52];
    auVar4[10] = param_2[0x54];
    auVar4[11] = param_2[0x56];
    auVar4[12] = param_2[0x58];
    auVar4[13] = param_2[0x5a];
    auVar4[14] = param_2[0x5c];
    auVar4[15] = param_2[0x5e];
    auVar5[0] = param_2[0x60];
    auVar5[1] = param_2[0x62];
    auVar5[2] = param_2[100];
    auVar5[3] = param_2[0x66];
    auVar5[4] = param_2[0x68];
    auVar5[5] = param_2[0x6a];
    auVar5[6] = param_2[0x6c];
    auVar5[7] = param_2[0x6e];
    auVar5[8] = param_2[0x70];
    auVar5[9] = param_2[0x72];
    auVar5[10] = param_2[0x74];
    auVar5[11] = param_2[0x76];
    auVar5[12] = param_2[0x78];
    auVar5[13] = param_2[0x7a];
    auVar5[14] = param_2[0x7c];
    auVar5[15] = param_2[0x7e];
    auVar6[0] = param_2[0x80];
    auVar6[1] = param_2[0x82];
    auVar6[2] = param_2[0x84];
    auVar6[3] = param_2[0x86];
    auVar6[4] = param_2[0x88];
    auVar6[5] = param_2[0x8a];
    auVar6[6] = param_2[0x8c];
    auVar6[7] = param_2[0x8e];
    auVar6[8] = param_2[0x90];
    auVar6[9] = param_2[0x92];
    auVar6[10] = param_2[0x94];
    auVar6[11] = param_2[0x96];
    auVar6[12] = param_2[0x98];
    auVar6[13] = param_2[0x9a];
    auVar6[14] = param_2[0x9c];
    auVar6[15] = param_2[0x9e];
    auVar7[0] = param_2[0xa0];
    auVar7[1] = param_2[0xa2];
    auVar7[2] = param_2[0xa4];
    auVar7[3] = param_2[0xa6];
    auVar7[4] = param_2[0xa8];
    auVar7[5] = param_2[0xaa];
    auVar7[6] = param_2[0xac];
    auVar7[7] = param_2[0xae];
    auVar7[8] = param_2[0xb0];
    auVar7[9] = param_2[0xb2];
    auVar7[10] = param_2[0xb4];
    auVar7[11] = param_2[0xb6];
    auVar7[12] = param_2[0xb8];
    auVar7[13] = param_2[0xba];
    auVar7[14] = param_2[0xbc];
    auVar7[15] = param_2[0xbe];
    auVar8[0] = param_2[0xc0];
    auVar8[1] = param_2[0xc2];
    auVar8[2] = param_2[0xc4];
    auVar8[3] = param_2[0xc6];
    auVar8[4] = param_2[200];
    auVar8[5] = param_2[0xca];
    auVar8[6] = param_2[0xcc];
    auVar8[7] = param_2[0xce];
    auVar8[8] = param_2[0xd0];
    auVar8[9] = param_2[0xd2];
    auVar8[10] = param_2[0xd4];
    auVar8[11] = param_2[0xd6];
    auVar8[12] = param_2[0xd8];
    auVar8[13] = param_2[0xda];
    auVar8[14] = param_2[0xdc];
    auVar8[15] = param_2[0xde];
    auVar9[0] = param_2[0xe0];
    auVar9[1] = param_2[0xe2];
    auVar9[2] = param_2[0xe4];
    auVar9[3] = param_2[0xe6];
    auVar9[4] = param_2[0xe8];
    auVar9[5] = param_2[0xea];
    auVar9[6] = param_2[0xec];
    auVar9[7] = param_2[0xee];
    auVar9[8] = param_2[0xf0];
    auVar9[9] = param_2[0xf2];
    auVar9[10] = param_2[0xf4];
    auVar9[11] = param_2[0xf6];
    auVar9[12] = param_2[0xf8];
    auVar9[13] = param_2[0xfa];
    auVar9[14] = param_2[0xfc];
    auVar9[15] = param_2[0xfe];
    param_2 = param_2 + 0x100;
    auVar2 = NEON_cmeq(auVar2,0,1);
    auVar3 = NEON_cmeq(auVar3,0,1);
    auVar4 = NEON_cmeq(auVar4,0,1);
    auVar5 = NEON_cmeq(auVar5,0,1);
    auVar6 = NEON_cmeq(auVar6,0,1);
    auVar7 = NEON_cmeq(auVar7,0,1);
    auVar8 = NEON_cmeq(auVar8,0,1);
    auVar9 = NEON_cmeq(auVar9,0,1);
    iVar1 = iVar1 + -1;
    *param_1 = (~auVar2[0] & 1) + (~auVar2[1] & 2) + (~auVar2[2] & 4) + (~auVar2[3] & 8) +
               (~auVar2[4] & 0x10) + (~auVar2[5] & 0x20) + (~auVar2[6] & 0x40) + (~auVar2[7] & 0x80)
    ;
    param_1[1] = (~auVar2[8] & 1) + (~auVar2[9] & 2) + (~auVar2[10] & 4) + (~auVar2[11] & 8) +
                 (~auVar2[12] & 0x10) + (~auVar2[13] & 0x20) +
                 (~auVar2[14] & 0x40) + (~auVar2[15] & 0x80);
    param_1[2] = (~auVar3[0] & 1) + (~auVar3[1] & 2) + (~auVar3[2] & 4) + (~auVar3[3] & 8) +
                 (~auVar3[4] & 0x10) + (~auVar3[5] & 0x20) +
                 (~auVar3[6] & 0x40) + (~auVar3[7] & 0x80);
    param_1[3] = (~auVar3[8] & 1) + (~auVar3[9] & 2) + (~auVar3[10] & 4) + (~auVar3[11] & 8) +
                 (~auVar3[12] & 0x10) + (~auVar3[13] & 0x20) +
                 (~auVar3[14] & 0x40) + (~auVar3[15] & 0x80);
    param_1[4] = (~auVar4[0] & 1) + (~auVar4[1] & 2) + (~auVar4[2] & 4) + (~auVar4[3] & 8) +
                 (~auVar4[4] & 0x10) + (~auVar4[5] & 0x20) +
                 (~auVar4[6] & 0x40) + (~auVar4[7] & 0x80);
    param_1[5] = (~auVar4[8] & 1) + (~auVar4[9] & 2) + (~auVar4[10] & 4) + (~auVar4[11] & 8) +
                 (~auVar4[12] & 0x10) + (~auVar4[13] & 0x20) +
                 (~auVar4[14] & 0x40) + (~auVar4[15] & 0x80);
    param_1[6] = (~auVar5[0] & 1) + (~auVar5[1] & 2) + (~auVar5[2] & 4) + (~auVar5[3] & 8) +
                 (~auVar5[4] & 0x10) + (~auVar5[5] & 0x20) +
                 (~auVar5[6] & 0x40) + (~auVar5[7] & 0x80);
    param_1[7] = (~auVar5[8] & 1) + (~auVar5[9] & 2) + (~auVar5[10] & 4) + (~auVar5[11] & 8) +
                 (~auVar5[12] & 0x10) + (~auVar5[13] & 0x20) +
                 (~auVar5[14] & 0x40) + (~auVar5[15] & 0x80);
    param_1[8] = (~auVar6[0] & 1) + (~auVar6[1] & 2) + (~auVar6[2] & 4) + (~auVar6[3] & 8) +
                 (~auVar6[4] & 0x10) + (~auVar6[5] & 0x20) +
                 (~auVar6[6] & 0x40) + (~auVar6[7] & 0x80);
    param_1[9] = (~auVar6[8] & 1) + (~auVar6[9] & 2) + (~auVar6[10] & 4) + (~auVar6[11] & 8) +
                 (~auVar6[12] & 0x10) + (~auVar6[13] & 0x20) +
                 (~auVar6[14] & 0x40) + (~auVar6[15] & 0x80);
    param_1[10] = (~auVar7[0] & 1) + (~auVar7[1] & 2) + (~auVar7[2] & 4) + (~auVar7[3] & 8) +
                  (~auVar7[4] & 0x10) + (~auVar7[5] & 0x20) +
                  (~auVar7[6] & 0x40) + (~auVar7[7] & 0x80);
    param_1[0xb] = (~auVar7[8] & 1) + (~auVar7[9] & 2) + (~auVar7[10] & 4) + (~auVar7[11] & 8) +
                   (~auVar7[12] & 0x10) + (~auVar7[13] & 0x20) +
                   (~auVar7[14] & 0x40) + (~auVar7[15] & 0x80);
    param_1[0xc] = (~auVar8[0] & 1) + (~auVar8[1] & 2) + (~auVar8[2] & 4) + (~auVar8[3] & 8) +
                   (~auVar8[4] & 0x10) + (~auVar8[5] & 0x20) +
                   (~auVar8[6] & 0x40) + (~auVar8[7] & 0x80);
    param_1[0xd] = (~auVar8[8] & 1) + (~auVar8[9] & 2) + (~auVar8[10] & 4) + (~auVar8[11] & 8) +
                   (~auVar8[12] & 0x10) + (~auVar8[13] & 0x20) +
                   (~auVar8[14] & 0x40) + (~auVar8[15] & 0x80);
    param_1[0xe] = (~auVar9[0] & 1) + (~auVar9[1] & 2) + (~auVar9[2] & 4) + (~auVar9[3] & 8) +
                   (~auVar9[4] & 0x10) + (~auVar9[5] & 0x20) +
                   (~auVar9[6] & 0x40) + (~auVar9[7] & 0x80);
    param_1[0xf] = (~auVar9[8] & 1) + (~auVar9[9] & 2) + (~auVar9[10] & 4) + (~auVar9[11] & 8) +
                   (~auVar9[12] & 0x10) + (~auVar9[13] & 0x20) +
                   (~auVar9[14] & 0x40) + (~auVar9[15] & 0x80);
    param_1 = param_1 + 0x10;
  } while (iVar1 != 0);
  return;
}


