/*
 * Ghidra decompilation
 *
 * Function : checktab
 * Address  : 081308e0
 * Program  : drastic
 */


void checktab(lua_State *L,int arg,TabA *ta)

{
  int iVar1;
  
  *(undefined4 *)arg = 0;
  *(undefined4 *)(arg + 4) = 0;
  iVar1 = lua_getmetatable(L,1);
  if (iVar1 != 0) {
    lua_pushlstring(L,"__index",7);
    iVar1 = lua_rawget(L,-2);
    if (iVar1 != 0) {
      *(code **)arg = lua_geti;
    }
    lua_pushlstring(L,"__newindex",10);
    iVar1 = lua_rawget(L,-3);
    if (iVar1 != 0) {
      *(code **)(arg + 4) = lua_seti;
    }
    lua_settop(L,-4);
  }
  if ((*(int *)arg == 0) || (*(int *)(arg + 4) == 0)) {
    luaL_checktype(L,1,5);
    if (*(int *)arg == 0) {
      *(code **)arg = lua_rawgeti;
    }
    if (*(int *)(arg + 4) == 0) {
      *(code **)(arg + 4) = lua_rawseti;
    }
  }
  return;
}


