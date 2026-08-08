/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygons_1x
 * Address  : 080727f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_bin_polygons_1x
               (geometry_struct *geometry,video_3d_polygon_bin_struct *polygon_bins,
               geometry_polygon_list_struct *polygon_list,geometry_vertex_struct *base_vertexes,
               u32 polygon_alpha)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  u32 *puVar4;
  u32 *puVar5;
  uint uVar6;
  ushort uVar7;
  geometry_vertex_struct *vertexes_00;
  uint uVar8;
  s32 current_y;
  geometry_vertex_struct *palette_offset;
  u32 new_texture_palette_offset;
  int iVar9;
  u32 uVar10;
  geometry_vertex_struct *vertexes;
  geometry_polygon_struct *polygon;
  uint uVar11;
  u32 bin_bitmap;
  uint uVar12;
  uint uVar13;
  u32 vertex_count;
  geometry_vertex_struct *pgVar14;
  u32 polygon_render_flags;
  u32 new_texture_image_param;
  u32 w_and;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint local_8c;
  uint local_88;
  uint local_80;
  u32 local_7c;
  texture_cache_element_struct *local_34;
  geometry_vertex_struct *local_30;
  geometry_vertex_struct *local_2c;
  
  if ((polygon_alpha != 0) && ((geometry->last_render_settings & 1) != 0)) {
    puVar4 = &polygon_list->offset;
    puVar5 = &polygon_bins->offset;
    local_7c = *puVar4;
    *puVar5 = 0;
    polygon_bins[1].offset = 0;
    polygon_bins[2].offset = 0;
    polygon_bins[3].offset = 0;
    polygon_bins[4].offset = 0;
    polygon_bins[5].offset = 0;
    polygon_bins[6].offset = 0;
    polygon_bins[7].offset = 0;
    polygon_bins[8].offset = 0;
    polygon_bins[9].offset = 0;
    polygon_bins[10].offset = 0;
    polygon_bins[0xb].offset = 0;
    if (local_7c != 0) {
      local_8c = 0;
      local_34 = (texture_cache_element_struct *)0x0;
      local_30 = (geometry_vertex_struct *)0xffffffff;
      local_2c = (geometry_vertex_struct *)0xffffffff;
      do {
        local_80 = (((geometry_struct *)polygon_list)->primitive_queue).input_x[2];
        uVar15 = *(ushort *)
                  ((int)(((geometry_struct *)polygon_list)->primitive_queue).input_x + 0x12);
        uVar13 = local_80 & 0xf;
        polygon = (geometry_polygon_struct *)(base_vertexes + uVar15);
        uVar1 = *(ushort *)((int)&polygon->flags + 2);
        if (uVar13 - 2 < 7) {
          uVar16 = (uint)*(ushort *)((int)&polygon->attribute + 2);
          uVar8 = (uint)*(ushort *)((int)&polygon[1].texture_image_param + 2);
          uVar2 = *(ushort *)((int)&polygon[1].attribute + 2);
          uVar12 = uVar16;
          if (uVar8 < uVar16) {
            uVar12 = uVar8;
          }
          local_88 = (uint)(uVar8 < uVar16);
          if (uVar8 <= uVar16) {
            uVar8 = uVar16;
          }
          uVar16._0_2_ = polygon->texture_palette_offset;
          uVar16._2_2_ = polygon->vertex_base;
          uVar17 = base_vertexes[uVar15].w & uVar16;
          uVar16 = base_vertexes[uVar15].w | uVar16;
          uVar15 = *(ushort *)&polygon->flags & *(ushort *)&polygon[1].attribute;
          uVar7 = *(ushort *)&polygon->flags | *(ushort *)&polygon[1].attribute;
          uVar3 = uVar1 & uVar2;
          pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
          uVar1 = uVar1 | uVar2;
          vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
          if (uVar13 != 2) {
            uVar11 = (uint)polygon[1].vertex_base;
            if (uVar11 < uVar12) {
              local_88 = 2;
              uVar12 = uVar11;
            }
            if (uVar8 < uVar11) {
              uVar8 = uVar11;
            }
            uVar2 = *(ushort *)((int)&polygon[2].texture_image_param + 2);
            uVar17 = uVar17 & (uint)polygon[1].texture_cache_element;
            uVar16 = uVar16 | (uint)polygon[1].texture_cache_element;
            uVar15 = uVar15 & *(ushort *)&polygon[2].texture_image_param;
            uVar7 = uVar7 | *(ushort *)&polygon[2].texture_image_param;
            uVar3 = uVar3 & uVar2;
            pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
            uVar1 = uVar1 | uVar2;
            vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
            if (uVar13 != 3) {
              uVar11 = (uint)*(ushort *)((int)&polygon[2].texture_cache_element + 2);
              if (uVar11 < uVar12) {
                local_88 = 3;
                uVar12 = uVar11;
              }
              if (uVar8 < uVar11) {
                uVar8 = uVar11;
              }
              uVar17 = uVar17 & polygon[2].flags;
              uVar16 = uVar16 | polygon[2].flags;
              uVar15 = uVar15 & polygon[2].texture_palette_offset;
              uVar7 = uVar7 | polygon[2].texture_palette_offset;
              uVar3 = uVar3 & polygon[2].vertex_base;
              pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
              uVar1 = polygon[2].vertex_base | uVar1;
              vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
              if (uVar13 != 4) {
                uVar11 = (uint)*(ushort *)((int)&polygon[3].flags + 2);
                if (uVar11 < uVar12) {
                  local_88 = 4;
                  uVar12 = uVar11;
                }
                if (uVar8 < uVar11) {
                  uVar8 = uVar11;
                }
                uVar2 = *(ushort *)((int)&polygon[3].texture_cache_element + 2);
                uVar17 = uVar17 & polygon[3].attribute;
                uVar16 = uVar16 | polygon[3].attribute;
                uVar15 = uVar15 & *(ushort *)&polygon[3].texture_cache_element;
                uVar7 = uVar7 | *(ushort *)&polygon[3].texture_cache_element;
                uVar3 = uVar3 & uVar2;
                pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
                uVar1 = uVar1 | uVar2;
                vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
                if (uVar13 != 5) {
                  uVar11 = (uint)*(ushort *)((int)&polygon[4].attribute + 2);
                  if (uVar11 < uVar12) {
                    local_88 = 5;
                    uVar12 = uVar11;
                  }
                  if (uVar8 < uVar11) {
                    uVar8 = uVar11;
                  }
                  uVar2 = *(ushort *)((int)&polygon[4].flags + 2);
                  uVar17 = uVar17 & polygon[4].texture_image_param;
                  uVar16 = uVar16 | polygon[4].texture_image_param;
                  uVar15 = uVar15 & *(ushort *)&polygon[4].flags;
                  uVar7 = *(ushort *)&polygon[4].flags | uVar7;
                  uVar3 = uVar3 & uVar2;
                  pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
                  uVar1 = uVar1 | uVar2;
                  vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
                  if (uVar13 != 6) {
                    uVar11 = (uint)*(ushort *)((int)&polygon[5].texture_image_param + 2);
                    if (uVar11 < uVar12) {
                      local_88 = 6;
                      uVar12 = uVar11;
                    }
                    uVar6._0_2_ = polygon[4].texture_palette_offset;
                    uVar6._2_2_ = polygon[4].vertex_base;
                    if (uVar8 < uVar11) {
                      uVar8 = uVar11;
                    }
                    uVar2 = *(ushort *)((int)&polygon[5].attribute + 2);
                    uVar17 = uVar17 & uVar6;
                    uVar16 = uVar16 | uVar6;
                    uVar3 = uVar3 & uVar2;
                    pgVar14 = (geometry_vertex_struct *)(uint)uVar3;
                    uVar1 = uVar1 | uVar2;
                    vertexes_00 = (geometry_vertex_struct *)(uint)uVar1;
                    uVar15 = uVar15 & *(ushort *)&polygon[5].attribute;
                    uVar7 = uVar7 | *(ushort *)&polygon[5].attribute;
                    if (uVar13 == 8) {
                      uVar11 = (uint)polygon[5].vertex_base;
                      if (uVar11 < uVar12) {
                        local_88 = 7;
                        uVar12 = uVar11;
                      }
                      if (uVar8 < uVar11) {
                        uVar8 = uVar11;
                      }
                      uVar2 = *(ushort *)((int)&polygon[6].texture_image_param + 2);
                      uVar17 = uVar17 & (uint)polygon[5].texture_cache_element;
                      uVar16 = uVar16 | (uint)polygon[5].texture_cache_element;
                      uVar15 = uVar15 & *(ushort *)&polygon[6].texture_image_param;
                      uVar7 = uVar7 | *(ushort *)&polygon[6].texture_image_param;
                      pgVar14 = (geometry_vertex_struct *)(uint)(uVar3 & uVar2);
                      vertexes_00 = (geometry_vertex_struct *)(uint)(uVar1 | uVar2);
                    }
                  }
                }
              }
            }
          }
          if (uVar12 != uVar8) {
            if (0xbf < uVar8) {
              uVar8 = 0xc0;
            }
            polygon_render_flags = polygon_alpha;
            if (pgVar14 == vertexes_00) {
              polygon_render_flags = polygon_alpha | 4;
            }
            if ((geometry->last_render_settings & 2) == 0) {
              if (uVar15 == uVar7) {
                polygon_render_flags = polygon_render_flags | 0x10;
              }
              if (uVar17 == uVar16) {
                polygon_render_flags = polygon_render_flags | 0x20;
              }
            }
            else {
              if (uVar17 == uVar16) {
                polygon_render_flags = polygon_render_flags | 0x30;
              }
              polygon_render_flags = polygon_render_flags | 8;
            }
            pgVar14 = (geometry_vertex_struct *)
                      (((geometry_struct *)polygon_list)->primitive_queue).input_x[0];
            if ((((uint)pgVar14 & 0x1c000000) != 0) &&
               ((uint)((((geometry_struct *)polygon_list)->primitive_queue).input_x[1] << 0x1a) >>
                0x1e != 3)) {
              palette_offset =
                   (geometry_vertex_struct *)
                   (uint)*(ushort *)
                          ((((geometry_struct *)polygon_list)->primitive_queue).input_x + 4);
              polygon_render_flags = polygon_render_flags | 2;
              vertexes_00 = local_2c;
              if (palette_offset != local_30 || pgVar14 != local_2c) {
                vertexes_00 = palette_offset;
                local_34 = texture_cache_lookup
                                     (geometry->texture_cache,(u32)pgVar14,(u32)palette_offset);
                local_80 = (((geometry_struct *)polygon_list)->primitive_queue).input_x[2];
                local_30 = palette_offset;
                local_2c = pgVar14;
              }
              (((geometry_struct *)polygon_list)->primitive_queue).input_x[3] = (s32)local_34;
            }
            uVar16 = local_80 | uVar8 << 0x17 | polygon_render_flags << 8;
            (((geometry_struct *)polygon_list)->primitive_queue).input_x[2] = uVar16;
            if (uVar13 == 4) {
              if ((local_80 & 0x40) == 0) {
                local_88 = local_88 << 0x10;
                uVar16 = uVar16 | 0x200000;
              }
              else {
                if (local_88 == 2) {
                  if (*(ushort *)((int)&polygon[2].texture_cache_element + 2) == uVar12) {
                    local_88 = 0x30000;
                  }
                  else {
                    local_88 = 0x20000;
                  }
                }
                else {
                  local_88 = local_88 << 0x10;
                }
                uVar16 = uVar16 | 0x480000;
              }
              (((geometry_struct *)polygon_list)->primitive_queue).input_x[2] = local_88 | uVar16;
              render_sprite_check((geometry_struct *)polygon_list,polygon,vertexes_00);
            }
            else {
              (((geometry_struct *)polygon_list)->primitive_queue).input_x[2] =
                   local_88 << 0x10 | uVar13 << 0x13 | uVar16;
            }
            iVar9 = uVar8 - 1;
            if (iVar9 < 0) {
              iVar9 = uVar8 + 0xe;
            }
            uVar13 = 0xfff << ((int)uVar12 >> 4 & 0xffU) & 0xfffU >> (0xbU - (iVar9 >> 4) & 0xff);
            if ((uVar13 & 1) != 0) {
              uVar10 = *puVar5;
              polygon_bins->indexes[uVar10] = (u16)local_8c;
              *puVar5 = uVar10 + 1;
            }
            if ((uVar13 & 2) != 0) {
              uVar10 = polygon_bins[1].offset;
              *(u16 *)((int)puVar5 + uVar10 * 2 + 4) = (u16)local_8c;
              polygon_bins[1].offset = uVar10 + 1;
            }
            if ((uVar13 & 4) != 0) {
              uVar10 = polygon_bins[2].offset;
              polygon_bins[2].indexes[uVar10] = (u16)local_8c;
              polygon_bins[2].offset = uVar10 + 1;
            }
            if ((uVar13 & 8) != 0) {
              uVar10 = polygon_bins[3].offset;
              polygon_bins[3].indexes[uVar10] = (u16)local_8c;
              polygon_bins[3].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x10) != 0) {
              uVar10 = polygon_bins[4].offset;
              polygon_bins[4].indexes[uVar10] = (u16)local_8c;
              polygon_bins[4].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar10 = polygon_bins[5].offset;
              polygon_bins[5].indexes[uVar10] = (u16)local_8c;
              polygon_bins[5].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar10 = polygon_bins[6].offset;
              polygon_bins[6].indexes[uVar10] = (u16)local_8c;
              polygon_bins[6].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x80) != 0) {
              uVar10 = polygon_bins[7].offset;
              polygon_bins[7].indexes[uVar10] = (u16)local_8c;
              polygon_bins[7].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x100) != 0) {
              uVar10 = polygon_bins[8].offset;
              polygon_bins[8].indexes[uVar10] = (u16)local_8c;
              polygon_bins[8].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x200) != 0) {
              uVar10 = polygon_bins[9].offset;
              polygon_bins[9].indexes[uVar10] = (u16)local_8c;
              polygon_bins[9].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x400) != 0) {
              uVar10 = polygon_bins[10].offset;
              polygon_bins[10].indexes[uVar10] = (u16)local_8c;
              polygon_bins[10].offset = uVar10 + 1;
            }
            if ((uVar13 & 0x800) == 0) {
              local_7c = *puVar4;
            }
            else {
              local_7c = *puVar4;
              uVar10 = polygon_bins[0xb].offset;
              polygon_bins[0xb].indexes[uVar10] = (u16)local_8c;
              polygon_bins[0xb].offset = uVar10 + 1;
            }
          }
        }
        polygon_list = (geometry_polygon_list_struct *)
                       ((((geometry_struct *)polygon_list)->primitive_queue).input_x + 5);
        local_8c = local_8c + 1;
      } while (local_8c < local_7c);
    }
    return;
  }
  video_3d_bin_polygons_y_sort_1x(geometry,polygon_bins,polygon_list,base_vertexes,polygon_alpha);
  return;
}


