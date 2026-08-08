/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_thread
 * Address  : 00158e50
 * Program  : drastic64
 */


void video_3d_render_thread(long param_1)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x24000) + 8);
  __mutex = (pthread_mutex_t *)(param_1 + 0x24020);
  do {
    pthread_mutex_lock(__mutex);
    cVar1 = *(char *)(param_1 + 0x240e0);
    while (cVar1 == '\0') {
      pthread_cond_wait((pthread_cond_t *)(param_1 + 0x24080),__mutex);
      cVar1 = *(char *)(param_1 + 0x240e0);
    }
    *(undefined *)(param_1 + 0x240e0) = 0;
    pthread_mutex_unlock(__mutex);
    if (*(int *)(lVar2 + 0x4a0) == 0) {
      video_3d_render_bins_1x(param_1);
    }
    else {
      video_3d_render_bins_4x(param_1);
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x24050));
    *(undefined *)(param_1 + 0x240e1) = 1;
    pthread_cond_signal((pthread_cond_t *)(param_1 + 0x240b0));
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x24050));
  } while( true );
}


