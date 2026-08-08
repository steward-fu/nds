/*
 * Ghidra decompilation
 *
 * Function : _Z13WildFileExistPKw
 * Address  : 001b9030
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WildFileExist(wchar_t const*) */

undefined WildFileExist(wchar_t *param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  FindFile aFStack_4848 [8208];
  FindData aFStack_2838 [8208];
  RarTime aRStack_828 [8];
  RarTime aRStack_820 [8];
  RarTime aRStack_818 [16];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsWildcard(param_1);
  if (cVar1 == '\0') {
    WideToChar(param_1,acStack_808,0x800);
    iVar3 = access(acStack_808,0);
    uVar2 = iVar3 == 0;
  }
  else {
    FindFile::FindFile(aFStack_4848);
                    /* try { // try from 001b9080 to 001b90bf has its CatchHandler @ 001b9138 */
    FindFile::SetMask(aFStack_4848,param_1);
    RarTime::RarTime(aRStack_828);
    RarTime::RarTime(aRStack_820);
    RarTime::RarTime(aRStack_818);
    uVar2 = FindFile::Next(aFStack_4848,aFStack_2838,false);
    FindFile::~FindFile(aFStack_4848);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


