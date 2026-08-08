/*
 * Ghidra decompilation
 *
 * Function : popen
 * Address  : 08003d50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = popen(__command,__modes);
  return pFVar1;
}


