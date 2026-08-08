/*
 * Ghidra decompilation
 *
 * Function : GetString
 * Address  : 080d1e10
 * Program  : drastic
 */


/* DWARF original prototype: wchar * GetString(StringList * this) */

wchar * __thiscall StringList::GetString(StringList *this)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *__s;
  
  uVar2 = this->CurPos;
  if (uVar2 < (this->StringData).BufSize) {
    __s = (this->StringData).Buffer + uVar2;
    sVar1 = wcslen(__s);
    this->CurPos = uVar2 + 1 + sVar1;
  }
  else {
    __s = (wchar_t *)0x0;
  }
  return (wchar *)__s;
}


