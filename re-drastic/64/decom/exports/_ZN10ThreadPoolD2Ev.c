/*
 * Ghidra decompilation
 *
 * Function : _ZN10ThreadPoolD2Ev
 * Address  : 001e7830
 * Program  : drastic64
 */


/* ThreadPool::~ThreadPool() */

int __thiscall ThreadPool::~ThreadPool(ThreadPool *this)

{
  long lVar1;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  pthread_cond_t *__cond;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x3b8);
  __mutex_00 = (pthread_mutex_t *)(this + 0x350);
  __cond = (pthread_cond_t *)(this + 800);
  uVar3 = *(int *)(this + 0x310) - *(int *)(this + 0x314) & 0x1f;
  *(uint *)(this + 0x108) = uVar3;
  if (uVar3 != 0) {
    this[0x380] = (ThreadPool)0x1;
    pthread_mutex_lock(__mutex_00);
    *(int *)(this + 0x31c) = *(int *)(this + 0x31c) + *(int *)(this + 0x108);
    pthread_mutex_unlock(__mutex_00);
    pthread_cond_broadcast(__cond);
    pthread_mutex_lock(__mutex);
    while (this[0x380] != (ThreadPool)0x0) {
      while (uVar3 = pthread_cond_wait((pthread_cond_t *)(this + 0x388),__mutex), uVar3 != 0) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar3);
        ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
        if (this[0x380] == (ThreadPool)0x0) goto LAB_001e798c;
      }
    }
LAB_001e798c:
    pthread_mutex_unlock(__mutex);
  }
  this[0x318] = (ThreadPool)0x1;
  pthread_mutex_lock(__mutex_00);
  *(int *)(this + 0x31c) = *(int *)(this + 0x31c) + 0x20;
  pthread_mutex_unlock(__mutex_00);
  pthread_cond_broadcast(__cond);
  lVar4 = 0;
  if (*(int *)this != 0) {
    do {
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      pthread_join(*(pthread_t *)(this + lVar1 + 8),(void **)0x0);
    } while ((uint)lVar4 < *(uint *)this);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 1000));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x388));
  pthread_mutex_destroy(__mutex);
  pthread_cond_destroy(__cond);
  iVar2 = pthread_mutex_destroy(__mutex_00);
  return iVar2;
}


