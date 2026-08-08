/*
 * Ghidra decompilation
 *
 * Function : FUN_0020816c
 * Address  : 0020816c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020816c(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcStack_18;
  size_t sStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  sStack_10 = strlen(param_2);
  pcStack_18 = param_2;
  uVar1 = lua_load(param_1,getS,&pcStack_18,param_2,0);
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,lStack_8 - ___stack_chk_guard,0);
}


