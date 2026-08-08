/*
 * Ghidra decompilation
 *
 * Function : ctime
 * Address  : 080030a0
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)(undefined *)0x0)();
  return pcVar1;
}


