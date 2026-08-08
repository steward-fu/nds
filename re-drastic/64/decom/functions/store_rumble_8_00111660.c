/*
 * Ghidra decompilation
 *
 * Function : store_rumble_8
 * Address  : 00111660
 * Program  : drastic64
 */


void store_rumble_8(long param_1,undefined8 param_2,undefined4 param_3)

{
  rumble_pack_store(*(long *)(param_1 + 0xfd4b8) + 0x900,param_3);
  return;
}


