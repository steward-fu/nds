/*
 * Ghidra decompilation
 *
 * Function : render_scanline_apply_mosaic_visibility
 * Address  : 08045dfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_apply_mosaic_visibility(u32 *pixel_visibility,u8 mosaic_factor)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  u32 bits;
  uint uVar6;
  u8 mosaic_wrap;
  uint uVar7;
  u32 *puVar8;
  u32 wrap_shift_increment;
  u32 mosaic_mask;
  uint uVar9;
  
  uVar2 = (uint)mosaic_factor;
  uVar7 = uVar2 + 1 & 0xff;
  uVar9 = render_scanline_apply_mosaic_visibility::mosaic_masks[uVar2];
  __aeabi_idivmod(0x20,uVar7);
  puVar8 = pixel_visibility + 7;
  uVar3 = 0;
  uVar5 = *pixel_visibility & uVar9;
  uVar6 = uVar5;
  while( true ) {
    __aeabi_uidivmod((uVar7 - extraout_r1) + uVar3,uVar7);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 << 1;
        uVar6 = uVar6 | uVar5;
      } while (uVar2 != uVar3);
    }
    uVar1 = uVar6 >> 0x1f;
    *pixel_visibility = uVar6;
    if (pixel_visibility == puVar8) break;
    pixel_visibility = pixel_visibility + 1;
    uVar5 = *pixel_visibility & uVar9 << (extraout_r1_00 & 0xff);
    uVar3 = extraout_r1_00;
    uVar6 = uVar5;
    if (extraout_r1_00 != 0) {
      uVar4 = 0;
      do {
        uVar6 = uVar6 | uVar1 << (uVar4 & 0xff);
        uVar4 = uVar4 + 1;
      } while (uVar4 != extraout_r1_00);
    }
  }
  return;
}


