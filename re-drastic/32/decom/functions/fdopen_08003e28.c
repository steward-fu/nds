/*
 * Ghidra decompilation
 *
 * Function : fdopen
 * Address  : 08003e28
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fdopen(__fd,__modes);
  return pFVar1;
}


