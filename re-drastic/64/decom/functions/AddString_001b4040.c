/*
 * Ghidra decompilation
 *
 * Function : AddString
 * Address  : 001b4040
 * Program  : drastic64
 */


/* StringList::AddString(wchar_t const*) */

void __thiscall StringList::AddString(StringList *this,wchar_t *param_1)

{
  wchar_t *__s;
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 8);
  __s = L"";
  if (param_1 != (wchar_t *)0x0) {
    __s = param_1;
  }
  sVar1 = wcslen(__s);
  uVar4 = *(ulong *)(this + 0x10);
  uVar2 = lVar6 + 1 + sVar1;
  *(ulong *)(this + 8) = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = *(ulong *)(this + 0x18);
    if ((uVar3 != 0 && uVar3 <= uVar2) && (uVar3 == 0 || uVar2 != uVar3)) {
      ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError();
      uVar2 = *(ulong *)(this + 8);
      uVar4 = *(ulong *)(this + 0x10);
    }
    uVar4 = uVar4 + 0x20 + (uVar4 >> 2);
    if (uVar4 < uVar2) {
      uVar4 = uVar2;
    }
    pvVar5 = realloc(*(void **)this,uVar4 << 2);
    if (pvVar5 == (void *)0x0) {
      ErrorHandler::MemoryError();
    }
    *(void **)this = pvVar5;
    *(ulong *)(this + 0x10) = uVar4;
  }
  else {
    pvVar5 = *(void **)this;
  }
  wcscpy((wchar_t *)((long)pvVar5 + lVar6 * 4),__s);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  return;
}


