/*
 * Ghidra decompilation
 *
 * Function : SetUnixOwner
 * Address  : 0810d71c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SetUnixOwner(Archive *Arc,wchar *FileName)

{
  int iVar1;
  int iVar2;
  group *pgVar3;
  group *gr;
  passwd *ppVar4;
  passwd *pw;
  char *__name;
  __gid_t __group;
  char NameA [2048];
  
  iVar1 = __stack_chk_guard;
  WideToChar(FileName,NameA,0x800);
  if ((Arc->FileHead).UnixOwnerName[0] != '\0') {
    __name = (Arc->FileHead).UnixOwnerName;
    ppVar4 = getpwnam(__name);
    if (ppVar4 != (passwd *)0x0) {
      (Arc->FileHead).UnixOwnerID = ppVar4->pw_uid;
      goto LAB_0810d764;
    }
    if ((Arc->FileHead).UnixOwnerNumeric != false) goto LAB_0810d764;
LAB_0810d818:
    GetWide(__name);
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_WARNING);
    goto LAB_0810d798;
  }
LAB_0810d764:
  if ((Arc->FileHead).UnixGroupName[0] == '\0') {
LAB_0810d770:
    __group = (Arc->FileHead).UnixGroupID;
  }
  else {
    __name = (Arc->FileHead).UnixGroupName;
    pgVar3 = getgrnam(__name);
    if (pgVar3 == (group *)0x0) {
      if ((Arc->FileHead).UnixGroupNumeric == false) goto LAB_0810d818;
      goto LAB_0810d770;
    }
    __group = pgVar3->gr_gid;
    (Arc->FileHead).UnixGroupID = __group;
  }
  iVar2 = lchown(NameA,(Arc->FileHead).UnixOwnerID,__group);
  if (iVar2 != 0) {
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
  }
LAB_0810d798:
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


