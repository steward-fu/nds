/*
 * Ghidra decompilation
 *
 * Function : pthread_mutex_init
 * Address  : 0010d7e0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}


