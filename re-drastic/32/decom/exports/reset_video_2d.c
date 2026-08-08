/*
 * Ghidra decompilation
 *
 * Function : reset_video_2d
 * Address  : 0805011c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_video_2d(video_2d_struct *video_2d)

{
  ushort uVar1;
  video_2d_struct *pvVar2;
  video_2d_struct *video_2d_1;
  u32 uVar3;
  video_struct *pvVar4;
  video_2d_struct *video_2d_4;
  uint uVar5;
  u32 display_control;
  code *pcVar6;
  u32 uVar7;
  video_2d_struct *video_2d_2;
  video_2d_struct *video_2d_3;
  
  pvVar2 = video_2d->bg_layers[0].video_2d;
  video_2d->extended_obj_palette =
       video_2d->video->extended_palette_obj_slots[video_2d->engine_number];
  video_2d->display_control = 0;
  video_2d->window_layer_enables = 0;
  video_2d->blend_control = 0;
  video_2d->blend_y = 0;
  video_2d->blend_alpha = 0;
  video_2d->master_brightness = 0;
  video_2d->window_horizontal_endpoints[0] = 0;
  video_2d->window_horizontal_endpoints[1] = 0;
  video_2d->window_vertical_endpoints[0] = 0;
  video_2d->window_vertical_endpoints[1] = 0;
  video_2d->windows_y_active = '\0';
  video_2d->windows_x_dirty = '\x03';
  video_2d->oam_dirty = '\0';
  pvVar4 = pvVar2->video;
  (video_2d->event_list).events_processed = 0;
  (video_2d->event_list).current_index = 0;
  uVar7 = pvVar2->map_base;
  uVar3 = pvVar2->tile_base;
  video_2d->bg_layers[0].palette = pvVar4->palette_ram[pvVar2->engine_number];
  video_2d->bg_layers[0].extended_palette = (u16 *)0x0;
  video_2d->bg_layers[0].bg_control = 0;
  pvVar2 = video_2d->bg_layers[1].video_2d;
  video_2d->bg_layers[0].map_base = uVar7;
  video_2d->bg_layers[0].tile_base = uVar3;
  video_2d->bg_layers[0].map_base_offset = 0;
  video_2d->bg_layers[0].tile_base_offset = 0;
  video_2d->bg_layers[0].horizontal_offset = 0;
  video_2d->bg_layers[0].vertical_offset = 0;
  video_2d->bg_layers[0].affine_dx = 0;
  video_2d->bg_layers[0].affine_wrap_mask = '\x0f';
  video_2d->bg_layers[0].affine_dy = 0;
  video_2d->bg_layers[0].affine_dmx = 0;
  video_2d->bg_layers[0].affine_dmy = 0;
  video_2d->bg_layers[0].bitmap_wrap_mask_x = 0x7f;
  video_2d->bg_layers[0].affine_reference_x = 0;
  video_2d->bg_layers[0].affine_reference_y = 0;
  video_2d->bg_layers[0].affine_map_pitch_shift = '\x04';
  video_2d->bg_layers[0].bitmap_wrap_mask_y = 0x7f;
  video_2d->bg_layers[0].direct_bank_ptr = (u16 *)0x0;
  video_2d->bg_layers[0].direct_bank_hires_ptr = (u16 *)0x0;
  video_2d->bg_layers[0].bitmap_pitch_shift = '\a';
  video_2d->bg_layers[0].affine_settings_dirty = '\x01';
  uVar7 = pvVar2->map_base;
  uVar3 = pvVar2->tile_base;
  video_2d->bg_layers[1].palette = pvVar2->video->palette_ram[pvVar2->engine_number];
  video_2d->bg_layers[1].extended_palette = (u16 *)0x0;
  video_2d->bg_layers[1].bg_control = 0;
  video_2d->bg_layers[1].map_base = uVar7;
  video_2d->bg_layers[1].tile_base = uVar3;
  video_2d->bg_layers[1].map_base_offset = 0;
  video_2d->bg_layers[1].tile_base_offset = 0;
  pvVar2 = video_2d->bg_layers[2].video_2d;
  video_2d->bg_layers[1].horizontal_offset = 0;
  video_2d->bg_layers[1].vertical_offset = 0;
  video_2d->bg_layers[1].affine_wrap_mask = '\x0f';
  video_2d->bg_layers[1].affine_dx = 0;
  video_2d->bg_layers[1].affine_dy = 0;
  video_2d->bg_layers[1].affine_dmx = 0;
  video_2d->bg_layers[1].affine_dmy = 0;
  video_2d->bg_layers[1].affine_reference_x = 0;
  video_2d->bg_layers[1].affine_reference_y = 0;
  video_2d->bg_layers[1].affine_map_pitch_shift = '\x04';
  video_2d->bg_layers[1].bitmap_wrap_mask_x = 0x7f;
  video_2d->bg_layers[1].bitmap_wrap_mask_y = 0x7f;
  video_2d->bg_layers[1].direct_bank_ptr = (u16 *)0x0;
  video_2d->bg_layers[1].direct_bank_hires_ptr = (u16 *)0x0;
  video_2d->bg_layers[1].bitmap_pitch_shift = '\a';
  video_2d->bg_layers[1].affine_settings_dirty = '\x01';
  uVar3 = pvVar2->map_base;
  uVar7 = pvVar2->tile_base;
  video_2d->bg_layers[2].palette = pvVar2->video->palette_ram[pvVar2->engine_number];
  video_2d->bg_layers[2].extended_palette = (u16 *)0x0;
  video_2d->bg_layers[2].bg_control = 0;
  video_2d->bg_layers[2].map_base = uVar3;
  video_2d->bg_layers[2].tile_base = uVar7;
  video_2d->bg_layers[2].map_base_offset = 0;
  video_2d->bg_layers[2].tile_base_offset = 0;
  video_2d->bg_layers[2].horizontal_offset = 0;
  video_2d->bg_layers[2].vertical_offset = 0;
  video_2d->bg_layers[2].affine_wrap_mask = '\x0f';
  video_2d->bg_layers[2].affine_dx = 0;
  pvVar2 = video_2d->bg_layers[3].video_2d;
  video_2d->bg_layers[2].affine_dy = 0;
  video_2d->bg_layers[2].affine_dmx = 0;
  video_2d->bg_layers[2].affine_dmy = 0;
  video_2d->bg_layers[2].affine_reference_x = 0;
  video_2d->bg_layers[2].affine_reference_y = 0;
  video_2d->bg_layers[2].affine_map_pitch_shift = '\x04';
  video_2d->bg_layers[2].bitmap_wrap_mask_x = 0x7f;
  video_2d->bg_layers[2].bitmap_wrap_mask_y = 0x7f;
  video_2d->bg_layers[2].direct_bank_ptr = (u16 *)0x0;
  video_2d->bg_layers[2].direct_bank_hires_ptr = (u16 *)0x0;
  video_2d->bg_layers[2].bitmap_pitch_shift = '\a';
  video_2d->bg_layers[2].affine_settings_dirty = '\x01';
  uVar7 = pvVar2->map_base;
  uVar3 = pvVar2->tile_base;
  video_2d->bg_layers[3].palette = pvVar2->video->palette_ram[pvVar2->engine_number];
  video_2d->bg_layers[3].extended_palette = (u16 *)0x0;
  video_2d->bg_layers[3].bg_control = 0;
  video_2d->bg_layers[3].map_base = uVar7;
  video_2d->bg_layers[3].tile_base = uVar3;
  video_2d->bg_layers[3].map_base_offset = 0;
  video_2d->bg_layers[3].tile_base_offset = 0;
  video_2d->bg_layers[3].horizontal_offset = 0;
  video_2d->bg_layers[3].vertical_offset = 0;
  video_2d->bg_layers[3].affine_wrap_mask = '\x0f';
  video_2d->bg_layers[3].affine_dx = 0;
  video_2d->bg_layers[3].affine_dy = 0;
  video_2d->bg_layers[3].affine_dmx = 0;
  video_2d->bg_layers[3].affine_dmy = 0;
  video_2d->bg_layers[3].affine_reference_x = 0;
  video_2d->bg_layers[3].affine_reference_y = 0;
  video_2d->bg_layers[3].affine_map_pitch_shift = '\x04';
  video_2d->bg_layers[3].bitmap_wrap_mask_x = 0x7f;
  video_2d->bg_layers[3].bitmap_wrap_mask_y = 0x7f;
  video_2d->bg_layers[3].direct_bank_ptr = (u16 *)0x0;
  video_2d->bg_layers[3].direct_bank_hires_ptr = (u16 *)0x0;
  video_2d->bg_layers[3].bitmap_pitch_shift = '\a';
  video_2d->bg_layers[3].affine_settings_dirty = '\x01';
  video_2d_reorder_layers(video_2d);
  uVar5 = video_2d->display_control;
  pcVar6 = render_scanline_tiled;
  video_2d->bg_layers[0].render_function = render_scanline_tiled;
  video_2d->bg_layers[1].render_function = render_scanline_tiled;
  switch(uVar5 & 7) {
  case 1:
    video_2d->bg_layers[2].render_function = render_scanline_tiled;
    video_2d->bg_layers[3].render_function = render_scanline_affine_normal;
    break;
  case 2:
    pcVar6 = render_scanline_affine_normal;
  case 0:
    video_2d->bg_layers[2].render_function = pcVar6;
    video_2d->bg_layers[3].render_function = pcVar6;
    break;
  case 3:
    uVar1 = video_2d->bg_layers[3].bg_control;
    video_2d->bg_layers[2].render_function = render_scanline_tiled;
    goto joined_r0x080504f8;
  case 4:
    uVar1 = video_2d->bg_layers[3].bg_control;
    video_2d->bg_layers[2].render_function = render_scanline_affine_normal;
    goto joined_r0x080504f8;
  case 5:
    uVar1 = video_2d->bg_layers[2].bg_control;
    if ((uVar1 & 0x80) == 0) {
      video_2d->bg_layers[2].render_function = render_scanline_affine_extended;
    }
    else {
      if ((uVar1 & 4) == 0) {
        pcVar6 = render_scanline_bitmap_8bpp;
      }
      else {
        pcVar6 = render_scanline_bitmap_16bpp;
      }
      video_2d->bg_layers[2].render_function = pcVar6;
    }
    uVar1 = video_2d->bg_layers[3].bg_control;
joined_r0x080504f8:
    if ((uVar1 & 0x80) == 0) {
      video_2d->bg_layers[3].render_function = render_scanline_affine_extended;
    }
    else if ((uVar1 & 4) == 0) {
      video_2d->bg_layers[3].render_function = render_scanline_bitmap_8bpp;
    }
    else {
      video_2d->bg_layers[3].render_function = render_scanline_bitmap_16bpp;
    }
    break;
  case 6:
    video_2d->bg_layers[1].render_function = render_scanline_null;
    video_2d->bg_layers[2].render_function = render_scanline_bitmap_8bpp;
    video_2d->bg_layers[3].render_function = render_scanline_null;
  }
  return;
}


