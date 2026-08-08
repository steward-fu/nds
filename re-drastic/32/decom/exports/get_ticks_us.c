/*
 * Ghidra decompilation
 *
 * Function : get_ticks_us
 * Address  : 080a7d50
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void get_ticks_us(u64 *ticks_return)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  timeval current_time;
  
  iVar1 = __stack_chk_guard;
  gettimeofday((timeval *)&current_time,(__timezone_ptr_t)0x0);
  uVar2 = current_time.tv_sec * 1000000;
  bVar3 = iVar1 == __stack_chk_guard;
  *(uint *)ticks_return = current_time.tv_usec + uVar2;
  *(uint *)((int)ticks_return + 4) =
       (current_time.tv_usec >> 0x1f) + ((int)uVar2 >> 0x1f) +
       (uint)CARRY4(current_time.tv_usec,uVar2);
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


