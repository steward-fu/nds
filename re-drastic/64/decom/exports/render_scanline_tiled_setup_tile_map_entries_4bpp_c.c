/*
 * Ghidra decompilation
 *
 * Function : render_scanline_tiled_setup_tile_map_entries_4bpp_c
 * Address  : 001a0e90
 * Program  : drastic64
 */


void render_scanline_tiled_setup_tile_map_entries_4bpp_c
               (long param_1,long param_2,long param_3,long param_4,uint param_5,short param_6)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = *(ushort *)(param_3 + (ulong)param_5 * 2);
    param_5 = param_5 + 1 & 0x1f;
    sVar3 = (uVar2 & 0x3ff) * 0x20;
    if (param_5 == 0) {
      param_3 = param_4;
    }
    sVar1 = param_6 + sVar3;
    if ((uVar2 & 0x800) != 0) {
      sVar1 = (0x1c - param_6) + sVar3;
    }
    *(short *)(param_1 + lVar4 * 2) = sVar1;
    *(char *)(param_2 + lVar4) = (char)(uVar2 >> 8);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x21);
  return;
}


