/*
 * Ghidra decompilation
 *
 * Function : ThreadPool
 * Address  : 001e76a0
 * Program  : drastic64
 */


/* ThreadPool::ThreadPool(unsigned int) */

void __thiscall ThreadPool::ThreadPool(ThreadPool *this,uint param_1)

{
  int iVar1;
  void *extraout_x1;
  void *pvVar2;
  long lVar3;
  undefined auVar4 [16];
  
  if (param_1 < 0x21) {
    if (param_1 == 0) {
      *(undefined4 *)this = 1;
    }
    else {
      *(uint *)this = param_1;
    }
  }
  else {
    *(undefined4 *)this = 0x20;
  }
  this[0x318] = (ThreadPool)0x0;
  *(undefined4 *)(this + 0x31c) = 0;
  this[0x380] = (ThreadPool)0x0;
  iVar1 = pthread_mutex_init((pthread_mutex_t *)(this + 1000),(pthread_mutexattr_t *)0x0);
  if ((((iVar1 == 0) &&
       (iVar1 = pthread_cond_init((pthread_cond_t *)(this + 0x388),(pthread_condattr_t *)0x0),
       iVar1 == 0)) &&
      (iVar1 = pthread_mutex_init((pthread_mutex_t *)(this + 0x3b8),(pthread_mutexattr_t *)0x0),
      iVar1 == 0)) &&
     (iVar1 = pthread_cond_init((pthread_cond_t *)(this + 800),(pthread_condattr_t *)0x0),
     iVar1 == 0)) {
    pvVar2 = (void *)0x0;
    iVar1 = pthread_mutex_init((pthread_mutex_t *)(this + 0x350),(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) goto LAB_001e7714;
  }
  ErrorHandler::GeneralErrMsg(&ErrHandler,L"\nThread pool initialization failed.");
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  pvVar2 = extraout_x1;
LAB_001e7714:
  lVar3 = 0;
  if (*(int *)this != 0) {
    do {
      auVar4 = ThreadCreate((_func_void_ptr_void_ptr *)this,pvVar2);
      pvVar2 = auVar4._8_8_;
      *(long *)(this + lVar3 * 8 + 8) = auVar4._0_8_;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)this);
  }
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  return;
}


