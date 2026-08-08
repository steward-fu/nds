/*
 * Ghidra decompilation
 *
 * Function : localtime
 * Address  : 08004344
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}


