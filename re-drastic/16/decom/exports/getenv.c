/*
 * Ghidra decompilation
 *
 * Function : getenv
 * Address  : 080035e0
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)(undefined *)0x0)();
  return pcVar1;
}


