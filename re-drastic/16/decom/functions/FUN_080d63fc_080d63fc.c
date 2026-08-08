/*
 * Ghidra decompilation
 *
 * Function : FUN_080d63fc
 * Address  : 080d63fc
 * Program  : drastic16
 */


void FUN_080d63fc(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(param_1,param_2);
  if (iVar1 != 0) {
    FUN_080b7044(&DAT_081cd0a0,L"\npthread_cond_wait error %d",iVar1);
    FUN_080b71f4(&DAT_081cd0a0,2);
  }
  return;
}


