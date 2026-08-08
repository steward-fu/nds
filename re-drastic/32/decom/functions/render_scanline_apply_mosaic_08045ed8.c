/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_mosaic
 * Address  : 08045ed8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_apply_mosaic(u16 *pixel_buffer,u32 mosaic_factor)

{
  u16 uVar1;
  u16 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    do {
      uVar4 = uVar5;
      uVar3 = uVar4 + 1;
      puVar2 = pixel_buffer + uVar4;
      uVar1 = pixel_buffer[uVar4];
      uVar5 = uVar3;
    } while (mosaic_factor == 0);
    if (0xff < uVar3) break;
    uVar5 = uVar4 + mosaic_factor + 1;
    while( true ) {
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
      if (uVar5 == uVar3) break;
      if (uVar3 == 0x100) {
        return;
      }
    }
  }
  return;
}


