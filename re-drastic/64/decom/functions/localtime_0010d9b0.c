/*
 * Ghidra decompilation
 *
 * Function : localtime
 * Address  : 0010d9b0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}


