/*
 * Ghidra decompilation
 *
 * Function : render_scanline_generate_window_masks
 * Address  : 08048004
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_generate_window_masks
               (video_2d_struct *video_2d,u32 (*layer_inhibit_masks) [8],u32 *color_effects_disable,
               u32 *obj_window_mask,u32 active_layers,u32 line)

{
  undefined auVar1 [16];
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  u32 active_layers_00;
  uint w0_inhibits;
  u32 window_layer_inhibits;
  u32 window_0_top;
  u32 window_0_bottom;
  u32 window_1_top;
  uint uVar6;
  u32 (*w0_mask) [8];
  uint uVar7;
  u32 windows_enabled;
  u32 window_1_bottom;
  u32 _inhibits;
  u32 (*window_masks) [8];
  
  active_layers_00 = active_layers;
  uVar7 = (video_2d->display_control << 0x10) >> 0x1d;
  *(undefined8 *)color_effects_disable = 0;
  *(undefined8 *)(color_effects_disable + 2) = 0;
  *(undefined8 *)(color_effects_disable + 4) = 0;
  *(undefined8 *)(color_effects_disable + 6) = 0;
  if (uVar7 == 0) {
    return;
  }
  uVar4 = video_2d->window_vertical_endpoints[0];
  w0_mask = video_2d->window_masks;
  uVar5 = video_2d->window_vertical_endpoints[1];
  bVar2 = video_2d->windows_x_dirty;
  bVar3 = video_2d->windows_y_active;
  window_0_top = uVar4 & 0xff;
  memset(layer_inhibit_masks,0,0xa0);
  w0_inhibits = video_2d->window_layer_enables ^ 0x3f3f3f3f;
  if ((bVar2 & 1) != 0) {
    render_scanline_update_window_mask
              (video_2d->window_masks[0],(uint)video_2d->window_horizontal_endpoints[0]);
  }
  if ((bVar2 & 2) != 0) {
    render_scanline_update_window_mask
              (video_2d->window_masks[1],(uint)video_2d->window_horizontal_endpoints[1]);
  }
  video_2d->windows_x_dirty = '\0';
  if (uVar4 >> 8 == line) {
    uVar6 = bVar3 | 5;
  }
  else {
    uVar6 = bVar3 | 4;
  }
  if (window_0_top == line) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 >> 8 == line) {
    uVar6 = uVar6 | 2;
  }
  if ((uVar5 & 0xff) == line) {
    uVar6 = uVar6 & 0xfffffffd;
  }
  video_2d->windows_y_active = (u8)uVar6;
  switch(uVar7 & uVar6) {
  case 1:
    active_layers = w0_inhibits;
    goto LAB_08048214;
  case 2:
    w0_mask = video_2d->window_masks + 1;
    active_layers = w0_inhibits >> 8;
    goto LAB_08048214;
  case 3:
    render_scanline_window_inhibit_masks_double
              (layer_inhibit_masks,color_effects_disable,active_layers,*w0_mask,
               video_2d->window_masks[1],w0_inhibits,w0_inhibits >> 8,w0_inhibits >> 0x10);
    break;
  case 4:
    w0_mask = (u32 (*) [8])obj_window_mask;
    active_layers = w0_inhibits >> 0x18;
LAB_08048214:
    render_scanline_window_inhibit_masks_single
              (layer_inhibit_masks,color_effects_disable,active_layers_00,*w0_mask,active_layers,
               w0_inhibits >> 0x10);
    return;
  case 5:
    render_scanline_window_inhibit_masks_double
              (layer_inhibit_masks,color_effects_disable,active_layers,*w0_mask,obj_window_mask,
               w0_inhibits,w0_inhibits >> 0x18,w0_inhibits >> 0x10);
    break;
  case 6:
    render_scanline_window_inhibit_masks_double
              (layer_inhibit_masks,color_effects_disable,active_layers,video_2d->window_masks[1],
               obj_window_mask,w0_inhibits >> 8,w0_inhibits >> 0x18,w0_inhibits >> 0x10);
    break;
  case 7:
    render_scanline_window_inhibit_masks_triple
              (layer_inhibit_masks,color_effects_disable,active_layers,*w0_mask,
               video_2d->window_masks[1],obj_window_mask,w0_inhibits,w0_inhibits >> 8,
               w0_inhibits >> 0x18,w0_inhibits >> 0x10);
    break;
  default:
    uVar7 = active_layers & w0_inhibits >> 0x10;
    if ((w0_inhibits >> 0x10 & 0x20) != 0) {
      auVar1 = SIMDExpandImmediate(0,0xe,0xff);
      *(longlong *)color_effects_disable = auVar1._0_8_;
      *(longlong *)(color_effects_disable + 2) = auVar1._8_8_;
      *(longlong *)(color_effects_disable + 4) = auVar1._0_8_;
      *(longlong *)(color_effects_disable + 6) = auVar1._8_8_;
    }
    auVar1 = SIMDExpandImmediate(0,0xe,0xff);
    for (; uVar7 != 0; uVar7 = uVar7 >> 1) {
      if ((uVar7 & 1) != 0) {
        *(longlong *)*layer_inhibit_masks = auVar1._0_8_;
        *(longlong *)(*layer_inhibit_masks + 2) = auVar1._8_8_;
        *(longlong *)(*layer_inhibit_masks + 4) = auVar1._0_8_;
        *(longlong *)(*layer_inhibit_masks + 6) = auVar1._8_8_;
      }
      layer_inhibit_masks = layer_inhibit_masks + 1;
    }
  }
  return;
}


