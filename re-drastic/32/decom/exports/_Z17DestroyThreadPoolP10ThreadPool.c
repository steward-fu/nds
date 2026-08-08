/*
 * Ghidra decompilation
 *
 * Function : _Z17DestroyThreadPoolP10ThreadPool
 * Address  : 08102ef4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void DestroyThreadPool(ThreadPool *Pool)

{
  int iVar1;
  int rc;
  uint uVar2;
  ThreadPool *pTVar3;
  pthread_mutex_t_conflict *ppVar4;
  
  if (Pool == (ThreadPool *)0x0) {
    return;
  }
  if (Pool != GlobalPool) {
    return;
  }
  if (GlobalPoolUseCount == 0) {
    return;
  }
  GlobalPoolUseCount = GlobalPoolUseCount - 1;
  if (GlobalPoolUseCount == 0) {
    uVar2 = Pool->QueueTop - Pool->QueueBottom & 0x1f;
    Pool->ActiveThreads = uVar2;
    if (uVar2 != 0) {
      Pool->AnyActive = true;
      ppVar4 = &Pool->AnyActiveMutex;
      pthread_mutex_lock((pthread_mutex_t *)&Pool->QueuedTasksCntMutex);
      Pool->QueuedTasksCnt = Pool->QueuedTasksCnt + Pool->ActiveThreads;
      pthread_mutex_unlock((pthread_mutex_t *)&Pool->QueuedTasksCntMutex);
      pthread_cond_broadcast((pthread_cond_t *)&Pool->QueuedTasksCntCond);
      pthread_mutex_lock((pthread_mutex_t *)ppVar4);
      while (Pool->AnyActive != false) {
        iVar1 = pthread_cond_wait((pthread_cond_t *)&Pool->AnyActiveCond,(pthread_mutex_t *)ppVar4);
        if (iVar1 != 0) {
          ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\npthread_cond_wait error %d");
          ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)ppVar4);
    }
    ppVar4 = &Pool->QueuedTasksCntMutex;
    Pool->Closing = true;
    pthread_mutex_lock((pthread_mutex_t *)ppVar4);
    Pool->QueuedTasksCnt = Pool->QueuedTasksCnt + 0x20;
    pthread_mutex_unlock((pthread_mutex_t *)ppVar4);
    pthread_cond_broadcast((pthread_cond_t *)&Pool->QueuedTasksCntCond);
    if (Pool->MaxAllowedThreads != 0) {
      uVar2 = 0;
      pTVar3 = Pool;
      do {
        pTVar3 = (ThreadPool *)pTVar3->ThreadHandles;
        uVar2 = uVar2 + 1;
        pthread_join(*(pthread_t *)pTVar3,(void **)0x0);
      } while (uVar2 < Pool->MaxAllowedThreads);
    }
    pthread_mutex_destroy((pthread_mutex_t *)&Pool->CritSection);
    pthread_cond_destroy((pthread_cond_t *)&Pool->AnyActiveCond);
    pthread_mutex_destroy((pthread_mutex_t *)&Pool->AnyActiveMutex);
    pthread_cond_destroy((pthread_cond_t *)&Pool->QueuedTasksCntCond);
    pthread_mutex_destroy((pthread_mutex_t *)ppVar4);
    operator_delete(Pool);
    return;
  }
  return;
}


