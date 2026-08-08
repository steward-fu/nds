/*
 * Ghidra decompilation
 *
 * Function : CmpName
 * Address  : 0810a7e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool CmpName(wchar *Wildcard,wchar *Name,int CmpMode)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  size_t WildLength;
  int iVar4;
  wchar *Name1;
  wchar *Name2;
  wchar wVar5;
  wchar NextCh;
  uint uVar6;
  bool ForceCase;
  wchar Path1 [2048];
  wchar Path2 [2048];
  
  iVar1 = __stack_chk_guard;
  uVar6 = CmpMode & 0xffff;
  if (uVar6 == 0) {
    Wildcard = PointToName(Wildcard);
    Name = PointToName(Name);
    iVar4 = wcsncmp(L"__rar_",(wchar_t *)Name,6);
    if (iVar4 == 0) goto LAB_0810a9b0;
LAB_0810a9e8:
    bVar2 = match(Wildcard,Name,SUB41((uint)CmpMode >> 0x1f,0));
  }
  else {
    sVar3 = wcslen((wchar_t *)Wildcard);
    if (uVar6 - 2 < 2) {
      GetFilePath(Wildcard,Path1,0x800);
      GetFilePath(Name,Path2,0x800);
      if (CmpMode < 0) {
        iVar4 = wcscmp((wchar_t *)Path1,(wchar_t *)Path2);
      }
      else {
        iVar4 = wcsicompc(Path1,Path2);
      }
      if (iVar4 == 0) goto LAB_0810a89c;
    }
    else {
      iVar4 = wcsncmp((wchar_t *)Wildcard,(wchar_t *)Name,sVar3);
      if (iVar4 == 0) {
        wVar5 = Name[sVar3];
        bVar2 = wVar5 == 0 || (wVar5 == 0x2f || wVar5 == 0x5c);
        if (bVar2) goto LAB_0810a900;
      }
      if (uVar6 != 1) {
        GetFilePath(Wildcard,Path1,0x800);
        GetFilePath(Name,Path2,0x800);
LAB_0810a89c:
        if (uVar6 - 4 < 2) {
          bVar2 = IsWildcard(Path1);
          if (bVar2) goto LAB_0810a9e8;
          if ((uVar6 == 4) || (bVar2 = IsWildcard(Wildcard), bVar2)) {
            if (Path1[0] == 0) goto LAB_0810a8a8;
            sVar3 = wcslen((wchar_t *)Path1);
            iVar4 = wcsncmp((wchar_t *)Path1,(wchar_t *)Path2,sVar3);
          }
          else if (CmpMode < 0) {
            iVar4 = wcscmp((wchar_t *)Path1,(wchar_t *)Path2);
          }
          else {
            iVar4 = wcsicompc(Path1,Path2);
          }
          if (iVar4 != 0) goto LAB_0810a9b0;
        }
LAB_0810a8a8:
        Wildcard = PointToName(Wildcard);
        Name = PointToName(Name);
        iVar4 = wcsncmp(L"__rar_",(wchar_t *)Name,6);
        if (iVar4 != 0) {
          if (uVar6 == 2) {
            if (CmpMode < 0) {
              iVar4 = wcscmp((wchar_t *)Wildcard,(wchar_t *)Name);
            }
            else {
              iVar4 = wcsicompc(Wildcard,Name);
            }
            bVar2 = iVar4 == 0;
            goto LAB_0810a900;
          }
          goto LAB_0810a9e8;
        }
      }
    }
LAB_0810a9b0:
    bVar2 = false;
  }
LAB_0810a900:
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


