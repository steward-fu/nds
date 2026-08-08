/*
 * Ghidra decompilation
 *
 * Function : time
 * Address  : 0010dd80
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}


