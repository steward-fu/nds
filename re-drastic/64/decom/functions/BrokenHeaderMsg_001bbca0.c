/*
 * Ghidra decompilation
 *
 * Function : BrokenHeaderMsg
 * Address  : 001bbca0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Archive::BrokenHeaderMsg() */

void Archive::BrokenHeaderMsg(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x11220) = 1;
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
  return;
}


