/*
 * Ghidra decompilation
 *
 * Function : Utf16_To_Utf8Buf
 * Address  : 080c6e34
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes Utf16_To_Utf8Buf(CBuf *dest,UInt16 *src,size_t srcLen)

{
  uint uVar1;
  size_t sVar2;
  char cVar3;
  UInt32 value;
  uint uVar4;
  UInt16 *pUVar5;
  int iVar6;
  int iVar7;
  UInt32 value_1;
  size_t sVar8;
  int iVar9;
  Byte *pBVar10;
  
  if (srcLen == 0) {
    if (dest->size == 0) {
      Buf_Free(dest,&g_Alloc);
      iVar6 = Buf_Create(dest,1,&g_Alloc);
      if (iVar6 == 0) {
        return 2;
      }
      pBVar10 = dest->data;
      iVar6 = 0;
    }
    else {
      pBVar10 = dest->data;
      iVar6 = 0;
    }
  }
  else {
    iVar6 = 0;
    sVar8 = 0;
    do {
      sVar2 = sVar8 + 1;
      uVar4 = (uint)src[sVar8];
      if (uVar4 < 0x80) {
        iVar6 = iVar6 + 1;
      }
      else {
        if (uVar4 - 0xd800 < 0x800) {
          if (0xdbff < uVar4 || srcLen == sVar2) break;
          sVar2 = sVar8 + 2;
          if (0x3ff < src[sVar8 + 1] - 0xdc00) break;
          if ((src[sVar8 + 1] - 0xdc00 | (uVar4 - 0xd800) * 0x400) + 0x10000 < 0x200000) {
            iVar7 = 3;
          }
          else {
            iVar7 = 4;
          }
        }
        else if (uVar4 < 0x800) {
          iVar7 = 1;
        }
        else {
          iVar7 = 2;
        }
        iVar6 = iVar6 + 1 + iVar7;
      }
      sVar8 = sVar2;
    } while (srcLen != sVar2);
    if (dest->size < iVar6 + 1U) {
      Buf_Free(dest,&g_Alloc);
      iVar6 = Buf_Create(dest,iVar6 + 1U,&g_Alloc);
      if (iVar6 == 0) {
        return 2;
      }
    }
    iVar6 = 0;
    pBVar10 = dest->data;
    sVar8 = 0;
    do {
      while( true ) {
        sVar2 = sVar8 + 1;
        uVar4 = (uint)src[sVar8];
        if (0x7f < uVar4) break;
        if (pBVar10 != (Byte *)0x0) {
          pBVar10[iVar6] = (Byte)src[sVar8];
        }
        iVar6 = iVar6 + 1;
LAB_080c6f54:
        sVar8 = sVar2;
        if (srcLen == sVar2) goto LAB_080c707c;
      }
      if (uVar4 - 0xd800 < 0x800) {
        if (0xdbff < uVar4 || srcLen == sVar2) {
LAB_080c7120:
          dest->data[iVar6] = '\0';
          return 0xb;
        }
        pUVar5 = src + sVar8;
        sVar2 = sVar8 + 2;
        if (0x3ff < pUVar5[1] - 0xdc00) goto LAB_080c7120;
        uVar4 = (pUVar5[1] - 0xdc00 | (uVar4 - 0xd800) * 0x400) + 0x10000;
        if (uVar4 < 0x200000) {
          iVar7 = 0x12;
          pUVar5 = (UInt16 *)0xf0;
        }
        else {
          iVar7 = 0x18;
        }
        cVar3 = (char)pUVar5;
        if (uVar4 < 0x200000) {
          iVar9 = 3;
        }
        else {
          cVar3 = -8;
          iVar9 = 4;
        }
LAB_080c6fdc:
        if (pBVar10 == (Byte *)0x0) {
LAB_080c70c8:
          iVar6 = iVar6 + 1 + iVar9;
          goto LAB_080c6f54;
        }
      }
      else {
        if (0x7ff < uVar4) {
          iVar7 = 0xc;
          cVar3 = -0x20;
          iVar9 = 2;
          goto LAB_080c6fdc;
        }
        if (pBVar10 == (Byte *)0x0) {
          iVar9 = 1;
          goto LAB_080c70c8;
        }
        iVar7 = 6;
        cVar3 = -0x40;
        iVar9 = 1;
      }
      uVar1 = (iVar9 + -1) * 6;
      pBVar10[iVar6] = cVar3 + (char)(uVar4 >> iVar7);
      pBVar10[iVar6 + 1] = ((byte)(uVar4 >> (uVar1 & 0xff)) & 0x3f) + 0x80;
      if (iVar9 + -1 != 0) {
        pBVar10[iVar6 + 2] = ((byte)(uVar4 >> (uVar1 - 6 & 0xff)) & 0x3f) + 0x80;
        if (iVar9 != 2) {
          pBVar10[iVar6 + 3] = ((byte)(uVar4 >> (uVar1 - 0xc & 0xff)) & 0x3f) + 0x80;
          if (iVar9 != 3) {
            pBVar10[iVar6 + 4] = ((byte)(uVar4 >> (uVar1 - 0x12 & 0xff)) & 0x3f) + 0x80;
          }
        }
      }
      iVar6 = iVar6 + 1 + iVar9;
      sVar8 = sVar2;
    } while (srcLen != sVar2);
LAB_080c707c:
    pBVar10 = dest->data;
  }
  pBVar10[iVar6] = '\0';
  return 0;
}


