/*
 * Ghidra decompilation
 *
 * Function : WideToRaw
 * Address  : 080dcfd0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

byte * WideToRaw(wchar *Src,byte *Dest,size_t SrcSize)

{
  wchar *pwVar1;
  size_t sVar2;
  byte *pbVar3;
  wchar wVar4;
  
  if (SrcSize != 0) {
    *Dest = (byte)*Src;
    Dest[1] = (byte)(*Src >> 8);
    if (*Src != 0) {
      sVar2 = 0;
      pwVar1 = Src + 1;
      pbVar3 = Dest;
      do {
        sVar2 = sVar2 + 1;
        if (SrcSize == sVar2) {
          return Dest;
        }
        pbVar3[2] = (byte)*pwVar1;
        pbVar3[3] = (byte)(*pwVar1 >> 8);
        wVar4 = *pwVar1;
        pwVar1 = pwVar1 + 1;
        pbVar3 = pbVar3 + 2;
      } while (wVar4 != 0);
      return Dest;
    }
  }
  return Dest;
}


