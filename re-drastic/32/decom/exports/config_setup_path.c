/*
 * Ghidra decompilation
 *
 * Function : config_setup_path
 * Address  : 08097640
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void config_setup_path(system_struct *system,char *dest,char *file_name)

{
  __sprintf_chk(dest,1,0xffffffff,"%s%cconfig%c%s",system->user_root_path,0x2f,0x2f,file_name);
  return;
}


