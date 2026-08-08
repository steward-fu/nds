/*
 * Ghidra decompilation
 *
 * Function : _Z17GetStreamNameNTFSR7ArchivePwm
 * Address  : 001f02a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetStreamNameNTFS(Archive&, wchar_t*, unsigned long) */

void GetStreamNameNTFS(Archive *param_1,wchar_t *param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined auStack_2008 [8192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = *(ulong *)(param_1 + 0xeaf0);
  if (*(int *)(param_1 + 0x11208) == 2) {
    uVar1 = param_3 - 1;
    if (uVar3 >> 1 < param_3 - 1) {
      uVar1 = uVar3 >> 1;
    }
    RawToWide(*(uchar **)(param_1 + 0xeae8),param_2,uVar1);
    param_2[uVar1] = L'\0';
  }
  else {
    if (0x1fff < uVar3) {
      uVar3 = 0x1fff;
    }
    pcVar2 = (char *)__memcpy_chk(auStack_2008,*(uchar **)(param_1 + 0xeae8),uVar3,0x2000,
                                  auStack_2008,0);
    pcVar2[uVar3] = '\0';
    UtfToWide(pcVar2,param_2,param_3);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


