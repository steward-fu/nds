/*
 * Ghidra decompilation
 *
 * Function : luaL_checknumber
 * Address  : 00207450
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_checknumber(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = lua_tonumberx(param_1,param_2,&local_c,0);
  if (local_c == 0) {
    uVar1 = lua_typename(param_1,3);
    typeerror(param_1,param_2 & 0xffffffff,uVar1);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_8 - ___stack_chk_guard,0);
}


