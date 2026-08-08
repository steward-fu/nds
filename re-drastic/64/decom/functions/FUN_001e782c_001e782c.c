/*
 * Ghidra decompilation
 *
 * Function : FUN_001e782c
 * Address  : 001e782c
 * Program  : drastic64
 */


int FUN_001e782c(uint *param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  pthread_cond_t *__cond;
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0xee);
  __mutex_00 = (pthread_mutex_t *)(param_1 + 0xd4);
  __cond = (pthread_cond_t *)(param_1 + 200);
  uVar3 = param_1[0xc4] - param_1[0xc5] & 0x1f;
  param_1[0x42] = uVar3;
  if (uVar3 != 0) {
    *(undefined *)(param_1 + 0xe0) = 1;
    pthread_mutex_lock(__mutex_00);
    param_1[199] = param_1[199] + param_1[0x42];
    pthread_mutex_unlock(__mutex_00);
    pthread_cond_broadcast(__cond);
    pthread_mutex_lock(__mutex);
    while (*(char *)(param_1 + 0xe0) != '\0') {
      while (uVar3 = pthread_cond_wait((pthread_cond_t *)(param_1 + 0xe2),__mutex), uVar3 != 0) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar3);
        ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
        if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_001e798c;
      }
    }
LAB_001e798c:
    pthread_mutex_unlock(__mutex);
  }
  *(undefined *)(param_1 + 0xc6) = 1;
  pthread_mutex_lock(__mutex_00);
  param_1[199] = param_1[199] + 0x20;
  pthread_mutex_unlock(__mutex_00);
  pthread_cond_broadcast(__cond);
  lVar4 = 0;
  if (*param_1 != 0) {
    do {
      lVar1 = lVar4 * 2;
      lVar4 = lVar4 + 1;
      pthread_join(*(pthread_t *)(param_1 + lVar1 + 2),(void **)0x0);
    } while ((uint)lVar4 < *param_1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xfa));
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 0xe2));
  pthread_mutex_destroy(__mutex);
  pthread_cond_destroy(__cond);
  iVar2 = pthread_mutex_destroy(__mutex_00);
  return iVar2;
}


