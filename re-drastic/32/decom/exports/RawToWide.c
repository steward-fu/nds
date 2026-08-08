/*
 * Ghidra decompilation
 *
 * Function : RawToWide
 * Address  : 080dd060
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * RawToWide(byte *Src,wchar *Dest,size_t DestSize)

{
  byte *pbVar1;
  wchar wVar2;
  wchar *pwVar3;
  size_t sVar4;
  
  if ((DestSize != 0) && (wVar2 = (uint)*Src + (uint)Src[1] * 0x100, *Dest = wVar2, wVar2 != 0)) {
    sVar4 = 0;
    pwVar3 = Dest;
    do {
      sVar4 = sVar4 + 1;
      if (DestSize == sVar4) {
        return Dest;
      }
      pbVar1 = Src + 3;
      Src = Src + 2;
      wVar2 = (uint)*Src + (uint)*pbVar1 * 0x100;
      pwVar3 = pwVar3 + 1;
      *pwVar3 = wVar2;
    } while (wVar2 != 0);
    return Dest;
  }
  return Dest;
}


