/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_uv_interpolants_asm
 * Address  : 0019a338
 * Program  : drastic64
 */


void render_polygon_setup_uv_interpolants_asm(long param_1,int *param_2,int param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  short sVar19;
  ulong uVar18;
  short sVar20;
  
  puVar7 = (undefined4 *)(param_1 + 0x2c0);
  puVar8 = (undefined4 *)(param_1 + 0x370);
  piVar9 = param_2 + (param_4 & 0xffffffff);
  puVar5 = (ushort *)(param_1 + 0x630);
  do {
    uVar4 = *puVar8;
    uVar12 = (undefined2)uVar4;
    uVar13 = (undefined2)((uint)uVar4 >> 0x10);
    puVar8 = puVar8 + 1;
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar18 = NEON_cmgt(CONCAT26(uVar13,CONCAT24(uVar12,uVar4)),0,2);
    sVar10 = (short)uVar3;
    sVar11 = (short)((uint)uVar3 >> 0x10);
    iVar14 = sVar10 * 0x8000;
    iVar15 = sVar11 * 0x8000;
    iVar16 = sVar10 * 0x8000;
    iVar17 = sVar11 * 0x8000;
    uVar18 = uVar18 & 0x400040004000400;
    sVar10 = (short)uVar18;
    sVar11 = (short)(uVar18 >> 0x10);
    sVar19 = (short)(uVar18 >> 0x20);
    sVar20 = (short)(uVar18 >> 0x30);
    uVar6 = (uint)*puVar5;
    do {
      *param_2 = iVar14 + sVar10;
      param_2[1] = iVar15 + sVar11;
      param_2[2] = iVar16 + sVar19;
      param_2[3] = iVar17 + sVar20;
      param_2[4] = iVar14 + sVar10;
      param_2[5] = iVar15 + sVar11;
      param_2[6] = iVar16 + sVar19;
      param_2[7] = iVar17 + sVar20;
      param_2[8] = iVar14 + sVar10;
      param_2[9] = iVar15 + sVar11;
      param_2[10] = iVar16 + sVar19;
      param_2[0xb] = iVar17 + sVar20;
      param_2[0xc] = iVar14 + sVar10;
      param_2[0xd] = iVar15 + sVar11;
      param_2[0xe] = iVar16 + sVar19;
      param_2[0xf] = iVar17 + sVar20;
      param_2 = param_2 + 0x10;
      *(undefined2 *)piVar9 = uVar12;
      *(undefined2 *)((long)piVar9 + 2) = uVar13;
      *(undefined2 *)(piVar9 + 1) = uVar12;
      *(undefined2 *)((long)piVar9 + 6) = uVar13;
      *(undefined2 *)(piVar9 + 2) = uVar12;
      *(undefined2 *)((long)piVar9 + 10) = uVar13;
      *(undefined2 *)(piVar9 + 3) = uVar12;
      *(undefined2 *)((long)piVar9 + 0xe) = uVar13;
      *(undefined2 *)(piVar9 + 4) = uVar12;
      *(undefined2 *)((long)piVar9 + 0x12) = uVar13;
      *(undefined2 *)(piVar9 + 5) = uVar12;
      *(undefined2 *)((long)piVar9 + 0x16) = uVar13;
      *(undefined2 *)(piVar9 + 6) = uVar12;
      *(undefined2 *)((long)piVar9 + 0x1a) = uVar13;
      *(undefined2 *)(piVar9 + 7) = uVar12;
      *(undefined2 *)((long)piVar9 + 0x1e) = uVar13;
      piVar9 = piVar9 + 8;
      uVar2 = uVar6 - 8;
      bVar1 = 7 < (int)uVar6;
      uVar6 = uVar2;
    } while (uVar2 != 0 && bVar1);
    param_2 = param_2 + (long)(int)uVar2 * 2;
    piVar9 = piVar9 + (int)uVar2;
    param_3 = param_3 + -1;
    puVar5 = puVar5 + 2;
  } while (param_3 != 0);
  return;
}


