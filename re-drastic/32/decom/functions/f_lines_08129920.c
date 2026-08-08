/*
 * Ghidra decompilation
 *
 * Function : f_lines
 * Address  : 08129920
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int f_lines(lua_State *L)

{
  void *pvVar1;
  LStream *p;
  int iVar2;
  
  pvVar1 = luaL_checkudata(L,1,"FILE*");
  if (*(int *)((int)pvVar1 + 4) == 0) {
    luaL_error(L,"attempt to use a closed file");
  }
  iVar2 = lua_gettop(L);
  lua_pushinteger(L,iVar2 + -1);
  lua_pushboolean(L,0);
  lua_rotate(L,2,2);
  lua_pushcclosure(L,io_readline,iVar2 + 2);
  return 1;
}


