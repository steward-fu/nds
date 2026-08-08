/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9GetStringEPPw
 * Address  : 080d1e64
 * Program  : drastic
 */


/* DWARF original prototype: bool GetString(StringList * this, wchar * * Str) */

bool __thiscall StringList::GetString(StringList *this,wchar **Str)

{
  undefined uVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *__s;
  
  uVar3 = this->CurPos;
  if (uVar3 < (this->StringData).BufSize) {
    __s = (this->StringData).Buffer + uVar3;
    sVar2 = wcslen(__s);
    this->CurPos = uVar3 + 1 + sVar2;
    uVar1 = 1;
    if (Str != (wchar **)0x0) {
      *Str = (wchar *)__s;
    }
  }
  else {
    if (Str == (wchar **)0x0) {
      this = (StringList *)0x0;
    }
    uVar1 = SUB41(this,0);
    if (Str != (wchar **)0x0) {
      uVar1 = 0;
      *Str = (wchar *)0x0;
    }
  }
  return (bool)uVar1;
}


