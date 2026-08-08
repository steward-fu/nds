/*
 * Ghidra decompilation
 *
 * Function : savestate_index_to_path
 * Address  : 00175100
 * Program  : drastic64
 */


void savestate_index_to_path(long param_1,undefined8 param_2,undefined4 param_3)

{
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s%csavestates%c%s_%d.dss",param_1 + 0x8ab80,0x2f,0x2f
                ,param_1 + 0x8b380,param_3);
  return;
}


