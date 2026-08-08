/*
 * Ghidra decompilation
 *
 * Function : io_noclose
 * Address  : 08128f44
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int io_noclose(lua_State *L)

{
  void *pvVar1;
  LStream *p;
  
  pvVar1 = luaL_checkudata(L,1,"FILE*");
  *(code **)((int)pvVar1 + 4) = io_noclose;
  lua_pushnil(L);
  lua_pushlstring(L,"cannot close standard file",0x1a);
  return 2;
}


