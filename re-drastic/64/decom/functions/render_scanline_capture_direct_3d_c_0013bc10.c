/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture_direct_3d_c
 * Address  : 0013bc10
 * Program  : drastic64
 */


void render_scanline_capture_direct_3d_c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0x4c) != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_3 + lVar2 * 4);
      *(ushort *)(param_2 + lVar2 * 2) =
           (ushort)((uVar1 >> 0x11 & 0x3f) << 10) | (ushort)((uVar1 >> 9 & 0x7f) << 5) |
           (ushort)(uVar1 >> 1) & 0x7f | (ushort)(uVar1 >> 0x18 != 0) << 0xf;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < (uint)*(ushort *)(param_1 + 0x4c));
  }
  return;
}


