/*
 * Ghidra decompilation
 *
 * Function : video_render_thread
 * Address  : 080287e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable video:video_struct *[r0:4] conflicts with parameter, skipped. */

void * video_render_thread(void *thread_data)

{
  char cVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)((int)thread_data + 0x43ac98);
  do {
    pthread_mutex_lock(__mutex);
    cVar1 = *(char *)((int)thread_data + 0x43ad28);
    while (cVar1 == '\0') {
      pthread_cond_wait((pthread_cond_t *)((int)thread_data + 0x43acc8),__mutex);
      cVar1 = *(char *)((int)thread_data + 0x43ad28);
    }
    *(undefined *)((int)thread_data + 0x43ad28) = 0;
    pthread_mutex_unlock(__mutex);
    video_2d_render_scanlines
              ((video_2d_struct *)((int)thread_data + 0x82d30),0,0xbf,(capture_settings_struct *)0x0
              );
    pthread_mutex_lock((pthread_mutex_t *)((int)thread_data + 0x43acb0));
    *(undefined *)((int)thread_data + 0x43ad29) = 1;
    pthread_cond_signal((pthread_cond_t *)((int)thread_data + 0x43acf8));
    pthread_mutex_unlock((pthread_mutex_t *)((int)thread_data + 0x43acb0));
  } while( true );
}


