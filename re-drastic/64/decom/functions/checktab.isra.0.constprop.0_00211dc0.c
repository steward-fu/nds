/*
 * Ghidra decompilation
 *
 * Function : checktab.isra.0.constprop.0
 * Address  : 00211dc0
 * Program  : drastic64
 */


void checktab_isra_0_constprop_0(undefined8 param_1,code **param_2,code **param_3)

{
  int iVar1;
  
  *param_2 = (code *)0x0;
  *param_3 = (code *)0x0;
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 != 0) {
    lua_pushlstring(param_1,"__index",7);
    iVar1 = lua_rawget(param_1,0xfffffffe);
    if (iVar1 != 0) {
      *param_2 = lua_geti;
    }
    lua_pushlstring(param_1,"__newindex",10);
    iVar1 = lua_rawget(param_1,0xfffffffd);
    if (iVar1 != 0) {
      *param_3 = lua_seti;
    }
    lua_settop(param_1,0xfffffffc);
  }
  if ((*param_2 == (code *)0x0) || (*param_3 == (code *)0x0)) {
    luaL_checktype(param_1,1,5);
    if (*param_2 == (code *)0x0) {
      *param_2 = lua_rawgeti;
    }
    if (*param_3 == (code *)0x0) {
      *param_3 = lua_rawseti;
      return;
    }
  }
  return;
}


