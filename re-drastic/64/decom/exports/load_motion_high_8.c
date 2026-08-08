/*
 * Ghidra decompilation
 *
 * Function : load_motion_high_8
 * Address  : 001116e0
 * Program  : drastic64
 */


void load_motion_high_8(long param_1)

{
  motion_pack_load(*(long *)(param_1 + 0xfd4b8) + 0x8e8);
  return;
}


