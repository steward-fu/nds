/*
 * Ghidra decompilation
 *
 * Function : pthread_create
 * Address  : 080047f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}


