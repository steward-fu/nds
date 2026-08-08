/*
 * Ghidra decompilation
 *
 * Function : remap_file_pages
 * Address  : 080047e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remap_file_pages(void *__start,size_t __size,int __prot,size_t __pgoff,int __flags)

{
  int iVar1;
  
  iVar1 = remap_file_pages(__start,__size,__prot,__pgoff,__flags);
  return iVar1;
}


