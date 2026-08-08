/*
 * Ghidra decompilation
 *
 * Function : SetSystemErrorCode
 * Address  : 001c4100
 * Program  : drastic64
 */


/* ErrorHandler::SetSystemErrorCode(int) */

void __thiscall ErrorHandler::SetSystemErrorCode(ErrorHandler *this,int param_1)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = param_1;
  return;
}


