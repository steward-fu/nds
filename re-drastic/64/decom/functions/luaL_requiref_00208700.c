/*
 * Ghidra decompilation
 *
 * Function : luaL_requiref
 * Address  : 00208700
 * Program  : drastic64
 */


void luaL_requiref(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_getfield(param_1,0xfff0b9d8,"_LOADED");
  if (iVar1 != 5) {
    lua_settop(param_1,0xfffffffe);
    uVar2 = lua_absindex(param_1,0xfff0b9d8);
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,uVar2,"_LOADED");
  }
  lua_getfield(param_1,0xffffffff,param_2);
  iVar1 = lua_toboolean(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_pushcclosure(param_1,param_3,0);
    lua_pushstring(param_1,param_2);
    lua_callk(param_1,1,1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffd,param_2);
    lua_rotate(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffe);
  }
  else {
    lua_rotate(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffe);
  }
  if (param_4 == 0) {
    return;
  }
  lua_pushvalue(param_1,0xffffffff);
  lua_setglobal(param_1,param_2);
  return;
}


