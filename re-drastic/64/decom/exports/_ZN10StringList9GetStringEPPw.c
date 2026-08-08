/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9GetStringEPPw
 * Address  : 001b4540
 * Program  : drastic64
 */


/* StringList::GetString(wchar_t**) */

undefined8 __thiscall StringList::GetString(StringList *this,wchar_t **param_1)

{
  wchar_t *__s;
  size_t sVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x20);
  if (uVar3 < *(ulong *)(this + 8)) {
    __s = (wchar_t *)(*(long *)this + uVar3 * 4);
    sVar1 = wcslen(__s);
    *(ulong *)(this + 0x20) = uVar3 + 1 + sVar1;
    uVar2 = 1;
    if (param_1 != (wchar_t **)0x0) {
      *param_1 = __s;
    }
  }
  else {
    uVar2 = 0;
    if (param_1 != (wchar_t **)0x0) {
      *param_1 = (wchar_t *)0x0;
      return uVar2;
    }
  }
  return uVar2;
}


