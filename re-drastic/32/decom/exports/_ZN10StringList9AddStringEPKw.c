/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9AddStringEPKw
 * Address  : 080d1aa8
 * Program  : drastic
 */


/* DWARF original prototype: void AddString(StringList * this, wchar * Str) */

void __thiscall StringList::AddString(StringList *this,wchar *Str)

{
  size_t sVar1;
  wchar_t *pwVar2;
  wchar_t *NewBuffer;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t Suggested;
  size_t NewSize;
  size_t sVar6;
  
  if (Str == (wchar *)0x0) {
    Str = (wchar *)L"";
  }
  sVar6 = (this->StringData).BufSize;
  sVar1 = wcslen((wchar_t *)Str);
  uVar3 = (this->StringData).AllocSize;
  uVar5 = sVar6 + 1 + sVar1;
  (this->StringData).BufSize = uVar5;
  if (uVar3 < uVar5) {
    uVar4 = (this->StringData).MaxSize;
    if ((uVar4 == 0 || uVar4 <= uVar5) && (uVar4 != 0 && uVar5 != uVar4)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar5 = (this->StringData).BufSize;
      uVar3 = (this->StringData).AllocSize;
    }
    NewSize = uVar3 + 0x20 + (uVar3 >> 2);
    if (NewSize < uVar5) {
      NewSize = uVar5;
    }
    pwVar2 = (wchar_t *)realloc((this->StringData).Buffer,NewSize << 2);
    if (pwVar2 == (wchar_t *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    (this->StringData).Buffer = pwVar2;
    (this->StringData).AllocSize = NewSize;
  }
  else {
    pwVar2 = (this->StringData).Buffer;
  }
  wcscpy(pwVar2 + sVar6,(wchar_t *)Str);
  this->StringsCount = this->StringsCount + 1;
  return;
}


