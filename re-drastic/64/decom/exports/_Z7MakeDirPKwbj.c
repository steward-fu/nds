/*
 * Ghidra decompilation
 *
 * Function : _Z7MakeDirPKwbj
 * Address  : 001b8cc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MakeDir(wchar_t const*, bool, unsigned int) */

void MakeDir(wchar_t *param_1,bool param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  if (!param_2) {
    param_3 = 0x1ff;
  }
  iVar2 = mkdir(acStack_808,param_3);
  if (iVar2 == -1) {
    piVar3 = __errno_location();
    cVar1 = (*piVar3 == 2) + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1,local_8 - ___stack_chk_guard,0);
}


