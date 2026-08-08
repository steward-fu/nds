/*
 * Ghidra decompilation
 *
 * Function : WaitDone
 * Address  : 001e7db0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::WaitDone() */

uint ThreadPool::WaitDone(void)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  long in_x0;
  
  uVar1 = *(int *)(in_x0 + 0x310) - *(int *)(in_x0 + 0x314) & 0x1f;
  *(uint *)(in_x0 + 0x108) = uVar1;
  if (uVar1 == 0) {
    return uVar1;
  }
  *(undefined *)(in_x0 + 0x380) = 1;
  pthread_mutex_lock((pthread_mutex_t *)(in_x0 + 0x350));
  *(int *)(in_x0 + 0x31c) = *(int *)(in_x0 + 0x31c) + *(int *)(in_x0 + 0x108);
  __mutex = (pthread_mutex_t *)(in_x0 + 0x3b8);
  pthread_mutex_unlock((pthread_mutex_t *)(in_x0 + 0x350));
  pthread_cond_broadcast((pthread_cond_t *)(in_x0 + 800));
  pthread_mutex_lock(__mutex);
  while (*(char *)(in_x0 + 0x380) != '\0') {
    while (uVar1 = pthread_cond_wait((pthread_cond_t *)(in_x0 + 0x388),__mutex), uVar1 != 0) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar1);
      ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
      if (*(char *)(in_x0 + 0x380) == '\0') goto LAB_001e7e88;
    }
  }
LAB_001e7e88:
  uVar1 = pthread_mutex_unlock(__mutex);
  return uVar1;
}


