/*
 * Ghidra decompilation
 *
 * Function : render_polygon_mark_edges
 * Address  : 08053754
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_mark_edges(u8 *edge_buffer_data,u32 *depth_values,u32 height)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  u32 mark_left;
  ushort *puVar8;
  u16 *mark_spans;
  ushort *puVar9;
  u16 *dx;
  int iVar10;
  u8 *id_values;
  u8 *puVar11;
  
  iVar10 = (int)depth_values + 3;
  puVar8 = (ushort *)(edge_buffer_data + 0x6e0);
  uVar7 = (uint)*puVar8;
  puVar9 = (ushort *)(edge_buffer_data + 0x630);
  if (uVar7 != 0) {
    iVar3 = (int)depth_values + 7;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined *)(iVar3 + -4) = 0x40;
      iVar3 = iVar3 + 4;
    } while (uVar7 != uVar2);
    iVar10 = iVar10 + uVar7 * 4;
  }
  if (height != 1) {
    iVar3 = 0;
    puVar11 = edge_buffer_data + 0x634;
    do {
      iVar4 = ((uint)*(ushort *)(puVar11 + -4) - (uint)*(ushort *)(puVar11 + 0xae)) - uVar7;
      uVar7 = (uint)*(ushort *)(puVar11 + 0xb0);
      iVar10 = iVar10 + iVar4 * 4;
      iVar4 = *(ushort *)(puVar11 + 0xae) + uVar7;
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined *)(iVar10 + iVar5 * 4) = 0x40;
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar4);
        iVar10 = iVar10 + iVar5 * 4;
      }
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 4;
    } while (iVar3 != height - 1);
    puVar8 = puVar8 + (height + 0x3fffffff) * 2;
    puVar9 = puVar9 + (height + 0x3fffffff) * 2;
  }
  uVar2 = (uint)puVar8[1];
  uVar1 = *puVar9;
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      *(undefined *)(iVar10 + ((uVar1 - uVar2) - uVar7) * 4 + uVar6 * 4) = 0x40;
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  return;
}


