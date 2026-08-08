/*
 * Ghidra decompilation
 *
 * Function : _Z10WideToCharPKwPcj
 * Address  : 080dccbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool WideToChar(wchar *Src,char *Dest,size_t DestSize)

{
  wchar_t *pwVar1;
  int iVar2;
  int Length;
  size_t sVar3;
  wchar_t wVar4;
  uint uVar5;
  uint DestPos;
  bool bVar6;
  
  uVar5 = 0;
  *Dest = '\0';
  pwVar1 = wcschr((wchar_t *)Src,L'\xfffe');
  if (pwVar1 == (wchar_t *)0x0) {
    sVar3 = wcstombs(Dest,(wchar_t *)Src,DestSize);
    bVar6 = false;
    if (sVar3 != 0xffffffff) {
      if (sVar3 == 0) {
        bVar6 = *Src == 0;
      }
      else {
        bVar6 = true;
      }
    }
  }
  else {
    bVar6 = true;
    while (sVar3 = __ctype_get_mb_cur_max(), uVar5 < DestSize - sVar3) {
      wVar4 = *Src;
      if (wVar4 == L'\0') {
        Dest[uVar5] = (char)wVar4;
        break;
      }
      if (wVar4 != L'\xfffe') {
        if ((uint)(wVar4 + L'\xffff1f80') < 0x80) {
          Dest[uVar5] = (char)wVar4;
          uVar5 = uVar5 + 1;
        }
        else {
          wctomb((char *)0x0,L'\0');
          iVar2 = wctomb(Dest + uVar5,*Src);
          if (iVar2 == -1) {
            bVar6 = false;
          }
          mblen((char *)0x0,0);
          sVar3 = __ctype_get_mb_cur_max();
          iVar2 = mblen(Dest + uVar5,sVar3);
          if (iVar2 < 1) {
            uVar5 = uVar5 + 1;
          }
          else {
            uVar5 = uVar5 + iVar2;
          }
        }
      }
      Src = (wchar *)((wchar_t *)Src + 1);
    }
  }
  if (DestSize != 0) {
    Dest[DestSize - 1] = '\0';
  }
  return bVar6;
}


