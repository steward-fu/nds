/*
 * Ghidra decompilation
 *
 * Function : geometry_perspective_apply_hires_c
 * Address  : 0015ebd0
 * Program  : drastic64
 */


void geometry_perspective_apply_hires_c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x64c);
  uVar5 = *(ushort *)(param_1 + 0x9abc);
  uVar6 = *(ushort *)(param_1 + 0x9ab8);
  uVar7 = *(ushort *)(param_1 + 0x9aba);
  uVar8 = *(ushort *)(param_1 + 0x9ab6);
  if (uVar1 != 0) {
    piVar10 = (int *)(param_1 + 0x17f0);
    lVar11 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x6170 + lVar11 * 4);
      uVar3 = *(uint *)(param_2 + lVar11 * 4);
      lVar9 = (long)(iVar2 + piVar10[0xc40]) * (ulong)uVar3;
      iVar4 = *(int *)(param_3 + lVar11 * 4);
      uVar12 = (ulong)(0x3e - iVar4);
      *piVar10 = (uint)uVar7 * 2 +
                 (int)((long)(iVar2 + *piVar10) * (ulong)uVar8 * (ulong)uVar3 >> (uVar12 & 0x3f));
      piVar10[0x620] =
           (0xc0 - ((uint)uVar5 + (uint)uVar6)) * 2 +
           (int)((long)(iVar2 - piVar10[0x620]) * (ulong)(uint)uVar6 * (ulong)uVar3 >>
                (uVar12 & 0x3f));
      piVar10[0xc40] = (int)(lVar9 - (lVar9 + 0x7fffU >> 0xf) >> ((ulong)(0x30 - iVar4) & 0x3f));
      lVar11 = lVar11 + 1;
      piVar10 = piVar10 + 1;
    } while ((uint)lVar11 < uVar1);
    return;
  }
  return;
}


