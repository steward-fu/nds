/*
 * Ghidra decompilation
 *
 * Function : WideToUtfSize
 * Address  : 080dd258
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

size_t WideToUtfSize(wchar *Src)

{
  wchar *pwVar1;
  size_t sVar2;
  int iVar3;
  wchar wVar4;
  wchar wVar5;
  
  if (*Src == 0) {
    sVar2 = 1;
  }
  else {
    iVar3 = 0;
    wVar4 = *Src;
    do {
      while (wVar4 < 0x80) {
        wVar5 = Src[1];
        iVar3 = iVar3 + 1;
LAB_080dd27c:
        Src = Src + 1;
        wVar4 = wVar5;
        if (wVar5 == 0) goto LAB_080dd2ac;
      }
      if (0x7ff < wVar4) {
        if (wVar4 < 0x10000) {
          wVar5 = Src[1];
          if ((wVar4 - 0xd800 < 0x400) && (wVar5 - 0xdc00 < 0x400)) {
            wVar5 = Src[2];
            iVar3 = iVar3 + 4;
            Src = Src + 1;
          }
          else {
            iVar3 = iVar3 + 3;
          }
        }
        else {
          wVar5 = Src[1];
          if (wVar4 < 0x200000) {
            iVar3 = iVar3 + 4;
          }
        }
        goto LAB_080dd27c;
      }
      pwVar1 = Src + 1;
      iVar3 = iVar3 + 2;
      Src = Src + 1;
      wVar4 = *pwVar1;
    } while (*pwVar1 != 0);
LAB_080dd2ac:
    sVar2 = iVar3 + 1;
  }
  return sVar2;
}


