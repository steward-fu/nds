/*
 * Ghidra decompilation
 *
 * Function : luaK_intK
 * Address  : 00215f20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaK_intK(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long local_28;
  undefined4 local_20;
  int local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_28 = (long)param_2;
  local_8 = ___stack_chk_guard;
  local_20 = 2;
  local_10 = 0x13;
  local_18[0] = param_2;
  uVar1 = addk(param_1,&local_28,local_18);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_8 - ___stack_chk_guard,0);
}


