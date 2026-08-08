/*
 * Ghidra decompilation
 *
 * Function : render_scanline_horizontal_shift_3d
 * Address  : 08049010
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_horizontal_shift_3d(u32 *dest,u32 *src,s32 horizontal_offset)

{
  size_t __n;
  
  if (horizontal_offset < 0) {
    memcpy(dest + -horizontal_offset,src,(horizontal_offset + 0x100) * 4);
    __n = horizontal_offset * -4;
  }
  else {
    __n = horizontal_offset * 4;
    memcpy(dest,src + horizontal_offset,(0x100 - horizontal_offset) * 4);
    dest = dest + (0x100 - horizontal_offset);
  }
  memset(dest,0,__n);
  return;
}


