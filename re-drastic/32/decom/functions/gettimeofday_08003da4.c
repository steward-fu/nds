/*
 * Ghidra decompilation
 *
 * Function : gettimeofday
 * Address  : 08003da4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}


