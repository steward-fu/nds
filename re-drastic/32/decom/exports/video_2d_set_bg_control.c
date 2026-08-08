/*
 * Ghidra decompilation
 *
 * Function : video_2d_set_bg_control
 * Address  : 0804e4e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_set_bg_control(video_2d_struct *video_2d,u32 layer,u32 value)

{
  u32 uVar1;
  u32 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  u16 uVar6;
  byte bVar7;
  video_2d_bg_layer_struct *pvVar8;
  u32 map_size;
  u32 screen_size;
  uint uVar9;
  u32 bg_control;
  uint uVar10;
  u16 *puVar11;
  ulonglong uVar12;
  
  uVar9 = (value << 0x13) >> 0x1b;
  uVar1 = ((value << 0x1a) >> 0x1c) * 0x4000;
  uVar2 = uVar9 * 0x800;
  puVar11 = &video_2d->bg_layers[layer].bg_control;
  uVar5 = *puVar11;
  video_2d->bg_layers[layer].map_base_offset = uVar2;
  video_2d->bg_layers[layer].tile_base_offset = uVar1;
  video_2d->bg_layers[layer].tile_base = video_2d->tile_base + uVar1;
  video_2d->bg_layers[layer].map_base = video_2d->map_base + uVar2;
  *puVar11 = (u16)value;
  if (video_2d->engine_number == '\x01') {
    pvVar8 = video_2d->bg_layers + layer;
    uVar12._0_4_ = pvVar8->map_base;
    uVar12._4_4_ = pvVar8->tile_base;
    uVar4 = SIMDExpandImmediate(1,5,0x1e);
    pvVar8->map_base = (int)(uVar12 & ~uVar4);
    pvVar8->tile_base = (int)((uVar12 & ~uVar4) >> 0x20);
  }
  uVar10 = uVar5 ^ value;
  if ((uVar10 & 3) != 0) {
    video_2d_reorder_layers(video_2d);
  }
  if (layer < 2) {
    video_2d->bg_layers[layer].extended_palette =
         video_2d->extended_bg_palettes[layer + ((int)(value << 0x12) >> 0x1f) * -2];
  }
  else if ((video_2d->display_control & 7) == 6) {
    video_2d->bg_layers[layer].bitmap_base = 0;
    if (video_2d->bg_layers[layer].bg_control >> 0xe == 0) {
      video_2d->bg_layers[layer].bitmap_wrap_mask_x = 0x3ff;
      video_2d->bg_layers[layer].bitmap_wrap_mask_y = 0x1ff;
      video_2d->bg_layers[layer].bitmap_pitch_shift = '\n';
    }
    else {
      video_2d->bg_layers[layer].bitmap_wrap_mask_x = 0x1ff;
      video_2d->bg_layers[layer].bitmap_wrap_mask_y = 0x3ff;
      video_2d->bg_layers[layer].bitmap_pitch_shift = '\t';
    }
  }
  else {
    bVar7 = (byte)(value >> 8);
    uVar3 = 1 << ((value << 0x10) >> 0x1e) + 7;
    uVar1 = uVar9 * 0x4000;
    video_2d->bg_layers[layer].bitmap_base = uVar1;
    video_2d->bg_layers[layer].affine_wrap_mask = (char)(uVar3 >> 3) + 0xff;
    video_2d->bg_layers[layer].affine_map_pitch_shift = (bVar7 >> 6) + 4;
    if (video_2d->engine_number == '\x01') {
      video_2d->bg_layers[layer].bitmap_base = uVar1 + 0x200000;
    }
    if ((uVar10 & 0x84) != 0) {
      video_2d_update_bg_mode(video_2d);
    }
    if ((int)uVar3 < 0x101) {
      uVar6 = (short)uVar3 - 1;
      video_2d->bg_layers[layer].bitmap_wrap_mask_x = uVar6;
      video_2d->bg_layers[layer].bitmap_wrap_mask_y = uVar6;
      video_2d->bg_layers[layer].bitmap_pitch_shift = (bVar7 >> 6) + 7;
    }
    else {
      video_2d->bg_layers[layer].bitmap_wrap_mask_x = 0x1ff;
      video_2d->bg_layers[layer].bitmap_wrap_mask_y = (short)(uVar3 >> 1) - 1;
      video_2d->bg_layers[layer].bitmap_pitch_shift = '\t';
    }
  }
  return;
}


