/*
 * Ghidra decompilation
 *
 * Function : savestate_index_timestamp
 * Address  : 08095da0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

time_t savestate_index_timestamp(system_struct *system,u32 index)

{
  int iVar1;
  int iVar2;
  stat stat_result;
  char path [1152];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x480,"%s%csavestates%c%s_%d.dss",system->user_root_path,0x2f,0x2f,
                system->gamecard_name,index);
  iVar2 = __xstat(3,path,(stat *)&stat_result);
  if (iVar2 != 0) {
    stat_result.st_mtim.tv_sec = 0;
  }
  if (iVar1 == __stack_chk_guard) {
    return stat_result.st_mtim.tv_sec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


