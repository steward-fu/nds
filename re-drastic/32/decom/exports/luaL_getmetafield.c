/*
 * Ghidra decompilation
 *
 * Function : luaL_getmetafield
 * Address  : 08126998
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaL_getmetafield(lua_State *L,int obj,char *event)

{
  int iVar1;
  int tt;
  
  iVar1 = lua_getmetatable(L,obj);
  if (iVar1 != 0) {
    lua_pushstring(L,event);
    iVar1 = lua_rawget(L,-2);
    if (iVar1 == 0) {
      lua_settop(L,-3);
    }
    else {
      lua_rotate(L,-2,-1);
      lua_settop(L,-2);
    }
  }
  return iVar1;
}


