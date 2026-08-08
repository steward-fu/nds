/*
 * Ghidra decompilation
 *
 * Function : _ZN10ThreadPool7AddTaskEPFvPvES0_
 * Address  : 001e7c60
 * Program  : drastic64
 */


/* ThreadPool::AddTask(void (*)(void*), void*) */

void __thiscall ThreadPool::AddTask(ThreadPool *this,_func_void_void_ptr *param_1,void *param_2)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x310);
  uVar3 = uVar2 + 1 & 0x1f;
  if ((*(uint *)(this + 0x314) != uVar3) ||
     (uVar1 = uVar2 - *(uint *)(this + 0x314) & 0x1f, *(uint *)(this + 0x108) = uVar1, uVar1 == 0))
  {
    *(_func_void_void_ptr **)(this + (ulong)uVar2 * 0x10 + 0x110) = param_1;
    *(void **)(this + (ulong)uVar2 * 0x10 + 0x118) = param_2;
    *(uint *)(this + 0x310) = uVar3;
    return;
  }
  this[0x380] = (ThreadPool)0x1;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x350));
  *(int *)(this + 0x31c) = *(int *)(this + 0x31c) + *(int *)(this + 0x108);
  __mutex = (pthread_mutex_t *)(this + 0x3b8);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x350));
  pthread_cond_broadcast((pthread_cond_t *)(this + 800));
  pthread_mutex_lock(__mutex);
  while (this[0x380] != (ThreadPool)0x0) {
    while (uVar3 = pthread_cond_wait((pthread_cond_t *)(this + 0x388),__mutex), uVar3 != 0) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar3);
      ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
      if (this[0x380] == (ThreadPool)0x0) goto LAB_001e7d68;
    }
  }
LAB_001e7d68:
  pthread_mutex_unlock(__mutex);
  uVar3 = *(uint *)(this + 0x310);
  *(_func_void_void_ptr **)(this + (ulong)uVar3 * 0x10 + 0x110) = param_1;
  *(void **)(this + (ulong)uVar3 * 0x10 + 0x118) = param_2;
  *(uint *)(this + 0x310) = uVar3 + 1 & 0x1f;
  return;
}


