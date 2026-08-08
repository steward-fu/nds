/*
 * Ghidra decompilation
 *
 * Function : load_motion_hb_high_32
 * Address  : 00111760
 * Program  : drastic64
 */


uint load_motion_hb_high_32(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = motion_pack_load(*(long *)(param_1 + 0xfd4b8) + 0x8e8);
  uVar2 = motion_pack_load(*(long *)(param_1 + 0xfd4b8) + 0x8e8);
  return (uVar2 & 0xff) << 0x10 | uVar1 & 0xff;
}


