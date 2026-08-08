/*
 * Ghidra decompilation
 *
 * Function : str_dump
 * Address  : 0812c230
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int str_dump(lua_State *L)

{
  int iVar1;
  int iVar2;
  int strip;
  luaL_Buffer b;
  
  iVar1 = __stack_chk_guard;
  iVar2 = lua_toboolean(L,2);
  luaL_checktype(L,1,6);
  lua_settop(L,1);
  luaL_buffinit(L,&b);
  iVar2 = lua_dump(L,writer,&b,iVar2);
  if (iVar2 == 0) {
    luaL_pushresult(&b);
    iVar2 = 1;
  }
  else {
    iVar2 = luaL_error(L,"unable to dump given function");
  }
  if (iVar1 == __stack_chk_guard) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


