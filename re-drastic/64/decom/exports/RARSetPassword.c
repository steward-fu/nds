/*
 * Ghidra decompilation
 *
 * Function : RARSetPassword
 * Address  : 001b2fc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RARSetPassword(long param_1,char *param_2)

{
  wchar_t awStack_208 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetWideName(param_2,(wchar_t *)0x0,awStack_208,0x80);
  SecPassword::Set((SecPassword *)(param_1 + 0xa02c),awStack_208);
  cleandata(awStack_208,0x200);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


