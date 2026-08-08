/*
 * Ghidra decompilation
 *
 * Function : render_polygon_load_texels_c
 * Address  : 00147c70
 * Program  : drastic64
 */


void render_polygon_load_texels_c(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 4) =
           *(undefined4 *)(param_3 + (ulong)*(uint *)(param_2 + lVar1 * 4) * 4);
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < param_4);
  }
  return;
}


