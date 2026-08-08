/*
 * Ghidra decompilation
 *
 * Function : SetUnixOwner
 * Address  : 001f0630
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SetUnixOwner(Archive&, wchar_t const*) */

void SetUnixOwner(Archive *param_1,wchar_t *param_2)

{
  int iVar1;
  group *pgVar2;
  passwd *ppVar3;
  __gid_t _Var4;
  Archive *__name;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_2,acStack_808,0x800);
  if (param_1[0xc880] != (Archive)0x0) {
    __name = param_1 + 0xc880;
    ppVar3 = getpwnam((char *)__name);
    if (ppVar3 != (passwd *)0x0) {
      *(__uid_t *)(param_1 + 0xca80) = ppVar3->pw_uid;
      goto LAB_001f0680;
    }
    if (param_1[0xc87e] != (Archive)0x0) goto LAB_001f0680;
LAB_001f0768:
    GetWide((char *)__name);
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
    goto LAB_001f06a4;
  }
LAB_001f0680:
  if (param_1[0xc980] == (Archive)0x0) {
    _Var4 = *(__gid_t *)(param_1 + 0xca84);
LAB_001f0690:
    iVar1 = lchown(acStack_808,*(__uid_t *)(param_1 + 0xca80),_Var4);
  }
  else {
    __name = param_1 + 0xc980;
    pgVar2 = getgrnam((char *)__name);
    if (pgVar2 == (group *)0x0) {
      if (param_1[0xc87f] == (Archive)0x0) goto LAB_001f0768;
      _Var4 = *(__gid_t *)(param_1 + 0xca84);
      goto LAB_001f0690;
    }
    _Var4 = pgVar2->gr_gid;
    *(__gid_t *)(param_1 + 0xca84) = _Var4;
    iVar1 = lchown(acStack_808,*(__uid_t *)(param_1 + 0xca80),_Var4);
  }
  if (iVar1 != 0) {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
  }
LAB_001f06a4:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


