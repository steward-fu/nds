/*
 * Ghidra decompilation
 *
 * Function : _Z4Waitv
 * Address  : 001bf1d0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Wait() */

void Wait(void)

{
  if (DAT_004f446b == '\0') {
    return;
  }
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,0xff);
  return;
}


