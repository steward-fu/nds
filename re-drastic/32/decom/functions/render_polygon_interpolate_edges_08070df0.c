/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_edges
 * Address  : 08070df0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_interpolate_edges
               (geometry_struct *geometry,u8 *buffer_data,u8 *temp_data,
               geometry_vertex_struct **vertex_list,u32 min_y,u32 bottom_y,s32 vertex_advance,
               u32 polygon_render_flags)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  s32 x_step;
  geometry_vertex_struct *vertex_b_1;
  geometry_vertex_struct *vertex_b;
  geometry_vertex_struct *pgVar4;
  geometry_vertex_struct *pgVar5;
  geometry_vertex_struct *vertex_a_1;
  int iVar6;
  s32 y_span;
  u32 vertex_pair_count;
  s32 dx;
  uint uVar7;
  u32 uVar8;
  u32 y_delta_r;
  geometry_vertex_struct *vertex_a;
  geometry_vertex_struct *pgVar9;
  byte *pbVar10;
  geometry_vertex_struct **ppgVar11;
  u32 y_clip;
  ushort *puVar12;
  u16 *interpolated_x;
  int iVar13;
  uint uVar14;
  s32 y_span_1;
  ushort uVar15;
  float *perspective_coefficients;
  geometry_vertex_struct *vertex_pairs [32];
  u8 y_spans [16];
  int local_2c;
  
  uVar7 = (uint)(*vertex_list)->y;
  local_2c = __stack_chk_guard;
  if (uVar7 < bottom_y) {
    iVar13 = 0;
    y_clip = 0;
    vertex_pair_count = 0;
    perspective_coefficients = (float *)0x0;
    pgVar5 = vertex_list[vertex_advance];
    pgVar9 = *vertex_list;
    do {
      pgVar4 = pgVar5;
      uVar2 = (uint)pgVar4->y;
      if (uVar7 < min_y) {
        uVar8 = min_y - uVar7;
      }
      else {
        uVar8 = 0;
      }
      iVar6 = uVar2 - uVar7;
      if (uVar7 < min_y) {
        iVar6 = iVar6 - uVar8;
      }
      if (bottom_y < uVar2) {
        iVar6 = (bottom_y - uVar2) + iVar6;
      }
      if (0 < iVar6) {
        y_spans[vertex_pair_count] = (u8)iVar6;
        uVar2 = (uint)pgVar4->y;
        if (vertex_pair_count == 0) {
          y_clip = uVar8;
        }
        perspective_coefficients = (float *)((int)perspective_coefficients + iVar6);
        vertex_pairs[vertex_pair_count * 2] = pgVar9;
        vertex_pairs[vertex_pair_count * 2 + 1] = pgVar4;
        vertex_pair_count = vertex_pair_count + 1;
      }
      iVar13 = iVar13 + vertex_advance * 4;
      pgVar5 = *(geometry_vertex_struct **)((int)vertex_list + iVar13 + vertex_advance * 4);
      uVar7 = uVar2;
      pgVar9 = pgVar4;
    } while (uVar2 < bottom_y);
    render_polygon_edge_perspective_coefficients
              (temp_data,vertex_pairs,y_spans,vertex_pair_count,y_clip);
    render_polygon_edge_perspective_steps(temp_data,temp_data,perspective_coefficients);
    render_polygon_edge_interpolate_w(vertex_pairs,buffer_data,temp_data,y_spans,vertex_pair_count);
    render_polygon_edge_interpolate_parameters
              (vertex_pairs,buffer_data,temp_data,y_spans,vertex_pair_count);
    if ((polygon_render_flags & 0x18) != 0) {
      puVar12 = (ushort *)(buffer_data + 0x580);
      if (vertex_pair_count != 0) {
        uVar8 = 0;
        pbVar10 = y_spans;
        ppgVar11 = vertex_pairs;
        do {
          pgVar5 = vertex_pairs[uVar8 * 2];
          uVar14 = (uint)*pbVar10;
          uVar7 = (uint)pgVar5->x;
          uVar2 = ppgVar11[1]->x - uVar7;
          iVar13 = uVar7 * 0x40000;
          uVar7 = reciprocal_table[(uint)ppgVar11[1]->y - (uint)pgVar5->y];
          if (uVar2 == 0) {
            uVar15 = 0x8000;
LAB_080710a4:
            x_step = (uint)((ulonglong)uVar7 * (ulonglong)uVar2) >> 0xc |
                     (uVar7 * ((int)uVar2 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20)) * 0x100000;
          }
          else {
            if (-1 < (int)uVar2) {
              uVar15 = 0;
              goto LAB_080710a4;
            }
            uVar3 = (uint)((ulonglong)uVar7 * (ulonglong)uVar2);
            uVar15 = 0;
            x_step = uVar3 + 0xfff >> 0xc |
                     (uVar7 * ((int)uVar2 >> 0x1f) +
                      (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
                     (uint)(0xfffff000 < uVar3)) * 0x100000;
          }
          if (uVar8 == 0) {
            iVar13 = y_clip * x_step + iVar13;
          }
          uVar7 = uVar14;
          puVar1 = puVar12;
          if (uVar14 != 0) {
            do {
              uVar2 = (uint)iVar13 >> 0x12;
              uVar7 = uVar7 - 1;
              iVar13 = iVar13 + x_step;
              *puVar1 = uVar15 | (ushort)uVar2;
              puVar1 = puVar1 + 2;
            } while (uVar7 != 0);
            puVar12 = puVar12 + uVar14 * 2;
          }
          uVar8 = uVar8 + 1;
          ppgVar11 = ppgVar11 + 2;
          pbVar10 = pbVar10 + 1;
        } while (vertex_pair_count != uVar8);
      }
      goto LAB_08070f88;
    }
  }
  else {
    render_polygon_edge_perspective_coefficients(temp_data,vertex_pairs,y_spans,0,0);
    render_polygon_edge_perspective_steps(temp_data,temp_data,0);
    render_polygon_edge_interpolate_w(vertex_pairs,buffer_data,temp_data,y_spans,0);
    render_polygon_edge_interpolate_parameters(vertex_pairs,buffer_data,temp_data,y_spans,0);
    if ((polygon_render_flags & 0x18) != 0) goto LAB_08070f88;
    y_clip = 0;
    vertex_pair_count = 0;
  }
  render_polygon_edge_interpolate_xz(vertex_pairs,buffer_data,y_spans,vertex_pair_count,y_clip);
LAB_08070f88:
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


