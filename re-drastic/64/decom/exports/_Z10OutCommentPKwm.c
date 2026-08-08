/*
 * Ghidra decompilation
 *
 * Function : _Z10OutCommentPKwm
 * Address  : 001c3690
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutComment(wchar_t const*, unsigned long) */

void OutComment(wchar_t *param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auStack_1010 [4104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
      if (((param_1[uVar2] == L'\x1b') && (param_1[uVar3] == L'[')) &&
         (uVar4 = uVar2 + 2, uVar4 < param_2)) {
        do {
          if (param_1[uVar4] == L'\"') goto LAB_001c3740;
          cVar1 = IsDigit(param_1[uVar4]);
        } while (((cVar1 != '\0') || (param_1[uVar4] == L';')) &&
                (uVar4 = uVar4 + 1, param_2 != uVar4));
      }
    } while (param_2 != uVar3);
    do {
      uVar4 = uVar3;
      if (0x400 < uVar3) {
        uVar4 = 0x400;
      }
      uVar3 = uVar3 - 0x400;
      __wcsncpy_chk(auStack_1010,param_1,uVar4,0x401);
      param_1 = param_1 + 0x400;
    } while (uVar3 != (uVar2 & 0x3ff) - 0x3ff);
  }
LAB_001c3740:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


