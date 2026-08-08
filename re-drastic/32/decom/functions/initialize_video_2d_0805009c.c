/*
 * Ghidra decompilation
 *
 * Function : initialize_video_2d
 * Address  : 0805009c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_video_2d(video_2d_struct *video_2d,u32 engine_number,video_struct *video)

{
  memory_struct *pmVar1;
  vram_map_type puVar2;
  u16 *puVar3;
  
  video_2d->video = video;
  video_2d->palette = video->palette_ram[engine_number];
  puVar3 = video->oam_ram[engine_number];
  video_2d->engine_number = (u8)engine_number;
  pmVar1 = video->memory;
  video_2d->extended_bg_palettes = video->extended_palette_bg_slots[engine_number];
  video_2d->oam = puVar3;
  video_2d->map_base = engine_number << 0x15;
  puVar2 = pmVar1->vram_2d_remap_buffer;
  video_2d->tile_base = engine_number << 0x15;
  video_2d->vram_map = puVar2;
  video_2d->bg_layers[0].video_2d = video_2d;
  video_2d->bg_layers[0].vram_map = puVar2;
  video_2d->bg_layers[1].video_2d = video_2d;
  video_2d->bg_layers[1].vram_map = puVar2;
  video_2d->bg_layers[2].video_2d = video_2d;
  video_2d->bg_layers[2].vram_map = puVar2;
  video_2d->bg_layers[3].video_2d = video_2d;
  video_2d->bg_layers[3].vram_map = puVar2;
  return;
}


