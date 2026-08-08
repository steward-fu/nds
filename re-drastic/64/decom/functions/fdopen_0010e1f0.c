/*
 * Ghidra decompilation
 *
 * Function : fdopen
 * Address  : 0010e1f0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fdopen(__fd,__modes);
  return pFVar1;
}


