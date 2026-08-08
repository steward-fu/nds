/*
 * Ghidra decompilation
 *
 * Function : TCreate
 * Address  : 001b7b90
 * Program  : drastic64
 */


/* File::TCreate(wchar_t const*, unsigned int) */

void __thiscall File::TCreate(File *this,wchar_t *param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = Create(this,param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
  ErrorHandler::CreateErrorMsg(&ErrHandler);
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,2);
  return;
}


