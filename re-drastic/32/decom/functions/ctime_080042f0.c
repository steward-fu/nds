/*
 * Ghidra decompilation
 *
 * Function : ctime
 * Address  : 080042f0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = ctime(__timer);
  return pcVar1;
}


