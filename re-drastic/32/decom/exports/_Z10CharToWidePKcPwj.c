/*
 * Ghidra decompilation
 *
 * Function : _Z10CharToWidePKcPwj
 * Address  : 080dcdf4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool CharToWide(char *Src,wchar *Dest,size_t DestSize)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  int iVar5;
  int Length;
  uint DestPos;
  uint uVar6;
  uint uVar7;
  uint SrcPos;
  int iVar8;
  byte *__s;
  wchar_t *__pwc;
  bool MarkAdded;
  
  *Dest = 0;
  sVar4 = mbstowcs((wchar_t *)Dest,Src,DestSize);
  if (sVar4 == 0xffffffff) {
    bVar3 = false;
LAB_080dce4c:
    if (bVar3 < (1 < DestSize)) {
      if (DestSize == 0) {
        return false;
      }
      if (*Src == '\0') {
        iVar8 = 0;
      }
      else {
        uVar6 = 0;
        iVar8 = 0;
        bVar3 = false;
        __s = (byte *)Src;
        do {
          __pwc = (wchar_t *)(Dest + uVar6);
          mbtowc((wchar_t *)0x0,(char *)0x0,0);
          sVar4 = __ctype_get_mb_cur_max();
          iVar5 = mbtowc(__pwc,(char *)__s,sVar4);
          if (iVar5 == -1) {
            bVar1 = *__s;
            iVar8 = iVar8 + 1;
            if ((bVar1 & 0x80) == 0) goto LAB_080dcfa4;
            bVar2 = !bVar3;
            bVar3 = true;
            uVar7 = uVar6;
            if (bVar2) {
              uVar7 = uVar6 + 1;
              __pwc = (wchar_t *)(Dest + uVar6 + 1);
              Dest[uVar6] = 0xfffe;
              if (DestSize <= uVar7) goto LAB_080dcfa4;
              bVar1 = *__s;
            }
            *__pwc = (uint)bVar1 + L'\xe000';
            uVar6 = uVar7;
          }
          else {
            mblen((char *)0x0,0);
            sVar4 = __ctype_get_mb_cur_max();
            iVar5 = mblen((char *)__s,sVar4);
            if (iVar5 < 1) {
              iVar8 = iVar8 + 1;
            }
            else {
              iVar8 = iVar8 + iVar5;
            }
          }
          uVar6 = uVar6 + 1;
          if (DestSize <= uVar6) {
LAB_080dcfa4:
            Dest[DestSize + 0x3fffffff] = 0;
            return false;
          }
          __s = (byte *)(Src + iVar8);
        } while (Src[iVar8] != '\0');
        iVar8 = uVar6 * 4;
      }
      bVar3 = true;
      *(undefined4 *)((int)Dest + iVar8) = 0;
      goto LAB_080dce94;
    }
  }
  else {
    if (sVar4 == 0) {
      bVar3 = *Src == '\0';
      goto LAB_080dce4c;
    }
    bVar3 = true;
  }
  if (DestSize == 0) {
    return bVar3;
  }
LAB_080dce94:
  Dest[DestSize + 0x3fffffff] = 0;
  return bVar3;
}


