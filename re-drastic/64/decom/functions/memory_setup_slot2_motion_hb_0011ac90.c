/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_motion_hb
 * Address  : 0011ac90
 * Program  : drastic64
 */


undefined8 memory_setup_slot2_motion_hb(long param_1)

{
  long extraout_x18;
  
  map_cartridge_region_motion_hb(param_1,param_1 + 0xfba98);
  map_cartridge_region_motion_hb(extraout_x18,extraout_x18 + 0xfc698);
  return 0;
}


