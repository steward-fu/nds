/*
 * Ghidra decompilation
 *
 * Function : _ZN4File5FlushEv
 * Address  : 001b7ce0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::Flush() */

int File::Flush(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = fflush(*(FILE **)(in_x0 + 8));
  return iVar1;
}


