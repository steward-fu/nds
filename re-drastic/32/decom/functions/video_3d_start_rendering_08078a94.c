/*
 * Ghidra decompilation
 *
 * Function : video_3d_start_rendering
 * Address  : 08078a94
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_start_rendering(video_struct *video,u32 skip_frame)

{
  uint uVar1;
  u32 uVar2;
  pthread_mutex_t *__mutex;
  
  if ((video->video_3d).threaded_3d_sleeping != '\0') {
    pthread_cond_signal((pthread_cond_t *)&(video->video_3d).cv_wakeup_thread);
  }
  __mutex = &(video->video_3d).mutex_wait_for_render_begin;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  (video->video_3d).ready_to_render = '\x01';
  (video->video_3d).skip_frame = (u8)skip_frame;
  uVar1 = (video->geometry).display_3d_control;
  (video->video_3d).display_3d_control = uVar1;
  if ((uVar1 & 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (u32)(video->geometry).alpha_test_reference;
  }
  (video->video_3d).alpha_test_reference = uVar2;
  pthread_cond_signal((pthread_cond_t *)&(video->video_3d).cv_wait_for_render_begin);
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  return;
}


