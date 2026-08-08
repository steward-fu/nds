/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_setup_tile_map_entries_8bpp_c
 * Address  : 001a0ee0
 * Program  : drastic64
 */


void render_scanline_tiled_setup_tile_map_entries_8bpp_c
               (long param_1,long param_2,long param_3,long param_4,uint param_5,short param_6)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(ushort *)(param_3 + (ulong)param_5 * 2);
    param_5 = param_5 + 1 & 0x1f;
    if (param_5 == 0) {
      param_3 = param_4;
    }
    sVar1 = param_6 + uVar2 * 0x40;
    if ((uVar2 & 0x800) != 0) {
      sVar1 = (0x38 - param_6) + uVar2 * 0x40;
    }
    *(short *)(param_1 + lVar3 * 2) = sVar1;
    *(char *)(param_2 + lVar3) = (char)(uVar2 >> 8);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x21);
  return;
}


