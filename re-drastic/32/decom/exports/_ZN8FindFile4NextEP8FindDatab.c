/*
 * Ghidra decompilation
 *
 * Function : _ZN8FindFile4NextEP8FindDatab
 * Address  : 080ed43c
 * Program  : drastic
 */


/* DWARF original prototype: bool Next(FindFile * this, FindData * fd, bool GetSymLink) */

bool __thiscall FindFile::Next(FindFile *this,FindData *fd,bool GetSymLink)

{
  int iVar1;
  bool bVar2;
  dirent64 *pdVar4;
  dirent_conflict *ent;
  bool bVar3;
  int iVar5;
  wchar *pwVar6;
  size_t sVar7;
  size_t sVar8;
  wchar_t *__s1;
  wchar *NameOnly;
  int *piVar9;
  wchar wVar10;
  DIR *__dirp;
  char *__s1_00;
  wchar Name [2048];
  wchar DirName [2048];
  char DirNameA [2048];
  
  iVar1 = __stack_chk_guard;
  wVar10 = this->FindMask[0];
  fd->Error = false;
  if (wVar10 == 0) {
    bVar2 = false;
  }
  else {
    if (this->FirstCall == false) {
      __dirp = (DIR *)this->dirp;
    }
    else {
      wcsncpyz(DirName,this->FindMask,0x800);
      RemoveNameFromPath(DirName);
      if (DirName[0] == 0) {
        __wcscpy_chk(DirName,&DAT_0814507c,0x800);
      }
      WideToChar(DirName,DirNameA,0x800);
      __dirp = opendir(DirNameA);
      this->dirp = (DIR *)__dirp;
      if (__dirp == (DIR *)0x0) {
        piVar9 = __errno_location();
        iVar5 = *piVar9 + -2;
        if (iVar5 != 0) {
          iVar5 = 1;
        }
        fd->Error = SUB41(iVar5,0);
        bVar2 = false;
        goto LAB_080ed670;
      }
    }
    while (pdVar4 = readdir64(__dirp), pdVar4 != (dirent64 *)0x0) {
      __s1_00 = pdVar4->d_name;
      iVar5 = strcmp(__s1_00,".");
      if ((iVar5 != 0) && (iVar5 = strcmp(__s1_00,".."), iVar5 != 0)) {
        CharToWide(__s1_00,Name,0x800);
        bVar2 = CmpName(this->FindMask,Name,0);
        if (bVar2) {
          __wcscpy_chk(DirName,this,0x800);
          pwVar6 = PointToName(DirName);
          *pwVar6 = 0;
          sVar7 = wcslen((wchar_t *)DirName);
          sVar8 = wcslen((wchar_t *)Name);
          if (0x7fe < sVar7 + sVar8) break;
          __wcscat_chk(DirName,Name,0x800);
          bVar2 = FastFind(DirName,fd,GetSymLink);
          if (bVar2) {
            __wcscpy_chk(fd,DirName,0x800);
            fd->Flags = 0;
            bVar3 = IsDir(fd->FileAttr);
            fd->IsDir = bVar3;
            bVar3 = IsLink(fd->FileAttr);
            fd->IsLink = bVar3;
            this->FirstCall = false;
            __s1 = (wchar_t *)PointToName(fd->Name);
            iVar5 = wcscmp(__s1,L".");
            if ((iVar5 == 0) || (iVar5 = wcscmp(__s1,L".."), iVar5 == 0)) {
              bVar2 = Next(this,fd,false);
            }
            goto LAB_080ed670;
          }
          ErrorHandler::OpenErrorMsg((wchar_t *)&ErrHandler,(wchar_t *)0x0);
        }
      }
      __dirp = (DIR *)this->dirp;
    }
    bVar2 = false;
  }
LAB_080ed670:
  if (iVar1 == __stack_chk_guard) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


