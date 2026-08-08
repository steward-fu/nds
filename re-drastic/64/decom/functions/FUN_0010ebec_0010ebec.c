/*
 * Ghidra decompilation
 *
 * Function : FUN_0010ebec
 * Address  : 0010ebec
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ebec(long param_1)

{
  long lStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  screen_wait_for_vsync(0);
  get_ticks_us(&lStack_10);
  *(long *)(nds_system + param_1 + 0x362e978) = lStack_10 * 3;
  *(undefined8 *)(nds_system + param_1 + 0x362e980) = 0;
  nds_system[param_1 + 0x362e9a1] = 0;
  nds_system[param_1 + 0x362e9a3] = 0;
  *(undefined4 *)(nds_system + param_1 + 0x362e9a4) = 0;
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


