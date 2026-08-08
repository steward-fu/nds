/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_obj_combine_pixels
 * Address  : 080bc184
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_obj_combine_pixels(u16 *obj_scanline_pixels,u16 *obj_pixels,u32 width)

{
  uint uVar1;
  u16 *puVar2;
  u16 *puVar3;
  
  if (width != 0) {
    uVar1 = 0;
    puVar2 = obj_scanline_pixels + 0x10;
    puVar3 = obj_pixels + 0x10;
    do {
      uVar1 = uVar1 + 0x10;
      if ((puVar3[-0x10] & 0x8000) != 0) {
        puVar2[-0x10] = puVar3[-0x10];
      }
      if ((puVar3[-0xf] & 0x8000) != 0) {
        puVar2[-0xf] = puVar3[-0xf];
      }
      if ((puVar3[-0xe] & 0x8000) != 0) {
        puVar2[-0xe] = puVar3[-0xe];
      }
      if ((puVar3[-0xd] & 0x8000) != 0) {
        puVar2[-0xd] = puVar3[-0xd];
      }
      if ((puVar3[-0xc] & 0x8000) != 0) {
        puVar2[-0xc] = puVar3[-0xc];
      }
      if ((puVar3[-0xb] & 0x8000) != 0) {
        puVar2[-0xb] = puVar3[-0xb];
      }
      if ((puVar3[-10] & 0x8000) != 0) {
        puVar2[-10] = puVar3[-10];
      }
      if ((puVar3[-9] & 0x8000) != 0) {
        puVar2[-9] = puVar3[-9];
      }
      if ((puVar3[-8] & 0x8000) != 0) {
        puVar2[-8] = puVar3[-8];
      }
      if ((puVar3[-7] & 0x8000) != 0) {
        puVar2[-7] = puVar3[-7];
      }
      if ((puVar3[-6] & 0x8000) != 0) {
        puVar2[-6] = puVar3[-6];
      }
      if ((puVar3[-5] & 0x8000) != 0) {
        puVar2[-5] = puVar3[-5];
      }
      if ((puVar3[-4] & 0x8000) != 0) {
        puVar2[-4] = puVar3[-4];
      }
      if ((puVar3[-3] & 0x8000) != 0) {
        puVar2[-3] = puVar3[-3];
      }
      if ((puVar3[-2] & 0x8000) != 0) {
        puVar2[-2] = puVar3[-2];
      }
      if ((puVar3[-1] & 0x8000) != 0) {
        puVar2[-1] = puVar3[-1];
      }
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (uVar1 < width);
  }
  return;
}


