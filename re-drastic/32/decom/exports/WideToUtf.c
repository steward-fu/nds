/*
 * Ghidra decompilation
 *
 * Function : WideToUtf
 * Address  : 080dd0d4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable dsize:long[r2:4] conflicts with parameter, skipped. */

void WideToUtf(wchar *Src,char *Dest,size_t DestSize)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint c;
  
  iVar4 = DestSize - 1;
  do {
    while( true ) {
      while( true ) {
        uVar5 = *Src;
        puVar2 = Src;
        iVar3 = iVar4;
        while( true ) {
          if ((uVar5 == 0) || (iVar4 = iVar3 + -1, iVar4 < 0)) {
            *Dest = 0;
            return;
          }
          Src = puVar2 + 1;
          bVar1 = (byte)uVar5;
          if (0x7f < uVar5) break;
          *Dest = bVar1;
          uVar5 = *Src;
          Dest = (char *)((byte *)Dest + 1);
          puVar2 = Src;
          iVar3 = iVar4;
        }
        if ((0x7ff < uVar5) || (iVar4 = iVar3 + -2, iVar4 < 0)) break;
        *Dest = (byte)(uVar5 >> 6) | 0xc0;
        ((byte *)Dest)[1] = bVar1 & 0x3f | 0x80;
        Dest = (char *)((byte *)Dest + 2);
      }
      if (uVar5 - 0xd800 < 0x400) break;
      if (uVar5 < 0x10000) goto LAB_080dd220;
LAB_080dd20c:
      if (uVar5 < 0x200000) {
LAB_080dd1c0:
        iVar4 = iVar4 + -3;
        if (-1 < iVar4) {
          *Dest = (byte)(uVar5 >> 0x12) | 0xf0;
          ((byte *)Dest)[1] = (byte)((uVar5 << 0xe) >> 0x1a) | 0x80;
          ((byte *)Dest)[2] = (byte)((uVar5 << 0x14) >> 0x1a) | 0x80;
          ((byte *)Dest)[3] = (byte)uVar5 & 0x3f | 0x80;
          Dest = (char *)((byte *)Dest + 4);
        }
      }
    }
    if (puVar2[1] - 0xdc00 < 0x400) {
      Src = puVar2 + 2;
      uVar5 = puVar2[1] + 0x2400 + (uVar5 - 0xd800) * 0x400;
      goto LAB_080dd1c0;
    }
LAB_080dd220:
    iVar4 = iVar4 + -2;
    if (iVar4 < 0) goto LAB_080dd20c;
    *Dest = (byte)(uVar5 >> 0xc) | 0xe0;
    ((byte *)Dest)[1] = (byte)((uVar5 << 0x14) >> 0x1a) | 0x80;
    ((byte *)Dest)[2] = bVar1 & 0x3f | 0x80;
    Dest = (char *)((byte *)Dest + 3);
  } while( true );
}


