/*
 * Ghidra decompilation
 *
 * Function : UnixSlashToDos
 * Address  : 080d4b50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * UnixSlashToDos(wchar *SrcName,wchar *DestName,size_t MaxLength)

{
  size_t sVar1;
  wchar *pwVar2;
  wchar wVar3;
  wchar *s;
  
  if (DestName != (wchar *)0x0 && DestName != SrcName) {
    sVar1 = wcslen((wchar_t *)SrcName);
    if (MaxLength <= sVar1) {
      *DestName = 0;
      return DestName;
    }
    wcscpy((wchar_t *)DestName,(wchar_t *)SrcName);
  }
  wVar3 = *SrcName;
  if (wVar3 == 0) {
    DestName = DestName;
    if (DestName == (wchar *)0x0) {
      DestName = SrcName;
    }
  }
  else {
    pwVar2 = SrcName;
    if (DestName == (wchar *)0x0) {
      do {
        if (wVar3 == 0x2f) {
          *pwVar2 = 0x5c;
        }
        pwVar2 = pwVar2 + 1;
        wVar3 = *pwVar2;
        DestName = SrcName;
      } while (wVar3 != 0);
    }
    else {
      do {
        if (wVar3 == 0x2f) {
          *(undefined4 *)((int)DestName + ((int)pwVar2 - (int)SrcName)) = 0x5c;
        }
        pwVar2 = pwVar2 + 1;
        wVar3 = *pwVar2;
      } while (wVar3 != 0);
    }
  }
  return DestName;
}


