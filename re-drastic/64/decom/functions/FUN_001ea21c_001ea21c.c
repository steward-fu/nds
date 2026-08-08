/*
 * Ghidra decompilation
 *
 * Function : FUN_001ea21c
 * Address  : 001ea21c
 * Program  : drastic64
 */


ulong FUN_001ea21c(undefined8 param_1,wchar_t *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar5;
  uint uVar6;
  wchar_t wVar4;
  
  cVar2 = IsDigit(*param_2);
  if (cVar2 != '\0') {
    uVar5 = wcstol(param_2,(wchar_t **)0x0,0);
    return uVar5 & 0xffffffff;
  }
  wVar4 = *param_2;
  uVar1 = 0;
  while (uVar6 = uVar1, wVar4 != L'\0') {
    while( true ) {
      iVar3 = toupperw(wVar4);
      if (iVar3 != 0x44) break;
      param_2 = param_2 + 1;
      wVar4 = *param_2;
      uVar6 = uVar6 | 0x4000;
      if (wVar4 == L'\0') goto LAB_001ea27c;
    }
    param_2 = param_2 + 1;
    wVar4 = *param_2;
    uVar1 = uVar6 | 0x2000;
    if (iVar3 != 0x56) {
      uVar1 = uVar6;
    }
  }
LAB_001ea27c:
  return (ulong)uVar6;
}


