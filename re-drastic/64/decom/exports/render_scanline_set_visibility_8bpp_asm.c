/*
 * Ghidra decompilation
 *
 * Function : render_scanline_set_visibility_8bpp_asm
 * Address  : 0019f390
 * Program  : drastic64
 */


void render_scanline_set_visibility_8bpp_asm(char *param_1,undefined (*param_2) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  auVar1 = NEON_cmeq(*param_2,0,1);
  auVar2 = NEON_cmeq(param_2[1],0,1);
  auVar3 = NEON_cmeq(param_2[2],0,1);
  auVar4 = NEON_cmeq(param_2[3],0,1);
  auVar5 = NEON_cmeq(param_2[4],0,1);
  auVar6 = NEON_cmeq(param_2[5],0,1);
  auVar7 = NEON_cmeq(param_2[6],0,1);
  auVar8 = NEON_cmeq(param_2[7],0,1);
  auVar9 = NEON_cmeq(param_2[8],0,1);
  auVar10 = NEON_cmeq(param_2[9],0,1);
  auVar11 = NEON_cmeq(param_2[10],0,1);
  auVar12 = NEON_cmeq(param_2[0xb],0,1);
  auVar13 = NEON_cmeq(param_2[0xc],0,1);
  auVar14 = NEON_cmeq(param_2[0xd],0,1);
  auVar15 = NEON_cmeq(param_2[0xe],0,1);
  auVar16 = NEON_cmeq(param_2[0xf],0,1);
  *param_1 = (~auVar1[0] & 1) + (~auVar1[1] & 2) + (~auVar1[2] & 4) + (~auVar1[3] & 8) +
             (~auVar1[4] & 0x10) + (~auVar1[5] & 0x20) + (~auVar1[6] & 0x40) + (~auVar1[7] & 0x80);
  param_1[1] = (~auVar1[8] & 1) + (~auVar1[9] & 2) + (~auVar1[10] & 4) + (~auVar1[11] & 8) +
               (~auVar1[12] & 0x10) + (~auVar1[13] & 0x20) +
               (~auVar1[14] & 0x40) + (~auVar1[15] & 0x80);
  param_1[2] = (~auVar2[0] & 1) + (~auVar2[1] & 2) + (~auVar2[2] & 4) + (~auVar2[3] & 8) +
               (~auVar2[4] & 0x10) + (~auVar2[5] & 0x20) + (~auVar2[6] & 0x40) + (~auVar2[7] & 0x80)
  ;
  param_1[3] = (~auVar2[8] & 1) + (~auVar2[9] & 2) + (~auVar2[10] & 4) + (~auVar2[11] & 8) +
               (~auVar2[12] & 0x10) + (~auVar2[13] & 0x20) +
               (~auVar2[14] & 0x40) + (~auVar2[15] & 0x80);
  param_1[4] = (~auVar3[0] & 1) + (~auVar3[1] & 2) + (~auVar3[2] & 4) + (~auVar3[3] & 8) +
               (~auVar3[4] & 0x10) + (~auVar3[5] & 0x20) + (~auVar3[6] & 0x40) + (~auVar3[7] & 0x80)
  ;
  param_1[5] = (~auVar3[8] & 1) + (~auVar3[9] & 2) + (~auVar3[10] & 4) + (~auVar3[11] & 8) +
               (~auVar3[12] & 0x10) + (~auVar3[13] & 0x20) +
               (~auVar3[14] & 0x40) + (~auVar3[15] & 0x80);
  param_1[6] = (~auVar4[0] & 1) + (~auVar4[1] & 2) + (~auVar4[2] & 4) + (~auVar4[3] & 8) +
               (~auVar4[4] & 0x10) + (~auVar4[5] & 0x20) + (~auVar4[6] & 0x40) + (~auVar4[7] & 0x80)
  ;
  param_1[7] = (~auVar4[8] & 1) + (~auVar4[9] & 2) + (~auVar4[10] & 4) + (~auVar4[11] & 8) +
               (~auVar4[12] & 0x10) + (~auVar4[13] & 0x20) +
               (~auVar4[14] & 0x40) + (~auVar4[15] & 0x80);
  param_1[8] = (~auVar5[0] & 1) + (~auVar5[1] & 2) + (~auVar5[2] & 4) + (~auVar5[3] & 8) +
               (~auVar5[4] & 0x10) + (~auVar5[5] & 0x20) + (~auVar5[6] & 0x40) + (~auVar5[7] & 0x80)
  ;
  param_1[9] = (~auVar5[8] & 1) + (~auVar5[9] & 2) + (~auVar5[10] & 4) + (~auVar5[11] & 8) +
               (~auVar5[12] & 0x10) + (~auVar5[13] & 0x20) +
               (~auVar5[14] & 0x40) + (~auVar5[15] & 0x80);
  param_1[10] = (~auVar6[0] & 1) + (~auVar6[1] & 2) + (~auVar6[2] & 4) + (~auVar6[3] & 8) +
                (~auVar6[4] & 0x10) + (~auVar6[5] & 0x20) +
                (~auVar6[6] & 0x40) + (~auVar6[7] & 0x80);
  param_1[0xb] = (~auVar6[8] & 1) + (~auVar6[9] & 2) + (~auVar6[10] & 4) + (~auVar6[11] & 8) +
                 (~auVar6[12] & 0x10) + (~auVar6[13] & 0x20) +
                 (~auVar6[14] & 0x40) + (~auVar6[15] & 0x80);
  param_1[0xc] = (~auVar7[0] & 1) + (~auVar7[1] & 2) + (~auVar7[2] & 4) + (~auVar7[3] & 8) +
                 (~auVar7[4] & 0x10) + (~auVar7[5] & 0x20) +
                 (~auVar7[6] & 0x40) + (~auVar7[7] & 0x80);
  param_1[0xd] = (~auVar7[8] & 1) + (~auVar7[9] & 2) + (~auVar7[10] & 4) + (~auVar7[11] & 8) +
                 (~auVar7[12] & 0x10) + (~auVar7[13] & 0x20) +
                 (~auVar7[14] & 0x40) + (~auVar7[15] & 0x80);
  param_1[0xe] = (~auVar8[0] & 1) + (~auVar8[1] & 2) + (~auVar8[2] & 4) + (~auVar8[3] & 8) +
                 (~auVar8[4] & 0x10) + (~auVar8[5] & 0x20) +
                 (~auVar8[6] & 0x40) + (~auVar8[7] & 0x80);
  param_1[0xf] = (~auVar8[8] & 1) + (~auVar8[9] & 2) + (~auVar8[10] & 4) + (~auVar8[11] & 8) +
                 (~auVar8[12] & 0x10) + (~auVar8[13] & 0x20) +
                 (~auVar8[14] & 0x40) + (~auVar8[15] & 0x80);
  param_1[0x10] =
       (~auVar9[0] & 1) + (~auVar9[1] & 2) + (~auVar9[2] & 4) + (~auVar9[3] & 8) +
       (~auVar9[4] & 0x10) + (~auVar9[5] & 0x20) + (~auVar9[6] & 0x40) + (~auVar9[7] & 0x80);
  param_1[0x11] =
       (~auVar9[8] & 1) + (~auVar9[9] & 2) + (~auVar9[10] & 4) + (~auVar9[11] & 8) +
       (~auVar9[12] & 0x10) + (~auVar9[13] & 0x20) + (~auVar9[14] & 0x40) + (~auVar9[15] & 0x80);
  param_1[0x12] =
       (~auVar10[0] & 1) + (~auVar10[1] & 2) + (~auVar10[2] & 4) + (~auVar10[3] & 8) +
       (~auVar10[4] & 0x10) + (~auVar10[5] & 0x20) + (~auVar10[6] & 0x40) + (~auVar10[7] & 0x80);
  param_1[0x13] =
       (~auVar10[8] & 1) + (~auVar10[9] & 2) + (~auVar10[10] & 4) + (~auVar10[11] & 8) +
       (~auVar10[12] & 0x10) + (~auVar10[13] & 0x20) + (~auVar10[14] & 0x40) + (~auVar10[15] & 0x80)
  ;
  param_1[0x14] =
       (~auVar11[0] & 1) + (~auVar11[1] & 2) + (~auVar11[2] & 4) + (~auVar11[3] & 8) +
       (~auVar11[4] & 0x10) + (~auVar11[5] & 0x20) + (~auVar11[6] & 0x40) + (~auVar11[7] & 0x80);
  param_1[0x15] =
       (~auVar11[8] & 1) + (~auVar11[9] & 2) + (~auVar11[10] & 4) + (~auVar11[11] & 8) +
       (~auVar11[12] & 0x10) + (~auVar11[13] & 0x20) + (~auVar11[14] & 0x40) + (~auVar11[15] & 0x80)
  ;
  param_1[0x16] =
       (~auVar12[0] & 1) + (~auVar12[1] & 2) + (~auVar12[2] & 4) + (~auVar12[3] & 8) +
       (~auVar12[4] & 0x10) + (~auVar12[5] & 0x20) + (~auVar12[6] & 0x40) + (~auVar12[7] & 0x80);
  param_1[0x17] =
       (~auVar12[8] & 1) + (~auVar12[9] & 2) + (~auVar12[10] & 4) + (~auVar12[11] & 8) +
       (~auVar12[12] & 0x10) + (~auVar12[13] & 0x20) + (~auVar12[14] & 0x40) + (~auVar12[15] & 0x80)
  ;
  param_1[0x18] =
       (~auVar13[0] & 1) + (~auVar13[1] & 2) + (~auVar13[2] & 4) + (~auVar13[3] & 8) +
       (~auVar13[4] & 0x10) + (~auVar13[5] & 0x20) + (~auVar13[6] & 0x40) + (~auVar13[7] & 0x80);
  param_1[0x19] =
       (~auVar13[8] & 1) + (~auVar13[9] & 2) + (~auVar13[10] & 4) + (~auVar13[11] & 8) +
       (~auVar13[12] & 0x10) + (~auVar13[13] & 0x20) + (~auVar13[14] & 0x40) + (~auVar13[15] & 0x80)
  ;
  param_1[0x1a] =
       (~auVar14[0] & 1) + (~auVar14[1] & 2) + (~auVar14[2] & 4) + (~auVar14[3] & 8) +
       (~auVar14[4] & 0x10) + (~auVar14[5] & 0x20) + (~auVar14[6] & 0x40) + (~auVar14[7] & 0x80);
  param_1[0x1b] =
       (~auVar14[8] & 1) + (~auVar14[9] & 2) + (~auVar14[10] & 4) + (~auVar14[11] & 8) +
       (~auVar14[12] & 0x10) + (~auVar14[13] & 0x20) + (~auVar14[14] & 0x40) + (~auVar14[15] & 0x80)
  ;
  param_1[0x1c] =
       (~auVar15[0] & 1) + (~auVar15[1] & 2) + (~auVar15[2] & 4) + (~auVar15[3] & 8) +
       (~auVar15[4] & 0x10) + (~auVar15[5] & 0x20) + (~auVar15[6] & 0x40) + (~auVar15[7] & 0x80);
  param_1[0x1d] =
       (~auVar15[8] & 1) + (~auVar15[9] & 2) + (~auVar15[10] & 4) + (~auVar15[11] & 8) +
       (~auVar15[12] & 0x10) + (~auVar15[13] & 0x20) + (~auVar15[14] & 0x40) + (~auVar15[15] & 0x80)
  ;
  param_1[0x1e] =
       (~auVar16[0] & 1) + (~auVar16[1] & 2) + (~auVar16[2] & 4) + (~auVar16[3] & 8) +
       (~auVar16[4] & 0x10) + (~auVar16[5] & 0x20) + (~auVar16[6] & 0x40) + (~auVar16[7] & 0x80);
  param_1[0x1f] =
       (~auVar16[8] & 1) + (~auVar16[9] & 2) + (~auVar16[10] & 4) + (~auVar16[11] & 8) +
       (~auVar16[12] & 0x10) + (~auVar16[13] & 0x20) + (~auVar16[14] & 0x40) + (~auVar16[15] & 0x80)
  ;
  return;
}


