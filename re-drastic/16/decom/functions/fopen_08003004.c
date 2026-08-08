/*
 * Ghidra decompilation
 *
 * Function : fopen
 * Address  : 08003004
 * Program  : drastic16
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FILE *)(*(code *)(undefined *)0x0)();
  return pFVar1;
}


