/*
 * Ghidra decompilation
 *
 * Function : render_polygon_flush_4x
 * Address  : 08061f50
 * Program  : drastic
 */


/* DWARF original prototype: void render_polygon_flush_4x(video_3d_render_target_struct *
   render_target, u8 * edge_buffer_data, geometry_polygon_struct * polygon, u32 scanline, u32
   height, u8 * buffer_data, u32 pixels, u32 polygon_render_flags, geometry_vertex_struct *
   top_vertex, geometry_vertex_struct * top_vertex)
   Local variable reference_depth_value:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_1:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_2:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_3:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_4:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_5:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_6:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_7:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_8:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_9:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_10:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_11:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_12:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_13:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_14:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_15:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_16:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_17:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_18:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_19:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_20:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_21:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_22:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_23:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_24:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_25:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_26:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_27:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_28:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_29:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_30:u32[r2:4] conflicts with parameter, skipped.
   Local variable reference_depth_value_31:u32[r2:4] conflicts with parameter, skipped. */

void render_polygon_flush_4x
               (video_3d_render_target_struct *render_target,u8 *edge_buffer_data,
               geometry_polygon_struct *polygon,u32 scanline,u32 height,u8 *buffer_data,u32 pixels,
               u32 polygon_render_flags,geometry_vertex_struct *top_vertex,
               geometry_vertex_struct *top_vertex_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  video_struct *pvVar3;
  uint uVar4;
  uint uVar5;
  u8 *puVar6;
  u8 *reference_id;
  u32 polygon_id;
  u8 *puVar7;
  u8 *puVar8;
  u32 *puVar9;
  geometry_struct *geometry;
  video_3d_struct *video_3d_00;
  u32 *puVar10;
  u32 *color_buffer;
  int iVar11;
  u32 width_8;
  u32 width_30;
  u32 width_7;
  u32 width_25;
  u32 width_14;
  u32 width_9;
  u32 width_24;
  u32 width_3;
  u32 width_2;
  u32 width_20;
  u32 width_1;
  u32 width_29;
  u32 width_10;
  u32 width_22;
  u32 width_6;
  u32 width_31;
  u32 width_21;
  u32 width_26;
  u32 width_13;
  u32 width_28;
  u32 width_5;
  u32 width_11;
  u32 width_12;
  u32 width_18;
  u32 width_19;
  u32 width_4;
  u32 width_17;
  u32 width_15;
  u32 width_16;
  u32 width;
  u32 width_27;
  u32 *puVar12;
  u32 width_23;
  u8 uVar13;
  u8 *interpolated_rgb;
  u32 stencilling_mask_8;
  u32 stencilling_mask_30;
  u32 stencilling_mask_7;
  u32 stencilling_mask_25;
  u32 stencilling_mask_14;
  u32 stencilling_mask_9;
  u32 stencilling_mask_24;
  u32 stencilling_mask_3;
  u32 stencilling_mask_2;
  u32 stencilling_mask_20;
  u32 stencilling_mask_1;
  u32 stencilling_mask_29;
  u32 stencilling_mask_10;
  u32 stencilling_mask_22;
  u32 stencilling_mask_6;
  u32 stencilling_mask_31;
  u32 stencilling_mask_21;
  u32 stencilling_mask_26;
  u32 stencilling_mask_13;
  u32 stencilling_mask_28;
  u32 stencilling_mask_5;
  u32 stencilling_mask_11;
  u32 stencilling_mask_12;
  u32 stencilling_mask_18;
  u32 stencilling_mask_19;
  int iVar14;
  u32 *puVar15;
  u32 stencilling_mask_4;
  u32 stencilling_mask_17;
  u32 stencilling_mask_15;
  u32 stencilling_mask_16;
  u32 stencilling_mask;
  u32 stencilling_mask_27;
  u32 stencilling_mask_23;
  u32 *puVar16;
  undefined (*pauVar17) [16];
  uint uVar18;
  u32 pixel_block_size_2b;
  u32 stencilling_8;
  u32 x_8;
  u32 stencilling_30;
  u32 x_30;
  u32 stencilling_7;
  u32 x_7;
  u32 stencilling_25;
  u32 x_25;
  u32 stencilling_14;
  u32 x_14;
  u32 stencilling_9;
  u32 x_9;
  u32 stencilling_24;
  u32 x_24;
  u32 stencilling_3;
  u32 x_3;
  u32 stencilling_2;
  u32 x_2;
  u32 stencilling_20;
  u32 x_20;
  u32 stencilling_1;
  u32 x_1;
  u32 stencilling_29;
  u32 x_29;
  u32 stencilling_10;
  u32 x_10;
  u32 stencilling_22;
  u32 x_22;
  u32 stencilling_6;
  u32 x_6;
  u32 stencilling_31;
  u32 x_31;
  u32 stencilling_21;
  u32 x_21;
  u32 stencilling_26;
  u32 x_26;
  u32 stencilling_13;
  u32 x_13;
  u32 stencilling_28;
  u32 x_28;
  u32 stencilling_5;
  u32 x_5;
  u32 stencilling_11;
  u32 x_11;
  u32 stencilling_12;
  u32 x_12;
  u32 stencilling_18;
  u32 x_18;
  u32 stencilling_19;
  u32 x_19;
  u32 stencilling_4;
  u32 x_4;
  u32 stencilling_17;
  u32 x_17;
  u32 stencilling_15;
  u32 x_15;
  u32 stencilling_16;
  u32 x_16;
  u32 stencilling;
  u32 x;
  u32 stencilling_27;
  u32 x_27;
  u32 stencilling_23;
  u32 x_23;
  u32 depth_value;
  texture_cache_element_struct *texture_cache_element_1;
  texture_cache_element_struct *texture_cache_element_2;
  texture_cache_element_struct *texture_cache_element_3;
  u32 *colors_4;
  u32 *texture_addresses_4;
  texture_cache_element_struct *texture_cache_element_5;
  texture_cache_element_struct *texture_cache_element_6;
  u32 *colors_7;
  u32 *texture_addresses_7;
  texture_cache_element_struct *texture_cache_element_8;
  texture_cache_element_struct *texture_cache_element_9;
  u32 *colors_10;
  u32 *texture_addresses_10;
  u32 *colors_11;
  u32 *texture_addresses_11;
  u32 *colors_12;
  u32 *texture_addresses_12;
  u32 *colors_13;
  u32 *texture_addresses_13;
  u32 *colors_14;
  u32 *texture_addresses_14;
  texture_cache_element_struct *ptVar19;
  texture_cache_element_struct *texture_cache_element_15;
  uint uVar20;
  u32 *colors;
  u32 *texture_addresses;
  u16 *dx_8;
  ushort *puVar21;
  u16 *dx_30;
  u16 *dx_7;
  u16 *dx_25;
  u16 *dx_14;
  u16 *dx_9;
  u16 *dx_24;
  u16 *dx_3;
  u16 *dx_2;
  u16 *dx_20;
  u16 *dx_1;
  u16 *dx_29;
  u16 *dx_10;
  u16 *dx_22;
  u16 *dx_6;
  u16 *dx_21;
  u16 *dx_26;
  u16 *dx_13;
  u16 *dx_28;
  u16 *dx_5;
  u16 *dx_11;
  u16 *dx_12;
  u16 *dx_18;
  u32 uVar22;
  u16 *dx_19;
  u16 *dx_4;
  u16 *dx_17;
  u16 *dx_15;
  u16 *dx_16;
  u16 *dx;
  u16 *dx_27;
  u16 *dx_23;
  u32 *colors_1;
  u32 *texture_addresses_1;
  u32 *colors_2;
  u32 *texture_addresses_2;
  u32 *colors_3;
  u32 *texture_addresses_3;
  texture_cache_element_struct *texture_cache_element_4;
  u32 *colors_5;
  u32 *texture_addresses_5;
  u32 *colors_6;
  u32 *texture_addresses_6;
  texture_cache_element_struct *texture_cache_element_7;
  u32 *colors_8;
  u32 *texture_addresses_8;
  u32 *colors_9;
  u32 *texture_addresses_9;
  texture_cache_element_struct *texture_cache_element_10;
  texture_cache_element_struct *texture_cache_element_11;
  texture_cache_element_struct *texture_cache_element_12;
  texture_cache_element_struct *texture_cache_element_13;
  texture_cache_element_struct *texture_cache_element_14;
  u32 *colors_15;
  u32 *texture_addresses_15;
  texture_cache_element_struct *texture_cache_element;
  u16 *lx_8;
  u16 *lx_30;
  u16 *lx_7;
  u16 *lx_25;
  u16 *lx_14;
  u16 *lx_9;
  u16 *lx_24;
  u16 *lx_3;
  u16 *lx_2;
  u16 *lx_20;
  u16 *lx_1;
  u16 *lx_29;
  u16 *lx_10;
  u16 *lx_22;
  u16 *lx_6;
  u16 *lx_21;
  u16 *lx_26;
  u16 *lx_13;
  u16 *lx_28;
  u16 *lx_5;
  u16 *lx_11;
  u16 *lx_12;
  u16 *lx_18;
  u32 *puVar23;
  u16 *lx_19;
  u16 *lx_4;
  u16 *lx_17;
  u16 *lx_15;
  u16 *lx_16;
  u16 *lx;
  u16 *lx_27;
  u16 *lx_23;
  s16 *perspective_steps;
  float *perspective_ns;
  u8 *alpha_id;
  u8 *pixel_alpha_1;
  u8 *pixel_alpha_2;
  u8 *alpha_id_3;
  u8 *pixel_alpha_4;
  u8 *pixel_alpha_6;
  u8 *pixel_alpha_7;
  u8 *pixel_alpha_9;
  u8 *pixel_alpha_10;
  u8 *alpha_id_13;
  u8 *alpha_id_14;
  u8 *pixel_alpha_15;
  u32 *puVar24;
  u8 *puVar25;
  uint uVar26;
  u32 *puVar27;
  u32 *reference_depth;
  float *perspective_ds;
  u32 *depth_buffer;
  int iVar28;
  uint uVar29;
  u32 *scanline_depth_8;
  u32 *scanline_depth_30;
  u32 *scanline_depth_7;
  u32 *scanline_depth_25;
  u32 *scanline_depth_14;
  u32 *scanline_depth_9;
  u32 *scanline_depth_24;
  u32 *scanline_depth_3;
  u32 *scanline_depth_2;
  u32 *scanline_depth_20;
  u32 *scanline_depth_1;
  u32 *scanline_depth_29;
  u32 *scanline_depth_10;
  u32 *scanline_depth_22;
  u32 *scanline_depth_6;
  u32 *scanline_depth_31;
  u32 *scanline_depth_21;
  u32 *scanline_depth_26;
  u32 *scanline_depth_13;
  u32 *scanline_depth_28;
  u32 *scanline_depth_5;
  u32 *scanline_depth_11;
  u32 *scanline_depth_12;
  u32 *scanline_depth_18;
  u32 *scanline_depth_19;
  uint uVar30;
  u32 *scanline_depth_4;
  u32 *scanline_depth_17;
  u32 *scanline_depth_15;
  u32 *scanline_depth_16;
  u32 *scanline_depth;
  u32 *scanline_depth_27;
  u32 *scanline_depth_23;
  u32 *depth_values;
  u32 *local_70;
  u32 *reference_colors;
  u8 *pixel_alpha_14;
  u32 polygon_alpha;
  u8 *alpha_id_12;
  video_3d_struct *video_3d;
  u8 *alpha_id_15;
  u8 *alpha_id_10;
  u32 occlusion_pass;
  int local_2c;
  
  pvVar3 = render_target->video;
  geometry = render_target->geometry;
  uVar18 = pixels * 2 + 0x1d & 0xfffffff0;
  local_2c = __stack_chk_guard;
  video_3d_00 = &pvVar3->video_3d;
  if ((polygon_render_flags & 0x20) == 0) {
    iVar14 = uVar18 * 8;
    render_polygon_setup_perspective_coefficients
              (edge_buffer_data,buffer_data,buffer_data + iVar14,height);
    render_polygon_setup_perspective_steps(buffer_data,buffer_data,buffer_data + iVar14,pixels);
  }
  else {
    iVar14 = uVar18 << 3;
    render_polygon_setup_perspective_steps_w_constant(buffer_data,edge_buffer_data,height);
  }
  iVar11 = uVar18 * 2;
  puVar27 = (u32 *)(buffer_data + uVar18);
  interpolated_rgb = (u8 *)((int)puVar27 + iVar11);
  puVar10 = (u32 *)(interpolated_rgb + iVar14 + uVar18);
  iVar28 = (int)puVar10 + iVar11;
  puVar25 = (u8 *)(iVar28 + iVar11);
  iVar14 = uVar18 * 3;
  puVar6 = puVar25 + uVar18;
  puVar9 = render_target->depth_buffer_tile + scanline * 0x200;
  puVar15 = render_target->color_buffer_tile + scanline * 0x200;
  reference_id = (u8 *)(polygon->attribute << 2);
  reference_id = (u8 *)((uint)reference_id >> 0x1a);
  polygon_id = polygon->attribute << 0xb;
  polygon_id = polygon_id >> 0x1b;
  switch(polygon_render_flags & 0x1f) {
  case 1:
    break;
  case 2:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_080696b4;
LAB_080696ec:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_080696b4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_080696ec;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_080696b4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08069760:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_080698a4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806980c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08069760;
              }
LAB_080698a4:
              iVar14 = uVar29 << 2;
            }
