/*
 * Ghidra decompilation
 *
 * Function : video_3d_run_thread
 * Address  : 080788e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * video_3d_run_thread(void *_video)

{
  char cVar1;
  video_struct *video;
  int iVar2;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  
  __mutex = (pthread_mutex_t *)((int)_video + 0x34d060);
  __mutex_00 = (pthread_mutex_t *)((int)_video + 0x34d090);
  do {
    iVar2 = *(int *)(*(int *)((int)_video + 4) + 0x468);
    while (iVar2 != 0) {
      *(undefined *)((int)_video + 0x34d13a) = 0;
      pthread_mutex_lock(__mutex);
      cVar1 = *(char *)((int)_video + 0x34d138);
      while (cVar1 == '\0') {
        pthread_cond_wait((pthread_cond_t *)((int)_video + 0x34d0a8),__mutex);
        cVar1 = *(char *)((int)_video + 0x34d138);
      }
      *(undefined *)((int)_video + 0x34d138) = 0;
      *(undefined *)((int)_video + 0x34d139) = 1;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(*(int *)((int)_video + 4) + 0x49c) == 0) {
        update_frame_3d_1x((video_struct *)_video,(uint)*(byte *)((int)_video + 0x34d13b));
      }
      else {
        update_frame_3d_4x((video_struct *)_video,(uint)*(byte *)((int)_video + 0x34d13b));
      }
      pthread_mutex_lock((pthread_mutex_t *)((int)_video + 0x34d078));
      *(undefined *)((int)_video + 0x34d139) = 0;
      pthread_cond_signal((pthread_cond_t *)((int)_video + 0x34d0d8));
      pthread_mutex_unlock((pthread_mutex_t *)((int)_video + 0x34d078));
      iVar2 = *(int *)(*(int *)((int)_video + 4) + 0x468);
    }
    pthread_mutex_lock(__mutex_00);
    *(undefined *)((int)_video + 0x34d13a) = 1;
    pthread_cond_wait((pthread_cond_t *)((int)_video + 0x34d108),__mutex_00);
    pthread_mutex_unlock(__mutex_00);
  } while( true );
}


