/*
 * Ghidra decompilation
 *
 * Function : video_3d_finish_rendering
 * Address  : 08078b68
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_finish_rendering(video_3d_struct *video_3d)

{
  pthread_mutex_t *__mutex;
  
  __mutex = &video_3d->mutex_wait_for_render_finish;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  if (video_3d->currently_rendering == '\x01') {
    do {
      pthread_cond_wait((pthread_cond_t *)&video_3d->cv_wait_for_render_finish,
                        (pthread_mutex_t *)__mutex);
    } while (video_3d->currently_rendering == '\x01');
  }
  video_3d->color_buffer_scan = video_3d->color_buffer_render;
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  return;
}


