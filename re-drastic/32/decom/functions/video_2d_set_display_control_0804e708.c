/*
 * Ghidra decompilation
 *
 * Function : video_2d_set_display_control
 * Address  : 0804e708
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_set_display_control(video_2d_struct *video_2d,u32 value)

{
  u32 uVar1;
  u32 uVar2;
  u8 uVar3;
  byte bVar4;
  uint extraout_r1;
  u32 tile_base;
  u32 map_base;
  uint uVar5;
  uint uVar6;
  u32 display_control;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u8 *puVar10;
  u32 uVar11;
  u32 uVar12;
  u32 uVar13;
  
  uVar6 = video_2d->display_control;
  uVar3 = video_2d->engine_number;
  bVar4 = (byte)((value << 1) >> 0x1f);
  video_2d->bg_layers[0].use_extended_palette = bVar4;
  video_2d->bg_layers[1].use_extended_palette = bVar4;
  video_2d->bg_layers[2].use_extended_palette = bVar4;
  video_2d->bg_layers[3].use_extended_palette = bVar4;
  if (uVar3 == '\0') {
    uVar11 = video_2d->bg_layers[0].map_base_offset;
    uVar1 = ((value << 2) >> 0x1d) * 0x10000;
    uVar9 = video_2d->bg_layers[0].tile_base_offset;
    uVar8 = video_2d->bg_layers[1].map_base_offset;
    uVar7 = video_2d->bg_layers[1].tile_base_offset;
    uVar2 = ((value << 5) >> 0x1d) * 0x10000;
    puVar10 = video_2d->video->vram_bank_ptrs[(value << 0xc) >> 0x1e];
    uVar13 = video_2d->bg_layers[2].tile_base_offset;
    uVar12 = video_2d->bg_layers[3].map_base_offset;
    video_2d->bg_layers[2].map_base = video_2d->bg_layers[2].map_base_offset + uVar1;
    uVar5 = value ^ uVar6;
    video_2d->bg_layers[0].map_base = uVar11 + uVar1;
    uVar11 = video_2d->bg_layers[3].tile_base_offset;
    video_2d->vram_block_ptr = puVar10;
    video_2d->map_base = uVar1;
    video_2d->tile_base = uVar2;
    video_2d->display_control = value;
    video_2d->bg_layers[0].tile_base = uVar9 + uVar2;
    video_2d->bg_layers[1].map_base = uVar8 + uVar1;
    video_2d->bg_layers[1].tile_base = uVar7 + uVar2;
    video_2d->bg_layers[2].tile_base = uVar13 + uVar2;
    video_2d->bg_layers[3].map_base = uVar12 + uVar1;
    video_2d->bg_layers[3].tile_base = uVar11 + uVar2;
  }
  else {
    uVar5 = value & 0xc0b1fff7 ^ uVar6;
    video_2d->display_control = value & 0xc0b1fff7;
  }
  if (((uVar5 & 7) != 0) &&
     ((video_2d_update_bg_mode(video_2d), (extraout_r1 & 7) == 6 || ((uVar6 & 7) == 6)))) {
    video_2d_set_bg_control(video_2d,2,(uint)video_2d->bg_layers[2].bg_control);
  }
  if ((uVar5 & 0x1f08) != 0) {
    video_2d_reorder_layers(video_2d);
    return;
  }
  return;
}


