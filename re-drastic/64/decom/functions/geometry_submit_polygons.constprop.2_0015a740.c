/*
 * Ghidra decompilation
 *
 * Function : geometry_submit_polygons.constprop.2
 * Address  : 0015a740
 * Program  : drastic64
 */


void geometry_submit_polygons_constprop_2(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  uVar1 = *param_2;
  uVar4 = (uVar1 >> 0x10 & 0x1f) - 1;
  uVar12 = *(uint *)(param_1 + 0x30c);
  uVar15 = *(uint *)(param_1 + 0x640);
  iVar2 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
  uVar11 = *(uint *)(param_1 + 0x63c);
  lVar9 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
  iVar17 = iVar2 - param_3;
  if ((uVar4 < 0x1e) || (uVar16 = uVar11 >> 0x1a & 7, uVar16 == 1 || uVar16 == 6)) {
    lVar9 = lVar9 + 0x59af0;
  }
  else {
    lVar9 = lVar9 + 0x39ae0;
  }
  lVar9 = param_1 + lVar9;
  uVar14 = *(ushort *)(param_1 + 0x9aa0);
  uVar16 = 3;
  if (*(char *)((long)param_2 + 7) != '\0') {
    uVar16 = 0x43;
  }
  uVar18 = 0x800 - uVar14;
  if ((uint)*(byte *)((long)param_2 + 6) + (uint)uVar14 < 0x801) {
    uVar18 = (uint)*(byte *)((long)param_2 + 6);
  }
  if (0x1800 < iVar17 + 2 + uVar18) {
    param_3 = param_3 - iVar2;
    if (param_3 + 0x1800U < 3) {
      return;
    }
    uVar18 = param_3 + 0x17fd;
  }
  if (0 < (int)uVar18) {
    uVar13 = *(byte *)((long)param_2 + 5) + 2;
    uVar8 = (uint)*(byte *)(param_1 + ((ulong)uVar12 + 0xffe) * 8 + 0xe);
    puVar7 = (uint *)(param_1 + ((ulong)uVar12 + 0xfff) * 8);
    iVar2 = uVar18 + iVar17;
    do {
      uVar14 = (ushort)uVar15;
      if (uVar8 < uVar13) {
        lVar10 = (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
        puVar6 = puVar7;
        do {
          uVar11 = *puVar6;
          uVar14 = *(ushort *)(puVar6 + 1);
          uVar15 = (uint)uVar14;
          puVar7 = puVar6 + 2;
          uVar3 = uVar11 >> 0x1a & 7;
          uVar8 = (uint)*(byte *)((long)puVar6 + 0xe);
          lVar9 = lVar10 + 0x39ae0;
          if ((uVar3 == 6 || uVar3 == 1) || uVar4 < 0x1e) {
            lVar9 = lVar10 + 0x59af0;
          }
          lVar9 = param_1 + lVar9;
          uVar12 = uVar12 + 1;
          puVar6 = puVar7;
        } while (uVar8 < uVar13);
      }
      uVar13 = uVar13 + 1;
      uVar3 = *(uint *)(lVar9 + 0x10000);
      lVar5 = (ulong)uVar3 * 0x20;
      lVar10 = lVar9 + lVar5;
      *(uint *)(lVar10 + 4) = uVar1;
      *(uint *)(lVar9 + lVar5) = uVar11;
      *(uint *)(lVar10 + 8) = uVar16;
      *(ushort *)(lVar10 + 0x18) = uVar14;
      *(short *)(lVar10 + 0x1a) = (short)iVar17;
      *(uint *)(lVar9 + 0x10000) = uVar3 + 1;
      iVar17 = iVar17 + 1;
      uVar16 = uVar16 ^ 0x40;
    } while (iVar17 != iVar2);
    uVar14 = *(ushort *)(param_1 + 0x9aa0);
  }
  *(uint *)(param_1 + 0x30c) = uVar12;
  *(uint *)(param_1 + 0x63c) = uVar11;
  *(uint *)(param_1 + 0x640) = uVar15;
  *(ushort *)(param_1 + 0x9aa0) = uVar14 + (short)uVar18;
  return;
}


