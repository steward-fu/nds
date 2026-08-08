/*
 * Ghidra decompilation
 *
 * Function : luaB_select
 * Address  : 00208c80
 * Program  : drastic64
 */


int luaB_select(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = lua_gettop();
  iVar3 = lua_type(param_1,1);
  if ((iVar3 == 4) && (pcVar5 = (char *)lua_tolstring(param_1,1,0), *pcVar5 == '#')) {
    lua_pushinteger(param_1,iVar2 + -1);
    return 1;
  }
  iVar4 = luaL_checkinteger(param_1,1);
  iVar3 = iVar2;
  if (iVar4 < iVar2) {
    iVar3 = iVar4;
  }
  iVar1 = iVar2 + iVar4;
  if (-1 < iVar4) {
    iVar1 = iVar3;
  }
  if (iVar1 < 1) {
    luaL_argerror(param_1,1,"index out of range");
  }
  return iVar2 - iVar1;
}


