/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_load_tile_map_entries_extended_c
 * Address  : 001a35e0
 * Program  : drastic64
 */


void render_scanline_affine_load_tile_map_entries_extended_c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    lVar2 = uVar3 * 2;
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
    *(undefined2 *)(param_1 + lVar2) =
         *(undefined2 *)(param_2 + (ulong)*(ushort *)(param_1 + lVar2));
  } while (uVar1 <= param_3);
  return;
}


