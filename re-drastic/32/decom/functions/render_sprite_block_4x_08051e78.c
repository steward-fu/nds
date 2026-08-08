/*
 * Ghidra decompilation
 *
 * Function : render_sprite_block_4x
 * Address  : 08051e78
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: pixels */
/* DWARF original prototype: void render_sprite_block_4x(video_3d_render_target_struct *
   render_target, geometry_polygon_struct * polygon, u8 * buffer_data, u32 x, u32 y, s32 u, s32 v,
   u32 width, u32 height, u32 depth_value, u32 color_value, u32 polygon_render_flags,
   geometry_polygon_struct * polygon) */

void render_sprite_block_4x
               (video_3d_render_target_struct *render_target,geometry_polygon_struct *polygon,
               u8 *buffer_data,u32 x,u32 y,s32 u,s32 v,u32 width,u32 height,u32 depth_value,
               u32 color_value,u32 polygon_render_flags,geometry_polygon_struct *polygon_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  uint uVar5;
  u32 pixel_block_size;
  int iVar6;
  u32 texel_b;
  u8 *puVar7;
  u32 texel_2;
  u32 uVar8;
  int iVar9;
  u32 *reference_colors;
  u32 *puVar10;
  u32 *puVar11;
  uint uVar12;
  video_struct *pvVar13;
  undefined8 *puVar14;
  uint uVar15;
  u32 texel;
  u32 *puVar16;
  int iVar17;
  u32 *depth_buffer;
  u32 *texels;
  undefined (*pauVar18) [16];
  u32 *puVar19;
  u8 *puVar20;
  undefined (*pauVar21) [16];
  u32 *reference_depth;
  uint uVar22;
  uint uVar23;
  u8 *puVar24;
  u32 g;
  u32 r;
  u8 *pixel_alpha;
  u32 *puVar25;
  uint uVar26;
  u32 b;
  u32 *puVar27;
  uint uVar28;
  u32 texture_width;
  uint *puVar29;
  u8 *puVar30;
  u8 *reference_id;
  u8 *puVar31;
  uint uVar32;
  uint uVar33;
  u32 texel_g;
  u32 *puVar34;
  u32 uVar35;
  u32 texel_r;
  u32 texel_a;
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  u32 pixels;
  u32 *texel_1;
  texture_cache_element_struct *texture_cache_element;
  uint local_58;
  u32 occlusion_pass;
  int local_2c;
  
  uVar12 = depth_value * height;
  iVar4 = y + u * 0x200;
  uVar5 = uVar12 + 0x16 & 0xfffffff0;
  uVar8 = polygon->texture_image_param;
  uVar26 = iVar4 * 4;
  local_2c = __stack_chk_guard;
  pvVar13 = render_target->video;
  iVar9 = x + uVar5 * 4;
  iVar17 = iVar9 + uVar5 * 9;
  puVar27 = render_target->color_buffer_tile + iVar4;
  puVar30 = (u8 *)(iVar17 + uVar5);
  puVar25 = render_target->depth_buffer_tile + iVar4;
  if (((uint)polygon_1 & 1) == 0) {
    render_sprite_load_depth_4x(x,puVar25,height,depth_value);
  }
  else {
    render_sprite_load_depth_colors_id_4x
              (x,iVar9,puVar30,puVar25,puVar27,render_target->polygon_alpha_id_tile + iVar4,height,
               depth_value);
  }
  if ((polygon->texture_image_param & 0x4000) == 0) {
    render_polygon_depth_compare_less_than_constant(iVar17,color_value,x,uVar12,&occlusion_pass);
  }
  else {
    render_polygon_depth_compare_equal_constant();
  }
  if (occlusion_pass == 0) goto LAB_08052558;
  uVar28 = (uint)*(ushort *)(buffer_data + 0x24);
  texels = (u32 *)(puVar30 + uVar5 * -6);
  if (buffer_data[0x2e] == '\0') {
    puVar10 = (u32 *)(*(int *)(buffer_data + 0xc) + (uVar28 * width + v) * 4);
    if (depth_value != 0) {
      uVar35 = 0;
      puVar11 = texels;
      do {
        if (height != 0) {
          if (height < 0xc || puVar11 < puVar10 + 4 && puVar10 < puVar11 + 4) {
            puVar16 = puVar10 + -1;
            puVar34 = puVar11;
            do {
              puVar16 = puVar16 + 1;
              puVar19 = puVar34 + 1;
              *puVar34 = *puVar16;
              puVar34 = puVar19;
            } while (puVar19 != puVar11 + height);
          }
          else {
            uVar15 = ((int)puVar10 << 0x1d) >> 0x1f & 3;
            if (height <= uVar15) {
              uVar15 = height;
            }
            uVar22 = uVar15;
            puVar34 = puVar11;
            if (uVar15 != 0) {
              *puVar11 = *puVar10;
              puVar34 = puVar11 + 1;
              if (uVar15 != 1) {
                puVar11[1] = puVar10[1];
                if (uVar15 == 3) {
                  puVar11[2] = puVar10[2];
                  puVar34 = puVar11 + 3;
                }
                else {
                  uVar22 = 2;
                  puVar34 = puVar11 + 2;
                }
              }
            }
            uVar26 = height - uVar15;
            pauVar21 = (undefined (*) [16])(puVar10 + uVar15);
            uVar23 = 0;
            uVar32 = (uVar26 - 4 >> 2) + 1;
            puVar14 = (undefined8 *)(puVar11 + uVar15);
            do {
              auVar1 = *pauVar21;
              uVar23 = uVar23 + 1;
              pauVar21 = pauVar21 + 1;
              *puVar14 = auVar1._0_8_;
              puVar14[1] = auVar1._8_8_;
              puVar14 = puVar14 + 2;
            } while (uVar23 < uVar32);
            iVar6 = uVar22 + uVar32 * 4;
            if (uVar26 != uVar32 * 4) {
              puVar34[uVar32 * 4] = puVar10[iVar6];
              if (iVar6 + 1U < height) {
                puVar34[uVar32 * 4 + 1] = puVar10[iVar6 + 1U];
                if (iVar6 + 2U < height) {
                  puVar34[uVar32 * 4 + 2] = puVar10[iVar6 + 2U];
                }
              }
            }
          }
          puVar11 = puVar11 + height;
        }
        uVar35 = uVar35 + 1;
        puVar10 = puVar10 + uVar28;
      } while (depth_value != uVar35);
    }
  }
  else {
    render_sprite_load_texels_paletted
              (texels,(u8 *)(*(int *)(buffer_data + 0xc) + uVar28 * width + v),
               *(u32 **)(buffer_data + 0x10),height,depth_value,uVar28);
  }
  render_polygon_alpha_test
            (iVar17,texels,(pvVar13->video_3d).alpha_test_reference,uVar12,&occlusion_pass);
  if (occlusion_pass == 0) goto LAB_08052558;
  if (polygon_render_flags != 0x3f3f3f) {
    uVar15 = polygon_render_flags & 0x3f;
    uVar28 = (polygon_render_flags << 0x12) >> 0x1a;
    uVar26 = (polygon_render_flags << 10) >> 0x1a;
    if (uVar12 != 0) {
      uVar22 = (int)(x * 0x20000000) >> 0x1f & 3;
      if (uVar12 <= uVar22) {
        uVar22 = uVar12;
      }
      uVar23 = uVar12;
      if ((uVar12 < 5) || (puVar29 = texels, uVar23 = uVar22, local_58 = uVar22, uVar22 != 0)) {
        uVar32 = *texels;
        uVar33 = (uVar32 << 0x10) >> 0x18;
        uVar22 = (uVar32 << 8) >> 0x18;
        puVar29 = texels + 1;
        *texels = uVar32 & 0xff000000 | (uVar32 & 0xff) * uVar15 + uVar15 + (uVar32 & 0xff) >> 6 |
                  (uVar33 * uVar28 + uVar28 + uVar33 >> 6) << 8 |
                  (uVar22 * uVar26 + uVar26 + uVar22 >> 6) << 0x10;
        local_58 = uVar23;
        if (uVar23 != 1) {
          uVar32 = texels[1];
          puVar29 = texels + 2;
          uVar33 = (uVar32 << 0x10) >> 0x18;
          uVar22 = (uVar32 << 8) >> 0x18;
          texels[1] = uVar32 & 0xff000000 | (uVar32 & 0xff) * uVar15 + uVar15 + (uVar32 & 0xff) >> 6
                      | (uVar33 * uVar28 + uVar28 + uVar33 >> 6) << 8 |
                      (uVar22 * uVar26 + uVar26 + uVar22 >> 6) << 0x10;
          if (uVar23 != 2) {
            puVar29 = texels + 3;
            uVar32 = texels[2];
            uVar33 = (uVar32 << 0x10) >> 0x18;
            uVar22 = (uVar32 << 8) >> 0x18;
            texels[2] = uVar32 & 0xff000000 |
                        (uVar32 & 0xff) * uVar15 + uVar15 + (uVar32 & 0xff) >> 6 |
                        (uVar33 * uVar28 + uVar28 + uVar33 >> 6) << 8 |
                        (uVar22 * uVar26 + uVar26 + uVar22 >> 6) << 0x10;
            if (uVar23 == 4) {
              puVar29 = texels + 4;
              uVar32 = texels[3];
              uVar33 = (uVar32 << 0x10) >> 0x18;
              uVar22 = (uVar32 << 8) >> 0x18;
              texels[3] = uVar32 & 0xff000000 |
                          (uVar32 & 0xff) * uVar15 + uVar15 + (uVar32 & 0xff) >> 6 |
                          (uVar33 * uVar28 + uVar28 + uVar33 >> 6) << 8 |
                          (uVar22 * uVar26 + uVar26 + uVar22 >> 6) << 0x10;
            }
            else {
              local_58 = 3;
            }
          }
        }
        uVar22 = uVar23;
        if (uVar12 == uVar23) goto LAB_08052500;
      }
      uVar23 = ((uVar12 - uVar22) - 4 >> 2) + 1;
      if (2 < (uVar12 - 1) - uVar22) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(polygon_render_flags,polygon_render_flags) & 0x3f0000003f;
        uVar32 = 0;
        auVar1 = SIMDExpandImmediate(0,0,0xff);
        auVar3._4_4_ = uVar28;
        auVar3._0_4_ = uVar28;
        auVar3._8_8_ = 0;
        auVar39._4_4_ = uVar26;
        auVar39._0_4_ = uVar26;
        auVar39._8_8_ = 0;
        pauVar18 = (undefined (*) [16])(x + (uVar22 + uVar5 * 2) * 4);
        pauVar21 = pauVar18;
        do {
          auVar37 = *pauVar18;
          uVar32 = uVar32 + 1;
          pauVar18 = pauVar18 + 1;
          auVar40 = VectorShiftRight(auVar37,8);
          auVar38 = VectorShiftRight(auVar37,0x10);
          auVar41 = VectorShiftRight(auVar37,0x18);
          auVar36 = VectorMultiplyAccumulate(auVar37 & auVar1,auVar2 & auVar2 << 0x40,4,0);
          auVar42 = VectorShiftLeft(auVar41,0x18,0x20,0);
          auVar41 = VectorMultiplyAccumulate(auVar40 & auVar1,auVar3 & auVar3 << 0x40,4,0);
          auVar41 = VectorAdd(auVar41,auVar40 & auVar1,4);
          auVar36 = VectorAdd(auVar36,auVar37 & auVar1,4);
          auVar41 = VectorShiftRight(auVar41,6);
          auVar37 = VectorMultiplyAccumulate(auVar38 & auVar1,auVar39 & auVar39 << 0x40,4,0);
          auVar36 = VectorShiftRight(auVar36,6);
          auVar41 = VectorShiftLeft(auVar41,8,0x20,0);
          auVar37 = VectorAdd(auVar37,auVar38 & auVar1,4);
          auVar37 = VectorShiftRight(auVar37,6);
          auVar37 = VectorShiftLeft(auVar37,0x10,0x20,0);
          auVar37 = auVar36 | auVar42 | auVar41 | auVar37;
          *(longlong *)*pauVar21 = auVar37._0_8_;
          *(longlong *)(*pauVar21 + 8) = auVar37._8_8_;
          pauVar21 = pauVar21 + 1;
        } while (uVar32 < uVar23);
        puVar29 = puVar29 + uVar23 * 4;
        local_58 = local_58 + uVar23 * 4;
        if (uVar12 - uVar22 == uVar23 * 4) goto LAB_08052500;
      }
      uVar23 = *puVar29;
      uVar32 = (uVar23 << 8) >> 0x18;
      uVar22 = (uVar23 << 0x10) >> 0x18;
      *puVar29 = uVar23 & 0xff000000 | (uVar23 & 0xff) * uVar15 + uVar15 + (uVar23 & 0xff) >> 6 |
                 (uVar22 * uVar28 + uVar28 + uVar22 >> 6) << 8 |
                 (uVar32 * uVar26 + uVar26 + uVar32 >> 6) << 0x10;
      if (local_58 + 1 < uVar12) {
        uVar23 = puVar29[1];
        uVar32 = (uVar23 << 8) >> 0x18;
        uVar22 = (uVar23 << 0x10) >> 0x18;
        puVar29[1] = uVar23 & 0xff000000 | (uVar23 & 0xff) * uVar15 + uVar15 + (uVar23 & 0xff) >> 6
                     | (uVar22 * uVar28 + uVar28 + uVar22 >> 6) << 8 |
                     (uVar32 * uVar26 + uVar26 + uVar32 >> 6) << 0x10;
        if (local_58 + 2 < uVar12) {
          uVar22 = puVar29[2];
          uVar23 = (uVar22 << 0x10) >> 0x18;
          uVar32 = (uVar22 << 8) >> 0x18;
          puVar29[2] = uVar22 & 0xff000000 |
                       (uVar22 & 0xff) * uVar15 + uVar15 + (uVar22 & 0xff) >> 6 |
                       (uVar23 * uVar28 + uVar28 + uVar23 >> 6) << 8 |
                       (uVar32 * uVar26 + uVar26 + uVar32 >> 6) << 0x10;
        }
      }
    }
  }
