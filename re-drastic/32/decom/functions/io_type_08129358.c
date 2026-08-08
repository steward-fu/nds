/*
 * Ghidra decompilation
 *
 * Function : io_type
 * Address  : 08129358
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_type(lua_State *L)

{
  void *pvVar1;
  LStream *p;
  
  luaL_checkany(L,1);
  pvVar1 = luaL_testudata(L,1,"FILE*");
  if (pvVar1 == (void *)0x0) {
    lua_pushnil(L);
  }
  else if (*(int *)((int)pvVar1 + 4) == 0) {
    lua_pushlstring(L,"closed file",0xb);
  }
  else {
    lua_pushlstring(L,"file",4);
  }
  return 1;
}


