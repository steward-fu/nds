/*
 * Ghidra decompilation
 *
 * Function : math_frexp
 * Address  : 0020c660
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 math_frexp(undefined8 param_1)

{
  float __x;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __x = (float)luaL_checknumber(param_1,1,0);
  frexpf(__x,&local_c);
  lua_pushnumber(param_1);
  lua_pushinteger(param_1,local_c);
  if (local_8 - ___stack_chk_guard == 0) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


