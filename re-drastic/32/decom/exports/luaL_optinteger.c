/*
 * Ghidra decompilation
 *
 * Function : luaL_optinteger
 * Address  : 08125c78
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaL_optinteger(lua_State *L,int arg,lua_Integer def)

{
  int iVar1;
  lua_Integer d;
  char *tname;
  int isnum;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  iVar1 = lua_type(L,arg);
  if ((0 < iVar1) && (def = lua_tointegerx(L,arg,&isnum), isnum == 0)) {
    iVar1 = lua_isnumber(L,arg);
    if (iVar1 == 0) {
      tname = lua_typename(L,3);
      typeerror(L,arg,tname);
    }
    else {
      luaL_argerror(L,arg,"number has no integer representation");
    }
  }
  if (local_1c == __stack_chk_guard) {
    return def;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