LAB_0806980c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar27 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 3:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806d354;
LAB_0806d38c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806d354:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806d38c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806d354;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806d400:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_0806d544;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806d4ac;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806d400;
              }
LAB_0806d544:
              iVar14 = uVar29 << 2;
            }
LAB_0806d4ac:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar24 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 4:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08067a34;
LAB_08067a6c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08067a34:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08067a6c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08067a34;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08067ae0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_08067c24;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_08067b8c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08067ae0;
              }
LAB_08067c24:
              iVar14 = uVar29 << 2;
            }
LAB_08067b8c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 5:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806b338;
LAB_0806b370:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806b338:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806b370;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806b338;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 != 0) {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar4 == uVar29) {
                  iVar14 = uVar4 << 2;
                  goto LAB_0806b494;
                }
              }
              uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
              if ((uVar29 - 1) - uVar4 < 3) {
LAB_0806b454:
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806b494;
                  }
                }
              }
              else {
                uVar26 = 0;
                pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                puVar10 = puVar9 + uVar20 + uVar4;
                do {
                  auVar1 = *pauVar17;
                  uVar26 = uVar26 + 1;
                  pauVar17 = pauVar17 + 1;
                  *(longlong *)puVar10 = auVar1._0_8_;
                  *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                  puVar10 = puVar10 + 4;
                } while (uVar26 < uVar30);
                uVar5 = uVar5 + uVar30 * 4;
                puVar15 = puVar15 + uVar30 * 4;
                if (uVar30 * 4 - (uVar29 - uVar4) != 0) goto LAB_0806b454;
              }
              iVar14 = uVar29 << 2;
            }
