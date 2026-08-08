/*
 * Ghidra decompilation
 *
 * Function : GetPathRoot
 * Address  : 080d4e00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void GetPathRoot(wchar *Path,wchar *Root,size_t MaxSize)

{
  wchar_t *pwVar1;
  wchar *Slash;
  size_t Length;
  size_t sVar2;
  
  *Root = 0;
  etoupperw(*Path);
  if (((*Path == 0x5c) && (Path[1] == 0x5c)) &&
     (pwVar1 = wcschr((wchar_t *)(Path + 2),L'\\'), pwVar1 != (wchar_t *)0x0)) {
    pwVar1 = wcschr(pwVar1 + 1,L'\\');
    if (pwVar1 == (wchar_t *)0x0) {
      Length = wcslen((wchar_t *)Path);
    }
    else {
      Length = ((int)pwVar1 - (int)Path >> 2) + 1;
    }
    if (Length < MaxSize) {
      sVar2 = Length << 2;
    }
    else {
      sVar2 = 0;
      Length = sVar2;
    }
    wcsncpy((wchar_t *)Root,(wchar_t *)Path,Length);
    *(undefined4 *)((int)Root + sVar2) = 0;
  }
  return;
}


