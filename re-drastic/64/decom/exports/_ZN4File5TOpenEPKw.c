/*
 * Ghidra decompilation
 *
 * Function : _ZN4File5TOpenEPKw
 * Address  : 001b7a10
 * Program  : drastic64
 */


/* File::TOpen(wchar_t const*) */

void __thiscall File::TOpen(File *this,wchar_t *param_1)

{
  char cVar1;
  
  cVar1 = Open(this,param_1,0);
  if (cVar1 != '\0') {
    return;
  }
  ErrorHandler::OpenErrorMsg(&ErrHandler);
  ErrorHandler::Exit((ErrorHandler *)&ErrHandler,6);
  return;
}


