/*
 * Ghidra decompilation
 *
 * Function : GetSystemErrorCode
 * Address  : 001c40e0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ErrorHandler::GetSystemErrorCode() */

int ErrorHandler::GetSystemErrorCode(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}


