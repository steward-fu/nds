/*
 * Ghidra decompilation
 *
 * Function : AddStringA
 * Address  : 080d1910
 * Program  : drastic
 */


/* DWARF original prototype: void AddStringA(StringList * this, char * Str) */

void __thiscall StringList::AddStringA(StringList *this,char *Str)

{
  size_t sVar1;
  wchar_t *Dest;
  wchar_t *NewBuffer;
  wchar_t *pwVar2;
  wchar_t *NewBuffer_1;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  size_t Suggested;
  size_t NewSize;
  wchar_t *__s;
  size_t sVar7;
  
  sVar1 = strlen(Str);
  if (sVar1 == 0) {
    Dest = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar1;
    if (sVar1 < 0x20) {
      sVar3 = 0x20;
    }
    Dest = (wchar_t *)realloc((void *)0x0,sVar3 << 2);
    if (Dest == (wchar_t *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
  }
  CharToWide(Str,(wchar *)Dest,sVar1);
  __s = Dest;
  if (Dest == (wchar_t *)0x0) {
    __s = L"";
  }
  sVar1 = wcslen(__s);
  sVar7 = (this->StringData).BufSize;
  uVar4 = (this->StringData).AllocSize;
  uVar6 = sVar7 + 1 + sVar1;
  (this->StringData).BufSize = uVar6;
  if (uVar4 < uVar6) {
    uVar5 = (this->StringData).MaxSize;
    if ((uVar5 == 0 || uVar5 <= uVar6) && (uVar5 != 0 && uVar6 != uVar5)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar6 = (this->StringData).BufSize;
      uVar4 = (this->StringData).AllocSize;
    }
    NewSize = uVar4 + 0x20 + (uVar4 >> 2);
    if (NewSize <= uVar6) {
      NewSize = uVar6;
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
  wcscpy(pwVar2 + sVar7,__s);
  this->StringsCount = this->StringsCount + 1;
  if (Dest == (wchar_t *)0x0) {
    return;
  }
  free(Dest);
  return;
}


