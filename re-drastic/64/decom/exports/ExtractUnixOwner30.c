/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixOwner30
 * Address  : 001f04f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExtractUnixOwner30(Archive&, wchar_t const*) */

void ExtractUnixOwner30(Archive *param_1,wchar_t *param_2)

{
  __uid_t __owner;
  int iVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  passwd *ppVar5;
  group *pgVar6;
  char *__s;
  char acStack_1008 [2048];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_2,acStack_1008,0x800);
  __s = *(char **)(param_1 + 0xeae8);
  sVar4 = strlen(__s);
  iVar3 = (int)sVar4 + 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 0xeaf0) - iVar3;
  __strncpy_chk(acStack_808,__s + iVar3,(long)iVar1,0x800);
  acStack_808[iVar1] = '\0';
  ppVar5 = getpwnam(__s);
  if (ppVar5 != (passwd *)0x0) {
    __owner = ppVar5->pw_uid;
    pgVar6 = getgrnam(acStack_808);
    __s = acStack_808;
    if (pgVar6 != (group *)0x0) {
      uVar2 = GetFileAttr(param_2);
      iVar3 = lchown(acStack_1008,__owner,pgVar6->gr_gid);
      if (iVar3 != 0) {
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
      }
      SetFileAttr(param_2,uVar2);
      goto LAB_001f05c0;
    }
  }
  GetWide(__s);
  ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
LAB_001f05c0:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


