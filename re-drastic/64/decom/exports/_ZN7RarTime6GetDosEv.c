/*
 * Ghidra decompilation
 *
 * Function : _ZN7RarTime6GetDosEv
 * Address  : 001c28b0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RarTime::GetDos() */

void RarTime::GetDos(void)

{
  long *in_x0;
  tm *ptVar1;
  ulong local_10;
  long local_8;
  
  local_10 = (*in_x0 + 0xfe624e212ac18000U) / 10000000;
  local_8 = ___stack_chk_guard;
  ptVar1 = localtime((time_t *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ptVar1->tm_min << 5 | (uint)ptVar1->tm_sec >> 1 |
                   ptVar1->tm_mday << 0x10 | ptVar1->tm_hour << 0xb |
                   (ptVar1->tm_mon + 1) * 0x200000 | (ptVar1->tm_year + -0x50) * 0x2000000);
}


