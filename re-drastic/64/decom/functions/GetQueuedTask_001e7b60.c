/*
 * Ghidra decompilation
 *
 * Function : GetQueuedTask
 * Address  : 001e7b60
 * Program  : drastic64
 */


/* ThreadPool::GetQueuedTask(ThreadPool::QueueEntry*) */

bool __thiscall ThreadPool::GetQueuedTask(ThreadPool *this,QueueEntry *param_1)

{
  pthread_mutex_t *__mutex;
  ThreadPool TVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x350);
  pthread_mutex_lock(__mutex);
  while (iVar3 = *(int *)(this + 0x31c), iVar3 == 0) {
    while (uVar2 = pthread_cond_wait((pthread_cond_t *)(this + 800),__mutex), uVar2 != 0) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar2);
      ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
      iVar3 = *(int *)(this + 0x31c);
      if (iVar3 != 0) goto LAB_001e7be8;
    }
  }
LAB_001e7be8:
  *(int *)(this + 0x31c) = iVar3 + -1;
  pthread_mutex_unlock(__mutex);
  TVar1 = this[0x318];
  if (TVar1 == (ThreadPool)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 1000));
    uVar2 = *(uint *)(this + 0x314);
    uVar4 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x118);
    *(undefined8 *)param_1 = *(undefined8 *)(this + (ulong)uVar2 * 0x10 + 0x110);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(uint *)(this + 0x314) = uVar2 + 1 & 0x1f;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 1000));
  }
  return TVar1 == (ThreadPool)0x0;
}


