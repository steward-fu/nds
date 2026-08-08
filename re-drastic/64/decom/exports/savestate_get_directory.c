/*
 * Ghidra decompilation
 *
 * Function : savestate_get_directory
 * Address  : 001750a0
 * Program  : drastic64
 */


void savestate_get_directory(long param_1,undefined8 param_2)

{
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%csavestates",param_1 + 0x8ab80,0x2f);
  return;
}


