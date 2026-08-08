/*
 * Ghidra decompilation
 *
 * Function : shm_open
 * Address  : 0010d330
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shm_open(char *__name,int __oflag,mode_t __mode)

{
  int iVar1;
  
  iVar1 = shm_open(__name,__oflag,__mode);
  return iVar1;
}


