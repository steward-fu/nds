/*
 * Ghidra decompilation
 *
 * Function : render_scanline_palette_lookup_12bpp_c
 * Address  : 001a1cf0
 * Program  : drastic64
 */


void render_scanline_palette_lookup_12bpp_c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined2 *)(param_1 + lVar1) =
         *(undefined2 *)(param_3 + (ulong)*(ushort *)(param_2 + lVar1) * 2);
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x200);
  return;
}


