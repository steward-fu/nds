/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_span_8bpp_normal_palette_c
 * Address  : 001a0ff0
 * Program  : drastic64
 */


void render_scanline_tiled_span_8bpp_normal_palette_c
               (long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  do {
    while (uVar2 = *(ulong *)(param_2 + (ulong)*(ushort *)(param_3 + lVar1 * 2)),
          (*(byte *)(param_4 + lVar1) >> 2 & 1) == 0) {
      *(ulong *)(param_1 + lVar1 * 8) = uVar2;
      lVar1 = lVar1 + 1;
      if (lVar1 == 0x21) {
        return;
      }
    }
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + lVar1 * 8) = uVar2 >> 0x20 | uVar2 << 0x20;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x21);
  return;
}


