/*
 * Ghidra decompilation
 *
 * Function : SetSystemErrorCode
 * Address  : 080e2db0
 * Program  : drastic
 */


/* DWARF original prototype: void SetSystemErrorCode(ErrorHandler * this, int Code) */

void __thiscall ErrorHandler::SetSystemErrorCode(ErrorHandler *this,int Code)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = Code;
  return;
}


