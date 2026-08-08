/*
 * Ghidra decompilation
 *
 * Function : _ZN10ThreadPool13GetQueuedTaskEPNS_10QueueEntryE
 * Address  : 08103558
 * Program  : drastic
 */


/* DWARF original prototype: bool GetQueuedTask(ThreadPool * this, QueueEntry * Task) */

bool __thiscall ThreadPool::GetQueuedTask(ThreadPool *this,QueueEntry *Task)

{
  int iVar1;
  int rc;
  uint uVar2;
  pthread_mutex_t_conflict *__mutex;
  void *pvVar3;
  bool bVar4;
  
  __mutex = &this->QueuedTasksCntMutex;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  while (this->QueuedTasksCnt == 0) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)&this->QueuedTasksCntCond,(pthread_mutex_t *)__mutex
                             );
    if (iVar1 != 0) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"\npthread_cond_wait error %d");
      ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
    }
  }
  this->QueuedTasksCnt = this->QueuedTasksCnt - 1;
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  bVar4 = this->Closing == false;
  if (bVar4) {
    pthread_mutex_lock((pthread_mutex_t *)&this->CritSection);
    uVar2 = this->QueueBottom;
    pvVar3 = this->TaskQueue[uVar2].Param;
    Task->Proc = this->TaskQueue[uVar2].Proc;
    Task->Param = pvVar3;
    this->QueueBottom = uVar2 + 1 & 0x1f;
    pthread_mutex_unlock((pthread_mutex_t *)&this->CritSection);
  }
  return bVar4;
}


