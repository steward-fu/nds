/*
 * Ghidra decompilation
 *
 * Function : setvbuf
 * Address  : 0010ddd0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}


