/*
 * Ghidra decompilation
 *
 * Function : savestate_index_to_file_name
 * Address  : 001750d0
 * Program  : drastic64
 */


void savestate_index_to_file_name(long param_1,undefined8 param_2,undefined4 param_3)

{
  __sprintf_chk(param_2,1,0xffffffffffffffff,"%s_%d.dss",param_1 + 0x8b380,param_3);
  return;
}


