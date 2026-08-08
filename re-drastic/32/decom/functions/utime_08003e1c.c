/*
 * Ghidra decompilation
 *
 * Function : utime
 * Address  : 08003e1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utime(char *__file,utimbuf *__file_times)

{
  int iVar1;
  
  iVar1 = utime(__file,__file_times);
  return iVar1;
}


