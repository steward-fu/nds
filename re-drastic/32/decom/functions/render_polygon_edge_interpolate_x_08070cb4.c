/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_x
 * Address  : 08070cb4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_edge_interpolate_x
               (geometry_vertex_struct **vertex_pairs,u8 *buffer_data,u8 *y_spans,
               u32 vertex_pair_count,u32 y_clip)

{
  ushort *puVar1;
  uint uVar2;
  s32 x_step;
  geometry_vertex_struct *vertex_b;
  geometry_vertex_struct *vertex_a;
  uint uVar3;
  int iVar4;
  uint uVar5;
  s32 dx;
  uint uVar6;
  s32 y_span;
  u32 y_delta_r;
  geometry_vertex_struct **ppgVar7;
  ushort *puVar8;
  byte *pbVar9;
  u32 uVar10;
  ushort uVar11;
  
  if (vertex_pair_count != 0) {
    puVar8 = (ushort *)(buffer_data + 0x580);
    pbVar9 = y_spans + -1;
    uVar10 = 0;
    ppgVar7 = vertex_pairs;
    do {
      pbVar9 = pbVar9 + 1;
      uVar6 = (uint)*pbVar9;
      uVar3 = (uint)vertex_pairs[uVar10 * 2]->x;
      uVar5 = ppgVar7[1]->x - uVar3;
      iVar4 = uVar3 * 0x40000;
      uVar3 = reciprocal_table[(uint)ppgVar7[1]->y - (uint)vertex_pairs[uVar10 * 2]->y];
      if (uVar5 == 0) {
        uVar11 = 0x8000;
LAB_08070dd0:
        x_step = (uint)((ulonglong)uVar3 * (ulonglong)uVar5) >> 0xc |
                 (uVar3 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20))
                 * 0x100000;
      }
      else {
        if (-1 < (int)uVar5) {
          uVar11 = 0;
          goto LAB_08070dd0;
        }
        uVar2 = (uint)((ulonglong)uVar3 * (ulonglong)uVar5);
        uVar11 = 0;
        x_step = uVar2 + 0xfff >> 0xc |
                 (uVar3 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20)
                 + (uint)(0xfffff000 < uVar2)) * 0x100000;
      }
      if (uVar10 == 0) {
        iVar4 = y_clip * x_step + iVar4;
      }
      uVar3 = uVar6;
      puVar1 = puVar8;
      if (uVar6 != 0) {
        do {
          uVar5 = (uint)iVar4 >> 0x12;
          uVar3 = uVar3 - 1;
          iVar4 = iVar4 + x_step;
          *puVar1 = uVar11 | (ushort)uVar5;
          puVar1 = puVar1 + 2;
        } while (uVar3 != 0);
        puVar8 = puVar8 + uVar6 * 2;
      }
      uVar10 = uVar10 + 1;
      ppgVar7 = ppgVar7 + 2;
    } while (vertex_pair_count != uVar10);
  }
  return;
}


