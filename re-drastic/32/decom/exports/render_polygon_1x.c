/*
 * Ghidra decompilation
 *
 * Function : render_polygon_1x
 * Address  : 080718a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_1x(video_3d_render_target_struct *render_target,geometry_polygon_struct *polygon
                      ,geometry_vertex_struct *base_vertexes,u32 min_y,u32 max_y)

{
  bool bVar1;
  int v_00;
  short sVar2;
  int iVar3;
  ushort uVar4;
  u32 xb_a_masked;
  uint uVar5;
  u32 uVar6;
  ushort uVar7;
  u32 xb_b_masked;
  geometry_vertex_struct *top_vertex;
  u32 depth_value;
  u32 y_clip;
  geometry_polygon_struct *polygon_1;
  u32 polygon_render_flags;
  uint uVar8;
  u32 vertex_order;
  s32 *psVar9;
  u32 *puVar10;
  geometry_vertex_struct *right_vertex;
  geometry_vertex_struct *pgVar11;
  u32 pixels;
  u32 lines;
  uint uVar12;
  u32 vertex_count;
  u32 height_1;
  u32 top_y;
  u32 top_y_1;
  int u;
  u32 uVar13;
  s32 height;
  u32 buffered_height;
  s32 v;
  video_struct *pvVar14;
  u32 uVar15;
  u32 height_00;
  u32 bottom_y;
  u32 buffered_bottom_y;
  uint uVar16;
  geometry_struct *geometry;
  u8 *aligned_storage;
  u8 *edge_buffer_extended;
  uint uVar17;
  s32 *buffer_data_00;
  u8 *buffer_data;
  s32 in_stack_ffff8bd0;
  u32 in_stack_ffff8bd4;
  u32 buffered_min_y;
  u32 local_73f8;
  int local_73f4;
  geometry_vertex_struct **local_73ec;
  geometry_struct *local_73e4;
  geometry_vertex_struct *bottom_vertex;
  geometry_vertex_struct *local_73d8;
  geometry_vertex_struct *local_73d4;
  geometry_vertex_struct *local_73d0;
  geometry_vertex_struct *local_73cc;
  geometry_vertex_struct *local_73c8;
  geometry_vertex_struct *local_73c4;
  geometry_vertex_struct *local_73c0;
  geometry_vertex_struct *local_73bc;
  u64 _aligned_storage [3697];
  
  iVar3 = __stack_chk_guard;
  uVar17 = polygon->flags;
  geometry = (geometry_struct *)_aligned_storage;
  uVar5 = (uint)polygon->vertex_base;
  polygon_1 = (geometry_polygon_struct *)(uVar17 >> 8 & 0xff);
  uVar12 = uVar17 & 0xf;
  if (((uint)geometry & 8) != 0) {
    geometry = (geometry_struct *)(_aligned_storage + 1);
  }
  uVar16 = uVar17 >> 0x17;
  uVar8 = vertex_orders[(uVar17 << 9) >> 0x19];
  buffer_data_00 = (geometry->primitive_queue).transformed_coordinates + 0x80;
  pvVar14 = render_target->video;
  if (uVar12 != 0) {
    bottom_vertex = base_vertexes + (uVar8 & 0xf) + uVar5;
    if (uVar12 != 1) {
      local_73d8 = base_vertexes + (uVar8 >> 4 & 0xf) + uVar5;
      if (uVar12 != 2) {
        local_73d4 = base_vertexes + (uVar8 >> 8 & 0xf) + uVar5;
        if (uVar12 != 3) {
          local_73d0 = base_vertexes + (uVar8 >> 0xc & 0xf) + uVar5;
          if (uVar12 != 4) {
            local_73cc = base_vertexes + (uVar8 >> 0x10 & 0xf) + uVar5;
            if (uVar12 != 5) {
              local_73c8 = base_vertexes + (uVar8 >> 0x14 & 0xf) + uVar5;
              if (uVar12 != 6) {
                local_73c4 = base_vertexes + (uVar8 >> 0x18 & 0xf) + uVar5;
                if ((uVar12 != 7) &&
                   (local_73c0 = base_vertexes + (uVar8 >> 0x1c) + uVar5, uVar12 != 8)) {
                  local_73bc = base_vertexes + uVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  (&bottom_vertex)[uVar12] = bottom_vertex;
  uVar5 = (uint)bottom_vertex->y;
  if ((uVar17 >> 8 & 0x40) == 0) {
    uVar13 = uVar16 - uVar5;
    if (uVar5 < min_y) {
      local_73f4 = min_y - uVar5;
      uVar13 = uVar13 - local_73f4;
      local_73f8 = 3;
    }
    else {
      local_73f8 = 2;
      local_73f4 = 0;
    }
    uVar17 = (uint)(uVar5 < min_y);
    bVar1 = max_y < uVar16;
    uVar15 = uVar17;
    if (bVar1) {
      uVar13 = (max_y - uVar16) + uVar13;
      uVar16 = max_y;
      uVar15 = local_73f8;
    }
    local_73f8 = uVar15;
    if (0 < (int)uVar13) {
      if (((pvVar14->video_3d).display_3d_control & 0x20) == 0) {
        psVar9 = (geometry->primitive_queue).transformed_coordinates + 0x28;
        render_polygon_interpolate_edges
                  (geometry,(u8 *)psVar9,(u8 *)&bottom_vertex,(geometry_vertex_struct **)min_y,
                   uVar16,(u32)polygon_1,in_stack_ffff8bd0,in_stack_ffff8bd4);
        render_polygon_interpolate_edges
                  ((geometry_struct *)((geometry->primitive_queue).input_x + 0x2c),(u8 *)psVar9,
                   (u8 *)(&bottom_vertex + uVar12),(geometry_vertex_struct **)min_y,uVar16,
                   (u32)polygon_1,in_stack_ffff8bd0,in_stack_ffff8bd4);
        uVar15 = 0;
        puVar10 = (geometry->primitive_queue).input_uv + 0x1a;
        do {
          uVar15 = uVar15 + 1;
          *(ushort *)(puVar10 + -1) = (ushort)(((uint)*(ushort *)(puVar10 + -1) << 0x11) >> 0x11);
          *(ushort *)(puVar10 + 0x2b) =
               (ushort)(((uint)*(ushort *)(puVar10 + 0x2b) << 0x11) >> 0x11);
          puVar10 = puVar10 + 1;
        } while (uVar13 != uVar15);
        render_polygon_setup_spans_1x(geometry,uVar13);
        render_polygon_setup_1x
                  (render_target,(u8 *)geometry,polygon,(u8 *)buffer_data_00,
                   (uVar5 - min_y) + local_73f4,uVar13,(u32)polygon_1,bottom_vertex);
      }
      else {
        uVar15 = uVar13;
        local_73ec = (geometry_vertex_struct **)min_y;
        local_73e4 = geometry;
        if (uVar17 != 0) {
          local_73ec = (geometry_vertex_struct **)(min_y - 1);
          uVar15 = uVar13 + 1;
          local_73e4 = (geometry_struct *)((geometry->primitive_queue).input_x + 1);
        }
        if (bVar1) {
          uVar16 = uVar16 + 1;
          uVar15 = uVar15 + 1;
        }
        psVar9 = (geometry->primitive_queue).transformed_coordinates + 0x28;
        render_polygon_interpolate_edges
                  (geometry,(u8 *)psVar9,(u8 *)&bottom_vertex,local_73ec,uVar16,(u32)polygon_1,
                   in_stack_ffff8bd0,in_stack_ffff8bd4);
        render_polygon_interpolate_edges
                  ((geometry_struct *)((geometry->primitive_queue).input_x + 0x2c),(u8 *)psVar9,
                   (u8 *)(&bottom_vertex + uVar12),local_73ec,uVar16,(u32)polygon_1,
                   in_stack_ffff8bd0,in_stack_ffff8bd4);
        uVar6 = 0;
        puVar10 = (geometry->primitive_queue).input_uv + 0x1a;
        do {
          uVar4 = *(ushort *)(puVar10 + -1) & 0x7fff;
          uVar7 = *(ushort *)(puVar10 + 0x2b) & 0x7fff;
          if (uVar7 < uVar4) {
            if ((*(ushort *)(puVar10 + -1) & 0x8100) == 0) {
              uVar4 = uVar4 + 1;
            }
          }
          else if ((*(ushort *)(puVar10 + 0x2b) & 0x8100) == 0) {
            uVar7 = uVar7 + 1;
          }
          uVar6 = uVar6 + 1;
          *(ushort *)(puVar10 + -1) = uVar4;
          *(ushort *)(puVar10 + 0x2b) = uVar7;
          puVar10 = puVar10 + 1;
        } while (uVar6 != uVar15);
        render_polygon_setup_spans_1x(geometry);
        render_polygon_setup_edge_markers((u8 *)local_73e4,uVar13,local_73f8);
        render_polygon_setup_1x
                  (render_target,(u8 *)local_73e4,polygon,(u8 *)buffer_data_00,
                   (uVar5 - min_y) + local_73f4,uVar13,(u32)polygon_1,bottom_vertex);
      }
    }
  }
  else {
    uVar12 = (uint)local_73d8->y;
    pgVar11 = bottom_vertex;
    if (uVar5 == uVar12) {
      uVar17 = (uint)local_73d8->x;
      uVar16 = (uint)bottom_vertex->x;
      if (uVar16 < uVar17) {
        uVar12 = (uint)local_73d0->y;
        uVar8 = uVar17;
        uVar17 = uVar16;
      }
      else {
        uVar12 = (uint)local_73d4->y;
        pgVar11 = local_73d8;
        uVar8 = uVar16;
      }
    }
    else {
      uVar17 = (uint)bottom_vertex->x;
      uVar16 = (uint)local_73d0->x;
      uVar8 = uVar16;
      if (uVar16 <= uVar17) {
        uVar12 = (uint)local_73d4->y;
        pgVar11 = local_73d0;
        uVar8 = uVar17;
        uVar17 = uVar16;
      }
    }
    uVar16 = uVar12 - uVar5;
    uVar13 = (int)pgVar11->v >> 4;
    if ((render_target->geometry->last_render_settings & 2) == 0) {
      uVar15 = (uint)pgVar11->z << 9;
    }
    else {
      uVar15 = pgVar11->w;
    }
    if (uVar5 < min_y) {
      uVar13 = uVar13 + (min_y - uVar5);
      uVar16 = uVar16 - (min_y - uVar5);
      uVar5 = min_y;
    }
    if (max_y < uVar12) {
      uVar16 = uVar16 + (max_y - uVar12);
    }
    if (uVar16 != 0) {
      height_00 = uVar8 - uVar17;
      sVar2 = pgVar11->u;
      uVar6 = texture_cache_build_pixel((uint)pgVar11->color);
      v_00 = (int)sVar2 >> 4;
      if (uVar16 * height_00 < 0x201) {
        render_sprite_block_1x
                  (render_target,(geometry_polygon_struct *)&polygon->attribute,
                   (u8 *)polygon->texture_cache_element,(u32)buffer_data_00,uVar17,uVar5 - min_y,
                   v_00,uVar13,height_00,uVar16,uVar15,uVar6,polygon_1);
      }
      else {
        lines = __aeabi_uidiv(height_00 + 0x1ff,height_00);
        u = uVar5 - min_y;
        do {
          if (uVar16 <= lines) {
            lines = uVar16;
          }
          render_sprite_block_1x
                    (render_target,(geometry_polygon_struct *)&polygon->attribute,
                     (u8 *)polygon->texture_cache_element,(u32)buffer_data_00,uVar17,u,v_00,uVar13,
                     height_00,lines,uVar15,uVar6,polygon_1);
          uVar16 = uVar16 - lines;
          u = u + lines;
          uVar13 = uVar13 + lines;
        } while (uVar16 != 0);
      }
    }
  }
  if (iVar3 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


