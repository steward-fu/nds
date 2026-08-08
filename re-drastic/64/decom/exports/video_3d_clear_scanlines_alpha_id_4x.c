/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_alpha_id_4x
 * Address  : 00155c30
 * Program  : drastic64
 */


void video_3d_clear_scanlines_alpha_id_4x(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = param_1 + 0x20000;
    do {
      lVar1 = lVar2 + 0x200;
      render_polygon_set_buffer8_asm(lVar2,0xff,0x200);
      lVar2 = lVar1;
    } while (lVar1 != param_1 + ((ulong)(param_3 - 1) + 0x101) * 0x200);
    return;
  }
  return;
}


