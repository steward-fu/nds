/*
 * Ghidra decompilation
 *
 * Function : luaB_pcall
 * Address  : 00209a80
 * Program  : drastic64
 */


undefined8 luaB_pcall(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  luaL_checkany(param_1,1);
  lua_pushboolean(param_1,1);
  lua_rotate(param_1,1);
  iVar1 = lua_gettop(param_1);
  uVar2 = lua_pcallk(param_1,iVar1 + -2,0xffffffff,0,0,finishpcall);
  if (uVar2 < 2) {
    uVar3 = lua_gettop(param_1);
    return uVar3;
  }
  lua_pushboolean(param_1,0);
  lua_pushvalue(param_1,0xfffffffe);
  return 2;
}


