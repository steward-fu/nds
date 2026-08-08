/*
 * Ghidra decompilation
 *
 * Function : FastFind
 * Address  : 001cb850
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindFile::FastFind(wchar_t const*, FindData*, bool) */

undefined FindFile::FastFind(wchar_t *param_1,FindData *param_2,bool param_3)

{
  FindData FVar1;
  int iVar2;
  int *piVar3;
  undefined auStack_888 [48];
  __off_t local_858;
  long local_840;
  long local_830;
  long local_820;
  char acStack_808 [2048];
  long local_8;
  
  param_2[0x202c] = (FindData)0x0;
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  if (param_3) {
    iVar2 = __lxstat64(0,acStack_808,(stat64 *)auStack_888);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      param_3 = false;
      param_2[0x202c] = (FindData)(*piVar3 != 2);
      goto LAB_001cb92c;
    }
  }
  else {
    iVar2 = __xstat64(0,acStack_808,(stat64 *)auStack_888);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      param_2[0x202c] = (FindData)(*piVar3 != 2);
      goto LAB_001cb92c;
    }
  }
  *(__off_t *)(param_2 + 0x2000) = local_858;
  *(undefined4 *)(param_2 + 0x2008) = auStack_888._16_4_;
  RarTime::operator=((RarTime *)(param_2 + 0x2010),local_830);
  param_3 = true;
  RarTime::operator=((RarTime *)(param_2 + 0x2020),local_840);
  RarTime::operator=((RarTime *)(param_2 + 0x2018),local_820);
  wcsncpyz((wchar_t *)param_2,param_1,0x800);
  *(undefined4 *)(param_2 + 0x2028) = 0;
  FVar1 = (FindData)IsDir(*(uint *)(param_2 + 0x2008));
  param_2[0x200c] = FVar1;
  FVar1 = (FindData)IsLink(*(uint *)(param_2 + 0x2008));
  param_2[0x200d] = FVar1;
LAB_001cb92c:
  if (local_8 - ___stack_chk_guard == 0) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


