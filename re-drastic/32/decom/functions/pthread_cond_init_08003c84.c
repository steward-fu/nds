/*
 * Ghidra decompilation
 *
 * Function : pthread_cond_init
 * Address  : 08003c84
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = pthread_cond_init(__cond,__cond_attr);
  return iVar1;
}


