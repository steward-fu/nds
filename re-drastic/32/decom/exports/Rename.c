/*
 * Ghidra decompilation
 *
 * Function : Rename
 * Address  : 080d5dc0
 * Program  : drastic
 */


/* DWARF original prototype: bool Rename(File * this, wchar * NewName) */

bool __thiscall File::Rename(File *this,wchar *NewName)

{
  bool bVar1;
  int iVar2;
  wchar *__s1;
  
  __s1 = this->FileName;
  iVar2 = wcscmp((wchar_t *)__s1,(wchar_t *)NewName);
  if ((iVar2 == 0) || (bVar1 = RenameFile(__s1,NewName), bVar1)) {
    __wcscpy_chk(__s1,NewName,0x800);
    bVar1 = true;
  }
  return bVar1;
}


