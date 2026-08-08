/*
 * Ghidra decompilation
 *
 * Function : Next
 * Address  : 001cb9a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindFile::Next(FindData*, bool) */

char __thiscall FindFile::Next(FindFile *this,FindData *param_1,bool param_2)

{
  char cVar1;
  FindData FVar2;
  int iVar3;
  DIR *pDVar4;
  dirent64 *pdVar5;
  undefined4 *puVar6;
  size_t sVar7;
  size_t sVar8;
  wchar_t *__s1;
  int *piVar9;
  wchar_t awStack_4808 [2048];
  wchar_t local_2808 [2048];
  char acStack_808 [2048];
  long local_8;
  
  iVar3 = *(int *)this;
  local_8 = ___stack_chk_guard;
  param_1[0x202c] = (FindData)0x0;
  cVar1 = '\0';
  if (iVar3 != 0) {
    if (this[0x2000] == (FindFile)0x0) {
      pDVar4 = *(DIR **)(this + 0x2008);
    }
    else {
      wcsncpyz(local_2808,(wchar_t *)this,0x800);
      RemoveNameFromPath(local_2808);
      if (local_2808[0] == L'\0') {
        __wcscpy_chk(local_2808,&DAT_00229348,0x800);
      }
      WideToChar(local_2808,acStack_808,0x800);
      pDVar4 = opendir(acStack_808);
      *(DIR **)(this + 0x2008) = pDVar4;
      if (pDVar4 == (DIR *)0x0) {
        piVar9 = __errno_location();
        cVar1 = '\0';
        param_1[0x202c] = (FindData)(*piVar9 != 2);
        goto LAB_001cba84;
      }
    }
    pdVar5 = readdir64(pDVar4);
    while (pdVar5 != (dirent64 *)0x0) {
      if (*(short *)pdVar5->d_name == 0x2e) {
LAB_001cba6c:
        pDVar4 = *(DIR **)(this + 0x2008);
      }
      else if ((*(short *)pdVar5->d_name == 0x2e2e) && (pdVar5->d_name[2] == '\0')) {
        pDVar4 = *(DIR **)(this + 0x2008);
      }
      else {
        CharToWide(pdVar5->d_name,awStack_4808,0x800);
        cVar1 = CmpName((wchar_t *)this,awStack_4808,0);
        if (cVar1 == '\0') goto LAB_001cba6c;
        __wcscpy_chk(local_2808,this,0x800);
        puVar6 = (undefined4 *)PointToName(local_2808);
        *puVar6 = 0;
        sVar7 = wcslen(local_2808);
        sVar8 = wcslen(awStack_4808);
        if (0x7fe < sVar7 + sVar8) break;
        __wcscat_chk(local_2808,awStack_4808,0x800);
        cVar1 = FastFind(local_2808,param_1,param_2);
        if (cVar1 != '\0') {
          __wcscpy_chk(param_1,local_2808,0x800);
          *(undefined4 *)(param_1 + 0x2028) = 0;
          FVar2 = (FindData)IsDir(*(uint *)(param_1 + 0x2008));
          param_1[0x200c] = FVar2;
          FVar2 = (FindData)IsLink(*(uint *)(param_1 + 0x2008));
          param_1[0x200d] = FVar2;
          this[0x2000] = (FindFile)0x0;
          __s1 = (wchar_t *)PointToName((wchar_t *)param_1);
          iVar3 = wcscmp(__s1,L".");
          if ((iVar3 == 0) || (iVar3 = wcscmp(__s1,L".."), iVar3 == 0)) {
            cVar1 = Next(this,param_1,false);
          }
          goto LAB_001cba84;
        }
        ErrorHandler::OpenErrorMsg(&ErrHandler,(wchar_t *)0x0);
        pDVar4 = *(DIR **)(this + 0x2008);
      }
      pdVar5 = readdir64(pDVar4);
    }
    cVar1 = '\0';
  }
LAB_001cba84:
  if (local_8 - ___stack_chk_guard == 0) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


