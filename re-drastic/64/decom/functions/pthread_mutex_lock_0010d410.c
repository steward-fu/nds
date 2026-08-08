/*
 * Ghidra decompilation
 *
 * Function : pthread_mutex_lock
 * Address  : 0010d410
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}


