/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList6SearchEPKwb
 * Address  : 001b45d0
 * Program  : drastic64
 */


/* StringList::Search(wchar_t const*, bool) */

undefined8 __thiscall StringList::Search(StringList *this,wchar_t *param_1,bool param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(this + 0xb0);
  if (uVar3 < 0x10) {
    *(undefined8 *)(this + (uVar3 + 6) * 8) = *(undefined8 *)(this + 0x20);
    *(ulong *)(this + 0xb0) = uVar3 + 1;
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (param_2) {
    uVar7 = *(ulong *)(this + 8);
    uVar3 = 0;
    do {
      if (uVar7 <= uVar3) {
        uVar5 = 0;
        goto LAB_001b4668;
      }
      pwVar1 = (wchar_t *)(*(long *)this + uVar3 * 4);
      sVar4 = wcslen(pwVar1);
      uVar3 = uVar3 + 1 + sVar4;
      *(ulong *)(this + 0x20) = uVar3;
    } while ((param_1 != (wchar_t *)0x0 && pwVar1 != (wchar_t *)0x0) &&
            (iVar2 = wcscmp(param_1,pwVar1), iVar2 != 0));
LAB_001b4664:
    uVar5 = 1;
  }
  else {
    uVar3 = 0;
    if (*(long *)(this + 8) != 0) {
      do {
        pwVar1 = (wchar_t *)(*(long *)this + uVar3 * 4);
        sVar4 = wcslen(pwVar1);
        *(ulong *)(this + 0x20) = uVar3 + 1 + sVar4;
        if ((pwVar1 == (wchar_t *)0x0 || param_1 == (wchar_t *)0x0) ||
           (iVar2 = wcsicomp(param_1,pwVar1), iVar2 == 0)) goto LAB_001b4664;
        uVar3 = *(ulong *)(this + 0x20);
      } while (uVar3 < *(ulong *)(this + 8));
    }
    uVar5 = 0;
  }
LAB_001b4668:
  lVar6 = *(long *)(this + 0xb0);
  if (lVar6 != 0) {
    *(long *)(this + 0xb0) = lVar6 + -1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + (lVar6 + 5) * 8);
  }
  return uVar5;
}


