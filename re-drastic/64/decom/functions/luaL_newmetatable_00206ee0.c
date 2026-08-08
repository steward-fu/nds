/*
 * Ghidra decompilation
 *
 * Function : luaL_newmetatable
 * Address  : 00206ee0
 * Program  : drastic64
 */


undefined8 luaL_newmetatable(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = lua_getfield(param_1,0xfff0b9d8,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  lua_settop(param_1,0xfffffffe);
  lua_createtable(param_1,0,0);
  lua_pushstring(param_1,param_2);
  lua_setfield(param_1,0xfffffffe,"__name");
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,0xfff0b9d8,param_2);
  return 1;
}


