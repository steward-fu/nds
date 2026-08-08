/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_thread
 * Address  : 080782dc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * video_3d_render_thread(void *thread_data)

{
  char cVar1;
  video_3d_render_target_struct *render_target;
  pthread_mutex_t *__mutex;
  config_struct *config;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)((int)thread_data + 0x24014);
  iVar2 = *(int *)(*(int *)((int)thread_data + 0x24000) + 4);
  do {
    pthread_mutex_lock(__mutex);
    cVar1 = *(char *)((int)thread_data + 0x240a8);
    while (cVar1 == '\0') {
      pthread_cond_wait((pthread_cond_t *)((int)thread_data + 0x24048),__mutex);
      cVar1 = *(char *)((int)thread_data + 0x240a8);
    }
    *(undefined *)((int)thread_data + 0x240a8) = 0;
    pthread_mutex_unlock(__mutex);
    if (*(int *)(iVar2 + 0x49c) == 0) {
      video_3d_render_bins_1x((video_3d_render_target_struct *)thread_data);
    }
    else {
      video_3d_render_bins_4x((video_3d_render_target_struct *)thread_data);
    }
    pthread_mutex_lock((pthread_mutex_t *)((int)thread_data + 0x2402c));
    *(undefined *)((int)thread_data + 0x240a9) = 1;
    pthread_cond_signal((pthread_cond_t *)((int)thread_data + 0x24078));
    pthread_mutex_unlock((pthread_mutex_t *)((int)thread_data + 0x2402c));
  } while( true );
}


