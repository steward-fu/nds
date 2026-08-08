/*
 * Ghidra decompilation
 *
 * Function : math_toint
 * Address  : 0812b6ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_toint(lua_State *L)

{
  lua_Integer n_00;
  lua_Integer n;
  int valid;
  int local_14;
  
  local_14 = __stack_chk_guard;
  n_00 = lua_tointegerx(L,1,&valid);
  if (valid == 0) {
    luaL_checkany(L,1);
    lua_pushnil(L);
  }
  else {
    lua_pushinteger(L,n_00);
  }
  if (local_14 == __stack_chk_guard) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


