/*
 * Ghidra decompilation
 *
 * Function : render_scanline_window_inhibit_outside_windows
 * Address  : 08047fb8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_window_inhibit_outside_windows
               (u32 (*layer_inhibit_masks) [8],u32 *color_effects_disable,u32 active_layers,
               u32 w0_inhibits)

{
  undefined auVar1 [16];
  uint uVar2;
  u32 _inhibits;
  
  uVar2 = active_layers & w0_inhibits;
  if ((w0_inhibits & 0x20) != 0) {
    auVar1 = SIMDExpandImmediate(0,0xe,0xff);
    *(longlong *)color_effects_disable = auVar1._0_8_;
    *(longlong *)(color_effects_disable + 2) = auVar1._8_8_;
    *(longlong *)(color_effects_disable + 4) = auVar1._0_8_;
    *(longlong *)(color_effects_disable + 6) = auVar1._8_8_;
  }
  auVar1 = SIMDExpandImmediate(0,0xe,0xff);
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      *(longlong *)*layer_inhibit_masks = auVar1._0_8_;
      *(longlong *)(*layer_inhibit_masks + 2) = auVar1._8_8_;
      *(longlong *)(*layer_inhibit_masks + 4) = auVar1._0_8_;
      *(longlong *)(*layer_inhibit_masks + 6) = auVar1._8_8_;
    }
    layer_inhibit_masks = layer_inhibit_masks + 1;
  }
  return;
}


