/*
 * Ghidra decompilation
 *
 * Function : getcwd
 * Address  : 080033d0
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)(undefined *)0x0)();
  return pcVar1;
}


