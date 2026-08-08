/*
 * Ghidra decompilation
 *
 * Function : math_frexp
 * Address  : 0812aed0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_frexp(lua_State *L)

{
  lua_Number __x;
  float n;
  int e;
  int local_14;
  
  local_14 = __stack_chk_guard;
  __x = luaL_checknumber(L,1);
  n = frexpf(__x,&e);
  lua_pushnumber(L,n);
  lua_pushinteger(L,e);
  if (local_14 == __stack_chk_guard) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


