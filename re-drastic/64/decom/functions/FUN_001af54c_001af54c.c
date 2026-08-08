/*
 * Ghidra decompilation
 *
 * Function : FUN_001af54c
 * Address  : 001af54c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001af54c(code **param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_3 != 0) {
    do {
      lStack_10 = param_3;
      uVar1 = (**param_1)(param_1,param_2,&lStack_10);
      if ((int)uVar1 != 0) goto LAB_001af5cc;
      if (lStack_10 == 0) {
        uVar1 = (ulong)param_4;
        goto LAB_001af5cc;
      }
      param_2 = param_2 + lStack_10;
      param_3 = param_3 - lStack_10;
    } while (param_3 != 0);
  }
  uVar1 = 0;
LAB_001af5cc:
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,lStack_8 - ___stack_chk_guard,0);
  }
  return;
}


