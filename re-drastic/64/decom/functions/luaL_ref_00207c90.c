/*
 * Ghidra decompilation
 *
 * Function : luaL_ref
 * Address  : 00207c90
 * Program  : drastic64
 */


int luaL_ref(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = -1;
    lua_settop(param_1,0xfffffffe);
  }
  else {
    uVar2 = lua_absindex(param_1,param_2);
    lua_rawgeti(param_1,uVar2,0);
    iVar1 = lua_tointegerx(param_1,0xffffffff,0);
    lua_settop(param_1,0xfffffffe);
    if (iVar1 == 0) {
      iVar1 = lua_rawlen(param_1,uVar2);
      iVar1 = iVar1 + 1;
    }
    else {
      lua_rawgeti(param_1,uVar2,iVar1);
      lua_rawseti(param_1,uVar2,0);
    }
    lua_rawseti(param_1,uVar2,iVar1);
  }
  return iVar1;
}


