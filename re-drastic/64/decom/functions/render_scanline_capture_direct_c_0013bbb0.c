/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_direct_c
 * Address  : 0013bbb0
 * Program  : drastic64
 */


void render_scanline_capture_direct_c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (*(short *)(param_1 + 0x4c) != 0) {
    lVar1 = 0;
    do {
      *(ushort *)(param_2 + lVar1 * 2) =
           (ushort)((*(byte *)(param_3 + 0x200 + lVar1) >> 1 & 0x3f) << 10) |
           (ushort)(*(byte *)(param_3 + 0x100 + lVar1) >> 1) << 5 |
           *(byte *)(param_3 + lVar1) >> 1 | 0x8000;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < (uint)*(ushort *)(param_1 + 0x4c));
  }
  return;
}


