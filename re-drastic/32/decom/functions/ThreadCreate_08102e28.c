/*
 * Ghidra decompilation
 *
 * Function : ThreadCreate
 * Address  : 08102e28
 * Program  : drastic
 */


THREAD_HANDLE ThreadCreate(NATIVE_THREAD_PTR Proc,void *Data)

{
  int iVar1;
  int iVar2;
  int Code;
  pthread_t pt;
  pthread_attr_t attr;
  wchar Msg [100];
  
  iVar1 = __stack_chk_guard;
  pthread_attr_init((pthread_attr_t *)&attr);
  pthread_attr_setdetachstate((pthread_attr_t *)&attr,0);
  iVar2 = pthread_create(&pt,(pthread_attr_t *)&attr,ThreadPool::PoolThread,Proc);
  if (iVar2 != 0) {
    __swprintf_chk(Msg,100,1,100,L"\npthread_create failed, code %d\n",iVar2);
    ErrorHandler::GeneralErrMsg(&ErrHandler,Msg);
    ErrorHandler::SysErrMsg(&ErrHandler);
    ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
  }
  if (iVar1 == __stack_chk_guard) {
    return pt;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


