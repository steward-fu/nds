/*
 * Ghidra decompilation
 *
 * Function : WCheckOpen
 * Address  : 080d91c8
 * Program  : drastic
 */


/* DWARF original prototype: bool WCheckOpen(Archive * this, wchar * Name) */

bool __thiscall Archive::WCheckOpen(Archive *this,wchar *Name)

{
  bool bVar1;
  
  bVar1 = File::WOpen(&this->super_File,Name);
  if ((bVar1) && (bVar1 = IsArchive(this,false), !bVar1)) {
    File::Close(&this->super_File);
  }
  return bVar1;
}


