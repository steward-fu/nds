/*
 * Ghidra decompilation
 *
 * Function : luaL_requiref
 * Address  : 08126ed0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void luaL_requiref(lua_State *L,char *modname,lua_CFunction openf,int glb)

{
  int iVar1;
  
  iVar1 = lua_getfield(L,-0xf4628,"_LOADED");
  if (iVar1 != 5) {
    lua_settop(L,-2);
    iVar1 = lua_absindex(L,-0xf4628);
    lua_createtable(L,0,0);
    lua_pushvalue(L,-1);
    lua_setfield(L,iVar1,"_LOADED");
  }
  lua_getfield(L,-1,modname);
  iVar1 = lua_toboolean(L,-1);
  if (iVar1 == 0) {
    lua_settop(L,-2);
    lua_pushcclosure(L,openf,0);
    lua_pushstring(L,modname);
    lua_callk(L,1,1,0,(lua_KFunction)0x0);
    lua_pushvalue(L,-1);
    lua_setfield(L,-3,modname);
  }
  lua_rotate(L,-2,-1);
  lua_settop(L,-2);
  if (glb == 0) {
    return;
  }
  lua_pushvalue(L,-1);
  lua_setglobal(L,modname);
  return;
}


