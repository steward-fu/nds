/*
 * Ghidra decompilation
 *
 * Function : load_motion_high_16
 * Address  : 00111730
 * Program  : drastic64
 */


undefined load_motion_high_16(long param_1)

{
  undefined uVar1;
  
  uVar1 = motion_pack_load(*(long *)(param_1 + 0xfd4b8) + 0x8e8);
  return uVar1;
}


