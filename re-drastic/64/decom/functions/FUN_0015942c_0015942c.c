/*
 * Ghidra decompilation
 *
 * Function : FUN_0015942c
 * Address  : 0015942c
 * Program  : drastic64
 */


void FUN_0015942c(long param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  int iVar1;
  char cVar2;
  
  __mutex = (pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5530);
  __mutex_00 = (pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5590);
  do {
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x468);
    while (iVar1 != 0) {
      polygon_sort_list_15121[param_1 + 0xe5652] = 0;
      pthread_mutex_lock(__mutex);
      cVar2 = polygon_sort_list_15121[param_1 + 0xe5650];
      while (cVar2 == '\0') {
        pthread_cond_wait((pthread_cond_t *)(polygon_sort_list_15121 + param_1 + 0xe55c0),__mutex);
        cVar2 = polygon_sort_list_15121[param_1 + 0xe5650];
      }
      *(undefined2 *)(polygon_sort_list_15121 + param_1 + 0xe5650) = 0x100;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(*(long *)(param_1 + 8) + 0x4a0) == 0) {
        update_frame_3d_1x(param_1,polygon_sort_list_15121[param_1 + 0xe5653]);
      }
      else {
        update_frame_3d_4x(param_1);
      }
      pthread_mutex_lock((pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5560));
      polygon_sort_list_15121[param_1 + 0xe5651] = 0;
      pthread_cond_signal((pthread_cond_t *)(polygon_sort_list_15121 + param_1 + 0xe55f0));
      pthread_mutex_unlock((pthread_mutex_t *)(polygon_sort_list_15121 + param_1 + 0xe5560));
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x468);
    }
    pthread_mutex_lock(__mutex_00);
    polygon_sort_list_15121[param_1 + 0xe5652] = 1;
    pthread_cond_wait((pthread_cond_t *)(polygon_sort_list_15121 + param_1 + 0xe5620),__mutex_00);
    pthread_mutex_unlock(__mutex_00);
  } while( true );
}


