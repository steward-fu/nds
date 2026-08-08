/*
 * Ghidra decompilation
 *
 * Function : CmpName
 * Address  : 001edac0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmpName(wchar_t const*, wchar_t const*, int) */

void CmpName(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  uint uVar1;
  wchar_t wVar2;
  bool bVar3;
  undefined uVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  wchar_t *__s1;
  wchar_t *__s2;
  wchar_t local_4008 [2048];
  wchar_t awStack_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = SUB41((uint)param_3 >> 0x1f,0);
  uVar1 = param_3 & 0xffff;
  if ((param_3 & 0xffffU) == 0) {
    __s1 = (wchar_t *)PointToName(param_1);
    __s2 = (wchar_t *)PointToName(param_2);
    iVar6 = wcsncmp(L"__rar_",__s2,6);
joined_r0x001edc1c:
    if (iVar6 == 0) {
LAB_001edcdc:
      uVar4 = 0;
      goto LAB_001edc34;
    }
  }
  else {
    if (1 < uVar1 - 2) {
      sVar7 = wcslen(param_1);
      iVar6 = wcsncmp(param_1,param_2,sVar7);
      if (iVar6 == 0) {
        wVar2 = param_2[sVar7];
        uVar4 = wVar2 == L'\0' || (wVar2 == L'\\' || wVar2 == L'/');
        if ((bool)uVar4) goto LAB_001edc34;
      }
      if (uVar1 == 1) goto LAB_001edd20;
      GetFilePath(param_1,local_4008,0x800);
      GetFilePath(param_2,awStack_2008,0x800);
      if (1 < uVar1 - 4) goto LAB_001edb9c;
      cVar5 = IsWildcard(local_4008);
      if (cVar5 != '\0') {
        uVar4 = match(param_1,param_2,bVar3);
        goto LAB_001edc34;
      }
      if ((uVar1 == 4) || (cVar5 = IsWildcard(param_1), cVar5 != '\0')) {
        if (local_4008[0] != L'\0') {
          sVar7 = wcslen(local_4008);
          iVar6 = wcsncmp(local_4008,awStack_2008,sVar7);
          goto LAB_001edca0;
        }
      }
      else {
        if (param_3 < 0) {
          iVar6 = wcscmp(local_4008,awStack_2008);
        }
        else {
          iVar6 = wcsicompc(local_4008,awStack_2008);
        }
LAB_001edca0:
        if (iVar6 != 0) goto LAB_001edd20;
      }
      __s1 = (wchar_t *)PointToName(param_1);
      __s2 = (wchar_t *)PointToName(param_2);
      iVar6 = wcsncmp(L"__rar_",__s2,6);
      goto joined_r0x001edc1c;
    }
    GetFilePath(param_1,local_4008,0x800);
    GetFilePath(param_2,awStack_2008,0x800);
    if (param_3 < 0) {
      iVar6 = wcscmp(local_4008,awStack_2008);
    }
    else {
      iVar6 = wcsicompc(local_4008,awStack_2008);
    }
    if (iVar6 != 0) {
LAB_001edd20:
      uVar4 = 0;
      goto LAB_001edc34;
    }
LAB_001edb9c:
    __s1 = (wchar_t *)PointToName(param_1);
    __s2 = (wchar_t *)PointToName(param_2);
    iVar6 = wcsncmp(L"__rar_",__s2,6);
    if (iVar6 == 0) goto LAB_001edcdc;
    if (uVar1 == 2) {
      if (param_3 < 0) {
        iVar6 = wcscmp(__s1,__s2);
      }
      else {
        iVar6 = wcsicompc(__s1,__s2);
      }
      uVar4 = iVar6 == 0;
      goto LAB_001edc34;
    }
  }
  uVar4 = match(__s1,__s2,bVar3);
LAB_001edc34:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4,local_8 - ___stack_chk_guard,0);
  }
  return;
}


