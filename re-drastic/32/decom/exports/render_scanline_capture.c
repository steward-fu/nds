/*
 * Ghidra decompilation
 *
 * Function : render_scanline_capture
 * Address  : 08048bc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_capture
               (capture_settings_struct *capture_settings,u16 *dest,u16 *source_capture,
               u8 *source_full,u32 *source_3d)

{
  if (capture_settings->mode_a != '\x02') {
    if (capture_settings->blend == '\0') {
      render_scanline_capture_direct(capture_settings,dest,source_full);
      return;
    }
    render_scanline_capture_blended(capture_settings,dest,source_capture,source_full);
    return;
  }
  if (source_3d == (u32 *)0x0) {
    return;
  }
  if (capture_settings->blend != '\0') {
    render_scanline_capture_blended_3d(capture_settings,dest,source_capture,source_3d);
    return;
  }
  render_scanline_capture_direct_3d(capture_settings,dest,source_3d);
  return;
}


