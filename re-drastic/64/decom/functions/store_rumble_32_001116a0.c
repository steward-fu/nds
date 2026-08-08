/*
 * Ghidra decompilation
 *
 * Function : store_rumble_32
 * Address  : 001116a0
 * Program  : drastic64
 */


void store_rumble_32(long param_1,undefined8 param_2,uint param_3)

{
  rumble_pack_store(*(long *)(param_1 + 0xfd4b8) + 0x900,param_3);
  rumble_pack_store(*(long *)(param_1 + 0xfd4b8) + 0x900,param_3 >> 0x10 & 0xff);
  return;
}


