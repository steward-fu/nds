/*
 * Ghidra decompilation
 *
 * Function : GetFreeDisk
 * Address  : 001b8f00
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetFreeDisk(wchar_t const*) */

long GetFreeDisk(wchar_t *param_1)

{
  char *__file;
  int iVar1;
  long lVar2;
  statvfs64 local_2878;
  wchar_t awStack_2808 [2048];
  char local_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFilePath(param_1,awStack_2808,0x800);
  WideToChar(awStack_2808,local_808,0x800);
  __file = ".";
  if (local_808[0] != '\0') {
    __file = local_808;
  }
  iVar1 = statvfs64(__file,&local_2878);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = local_2878.f_bsize * local_2878.f_bavail;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,lVar2,0);
}


