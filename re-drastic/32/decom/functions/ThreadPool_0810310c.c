/*
 * Ghidra decompilation
 *
 * Function : ThreadPool
 * Address  : 0810310c
 * Program  : drastic
 */


/* DWARF original prototype: ThreadPool * ThreadPool(ThreadPool * this, uint MaxThreads) */

ThreadPool * __thiscall ThreadPool::ThreadPool(ThreadPool *this,uint MaxThreads)

{
  int iVar1;
  THREAD_HANDLE TVar2;
  void *extraout_r1;
  void *Data;
  void *extraout_r1_00;
  void *extraout_r1_01;
  uint uVar3;
  uint uVar4;
  ThreadPool *pTVar5;
  
  if (MaxThreads < 0x21) {
    if (MaxThreads == 0) {
      this->MaxAllowedThreads = 1;
    }
    else {
      this->MaxAllowedThreads = MaxThreads;
    }
  }
  else {
    this->MaxAllowedThreads = 0x20;
  }
  this->Closing = false;
  this->QueuedTasksCnt = 0;
  this->AnyActive = false;
  iVar1 = pthread_mutex_init((pthread_mutex_t *)&this->CritSection,(pthread_mutexattr_t *)0x0);
  if ((((iVar1 != 0) ||
       (iVar1 = pthread_cond_init((pthread_cond_t *)&this->AnyActiveCond,(pthread_condattr_t *)0x0),
       iVar1 != 0)) ||
      (iVar1 = pthread_mutex_init((pthread_mutex_t *)&this->AnyActiveMutex,
                                  (pthread_mutexattr_t *)0x0), iVar1 != 0)) ||
     ((iVar1 = pthread_cond_init((pthread_cond_t *)&this->QueuedTasksCntCond,
                                 (pthread_condattr_t *)0x0), iVar1 != 0 ||
      (iVar1 = pthread_mutex_init((pthread_mutex_t *)&this->QueuedTasksCntMutex,
                                  (pthread_mutexattr_t *)0x0), Data = extraout_r1_01, iVar1 != 0))))
  {
    ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\nThread pool initialization failed.");
    ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
    Data = extraout_r1;
  }
  if (this->MaxAllowedThreads != 0) {
    uVar4 = 0;
    pTVar5 = this;
    do {
      uVar4 = uVar4 + 1;
      TVar2 = ThreadCreate((NATIVE_THREAD_PTR)this,Data);
      uVar3 = this->MaxAllowedThreads;
      pTVar5 = (ThreadPool *)pTVar5->ThreadHandles;
      *(THREAD_HANDLE *)pTVar5 = TVar2;
      Data = extraout_r1_00;
    } while (uVar4 < uVar3);
  }
  this->ActiveThreads = 0;
  this->QueueTop = 0;
  this->QueueBottom = 0;
  return this;
}


