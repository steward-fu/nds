/*
 * Ghidra decompilation
 *
 * Function : GetString
 * Address  : 001b4340
 * Program  : drastic64
 */


/* StringList::GetString(wchar_t*, unsigned long) */

undefined8 __thiscall StringList::GetString(StringList *this,wchar_t *param_1,ulong param_2)

{
  wchar_t *__s;
  size_t sVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x20);
  if (uVar2 < *(ulong *)(this + 8)) {
    __s = (wchar_t *)(*(long *)this + uVar2 * 4);
    sVar1 = wcslen(__s);
    *(ulong *)(this + 0x20) = uVar2 + 1 + sVar1;
    wcsncpyz(param_1,__s,param_2);
    return 1;
  }
  return 0;
}


