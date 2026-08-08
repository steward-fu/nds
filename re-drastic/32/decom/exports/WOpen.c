/*
 * Ghidra decompilation
 *
 * Function : WOpen
 * Address  : 080d5ab4
 * Program  : drastic
 */


/* DWARF original prototype: bool WOpen(File * this, wchar * Name) */

bool __thiscall File::WOpen(File *this,wchar *Name)

{
  bool bVar1;
  
  bVar1 = Open(this,Name,0);
  if (!bVar1) {
    ErrorHandler::OpenErrorMsg((wchar_t *)&ErrHandler);
  }
  return bVar1;
}


