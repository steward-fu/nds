/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bin_4x
 * Address  : 001558a0
 * Program  : drastic64
 */


void video_3d_render_bin_4x
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x1000) != 0) {
    lVar1 = 0;
    do {
      render_polygon_4x(param_1,param_5 + (ulong)*(ushort *)(param_2 + lVar1 * 2) * 0x20,param_6,
                        param_3,param_4);
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(param_2 + 0x1000));
  }
  return;
}


