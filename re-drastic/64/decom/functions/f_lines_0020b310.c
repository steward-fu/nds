/*
 * Ghidra decompilation
 *
 * Function : f_lines
 * Address  : 0020b310
 * Program  : drastic64
 */


undefined8 f_lines(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = luaL_checkudata(param_1,1,"FILE*");
  if (*(long *)(lVar2 + 8) == 0) {
    luaL_error(param_1,"attempt to use a closed file");
  }
  iVar1 = lua_gettop(param_1);
  lua_pushinteger(param_1,iVar1 + -1);
  lua_pushboolean(param_1,0);
  lua_rotate(param_1,2);
  lua_pushcclosure(param_1,io_readline,iVar1 + 2);
  return 1;
}


