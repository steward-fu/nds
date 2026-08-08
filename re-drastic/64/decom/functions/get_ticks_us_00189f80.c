/*
 * Ghidra decompilation
 *
 * Function : get_ticks_us
 * Address  : 00189f80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_ticks_us(long *param_1)

{
  bool bVar1;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  gettimeofday(&local_18,(__timezone_ptr_t)0x0);
  bVar1 = local_8 == ___stack_chk_guard;
  *param_1 = local_18.tv_usec + local_18.tv_sec * 1000000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


