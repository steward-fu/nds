/*
 * Ghidra decompilation
 *
 * Function : GetSystemErrorCode
 * Address  : 080e2d94
 * Program  : drastic
 */


/* DWARF original prototype: int GetSystemErrorCode(ErrorHandler * this) */

int __thiscall ErrorHandler::GetSystemErrorCode(ErrorHandler *this)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}


