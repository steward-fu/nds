/*
 * Ghidra decompilation
 *
 * Function : _Z17ConvertNameToFullPKwPwj
 * Address  : 080d4cd0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ConvertNameToFull(wchar *Src,wchar *Dest,size_t MaxSize)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  size_t Length;
  char CurDirA [2048];
  
  iVar1 = __stack_chk_guard;
  if ((Src == (wchar *)0x0) || (*Src == 0)) {
    if (MaxSize != 0) {
      *Dest = 0;
    }
  }
  else {
    if (*Src == 0x2f) {
      *Dest = 0;
    }
    else {
      pcVar2 = getcwd(CurDirA,0x800);
      if (pcVar2 == (char *)0x0) {
        CurDirA[0] = '\0';
      }
      CharToWide(CurDirA,Dest,MaxSize);
      sVar3 = wcslen((wchar_t *)Dest);
      if (((sVar3 != 0) && (Dest[sVar3 + 0x3fffffff] != 0x2f)) && (sVar3 + 1 < MaxSize)) {
        wcscat((wchar_t *)Dest,L"/");
      }
    }
    wcsncatz(Dest,Src,MaxSize);
  }
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


