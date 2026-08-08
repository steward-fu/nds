/*
 * Ghidra decompilation
 *
 * Function : _ZN4File22SetCloseFileTimeByNameEPKwP7RarTimeS3_
 * Address  : 001b7f10
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* File::SetCloseFileTimeByName(wchar_t const*, RarTime*, RarTime*) */

void File::SetCloseFileTimeByName(wchar_t *param_1,RarTime *param_2,RarTime *param_3)

{
  utimbuf local_818;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (RarTime *)0x0) {
    if ((param_3 == (RarTime *)0x0) || (*(long *)param_3 == 0)) goto LAB_001b7f9c;
LAB_001b7f60:
    local_818.modtime = RarTime::GetUnix();
    local_818.actime = RarTime::GetUnix();
  }
  else {
    if ((param_3 != (RarTime *)0x0) && (*(long *)param_3 != 0)) goto LAB_001b7f60;
    if (*(long *)param_2 == 0) goto LAB_001b7f9c;
    local_818.actime = RarTime::GetUnix();
    local_818.modtime = local_818.actime;
  }
  WideToChar(param_1,acStack_808,0x800);
  utime(acStack_808,&local_818);
LAB_001b7f9c:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


