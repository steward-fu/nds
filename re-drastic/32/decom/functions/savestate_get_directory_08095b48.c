/*
 * Ghidra decompilation
 *
 * Function : savestate_get_directory
 * Address  : 08095b48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void savestate_get_directory(system_struct *system,char *path)

{
  __sprintf_chk(path,1,0xffffffff,"%s%csavestates",system->user_root_path,0x2f);
  return;
}


