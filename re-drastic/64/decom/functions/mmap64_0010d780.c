/*
 * Ghidra decompilation
 *
 * Function : mmap64
 * Address  : 0010d780
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap64(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}


