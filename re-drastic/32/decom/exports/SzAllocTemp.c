/*
 * Ghidra decompilation
 *
 * Function : SzAllocTemp
 * Address  : 080c98ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void * SzAllocTemp(void *p,size_t size)

{
  void *pvVar1;
  
  if (size != 0) {
    pvVar1 = malloc(size);
    return pvVar1;
  }
  return (void *)size;
}


