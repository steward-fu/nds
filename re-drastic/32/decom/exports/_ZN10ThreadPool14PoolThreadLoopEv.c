/*
 * Ghidra decompilation
 *
 * Function : _ZN10ThreadPool14PoolThreadLoopEv
 * Address  : 0810340c
 * Program  : drastic
 */


/* DWARF original prototype: void PoolThreadLoop(ThreadPool * this) */

void __thiscall ThreadPool::PoolThreadLoop(ThreadPool *this)

{
  int iVar1;
  int rc;
  uint uVar2;
  pthread_mutex_t_conflict *__mutex;
  CRITSECT_HANDLE *__mutex_00;
  PTHREAD_PROC p_Var3;
  void *pvVar4;
  
  __mutex = &this->QueuedTasksCntMutex;
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)__mutex);
    while (this->QueuedTasksCnt == 0) {
      iVar1 = pthread_cond_wait((pthread_cond_t *)&this->QueuedTasksCntCond,
                                (pthread_mutex_t *)__mutex);
      if (iVar1 != 0) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\npthread_cond_wait error %d");
        ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
      }
    }
    this->QueuedTasksCnt = this->QueuedTasksCnt - 1;
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
    if (this->Closing != false) break;
    __mutex_00 = &this->CritSection;
    pthread_mutex_lock((pthread_mutex_t *)__mutex_00);
    uVar2 = this->QueueBottom;
    p_Var3 = this->TaskQueue[uVar2].Proc;
    pvVar4 = this->TaskQueue[uVar2].Param;
    this->QueueBottom = uVar2 + 1 & 0x1f;
    pthread_mutex_unlock((pthread_mutex_t *)__mutex_00);
    (*p_Var3)(pvVar4);
    pthread_mutex_lock((pthread_mutex_t *)__mutex_00);
    uVar2 = this->ActiveThreads - 1;
    this->ActiveThreads = uVar2;
    if (uVar2 == 0) {
      pthread_mutex_lock((pthread_mutex_t *)&this->AnyActiveMutex);
      this->AnyActive = false;
      pthread_cond_signal((pthread_cond_t *)&this->AnyActiveCond);
      pthread_mutex_unlock((pthread_mutex_t *)&this->AnyActiveMutex);
    }
    pthread_mutex_unlock((pthread_mutex_t *)__mutex_00);
  }
  return;
}


