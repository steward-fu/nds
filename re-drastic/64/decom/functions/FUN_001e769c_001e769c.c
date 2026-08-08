/*
 * Ghidra decompilation
 *
 * Function : FUN_001e769c
 * Address  : 001e769c
 * Program  : drastic64
 */


void FUN_001e769c(uint *param_1,uint param_2)

{
  int iVar1;
  void *extraout_x1;
  void *pvVar2;
  long lVar3;
  undefined auVar4 [16];
  
  if (param_2 < 0x21) {
    if (param_2 == 0) {
      *param_1 = 1;
    }
    else {
      *param_1 = param_2;
    }
  }
  else {
    *param_1 = 0x20;
  }
  *(undefined *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  *(undefined *)(param_1 + 0xe0) = 0;
  iVar1 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xfa),(pthread_mutexattr_t *)0x0);
  if ((((iVar1 == 0) &&
       (iVar1 = pthread_cond_init((pthread_cond_t *)(param_1 + 0xe2),(pthread_condattr_t *)0x0),
       iVar1 == 0)) &&
      (iVar1 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xee),(pthread_mutexattr_t *)0x0),
      iVar1 == 0)) &&
     (iVar1 = pthread_cond_init((pthread_cond_t *)(param_1 + 200),(pthread_condattr_t *)0x0),
     iVar1 == 0)) {
    pvVar2 = (void *)0x0;
    iVar1 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xd4),(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) goto LAB_001e7714;
  }
  ErrorHandler::GeneralErrMsg(&ErrHandler,L"\nThread pool initialization failed.");
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  pvVar2 = extraout_x1;
LAB_001e7714:
  lVar3 = 0;
  if (*param_1 != 0) {
    do {
      auVar4 = ThreadCreate((_func_void_ptr_void_ptr *)param_1,pvVar2);
      pvVar2 = auVar4._8_8_;
      *(long *)(param_1 + lVar3 * 2 + 2) = auVar4._0_8_;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *param_1);
  }
  *(undefined8 *)(param_1 + 0xc4) = 0;
  param_1[0x42] = 0;
  return;
}