LAB_0806b494:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend();
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 6:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806ba5c;
LAB_0806ba94:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806ba5c:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806ba94;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806ba5c;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar27 + uVar29 != puVar15);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 != 0) {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar4 == uVar29) {
                  iVar14 = uVar4 << 2;
                  goto LAB_0806bbb8;
                }
              }
              uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
              if ((uVar29 - 1) - uVar4 < 3) {
LAB_0806bb78:
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806bbb8;
                  }
                }
              }
              else {
                uVar26 = 0;
                pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                puVar10 = puVar9 + uVar20 + uVar4;
                do {
                  auVar1 = *pauVar17;
                  uVar26 = uVar26 + 1;
                  pauVar17 = pauVar17 + 1;
                  *(longlong *)puVar10 = auVar1._0_8_;
                  *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                  puVar10 = puVar10 + 4;
                } while (uVar26 < uVar30);
                uVar5 = uVar5 + uVar30 * 4;
                puVar15 = puVar15 + uVar30 * 4;
                if (uVar30 * 4 - (uVar29 - uVar4) != 0) goto LAB_0806bb78;
              }
              iVar14 = uVar29 << 2;
            }
LAB_0806bbb8:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar25 + pixels != puVar8);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 7:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806da74;
LAB_0806daac:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806da74:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806daac;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806da74;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806db20:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_0806dc64;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806dbcc;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806db20;
              }
LAB_0806dc64:
              iVar14 = uVar29 << 2;
            }
LAB_0806dbcc:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 8:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08068874;
LAB_080688ac:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08068874:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_080688ac;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08068874;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08068920:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_08068a64;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_080689cc;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08068920;
              }
LAB_08068a64:
              iVar14 = uVar29 << 2;
            }
