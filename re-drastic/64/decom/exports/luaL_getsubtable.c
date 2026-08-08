/*
 * Ghidra decompilation
 *
 * Function : luaL_getsubtable
 * Address  : 00208660
 * Program  : drastic64
 */


undefined8 luaL_getsubtable(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_getfield();
  if (iVar1 == 5) {
    return 1;
  }
  lua_settop(param_1,0xfffffffe);
  uVar2 = lua_absindex(param_1,param_2);
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,0xffffffff);
  lua_setfield(param_1,uVar2,param_3);
  return 0;
}


