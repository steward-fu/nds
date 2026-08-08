/*
 * Ghidra decompilation
 *
 * Function : ftruncate
 * Address  : 08003d38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = ftruncate(__fd,__length);
  return iVar1;
}