LAB_080689cc:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 9:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_080676a0;
LAB_080676d8:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_080676a0:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_080676d8;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_080676a0;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 != 0) {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar4 == uVar29) {
                  iVar14 = uVar4 << 2;
                  goto LAB_080677fc;
                }
              }
              uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
              if ((uVar29 - 1) - uVar4 < 3) {
LAB_080677bc:
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_080677fc;
                  }
                }
              }
              else {
                uVar26 = 0;
                pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                puVar10 = puVar9 + uVar4 + uVar20;
                do {
                  auVar1 = *pauVar17;
                  uVar26 = uVar26 + 1;
                  pauVar17 = pauVar17 + 1;
                  *(longlong *)puVar10 = auVar1._0_8_;
                  *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                  puVar10 = puVar10 + 4;
                } while (uVar26 < uVar30);
                uVar5 = uVar5 + uVar30 * 4;
                puVar15 = puVar15 + uVar30 * 4;
                if (uVar29 - uVar4 != uVar30 * 4) goto LAB_080677bc;
              }
              iVar14 = uVar29 << 2;
            }
LAB_080677fc:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 10:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08067dc4;
LAB_08067dfc:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08067dc4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08067dfc;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08067dc4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08067e70:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08067fb4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_08067f1c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08067e70;
              }
LAB_08067fb4:
              iVar14 = uVar29 << 2;
            }
LAB_08067f1c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar27 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0xb:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806a884;
LAB_0806a8bc:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806a884:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806a8bc;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806a884;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806a930:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806aa74;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806a9dc;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806a930;
              }
LAB_0806aa74:
              iVar14 = uVar29 << 2;
            }
LAB_0806a9dc:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar24 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0xc:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806d6e4;
LAB_0806d71c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806d6e4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806d71c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806d6e4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806d790:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806d8d4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806d83c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806d790;
              }
LAB_0806d8d4:
              iVar14 = uVar29 << 2;
            }
LAB_0806d83c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0xd:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806bdf0;
LAB_0806be28:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806bdf0:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806be28;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806bdf0;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806be9c:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806bfe0;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806bf48;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806be9c;
              }
LAB_0806bfe0:
              iVar14 = uVar29 << 2;
            }
LAB_0806bf48:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend();
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0xe:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806e524;
LAB_0806e55c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806e524:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806e55c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806e524;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806e5d0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806e714;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806e67c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806e5d0;
              }
LAB_0806e714:
              iVar14 = uVar29 << 2;
            }
LAB_0806e67c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0xf:
    render_polygon_interpolate_w(puVar10,edge_buffer_data,buffer_data,height);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806cfc4;
LAB_0806cffc:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806cfc4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806cffc;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806cfc4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806d070:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806d1b4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806d11c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806d070;
              }
LAB_0806d1b4:
              iVar14 = uVar29 << 2;
            }
LAB_0806d11c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x10:
    iVar11 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar11,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar11,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806b6cc;
LAB_0806b704:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806b6cc:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806b704;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806b6cc;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806b778:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806b8bc;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806b824;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806b778;
              }
LAB_0806b8bc:
              iVar14 = uVar29 << 2;
            }
LAB_0806b824:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x11:
    iVar11 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar11,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar11,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806c510;
LAB_0806c548:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806c510:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806c548;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806c510;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806c5bc:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806c700;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806c668;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806c5bc;
              }
LAB_0806c700:
              iVar14 = uVar29 << 2;
            }
LAB_0806c668:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x12:
    iVar11 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar11,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar11,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_080684e4;
LAB_0806851c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_080684e4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806851c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_080684e4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08068590:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_080686d4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806863c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08068590;
              }
LAB_080686d4:
              iVar14 = uVar29 << 2;
            }
LAB_0806863c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar27 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x13:
    iVar11 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar11,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar11,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806c180;
LAB_0806c1b8:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806c180:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806c1b8;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806c180;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806c22c:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806c370;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806c2d8;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806c22c;
              }
LAB_0806c370:
              iVar14 = uVar29 << 2;
            }
LAB_0806c2d8:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar24 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x14:
    iVar14 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar14,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar14,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08068154;
LAB_0806818c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08068154:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806818c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08068154;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08068200:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08068344;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_080682ac;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08068200;
              }
LAB_08068344:
              iVar14 = uVar29 << 2;
            }
LAB_080682ac:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x15:
    iVar14 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar14,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar14,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08068c04;
LAB_08068c3c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08068c04:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08068c3c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08068c04;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08068cb0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08068df4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_08068d5c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08068cb0;
              }
LAB_08068df4:
              iVar14 = uVar29 << 2;
            }
LAB_08068d5c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend();
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x16:
    iVar14 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar14,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar14,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08069dd4;
LAB_08069e0c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08069dd4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08069e0c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08069dd4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08069e80:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08069fc4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_08069f2c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08069e80;
              }
LAB_08069fc4:
              iVar14 = uVar29 << 2;
            }
LAB_08069f2c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x17:
    iVar14 = (uint)*(ushort *)&top_vertex_1->w << 9;
    render_polygon_set_buffer32(puVar10,iVar14,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,iVar14,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806a164;
LAB_0806a19c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806a164:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806a19c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806a164;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806a210:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806a354;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806a2bc;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806a210;
              }
LAB_0806a354:
              iVar14 = uVar29 << 2;
            }
LAB_0806a2bc:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x18:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806a4f4;
LAB_0806a52c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806a4f4:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806a52c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806a4f4;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806a5a0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806a6e4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806a64c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806a5a0;
              }
LAB_0806a6e4:
              iVar14 = uVar29 << 2;
            }
LAB_0806a64c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x19:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806afa8;
LAB_0806afe0:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806afa8:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806afe0;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806afa8;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806b054:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806b198;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806b100;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806b054;
              }
LAB_0806b198:
              iVar14 = uVar29 << 2;
            }
LAB_0806b100:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x1a:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806e194;
LAB_0806e1cc:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806e194:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806e1cc;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806e194;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806e240:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806e384;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806e2ec;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806e240;
              }
LAB_0806e384:
              iVar14 = uVar29 << 2;
            }
LAB_0806e2ec:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar27 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x1b:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08068f94;
LAB_08068fcc:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08068f94:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08068fcc;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08068f94;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08069040:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08069184;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_080690ec;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08069040;
              }
