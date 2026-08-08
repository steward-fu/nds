/*
 * Ghidra decompilation
 *
 * Function : FastFind
 * Address  : 080ed2e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool FindFile::FastFind(wchar *FindMask,FindData *fd,bool GetSymLink)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  stat_conflict st;
  char FindMaskA [2048];
  
  iVar1 = __stack_chk_guard;
  fd->Error = false;
  WideToChar(FindMask,FindMaskA,0x800);
  if (GetSymLink) {
    iVar3 = __lxstat64(3,FindMaskA,(stat64 *)&st);
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      iVar3 = *piVar4 + -2;
      if (iVar3 != 0) {
        iVar3 = 1;
      }
      fd->Error = SUB41(iVar3,0);
      GetSymLink = (bool)0;
      goto LAB_080ed3c8;
    }
  }
  else {
    iVar3 = __xstat64(3,FindMaskA,(stat64 *)&st);
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      iVar3 = *piVar4 + -2;
      if (iVar3 != 0) {
        iVar3 = 1;
      }
      fd->Error = SUB41(iVar3,0);
      goto LAB_080ed3c8;
    }
  }
  *(undefined4 *)&fd->Size = (undefined4)st.st_size;
  *(undefined4 *)((int)&fd->Size + 4) = st.st_size._4_4_;
  fd->FileAttr = st.st_mode;
  RarTime::operator=(&fd->mtime,st.st_mtim.tv_sec);
  RarTime::operator=(&fd->atime,st.st_atim.tv_sec);
  RarTime::operator=(&fd->ctime,st.st_ctim.tv_sec);
  wcsncpyz(fd->Name,FindMask,0x800);
  fd->Flags = 0;
  bVar2 = IsDir(fd->FileAttr);
  fd->IsDir = bVar2;
  bVar2 = IsLink(fd->FileAttr);
  fd->IsLink = bVar2;
  GetSymLink = (bool)1;
LAB_080ed3c8:
  if (iVar1 == __stack_chk_guard) {
    return GetSymLink;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


