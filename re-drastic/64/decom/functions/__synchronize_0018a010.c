/*
 * Ghidra decompilation
 *
 * Function : __synchronize
 * Address  : 0018a010
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __synchronize(void)

{
  uint uVar1;
  long lVar2;
  timeval local_18;
  long local_8;
  
  lVar2 = last_ticks_37385;
  local_8 = ___stack_chk_guard;
  if (last_ticks_37385 != 0) {
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    uVar1 = ((int)lVar2 + 14000) - ((int)local_18.tv_usec + (int)local_18.tv_sec * 1000000);
    gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    if ((int)uVar1 < 1) {
      gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    }
    else {
      SDL_Delay((ulong)uVar1 / 1000);
      gettimeofday(&local_18,(__timezone_ptr_t)0x0);
    }
  }
  gettimeofday(&local_18,(__timezone_ptr_t)0x0);
  last_ticks_37385 = local_18.tv_usec + local_18.tv_sec * 1000000;
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


