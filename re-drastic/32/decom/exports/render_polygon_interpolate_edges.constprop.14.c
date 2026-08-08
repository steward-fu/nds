/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_edges.constprop.14
 * Address  : 0807066c
 * Program  : drastic
 */


void render_polygon_interpolate_edges
               (geometry_struct *geometry,u8 *buffer_data,u8 *temp_data,
               geometry_vertex_struct **vertex_list,u32 min_y,u32 bottom_y,s32 vertex_advance,
               u32 polygon_render_flags)

{
  u32 *puVar1;
  uint uVar2;
  s32 x_step;
  geometry_vertex_struct **ppgVar3;
  int iVar4;
  s32 y_span;
  geometry_vertex_struct *vertex_b_1;
  geometry_vertex_struct **ppgVar5;
  geometry_vertex_struct *pgVar6;
  geometry_vertex_struct *vertex_a_1;
  u16 *interpolated_x;
  uint uVar7;
  u32 vertex_pair_count;
  uint uVar8;
  s32 dx;
  int iVar9;
  s16 *perspective_steps;
  u32 *puVar10;
  u32 y_delta_r;
  geometry_vertex_struct *vertex_a;
  u32 uVar11;
  u32 y_clip;
  byte *pbVar12;
  geometry_vertex_struct *vertex_b;
  geometry_vertex_struct *pgVar13;
  uint uVar14;
  s32 y_span_1;
  ushort uVar15;
  geometry_vertex_struct **ppgVar16;
  geometry_vertex_struct *vertex_pairs [32];
  u8 y_spans [16];
  int local_2c;
  
  ppgVar5 = (geometry_vertex_struct **)(temp_data + 4);
  local_2c = __stack_chk_guard;
  ppgVar3 = (geometry_vertex_struct **)(uint)(*(geometry_vertex_struct **)temp_data)->y;
  if (ppgVar3 < min_y) {
    y_clip = 0;
    iVar9 = 0;
    vertex_pair_count = 0;
    pgVar6 = *(geometry_vertex_struct **)temp_data;
    pgVar13 = *(geometry_vertex_struct **)(temp_data + 4);
    do {
      ppgVar16 = (geometry_vertex_struct **)(uint)pgVar13->y;
      if (ppgVar3 < vertex_list) {
        uVar11 = (int)vertex_list - (int)ppgVar3;
      }
      else {
        uVar11 = 0;
      }
      iVar4 = (int)ppgVar16 - (int)ppgVar3;
      if (ppgVar3 < vertex_list) {
        iVar4 = iVar4 - uVar11;
      }
      if (min_y < ppgVar16) {
        iVar4 = (min_y - (int)ppgVar16) + iVar4;
      }
      if (0 < iVar4) {
        y_spans[vertex_pair_count] = (u8)iVar4;
        ppgVar16 = (geometry_vertex_struct **)(uint)pgVar13->y;
        iVar9 = iVar9 + iVar4;
        if (vertex_pair_count == 0) {
          y_clip = uVar11;
        }
        vertex_pairs[vertex_pair_count * 2] = pgVar6;
        vertex_pairs[vertex_pair_count * 2 + 1] = pgVar13;
        vertex_pair_count = vertex_pair_count + 1;
      }
      ppgVar5 = ppgVar5 + 1;
      ppgVar3 = ppgVar16;
      pgVar6 = pgVar13;
      pgVar13 = *ppgVar5;
    } while (ppgVar16 < min_y);
    render_polygon_edge_perspective_coefficients
              (buffer_data,vertex_pairs,y_spans,vertex_pair_count,y_clip);
    render_polygon_edge_perspective_steps(buffer_data,buffer_data,iVar9);
    render_polygon_edge_interpolate_w(vertex_pairs,geometry,buffer_data,y_spans,vertex_pair_count);
    render_polygon_edge_interpolate_parameters
              (vertex_pairs,geometry,buffer_data,y_spans,vertex_pair_count);
    if ((bottom_y & 0x18) != 0) {
      puVar10 = (geometry->primitive_queue).input_uv + 0x19;
      if (vertex_pair_count != 0) {
        uVar11 = 0;
        ppgVar3 = vertex_pairs;
        pbVar12 = y_spans;
        do {
          pgVar6 = vertex_pairs[uVar11 * 2];
          uVar14 = (uint)*pbVar12;
          uVar7 = (uint)pgVar6->x;
          uVar8 = ppgVar3[1]->x - uVar7;
          iVar9 = uVar7 * 0x40000;
          uVar7 = reciprocal_table[(uint)ppgVar3[1]->y - (uint)pgVar6->y];
          if (uVar8 == 0) {
            uVar15 = 0x8000;
LAB_080708f0:
            x_step = (uint)((ulonglong)uVar7 * (ulonglong)uVar8) >> 0xc |
                     (uVar7 * ((int)uVar8 >> 0x1f) +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20)) * 0x100000;
          }
          else {
            if (-1 < (int)uVar8) {
              uVar15 = 0;
              goto LAB_080708f0;
            }
            uVar2 = (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
            uVar15 = 0;
            x_step = uVar2 + 0xfff >> 0xc |
                     (uVar7 * ((int)uVar8 >> 0x1f) +
                      (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20) +
                     (uint)(0xfffff000 < uVar2)) * 0x100000;
          }
          if (uVar11 == 0) {
            iVar9 = y_clip * x_step + iVar9;
          }
          uVar7 = uVar14;
          puVar1 = puVar10;
          if (uVar14 != 0) {
            do {
              uVar8 = (uint)iVar9 >> 0x12;
              uVar7 = uVar7 - 1;
              iVar9 = iVar9 + x_step;
              *(ushort *)puVar1 = uVar15 | (ushort)uVar8;
              puVar1 = puVar1 + 1;
            } while (uVar7 != 0);
            puVar10 = puVar10 + uVar14;
          }
          uVar11 = uVar11 + 1;
          ppgVar3 = ppgVar3 + 2;
          pbVar12 = pbVar12 + 1;
        } while (vertex_pair_count != uVar11);
      }
      goto LAB_080707cc;
    }
  }
  else {
    render_polygon_edge_perspective_coefficients(buffer_data,vertex_pairs,y_spans,0,0);
    render_polygon_edge_perspective_steps(buffer_data,buffer_data,0);
    render_polygon_edge_interpolate_w(vertex_pairs,geometry,buffer_data,y_spans,0);
    render_polygon_edge_interpolate_parameters(vertex_pairs,geometry,buffer_data,y_spans,0);
    if ((bottom_y & 0x18) != 0) goto LAB_080707cc;
    vertex_pair_count = 0;
    y_clip = 0;
  }
  render_polygon_edge_interpolate_xz(vertex_pairs,(u8 *)geometry,y_spans,vertex_pair_count,y_clip);
LAB_080707cc:
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


