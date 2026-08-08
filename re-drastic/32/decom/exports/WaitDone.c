/*
 * Ghidra decompilation
 *
 * Function : WaitDone
 * Address  : 08103750
 * Program  : drastic
 */


/* DWARF original prototype: void WaitDone(ThreadPool * this) */

void __thiscall ThreadPool::WaitDone(ThreadPool *this)

{
  int iVar1;
  int rc;
  uint uVar2;
  pthread_mutex_t_conflict *__mutex;
  
  uVar2 = this->QueueTop - this->QueueBottom & 0x1f;
  this->ActiveThreads = uVar2;
  if (uVar2 == 0) {
    return;
  }
  __mutex = &this->AnyActiveMutex;
  this->AnyActive = true;
  pthread_mutex_lock((pthread_mutex_t *)&this->QueuedTasksCntMutex);
  this->QueuedTasksCnt = this->QueuedTasksCnt + this->ActiveThreads;
  pthread_mutex_unlock((pthread_mutex_t *)&this->QueuedTasksCntMutex);
  pthread_cond_broadcast((pthread_cond_t *)&this->QueuedTasksCntCond);
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  while (this->AnyActive != false) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)&this->AnyActiveCond,(pthread_mutex_t *)__mutex);
    if (iVar1 != 0) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\npthread_cond_wait error %d");
      ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  return;
}


