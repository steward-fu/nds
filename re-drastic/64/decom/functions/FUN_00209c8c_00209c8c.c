/*
 * Ghidra decompilation
 *
 * Function : FUN_00209c8c
 * Address  : 00209c8c
 * Program  : drastic64
 */


undefined8 FUN_00209c8c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = luaL_optlstring(param_1,1,0,0);
  uVar3 = luaL_optlstring(param_1,2,0,0);
  iVar1 = lua_type(param_1,3);
  if (iVar1 == -1) {
    iVar1 = luaL_loadfilex(param_1,uVar2,uVar3);
    if (iVar1 != 0) goto LAB_00209d34;
  }
  else {
    iVar1 = luaL_loadfilex(param_1,uVar2,uVar3);
    if (iVar1 != 0) {
LAB_00209d34:
      lua_pushnil(param_1);
      lua_rotate(param_1,0xfffffffe,1);
      return 2;
    }
    lua_pushvalue(param_1,3);
    lVar4 = lua_setupvalue(param_1,0xfffffffe,1);
    if (lVar4 == 0) {
      lua_settop(param_1,0xfffffffe);
    }
  }
  return 1;
}


