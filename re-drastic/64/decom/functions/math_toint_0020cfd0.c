/*
 * Ghidra decompilation
 *
 * Function : math_toint
 * Address  : 0020cfd0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 math_toint(undefined8 param_1)

{
  undefined4 uVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = lua_tointegerx(param_1,1,&local_c,0);
  if (local_c == 0) {
    luaL_checkany(param_1,1);
    lua_pushnil(param_1);
  }
  else {
    lua_pushinteger(param_1,uVar1);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


