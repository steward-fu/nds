/*
 * Ghidra decompilation
 *
 * Function : luaL_len
 * Address  : 08126ae8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaL_len(lua_State *L,int idx)

{
  lua_Integer lVar1;
  lua_Integer l;
  int isnum;
  int local_14;
  
  local_14 = __stack_chk_guard;
  lua_len(L,idx);
  lVar1 = lua_tointegerx(L,-1,&isnum);
  if (isnum == 0) {
    luaL_error(L,"object length is not an integer");
  }
  lua_settop(L,-2);
  if (local_14 == __stack_chk_guard) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


