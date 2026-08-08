/*
 * Ghidra decompilation
 *
 * Function : savestate_index_to_file_name
 * Address  : 08095b80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void savestate_index_to_file_name(system_struct *system,char *file_name,u32 index)

{
  __sprintf_chk(file_name,1,0xffffffff,"%s_%d.dss",system->gamecard_name,index);
  return;
}


