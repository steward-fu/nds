/*
 * Ghidra decompilation
 *
 * Function : _ZN4File6CreateEPKwj
 * Address  : 001b7ac0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::Create(wchar_t const*, unsigned int) */

void __thiscall File::Create(File *this,wchar_t *param_1,uint param_2)

{
  char *__modes;
  FILE *pFVar1;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  __modes = "w";
  if ((param_2 & 2) == 0) {
    __modes = "w+";
  }
  pFVar1 = fopen64(acStack_808,__modes);
  *(FILE **)(this + 8) = pFVar1;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (File)0x0;
  this[0x1a] = (File)0x1;
  wcsncpyz((wchar_t *)(this + 0x20),param_1,0x800);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(long *)(this + 8) != 0,local_8 - ___stack_chk_guard,0);
}


