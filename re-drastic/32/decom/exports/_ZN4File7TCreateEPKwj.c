/*
 * Ghidra decompilation
 *
 * Function : _ZN4File7TCreateEPKwj
 * Address  : 080d5bb8
 * Program  : drastic
 */


/* DWARF original prototype: void TCreate(File * this, wchar * Name, uint Mode) */

void __thiscall File::TCreate(File *this,wchar *Name,uint Mode)

{
  bool bVar1;
  
  bVar1 = Create(this,Name,Mode);
  if (bVar1) {
    return;
  }
  ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
  ErrorHandler::CreateErrorMsg((wchar_t *)&ErrHandler);
  ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
  return;
}


