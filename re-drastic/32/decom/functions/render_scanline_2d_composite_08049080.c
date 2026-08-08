/*
 * Ghidra decompilation
 *
 * Function : render_scanline_2d_composite
 * Address  : 08049080
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: active_layers_b */
/* WARNING: Unknown calling convention */

void render_scanline_2d_composite
               (video_2d_struct *video_2d,u8 *dest,u8 *aligned_storage,u16 **layer_buffer_ptrs,
               u8 *pixel_alpha,u32 active_layers,u32 blend_control,u32 color_effects_flags,u32 line)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  u32 (*layer_visibility) [8];
  u8 *puVar13;
  u8 *blend_coefficients_b;
  u8 *blend_offsets;
  u32 (*select_second) [8];
  u8 *pixel_buffers;
  u32 (*pauVar14) [8];
  u8 *puVar15;
  u32 (*select_sets_00) [8];
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  u32 (*pauVar21) [8];
  u8 *puVar22;
  u32 *color_effects_disable;
  uint *puVar23;
  u32 *blend_enable_1;
  u8 *puVar24;
  u32 *blend_a;
  u8 *puVar25;
  u32 *blend_b;
  u8 *puVar26;
  u32 *_blend_enable;
  int iVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  bool bVar31;
  bool bVar32;
  u32 active_layers_b;
  u32 (*select_first) [8];
  u32 (*select_sets) [8];
  u32 (*local_48) [8];
  uint local_34;
  uint local_30;
  
  puVar22 = aligned_storage + 4000;
  select_sets_00 = (u32 (*) [8])(aligned_storage + 0x10c0);
  if ((color_effects_flags & 7) == 0) {
    pauVar14 = (u32 (*) [8])(aligned_storage + 0x10c0);
    render_scanline_priority_encode_single(video_2d,aligned_storage + 0xda0,pauVar14);
    if ((color_effects_flags & 8) == 0) {
      render_scanline_select_pixels
                (video_2d,dest,select_sets_00,layer_buffer_ptrs,(u32 *)active_layers_b,(u8 *)0x0,
                 active_layers);
      return;
    }
    puVar13 = aligned_storage + 0x1480;
    render_scanline_select_pixels
              (video_2d,aligned_storage + 0x1180,pauVar14,layer_buffer_ptrs,(u32 *)active_layers_b,
               (u8 *)0x0,active_layers);
    render_scanline_select_blend_enable(puVar13,pauVar14,active_layers,blend_control & 0x3f);
    if (puVar22 < aligned_storage + 0x1490 && puVar13 < aligned_storage + 0xfb0) {
      *(uint *)(aligned_storage + 0x1480) =
           *(uint *)(aligned_storage + 0x1480) & ~*(uint *)(aligned_storage + 4000);
      *(uint *)(aligned_storage + 0x1484) =
           *(uint *)(aligned_storage + 0x1484) & ~*(uint *)(aligned_storage + 0xfa4);
      *(uint *)(aligned_storage + 0x1488) =
           *(uint *)(aligned_storage + 0x1488) & ~*(uint *)(aligned_storage + 0xfa8);
      *(uint *)(aligned_storage + 0x148c) =
           *(uint *)(aligned_storage + 0x148c) & ~*(uint *)(aligned_storage + 0xfac);
      *(uint *)(aligned_storage + 0x1490) =
           *(uint *)(aligned_storage + 0x1490) & ~*(uint *)(aligned_storage + 0xfb0);
      *(uint *)(aligned_storage + 0x1494) =
           *(uint *)(aligned_storage + 0x1494) & ~*(uint *)(aligned_storage + 0xfb4);
      *(uint *)(aligned_storage + 0x1498) =
           *(uint *)(aligned_storage + 0x1498) & ~*(uint *)(aligned_storage + 0xfb8);
      *(uint *)(aligned_storage + 0x149c) =
           *(uint *)(aligned_storage + 0x149c) & ~*(uint *)(aligned_storage + 0xfbc);
    }
    else {
      uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
      uVar18 = uVar16;
      if (uVar16 == 0) {
        iVar12 = 8;
        iVar19 = 2;
        iVar27 = iVar12;
        iVar28 = iVar12;
      }
      else {
        *(uint *)(aligned_storage + 0x1480) =
             *(uint *)(aligned_storage + 0x1480) & ~*(uint *)(aligned_storage + 4000);
        if (uVar16 == 1) {
          iVar12 = 7;
        }
        else {
          *(uint *)(aligned_storage + 0x1484) =
               *(uint *)(aligned_storage + 0x1484) & ~*(uint *)(aligned_storage + 0xfa4);
          if (uVar16 == 3) {
            iVar12 = 5;
            *(uint *)(aligned_storage + 0x1488) =
                 *(uint *)(aligned_storage + 0x1488) & ~*(uint *)(aligned_storage + 0xfa8);
          }
          else {
            iVar12 = 6;
            uVar18 = 2;
          }
        }
        iVar19 = 1;
        iVar27 = 4;
        iVar28 = 8 - uVar16;
      }
      puVar20 = (uint *)(puVar13 + uVar16 * 4);
      puVar17 = (uint *)(puVar22 + uVar16 * 4);
      uVar16 = puVar17[1];
      uVar2 = puVar17[2];
      uVar3 = puVar17[3];
      *puVar20 = *puVar20 & ~*puVar17;
      puVar20[1] = puVar20[1] & ~uVar16;
      puVar20[4] = puVar20[2] & ~uVar2;
      puVar20[5] = puVar20[3] & ~uVar3;
      if (iVar19 == 2) {
        uVar16 = puVar17[5];
        uVar2 = puVar17[6];
        uVar3 = puVar17[7];
        puVar20[4] = puVar20[4] & ~puVar17[4];
        puVar20[5] = puVar20[5] & ~uVar16;
        puVar20[8] = puVar20[6] & ~uVar2;
        puVar20[9] = puVar20[7] & ~uVar3;
      }
      iVar19 = iVar27 + uVar18;
      if (iVar27 != iVar28) {
        iVar28 = iVar19 + 1;
        *(uint *)(puVar13 + iVar19 * 4) =
             *(uint *)(puVar13 + iVar19 * 4) & ~*(uint *)(puVar22 + iVar19 * 4);
        if (iVar12 - iVar27 != 1) {
          iVar19 = iVar19 + 2;
          *(uint *)(puVar13 + iVar28 * 4) =
               *(uint *)(puVar13 + iVar28 * 4) & ~*(uint *)(puVar22 + iVar28 * 4);
          if (iVar12 - iVar27 != 2) {
            *(uint *)(puVar13 + iVar19 * 4) =
                 *(uint *)(puVar13 + iVar19 * 4) & ~*(uint *)(puVar22 + iVar19 * 4);
          }
        }
      }
    }
    render_scanline_shade(video_2d,dest,aligned_storage + 0x1180,puVar13);
    return;
  }
  puVar13 = aligned_storage + 0x11c0;
  puVar25 = aligned_storage + 0x1b60;
  puVar24 = aligned_storage + 0x1b40;
  puVar26 = aligned_storage + 0x1b80;
  select_second = (u32 (*) [8])(aligned_storage + 0x1540);
  if (active_layers == 0) {
    local_34 = active_layers;
  }
  else if ((video_2d->layer_order[0] & 4) == 0) {
    local_34 = active_layers & ~(1 << video_2d->layer_order[0]) & blend_control >> 8;
  }
  else {
    local_34 = active_layers & blend_control >> 8;
  }
  local_30 = blend_control >> 8;
  render_scanline_priority_encode_double
            (video_2d,aligned_storage + 0xda0,aligned_storage + 0x13c0,aligned_storage + 0x1480);
  local_48 = (u32 (*) [8])(color_effects_flags & 8);
  if (local_48 == (u32 (*) [8])0x0) {
    render_scanline_select_pixels
              (video_2d,aligned_storage + 0x1540,(u32 (*) [8])(aligned_storage + 0x13c0),
               layer_buffer_ptrs,(u32 *)active_layers_b,pixel_alpha,active_layers);
  }
  else {
    render_scanline_select_pixels
              (video_2d,aligned_storage + 0x1540,(u32 (*) [8])(aligned_storage + 0x13c0),
               layer_buffer_ptrs,(u32 *)active_layers_b,(u8 *)0x0,active_layers);
  }
  render_scanline_select_pixels
            (video_2d,aligned_storage + 0x1840,(u32 (*) [8])(aligned_storage + 0x1480),
             layer_buffer_ptrs,(u32 *)active_layers_b,(u8 *)0x0,local_34);
  render_scanline_select_blend_enable
            (puVar24,aligned_storage + 0x13c0,active_layers,blend_control & 0x3f);
  render_scanline_select_blend_enable
            (puVar25,aligned_storage + 0x1480,active_layers,local_30 & 0x3f);
  if (puVar24 < aligned_storage + 0xfb0 && puVar22 < aligned_storage + 0x1b50) {
    *(uint *)(aligned_storage + 0x1b40) =
         *(uint *)(aligned_storage + 0x1b40) & ~*(uint *)(aligned_storage + 4000);
    *(uint *)(aligned_storage + 0x1b44) =
         *(uint *)(aligned_storage + 0x1b44) & ~*(uint *)(aligned_storage + 0xfa4);
    *(uint *)(aligned_storage + 0x1b48) =
         *(uint *)(aligned_storage + 0x1b48) & ~*(uint *)(aligned_storage + 0xfa8);
    *(uint *)(aligned_storage + 0x1b4c) =
         *(uint *)(aligned_storage + 0x1b4c) & ~*(uint *)(aligned_storage + 0xfac);
    *(uint *)(aligned_storage + 0x1b50) =
         *(uint *)(aligned_storage + 0x1b50) & ~*(uint *)(aligned_storage + 0xfb0);
    *(uint *)(aligned_storage + 0x1b54) =
         *(uint *)(aligned_storage + 0x1b54) & ~*(uint *)(aligned_storage + 0xfb4);
    *(uint *)(aligned_storage + 7000) =
         *(uint *)(aligned_storage + 7000) & ~*(uint *)(aligned_storage + 0xfb8);
    *(uint *)(aligned_storage + 0x1b5c) =
         *(uint *)(aligned_storage + 0x1b5c) & ~*(uint *)(aligned_storage + 0xfbc);
  }
  else {
    uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
    uVar18 = uVar16;
    if (uVar16 == 0) {
      iVar12 = 8;
      iVar19 = 2;
      iVar27 = iVar12;
      iVar28 = iVar12;
    }
    else {
      *(uint *)(aligned_storage + 0x1b40) =
           *(uint *)(aligned_storage + 0x1b40) & ~*(uint *)(aligned_storage + 4000);
      if (uVar16 == 1) {
        iVar27 = 7;
      }
      else {
        *(uint *)(aligned_storage + 0x1b44) =
             *(uint *)(aligned_storage + 0x1b44) & ~*(uint *)(aligned_storage + 0xfa4);
        if (uVar16 == 3) {
          iVar27 = 5;
          *(uint *)(aligned_storage + 0x1b48) =
               *(uint *)(aligned_storage + 0x1b48) & ~*(uint *)(aligned_storage + 0xfa8);
        }
        else {
          iVar27 = 6;
          uVar18 = 2;
        }
      }
      iVar12 = 4;
      iVar19 = 1;
      iVar28 = 8 - uVar16;
    }
    puVar20 = (uint *)(puVar24 + uVar16 * 4);
    puVar17 = (uint *)(puVar22 + uVar16 * 4);
    uVar16 = puVar17[1];
    uVar2 = puVar17[2];
    uVar3 = puVar17[3];
    *puVar20 = *puVar20 & ~*puVar17;
    puVar20[1] = puVar20[1] & ~uVar16;
    puVar20[4] = puVar20[2] & ~uVar2;
    puVar20[5] = puVar20[3] & ~uVar3;
    if (iVar19 == 2) {
      uVar16 = puVar17[5];
      uVar2 = puVar17[6];
      uVar3 = puVar17[7];
      puVar20[4] = puVar20[4] & ~puVar17[4];
      puVar20[5] = puVar20[5] & ~uVar16;
      puVar20[8] = puVar20[6] & ~uVar2;
      puVar20[9] = puVar20[7] & ~uVar3;
    }
    iVar19 = iVar12 + uVar18;
    if (iVar12 != iVar28) {
      iVar28 = iVar19 + 1;
      *(uint *)(puVar24 + iVar19 * 4) =
           *(uint *)(puVar24 + iVar19 * 4) & ~*(uint *)(puVar22 + iVar19 * 4);
      if (iVar27 - iVar12 != 1) {
        iVar19 = iVar19 + 2;
        *(uint *)(puVar24 + iVar28 * 4) =
             *(uint *)(puVar24 + iVar28 * 4) & ~*(uint *)(puVar22 + iVar28 * 4);
        if (iVar27 - iVar12 != 2) {
          *(uint *)(puVar24 + iVar19 * 4) =
               *(uint *)(puVar24 + iVar19 * 4) & ~*(uint *)(puVar22 + iVar19 * 4);
        }
      }
    }
  }
  uVar18 = color_effects_flags & 5;
  puVar22 = aligned_storage + 0xec0;
  if (uVar18 == 4) {
    *(uint *)(aligned_storage + 0x1b80) =
         *(uint *)(aligned_storage + 0x1b40) & *(uint *)(aligned_storage + 0x1b60);
    *(uint *)(aligned_storage + 0x1b84) =
         *(uint *)(aligned_storage + 0x1b64) & *(uint *)(aligned_storage + 0x1b44);
    *(uint *)(aligned_storage + 0x1b88) =
         *(uint *)(aligned_storage + 0x1b68) & *(uint *)(aligned_storage + 0x1b48);
    *(uint *)(aligned_storage + 0x1b8c) =
         *(uint *)(aligned_storage + 0x1b6c) & *(uint *)(aligned_storage + 0x1b4c);
    *(uint *)(aligned_storage + 0x1b90) =
         *(uint *)(aligned_storage + 0x1b50) & *(uint *)(aligned_storage + 0x1b70);
    *(uint *)(aligned_storage + 0x1b94) =
         *(uint *)(aligned_storage + 0x1b54) & *(uint *)(aligned_storage + 0x1b74);
    *(uint *)(aligned_storage + 0x1b98) =
         *(uint *)(aligned_storage + 0x1b78) & *(uint *)(aligned_storage + 7000);
    *(uint *)(aligned_storage + 0x1b9c) =
         *(uint *)(aligned_storage + 0x1b7c) & *(uint *)(aligned_storage + 0x1b5c);
LAB_08049c48:
    if ((color_effects_flags & 0x10) != 0) {
      if (puVar26 < aligned_storage + 0x13d0 && aligned_storage + 0x13c0 < aligned_storage + 0x1b90)
      {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1b80) & ~*(uint *)(aligned_storage + 0x13c0);
        *(uint *)(aligned_storage + 0x1b84) =
             *(uint *)(aligned_storage + 0x1b84) & ~*(uint *)(aligned_storage + 0x13c4);
        *(uint *)(aligned_storage + 0x1b88) =
             *(uint *)(aligned_storage + 0x1b88) & ~*(uint *)(aligned_storage + 0x13c8);
        *(uint *)(aligned_storage + 0x1b8c) =
             *(uint *)(aligned_storage + 0x1b8c) & ~*(uint *)(aligned_storage + 0x13cc);
        *(uint *)(aligned_storage + 0x1b90) =
             *(uint *)(aligned_storage + 0x1b90) & ~*(uint *)(aligned_storage + 0x13d0);
        *(uint *)(aligned_storage + 0x1b94) =
             *(uint *)(aligned_storage + 0x1b94) & ~*(uint *)(aligned_storage + 0x13d4);
        *(uint *)(aligned_storage + 0x1b98) =
             *(uint *)(aligned_storage + 0x1b98) & ~*(uint *)(aligned_storage + 0x13d8);
        *(uint *)(aligned_storage + 0x1b9c) =
             *(uint *)(aligned_storage + 0x1b9c) & ~*(uint *)(aligned_storage + 0x13dc);
      }
      else {
        uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
        uVar18 = uVar16;
        if (uVar16 == 0) {
          iVar12 = 8;
          iVar19 = 2;
          iVar27 = iVar12;
          iVar28 = iVar12;
        }
        else {
          *(uint *)(aligned_storage + 0x1b80) =
               *(uint *)(aligned_storage + 0x1b80) & ~*(uint *)(aligned_storage + 0x13c0);
          if (uVar16 == 1) {
            iVar12 = 7;
          }
          else {
            *(uint *)(aligned_storage + 0x1b84) =
                 *(uint *)(aligned_storage + 0x1b84) & ~*(uint *)(aligned_storage + 0x13c4);
            if (uVar16 == 3) {
              iVar12 = 5;
              *(uint *)(aligned_storage + 0x1b88) =
                   *(uint *)(aligned_storage + 0x1b88) & ~*(uint *)(aligned_storage + 0x13c8);
            }
            else {
              iVar12 = 6;
              uVar18 = 2;
            }
          }
          iVar19 = 1;
          iVar27 = 4;
          iVar28 = 8 - uVar16;
        }
        puVar20 = (uint *)(puVar26 + uVar16 * 4);
        puVar17 = (uint *)(aligned_storage + uVar16 * 4 + 0x13c0);
        uVar16 = puVar17[1];
        uVar2 = puVar17[2];
        uVar3 = puVar17[3];
        *puVar20 = *puVar20 & ~*puVar17;
        puVar20[1] = puVar20[1] & ~uVar16;
        puVar20[4] = puVar20[2] & ~uVar2;
        puVar20[5] = puVar20[3] & ~uVar3;
        if (iVar19 == 2) {
          uVar16 = puVar17[5];
          uVar2 = puVar17[6];
          uVar3 = puVar17[7];
          puVar20[4] = puVar20[4] & ~puVar17[4];
          puVar20[5] = puVar20[5] & ~uVar16;
          puVar20[8] = puVar20[6] & ~uVar2;
          puVar20[9] = puVar20[7] & ~uVar3;
        }
        iVar19 = iVar27 + uVar18;
        if (iVar27 != iVar28) {
          iVar28 = iVar19 + 1;
          *(uint *)(puVar26 + iVar19 * 4) =
               *(uint *)(puVar26 + iVar19 * 4) & ~*(uint *)(aligned_storage + iVar19 * 4 + 0x13c0);
          if (iVar12 - iVar27 != 1) {
            iVar19 = iVar19 + 2;
            *(uint *)(puVar26 + iVar28 * 4) =
                 *(uint *)(puVar26 + iVar28 * 4) & ~*(uint *)(aligned_storage + iVar28 * 4 + 0x13c0)
            ;
            if (iVar12 - iVar27 != 2) {
              *(uint *)(puVar26 + iVar19 * 4) =
                   *(uint *)(puVar26 + iVar19 * 4) &
                   ~*(uint *)(aligned_storage + iVar19 * 4 + 0x13c0);
            }
          }
        }
      }
      color_effects_flags = color_effects_flags & 0xffffffef;
    }
    puVar22 = puVar26;
    if ((color_effects_flags & 0x20) == 0) {
      local_48 = (u32 (*) [8])(color_effects_flags & 8);
    }
    else {
      if (puVar26 < aligned_storage + 0x1450 && aligned_storage + 0x1440 < aligned_storage + 0x1b90)
      {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1b80) & ~*(uint *)(aligned_storage + 0x1440);
        *(uint *)(aligned_storage + 0x1b84) =
             *(uint *)(aligned_storage + 0x1b84) & ~*(uint *)(aligned_storage + 0x1444);
        *(uint *)(aligned_storage + 0x1b88) =
             *(uint *)(aligned_storage + 0x1b88) & ~*(uint *)(aligned_storage + 0x1448);
        *(uint *)(aligned_storage + 0x1b8c) =
             *(uint *)(aligned_storage + 0x1b8c) & ~*(uint *)(aligned_storage + 0x144c);
        *(uint *)(aligned_storage + 0x1b90) =
             *(uint *)(aligned_storage + 0x1b90) & ~*(uint *)(aligned_storage + 0x1450);
        *(uint *)(aligned_storage + 0x1b94) =
             *(uint *)(aligned_storage + 0x1b94) & ~*(uint *)(aligned_storage + 0x1454);
        *(uint *)(aligned_storage + 0x1b98) =
             *(uint *)(aligned_storage + 0x1b98) & ~*(uint *)(aligned_storage + 0x1458);
        *(uint *)(aligned_storage + 0x1b9c) =
             *(uint *)(aligned_storage + 0x1b9c) & ~*(uint *)(aligned_storage + 0x145c);
      }
      else {
        uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
        uVar18 = uVar16;
        if (uVar16 == 0) {
          iVar12 = 8;
          iVar19 = 2;
          iVar27 = iVar12;
          iVar28 = iVar12;
        }
        else {
          *(uint *)(aligned_storage + 0x1b80) =
               *(uint *)(aligned_storage + 0x1b80) & ~*(uint *)(aligned_storage + 0x1440);
          if (uVar16 == 1) {
            iVar12 = 7;
          }
          else {
            *(uint *)(aligned_storage + 0x1b84) =
                 *(uint *)(aligned_storage + 0x1b84) & ~*(uint *)(aligned_storage + 0x1444);
            if (uVar16 == 3) {
              iVar12 = 5;
              *(uint *)(aligned_storage + 0x1b88) =
                   *(uint *)(aligned_storage + 0x1b88) & ~*(uint *)(aligned_storage + 0x1448);
            }
            else {
              iVar12 = 6;
              uVar18 = 2;
            }
          }
          iVar19 = 1;
          iVar27 = 4;
          iVar28 = 8 - uVar16;
        }
        puVar20 = (uint *)(puVar26 + uVar16 * 4);
        puVar17 = (uint *)(aligned_storage + uVar16 * 4 + 0x1440);
        uVar16 = puVar17[1];
        uVar2 = puVar17[2];
        uVar3 = puVar17[3];
        *puVar20 = *puVar20 & ~*puVar17;
        puVar20[1] = puVar20[1] & ~uVar16;
        puVar20[4] = puVar20[2] & ~uVar2;
        puVar20[5] = puVar20[3] & ~uVar3;
        if (iVar19 == 2) {
          uVar16 = puVar17[5];
          uVar2 = puVar17[6];
          uVar3 = puVar17[7];
          puVar20[4] = puVar20[4] & ~puVar17[4];
          puVar20[5] = puVar20[5] & ~uVar16;
          puVar20[8] = puVar20[6] & ~uVar2;
          puVar20[9] = puVar20[7] & ~uVar3;
        }
        iVar19 = uVar18 + iVar27;
        if (iVar27 != iVar28) {
          iVar28 = iVar19 + 1;
          *(uint *)(puVar26 + iVar19 * 4) =
               *(uint *)(puVar26 + iVar19 * 4) & ~*(uint *)(aligned_storage + iVar19 * 4 + 0x1440);
          if (iVar12 - iVar27 != 1) {
            iVar19 = iVar19 + 2;
            *(uint *)(puVar26 + iVar28 * 4) =
                 *(uint *)(puVar26 + iVar28 * 4) & ~*(uint *)(aligned_storage + iVar28 * 4 + 0x1440)
            ;
            if (iVar12 - iVar27 != 2) {
              *(uint *)(puVar26 + iVar19 * 4) =
                   *(uint *)(puVar26 + iVar19 * 4) &
                   ~*(uint *)(aligned_storage + iVar19 * 4 + 0x1440);
            }
          }
        }
      }
      local_48 = (u32 (*) [8])(color_effects_flags & 8);
      color_effects_flags = color_effects_flags & 0xffffffdf;
    }
  }
  else {
    if (uVar18 == 5) {
      puVar15 = aligned_storage + 0x1b90;
      bVar32 = puVar26 <= aligned_storage + 0x1450;
      bVar31 = aligned_storage + 0x1450 == puVar26;
      if (bVar32 && !bVar31) {
        bVar32 = aligned_storage + 0x1440 <= puVar15;
        bVar31 = puVar15 == aligned_storage + 0x1440;
      }
      if (((puVar24 < puVar15 && puVar26 < aligned_storage + 0x1b50 ||
           puVar25 < puVar15 && puVar26 < aligned_storage + 0x1b70) ||
          puVar26 < aligned_storage + 0xed0 && puVar22 < puVar15) || bVar32 && !bVar31) {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1b60) &
             (*(uint *)(aligned_storage + 0x1440) & *(uint *)(aligned_storage + 0xec0) |
             *(uint *)(aligned_storage + 0x1b40));
        *(uint *)(aligned_storage + 0x1b84) =
             *(uint *)(aligned_storage + 0x1b64) &
             (*(uint *)(aligned_storage + 0x1444) & *(uint *)(aligned_storage + 0xec4) |
             *(uint *)(aligned_storage + 0x1b44));
        *(uint *)(aligned_storage + 0x1b88) =
             *(uint *)(aligned_storage + 0x1b68) &
             (*(uint *)(aligned_storage + 0x1448) & *(uint *)(aligned_storage + 0xec8) |
             *(uint *)(aligned_storage + 0x1b48));
        *(uint *)(aligned_storage + 0x1b8c) =
             *(uint *)(aligned_storage + 0x1b6c) &
             (*(uint *)(aligned_storage + 0x144c) & *(uint *)(aligned_storage + 0xecc) |
             *(uint *)(aligned_storage + 0x1b4c));
        *(uint *)(aligned_storage + 0x1b90) =
             *(uint *)(aligned_storage + 0x1b70) &
             (*(uint *)(aligned_storage + 0x1450) & *(uint *)(aligned_storage + 0xed0) |
             *(uint *)(aligned_storage + 0x1b50));
        *(uint *)(aligned_storage + 0x1b94) =
             *(uint *)(aligned_storage + 0x1b74) &
             (*(uint *)(aligned_storage + 0x1454) & *(uint *)(aligned_storage + 0xed4) |
             *(uint *)(aligned_storage + 0x1b54));
        *(uint *)(aligned_storage + 0x1b98) =
             *(uint *)(aligned_storage + 0x1b78) &
             (*(uint *)(aligned_storage + 0x1458) & *(uint *)(aligned_storage + 0xed8) |
             *(uint *)(aligned_storage + 7000));
        *(uint *)(aligned_storage + 0x1b9c) =
             *(uint *)(aligned_storage + 0x1b7c) &
             (*(uint *)(aligned_storage + 0x145c) & *(uint *)(aligned_storage + 0xedc) |
             *(uint *)(aligned_storage + 0x1b5c));
      }
      else {
        pauVar14 = (u32 (*) [8])(((int)aligned_storage << 0x1d) >> 0x1f & 3);
        select_first = pauVar14;
        if (pauVar14 == (u32 (*) [8])0x0) {
          iVar28 = 8;
          iVar12 = 2;
          local_48 = (u32 (*) [8])0x8;
          iVar27 = iVar28;
        }
        else {
          *(uint *)(aligned_storage + 0x1b80) =
               *(uint *)(aligned_storage + 0x1b60) &
               (*(uint *)(aligned_storage + 0x1440) & *(uint *)(aligned_storage + 0xec0) |
               *(uint *)(aligned_storage + 0x1b40));
          if (pauVar14 == (u32 (*) [8])0x1) {
            iVar27 = 7;
          }
          else {
            *(uint *)(aligned_storage + 0x1b84) =
                 *(uint *)(aligned_storage + 0x1b64) &
                 (*(uint *)(aligned_storage + 0x1444) & *(uint *)(aligned_storage + 0xec4) |
                 *(uint *)(aligned_storage + 0x1b44));
            if (pauVar14 == (u32 (*) [8])0x3) {
              *(uint *)(aligned_storage + 0x1b88) =
                   (*(uint *)(aligned_storage + 0x1448) & *(uint *)(aligned_storage + 0xec8) |
                   *(uint *)(aligned_storage + 0x1b48)) & *(uint *)(aligned_storage + 0x1b68);
              iVar27 = 5;
            }
            else {
              iVar27 = 6;
              select_first = (u32 (*) [8])0x2;
            }
          }
          local_48 = (u32 (*) [8])(8 - (int)pauVar14);
          iVar12 = 1;
          iVar28 = 4;
        }
        iVar19 = (int)pauVar14 * 4;
        puVar20 = (uint *)(puVar22 + iVar19);
        puVar29 = (uint *)(aligned_storage + iVar19 + 0x1440);
        puVar30 = (uint *)(puVar24 + iVar19);
        uVar9 = puVar20[1];
        uVar10 = puVar20[2];
        uVar11 = puVar20[3];
        puVar23 = (uint *)(puVar25 + iVar19);
        puVar17 = (uint *)(puVar26 + iVar19);
        uVar6 = puVar29[1];
        uVar7 = puVar29[2];
        uVar8 = puVar29[3];
        uVar3 = puVar30[1];
        uVar4 = puVar30[2];
        uVar5 = puVar30[3];
        uVar18 = puVar23[1];
        uVar16 = puVar23[2];
        uVar2 = puVar23[3];
        *puVar17 = (*puVar20 & *puVar29 | *puVar30) & *puVar23;
        puVar17[1] = (uVar9 & uVar6 | uVar3) & uVar18;
        puVar17[4] = (uVar10 & uVar7 | uVar4) & uVar16;
        puVar17[5] = (uVar11 & uVar8 | uVar5) & uVar2;
        if (iVar12 == 2) {
          uVar18 = puVar23[5];
          uVar16 = puVar23[6];
          uVar2 = puVar23[7];
          uVar9 = puVar20[5];
          uVar10 = puVar20[6];
          uVar11 = puVar20[7];
          uVar6 = puVar29[5];
          uVar7 = puVar29[6];
          uVar8 = puVar29[7];
          uVar3 = puVar30[5];
          uVar4 = puVar30[6];
          uVar5 = puVar30[7];
          puVar17[4] = (puVar20[4] & puVar29[4] | puVar30[4]) & puVar23[4];
          puVar17[5] = (uVar9 & uVar6 | uVar3) & uVar18;
          puVar17[8] = (uVar10 & uVar7 | uVar4) & uVar16;
          puVar17[9] = (uVar11 & uVar8 | uVar5) & uVar2;
        }
        iVar12 = (int)*select_first + iVar28;
        if (local_48 != (u32 (*) [8])iVar28) {
          iVar19 = iVar12 + 1;
          *(uint *)(puVar26 + iVar12 * 4) =
               (*(uint *)(aligned_storage + iVar12 * 4 + 0x1440) & *(uint *)(puVar22 + iVar12 * 4) |
               *(uint *)(puVar24 + iVar12 * 4)) & *(uint *)(puVar25 + iVar12 * 4);
          if (iVar27 - iVar28 != 1) {
            iVar12 = iVar12 + 2;
            *(uint *)(puVar26 + iVar19 * 4) =
                 *(uint *)(puVar25 + iVar19 * 4) &
                 (*(uint *)(aligned_storage + iVar19 * 4 + 0x1440) & *(uint *)(puVar22 + iVar19 * 4)
                 | *(uint *)(puVar24 + iVar19 * 4));
            if (iVar27 - iVar28 != 2) {
              *(uint *)(puVar26 + iVar12 * 4) =
                   *(uint *)(puVar25 + iVar12 * 4) &
                   (*(uint *)(aligned_storage + iVar12 * 4 + 0x1440) &
                    *(uint *)(puVar22 + iVar12 * 4) | *(uint *)(puVar24 + iVar12 * 4));
            }
          }
        }
      }
      color_effects_flags = color_effects_flags & 0xfffffffe;
LAB_08049c38:
      if (puVar26 != (u8 *)0x0) goto LAB_08049c48;
      local_48 = (u32 (*) [8])(color_effects_flags & 8);
    }
    else if (uVar18 == 1) {
      puVar15 = aligned_storage + 0x1b90;
      bVar32 = puVar26 <= aligned_storage + 0x1450;
      bVar31 = aligned_storage + 0x1450 == puVar26;
      if (bVar32 && !bVar31) {
        bVar32 = aligned_storage + 0x1440 <= puVar15;
        bVar31 = puVar15 == aligned_storage + 0x1440;
      }
      if ((puVar26 < aligned_storage + 0xed0 && puVar22 < puVar15 ||
          puVar25 < puVar15 && puVar26 < aligned_storage + 0x1b70) || bVar32 && !bVar31) {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1440) &
             *(uint *)(aligned_storage + 0xec0) & *(uint *)(aligned_storage + 0x1b60);
        *(uint *)(aligned_storage + 0x1b84) =
             *(uint *)(aligned_storage + 0x1444) &
             *(uint *)(aligned_storage + 0xec4) & *(uint *)(aligned_storage + 0x1b64);
        *(uint *)(aligned_storage + 0x1b88) =
             *(uint *)(aligned_storage + 0x1448) &
             *(uint *)(aligned_storage + 0xec8) & *(uint *)(aligned_storage + 0x1b68);
        *(uint *)(aligned_storage + 0x1b8c) =
             *(uint *)(aligned_storage + 0x144c) &
             *(uint *)(aligned_storage + 0xecc) & *(uint *)(aligned_storage + 0x1b6c);
        *(uint *)(aligned_storage + 0x1b90) =
             *(uint *)(aligned_storage + 0x1450) &
             *(uint *)(aligned_storage + 0xed0) & *(uint *)(aligned_storage + 0x1b70);
        *(uint *)(aligned_storage + 0x1b94) =
             *(uint *)(aligned_storage + 0x1454) &
             *(uint *)(aligned_storage + 0xed4) & *(uint *)(aligned_storage + 0x1b74);
        *(uint *)(aligned_storage + 0x1b98) =
             *(uint *)(aligned_storage + 0x1458) &
             *(uint *)(aligned_storage + 0xed8) & *(uint *)(aligned_storage + 0x1b78);
        *(uint *)(aligned_storage + 0x1b9c) =
             *(uint *)(aligned_storage + 0x145c) &
             *(uint *)(aligned_storage + 0xedc) & *(uint *)(aligned_storage + 0x1b7c);
      }
      else {
        uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
        uVar18 = uVar16;
        if (uVar16 == 0) {
          pauVar21 = (u32 (*) [8])0x8;
          iVar27 = 2;
          select_first = (u32 (*) [8])0x8;
          pauVar14 = pauVar21;
        }
        else {
          *(uint *)(aligned_storage + 0x1b80) =
               *(uint *)(aligned_storage + 0x1440) &
               *(uint *)(aligned_storage + 0xec0) & *(uint *)(aligned_storage + 0x1b60);
          if (uVar16 == 1) {
            pauVar21 = (u32 (*) [8])0x7;
          }
          else {
            *(uint *)(aligned_storage + 0x1b84) =
                 *(uint *)(aligned_storage + 0x1444) &
                 *(uint *)(aligned_storage + 0xec4) & *(uint *)(aligned_storage + 0x1b64);
            if (uVar16 == 3) {
              pauVar21 = (u32 (*) [8])0x5;
              *(uint *)(aligned_storage + 0x1b88) =
                   *(uint *)(aligned_storage + 0xec8) & *(uint *)(aligned_storage + 0x1b68) &
                   *(uint *)(aligned_storage + 0x1448);
            }
            else {
              pauVar21 = (u32 (*) [8])0x6;
              uVar18 = 2;
            }
          }
          select_first = (u32 (*) [8])(8 - uVar16);
          iVar27 = 1;
          pauVar14 = (u32 (*) [8])0x4;
        }
        iVar28 = uVar16 * 4;
        puVar23 = (uint *)(puVar25 + iVar28);
        puVar29 = (uint *)(puVar22 + iVar28);
        puVar17 = (uint *)(puVar26 + iVar28);
        uVar4 = puVar23[1];
        uVar5 = puVar23[2];
        uVar6 = puVar23[3];
        puVar20 = (uint *)(aligned_storage + iVar28 + 0x1440);
        uVar7 = puVar29[1];
        uVar8 = puVar29[2];
        uVar9 = puVar29[3];
        uVar16 = puVar20[1];
        uVar2 = puVar20[2];
        uVar3 = puVar20[3];
        *puVar17 = *puVar29 & *puVar23 & *puVar20;
        puVar17[1] = uVar7 & uVar4 & uVar16;
        puVar17[4] = uVar8 & uVar5 & uVar2;
        puVar17[5] = uVar9 & uVar6 & uVar3;
        if (iVar27 == 2) {
          uVar4 = puVar23[5];
          uVar5 = puVar23[6];
          uVar6 = puVar23[7];
          uVar7 = puVar29[5];
          uVar8 = puVar29[6];
          uVar9 = puVar29[7];
          uVar16 = puVar20[5];
          uVar2 = puVar20[6];
          uVar3 = puVar20[7];
          puVar17[4] = puVar29[4] & puVar23[4] & puVar20[4];
          puVar17[5] = uVar7 & uVar4 & uVar16;
          puVar17[8] = uVar8 & uVar5 & uVar2;
          puVar17[9] = uVar9 & uVar6 & uVar3;
        }
        iVar27 = (int)*pauVar14 + uVar18;
        if (pauVar14 != select_first) {
          iVar28 = iVar27 + 1;
          *(uint *)(puVar26 + iVar27 * 4) =
               *(uint *)(aligned_storage + iVar27 * 4 + 0x1440) &
               *(uint *)(puVar25 + iVar27 * 4) & *(uint *)(puVar22 + iVar27 * 4);
          if ((int)pauVar21 - (int)pauVar14 != 1) {
            iVar27 = iVar27 + 2;
            *(uint *)(puVar26 + iVar28 * 4) =
                 *(uint *)(aligned_storage + iVar28 * 4 + 0x1440) &
                 *(uint *)(puVar25 + iVar28 * 4) & *(uint *)(puVar22 + iVar28 * 4);
            if ((int)pauVar21 - (int)pauVar14 != 2) {
              *(uint *)(puVar26 + iVar27 * 4) =
                   *(uint *)(aligned_storage + iVar27 * 4 + 0x1440) &
                   *(uint *)(puVar22 + iVar27 * 4) & *(uint *)(puVar25 + iVar27 * 4);
            }
          }
        }
      }
      color_effects_flags = color_effects_flags & 0xfffffffe | 4;
      goto LAB_08049c38;
    }
    puVar22 = (u8 *)0x0;
  }
  if (local_48 == (u32 (*) [8])0x0) {
    if ((color_effects_flags & 4) == 0) {
      select_first = local_48;
    }
    else {
      render_scanline_color_effects_setup_blend_base
                (video_2d->blend_alpha,aligned_storage + 0x10c0,aligned_storage + 0x11c0,puVar22);
      select_first = (u32 (*) [8])0x1;
    }
    puVar22 = pixel_alpha;
    if (pixel_alpha != (u8 *)0x0) {
      puVar22 = (u8 *)0x1;
    }
    if (((uint)puVar22 & color_effects_flags >> 1) == 0) goto LAB_080499c8;
    bVar31 = false;
LAB_080493ec:
    puVar22 = aligned_storage + 0x1b90;
    puVar24 = aligned_storage + 0xee0;
    if (puVar26 < aligned_storage + 0x1b70 && puVar25 < puVar22 ||
        puVar24 < puVar22 && puVar26 < aligned_storage + 0x1450) {
      *(uint *)(aligned_storage + 0x1b80) =
           *(uint *)(aligned_storage + 0x1b60) & *(uint *)(aligned_storage + 0xee0) &
           *(uint *)(aligned_storage + 0x1440);
      *(uint *)(aligned_storage + 0x1b84) =
           *(uint *)(aligned_storage + 0x1b64) & *(uint *)(aligned_storage + 0xee4) &
           *(uint *)(aligned_storage + 0x1444);
      *(uint *)(aligned_storage + 0x1b88) =
           *(uint *)(aligned_storage + 0x1b68) & *(uint *)(aligned_storage + 0xee8) &
           *(uint *)(aligned_storage + 0x1448);
      *(uint *)(aligned_storage + 0x1b8c) =
           *(uint *)(aligned_storage + 0x1b6c) & *(uint *)(aligned_storage + 0xeec) &
           *(uint *)(aligned_storage + 0x144c);
      *(uint *)(aligned_storage + 0x1b90) =
           *(uint *)(aligned_storage + 0x1b70) & *(uint *)(aligned_storage + 0xef0) &
           *(uint *)(aligned_storage + 0x1450);
      *(uint *)(aligned_storage + 0x1b94) =
           *(uint *)(aligned_storage + 0x1b74) & *(uint *)(aligned_storage + 0xef4) &
           *(uint *)(aligned_storage + 0x1454);
      *(uint *)(aligned_storage + 0x1b98) =
           *(uint *)(aligned_storage + 0x1b78) & *(uint *)(aligned_storage + 0xef8) &
           *(uint *)(aligned_storage + 0x1458);
      *(uint *)(aligned_storage + 0x1b9c) =
           *(uint *)(aligned_storage + 0x145c) &
           *(uint *)(aligned_storage + 0x1b7c) & *(uint *)(aligned_storage + 0xefc);
    }
    else {
      uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
      uVar18 = uVar16;
      if (uVar16 == 0) {
        iVar28 = 8;
        iVar12 = 2;
        local_48 = (u32 (*) [8])0x8;
        iVar27 = iVar28;
      }
      else {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1b60) & *(uint *)(aligned_storage + 0xee0) &
             *(uint *)(aligned_storage + 0x1440);
        if (uVar16 == 1) {
          iVar28 = 7;
        }
        else {
          *(uint *)(aligned_storage + 0x1b84) =
               *(uint *)(aligned_storage + 0x1b64) & *(uint *)(aligned_storage + 0xee4) &
               *(uint *)(aligned_storage + 0x1444);
          if (uVar16 == 3) {
            iVar28 = 5;
            *(uint *)(aligned_storage + 0x1b88) =
                 *(uint *)(aligned_storage + 0xee8) & *(uint *)(aligned_storage + 0x1b68) &
                 *(uint *)(aligned_storage + 0x1448);
          }
          else {
            iVar28 = 6;
            uVar18 = 2;
          }
        }
        local_48 = (u32 (*) [8])(8 - uVar16);
        iVar12 = 1;
        iVar27 = 4;
      }
      iVar19 = (uVar16 + 0x3b8) * 4;
      puVar23 = (uint *)(aligned_storage + iVar19);
      puVar29 = (uint *)(aligned_storage + iVar19 + 0x560);
      uVar4 = puVar23[1];
      uVar5 = puVar23[2];
      uVar6 = puVar23[3];
      puVar20 = (uint *)(puVar25 + iVar19 + -0xee0);
      puVar17 = (uint *)(puVar26 + iVar19 + -0xee0);
      uVar7 = puVar29[1];
      uVar8 = puVar29[2];
      uVar9 = puVar29[3];
      uVar16 = puVar20[1];
      uVar2 = puVar20[2];
      uVar3 = puVar20[3];
      *puVar17 = *puVar29 & *puVar23 & *puVar20;
      puVar17[1] = uVar7 & uVar4 & uVar16;
      puVar17[4] = uVar8 & uVar5 & uVar2;
      puVar17[5] = uVar9 & uVar6 & uVar3;
      if (iVar12 == 2) {
        uVar4 = puVar23[5];
        uVar5 = puVar23[6];
        uVar6 = puVar23[7];
        uVar7 = puVar29[5];
        uVar8 = puVar29[6];
        uVar9 = puVar29[7];
        uVar16 = puVar20[5];
        uVar2 = puVar20[6];
        uVar3 = puVar20[7];
        puVar17[4] = puVar29[4] & puVar23[4] & puVar20[4];
        puVar17[5] = uVar7 & uVar4 & uVar16;
        puVar17[8] = uVar8 & uVar5 & uVar2;
        puVar17[9] = uVar9 & uVar6 & uVar3;
      }
      iVar12 = uVar18 + iVar27;
      if (local_48 != (u32 (*) [8])iVar27) {
        iVar19 = iVar12 + 1;
        *(uint *)(puVar26 + iVar12 * 4) =
             *(uint *)(aligned_storage + iVar12 * 4 + 0x1440) &
             *(uint *)(puVar24 + iVar12 * 4) & *(uint *)(puVar25 + iVar12 * 4);
        if (iVar28 - iVar27 != 1) {
          iVar12 = iVar12 + 2;
          *(uint *)(puVar26 + iVar19 * 4) =
               *(uint *)(aligned_storage + iVar19 * 4 + 0x1440) &
               *(uint *)(puVar24 + iVar19 * 4) & *(uint *)(puVar25 + iVar19 * 4);
          if (iVar28 - iVar27 != 2) {
            *(uint *)(puVar26 + iVar12 * 4) =
                 *(uint *)(aligned_storage + iVar12 * 4 + 0x1440) &
                 *(uint *)(puVar24 + iVar12 * 4) & *(uint *)(puVar25 + iVar12 * 4);
          }
        }
      }
    }
    if (active_layers_b != 0 && (blend_control >> 6 & 3) < 2) {
      if (puVar26 < aligned_storage + 0x1b70 && puVar25 < puVar22 ||
          puVar26 < aligned_storage + 0x13d0 && aligned_storage + 0x13c0 < puVar22) {
        *(uint *)(aligned_storage + 0x1b80) =
             *(uint *)(aligned_storage + 0x1b60) & *(uint *)(aligned_storage + 0x13c0) |
             *(uint *)(aligned_storage + 0x1b80);
        *(uint *)(aligned_storage + 0x1b84) =
             *(uint *)(aligned_storage + 0x13c4) & *(uint *)(aligned_storage + 0x1b64) |
             *(uint *)(aligned_storage + 0x1b84);
        *(uint *)(aligned_storage + 0x1b88) =
             *(uint *)(aligned_storage + 0x13c8) & *(uint *)(aligned_storage + 0x1b68) |
             *(uint *)(aligned_storage + 0x1b88);
        *(uint *)(aligned_storage + 0x1b8c) =
             *(uint *)(aligned_storage + 0x1b6c) & *(uint *)(aligned_storage + 0x13cc) |
             *(uint *)(aligned_storage + 0x1b8c);
        *(uint *)(aligned_storage + 0x1b90) =
             *(uint *)(aligned_storage + 0x13d0) & *(uint *)(aligned_storage + 0x1b70) |
             *(uint *)(aligned_storage + 0x1b90);
        *(uint *)(aligned_storage + 0x1b98) =
             *(uint *)(aligned_storage + 0x13d8) & *(uint *)(aligned_storage + 0x1b78) |
             *(uint *)(aligned_storage + 0x1b98);
        *(uint *)(aligned_storage + 0x1b94) =
             *(uint *)(aligned_storage + 0x1b74) & *(uint *)(aligned_storage + 0x13d4) |
             *(uint *)(aligned_storage + 0x1b94);
        *(uint *)(aligned_storage + 0x1b9c) =
             *(uint *)(aligned_storage + 0x1b7c) & *(uint *)(aligned_storage + 0x13dc) |
             *(uint *)(aligned_storage + 0x1b9c);
      }
      else {
        uVar16 = ((int)aligned_storage << 0x1d) >> 0x1f & 3;
        uVar18 = uVar16;
        if (uVar16 == 0) {
          iVar19 = 8;
          iVar12 = 2;
          iVar27 = iVar19;
          iVar28 = iVar19;
        }
        else {
          *(uint *)(aligned_storage + 0x1b80) =
               *(uint *)(aligned_storage + 0x1b60) & *(uint *)(aligned_storage + 0x13c0) |
               *(uint *)(aligned_storage + 0x1b80);
          if (uVar16 == 1) {
            iVar28 = 7;
          }
          else {
            *(uint *)(aligned_storage + 0x1b84) =
                 *(uint *)(aligned_storage + 0x1b64) & *(uint *)(aligned_storage + 0x13c4) |
                 *(uint *)(aligned_storage + 0x1b84);
            if (uVar16 == 3) {
              iVar28 = 5;
              *(uint *)(aligned_storage + 0x1b88) =
                   *(uint *)(aligned_storage + 0x13c8) & *(uint *)(aligned_storage + 0x1b68) |
                   *(uint *)(aligned_storage + 0x1b88);
            }
            else {
              iVar28 = 6;
              uVar18 = 2;
            }
          }
          iVar12 = 1;
          iVar19 = 4;
          iVar27 = 8 - uVar16;
        }
        iVar1 = uVar16 * 4;
        puVar23 = (uint *)(puVar25 + iVar1);
        puVar17 = (uint *)(aligned_storage + iVar1 + 0x13c0);
        puVar20 = (uint *)(puVar26 + iVar1);
        uVar16 = puVar23[1];
        uVar2 = puVar23[2];
        uVar3 = puVar23[3];
        uVar4 = puVar17[1];
        uVar5 = puVar17[2];
        uVar6 = puVar17[3];
        *puVar20 = *puVar17 & *puVar23 | *puVar20;
        puVar20[1] = uVar4 & uVar16 | puVar20[1];
        puVar20[4] = uVar5 & uVar2 | puVar20[2];
        puVar20[5] = uVar6 & uVar3 | puVar20[3];
        if (iVar12 == 2) {
          uVar4 = puVar23[5];
          uVar5 = puVar23[6];
          uVar6 = puVar23[7];
          uVar16 = puVar17[5];
          uVar2 = puVar17[6];
          uVar3 = puVar17[7];
          puVar20[4] = puVar23[4] & puVar17[4] | puVar20[4];
          puVar20[5] = uVar4 & uVar16 | puVar20[5];
          puVar20[8] = uVar5 & uVar2 | puVar20[6];
          puVar20[9] = uVar6 & uVar3 | puVar20[7];
        }
        iVar12 = uVar18 + iVar19;
        if (iVar27 != iVar19) {
          iVar27 = iVar12 + 1;
          *(uint *)(puVar26 + iVar12 * 4) =
               *(uint *)(puVar26 + iVar12 * 4) |
               *(uint *)(aligned_storage + iVar12 * 4 + 0x13c0) & *(uint *)(puVar25 + iVar12 * 4);
          if (iVar28 - iVar19 != 1) {
            iVar12 = iVar12 + 2;
            *(uint *)(puVar26 + iVar27 * 4) =
                 *(uint *)(puVar26 + iVar27 * 4) |
                 *(uint *)(aligned_storage + iVar27 * 4 + 0x13c0) & *(uint *)(puVar25 + iVar27 * 4);
            if (iVar28 - iVar19 != 2) {
              *(uint *)(puVar26 + iVar12 * 4) =
                   *(uint *)(puVar26 + iVar12 * 4) |
                   *(uint *)(aligned_storage + iVar12 * 4 + 0x13c0) &
                   *(uint *)(puVar25 + iVar12 * 4);
            }
          }
        }
      }
    }
    if (select_first == (u32 (*) [8])0x0) {
      render_scanline_color_effects_setup_alpha_base(select_sets_00,puVar13,pixel_alpha,puVar26);
    }
    else {
      render_scanline_color_effects_setup_alpha(select_sets_00,puVar13,pixel_alpha,puVar26);
    }
  }
  else {
    bVar31 = (blend_control >> 6 & 1) != 0;
    if (bVar31) {
      render_scanline_color_effects_setup_darken
                (video_2d->blend_y,aligned_storage + 0x10c0,aligned_storage + 0x11c0,puVar24);
    }
    else {
      render_scanline_color_effects_setup_brighten
                (video_2d->blend_y,aligned_storage + 0x10c0,aligned_storage + 0x11c0,
                 aligned_storage + 0x12c0,puVar24);
    }
    bVar31 = !bVar31;
    if ((color_effects_flags & 4) != 0) {
      render_scanline_color_effects_setup_blend
                (video_2d->blend_alpha,aligned_storage + 0x10c0,aligned_storage + 0x11c0,puVar22);
    }
    puVar22 = pixel_alpha;
    if (pixel_alpha != (u8 *)0x0) {
      puVar22 = (u8 *)0x1;
    }
    if (((uint)puVar22 & color_effects_flags >> 1) != 0) {
      select_first = (u32 (*) [8])0x1;
      goto LAB_080493ec;
    }
  }
  if (bVar31) {
    render_scanline_color_effects_apply_offset(dest,select_second,select_sets_00,puVar13);
    return;
  }
LAB_080499c8:
  render_scanline_color_effects_apply(dest,select_second,select_sets_00,puVar13);
  return;
}


