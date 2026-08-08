/*
 * Ghidra decompilation
 *
 * Function : FUN_0012fa4c
 * Address  : 0012fa4c
 * Program  : drastic64
 */


void FUN_0012fa4c(long param_1)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  
  __mutex = (pthread_mutex_t *)(polygon_sort_list_13776 + param_1 + 0x6e260);
  do {
    pthread_mutex_lock(__mutex);
    cVar1 = polygon_sort_list_13776[param_1 + 0x6e320];
    while ((cVar1 == '\0' &&
           (pthread_cond_wait((pthread_cond_t *)(polygon_sort_list_13776 + param_1 + 0x6e2c0),
                              __mutex), polygon_sort_list_13776[param_1 + 0x6e320] == '\0'))) {
      pthread_cond_wait((pthread_cond_t *)(polygon_sort_list_13776 + param_1 + 0x6e2c0),__mutex);
      cVar1 = polygon_sort_list_13776[param_1 + 0x6e320];
    }
    polygon_sort_list_13776[param_1 + 0x6e320] = 0;
    pthread_mutex_unlock(__mutex);
    video_2d_render_scanlines(param_1 + 0x84298,0,0xbf,0);
    pthread_mutex_lock((pthread_mutex_t *)(polygon_sort_list_13776 + param_1 + 0x6e290));
    polygon_sort_list_13776[param_1 + 0x6e321] = 1;
    pthread_cond_signal((pthread_cond_t *)(polygon_sort_list_13776 + param_1 + 0x6e2f0));
    pthread_mutex_unlock((pthread_mutex_t *)(polygon_sort_list_13776 + param_1 + 0x6e290));
  } while( true );
}


