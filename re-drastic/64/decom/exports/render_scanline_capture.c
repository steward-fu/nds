/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture
 * Address  : 0013bef0
 * Program  : drastic64
 */


void render_scanline_capture
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (*(char *)(param_1 + 0x51) != '\x02') {
    if (*(char *)(param_1 + 0x53) != '\0') {
      render_scanline_capture_blended();
      return;
    }
    render_scanline_capture_direct_asm(param_1,param_2,param_4);
    return;
  }
  if (param_5 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x53) != '\0') {
    render_scanline_capture_blended_3d();
    return;
  }
  render_scanline_capture_direct_3d_asm(param_1,param_2,param_5);
  return;
}


