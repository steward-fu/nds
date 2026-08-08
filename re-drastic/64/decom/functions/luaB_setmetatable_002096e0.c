/*
 * Ghidra decompilation
 *
 * Function : luaB_setmetatable
 * Address  : 002096e0
 * Program  : drastic64
 */


undefined8 luaB_setmetatable(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_type(param_1,2);
  luaL_checktype(param_1,1,5);
  if (iVar1 != 0 && iVar1 != 5) {
    luaL_argerror(param_1,2,"nil or table expected");
  }
  iVar1 = luaL_getmetafield(param_1,1,"__metatable");
  if (iVar1 == 0) {
    lua_settop(param_1,2);
    lua_setmetatable(param_1,1);
    return 1;
  }
  uVar2 = luaL_error(param_1,"cannot change a protected metatable");
  return uVar2;
}


