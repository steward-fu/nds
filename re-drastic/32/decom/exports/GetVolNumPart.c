/*
 * Ghidra decompilation
 *
 * Function : GetVolNumPart
 * Address  : 080d4444
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * GetVolNumPart(wchar *ArcName)

{
  bool bVar1;
  size_t sVar2;
  wchar_t ch;
  wchar *Dot;
  wchar *pwVar3;
  int iVar4;
  wchar *NumPtr;
  wchar_t *pwVar5;
  wchar *ChPtr;
  
  sVar2 = wcslen((wchar_t *)ArcName);
  for (ChPtr = ArcName + sVar2 + 0x3fffffff; bVar1 = IsDigit(*ChPtr), NumPtr = ChPtr,
      bVar1 < (ArcName < ChPtr); ChPtr = ChPtr + -1) {
  }
  while( true ) {
    bVar1 = IsDigit(*NumPtr);
    if (NumPtr <= ArcName) {
      bVar1 = false;
    }
    if (bVar1 == false) break;
    NumPtr = NumPtr + -1;
  }
  if (NumPtr <= ArcName) {
    return ChPtr;
  }
  ch = *NumPtr;
  if (ch == L'.') {
    return ChPtr;
  }
  pwVar5 = (wchar_t *)((int)NumPtr - (~(uint)ArcName + (int)NumPtr & 0xfffffffc));
  while (bVar1 = IsDigit(ch), !bVar1) {
    if ((wchar_t *)NumPtr == pwVar5) {
      return ChPtr;
    }
    NumPtr = (wchar *)((wchar_t *)NumPtr + -1);
    ch = *NumPtr;
    if (ch == L'.') {
      return ChPtr;
    }
  }
  sVar2 = wcslen((wchar_t *)ArcName);
  iVar4 = sVar2 - 1;
  if (-1 < iVar4) {
    if (ArcName[iVar4] != 0x2f) {
      pwVar3 = ArcName + sVar2 + 0x3fffffff;
      do {
        bVar1 = iVar4 == 0;
        iVar4 = iVar4 + -1;
        if (bVar1) goto LAB_080d454c;
        pwVar3 = pwVar3 + -1;
      } while (*pwVar3 != 0x2f);
    }
    ArcName = ArcName + iVar4 + 1;
  }
LAB_080d454c:
  pwVar5 = wcschr((wchar_t *)ArcName,L'.');
  if (pwVar5 != (wchar_t *)0x0 && pwVar5 < NumPtr) {
    ChPtr = NumPtr;
  }
  return (wchar *)(wchar_t *)ChPtr;
}


