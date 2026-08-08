/*
 * Ghidra decompilation
 *
 * Function : memmem
 * Address  : 0010dbc0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmem(void *__haystack,size_t __haystacklen,void *__needle,size_t __needlelen)

{
  void *pvVar1;
  
  pvVar1 = memmem(__haystack,__haystacklen,__needle,__needlelen);
  return pvVar1;
}


