/*
 * Ghidra decompilation
 *
 * Function : luaB_xpcall
 * Address  : 00209620
 * Program  : drastic64
 */


int luaB_xpcall(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = lua_gettop();
  luaL_checktype(param_1,2,6);
  lua_pushboolean(param_1,1);
  lua_pushvalue(param_1,1);
  lua_rotate(param_1,3,2);
  uVar2 = lua_pcallk(param_1,iVar1 + -2,0xffffffff,2,2,finishpcall);
  if (uVar2 < 2) {
    iVar1 = lua_gettop(param_1);
    return iVar1 + -2;
  }
  lua_pushboolean(param_1,0);
  lua_pushvalue(param_1,0xfffffffe);
  return 2;
}


