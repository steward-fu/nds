/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_gba
 * Address  : 0011a7e0
 * Program  : drastic64
 */


undefined8 memory_setup_slot2_gba(long param_1,undefined8 param_2,undefined4 param_3)

{
  long extraout_x14;
  undefined8 extraout_x15;
  ulong extraout_x18;
  
  map_cartridge_region_gba(param_1,param_1 + 0xfba98,param_2,param_3);
  map_cartridge_region_gba
            (extraout_x14,extraout_x14 + 0xfc698,extraout_x15,extraout_x18 & 0xffffffff);
  return 0;
}


