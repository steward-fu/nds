/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_edge_markers
 * Address  : 080714d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_setup_edge_markers(u8 *edge_buffer_data,u32 height,u32 clips)

{
  ushort *puVar1;
  s32 next_x0;
  s32 last_x1;
  u32 width;
  uint uVar2;
  ushort *puVar3;
  s32 ix1;
  int iVar4;
  u16 *dx;
  s32 ix0;
  uint uVar5;
  ushort *puVar6;
  u16 *lx;
  uint uVar7;
  s32 x1;
  s32 next_x1;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  s32 last_x0;
  u32 left_span;
  uint uVar13;
  ushort *puVar14;
  u32 local_30;
  
  puVar6 = (ushort *)(edge_buffer_data + 0x580);
  puVar3 = (ushort *)(edge_buffer_data + 0x6e0);
  if ((clips & 1) == 0) {
    uVar12 = (uint)*puVar6;
    last_x1 = *(ushort *)(edge_buffer_data + 0x634) + uVar12;
    uVar13 = uVar12;
  }
  else {
    uVar12 = (uint)*puVar6;
    uVar13 = (uint)*(ushort *)(edge_buffer_data + 0x57c);
    last_x1 = *(ushort *)(edge_buffer_data + 0x62c) + uVar13;
  }
  uVar10 = *(ushort *)(edge_buffer_data + 0x630);
  if ((clips & 2) == 0) {
    local_30 = height - 1;
    if (local_30 == 0) goto LAB_080715dc;
  }
  else {
    local_30 = height;
    if (height == 0) {
      return;
    }
  }
  uVar11 = 0;
  iVar8 = uVar10 + uVar12;
  uVar2 = (uint)uVar10;
  puVar1 = (ushort *)(edge_buffer_data + 0x630);
  do {
    puVar14 = puVar1;
    uVar7 = uVar12;
    uVar12 = (uint)puVar6[2];
    uVar10 = puVar6[0x5a];
    uVar11 = uVar11 + 1;
    puVar6 = puVar6 + 2;
    iVar9 = uVar10 + uVar12;
    uVar5 = uVar7 + 1;
    if (uVar7 + 1 < uVar12) {
      uVar5 = uVar12;
    }
    iVar4 = iVar8 + -1;
    if (iVar9 <= iVar8 + -1) {
      iVar4 = iVar9;
    }
    if (uVar5 < uVar13) {
      left_span = uVar13 - uVar7;
    }
    else {
      left_span = uVar5 - uVar7;
    }
    if (iVar4 < last_x1) {
      last_x1 = iVar4;
    }
    if (uVar2 < left_span) {
      left_span = uVar2;
    }
    if ((uint)(iVar8 - last_x1) <= uVar2) {
      uVar2 = iVar8 - last_x1;
    }
    puVar14[0x58] = (ushort)left_span;
    puVar14[0x59] = (ushort)uVar2;
    puVar3 = puVar14 + 0x5a;
    last_x1 = iVar8;
    iVar8 = iVar9;
    uVar2 = (uint)uVar10;
    uVar13 = uVar7;
    puVar1 = puVar14 + 2;
  } while (uVar11 < local_30);
  if ((clips & 2) != 0) {
    return;
  }
  uVar10 = puVar14[2];
LAB_080715dc:
  *puVar3 = uVar10 + 1;
  puVar3[1] = 0;
  return;
}


