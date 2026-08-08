/*
 * Ghidra decompilation
 *
 * Function : pthread_cond_wait
 * Address  : 080045c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}


