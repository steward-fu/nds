/*
 * Ghidra decompilation
 *
 * Function : render_scanline_update_window_mask
 * Address  : 08046448
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_scanline_update_window_mask(u32 *dest,u32 end_points)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined auVar4 [16];
  u32 x_start;
  uint uVar5;
  u32 left_mask;
  u32 end_block;
  u32 block;
  uint uVar6;
  
  uVar5 = end_points & 0xff;
  uVar1 = end_points >> 8;
  if (uVar5 == 0) {
    if ((uVar1 & 0xfffffeff) != 0) {
      uVar5 = 0x100;
LAB_0804649c:
      if (uVar1 <= uVar5) {
        uVar2 = end_points >> 0xd;
        uVar3 = uVar5 - 1 >> 5;
        *(undefined8 *)dest = 0;
        *(undefined8 *)(dest + 2) = 0;
        uVar5 = ~(-2 << (uVar5 - 1 & 0x1f));
        *(undefined8 *)(dest + 4) = 0;
        *(undefined8 *)(dest + 6) = 0;
        uVar1 = -1 << (uVar1 & 0x1f);
        if (uVar2 != uVar3) {
          uVar6 = uVar2 + 1;
          dest[uVar2] = dest[uVar2] | uVar1;
          if (uVar6 < uVar3) {
            memset(dest + uVar2 + 1,0xff,((uVar3 - uVar2) + 0x3fffffff) * 4);
            uVar6 = uVar3;
          }
          dest[uVar6] = dest[uVar6] | uVar5;
          return;
        }
        dest[uVar2] = dest[uVar2] | uVar1 & uVar5;
        return;
      }
      uVar2 = uVar5 >> 5;
      auVar4 = SIMDExpandImmediate(0,0xe,0xff);
      uVar3 = uVar1 - 1 >> 5;
      *(longlong *)dest = auVar4._0_8_;
      *(longlong *)(dest + 2) = auVar4._8_8_;
      uVar1 = -2 << (uVar1 - 1 & 0x1f);
      *(longlong *)(dest + 4) = auVar4._0_8_;
      *(longlong *)(dest + 6) = auVar4._8_8_;
      uVar5 = -1 << (uVar5 & 0x1f);
      if (uVar2 != uVar3) {
        uVar6 = uVar2 + 1;
        dest[uVar2] = dest[uVar2] & ~uVar5;
        if (uVar6 < uVar3) {
          uVar6 = ((uVar3 - 1) + uVar6) - uVar2;
          memset(dest + uVar2 + 1,0,((uVar3 + 0x3fffffff) - uVar2) * 4);
        }
        dest[uVar6] = dest[uVar6] & uVar1;
        return;
      }
      dest[uVar2] = dest[uVar2] & ~(uVar5 & ~uVar1);
      return;
    }
  }
  else if (uVar1 != uVar5) goto LAB_0804649c;
  *(undefined8 *)dest = 0;
  *(undefined8 *)(dest + 2) = 0;
  *(undefined8 *)(dest + 4) = 0;
  *(undefined8 *)(dest + 6) = 0;
  return;
}