LAB_08069184:
              iVar14 = uVar29 << 2;
            }
LAB_080690ec:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar24 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x1c:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08069324;
LAB_0806935c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08069324:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806935c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08069324;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_080693d0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08069514;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806947c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_080693d0;
              }
LAB_08069514:
              iVar14 = uVar29 << 2;
            }
LAB_0806947c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x1d:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_08069a44;
LAB_08069a7c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_08069a44:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_08069a7c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = uVar18 + (int)puVar23;
              if (reference_colors != puVar23) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_08069a44;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_08069af0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_08069c34;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_08069b9c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_08069af0;
              }
LAB_08069c34:
              iVar14 = uVar29 << 2;
            }
LAB_08069b9c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend();
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  case 0x1e:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806de04;
LAB_0806de3c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806de04:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806de3c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806de04;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          local_70 = puVar9 + 0x200;
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar9 = puVar27;
              do {
                puVar15 = puVar9 + 1;
                *puVar10 = *puVar9;
                puVar9 = puVar15;
                puVar10 = puVar10 + 1;
              } while (puVar15 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806deb0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806dff4;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806df5c;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806deb0;
              }
LAB_0806dff4:
              iVar14 = uVar29 << 2;
            }
LAB_0806df5c:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = local_70;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar6 = interpolated_rgb + uVar18;
      puVar27 = (u32 *)(puVar6 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar6,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar6 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar27,height,uVar18);
      render_polygon_interpolate_uv(puVar27,puVar27,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar27,(s16 *)puVar27,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar27,puVar27,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar27,puVar27,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar27,puVar27,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar27,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  case 0x1f:
    uVar22 = top_vertex->w;
    render_polygon_set_buffer32(puVar10,uVar22,pixels);
    render_polygon_load_depth_colors_id_4x
              (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
               render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than_constant(puVar25,uVar22,puVar27,pixels,&occlusion_pass)
      ;
    }
    else {
      render_polygon_depth_compare_equal_constant();
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806ac14;
LAB_0806ac4c:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806ac14:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806ac4c;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                puVar23 = (u32 *)0x1fc;
                uVar4 = 0x7f;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806ac14;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar15 = puVar27;
              do {
                puVar24 = puVar15 + 1;
                *puVar10 = *puVar15;
                puVar15 = puVar24;
                puVar10 = puVar10 + 1;
              } while (puVar24 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806acc4:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806ae08;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806ad78;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806acc4;
              }
LAB_0806ae08:
              iVar14 = uVar29 << 2;
            }
LAB_0806ad78:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = puVar9 + 0x200;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar24 = puVar27 + -1;
        occlusion_pass = 0;
        puVar8 = puVar25;
        do {
          puVar24 = puVar24 + 1;
          uVar13 = *puVar8;
          uVar20 = (*puVar24 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar24;
          }
          iVar14 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar14 = 0;
          }
          occlusion_pass = occlusion_pass - iVar14;
          puVar7 = puVar8 + 1;
          *puVar8 = uVar13;
          puVar8 = puVar7;
        } while (puVar7 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      puVar8 = interpolated_rgb + uVar18;
      puVar24 = (u32 *)(puVar8 + uVar18 + uVar18);
      render_polygon_set_buffer8(interpolated_rgb,*(ushort *)(edge_buffer_data + 0x420) >> 3,pixels)
      ;
      render_polygon_set_buffer8(puVar8,*(ushort *)(edge_buffer_data + 0x422) >> 3,pixels);
      render_polygon_set_buffer8(puVar8 + uVar18,*(ushort *)(edge_buffer_data + 0x582) >> 3,pixels);
      render_polygon_setup_uv_interpolants(edge_buffer_data,puVar24,height,uVar18);
      render_polygon_interpolate_uv(puVar24,puVar24,buffer_data,pixels,uVar18);
      ptVar19 = polygon->texture_cache_element;
      render_polygon_generate_texture_addresses(polygon,puVar24,(s16 *)puVar24,pixels,puVar25);
      if (ptVar19->paletted == '\0') {
        render_polygon_load_texels(puVar24,puVar24,ptVar19->data,pixels);
      }
      else {
        render_polygon_load_texels_paletted(puVar24,puVar24,ptVar19->data,ptVar19->palette,pixels);
      }
      render_polygon_shade
                (video_3d_00,geometry,polygon,puVar24,puVar24,interpolated_rgb,uVar18,polygon_id,
                 pixels);
      render_polygon_alpha_test
                (puVar25,puVar24,(pvVar3->video_3d).alpha_test_reference,pixels,&occlusion_pass);
      if (occlusion_pass != 0) {
        if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
          render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
        }
        else {
          render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
        }
        render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
        uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
        if (uVar18 == 2) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 3) {
          render_target->fog_active = 1;
          render_polygon_alpha_combine_depth_fog
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else if (uVar18 == 1) {
          render_polygon_alpha_combine_depth
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        else {
          render_polygon_alpha_combine
                    (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                     pixels);
        }
        render_polygon_writeback_alpha_4x
                  (edge_buffer_data,puVar15,puVar9,
                   render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                   puVar6);
      }
    }
    goto LAB_08062194;
  default:
    render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
    render_polygon_load_depth_4x(puVar27,puVar9,edge_buffer_data,height);
    if ((polygon->attribute & 0x4000) == 0) {
      render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    else {
      render_polygon_depth_compare_equal(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
    }
    if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
      if (reference_id == (u8 *)0x0) {
        uVar29 = render_target->stencilling;
        uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
        if ((uVar18 & ~uVar29) == 0) {
          if (pixels != 0) goto LAB_0806cc30;
LAB_0806cc68:
          if (height == 0) goto LAB_08062194;
        }
        else {
          uVar20 = uVar29 >> (scanline & 0xff);
          render_target->stencilling = uVar29 | uVar18;
          if (height == 0) {
            if (pixels == 0) goto LAB_08062194;
LAB_0806cc30:
            puVar25 = puVar25 + -1;
            uVar18 = 0;
            puVar10 = puVar27;
            do {
              puVar25 = puVar25 + 1;
              if (*puVar25 == '\0') {
                *puVar10 = *puVar10 | 0x80000000;
              }
              uVar18 = uVar18 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar18 < pixels);
            goto LAB_0806cc68;
          }
          uVar22 = 0;
          puVar15 = puVar9;
          puVar10 = puVar9;
          do {
            if ((uVar20 & 1) == 0) {
              uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
              uVar18 = uVar29;
              if (uVar29 == 0) {
                puVar23 = (u32 *)0x200;
                uVar4 = 0x80;
                reference_colors = (u32 *)0x200;
                puVar24 = puVar23;
              }
              else {
                *puVar10 = *puVar10 & 0x7fffffff;
                if (uVar29 == 1) {
                  puVar24 = (u32 *)0x1ff;
                }
                else {
                  puVar10[1] = puVar10[1] & 0x7fffffff;
                  if (uVar29 == 3) {
                    puVar24 = (u32 *)0x1fd;
                    puVar10[2] = puVar10[2] & 0x7fffffff;
                  }
                  else {
                    puVar24 = (u32 *)0x1fe;
                    uVar18 = 2;
                  }
                }
                reference_colors = (u32 *)(0x200 - uVar29);
                uVar4 = 0x7f;
                puVar23 = (u32 *)0x1fc;
              }
              puVar12 = puVar15 + uVar29;
              uVar29 = 0;
              puVar16 = puVar12;
              do {
                auVar2 = *(undefined (*) [16])puVar12;
                uVar29 = uVar29 + 1;
                puVar12 = puVar12 + 4;
                auVar1 = SIMDExpandImmediate(1,7,0x80);
                *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
                *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
                puVar16 = puVar16 + 4;
              } while (uVar29 < uVar4);
              iVar14 = (int)puVar23 + uVar18;
              if (puVar23 != reference_colors) {
                puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 1) {
                  puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                  if ((int)puVar24 - (int)puVar23 != 2) {
                    puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar20 >> 1;
            puVar15 = puVar15 + 0x200;
            puVar10 = puVar10 + 0x200;
          } while (height != uVar22);
          if (pixels != 0) goto LAB_0806cc30;
        }
        puVar6 = edge_buffer_data + 0x584;
        uVar18 = 0;
        puVar21 = (ushort *)(edge_buffer_data + 0x630);
        do {
          uVar29 = (uint)*puVar21;
          uVar20 = (uint)*(ushort *)(puVar6 + -4);
          if (uVar29 != 0) {
            puVar10 = puVar9 + uVar20;
            if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
              iVar14 = uVar29 * 4;
              puVar15 = puVar27;
              do {
                puVar24 = puVar15 + 1;
                *puVar10 = *puVar15;
                puVar15 = puVar24;
                puVar10 = puVar10 + 1;
              } while (puVar24 != puVar27 + uVar29);
            }
            else {
              uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
              if (uVar29 <= uVar4) {
                uVar4 = uVar29;
              }
              uVar5 = uVar4;
              puVar15 = puVar27;
              if (uVar4 == 0) {
LAB_0806cce0:
                uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
                if (2 < (uVar29 - 1) - uVar4) {
                  uVar26 = 0;
                  pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                  puVar10 = puVar9 + uVar4 + uVar20;
                  do {
                    auVar1 = *pauVar17;
                    uVar26 = uVar26 + 1;
                    pauVar17 = pauVar17 + 1;
                    *(longlong *)puVar10 = auVar1._0_8_;
                    *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                    puVar10 = puVar10 + 4;
                  } while (uVar26 < uVar30);
                  uVar5 = uVar5 + uVar30 * 4;
                  puVar15 = puVar15 + uVar30 * 4;
                  if (uVar29 - uVar4 == uVar30 * 4) goto LAB_0806ce24;
                }
                puVar9[uVar5 + uVar20] = *puVar15;
                if (uVar5 + 1 < uVar29) {
                  puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                  if (uVar5 + 2 < uVar29) {
                    iVar14 = uVar29 << 2;
                    puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                    goto LAB_0806cd94;
                  }
                }
              }
              else {
                puVar15 = puVar27 + 1;
                puVar9[uVar20] = *puVar27;
                if (uVar4 != 1) {
                  puVar15 = puVar27 + 2;
                  puVar10[1] = puVar27[1];
                  if (uVar4 == 3) {
                    puVar15 = puVar27 + 3;
                    puVar10[2] = puVar27[2];
                  }
                  else {
                    uVar5 = 2;
                  }
                }
                if (uVar29 != uVar4) goto LAB_0806cce0;
              }
LAB_0806ce24:
              iVar14 = uVar29 << 2;
            }
LAB_0806cd94:
            puVar27 = (u32 *)((int)puVar27 + iVar14);
          }
          uVar18 = uVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar9 = puVar9 + 0x200;
          puVar21 = puVar21 + 2;
        } while (uVar18 < height);
        goto LAB_08062194;
      }
      uVar29 = (polygon->attribute << 2) >> 0x1a;
      render_target->stencilling =
           render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
      occlusion_pass = pixels;
      if (pixels != 0) {
        puVar27 = puVar27 + -1;
        occlusion_pass = 0;
        puVar6 = puVar25;
        do {
          puVar27 = puVar27 + 1;
          uVar13 = *puVar6;
          uVar20 = (*puVar27 << 2) >> 0x1a;
          uVar22 = uVar20 - uVar29;
          if (uVar20 != uVar29) {
            uVar22 = *puVar27;
          }
          iVar11 = (int)(char)uVar13;
          if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
            uVar13 = '\0';
            iVar11 = 0;
          }
          occlusion_pass = occlusion_pass - iVar11;
          puVar8 = puVar6 + 1;
          *puVar6 = uVar13;
          puVar6 = puVar8;
        } while (puVar8 != puVar25 + pixels);
      }
    }
    if (occlusion_pass != 0) {
      render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
      render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
      if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
        puVar27 = (u32 *)(interpolated_rgb + iVar14);
        render_polygon_shade_untextured
                  (video_3d_00,geometry,polygon,puVar27,interpolated_rgb,uVar18,polygon_id,pixels);
        if ((polygon->attribute & 0x8000) != 0) {
          render_target->fog_active = 1;
          render_polygon_apply_fog(puVar27,pixels);
        }
        if (((pvVar3->video_3d).display_3d_control & 0x20) != 0) {
          render_polygon_mark_edges(edge_buffer_data,puVar10,height);
        }
        if (pixels == occlusion_pass) {
          render_polygon_writeback_all_pass_4x
                    (edge_buffer_data,puVar15,puVar9,height,reference_id,puVar27,puVar10);
        }
        else {
          render_polygon_writeback_4x();
        }
      }
    }
    goto LAB_08062194;
  }
  render_polygon_interpolate_z(puVar10,edge_buffer_data,height);
  render_polygon_load_depth_colors_id_4x
            (puVar27,iVar28,puVar25 + uVar18,puVar9,puVar15,
             render_target->polygon_alpha_id_tile + scanline * 0x200,edge_buffer_data,height);
  if ((polygon->attribute & 0x4000) == 0) {
    render_polygon_depth_compare_less_than(puVar25,puVar10,puVar27,pixels,&occlusion_pass);
  }
  else {
    render_polygon_depth_compare_equal();
  }
  if ((polygon->attribute << 0x1a) >> 0x1e == 3) {
    if (reference_id == (u8 *)0x0) {
      uVar29 = render_target->stencilling;
      uVar18 = ~(-1 << (height & 0xff)) << (scanline & 0xff);
      if ((uVar18 & ~uVar29) == 0) {
        if (pixels != 0) goto LAB_0806c8a0;
LAB_0806c8d8:
        if (height == 0) goto LAB_08062194;
      }
      else {
        uVar20 = uVar29 >> (scanline & 0xff);
        render_target->stencilling = uVar29 | uVar18;
        if (height == 0) {
          if (pixels == 0) goto LAB_08062194;
LAB_0806c8a0:
          puVar25 = puVar25 + -1;
          uVar18 = 0;
          puVar10 = puVar27;
          do {
            puVar25 = puVar25 + 1;
            if (*puVar25 == '\0') {
              *puVar10 = *puVar10 | 0x80000000;
            }
            uVar18 = uVar18 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar18 < pixels);
          goto LAB_0806c8d8;
        }
        uVar22 = 0;
        puVar15 = puVar9;
        puVar10 = puVar9;
        do {
          if ((uVar20 & 1) == 0) {
            uVar29 = ((int)puVar15 << 0x1d) >> 0x1f & 3;
            uVar18 = uVar29;
            if (uVar29 == 0) {
              puVar23 = (u32 *)0x200;
              uVar4 = 0x80;
              reference_colors = (u32 *)0x200;
              puVar24 = puVar23;
            }
            else {
              *puVar10 = *puVar10 & 0x7fffffff;
              if (uVar29 == 1) {
                puVar24 = (u32 *)0x1ff;
              }
              else {
                puVar10[1] = puVar10[1] & 0x7fffffff;
                if (uVar29 == 3) {
                  puVar24 = (u32 *)0x1fd;
                  puVar10[2] = puVar10[2] & 0x7fffffff;
                }
                else {
                  puVar24 = (u32 *)0x1fe;
                  uVar18 = 2;
                }
              }
              reference_colors = (u32 *)(0x200 - uVar29);
              uVar4 = 0x7f;
              puVar23 = (u32 *)0x1fc;
            }
            puVar12 = puVar15 + uVar29;
            uVar29 = 0;
            puVar16 = puVar12;
            do {
              auVar2 = *(undefined (*) [16])puVar12;
              uVar29 = uVar29 + 1;
              puVar12 = puVar12 + 4;
              auVar1 = SIMDExpandImmediate(1,7,0x80);
              *(longlong *)puVar16 = SUB168(auVar2 & ~auVar1,0);
              *(longlong *)(puVar16 + 2) = SUB168(auVar2 & ~auVar1,8);
              puVar16 = puVar16 + 4;
            } while (uVar29 < uVar4);
            iVar14 = uVar18 + (int)puVar23;
            if (reference_colors != puVar23) {
              puVar15[iVar14] = puVar15[iVar14] & 0x7fffffff;
              if ((int)puVar24 - (int)puVar23 != 1) {
                puVar15[iVar14 + 1] = puVar15[iVar14 + 1] & 0x7fffffff;
                if ((int)puVar24 - (int)puVar23 != 2) {
                  puVar15[iVar14 + 2] = puVar15[iVar14 + 2] & 0x7fffffff;
                }
              }
            }
          }
          uVar22 = uVar22 + 1;
          uVar20 = uVar20 >> 1;
          puVar15 = puVar15 + 0x200;
          puVar10 = puVar10 + 0x200;
        } while (height != uVar22);
        if (pixels != 0) goto LAB_0806c8a0;
      }
      puVar6 = edge_buffer_data + 0x584;
      uVar18 = 0;
      puVar21 = (ushort *)(edge_buffer_data + 0x630);
      do {
        local_70 = puVar9 + 0x200;
        uVar29 = (uint)*puVar21;
        uVar20 = (uint)*(ushort *)(puVar6 + -4);
        if (uVar29 != 0) {
          puVar10 = puVar9 + uVar20;
          if (uVar29 < 0xc || puVar10 < puVar27 + 4 && puVar27 < puVar9 + uVar20 + 4) {
            iVar14 = uVar29 * 4;
            puVar9 = puVar27;
            do {
              puVar15 = puVar9 + 1;
              *puVar10 = *puVar9;
              puVar9 = puVar15;
              puVar10 = puVar10 + 1;
            } while (puVar15 != puVar27 + uVar29);
          }
          else {
            uVar4 = ((int)puVar27 << 0x1d) >> 0x1f & 3;
            if (uVar29 <= uVar4) {
              uVar4 = uVar29;
            }
            uVar5 = uVar4;
            puVar15 = puVar27;
            if (uVar4 == 0) {
LAB_0806c94c:
              uVar30 = ((uVar29 - uVar4) - 4 >> 2) + 1;
              if (2 < (uVar29 - 1) - uVar4) {
                uVar26 = 0;
                pauVar17 = (undefined (*) [16])(puVar27 + uVar4);
                puVar10 = puVar9 + uVar4 + uVar20;
                do {
                  auVar1 = *pauVar17;
                  uVar26 = uVar26 + 1;
                  pauVar17 = pauVar17 + 1;
                  *(longlong *)puVar10 = auVar1._0_8_;
                  *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                  puVar10 = puVar10 + 4;
                } while (uVar26 < uVar30);
                uVar5 = uVar5 + uVar30 * 4;
                puVar15 = puVar15 + uVar30 * 4;
                if (uVar30 * 4 - (uVar29 - uVar4) == 0) goto LAB_0806ca90;
              }
              puVar9[uVar5 + uVar20] = *puVar15;
              if (uVar5 + 1 < uVar29) {
                puVar9[uVar5 + 1 + uVar20] = puVar15[1];
                if (uVar5 + 2 < uVar29) {
                  iVar14 = uVar29 << 2;
                  puVar9[uVar5 + 2 + uVar20] = puVar15[2];
                  goto LAB_0806c9f8;
                }
              }
            }
            else {
              puVar15 = puVar27 + 1;
              puVar9[uVar20] = *puVar27;
              if (uVar4 != 1) {
                puVar15 = puVar27 + 2;
                puVar10[1] = puVar27[1];
                if (uVar4 == 3) {
                  puVar15 = puVar27 + 3;
                  puVar10[2] = puVar27[2];
                }
                else {
                  uVar5 = 2;
                }
              }
              if (uVar29 != uVar4) goto LAB_0806c94c;
            }
LAB_0806ca90:
            iVar14 = uVar29 << 2;
          }
LAB_0806c9f8:
          puVar27 = (u32 *)((int)puVar27 + iVar14);
        }
        uVar18 = uVar18 + 1;
        puVar6 = puVar6 + 4;
        puVar9 = local_70;
        puVar21 = puVar21 + 2;
      } while (uVar18 < height);
      goto LAB_08062194;
    }
    uVar29 = (polygon->attribute << 2) >> 0x1a;
    render_target->stencilling =
         render_target->stencilling & ~(~(-1 << (height & 0xff)) << (scanline & 0xff));
    occlusion_pass = pixels;
    if (pixels != 0) {
      puVar24 = puVar27 + -1;
      occlusion_pass = 0;
      puVar8 = puVar25;
      do {
        puVar24 = puVar24 + 1;
        uVar13 = *puVar8;
        uVar20 = (*puVar24 << 2) >> 0x1a;
        uVar22 = uVar20 - uVar29;
        if (uVar20 != uVar29) {
          uVar22 = *puVar24;
        }
        iVar11 = (int)(char)uVar13;
        if ((int)uVar22 < 0 == (uVar20 == uVar29 && SBORROW4(uVar20,uVar29))) {
          uVar13 = '\0';
          iVar11 = 0;
        }
        occlusion_pass = occlusion_pass - iVar11;
        puVar7 = puVar8 + 1;
        *puVar8 = uVar13;
        puVar8 = puVar7;
      } while (puVar7 != puVar25 + pixels);
    }
  }
  if (occlusion_pass != 0) {
    render_polygon_setup_rgb_interpolants(edge_buffer_data,interpolated_rgb,height,uVar18);
    render_polygon_interpolate_rgb(interpolated_rgb,interpolated_rgb,buffer_data,pixels,uVar18);
    if ((pvVar3->video_3d).alpha_test_reference < polygon_id) {
      puVar24 = (u32 *)(interpolated_rgb + iVar14);
      render_polygon_shade_untextured
                (video_3d_00,geometry,polygon,puVar24,interpolated_rgb,uVar18,polygon_id,pixels);
      if (((pvVar3->video_3d).display_3d_control & 8) == 0) {
        render_polygon_alpha_pass(puVar24,iVar28,pixels,interpolated_rgb);
      }
      else {
        render_polygon_alpha_blend(puVar24,iVar28,pixels,interpolated_rgb);
      }
      render_polygon_alpha_id_test(puVar25,puVar6,interpolated_rgb,pixels,reference_id);
      uVar18 = (polygon->attribute << 0x14) >> 0x1f | polygon->attribute >> 0xe & 2;
      if (uVar18 == 2) {
        render_target->fog_active = 1;
        render_polygon_alpha_combine_fog
                  (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                   pixels);
      }
      else if (uVar18 == 3) {
        render_target->fog_active = 1;
        render_polygon_alpha_combine_depth_fog
                  (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                   pixels);
      }
      else if (uVar18 == 1) {
        render_polygon_alpha_combine_depth
                  (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                   pixels);
      }
      else {
        render_polygon_alpha_combine
                  (puVar24,puVar10,iVar28,puVar27,puVar6,reference_id,interpolated_rgb,puVar25,
                   pixels);
      }
      render_polygon_writeback_alpha_4x
                (edge_buffer_data,puVar15,puVar9,
                 render_target->polygon_alpha_id_tile + scanline * 0x200,height,puVar24,puVar10,
                 puVar6);
    }
  }
LAB_08062194:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


