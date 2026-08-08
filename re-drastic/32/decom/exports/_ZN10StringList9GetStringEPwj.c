/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9GetStringEPwj
 * Address  : 080d1cb8
 * Program  : drastic
 */


/* DWARF original prototype: bool GetString(StringList * this, wchar * Str, size_t MaxLength) */

bool __thiscall StringList::GetString(StringList *this,wchar *Str,size_t MaxLength)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *__s;
  wchar *StrPtr;
  bool bVar3;
  
  uVar2 = this->CurPos;
  bVar3 = uVar2 < (this->StringData).BufSize;
  if (bVar3) {
    __s = (this->StringData).Buffer + uVar2;
    sVar1 = wcslen(__s);
    this->CurPos = uVar2 + 1 + sVar1;
    wcsncpyz(Str,(wchar *)__s,MaxLength);
  }
  return bVar3;
}


