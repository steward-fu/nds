/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_rgb_interpolants_asm
 * Address  : 0019a3f0
 * Program  : drastic64
 */


void render_polygon_setup_rgb_interpolants_asm
               (long param_1,undefined2 *param_2,int param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  
  puVar6 = (uint *)(param_1 + 0x420);
  puVar7 = (uint *)(param_1 + 0x580);
  puVar8 = (undefined4 *)(param_1 + 0x4d0);
  puVar9 = (undefined2 *)((long)param_2 + (param_4 & 0xffffffff));
  puVar10 = param_2 + (param_4 & 0xffffffff);
  piVar11 = (int *)((long)puVar10 + (param_4 & 0xffffffff));
  piVar12 = (int *)((long)piVar11 + (param_4 & 0xffffffff) * 2);
  piVar13 = (int *)((long)piVar12 + (param_4 & 0xffffffff) * 2);
  puVar4 = (undefined4 *)(param_1 + 0x630);
  do {
    uVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    iVar14 = (uVar5 & 0xffff) << 0xf;
    iVar15 = (uVar5 >> 0x10) << 0xf;
    iVar16 = (uVar2 >> 0x10) << 0xf;
    uVar17 = (undefined2)uVar3;
    uVar18 = (undefined2)((uint)uVar3 >> 0x10);
    uVar19 = (undefined2)((uint)*puVar4 >> 0x10);
    uVar5 = (uint)*(ushort *)puVar4;
    do {
      *piVar11 = iVar14;
      piVar11[1] = iVar14;
      piVar11[2] = iVar14;
      piVar11[3] = iVar14;
      piVar11[4] = iVar14;
      piVar11[5] = iVar14;
      piVar11[6] = iVar14;
      piVar11[7] = iVar14;
      piVar11 = piVar11 + 8;
      *piVar12 = iVar15;
      piVar12[1] = iVar15;
      piVar12[2] = iVar15;
      piVar12[3] = iVar15;
      piVar12[4] = iVar15;
      piVar12[5] = iVar15;
      piVar12[6] = iVar15;
      piVar12[7] = iVar15;
      piVar12 = piVar12 + 8;
      *piVar13 = iVar16;
      piVar13[1] = iVar16;
      piVar13[2] = iVar16;
      piVar13[3] = iVar16;
      piVar13[4] = iVar16;
      piVar13[5] = iVar16;
      piVar13[6] = iVar16;
      piVar13[7] = iVar16;
      piVar13 = piVar13 + 8;
      *param_2 = uVar17;
      param_2[1] = uVar17;
      param_2[2] = uVar17;
      param_2[3] = uVar17;
      param_2[4] = uVar17;
      param_2[5] = uVar17;
      param_2[6] = uVar17;
      param_2[7] = uVar17;
      param_2 = param_2 + 8;
      *puVar9 = uVar18;
      puVar9[1] = uVar18;
      puVar9[2] = uVar18;
      puVar9[3] = uVar18;
      puVar9[4] = uVar18;
      puVar9[5] = uVar18;
      puVar9[6] = uVar18;
      puVar9[7] = uVar18;
      puVar9 = puVar9 + 8;
      *puVar10 = uVar19;
      puVar10[1] = uVar19;
      puVar10[2] = uVar19;
      puVar10[3] = uVar19;
      puVar10[4] = uVar19;
      puVar10[5] = uVar19;
      puVar10[6] = uVar19;
      puVar10[7] = uVar19;
      puVar10 = puVar10 + 8;
      uVar2 = uVar5 - 8;
      bVar1 = 7 < (int)uVar5;
      uVar5 = uVar2;
    } while (uVar2 != 0 && bVar1);
    piVar11 = piVar11 + (int)uVar2;
    piVar12 = piVar12 + (int)uVar2;
    piVar13 = piVar13 + (int)uVar2;
    param_2 = param_2 + (int)uVar2;
    puVar9 = puVar9 + (int)uVar2;
    puVar10 = puVar10 + (int)uVar2;
    param_3 = param_3 + -1;
    puVar4 = puVar4 + 1;
  } while (param_3 != 0);
  return;
}


