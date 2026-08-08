/*
 * Ghidra decompilation
 *
 * Function : video_3d_resolve_bin_asm_4x
 * Address  : 0019ce78
 * Program  : drastic64
 */


void video_3d_resolve_bin_asm_4x(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
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
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  iVar4 = 0x20;
  iVar3 = 0x200;
  puVar1 = param_1 + 0x100;
  do {
    do {
      puVar5 = puVar1;
      puVar2 = param_1;
      uVar6 = *param_2;
      uVar10 = param_2[1];
      uVar7 = param_2[2];
      uVar11 = param_2[3];
      uVar8 = param_2[4];
      uVar12 = param_2[5];
      uVar9 = param_2[6];
      uVar13 = param_2[7];
      uVar14 = param_2[8];
      uVar18 = param_2[9];
      uVar15 = param_2[10];
      uVar19 = param_2[0xb];
      uVar16 = param_2[0xc];
      uVar20 = param_2[0xd];
      uVar17 = param_2[0xe];
      uVar21 = param_2[0xf];
      uVar22 = param_2[0x10];
      uVar26 = param_2[0x11];
      uVar23 = param_2[0x12];
      uVar27 = param_2[0x13];
      uVar24 = param_2[0x14];
      uVar28 = param_2[0x15];
      uVar25 = param_2[0x16];
      uVar29 = param_2[0x17];
      uVar30 = param_2[0x18];
      uVar34 = param_2[0x19];
      uVar31 = param_2[0x1a];
      uVar35 = param_2[0x1b];
      uVar32 = param_2[0x1c];
      uVar36 = param_2[0x1d];
      uVar33 = param_2[0x1e];
      uVar37 = param_2[0x1f];
      param_2 = param_2 + 0x20;
      *puVar2 = uVar6 & 0x1fffffff;
      puVar2[1] = uVar7 & 0x1fffffff;
      puVar2[2] = uVar8 & 0x1fffffff;
      puVar2[3] = uVar9 & 0x1fffffff;
      *puVar5 = uVar10 & 0x1fffffff;
      puVar5[1] = uVar11 & 0x1fffffff;
      puVar5[2] = uVar12 & 0x1fffffff;
      puVar5[3] = uVar13 & 0x1fffffff;
      puVar2[4] = uVar14 & 0x1fffffff;
      puVar2[5] = uVar15 & 0x1fffffff;
      puVar2[6] = uVar16 & 0x1fffffff;
      puVar2[7] = uVar17 & 0x1fffffff;
      puVar5[4] = uVar18 & 0x1fffffff;
      puVar5[5] = uVar19 & 0x1fffffff;
      puVar5[6] = uVar20 & 0x1fffffff;
      puVar5[7] = uVar21 & 0x1fffffff;
      puVar2[8] = uVar22 & 0x1fffffff;
      puVar2[9] = uVar23 & 0x1fffffff;
      puVar2[10] = uVar24 & 0x1fffffff;
      puVar2[0xb] = uVar25 & 0x1fffffff;
      puVar5[8] = uVar26 & 0x1fffffff;
      puVar5[9] = uVar27 & 0x1fffffff;
      puVar5[10] = uVar28 & 0x1fffffff;
      puVar5[0xb] = uVar29 & 0x1fffffff;
      puVar2[0xc] = uVar30 & 0x1fffffff;
      puVar2[0xd] = uVar31 & 0x1fffffff;
      puVar2[0xe] = uVar32 & 0x1fffffff;
      puVar2[0xf] = uVar33 & 0x1fffffff;
      puVar5[0xc] = uVar34 & 0x1fffffff;
      puVar5[0xd] = uVar35 & 0x1fffffff;
      puVar5[0xe] = uVar36 & 0x1fffffff;
      puVar5[0xf] = uVar37 & 0x1fffffff;
      iVar3 = iVar3 + -0x20;
      param_1 = puVar2 + 0x10;
      puVar1 = puVar5 + 0x10;
    } while (iVar3 != 0);
    iVar4 = iVar4 + -1;
    iVar3 = 0x200;
    param_1 = puVar2 + 0x110;
    puVar1 = puVar5 + 0x110;
  } while (iVar4 != 0);
  return;
}


