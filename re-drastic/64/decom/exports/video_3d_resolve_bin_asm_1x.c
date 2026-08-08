/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_asm_1x
 * Address  : 0019ba90
 * Program  : drastic64
 */


void video_3d_resolve_bin_asm_1x(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar1 = 0x1000;
  do {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    uVar10 = param_2[8];
    uVar11 = param_2[9];
    uVar12 = param_2[10];
    uVar13 = param_2[0xb];
    uVar14 = param_2[0xc];
    uVar15 = param_2[0xd];
    uVar16 = param_2[0xe];
    uVar17 = param_2[0xf];
    param_2 = param_2 + 0x10;
    *param_1 = uVar2 & 0x1fffffff;
    param_1[1] = uVar3 & 0x1fffffff;
    param_1[2] = uVar4 & 0x1fffffff;
    param_1[3] = uVar5 & 0x1fffffff;
    param_1[4] = uVar6 & 0x1fffffff;
    param_1[5] = uVar7 & 0x1fffffff;
    param_1[6] = uVar8 & 0x1fffffff;
    param_1[7] = uVar9 & 0x1fffffff;
    param_1[8] = uVar10 & 0x1fffffff;
    param_1[9] = uVar11 & 0x1fffffff;
    param_1[10] = uVar12 & 0x1fffffff;
    param_1[0xb] = uVar13 & 0x1fffffff;
    param_1[0xc] = uVar14 & 0x1fffffff;
    param_1[0xd] = uVar15 & 0x1fffffff;
    param_1[0xe] = uVar16 & 0x1fffffff;
    param_1[0xf] = uVar17 & 0x1fffffff;
    param_1 = param_1 + 0x10;
    iVar1 = iVar1 + -0x10;
  } while (iVar1 != 0);
  return;
}


