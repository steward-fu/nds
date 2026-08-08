/*
 * Ghidra decompilation
 *
 * Function : save_state_index
 * Address  : 08095c10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 save_state_index(system_struct *system,u32 index,u16 *snapshot_top,u16 *snapshot_bottom)

{
  int iVar1;
  s32 sVar2;
  char savestate_directory [1024];
  char savestate_file_name [1024];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(savestate_directory,1,0x400,"%s%csavestates",system->user_root_path,0x2f);
  __sprintf_chk(savestate_file_name,1,0x400,"%s_%d.dss",system->gamecard_name,index);
  sVar2 = save_state(system,savestate_directory,savestate_file_name,snapshot_top,snapshot_bottom);
  if (iVar1 == __stack_chk_guard) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


