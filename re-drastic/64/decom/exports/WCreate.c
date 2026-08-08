/*
 * Ghidra decompilation
 *
 * Function : WCreate
 * Address  : 001b7bf0
 * Program  : drastic64
 */


/* File::WCreate(wchar_t const*, unsigned int) */

uint __thiscall File::WCreate(File *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Create(this,param_1,param_2);
  if ((uVar1 & 0xff) == 0) {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
    ErrorHandler::CreateErrorMsg(&ErrHandler);
  }
  return uVar1;
}


