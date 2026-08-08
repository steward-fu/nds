/*
 * Ghidra decompilation
 *
 * Function : SetCurrentTime
 * Address  : 001c2e90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RarTime::SetCurrentTime() */

void RarTime::SetCurrentTime(void)

{
  bool bVar1;
  long *in_x0;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  time(&local_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *in_x0 = local_10 * 10000000 + 0x19db1ded53e8000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