LAB_08052500:
  uVar28 = (uVar8 << 2) >> 0x1a;
  uVar15 = uVar28 << 0x18 | ((polygon->texture_image_param << 0x10) >> 0x1f) << 0x1e | color_value;
  if (((uint)polygon_1 & 1) == 0) {
    if ((polygon->texture_image_param & 0x8000) != 0) {
      render_target->fog_active = 1;
      render_polygon_apply_fog(texels,uVar12);
    }
    render_sprite_writeback_4x(puVar27,puVar25,height,depth_value,texels,uVar15,iVar17);
    goto LAB_08052558;
  }
  uVar22 = (uVar8 << 0xb) >> 0x1b;
  puVar10 = texels + uVar5;
  if ((buffer_data[0x2d] == '\x01') || (buffer_data[0x2d] == '\x06')) {
    if (uVar12 != 0) {
      uVar23 = (int)(x * 0x20000000) >> 0x1f & 3;
      if (uVar12 <= uVar23) {
        uVar23 = uVar12;
      }
      uVar32 = uVar12;
      if ((uVar12 < 5) || (puVar11 = texels, uVar32 = uVar23, uVar23 != 0)) {
        uVar23 = (*texels << 3) >> 0x1b;
        puVar11 = texels + 1;
        *texels = *texels & 0xffffff | (uVar23 * uVar22 + uVar22 + uVar23 >> 5) << 0x18;
        uVar23 = uVar32;
        if (uVar32 != 1) {
          puVar11 = texels + 2;
          uVar33 = (texels[1] << 3) >> 0x1b;
          texels[1] = texels[1] & 0xffffff | (uVar33 * uVar22 + uVar22 + uVar33 >> 5) << 0x18;
          if (uVar32 != 2) {
            puVar11 = texels + 3;
            if (uVar32 != 4) {
              uVar26 = 3;
            }
            uVar23 = (texels[2] << 3) >> 0x1b;
            texels[2] = texels[2] & 0xffffff | (uVar23 * uVar22 + uVar22 + uVar23 >> 5) << 0x18;
            uVar23 = uVar26;
            if (uVar32 == 4) {
              puVar11 = texels + 4;
              uVar26 = (texels[3] << 3) >> 0x1b;
              texels[3] = texels[3] & 0xffffff | (uVar26 * uVar22 + uVar22 + uVar26 >> 5) << 0x18;
              uVar23 = uVar32;
            }
          }
        }
        if (uVar12 == uVar32) goto LAB_080527a4;
      }
      uVar26 = ((uVar12 - uVar32) - 4 >> 2) + 1;
      if (2 < (uVar12 - 1) - uVar32) {
        auVar1 = SIMDExpandImmediate(0,0,0x1f);
        uVar33 = 0;
        auVar37._4_4_ = uVar22;
        auVar37._0_4_ = uVar22;
        auVar37._8_8_ = 0;
        pauVar18 = (undefined (*) [16])(x + (uVar32 + uVar5 * 2) * 4);
        pauVar21 = pauVar18;
        do {
          auVar3 = *pauVar18;
          uVar33 = uVar33 + 1;
          pauVar18 = pauVar18 + 1;
          auVar39 = VectorShiftRight(auVar3,0x18);
          auVar2 = SIMDExpandImmediate(1,7,0xff);
          auVar41 = VectorMultiplyAccumulate(auVar39 & auVar1,auVar37 & auVar37 << 0x40,4,0);
          auVar39 = VectorAdd(auVar41,auVar39 & auVar1,4);
          auVar39 = VectorShiftRight(auVar39,5);
          auVar39 = VectorShiftLeft(auVar39,0x18,0x20,0);
          auVar39 = auVar39 | auVar3 & ~auVar2;
          *(longlong *)*pauVar21 = auVar39._0_8_;
          *(longlong *)(*pauVar21 + 8) = auVar39._8_8_;
          pauVar21 = pauVar21 + 1;
        } while (uVar33 < uVar26);
        puVar11 = puVar11 + uVar26 * 4;
        uVar23 = uVar23 + uVar26 * 4;
        if (uVar26 * 4 - (uVar12 - uVar32) == 0) goto LAB_080527a4;
      }
      uVar26 = (*puVar11 << 3) >> 0x1b;
      *puVar11 = *puVar11 & 0xffffff | (uVar26 * uVar22 + uVar22 + uVar26 >> 5) << 0x18;
      if ((uVar23 + 1 < uVar12) &&
         (uVar26 = (puVar11[1] << 3) >> 0x1b,
         puVar11[1] = puVar11[1] & 0xffffff | (uVar26 * uVar22 + uVar22 + uVar26 >> 5) << 0x18,
         uVar23 + 2 < uVar12)) {
        uVar26 = (puVar11[2] << 3) >> 0x1b;
        puVar11[2] = puVar11[2] & 0xffffff | (uVar26 * uVar22 + uVar22 + uVar26 >> 5) << 0x18;
      }
    }
  }
  else {
    uVar26 = uVar22 << 0x18 | 0xffffff;
    if (uVar12 != 0) {
      uVar22 = (int)(x * 0x20000000) >> 0x1f & 3;
      if (uVar12 <= uVar22) {
        uVar22 = uVar12;
      }
      uVar23 = uVar12;
      if ((uVar12 < 5) || (puVar11 = texels, uVar23 = uVar22, uVar22 != 0)) {
        puVar11 = texels + 1;
        *texels = *texels & uVar26;
        uVar22 = uVar23;
        if (uVar23 != 1) {
          puVar11 = texels + 2;
          texels[1] = texels[1] & uVar26;
          if (uVar23 != 2) {
            puVar11 = texels + 3;
            texels[2] = texels[2] & uVar26;
            if (uVar23 == 4) {
              puVar11 = texels + 4;
              texels[3] = texels[3] & uVar26;
            }
            else {
              uVar22 = 3;
            }
          }
        }
        if (uVar12 == uVar23) goto LAB_080527a4;
      }
      uVar32 = ((uVar12 - uVar23) - 4 >> 2) + 1;
      if (2 < (uVar12 - 1) - uVar23) {
        uVar33 = 0;
        puVar14 = (undefined8 *)(x + (uVar23 + uVar5 * 2) * 4);
        do {
          uVar33 = uVar33 + 1;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14 = puVar14 + 2;
        } while (uVar33 < uVar32);
        puVar11 = puVar11 + uVar32 * 4;
        uVar22 = uVar22 + uVar32 * 4;
        if (uVar32 * 4 - (uVar12 - uVar23) == 0) goto LAB_080527a4;
      }
      *puVar11 = *puVar11 & uVar26;
      if ((uVar22 + 1 < uVar12) && (puVar11[1] = puVar11[1] & uVar26, uVar22 + 2 < uVar12)) {
        puVar11[2] = uVar26 & puVar11[2];
      }
    }
  }
