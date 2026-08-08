/*
 * Ghidra decompilation
 *
 * Function : ~ThreadPool
 * Address  : 08103288
 * Program  : drastic
 */


/* DWARF original prototype: void * ~ThreadPool(ThreadPool * this, int __in_chrg) */

void * __thiscall ThreadPool::~ThreadPool(ThreadPool *this,int __in_chrg)

{
  int iVar1;
  int rc;
  uint uVar2;
  ThreadPool *pTVar3;
  pthread_mutex_t_conflict *ppVar4;
  
  uVar2 = this->QueueTop - this->QueueBottom & 0x1f;
  this->ActiveThreads = uVar2;
  if (uVar2 != 0) {
    this->AnyActive = true;
    ppVar4 = &this->AnyActiveMutex;
    pthread_mutex_lock((pthread_mutex_t *)&this->QueuedTasksCntMutex);
    this->QueuedTasksCnt = this->QueuedTasksCnt + this->ActiveThreads;
    pthread_mutex_unlock((pthread_mutex_t *)&this->QueuedTasksCntMutex);
    pthread_cond_broadcast((pthread_cond_t *)&this->QueuedTasksCntCond);
    pthread_mutex_lock((pthread_mutex_t *)ppVar4);
    while (this->AnyActive != false) {
      iVar1 = pthread_cond_wait((pthread_cond_t *)&this->AnyActiveCond,(pthread_mutex_t *)ppVar4);
      if (iVar1 != 0) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\npthread_cond_wait error %d");
        ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)ppVar4);
  }
  ppVar4 = &this->QueuedTasksCntMutex;
  this->Closing = true;
  pthread_mutex_lock((pthread_mutex_t *)ppVar4);
  this->QueuedTasksCnt = this->QueuedTasksCnt + 0x20;
  pthread_mutex_unlock((pthread_mutex_t *)ppVar4);
  pthread_cond_broadcast((pthread_cond_t *)&this->QueuedTasksCntCond);
  if (this->MaxAllowedThreads != 0) {
    uVar2 = 0;
    pTVar3 = this;
    do {
      pTVar3 = (ThreadPool *)pTVar3->ThreadHandles;
      uVar2 = uVar2 + 1;
      pthread_join(*(pthread_t *)pTVar3,(void **)0x0);
    } while (uVar2 < this->MaxAllowedThreads);
  }
  pthread_mutex_destroy((pthread_mutex_t *)&this->CritSection);
  pthread_cond_destroy((pthread_cond_t *)&this->AnyActiveCond);
  pthread_mutex_destroy((pthread_mutex_t *)&this->AnyActiveMutex);
  pthread_cond_destroy((pthread_cond_t *)&this->QueuedTasksCntCond);
  pthread_mutex_destroy((pthread_mutex_t *)ppVar4);
  return this;
}


