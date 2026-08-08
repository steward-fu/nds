/*
 * Ghidra decompilation
 *
 * Function : l_alloc
 * Address  : 08124b04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * l_alloc(void *ud,void *ptr,size_t osize,size_t nsize)

{
  void *pvVar1;
  
  if (nsize != 0) {
    pvVar1 = realloc(ptr,nsize);
    return pvVar1;
  }
  free(ptr);
  return (void *)0x0;
}


