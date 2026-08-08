/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_load_tile_map_entries_normal_c
 * Address  : 001a35b0
 * Program  : drastic64
 */


void render_scanline_affine_load_tile_map_entries_normal_c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + uVar2) =
         *(undefined *)(param_2 + (ulong)*(ushort *)(param_1 + uVar2 * 2));
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while (uVar1 <= param_3);
  return;
}


