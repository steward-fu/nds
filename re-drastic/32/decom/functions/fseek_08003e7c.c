/*
 * Ghidra decompilation
 *
 * Function : fseek
 * Address  : 08003e7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}


