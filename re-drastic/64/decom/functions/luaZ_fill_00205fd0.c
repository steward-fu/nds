/*
 * Ghidra decompilation
 *
 * Function : luaZ_fill
 * Address  : 00205fd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaZ_fill(long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar1 = (byte *)(*(code *)param_1[2])
                             (param_1[4],param_1[3],&local_10,(code *)param_1[2],&__stack_chk_guard,
                              0);
  if ((pbVar1 == (byte *)0x0) || (local_10 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_1 = local_10 + -1;
    param_1[1] = (long)(pbVar1 + 1);
    uVar2 = (ulong)*pbVar1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


