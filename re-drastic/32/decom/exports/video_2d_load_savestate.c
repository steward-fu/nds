/*
 * Ghidra decompilation
 *
 * Function : video_2d_load_savestate
 * Address  : 08050524
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_load_savestate(video_2d_struct *video_2d,mem_file_struct *savestate_file,u32 version)

{
  byte bVar1;
  byte bVar2;
  u32 map_base;
  u32 uVar3;
  u16 *puVar4;
  u32 uVar5;
  u32 display_control;
  u32 tile_base;
  u8 *puVar6;
  undefined4 *puVar7;
  u16 *puVar8;
  u16 *puVar9;
  u32 bg_extended_palette;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  u32 uVar13;
  u32 uVar14;
  u32 uVar15;
  
  video_2d->display_control = *(u32 *)savestate_file->buffer_ptr;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 4;
  video_2d->window_layer_enables = *(u32 *)(puVar6 + 4);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 4;
  video_2d->blend_control = *(u16 *)(puVar6 + 4);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 2;
  video_2d->blend_alpha = *(u16 *)(puVar6 + 2);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 2;
  video_2d->blend_y = *(u16 *)(puVar6 + 2);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 2;
  video_2d->master_brightness = *(u16 *)(puVar6 + 2);
  puVar7 = (undefined4 *)(savestate_file->buffer_ptr + 2);
  savestate_file->buffer_ptr = (u8 *)puVar7;
  if (9 < version) {
    video_2d->mosaic = *(u16 *)puVar7;
    puVar7 = (undefined4 *)(savestate_file->buffer_ptr + 2);
    savestate_file->buffer_ptr = (u8 *)puVar7;
  }
  *(undefined4 *)video_2d->window_horizontal_endpoints = *puVar7;
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 4;
  *(undefined4 *)video_2d->window_vertical_endpoints = *(undefined4 *)(puVar6 + 4);
  puVar6 = savestate_file->buffer_ptr;
  savestate_file->buffer_ptr = puVar6 + 4;
  video_2d->windows_y_active = puVar6[4];
  puVar4 = (u16 *)(savestate_file->buffer_ptr + 1);
  savestate_file->buffer_ptr = (u8 *)puVar4;
  puVar8 = &video_2d->bg_layers[0].bg_control;
  do {
    puVar9 = puVar8 + 0x48;
    *puVar8 = *puVar4;
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    *(u32 *)(puVar8 + -0x2a) = *(u32 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(u32 *)(puVar8 + -0x28) = *(u32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(u32 *)(puVar8 + -0x26) = *(u32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(s32 *)(puVar8 + -8) = *(s32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(s32 *)(puVar8 + -6) = *(s32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(s32 *)(puVar8 + -4) = *(s32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    *(s32 *)(puVar8 + -2) = *(s32 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 4;
    puVar8[1] = *(u16 *)(puVar6 + 4);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[2] = *(u16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[3] = *(s16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[4] = *(s16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[5] = *(s16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[6] = *(s16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[7] = *(u16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    puVar8[8] = *(u16 *)(puVar6 + 2);
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 2;
    *(u8 *)(puVar8 + 9) = puVar6[2];
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 1;
    *(u8 *)((int)puVar8 + 0x13) = puVar6[1];
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 1;
    *(u8 *)(puVar8 + 10) = puVar6[1];
    puVar6 = savestate_file->buffer_ptr;
    savestate_file->buffer_ptr = puVar6 + 1;
    *(u8 *)((int)puVar8 + 0x15) = puVar6[1];
    puVar4 = (u16 *)(savestate_file->buffer_ptr + 1);
    savestate_file->buffer_ptr = (u8 *)puVar4;
    puVar8 = puVar9;
  } while ((s64 *)puVar9 != &(video_2d->obj_set).obj[1].edge_step_y);
  uVar5 = video_2d->display_control;
  video_2d->windows_x_dirty = '\x03';
  if (video_2d->engine_number == '\0') {
    uVar14 = ((uVar5 << 2) >> 0x1d) << 0x10;
    video_2d->map_base = uVar14;
    uVar3 = ((uVar5 << 5) >> 0x1d) << 0x10;
    video_2d->vram_block_ptr = video_2d->video->vram_bank_ptrs[(uVar5 << 0xc) >> 0x1e];
    video_2d->tile_base = uVar3;
  }
  else {
    uVar14 = video_2d->map_base;
    uVar3 = video_2d->tile_base;
  }
  bVar1 = (byte)((uVar5 << 1) >> 0x18);
  bVar2 = bVar1 >> 7;
  uVar13 = video_2d->bg_layers[1].map_base_offset;
  uVar12 = video_2d->bg_layers[1].tile_base_offset;
  bVar1 = bVar1 >> 7;
  video_2d->bg_layers[0].use_extended_palette = bVar1;
  uVar11 = video_2d->bg_layers[2].map_base_offset;
  uVar10 = video_2d->bg_layers[2].tile_base_offset;
  video_2d->bg_layers[0].map_base = video_2d->bg_layers[0].map_base_offset + uVar14;
  uVar5 = video_2d->bg_layers[3].map_base_offset;
  video_2d->bg_layers[0].tile_base = video_2d->bg_layers[0].tile_base_offset + uVar3;
  uVar15 = video_2d->bg_layers[3].tile_base_offset;
  video_2d->bg_layers[0].affine_settings_dirty = '\x01';
  video_2d->bg_layers[1].map_base = uVar13 + uVar14;
  video_2d->bg_layers[1].tile_base = uVar12 + uVar3;
  video_2d->bg_layers[1].use_extended_palette = bVar1;
  video_2d->bg_layers[1].affine_settings_dirty = '\x01';
  video_2d->bg_layers[2].map_base = uVar11 + uVar14;
  video_2d->bg_layers[2].tile_base = uVar10 + uVar3;
  video_2d->bg_layers[2].use_extended_palette = bVar2;
  video_2d->bg_layers[2].affine_settings_dirty = '\x01';
  video_2d->bg_layers[3].map_base = uVar5 + uVar14;
  video_2d->bg_layers[3].tile_base = uVar15 + uVar3;
  video_2d->bg_layers[3].use_extended_palette = bVar2;
  video_2d->bg_layers[3].affine_settings_dirty = '\x01';
  video_2d_update_bg_mode(video_2d);
  video_2d_reorder_layers(video_2d);
  video_2d_reorder_obj(video_2d);
  return;
}


