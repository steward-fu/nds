/*
 * Ghidra decompilation
 *
 * Function : AddTask
 * Address  : 08103634
 * Program  : drastic
 */


/* DWARF original prototype: void AddTask(ThreadPool * this, PTHREAD_PROC Proc, void * Data) */

void __thiscall ThreadPool::AddTask(ThreadPool *this,PTHREAD_PROC Proc,void *Data)

{
  int iVar1;
  int rc;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  pthread_mutex_t_conflict *__mutex;
  
  uVar4 = this->QueueTop;
  uVar3 = uVar4 + 1 & 0x1f;
  if ((uVar3 == this->QueueBottom) &&
     (uVar2 = uVar4 - uVar3 & 0x1f, this->ActiveThreads = uVar2, uVar2 != 0)) {
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
    uVar4 = this->QueueTop;
    uVar3 = uVar4 + 1 & 0x1f;
  }
  this->TaskQueue[uVar4].Proc = Proc;
  this->TaskQueue[uVar4].Param = Data;
  this->QueueTop = uVar3;
  return;
}


