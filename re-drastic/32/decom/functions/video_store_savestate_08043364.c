/*
 * Ghidra decompilation
 *
 * Function : video_store_savestate
 * Address  : 08043364
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_store_savestate(video_struct *video,mem_file_struct *savestate_file,u32 version)

{
  int iVar1;
  bool bVar2;
  u16 dummy_scanline_number;
  
  iVar1 = __stack_chk_guard;
  video_2d_store_savestate(video->video_2d_engine,savestate_file,version);
  video_2d_store_savestate(video->video_2d_engine + 1,savestate_file,version);
  geometry_store_savestate(&video->geometry,savestate_file,version);
  *(u16 *)savestate_file->buffer_ptr = dummy_scanline_number;
  bVar2 = iVar1 == __stack_chk_guard;
  savestate_file->buffer_ptr = savestate_file->buffer_ptr + 2;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


