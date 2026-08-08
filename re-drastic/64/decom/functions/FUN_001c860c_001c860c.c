/*
 * Ghidra decompilation
 *
 * Function : FUN_001c860c
 * Address  : 001c860c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c860c(void)

{
  undefined auStack_128 [32];
  undefined auStack_108 [256];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cleandata(auStack_128,0x20);
  cleandata(auStack_108,0x100);
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lStack_8 - ___stack_chk_guard,0);
}


