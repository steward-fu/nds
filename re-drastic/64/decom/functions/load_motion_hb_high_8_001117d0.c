/*
 * Ghidra decompilation
 *
 * Function : load_motion_hb_high_8
 * Address  : 001117d0
 * Program  : drastic64
 */


void load_motion_hb_high_8(long param_1,uint param_2)

{
  motion_pack_hb_load(*(long *)(param_1 + 0xfd4b8) + 0x8ee,param_2 & 0xf);
  return;
}


