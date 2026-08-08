/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList10GetStringAEPcj
 * Address  : 080d1ba4
 * Program  : drastic
 */


/* DWARF original prototype: bool GetStringA(StringList * this, char * Str, size_t MaxLength) */

bool __thiscall StringList::GetStringA(StringList *this,char *Str,size_t MaxLength)

{
  wchar *dest;
  wchar_t *NewBuffer;
  size_t sVar1;
  size_t sVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *__s;
  wchar *StrPtr;
  
  if (MaxLength == 0) {
    uVar4 = this->CurPos;
    if ((this->StringData).BufSize <= uVar4) {
      return false;
    }
    dest = (wchar *)0x0;
  }
  else {
    sVar2 = MaxLength;
    if (MaxLength < 0x20) {
      sVar2 = 0x20;
    }
    dest = (wchar *)realloc((void *)0x0,sVar2 << 2);
    if (dest == (wchar *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
      uVar4 = this->CurPos;
      if ((this->StringData).BufSize <= uVar4) {
        return false;
      }
    }
    else {
      uVar4 = this->CurPos;
      if ((this->StringData).BufSize <= uVar4) {
        bVar3 = false;
        goto LAB_080d1bfc;
      }
    }
  }
  __s = (this->StringData).Buffer + uVar4;
  sVar1 = wcslen(__s);
  this->CurPos = sVar1 + uVar4 + 1;
  wcsncpyz(dest,(wchar *)__s,MaxLength);
  WideToChar(dest,Str,MaxLength);
  bVar3 = true;
  if (dest == (wchar *)0x0) {
    return true;
  }
LAB_080d1bfc:
  free(dest);
  return bVar3;
}


