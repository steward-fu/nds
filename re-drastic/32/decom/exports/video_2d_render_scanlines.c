/*
 * Ghidra decompilation
 *
 * Function : video_2d_render_scanlines
 * Address  : 0804f480
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_render_scanlines
               (video_2d_struct *video_2d,u32 scanline,u32 end_scanline,
               capture_settings_struct *capture_settings)

{
  int iVar1;
  ushort uVar2;
  u16 uVar3;
  video_2d_event_struct *pvVar4;
  u8 *puVar5;
  u8 *screen_ptr;
  u32 bit_shift_26;
  u32 bit_shift_27;
  u32 bit_shift_28;
  u32 uVar6;
  uint uVar7;
  u32 bit_shift;
  u16 *puVar8;
  u16 *palette;
  u16 *oam;
  u32 bit_shift_1;
  u32 bit_shift_2;
  video_2d_bg_layer_struct *pvVar9;
  u32 bit_shift_8;
  u32 bit_shift_9;
  u32 bit_shift_14;
  u32 bit_shift_16;
  u32 bit_shift_19;
  u32 bit_shift_21;
  u32 bit_shift_24;
  u32 bit_shift_25;
  byte bVar10;
  u32 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  u32 uVar15;
  system_struct *psVar16;
  system_struct *system;
  video_2d_event_struct *next_event;
  u32 value;
  video_2d_event_struct *pvVar17;
  u32 screen_number;
  u32 bit_shift_3;
  u32 bit_shift_4;
  u32 bit_shift_7;
  u32 bit_shift_10;
  u32 bg_control_1;
  u32 bit_shift_6;
  u32 bit_shift_13;
  u32 bit_shift_17;
  u32 bit_shift_23;
  u32 bit_shift_11;
  u32 bit_shift_20;
  u32 bit_shift_5;
  u32 bg_control;
  
  uVar11 = (video_2d->event_list).current_index;
  uVar6 = (video_2d->event_list).events_processed;
  pvVar17 = (video_2d->event_list).events + uVar6;
  (video_2d->event_list).events[uVar11].scanline_number = 0xff;
  uVar13 = (uint)(video_2d->event_list).events[uVar6].scanline_number;
  if (scanline <= end_scanline) {
    do {
      if (video_2d->screen_ptr != (u8 *)0x0) {
        render_scanline(video_2d,video_2d->screen_ptr + video_2d->screen_pitch * scanline,scanline,
                        capture_settings);
      }
      if (uVar13 <= scanline) {
        pvVar4 = pvVar17 + 1;
        do {
          while( true ) {
            pvVar17 = pvVar4;
            uVar12 = ((video_2d_event_list_struct *)(pvVar17 + -1))->events[0].address;
            uVar14 = (uint)(byte)((video_2d_event_list_struct *)(pvVar17 + -1))->events[0];
            uVar13 = *(uint *)((video_2d_event_list_struct *)(pvVar17 + -1))->events;
            uVar3 = (u16)uVar13;
            if (0xfffff < uVar12) break;
            uVar7 = uVar12 & 0xfff;
            if (uVar7 < 0x28) {
              if (uVar7 < 0x26) {
                if (uVar7 < 0x16) {
                  if (0x13 < uVar7) {
                    if (uVar14 < 2) {
                      pvVar9 = video_2d->bg_layers + 1;
                      goto LAB_0804fed8;
                    }
                    pvVar9 = video_2d->bg_layers + 1;
                    video_2d->bg_layers[1].horizontal_offset = (ushort)((uVar13 << 0x17) >> 0x17);
                    goto joined_r0x0804fb10;
                  }
                  if (uVar7 < 0xe) {
                    if (uVar7 < 0xc) {
                      if (uVar7 < 10) {
                        if (uVar7 < 8) {
                          if (uVar7 < 4) {
                            if (uVar14 < 4) {
                              iVar1 = (uVar12 & 3) << 3;
                              uVar13 = video_2d->display_control &
                                       ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                                       uVar13 << iVar1;
                            }
                            video_2d_set_display_control(video_2d,uVar13);
                          }
                        }
                        else {
                          puVar8 = &video_2d->bg_layers[0].bg_control;
                          uVar2 = *puVar8;
                          uVar6 = ((uVar13 << 0x1a) >> 0x1c) * 0x4000;
                          uVar11 = ((uVar13 << 0x13) >> 0x1b) * 0x800;
                          uVar7 = uVar11 + video_2d->map_base;
                          bg_control = video_2d->tile_base;
                          video_2d->bg_layers[0].tile_base_offset = uVar6;
                          video_2d->bg_layers[0].map_base = uVar7;
                          video_2d->bg_layers[0].map_base_offset = uVar11;
                          uVar12 = uVar6 + bg_control;
                          video_2d->bg_layers[0].tile_base = uVar12;
                          *puVar8 = uVar3;
                          if (video_2d->engine_number == '\x01') {
                            video_2d->bg_layers[0].map_base = uVar7 & 0xffe1ffff;
                            video_2d->bg_layers[0].tile_base = uVar12 & 0xffe1ffff;
                          }
                          if (((uVar2 ^ uVar13) & 3) != 0) {
                            video_2d_reorder_layers(video_2d);
                          }
                          video_2d->bg_layers[0].extended_palette =
                               video_2d->extended_bg_palettes[((int)(uVar13 << 0x12) >> 0x1f) * -2];
                          if (2 < uVar14) {
                            uVar13 = uVar13 >> 0x10;
                            goto LAB_0804fa08;
                          }
                        }
                      }
                      else {
LAB_0804fa08:
                        uVar15 = video_2d->tile_base;
                        uVar6 = ((uVar13 << 0x1a) >> 0x1c) * 0x4000;
                        uVar11 = ((uVar13 << 0x13) >> 0x1b) * 0x800;
                        puVar8 = &video_2d->bg_layers[1].bg_control;
                        uVar2 = *puVar8;
                        uVar12 = uVar11 + video_2d->map_base;
                        video_2d->bg_layers[1].tile_base_offset = uVar6;
                        uVar14 = uVar6 + uVar15;
                        video_2d->bg_layers[1].map_base = uVar12;
                        video_2d->bg_layers[1].tile_base = uVar14;
                        video_2d->bg_layers[1].map_base_offset = uVar11;
                        *puVar8 = (u16)uVar13;
                        if (video_2d->engine_number == '\x01') {
                          video_2d->bg_layers[1].map_base = uVar12 & 0xffe1ffff;
                          video_2d->bg_layers[1].tile_base = uVar14 & 0xffe1ffff;
                        }
                        if (((uVar2 ^ uVar13) & 3) != 0) {
                          video_2d_reorder_layers(video_2d);
                        }
                        video_2d->bg_layers[1].extended_palette =
                             video_2d->extended_bg_palettes
                             [((int)(uVar13 << 0x12) >> 0x1f) * -2 + 1];
                      }
                    }
                    else {
                      video_2d_set_bg_control(video_2d,2,uVar13);
                      if (2 < uVar14) {
                        uVar13 = uVar13 >> 0x10;
LAB_0804f89c:
                        video_2d_set_bg_control(video_2d,3,uVar13);
                      }
                    }
                  }
                  else if (uVar7 < 0x12) {
                    if (uVar7 < 0x10) goto LAB_0804f89c;
                    if (uVar14 < 2) {
                      iVar1 = (uVar12 & 1) << 3;
                      video_2d->bg_layers[0].horizontal_offset =
                           (ushort)((((uint)video_2d->bg_layers[0].horizontal_offset &
                                      ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                                     uVar13 << iVar1) << 0x17) >> 0x17);
                    }
                    else {
                      video_2d->bg_layers[0].horizontal_offset = (ushort)((uVar13 << 0x17) >> 0x17);
                      if (uVar14 != 2) {
                        uVar13 = uVar13 >> 0x10;
                        goto LAB_0804fe0c;
                      }
                    }
                  }
                  else {
                    if (uVar14 < 2) {
                      iVar1 = (uVar12 & 1) << 3;
                      uVar13 = (uint)video_2d->bg_layers[0].vertical_offset &
                               ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                    }
LAB_0804fe0c:
                    video_2d->bg_layers[0].vertical_offset = (ushort)((uVar13 << 0x17) >> 0x17);
                  }
                }
                else if (uVar7 < 0x1e) {
                  if (uVar7 < 0x1c) {
                    if (uVar7 < 0x1a) {
                      if (0x17 < uVar7) {
                        if (uVar14 < 2) {
                          pvVar9 = video_2d->bg_layers + 2;
                          goto LAB_0804fed8;
                        }
                        pvVar9 = video_2d->bg_layers + 2;
                        video_2d->bg_layers[2].horizontal_offset =
                             (ushort)((uVar13 << 0x17) >> 0x17);
                        goto joined_r0x0804fb10;
                      }
                      if (uVar14 < 2) {
                        pvVar9 = video_2d->bg_layers + 1;
                        goto LAB_0804f7ac;
                      }
                      pvVar9 = video_2d->bg_layers + 1;
                    }
                    else if (uVar14 < 2) {
                      pvVar9 = video_2d->bg_layers + 2;
LAB_0804f7ac:
                      iVar1 = (uVar12 & 1) << 3;
                      uVar13 = (uint)pvVar9->vertical_offset &
                               ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                    }
                    else {
                      pvVar9 = video_2d->bg_layers + 2;
                    }
LAB_0804f7c8:
                    pvVar9->vertical_offset = (ushort)((uVar13 << 0x17) >> 0x17);
                  }
                  else if (uVar14 < 2) {
                    pvVar9 = video_2d->bg_layers + 3;
LAB_0804fed8:
                    iVar1 = (uVar12 & 1) << 3;
                    pvVar9->horizontal_offset =
                         (ushort)((((uint)pvVar9->horizontal_offset &
                                    ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1
                                   ) << 0x17) >> 0x17);
                  }
                  else {
                    pvVar9 = video_2d->bg_layers + 3;
                    video_2d->bg_layers[3].horizontal_offset = (ushort)((uVar13 << 0x17) >> 0x17);
joined_r0x0804fb10:
                    if (uVar14 != 2) {
                      uVar13 = uVar13 >> 0x10;
                      goto LAB_0804f7c8;
                    }
                  }
                }
                else if (uVar7 < 0x22) {
                  if (uVar7 < 0x20) {
                    if (uVar14 < 2) {
                      pvVar9 = video_2d->bg_layers + 3;
                      goto LAB_0804f7ac;
                    }
                    pvVar9 = video_2d->bg_layers + 3;
                    goto LAB_0804f7c8;
                  }
                  if (uVar14 < 2) {
                    pvVar9 = video_2d->bg_layers + 2;
                    uVar2 = video_2d->bg_layers[2].affine_dx;
                    video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                    goto LAB_0804ff6c;
                  }
                  video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                  video_2d->bg_layers[2].affine_dx = uVar3;
                  if (uVar14 != 2) {
                    uVar13 = uVar13 >> 0x10;
                    goto LAB_0804f984;
                  }
                }
                else if (uVar7 < 0x24) {
                  if (uVar14 < 2) {
                    iVar1 = (uVar12 & 1) << 3;
                    uVar13 = (int)video_2d->bg_layers[2].affine_dmx &
                             ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                  }
LAB_0804f984:
                  video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                  video_2d->bg_layers[2].affine_dmx = (s16)uVar13;
                }
                else {
                  if (uVar14 < 2) {
                    pvVar9 = video_2d->bg_layers + 2;
                    uVar2 = video_2d->bg_layers[2].affine_dy;
                    video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                    goto LAB_0804ffe8;
                  }
                  video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                  video_2d->bg_layers[2].affine_dy = uVar3;
                  if (uVar14 != 2) {
                    uVar13 = uVar13 >> 0x10;
                    goto LAB_0804faec;
                  }
                }
              }
              else {
                if (uVar14 < 2) {
                  iVar1 = (uVar12 & 1) << 3;
                  uVar13 = (int)video_2d->bg_layers[2].affine_dmy &
                           ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                }
LAB_0804faec:
                video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                video_2d->bg_layers[2].affine_dmy = (s16)uVar13;
              }
            }
            else if (uVar7 < 0x42) {
              if (uVar7 < 0x40) {
                if (uVar7 < 0x34) {
                  if (uVar7 < 0x32) {
                    if (uVar7 < 0x30) {
                      if (uVar7 < 0x2c) {
                        uVar13 = (int)(uVar13 << 4) >> 4;
                        if (uVar14 < 4) {
                          iVar1 = (uVar12 & 3) << 3;
                          uVar13 = video_2d->bg_layers[2].affine_reference_x &
                                   ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                        }
                        video_2d->bg_layers[2].affine_reference_x = uVar13;
                        video_2d->bg_layers[2].affine_current_x = uVar13;
                        video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                      }
                      else {
                        uVar13 = (int)(uVar13 << 4) >> 4;
                        if (uVar14 < 4) {
                          iVar1 = (uVar12 & 3) << 3;
                          uVar13 = video_2d->bg_layers[2].affine_reference_y &
                                   ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                        }
                        video_2d->bg_layers[2].affine_reference_y = uVar13;
                        video_2d->bg_layers[2].affine_current_y = uVar13;
                        video_2d->bg_layers[2].affine_settings_dirty = '\x01';
                      }
                    }
                    else if (uVar14 < 2) {
                      pvVar9 = video_2d->bg_layers + 3;
                      uVar2 = video_2d->bg_layers[3].affine_dx;
                      video_2d->bg_layers[3].affine_settings_dirty = '\x01';
LAB_0804ff6c:
                      iVar1 = (uVar12 & 1) << 3;
                      pvVar9->affine_dx =
                           uVar2 & ~(ushort)((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                           (ushort)(uVar13 << iVar1);
                    }
                    else {
                      video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                      video_2d->bg_layers[3].affine_dx = uVar3;
                      if (uVar14 != 2) {
                        uVar13 = uVar13 >> 0x10;
                        goto LAB_0804fc8c;
                      }
                    }
                  }
                  else {
                    if (uVar14 < 2) {
                      iVar1 = (uVar12 & 1) << 3;
                      uVar13 = (int)video_2d->bg_layers[3].affine_dmx &
                               ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                    }
LAB_0804fc8c:
                    video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                    video_2d->bg_layers[3].affine_dmx = (s16)uVar13;
                  }
                }
                else if (uVar7 < 0x38) {
                  if (uVar7 < 0x36) {
                    if (uVar14 < 2) {
                      pvVar9 = video_2d->bg_layers + 3;
                      uVar2 = video_2d->bg_layers[3].affine_dy;
                      video_2d->bg_layers[3].affine_settings_dirty = '\x01';
LAB_0804ffe8:
                      iVar1 = (uVar12 & 1) << 3;
                      pvVar9->affine_dy =
                           uVar2 & ~(ushort)((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                           (ushort)(uVar13 << iVar1);
                    }
                    else {
                      video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                      video_2d->bg_layers[3].affine_dy = uVar3;
                      if (uVar14 != 2) {
                        uVar13 = uVar13 >> 0x10;
                        goto LAB_0804f804;
                      }
                    }
                  }
                  else {
                    if (uVar14 < 2) {
                      iVar1 = (uVar12 & 1) << 3;
                      uVar13 = (int)video_2d->bg_layers[3].affine_dmy &
                               ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                    }
LAB_0804f804:
                    video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                    video_2d->bg_layers[3].affine_dmy = (s16)uVar13;
                  }
                }
                else if (uVar7 < 0x3c) {
                  uVar13 = (int)(uVar13 << 4) >> 4;
                  if (uVar14 < 4) {
                    iVar1 = (uVar12 & 3) << 3;
                    uVar13 = video_2d->bg_layers[3].affine_reference_x &
                             ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                  }
                  video_2d->bg_layers[3].affine_reference_x = uVar13;
                  video_2d->bg_layers[3].affine_current_x = uVar13;
                  video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                }
                else {
                  uVar13 = (int)(uVar13 << 4) >> 4;
                  if (uVar14 < 4) {
                    iVar1 = (uVar12 & 3) << 3;
                    uVar13 = video_2d->bg_layers[3].affine_reference_y &
                             ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                  }
                  video_2d->bg_layers[3].affine_reference_y = uVar13;
                  video_2d->bg_layers[3].affine_current_y = uVar13;
                  video_2d->bg_layers[3].affine_settings_dirty = '\x01';
                }
              }
              else if (uVar14 < 2) {
                iVar1 = (uVar12 & 1) << 3;
                video_2d->window_horizontal_endpoints[0] =
                     video_2d->window_horizontal_endpoints[0] &
                     ~(ushort)((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                     (ushort)(uVar13 << iVar1);
                video_2d->windows_x_dirty = video_2d->windows_x_dirty | 1;
              }
              else {
                video_2d->window_horizontal_endpoints[0] = uVar3;
                if (uVar14 != 2) {
                  uVar13 = uVar13 >> 0x10;
                }
                bVar10 = video_2d->windows_x_dirty | 1;
                video_2d->windows_x_dirty = bVar10;
                if (uVar14 != 2) {
LAB_0804f87c:
                  video_2d->window_horizontal_endpoints[1] = (u16)uVar13;
                  video_2d->windows_x_dirty = bVar10 | 2;
                }
              }
            }
            else if (uVar7 < 0x4c) {
              if (uVar7 < 0x48) {
                if (uVar7 < 0x46) {
                  if (uVar7 < 0x44) {
                    if (uVar14 < 2) {
                      iVar1 = (uVar12 & 1) << 3;
                      bVar10 = video_2d->windows_x_dirty;
                      uVar13 = (uint)video_2d->window_horizontal_endpoints[1] &
                               ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                    }
                    else {
                      bVar10 = video_2d->windows_x_dirty;
                    }
                    goto LAB_0804f87c;
                  }
                  if (uVar14 < 2) {
                    iVar1 = (uVar12 & 1) << 3;
                    video_2d->window_vertical_endpoints[0] =
                         video_2d->window_vertical_endpoints[0] &
                         ~(ushort)((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                         (ushort)(uVar13 << iVar1);
                  }
                  else {
                    video_2d->window_vertical_endpoints[0] = uVar3;
                    if (uVar14 != 2) {
                      uVar13 = uVar13 >> 0x10;
                      goto LAB_0804fe64;
                    }
                  }
                }
                else {
                  if (uVar14 < 2) {
                    iVar1 = (uVar12 & 1) << 3;
                    uVar13 = (uint)video_2d->window_vertical_endpoints[1] &
                             ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                  }
LAB_0804fe64:
                  video_2d->window_vertical_endpoints[1] = (u16)uVar13;
                }
              }
              else {
                if (uVar14 < 4) {
                  iVar1 = (uVar12 & 3) << 3;
                  uVar13 = video_2d->window_layer_enables &
                           ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                }
                video_2d->window_layer_enables = uVar13 & 0x3f3f3f3f;
              }
            }
            else if (uVar7 < 0x54) {
              if (uVar7 < 0x52) {
                if (uVar7 == 0x4c) {
                  if (uVar14 < 2) {
                    iVar1 = (uVar12 & 1) << 3;
                    uVar13 = (uint)video_2d->mosaic & ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1)
                             | uVar13 << iVar1;
                  }
                  video_2d->mosaic = (u16)uVar13;
                }
                else if (0x4f < uVar7) {
                  if (uVar14 < 2) {
                    iVar1 = (uVar12 & 1) << 3;
                    video_2d->blend_control =
                         video_2d->blend_control &
                         ~(ushort)((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                         (ushort)(uVar13 << iVar1);
                  }
                  else {
                    video_2d->blend_control = uVar3;
                    if (uVar14 != 2) {
                      uVar13 = uVar13 >> 0x10;
                      goto LAB_0804fa98;
                    }
                  }
                }
              }
              else {
                if (uVar14 < 2) {
                  iVar1 = (uVar12 & 1) << 3;
                  uVar13 = (uint)video_2d->blend_alpha &
                           ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
                }
LAB_0804fa98:
                video_2d->blend_alpha = (u16)uVar13;
              }
            }
            else if (uVar7 == 0x6c) {
              if (uVar14 < 2) {
                iVar1 = (uVar12 & 1) << 3;
                uVar13 = (uint)video_2d->master_brightness &
                         ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) | uVar13 << iVar1;
              }
              video_2d->master_brightness = (u16)uVar13;
            }
            else if (uVar7 == 0x305) {
              uVar6 = (u32)video_2d->engine_number;
              psVar16 = video_2d->video->memory->system;
              if (((uVar13 & 0x80) == 0) && ((psVar16->config).fix_main_2d_screen == 0)) {
                uVar6 = uVar6 ^ 1;
              }
              puVar5 = (u8 *)get_screen_ptr(uVar6);
              if (psVar16->skip_current_frame == '\0') {
                if (((psVar16->benchmark).disable & 4) != 0) {
                  puVar5 = (u8 *)0x0;
                }
              }
              else {
                puVar5 = (u8 *)0x0;
              }
              video_2d->screen_ptr = puVar5;
              uVar6 = get_screen_pitch(uVar6);
              video_2d->screen_pitch = uVar6;
            }
            else if (uVar7 == 0x54) {
              if (uVar14 < 2) {
                iVar1 = (uVar12 & 1) << 3;
                uVar13 = (uint)video_2d->blend_y & ~((1 << ((uVar14 & 0x1f) << 3)) + -1 << iVar1) |
                         uVar13 << iVar1;
              }
              video_2d->blend_y = (ushort)uVar13 & 0x1f;
            }
LAB_0804f5c4:
            uVar13 = (uint)pvVar17->scanline_number;
            pvVar4 = pvVar17 + 1;
            if (scanline < uVar13) goto LAB_0804f630;
          }
          if (uVar12 < 0x200000) {
            puVar8 = video_2d->palette;
          }
          else {
            puVar8 = video_2d->oam;
            video_2d->oam_dirty = '\x01';
          }
          if (uVar14 == 2) {
            *(u16 *)((int)puVar8 + (uVar12 & 0x3ff)) = uVar3;
            goto LAB_0804f5c4;
          }
          if (uVar14 == 4) {
            *(uint *)((int)puVar8 + (uVar12 & 0x3ff)) = uVar13;
            goto LAB_0804f5c4;
          }
          if (uVar14 == 1) {
            *(char *)((int)puVar8 + (uVar12 & 0x3ff)) = (char)uVar13;
          }
          uVar13 = (uint)pvVar17->scanline_number;
          pvVar4 = pvVar17 + 1;
        } while (uVar13 <= scanline);
      }
LAB_0804f630:
      scanline = scanline + 1;
    } while (scanline <= end_scanline);
    uVar11 = (video_2d->event_list).current_index;
  }
  (video_2d->event_list).events_processed = uVar11;
  (video_2d->event_list).current_index =
       ((int)pvVar17 - (int)&video_2d->event_list >> 2) * -0x55555555;
  return;
}


