/*
 * Ghidra decompilation
 *
 * Function : luaL_callmeta
 * Address  : 08126a20
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_callmeta(lua_State *L,int obj,char *event)

{
  int objindex;
  int iVar1;
  int tt;
  
  objindex = lua_absindex(L,obj);
  iVar1 = lua_getmetatable(L,objindex);
  if (iVar1 != 0) {
    lua_pushstring(L,event);
    iVar1 = lua_rawget(L,-2);
    if (iVar1 != 0) {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
      lua_pushvalue(L,objindex);
      lua_callk(L,1,1,0,(lua_KFunction)0x0);
      return 1;
    }
    lua_settop(L,-3);
  }
  return 0;
}


