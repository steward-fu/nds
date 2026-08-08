/*
 * Ghidra decompilation
 *
 * Function : fseek
 * Address  : 0010e2f0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}


