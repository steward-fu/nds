/*
 * Ghidra decompilation
 *
 * Function : mmap
 * Address  : 0010dad0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}


