/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_edge_markers_c
 * Address  : 0014d680
 * Program  : drastic64
 */


void render_polygon_setup_edge_markers_c(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  short *psVar15;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x580);
  psVar14 = (short *)(param_1 + 0x630);
  psVar15 = (short *)(param_1 + 0x6e0);
  if ((param_3 & 1) == 0) {
    iVar7 = *(ushort *)(param_1 + 0x634) + uVar9;
    uVar13 = uVar9;
  }
  else {
    uVar13 = (uint)*(ushort *)(param_1 + 0x57c);
    iVar7 = *(ushort *)(param_1 + 0x62c) + uVar13;
  }
  uVar5 = *(ushort *)(param_1 + 0x630);
  if ((param_3 >> 1 & 1) == 0) {
    param_2 = param_2 + -1;
    if (param_2 == 0) goto LAB_0014d754;
  }
  else if (param_2 == 0) {
    return;
  }
  psVar8 = psVar14;
  iVar11 = uVar5 + uVar9;
  do {
    uVar10 = uVar9;
    uVar12 = (uint)uVar5;
    uVar5 = psVar8[2];
    iVar2 = (uint)uVar5 + (uint)(ushort)psVar8[-0x56];
    uVar9 = (uint)(ushort)psVar8[-0x56];
    uVar3 = uVar10 + 1;
    if (uVar10 + 1 < uVar9) {
      uVar3 = uVar9;
    }
    iVar4 = iVar11 + -1;
    if (iVar2 < iVar11 + -1) {
      iVar4 = iVar2;
    }
    if (uVar3 < uVar13) {
      uVar3 = uVar13;
    }
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    uVar13 = uVar12;
    if (uVar3 - uVar10 < uVar12) {
      uVar13 = uVar3 - uVar10;
    }
    if ((uint)(iVar11 - iVar4) < uVar12) {
      uVar12 = iVar11 - iVar4;
    }
    psVar8[0x58] = (short)uVar13;
    psVar8[0x59] = (short)uVar12;
    psVar8 = psVar8 + 2;
    iVar7 = iVar11;
    iVar11 = iVar2;
    uVar13 = uVar10;
  } while (psVar8 != (short *)(param_1 + ((ulong)(param_2 - 1) + 0x18d) * 4));
  lVar1 = (ulong)(param_2 - 1) + 1;
  psVar14 = psVar14 + lVar1 * 2;
  psVar15 = psVar15 + lVar1 * 2;
  if ((param_3 & 2) != 0) {
    return;
  }
LAB_0014d754:
  sVar6 = *psVar14;
  psVar15[1] = 0;
  *psVar15 = sVar6 + 1;
  return;
}


