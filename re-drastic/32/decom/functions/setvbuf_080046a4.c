/*
 * Ghidra decompilation
 *
 * Function : setvbuf
 * Address  : 080046a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}


