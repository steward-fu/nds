/*
 * Ghidra decompilation
 *
 * Function : render_scanline_obj_tile_span_4bpp_hflip_yes
 * Address  : 080c0278
 * Program  : drastic
 */


void render_scanline_obj_tile_span_4bpp_hflip_yes(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 - *(short *)(param_1 + 0x40);
  if ((*(uint *)(param_1 + 0x4b) & 0x100) != 0) {
    uVar1 = -uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x080c02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_080c02b8 + ((*(uint *)(param_1 + 0x4b) << 9) >> 0x1c) * 4))
            (param_1,param_2,*(undefined4 *)(param_1 + 0x30),uVar1 & 7);
  return;
}


