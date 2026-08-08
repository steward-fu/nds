/*
 * Ghidra decompilation
 *
 * Function : mprotect
 * Address  : 0010d670
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mprotect(void *__addr,size_t __len,int __prot)

{
  int iVar1;
  
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}


