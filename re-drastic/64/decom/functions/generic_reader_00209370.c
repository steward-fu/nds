/*
 * Ghidra decompilation
 *
 * Function : generic_reader
 * Address  : 00209370
 * Program  : drastic64
 */


undefined8 generic_reader(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  luaL_checkstack(param_1,2,"too many nested functions");
  lua_pushvalue(param_1,1);
  lua_callk(param_1,0,1,0,0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 0) {
    iVar1 = lua_isstring(param_1,0xffffffff);
    if (iVar1 == 0) {
      luaL_error(param_1,"reader function must return a string");
    }
    lua_copy(param_1,0xffffffff,5);
    lua_settop(param_1,0xfffffffe);
    uVar2 = lua_tolstring(param_1,5,param_3);
    return uVar2;
  }
  lua_settop(param_1,0xfffffffe);
  *param_3 = 0;
  return 0;
}


