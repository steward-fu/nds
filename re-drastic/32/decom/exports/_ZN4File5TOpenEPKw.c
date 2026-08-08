/*
 * Ghidra decompilation
 *
 * Function : _ZN4File5TOpenEPKw
 * Address  : 080d5a60
 * Program  : drastic
 */


/* DWARF original prototype: void TOpen(File * this, wchar * Name) */

void __thiscall File::TOpen(File *this,wchar *Name)

{
  bool bVar1;
  
  bVar1 = Open(this,Name,0);
  if (bVar1) {
    return;
  }
  ErrorHandler::OpenErrorMsg((wchar_t *)&ErrHandler);
  ErrorHandler::Exit(&ErrHandler,RARX_OPEN);
  return;
}


