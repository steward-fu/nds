/*
 * Ghidra decompilation
 *
 * Function : load_state_index
 * Address  : 08095ce4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 load_state_index(system_struct *system,u32 index,u16 *snapshot_top,u16 *snapshot_bottom,
                    u32 snapshot_only)

{
  int iVar1;
  s32 sVar2;
  char path [1152];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(path,1,0x480,"%s%csavestates%c%s_%d.dss",system->user_root_path,0x2f,0x2f,
                system->gamecard_name,index);
  sVar2 = load_state(system,path,snapshot_top,snapshot_bottom,snapshot_only);
  if (iVar1 == __stack_chk_guard) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


