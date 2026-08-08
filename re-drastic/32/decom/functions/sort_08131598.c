/*
 * Ghidra decompilation
 *
 * Function : sort
 * Address  : 08131598
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int sort(lua_State *L)

{
  int iVar1;
  int iVar2;
  lua_Integer u;
  int n;
  TabA ta;
  
  iVar1 = __stack_chk_guard;
  ta.geti = (_func_int_lua_State_ptr_int_lua_Integer *)0x0;
  ta.seti = (_func_void_lua_State_ptr_int_lua_Integer *)0x0;
  iVar2 = lua_getmetatable(L,1);
  if (iVar2 != 0) {
    lua_pushlstring(L,"__index",7);
    iVar2 = lua_rawget(L,-2);
    if (iVar2 != 0) {
      ta.geti = lua_geti;
    }
    lua_pushlstring(L,"__newindex",10);
    iVar2 = lua_rawget(L,-3);
    if (iVar2 != 0) {
      ta.seti = lua_seti;
    }
    lua_settop(L,-4);
  }
  if ((ta.geti == (_func_int_lua_State_ptr_int_lua_Integer *)0x0) ||
     (ta.seti == (_func_void_lua_State_ptr_int_lua_Integer *)0x0)) {
    luaL_checktype(L,1,5);
    if (ta.geti == (_func_int_lua_State_ptr_int_lua_Integer *)0x0) {
      ta.geti = lua_rawgeti;
    }
    if (ta.seti == (_func_void_lua_State_ptr_int_lua_Integer *)0x0) {
      ta.seti = lua_rawseti;
    }
  }
  u = luaL_len(L,1);
  luaL_checkstack(L,0x32,"");
  iVar2 = lua_type(L,2);
  if (0 < iVar2) {
    luaL_checktype(L,2,6);
  }
  lua_settop(L,2);
  auxsort(L,&ta,1,u);
  if (iVar1 == __stack_chk_guard) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


