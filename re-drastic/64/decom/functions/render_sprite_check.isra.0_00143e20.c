/*
 * Ghidra decompilation
 *
 * Function : render_sprite_check.isra.0
 * Address  : 00143e20
 * Program  : drastic64
 */


void render_sprite_check_isra_0(long param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)(&vertex_orders + ((ulong)(uVar4 >> 0x10) & 0x7f) * 4);
  lVar2 = param_2 + ((ulong)uVar5 & 0xf) * 0x10;
  lVar3 = param_2 + ((ulong)uVar5 & 0xf0);
  uVar6 = *(ushort *)(lVar2 + 6);
  lVar14 = param_2 + (ulong)(uVar5 >> 0xc) * 0x10;
  param_2 = param_2 + ((ulong)(uVar5 >> 8) & 0xf) * 0x10;
  lVar12 = lVar2;
  if ((uVar6 == *(ushort *)(lVar3 + 6)) && (*(ushort *)(param_2 + 6) == *(ushort *)(lVar14 + 6))) {
    puVar1 = (ushort *)(lVar14 + 4);
    if (*puVar1 != *(ushort *)(lVar2 + 4)) {
      return;
    }
    if (*(ushort *)(param_2 + 4) != *(ushort *)(lVar3 + 4)) {
      return;
    }
    if (*(short *)(lVar2 + 0xe) != *(short *)(lVar3 + 0xe)) {
      return;
    }
    if (*(short *)(lVar14 + 0xe) != *(short *)(param_2 + 0xe)) {
      return;
    }
    if (*(short *)(lVar2 + 0xc) != *(short *)(lVar14 + 0xc)) {
      return;
    }
    if (*(short *)(lVar3 + 0xc) != *(short *)(param_2 + 0xc)) {
      return;
    }
    lVar11 = lVar14;
    lVar14 = lVar3;
    if (*(ushort *)(param_2 + 4) <= *puVar1) {
      lVar11 = param_2;
      lVar12 = lVar3;
      lVar14 = lVar2;
    }
  }
  else {
    if (uVar6 != *(ushort *)(lVar14 + 6)) {
      return;
    }
    if (*(ushort *)(param_2 + 6) != *(ushort *)(lVar3 + 6)) {
      return;
    }
    if (*(ushort *)(param_2 + 4) != *(ushort *)(lVar14 + 4)) {
      return;
    }
    if (*(ushort *)(lVar3 + 4) != *(ushort *)(lVar2 + 4)) {
      return;
    }
    if (*(short *)(lVar2 + 0xe) != *(short *)(lVar14 + 0xe)) {
      return;
    }
    if (*(short *)(lVar3 + 0xe) != *(short *)(param_2 + 0xe)) {
      return;
    }
    if (*(short *)(lVar2 + 0xc) != *(short *)(lVar3 + 0xc)) {
      return;
    }
    if (*(short *)(lVar14 + 0xc) != *(short *)(param_2 + 0xc)) {
      return;
    }
    lVar11 = lVar3;
    if (*(ushort *)(param_2 + 4) <= *(ushort *)(lVar3 + 4)) {
      lVar11 = param_2;
      lVar12 = lVar14;
      lVar14 = lVar2;
    }
  }
  sVar7 = *(short *)(lVar12 + 0xc);
  iVar9 = (uint)*(ushort *)(lVar14 + 4) - (uint)*(ushort *)(lVar12 + 4);
  iVar10 = (int)*(short *)(lVar14 + 0xc) - (int)sVar7;
  if ((iVar10 == iVar9 * 0x10) || (iVar9 * 0x10 == iVar10 + 1)) {
    sVar8 = *(short *)(lVar12 + 0xe);
    iVar10 = (uint)*(ushort *)(lVar11 + 6) - (uint)uVar6;
    iVar13 = (int)*(short *)(lVar11 + 0xe) - (int)sVar8;
    if (((iVar13 == iVar10 * 0x10) || (iVar10 * 0x10 == iVar13 + 1)) &&
       ((((uVar4 >> 9 & 1) != 0 && ((*(uint *)(param_1 + 4) & 0x30) == 0)) &&
        ((uVar4 >> 8 & 0x30) == 0x30)))) {
      iVar13 = (int)sVar7;
      if ((((iVar13 >= 0 && sVar8 < 0) == iVar13 < 0) &&
          ((uint)(iVar9 + (iVar13 >> 4)) <= (uint)*(ushort *)(*(long *)(param_1 + 0x10) + 0x40))) &&
         ((uint)(iVar10 + ((int)sVar8 >> 4)) <= (uint)*(ushort *)(*(long *)(param_1 + 0x10) + 0x42))
         ) {
        *(uint *)(param_1 + 8) = uVar4 | 0x4000;
        return;
      }
    }
  }
  return;
}


