/*
 * Ghidra decompilation
 *
 * Function : synchronize
 * Address  : 080a7dd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void synchronize(void)

{
  int iVar1;
  uint uVar2;
  s32 delay;
  timeval current_time;
  
  uVar2 = (uint)synchronize::last_ticks;
  iVar1 = __stack_chk_guard;
  if (((uint)synchronize::last_ticks | synchronize::last_ticks._4_4_) != 0) {
    gettimeofday((timeval *)&current_time,(__timezone_ptr_t)0x0);
    uVar2 = (uVar2 + 14000) - (current_time.tv_usec + current_time.tv_sec * 1000000);
    gettimeofday((timeval *)&current_time,(__timezone_ptr_t)0x0);
    if (0 < (int)uVar2) {
      SDL_Delay(uVar2 / 1000);
    }
    gettimeofday((timeval *)&current_time,(__timezone_ptr_t)0x0);
  }
  gettimeofday((timeval *)&current_time,(__timezone_ptr_t)0x0);
  uVar2 = current_time.tv_sec * 1000000;
  synchronize::last_ticks._0_4_ = current_time.tv_usec + uVar2;
  synchronize::last_ticks._4_4_ =
       (current_time.tv_usec >> 0x1f) + ((int)uVar2 >> 0x1f) +
       (uint)CARRY4(current_time.tv_usec,uVar2);
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


