/*
 * Ghidra decompilation
 *
 * Function : luaL_newmetatable
 * Address  : 08125470
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_newmetatable(lua_State *L,char *tname)

{
  int iVar1;
  
  iVar1 = lua_getfield(L,-0xf4628,tname);
  if (iVar1 == 0) {
    lua_settop(L,-2);
    lua_createtable(L,0,0);
    lua_pushstring(L,tname);
    lua_setfield(L,-2,"__name");
    lua_pushvalue(L,-1);
    lua_setfield(L,-0xf4628,tname);
  }
  return (uint)(iVar1 == 0);
}


