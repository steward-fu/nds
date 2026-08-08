/*
 * Ghidra decompilation
 *
 * Function : luaL_getmetafield
 * Address  : 002081f0
 * Program  : drastic64
 */


int luaL_getmetafield(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = lua_getmetatable();
  if (iVar1 == 0) {
    return 0;
  }
  lua_pushstring(param_1,param_3);
  iVar1 = lua_rawget(param_1,0xfffffffe);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffd);
    return 0;
  }
  lua_rotate(param_1,0xfffffffe,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  return iVar1;
}


