/*
 * Ghidra decompilation
 *
 * Function : ctime
 * Address  : 0010d520
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = ctime(__timer);
  return pcVar1;
}


