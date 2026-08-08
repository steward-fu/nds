/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9GetStringEPwmi
 * Address  : 001b43d0
 * Program  : drastic64
 */


/* StringList::GetString(wchar_t*, unsigned long, int) */

undefined8 __thiscall
StringList::GetString(StringList *this,wchar_t *param_1,ulong param_2,int param_3)

{
  long lVar1;
  wchar_t *__s;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = *(ulong *)(this + 0xb0);
  if (uVar4 < 0x10) {
    lVar1 = uVar4 + 6;
    uVar4 = uVar4 + 1;
    *(undefined8 *)(this + lVar1 * 8) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = 0;
    *(ulong *)(this + 0xb0) = uVar4;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  if (param_3 < 0) {
    uVar3 = 1;
  }
  else {
    iVar5 = param_3 + -1;
    uVar4 = 0;
    while (iVar5 = iVar5 + -1, uVar4 < *(ulong *)(this + 8)) {
      __s = (wchar_t *)(*(long *)this + uVar4 * 4);
      sVar2 = wcslen(__s);
      *(ulong *)(this + 0x20) = uVar4 + 1 + sVar2;
      wcsncpyz(param_1,__s,param_2);
      if (iVar5 == -2) {
        uVar3 = 1;
        uVar4 = *(ulong *)(this + 0xb0);
        goto LAB_001b4474;
      }
      uVar4 = *(ulong *)(this + 0x20);
    }
    uVar4 = *(ulong *)(this + 0xb0);
    uVar3 = 0;
LAB_001b4474:
    if (uVar4 == 0) {
      return uVar3;
    }
  }
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + (uVar4 + 5) * 8);
  *(ulong *)(this + 0xb0) = uVar4 - 1;
  return uVar3;
}


