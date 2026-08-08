/*
 * Ghidra decompilation
 *
 * Function : _Z18ExtractUnixOwner20R7ArchivePKw
 * Address  : 0810d474
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void ExtractUnixOwner20(Archive *Arc,wchar *FileName)

{
  int iVar1;
  int *piVar2;
  passwd *ppVar3;
  passwd *pw;
  group *pgVar4;
  group *gr;
  uint Attr_00;
  uint Attr;
  int iVar5;
  char *pcVar6;
  __uid_t __owner;
  uid_t OwnerID;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(FileName,NameA,0x800);
  if (Arc->BrokenHeader == false) {
    piVar2 = __errno_location();
    pcVar6 = (Arc->UOHead).OwnerName;
    *piVar2 = 0;
    ppVar3 = getpwnam(pcVar6);
    if (ppVar3 == (passwd *)0x0) {
      GetWide(pcVar6);
      ErrorHandler::SysErrMsg(&ErrHandler);
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
      goto LAB_0810d570;
    }
    __owner = ppVar3->pw_uid;
    *piVar2 = 0;
    pcVar6 = (Arc->UOHead).GroupName;
    pgVar4 = getgrnam(pcVar6);
    if (pgVar4 != (group *)0x0) {
      Attr_00 = GetFileAttr(FileName);
      iVar5 = lchown(NameA,__owner,pgVar4->gr_gid);
      if (iVar5 != 0) {
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
      }
      SetFileAttr(FileName,Attr_00);
      goto LAB_0810d570;
    }
    GetWide(pcVar6);
    ErrorHandler::SysErrMsg(&ErrHandler);
  }
  ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
LAB_0810d570:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


