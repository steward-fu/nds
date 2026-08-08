/*
 * Ghidra decompilation
 *
 * Function : _ZN11CommandData11GetExclAttrEPKw
 * Address  : 001ea220
 * Program  : drastic64
 */


/* CommandData::GetExclAttr(wchar_t const*) */

ulong __thiscall CommandData::GetExclAttr(CommandData *this,wchar_t *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar5;
  uint uVar6;
  wchar_t wVar4;
  
  cVar2 = IsDigit(*param_1);
  if (cVar2 != '\0') {
    uVar5 = wcstol(param_1,(wchar_t **)0x0,0);
    return uVar5 & 0xffffffff;
  }
  wVar4 = *param_1;
  uVar1 = 0;
  while (uVar6 = uVar1, wVar4 != L'\0') {
    while( true ) {
      iVar3 = toupperw(wVar4);
      if (iVar3 != 0x44) break;
      param_1 = param_1 + 1;
      wVar4 = *param_1;
      uVar6 = uVar6 | 0x4000;
      if (wVar4 == L'\0') goto LAB_001ea27c;
    }
    param_1 = param_1 + 1;
    wVar4 = *param_1;
    uVar1 = uVar6 | 0x2000;
    if (iVar3 != 0x56) {
      uVar1 = uVar6;
    }
  }
LAB_001ea27c:
  return (ulong)uVar6;
}


