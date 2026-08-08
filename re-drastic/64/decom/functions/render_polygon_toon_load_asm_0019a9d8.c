/*
 * Ghidra decompilation
 *
 * Function : render_polygon_toon_load_asm
 * Address  : 0019a9d8
 * Program  : drastic64
 */


void render_polygon_toon_load_asm(undefined (*param_1) [16],byte *param_2,ulong param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  auVar3 = *param_1;
  auVar4 = param_1[1];
  auVar5 = param_1[2];
  auVar6 = param_1[3];
  auVar7 = param_1[4];
  auVar8 = param_1[5];
  pbVar9 = param_2 + (param_3 & 0xffffffff);
  pbVar10 = param_2 + (param_3 & 0xffffffff) * 2;
  do {
    bVar11 = *param_2 >> 1;
    bVar12 = param_2[1] >> 1;
    bVar13 = param_2[2] >> 1;
    bVar14 = param_2[3] >> 1;
    bVar15 = param_2[4] >> 1;
    bVar16 = param_2[5] >> 1;
    bVar17 = param_2[6] >> 1;
    bVar18 = param_2[7] >> 1;
    bVar19 = param_2[8] >> 1;
    bVar20 = param_2[9] >> 1;
    bVar21 = param_2[10] >> 1;
    bVar22 = param_2[0xb] >> 1;
    bVar23 = param_2[0xc] >> 1;
    bVar24 = param_2[0xd] >> 1;
    bVar25 = param_2[0xe] >> 1;
    bVar26 = param_2[0xf] >> 1;
    auVar27[1] = bVar12;
    auVar27[0] = bVar11;
    auVar27[2] = bVar13;
    auVar27[3] = bVar14;
    auVar27[4] = bVar15;
    auVar27[5] = bVar16;
    auVar27[6] = bVar17;
    auVar27[7] = bVar18;
    auVar27[8] = bVar19;
    auVar27[9] = bVar20;
    auVar27[10] = bVar21;
    auVar27[11] = bVar22;
    auVar27[12] = bVar23;
    auVar27[13] = bVar24;
    auVar27[14] = bVar25;
    auVar27[15] = bVar26;
    auVar27 = a64_TBL(ZEXT816(0),auVar3,auVar4,auVar27);
    auVar28[1] = bVar12;
    auVar28[0] = bVar11;
    auVar28[2] = bVar13;
    auVar28[3] = bVar14;
    auVar28[4] = bVar15;
    auVar28[5] = bVar16;
    auVar28[6] = bVar17;
    auVar28[7] = bVar18;
    auVar28[8] = bVar19;
    auVar28[9] = bVar20;
    auVar28[10] = bVar21;
    auVar28[11] = bVar22;
    auVar28[12] = bVar23;
    auVar28[13] = bVar24;
    auVar28[14] = bVar25;
    auVar28[15] = bVar26;
    auVar28 = a64_TBL(ZEXT816(0),auVar5,auVar6,auVar28);
    auVar29[1] = bVar12;
    auVar29[0] = bVar11;
    auVar29[2] = bVar13;
    auVar29[3] = bVar14;
    auVar29[4] = bVar15;
    auVar29[5] = bVar16;
    auVar29[6] = bVar17;
    auVar29[7] = bVar18;
    auVar29[8] = bVar19;
    auVar29[9] = bVar20;
    auVar29[10] = bVar21;
    auVar29[11] = bVar22;
    auVar29[12] = bVar23;
    auVar29[13] = bVar24;
    auVar29[14] = bVar25;
    auVar29[15] = bVar26;
    auVar29 = a64_TBL(ZEXT816(0),auVar7,auVar8,auVar29);
    *param_2 = auVar27[0];
    param_2[1] = auVar27[1];
    param_2[2] = auVar27[2];
    param_2[3] = auVar27[3];
    param_2[4] = auVar27[4];
    param_2[5] = auVar27[5];
    param_2[6] = auVar27[6];
    param_2[7] = auVar27[7];
    param_2[8] = auVar27[8];
    param_2[9] = auVar27[9];
    param_2[10] = auVar27[10];
    param_2[0xb] = auVar27[11];
    param_2[0xc] = auVar27[12];
    param_2[0xd] = auVar27[13];
    param_2[0xe] = auVar27[14];
    param_2[0xf] = auVar27[15];
    param_2 = param_2 + 0x10;
    *pbVar9 = auVar28[0];
    pbVar9[1] = auVar28[1];
    pbVar9[2] = auVar28[2];
    pbVar9[3] = auVar28[3];
    pbVar9[4] = auVar28[4];
    pbVar9[5] = auVar28[5];
    pbVar9[6] = auVar28[6];
    pbVar9[7] = auVar28[7];
    pbVar9[8] = auVar28[8];
    pbVar9[9] = auVar28[9];
    pbVar9[10] = auVar28[10];
    pbVar9[0xb] = auVar28[11];
    pbVar9[0xc] = auVar28[12];
    pbVar9[0xd] = auVar28[13];
    pbVar9[0xe] = auVar28[14];
    pbVar9[0xf] = auVar28[15];
    pbVar9 = pbVar9 + 0x10;
    *pbVar10 = auVar29[0];
    pbVar10[1] = auVar29[1];
    pbVar10[2] = auVar29[2];
    pbVar10[3] = auVar29[3];
    pbVar10[4] = auVar29[4];
    pbVar10[5] = auVar29[5];
    pbVar10[6] = auVar29[6];
    pbVar10[7] = auVar29[7];
    pbVar10[8] = auVar29[8];
    pbVar10[9] = auVar29[9];
    pbVar10[10] = auVar29[10];
    pbVar10[0xb] = auVar29[11];
    pbVar10[0xc] = auVar29[12];
    pbVar10[0xd] = auVar29[13];
    pbVar10[0xe] = auVar29[14];
    pbVar10[0xf] = auVar29[15];
    pbVar10 = pbVar10 + 0x10;
    iVar2 = param_4 + -0x10;
    bVar1 = 0xf < param_4;
    param_4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


