/*
 * Ghidra decompilation
 *
 * Function : savestate_index_to_path
 * Address  : 08095bbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void savestate_index_to_path(system_struct *system,char *path,u32 index)

{
  __sprintf_chk(path,1,0xffffffff,"%s%csavestates%c%s_%d.dss",system->user_root_path,0x2f,0x2f,
                system->gamecard_name,index);
  return;
}


