/*
 * Ghidra decompilation
 *
 * Function : luaB_dofile
 * Address  : 00209990
 * Program  : drastic64
 */


ulong luaB_dofile(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = luaL_optlstring(param_1,1,0,0);
  lua_settop(param_1,1);
  iVar1 = luaL_loadfilex(param_1,uVar2,0);
  if (iVar1 == 0) {
    lua_callk(param_1,0,0xffffffff,0,dofilecont);
    iVar1 = lua_gettop(param_1);
    return (ulong)(iVar1 - 1);
  }
  uVar3 = lua_error(param_1);
  return uVar3;
}


