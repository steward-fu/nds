/*
 * Ghidra decompilation
 *
 * Function : luaL_checkinteger
 * Address  : 08125bc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Integer luaL_checkinteger(lua_State *L,int arg)

{
  lua_Integer lVar1;
  lua_Integer d;
  int iVar2;
  char *tname;
  int isnum;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  lVar1 = lua_tointegerx(L,arg,&isnum);
  if (isnum == 0) {
    iVar2 = lua_isnumber(L,arg);
    if (iVar2 == 0) {
      tname = lua_typename(L,3);
      typeerror(L,arg,tname);
    }
    else {
      luaL_argerror(L,arg,"number has no integer representation");
    }
  }
  if (local_1c == __stack_chk_guard) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


