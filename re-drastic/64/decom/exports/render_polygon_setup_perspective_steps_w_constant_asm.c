/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps_w_constant_asm
 * Address  : 00199eb0
 * Program  : drastic64
 */


void render_polygon_setup_perspective_steps_w_constant_asm
               (undefined2 *param_1,long param_2,int param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  puVar10 = (ushort *)(param_2 + 0x630);
  uVar1 = *puVar10;
  do {
    uVar12 = (ulong)uVar1;
    puVar10 = puVar10 + 2;
    iVar18 = *(int *)(param_4 + uVar12 * 4);
    iVar17 = 0;
    iVar19 = iVar18 * 2;
    iVar20 = iVar18 * 3;
    iVar21 = iVar18 * 4;
    iVar22 = iVar18 * 5;
    iVar23 = iVar18 * 6;
    iVar24 = iVar18 * 7;
    iVar13 = iVar18 * 8;
    iVar14 = iVar18 * 8;
    iVar15 = iVar18 * 8;
    iVar16 = iVar18 * 8;
    do {
      uVar2 = (uint)iVar17 >> 0x10;
      uVar3 = (uint)iVar18 >> 0x10;
      uVar4 = (uint)iVar19 >> 0x10;
      uVar5 = (uint)iVar20 >> 0x10;
      uVar6 = (uint)iVar21 >> 0x10;
      uVar7 = (uint)iVar22 >> 0x10;
      uVar8 = (uint)iVar23 >> 0x10;
      uVar9 = (uint)iVar24 >> 0x10;
      iVar17 = iVar17 + iVar13;
      iVar18 = iVar18 + iVar14;
      iVar19 = iVar19 + iVar15;
      iVar20 = iVar20 + iVar16;
      iVar21 = iVar21 + iVar13;
      iVar22 = iVar22 + iVar14;
      iVar23 = iVar23 + iVar15;
      iVar24 = iVar24 + iVar16;
      *param_1 = (short)uVar2;
      param_1[1] = (short)uVar3;
      param_1[2] = (short)uVar4;
      param_1[3] = (short)uVar5;
      param_1[4] = (short)uVar6;
      param_1[5] = (short)uVar7;
      param_1[6] = (short)uVar8;
      param_1[7] = (short)uVar9;
      param_1 = param_1 + 8;
      iVar11 = (int)uVar12;
      uVar2 = iVar11 - 8;
      uVar12 = (ulong)uVar2;
    } while (uVar2 != 0 && 7 < iVar11);
    param_1 = param_1 + (int)uVar2;
    uVar1 = *puVar10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


