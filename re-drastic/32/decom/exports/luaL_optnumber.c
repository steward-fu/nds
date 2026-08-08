/*
 * Ghidra decompilation
 *
 * Function : luaL_optnumber
 * Address  : 08125b14
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

lua_Number luaL_optnumber(lua_State *L,int arg,lua_Number def)

{
  int iVar1;
  char *tname;
  lua_Number d;
  int isnum;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  iVar1 = lua_type(L,arg);
  if ((0 < iVar1) && (def = lua_tonumberx(L,arg,&isnum), isnum == 0)) {
    tname = lua_typename(L,3);
    typeerror(L,arg,tname);
  }
  if (local_1c == __stack_chk_guard) {
    return def;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


