/*
 * Ghidra decompilation
 *
 * Function : video_2d_process_event
 * Address  : 0804e914
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable bit_shift_18:u32[r1:4] conflicts with parameter, skipped. */

void video_2d_process_event(video_2d_struct *video_2d,video_2d_event_struct *event)

{
  u32 uVar1;
  ushort uVar2;
  u16 uVar3;
  u16 *oam;
  u8 *puVar4;
  u8 *screen_ptr;
  u32 bit_shift_20;
  u32 bit_shift_21;
  u32 bit_shift_26;
  u32 bit_shift_23;
  u32 bit_shift_27;
  u32 bit_shift_28;
  u32 bit_shift_5;
  u32 bit_shift_11;
  byte bVar5;
  uint uVar6;
  u16 *puVar7;
  u16 *palette;
  video_2d_bg_layer_struct *pvVar8;
  u32 bit_shift_3;
  uint uVar9;
  u32 bit_shift;
  u32 bit_shift_1;
  u32 bit_shift_2;
  u32 bit_shift_4;
  u32 bit_shift_7;
  u32 bit_shift_8;
  u32 bit_shift_9;
  u32 bit_shift_10;
  u32 bit_shift_13;
  u32 bit_shift_15;
  u32 bit_shift_6;
  u32 bit_shift_16;
  u32 bit_shift_17;
  u32 bit_shift_19;
  int iVar10;
  u32 bit_shift_24;
  u32 bit_shift_25;
  u32 bit_shift_12;
  u32 bit_shift_22;
  uint uVar11;
  u32 value;
  system_struct *psVar12;
  system_struct *system;
  uint uVar13;
  u32 uVar14;
  u32 screen_number;
  u32 uVar15;
  u32 bg_control_1;
  u32 bg_control;
  
  uVar9 = event->address;
  uVar11 = event->value;
  uVar13 = (uint)event->byte_width;
  uVar3 = (u16)uVar11;
  if (0xfffff < uVar9) {
    if (0x1fffff < uVar9) {
      puVar7 = video_2d->oam;
      uVar9 = uVar9 & 0x3ff;
      video_2d->oam_dirty = '\x01';
      if (uVar13 == 2) {
        *(u16 *)((int)puVar7 + uVar9) = uVar3;
        return;
      }
      if (uVar13 != 4) {
        if (uVar13 != 1) {
          return;
        }
        *(char *)((int)puVar7 + uVar9) = (char)uVar11;
        return;
      }
      *(uint *)((int)puVar7 + uVar9) = uVar11;
      return;
    }
    puVar7 = video_2d->palette;
    uVar9 = uVar9 & 0x3ff;
    if (uVar13 == 2) {
      *(u16 *)((int)puVar7 + uVar9) = uVar3;
      return;
    }
    if (uVar13 != 4) {
      if (uVar13 != 1) {
        return;
      }
      *(char *)((int)puVar7 + uVar9) = (char)uVar11;
      return;
    }
    *(uint *)((int)puVar7 + uVar9) = uVar11;
    return;
  }
  uVar6 = uVar9 & 0xfff;
  if (0x27 < uVar6) {
    if (uVar6 < 0x42) {
      if (uVar6 < 0x40) {
        if (0x33 < uVar6) {
          if (0x37 < uVar6) {
            if (uVar6 < 0x3c) {
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar13 < 4) {
                iVar10 = (uVar9 & 3) << 3;
                uVar11 = video_2d->bg_layers[3].affine_reference_x &
                         ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
              }
              video_2d->bg_layers[3].affine_reference_x = uVar11;
              video_2d->bg_layers[3].affine_current_x = uVar11;
              video_2d->bg_layers[3].affine_settings_dirty = '\x01';
              return;
            }
            uVar11 = (int)(uVar11 << 4) >> 4;
            if (uVar13 < 4) {
              iVar10 = (uVar9 & 3) << 3;
              uVar11 = video_2d->bg_layers[3].affine_reference_y &
                       ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
            }
            video_2d->bg_layers[3].affine_reference_y = uVar11;
            video_2d->bg_layers[3].affine_current_y = uVar11;
            video_2d->bg_layers[3].affine_settings_dirty = '\x01';
            return;
          }
          if (uVar6 < 0x36) {
            if (uVar13 < 2) {
              uVar2 = video_2d->bg_layers[3].affine_dy;
              iVar10 = (uVar9 & 1) << 3;
              video_2d->bg_layers[3].affine_settings_dirty = '\x01';
              video_2d->bg_layers[3].affine_dy =
                   uVar2 & ~(ushort)((1 << ((uVar13 & 0x1f) << 3)) + -1 << iVar10) |
                   (ushort)(uVar11 << iVar10);
              return;
            }
            video_2d->bg_layers[3].affine_settings_dirty = '\x01';
            video_2d->bg_layers[3].affine_dy = uVar3;
            if (uVar13 == 2) {
              return;
            }
            uVar11 = uVar11 >> 0x10;
          }
          else if (uVar13 < 2) {
            iVar10 = (uVar9 & 1) << 3;
            uVar11 = (int)video_2d->bg_layers[3].affine_dmy &
                     ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
          }
          video_2d->bg_layers[3].affine_settings_dirty = '\x01';
          video_2d->bg_layers[3].affine_dmy = (s16)uVar11;
          return;
        }
        if (uVar6 < 0x32) {
          if (uVar6 < 0x30) {
            if (uVar6 < 0x2c) {
              uVar11 = (int)(uVar11 << 4) >> 4;
              if (uVar13 < 4) {
                iVar10 = (uVar9 & 3) << 3;
                uVar11 = video_2d->bg_layers[2].affine_reference_x &
                         ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
              }
              video_2d->bg_layers[2].affine_reference_x = uVar11;
              video_2d->bg_layers[2].affine_current_x = uVar11;
              video_2d->bg_layers[2].affine_settings_dirty = '\x01';
              return;
            }
            uVar11 = (int)(uVar11 << 4) >> 4;
            if (uVar13 < 4) {
              iVar10 = (uVar9 & 3) << 3;
              uVar11 = video_2d->bg_layers[2].affine_reference_y &
                       ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
            }
            video_2d->bg_layers[2].affine_reference_y = uVar11;
            video_2d->bg_layers[2].affine_current_y = uVar11;
            video_2d->bg_layers[2].affine_settings_dirty = '\x01';
            return;
          }
          if (uVar13 < 2) {
            uVar2 = video_2d->bg_layers[3].affine_dx;
            iVar10 = (uVar9 & 1) << 3;
            video_2d->bg_layers[3].affine_settings_dirty = '\x01';
            video_2d->bg_layers[3].affine_dx =
                 uVar2 & ~(ushort)((1 << ((uVar13 & 0x1f) << 3)) + -1 << iVar10) |
                 (ushort)(uVar11 << iVar10);
            return;
          }
          video_2d->bg_layers[3].affine_settings_dirty = '\x01';
          video_2d->bg_layers[3].affine_dx = uVar3;
          if (uVar13 == 2) {
            return;
          }
          uVar11 = uVar11 >> 0x10;
        }
        else if (uVar13 < 2) {
          iVar10 = (uVar9 & 1) << 3;
          uVar11 = (int)video_2d->bg_layers[3].affine_dmx &
                   ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
        }
        video_2d->bg_layers[3].affine_settings_dirty = '\x01';
        video_2d->bg_layers[3].affine_dmx = (s16)uVar11;
        return;
      }
      if (uVar13 < 2) {
        iVar10 = (uVar9 & 1) << 3;
        video_2d->window_horizontal_endpoints[0] =
             video_2d->window_horizontal_endpoints[0] &
             ~(ushort)(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | (ushort)(uVar11 << iVar10);
        video_2d->windows_x_dirty = video_2d->windows_x_dirty | 1;
        return;
      }
      video_2d->window_horizontal_endpoints[0] = uVar3;
      if (uVar13 != 2) {
        uVar11 = uVar11 >> 0x10;
      }
      bVar5 = video_2d->windows_x_dirty | 1;
      video_2d->windows_x_dirty = bVar5;
      if (uVar13 == 2) {
        return;
      }
LAB_0804ebfc:
      video_2d->window_horizontal_endpoints[1] = (u16)uVar11;
      video_2d->windows_x_dirty = bVar5 | 2;
      return;
    }
    if (0x4b < uVar6) {
      if (0x53 < uVar6) {
        if (uVar6 == 0x6c) {
          if (uVar13 < 2) {
            iVar10 = (uVar9 & 1) << 3;
            uVar11 = (uint)video_2d->master_brightness &
                     ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
          }
          video_2d->master_brightness = (u16)uVar11;
          return;
        }
        if (uVar6 != 0x305) {
          if (uVar6 != 0x54) {
            return;
          }
          if (uVar13 < 2) {
            iVar10 = (uVar9 & 1) << 3;
            uVar11 = (uint)video_2d->blend_y & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
                     uVar11 << iVar10;
          }
          video_2d->blend_y = (ushort)uVar11 & 0x1f;
          return;
        }
        uVar14 = (u32)video_2d->engine_number;
        psVar12 = video_2d->video->memory->system;
        if (((uVar11 & 0x80) == 0) && ((psVar12->config).fix_main_2d_screen == 0)) {
          uVar14 = uVar14 ^ 1;
        }
        puVar4 = (u8 *)get_screen_ptr(uVar14);
        if (psVar12->skip_current_frame == '\0') {
          if (((psVar12->benchmark).disable & 4) != 0) {
            puVar4 = (u8 *)0x0;
          }
        }
        else {
          puVar4 = (u8 *)0x0;
        }
        video_2d->screen_ptr = puVar4;
        uVar14 = get_screen_pitch(uVar14);
        video_2d->screen_pitch = uVar14;
        return;
      }
      if (uVar6 < 0x52) {
        if (uVar6 == 0x4c) {
          if (uVar13 < 2) {
            iVar10 = (uVar9 & 1) << 3;
            uVar11 = (uint)video_2d->mosaic & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
                     uVar11 << iVar10;
          }
          video_2d->mosaic = (u16)uVar11;
          return;
        }
        if (uVar6 < 0x50) {
          return;
        }
        if (uVar13 < 2) {
          iVar10 = (uVar9 & 1) << 3;
          video_2d->blend_control =
               video_2d->blend_control & ~(ushort)(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
               (ushort)(uVar11 << iVar10);
          return;
        }
        video_2d->blend_control = uVar3;
        if (uVar13 == 2) {
          return;
        }
        uVar11 = uVar11 >> 0x10;
      }
      else if (uVar13 < 2) {
        iVar10 = (uVar9 & 1) << 3;
        uVar11 = (uint)video_2d->blend_alpha & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
                 uVar11 << iVar10;
      }
      video_2d->blend_alpha = (u16)uVar11;
      return;
    }
    if (0x47 < uVar6) {
      if (uVar13 < 4) {
        iVar10 = (uVar9 & 3) << 3;
        uVar11 = video_2d->window_layer_enables & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
                 uVar11 << iVar10;
      }
      video_2d->window_layer_enables = uVar11 & 0x3f3f3f3f;
      return;
    }
    if (uVar6 < 0x46) {
      if (uVar6 < 0x44) {
        if (uVar13 < 2) {
          bVar5 = video_2d->windows_x_dirty;
          iVar10 = (uVar9 & 1) << 3;
          uVar11 = (uint)video_2d->window_horizontal_endpoints[1] &
                   ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
        }
        else {
          bVar5 = video_2d->windows_x_dirty;
        }
        goto LAB_0804ebfc;
      }
      if (uVar13 < 2) {
        iVar10 = (uVar9 & 1) << 3;
        video_2d->window_vertical_endpoints[0] =
             video_2d->window_vertical_endpoints[0] &
             ~(ushort)(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | (ushort)(uVar11 << iVar10);
        return;
      }
      video_2d->window_vertical_endpoints[0] = uVar3;
      if (uVar13 == 2) {
        return;
      }
      uVar11 = uVar11 >> 0x10;
    }
    else if (uVar13 < 2) {
      iVar10 = (uVar9 & 1) << 3;
      uVar11 = (uint)video_2d->window_vertical_endpoints[1] &
               ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
    }
    video_2d->window_vertical_endpoints[1] = (u16)uVar11;
    return;
  }
  if (0x25 < uVar6) {
    if (uVar13 < 2) {
      iVar10 = (uVar9 & 1) << 3;
      uVar11 = (int)video_2d->bg_layers[2].affine_dmy & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10)
               | uVar11 << iVar10;
    }
LAB_0804f08c:
    video_2d->bg_layers[2].affine_settings_dirty = '\x01';
    video_2d->bg_layers[2].affine_dmy = (s16)uVar11;
    return;
  }
  if (uVar6 < 0x16) {
    if (uVar6 < 0x14) {
      if (uVar6 < 0xe) {
        if (uVar6 < 0xc) {
          if (uVar6 < 10) {
            if (uVar6 < 8) {
              if (3 < uVar6) {
                return;
              }
              if (uVar13 < 4) {
                iVar10 = (uVar9 & 3) << 3;
                uVar11 = video_2d->display_control & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
                         uVar11 << iVar10;
              }
              video_2d_set_display_control(video_2d,uVar11);
              return;
            }
            puVar7 = &video_2d->bg_layers[0].bg_control;
            uVar15 = video_2d->tile_base;
            uVar14 = ((uVar11 << 0x1a) >> 0x1c) * 0x4000;
            uVar1 = ((uVar11 << 0x13) >> 0x1b) * 0x800;
            uVar2 = *puVar7;
            uVar9 = uVar1 + video_2d->map_base;
            video_2d->bg_layers[0].map_base_offset = uVar1;
            video_2d->bg_layers[0].tile_base_offset = uVar14;
            uVar6 = uVar14 + uVar15;
            video_2d->bg_layers[0].map_base = uVar9;
            video_2d->bg_layers[0].tile_base = uVar6;
            *puVar7 = uVar3;
            if (video_2d->engine_number == '\x01') {
              video_2d->bg_layers[0].map_base = uVar9 & 0xffe1ffff;
              video_2d->bg_layers[0].tile_base = uVar6 & 0xffe1ffff;
            }
            if (((uVar11 ^ uVar2) & 3) != 0) {
              video_2d_reorder_layers(video_2d);
            }
            video_2d->bg_layers[0].extended_palette =
                 video_2d->extended_bg_palettes[((int)(uVar11 << 0x12) >> 0x1f) * -2];
            if (uVar13 < 3) {
              return;
            }
            uVar11 = uVar11 >> 0x10;
          }
          uVar15 = video_2d->tile_base;
          uVar14 = ((uVar11 << 0x1a) >> 0x1c) * 0x4000;
          uVar1 = ((uVar11 << 0x13) >> 0x1b) * 0x800;
          puVar7 = &video_2d->bg_layers[1].bg_control;
          uVar2 = *puVar7;
          uVar9 = uVar1 + video_2d->map_base;
          video_2d->bg_layers[1].tile_base_offset = uVar14;
          uVar13 = uVar14 + uVar15;
          video_2d->bg_layers[1].map_base = uVar9;
          video_2d->bg_layers[1].tile_base = uVar13;
          video_2d->bg_layers[1].map_base_offset = uVar1;
          *puVar7 = (u16)uVar11;
          if (video_2d->engine_number == '\x01') {
            video_2d->bg_layers[1].map_base = uVar9 & 0xffe1ffff;
            video_2d->bg_layers[1].tile_base = uVar13 & 0xffe1ffff;
          }
          if (((uVar11 ^ uVar2) & 3) != 0) {
            video_2d_reorder_layers(video_2d);
          }
          video_2d->bg_layers[1].extended_palette =
               video_2d->extended_bg_palettes[((int)(uVar11 << 0x12) >> 0x1f) * -2 + 1];
          return;
        }
        video_2d_set_bg_control(video_2d,2,uVar11);
        if (uVar13 < 3) {
          return;
        }
        uVar11 = uVar11 >> 0x10;
LAB_0804ee48:
        video_2d_set_bg_control(video_2d,3,uVar11);
        return;
      }
      if (uVar6 < 0x12) {
        if (uVar6 < 0x10) goto LAB_0804ee48;
        if (uVar13 < 2) {
          iVar10 = (uVar9 & 1) << 3;
          video_2d->bg_layers[0].horizontal_offset =
               (ushort)((((uint)video_2d->bg_layers[0].horizontal_offset &
                          ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10) << 0x17)
                       >> 0x17);
          return;
        }
        video_2d->bg_layers[0].horizontal_offset = (ushort)((uVar11 << 0x17) >> 0x17);
        if (uVar13 == 2) {
          return;
        }
        uVar11 = uVar11 >> 0x10;
      }
      else if (uVar13 < 2) {
        iVar10 = (uVar9 & 1) << 3;
        uVar11 = (uint)video_2d->bg_layers[0].vertical_offset &
                 ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
      }
      video_2d->bg_layers[0].vertical_offset = (ushort)((uVar11 << 0x17) >> 0x17);
      return;
    }
    pvVar8 = video_2d->bg_layers + 1;
joined_r0x0804f030:
    if (uVar13 < 2) {
      iVar10 = (uVar9 & 1) << 3;
      pvVar8->horizontal_offset =
           (ushort)((((uint)pvVar8->horizontal_offset & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10)
                     | uVar11 << iVar10) << 0x17) >> 0x17);
      return;
    }
    iVar10 = uVar11 << 0x17;
    if (uVar13 != 2) {
      uVar11 = uVar11 >> 0x10;
    }
    pvVar8->horizontal_offset = (ushort)((uint)iVar10 >> 0x17);
    if (uVar13 == 2) {
      return;
    }
  }
  else {
    if (uVar6 < 0x1e) {
      if (0x1b < uVar6) {
        pvVar8 = video_2d->bg_layers + 3;
        goto joined_r0x0804f030;
      }
      if (uVar6 < 0x1a) {
        if (0x17 < uVar6) {
          pvVar8 = video_2d->bg_layers + 2;
          goto joined_r0x0804f030;
        }
        pvVar8 = video_2d->bg_layers + 1;
      }
      else {
        pvVar8 = video_2d->bg_layers + 2;
      }
    }
    else {
      if (0x21 < uVar6) {
        if (0x23 < uVar6) {
          if (uVar13 < 2) {
            uVar2 = video_2d->bg_layers[2].affine_dy;
            iVar10 = (uVar9 & 1) << 3;
            video_2d->bg_layers[2].affine_settings_dirty = '\x01';
            video_2d->bg_layers[2].affine_dy =
                 uVar2 & ~(ushort)((1 << ((uVar13 & 0x1f) << 3)) + -1 << iVar10) |
                 (ushort)(uVar11 << iVar10);
            return;
          }
          video_2d->bg_layers[2].affine_settings_dirty = '\x01';
          video_2d->bg_layers[2].affine_dy = uVar3;
          if (uVar13 == 2) {
            return;
          }
          uVar11 = uVar11 >> 0x10;
          goto LAB_0804f08c;
        }
        if (uVar13 < 2) {
          iVar10 = (uVar9 & 1) << 3;
          uVar11 = (int)video_2d->bg_layers[2].affine_dmx &
                   ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) | uVar11 << iVar10;
        }
LAB_0804ecd8:
        video_2d->bg_layers[2].affine_settings_dirty = '\x01';
        video_2d->bg_layers[2].affine_dmx = (s16)uVar11;
        return;
      }
      if (0x1f < uVar6) {
        if (uVar13 < 2) {
          uVar2 = video_2d->bg_layers[2].affine_dx;
          iVar10 = (uVar9 & 1) << 3;
          video_2d->bg_layers[2].affine_settings_dirty = '\x01';
          video_2d->bg_layers[2].affine_dx =
               uVar2 & ~(ushort)((1 << ((uVar13 & 0x1f) << 3)) + -1 << iVar10) |
               (ushort)(uVar11 << iVar10);
          return;
        }
        video_2d->bg_layers[2].affine_settings_dirty = '\x01';
        video_2d->bg_layers[2].affine_dx = uVar3;
        if (uVar13 == 2) {
          return;
        }
        uVar11 = uVar11 >> 0x10;
        goto LAB_0804ecd8;
      }
      pvVar8 = video_2d->bg_layers + 3;
    }
    if (uVar13 < 2) {
      iVar10 = (uVar9 & 1) << 3;
      uVar11 = (uint)pvVar8->vertical_offset & ~(~(-1 << ((uVar13 & 0x1f) << 3)) << iVar10) |
               uVar11 << iVar10;
    }
  }
  pvVar8->vertical_offset = (ushort)((uVar11 << 0x17) >> 0x17);
  return;
}


