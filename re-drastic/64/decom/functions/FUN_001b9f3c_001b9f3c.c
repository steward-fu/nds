/*
 * Ghidra decompilation
 *
 * Function : FUN_001b9f3c
 * Address  : 001b9f3c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b9f3c(long param_1)

{
  char cVar1;
  longlong lStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = QuickOpen::Tell((QuickOpen *)(param_1 + 0x7630),&lStack_10);
  if (cVar1 == '\0') {
    lStack_10 = File::Tell();
  }
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lStack_10,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


