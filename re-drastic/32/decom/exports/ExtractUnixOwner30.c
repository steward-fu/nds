/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixOwner30
 * Address  : 0810d5c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ExtractUnixOwner30(Archive *Arc,wchar *FileName)

{
  size_t sVar1;
  passwd *ppVar2;
  passwd *pw;
  group *pgVar3;
  group *gr;
  uint Attr_00;
  uint Attr;
  int OwnerSize;
  int iVar4;
  int GroupSize;
  __uid_t __owner;
  uid_t OwnerID;
  uchar *__s;
  char NameA [2048];
  char GroupName [2048];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  WideToChar(FileName,NameA,0x800);
  __s = (Arc->SubHead).SubData.Buffer;
  sVar1 = strlen((char *)__s);
  iVar4 = (Arc->SubHead).SubData.BufSize - (sVar1 + 1);
  __strncpy_chk(GroupName,__s + sVar1 + 1,iVar4,0x800);
  GroupName[iVar4] = '\0';
  ppVar2 = getpwnam((char *)__s);
  if (ppVar2 != (passwd *)0x0) {
    __owner = ppVar2->pw_uid;
    pgVar3 = getgrnam(GroupName);
    if (pgVar3 != (group *)0x0) {
      Attr_00 = GetFileAttr(FileName);
      iVar4 = lchown(NameA,__owner,pgVar3->gr_gid);
      if (iVar4 != 0) {
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
      }
      SetFileAttr(FileName,Attr_00);
      goto LAB_0810d6b0;
    }
    __s = (uchar *)GroupName;
  }
  GetWide((char *)__s);
  ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
LAB_0810d6b0:
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


