/*
 * Ghidra decompilation
 *
 * Function : PoolThreadLoop
 * Address  : 001e7a00
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::PoolThreadLoop() */

void ThreadPool::PoolThreadLoop(void)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  long lVar1;
  uint uVar2;
  long in_x0;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  __mutex = (pthread_mutex_t *)(in_x0 + 0x350);
  do {
    pthread_mutex_lock(__mutex);
    while (iVar3 = *(int *)(in_x0 + 0x31c), iVar3 == 0) {
      while( true ) {
        uVar2 = pthread_cond_wait((pthread_cond_t *)(in_x0 + 800),__mutex);
        if (uVar2 == 0) break;
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"\npthread_cond_wait error %d",(ulong)uVar2);
        ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
        iVar3 = *(int *)(in_x0 + 0x31c);
        if (iVar3 != 0) goto LAB_001e7a88;
      }
    }
LAB_001e7a88:
    *(int *)(in_x0 + 0x31c) = iVar3 + -1;
    pthread_mutex_unlock(__mutex);
    if (*(char *)(in_x0 + 0x318) != '\0') {
      return;
    }
    __mutex_00 = (pthread_mutex_t *)(in_x0 + 1000);
    pthread_mutex_lock(__mutex_00);
    lVar1 = (ulong)*(uint *)(in_x0 + 0x314) * 0x10 + 0x110;
    pcVar4 = *(code **)(in_x0 + lVar1);
    uVar5 = *(undefined8 *)(in_x0 + lVar1 + 8);
    *(uint *)(in_x0 + 0x314) = *(uint *)(in_x0 + 0x314) + 1 & 0x1f;
    pthread_mutex_unlock(__mutex_00);
    (*pcVar4)(uVar5);
    pthread_mutex_lock(__mutex_00);
    iVar3 = *(int *)(in_x0 + 0x108) + -1;
    *(int *)(in_x0 + 0x108) = iVar3;
    if (iVar3 == 0) {
      pthread_mutex_lock((pthread_mutex_t *)(in_x0 + 0x3b8));
      *(undefined *)(in_x0 + 0x380) = 0;
      pthread_cond_signal((pthread_cond_t *)(in_x0 + 0x388));
      pthread_mutex_unlock((pthread_mutex_t *)(in_x0 + 0x3b8));
    }
    pthread_mutex_unlock(__mutex_00);
  } while( true );
}


