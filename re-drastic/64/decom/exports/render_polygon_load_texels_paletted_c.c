/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_texels_paletted_c
 * Address  : 00147c40
 * Program  : drastic64
 */


void render_polygon_load_texels_paletted_c
               (long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  
  if (param_5 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 4) =
           *(undefined4 *)
            (param_4 + (ulong)*(byte *)(param_3 + (ulong)*(uint *)(param_2 + lVar1 * 4)) * 4);
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < param_5);
  }
  return;
}


