/*
 * Ghidra decompilation
 *
 * Function : luaL_checknumber
 * Address  : 08125a8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Number luaL_checknumber(lua_State *L,int arg)

{
  char *tname;
  lua_Number lVar1;
  lua_Number d;
  int isnum;
  int local_14;
  
  local_14 = __stack_chk_guard;
  lVar1 = lua_tonumberx(L,arg,&isnum);
  if (isnum == 0) {
    tname = lua_typename(L,3);
    typeerror(L,arg,tname);
  }
  if (local_14 == __stack_chk_guard) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


