/*
 * Ghidra decompilation
 *
 * Function : video_3d_finish_rendering
 * Address  : 00159660
 * Program  : drastic64
 */


int video_3d_finish_rendering(long param_1)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)(BYTE_ARRAY_002494c1 + param_1 + 0x1f);
  pthread_mutex_lock(__mutex);
  cVar1 = *(char *)((long)&DWORD_002495d0 + param_1 + 1);
  while (cVar1 == '\x01') {
    pthread_cond_wait((pthread_cond_t *)(BYTE_ARRAY_0024951d + param_1 + 0x53),__mutex);
    cVar1 = *(char *)((long)&DWORD_002495d0 + param_1 + 1);
  }
  *(undefined8 *)(BYTE_ARRAY_0024949d + param_1 + 3) =
       *(undefined8 *)((long)&DWORD_00249498 + param_1);
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}


