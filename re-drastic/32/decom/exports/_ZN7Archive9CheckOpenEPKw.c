/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive9CheckOpenEPKw
 * Address  : 080d917c
 * Program  : drastic
 */


/* DWARF original prototype: void CheckOpen(Archive * this, wchar * Name) */

void __thiscall Archive::CheckOpen(Archive *this,wchar *Name)

{
  bool bVar1;
  
  File::TOpen(&this->super_File,Name);
  bVar1 = IsArchive(this,false);
  if (bVar1) {
    return;
  }
  ErrorHandler::Exit(&ErrHandler,RARX_FATAL);
  return;
}


