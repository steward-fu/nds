/*
 * Ghidra decompilation
 *
 * Function : UtfToWide
 * Address  : 080dd308
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable dsize:long[r2:4] conflicts with parameter, skipped. */

bool UtfToWide(char *Src,wchar *Dest,size_t DestSize)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint c;
  uint d;
  bool bVar7;
  
  iVar4 = DestSize - 1;
  bVar7 = true;
LAB_080dd324:
  uVar6 = (uint)(byte)*Src;
  if (uVar6 != 0) {
    if (uVar6 < 0x80) goto LAB_080dd400;
    while (iVar5 = iVar4, uVar6 >> 5 != 6) {
      if (uVar6 >> 4 == 0xe) {
        pbVar1 = (byte *)Src + 1;
        if (((*pbVar1 & 0xc0) == 0x80) && (pbVar2 = (byte *)Src + 2, (*pbVar2 & 0xc0) == 0x80)) {
          Src = (char *)((byte *)Src + 3);
          uVar6 = (uVar6 & 0xf) << 0xc | *pbVar2 & 0x3f | (*pbVar1 & 0x3f) << 6;
          goto joined_r0x080dd444;
        }
        goto LAB_080dd4a8;
      }
      if ((((uVar6 >> 3 != 0x1e) || (pbVar1 = (byte *)Src + 1, (*pbVar1 & 0xc0) != 0x80)) ||
          (pbVar2 = (byte *)Src + 2, (*pbVar2 & 0xc0) != 0x80)) ||
         (pbVar3 = (byte *)Src + 3, (*pbVar3 & 0xc0) != 0x80)) goto LAB_080dd4a8;
      Src = (char *)((byte *)Src + 4);
      uVar6 = *pbVar3 & 0x3f | (uVar6 & 7) << 0x12 | (*pbVar1 & 0x3f) << 0xc | (*pbVar2 & 0x3f) << 6
      ;
      if (Dest == (wchar *)0x0) {
        if (uVar6 < 0x10000) {
LAB_080dd408:
          Dest = (wchar *)0x0;
        }
        else if (0x10ffff < uVar6) {
          bVar7 = false;
        }
        goto LAB_080dd324;
      }
      while( true ) {
        iVar4 = iVar5 + -1;
        if (iVar4 < 0) goto LAB_080dd4b4;
        if (uVar6 < 0x10000) {
          *Dest = uVar6;
          Dest = Dest + 1;
          goto LAB_080dd324;
        }
        iVar4 = iVar5 + -2;
        if (iVar4 == -1) goto LAB_080dd4b4;
        if (0x10ffff < uVar6) {
          bVar7 = false;
          goto LAB_080dd324;
        }
        *Dest = uVar6;
        uVar6 = (uint)(byte)*Src;
        Dest = Dest + 1;
        if (uVar6 == 0) goto LAB_080dd4ac;
        if (0x7f < uVar6) break;
LAB_080dd400:
        Src = (char *)((byte *)Src + 1);
        iVar5 = iVar4;
joined_r0x080dd444:
        iVar4 = iVar5;
        if (Dest == (wchar *)0x0) goto LAB_080dd408;
      }
    }
    pbVar1 = (byte *)Src + 1;
    if ((*pbVar1 & 0xc0) == 0x80) {
      Src = (char *)((byte *)Src + 2);
      uVar6 = *pbVar1 & 0x3f | (uVar6 & 0x1f) << 6;
      goto joined_r0x080dd444;
    }
LAB_080dd4a8:
    bVar7 = false;
  }
LAB_080dd4ac:
  if (Dest != (wchar *)0x0) {
LAB_080dd4b4:
    *Dest = 0;
  }
  return bVar7;
}


