/*
 * Ghidra decompilation
 *
 * Function : _ZN4File4OpenEPKwj
 * Address  : 001b7860
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::Open(wchar_t const*, unsigned int) */

void __thiscall File::Open(File *this,wchar_t *param_1,uint param_2)

{
  char *__modes;
  int __fd;
  int iVar1;
  undefined8 uVar2;
  FILE *pFVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2020) = 0;
  if (this[0x1d] == (File)0x0) {
    uVar5 = param_2 & 1;
    uVar6 = uVar5 & (param_2 ^ 4) >> 2;
    uVar7 = 2;
    if (uVar5 == 0) {
LAB_001b799c:
      uVar7 = param_2 >> 1 & 1;
      uVar5 = 0;
    }
    WideToChar(param_1,acStack_808,0x800);
    uVar2 = __open64_2(acStack_808,uVar7);
    __fd = (int)uVar2;
    if (__fd < 0 || uVar6 == 0) goto LAB_001b78e8;
    iVar1 = flock(uVar2,6);
    if (iVar1 == -1) {
      close(__fd);
      uVar2 = 0;
      goto LAB_001b7938;
    }
LAB_001b78f0:
    __modes = "r+";
    if (uVar5 == 0) {
      __modes = "r";
    }
    pFVar3 = fdopen(__fd,__modes);
    if (pFVar3 != (FILE *)0x0) {
      *(FILE **)(this + 8) = pFVar3;
      *(undefined4 *)(this + 0x14) = 0;
      this[0x18] = (File)0x0;
      this[0x1a] = (File)0x0;
      wcsncpyz((wchar_t *)(this + 0x20),param_1,0x800);
      uVar2 = 1;
      goto LAB_001b7938;
    }
  }
  else {
    uVar5 = param_2 & 1;
    uVar6 = 0;
    if ((param_2 & 1) == 0) goto LAB_001b799c;
    WideToChar(param_1,acStack_808,0x800);
    __fd = __open64_2(acStack_808,2);
LAB_001b78e8:
    if (__fd != -1) goto LAB_001b78f0;
  }
  piVar4 = __errno_location();
  if (*piVar4 == 2) {
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (File)0x0;
    this[0x1a] = (File)0x0;
    *(undefined4 *)(this + 0x2020) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (File)0x0;
    this[0x1a] = (File)0x0;
  }
LAB_001b7938:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


