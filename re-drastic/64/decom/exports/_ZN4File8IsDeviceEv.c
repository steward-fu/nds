/*
 * Ghidra decompilation
 *
 * Function : _ZN4File8IsDeviceEv
 * Address  : 001b89b0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* File::IsDevice() */

bool File::IsDevice(void)

{
  int iVar1;
  long in_x0;
  
  if (*(FILE **)(in_x0 + 8) != (FILE *)0x0) {
    iVar1 = fileno(*(FILE **)(in_x0 + 8));
    iVar1 = isatty(iVar1);
    return iVar1 != 0;
  }
  return false;
}


