/*
 * Ghidra decompilation
 *
 * Function : FUN_001f59dc
 * Address  : 001f59dc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f59dc(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uStack_8 = ___stack_chk_guard;
  if (param_2[2] == 3) {
    uStack_c = *param_2;
  }
  else {
    iVar1 = luaV_tonumber_(param_2,&uStack_c);
    if (iVar1 == 0) {
      param_3 = param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  luaG_typeerror(param_1,param_3,param_4);
}


