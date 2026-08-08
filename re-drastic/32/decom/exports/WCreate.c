/*
 * Ghidra decompilation
 *
 * Function : WCreate
 * Address  : 080d5c18
 * Program  : drastic
 */


/* DWARF original prototype: bool WCreate(File * this, wchar * Name, uint Mode) */

bool __thiscall File::WCreate(File *this,wchar *Name,uint Mode)

{
  bool bVar1;
  
  bVar1 = Create(this,Name,Mode);
  if (!bVar1) {
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
    ErrorHandler::CreateErrorMsg((wchar_t *)&ErrHandler);
  }
  return bVar1;
}


