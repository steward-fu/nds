/*
 * Ghidra decompilation
 *
 * Function : luaL_optnumber
 * Address  : 002074e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 luaL_optnumber(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = lua_type();
  if ((0 < iVar1) && (param_1 = lua_tonumberx(param_2,param_3,&local_c), local_c == 0)) {
    uVar2 = lua_typename(param_2,3);
    typeerror(param_2,param_3,uVar2);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