LAB_080527a4:
  if (((pvVar13->video_3d).display_3d_control & 8) == 0) {
    render_polygon_alpha_pass(texels,iVar9,uVar12,puVar10);
  }
  else {
    render_polygon_alpha_blend(texels,iVar9,uVar12,puVar10);
  }
  render_polygon_alpha_id_test(iVar17,puVar30,puVar10,uVar12,uVar28);
  uVar26 = (polygon->texture_image_param << 0x14) >> 0x1f | polygon->texture_image_param >> 0xe & 2;
  if (uVar26 == 2) {
    render_target->fog_active = 1;
    render_polygon_alpha_combine_fog_constant
              (texels,uVar15,iVar9,x,puVar30,uVar28,puVar10,iVar17,uVar12);
  }
  else if (uVar26 == 3) {
    render_target->fog_active = 1;
    render_polygon_alpha_combine_depth_fog_constant
              (texels,uVar15,iVar9,x,puVar30,uVar28,puVar10,iVar17,uVar12);
  }
  else if (uVar26 == 1) {
    render_polygon_alpha_combine_depth_constant
              (texels,uVar15,iVar9,x,puVar30,uVar28,puVar10,iVar17,uVar12);
  }
  else {
    render_polygon_alpha_combine_constant();
  }
  if (depth_value != 0) {
    uVar8 = 0;
    puVar24 = render_target->polygon_alpha_id_tile + iVar4 + -1;
    puVar27 = puVar27 + -1;
    puVar25 = puVar25 + -1;
    do {
      puVar31 = puVar30;
      if (height != 0) {
        puVar16 = texels + -1;
        puVar34 = (u32 *)(x - 4);
        puVar31 = puVar30 + height;
        puVar7 = puVar24;
        puVar10 = puVar25;
        puVar11 = puVar27;
        do {
          puVar16 = puVar16 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = *puVar16;
          puVar34 = puVar34 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar34;
          puVar20 = puVar30 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar30;
          puVar30 = puVar20;
        } while (puVar31 != puVar20);
        texels = texels + height;
        x = x + height * 4;
      }
      uVar8 = uVar8 + 1;
      puVar27 = puVar27 + 0x200;
      puVar25 = puVar25 + 0x200;
      puVar24 = puVar24 + 0x200;
      puVar30 = puVar31;
    } while (depth_value != uVar8);
  }
LAB_08052558:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


