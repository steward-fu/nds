/*
 * Ghidra decompilation
 *
 * Function : ThreadCreate
 * Address  : 001e7560
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThreadCreate(void* (*)(void*), void*) [clone .constprop.0] */

void ThreadCreate(_func_void_ptr_void_ptr *param_1,void *param_2)

{
  int iVar1;
  pthread_t local_1e0;
  pthread_attr_t pStack_1d8;
  undefined auStack_198 [400];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_attr_init(&pStack_1d8);
  pthread_attr_setdetachstate(&pStack_1d8,0);
  iVar1 = pthread_create(&local_1e0,&pStack_1d8,ThreadPool::PoolThread,param_1);
  if (iVar1 != 0) {
    __swprintf_chk(auStack_198,100,1,100,L"\npthread_create failed, code %d\n",iVar1);
    ErrorHandler::GeneralErrMsg(&ErrHandler,auStack_198);
    ErrorHandler::SysErrMsg();
    ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1e0,local_8 - ___stack_chk_guard,0);
}


